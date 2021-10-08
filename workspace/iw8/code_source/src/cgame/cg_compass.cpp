/*
==============
CG_Compass_CalcElevationForLocalPlayerPosition
==============
*/

CompassEnemyElevation __fastcall CG_Compass_CalcElevationForLocalPlayerPosition(const vec3_t *localPlayerPosition, const vec3_t *worldPosition)
{
  return ?CG_Compass_CalcElevationForLocalPlayerPosition@@YA?AW4CompassEnemyElevation@@AEBTvec3_t@@0@Z(localPlayerPosition, worldPosition);
}

/*
==============
CgCompassSystem::GetCurrentCompassZoomLevel
==============
*/

double __fastcall CgCompassSystem::GetCurrentCompassZoomLevel(CgCompassSystem *this)
{
  double result; 

  *(float *)&result = ?GetCurrentCompassZoomLevel@CgCompassSystem@@QEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystem::SetCurrentCompassDisplayType
==============
*/

void __fastcall CgCompassSystem::SetCurrentCompassDisplayType(CgCompassSystem *this, CompassDisplay compassType)
{
  ?SetCurrentCompassDisplayType@CgCompassSystem@@QEAAXW4CompassDisplay@@@Z(this, compassType);
}

/*
==============
CgCompassSystem::UpdateTurretInfoCommon
==============
*/

void __fastcall CgCompassSystem::UpdateTurretInfoCommon(CgCompassSystem *this, CompassTurret *turretInfo, LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?UpdateTurretInfoCommon@CgCompassSystem@@IEAAXPEAUCompassTurret@@W4LocalClientNum_t@@PEBUcentity_t@@@Z(this, turretInfo, localClientNum, cent);
}

/*
==============
CgCompassSystem::UpdatePlayerOrientation
==============
*/

void __fastcall CgCompassSystem::UpdatePlayerOrientation(CgCompassSystem *this, const playerState_s *const ps)
{
  ?UpdatePlayerOrientation@CgCompassSystem@@QEAAXQEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgCompassSystem::SetCurrentCompassType
==============
*/

void __fastcall CgCompassSystem::SetCurrentCompassType(CgCompassSystem *this, CompassType compassType)
{
  ?SetCurrentCompassType@CgCompassSystem@@QEAAXW4CompassType@@@Z(this, compassType);
}

/*
==============
CgCompassSystem::SetMinimapRotationEnabled
==============
*/

void __fastcall CgCompassSystem::SetMinimapRotationEnabled(CgCompassSystem *this, bool value)
{
  ?SetMinimapRotationEnabled@CgCompassSystem@@QEAAX_N@Z(this, value);
}

/*
==============
CgCompassSystem::setTacmapMapRectangle
==============
*/

void __fastcall CgCompassSystem::setTacmapMapRectangle(CgCompassSystem *this, rectDef_s *rect)
{
  ?setTacmapMapRectangle@CgCompassSystem@@QEAAXUrectDef_s@@@Z(this, rect);
}

/*
==============
CgCompassSystem::SetCurrentCompassZoomLevel
==============
*/

void __fastcall CgCompassSystem::SetCurrentCompassZoomLevel(CgCompassSystem *this, const float zoomLevel)
{
  ?SetCurrentCompassZoomLevel@CgCompassSystem@@QEAAXM@Z(this, zoomLevel);
}

/*
==============
CgCompassSystem::GetObjectiveFade
==============
*/

double __fastcall CgCompassSystem::GetObjectiveFade(CgCompassSystem *this, const rectDef_s *clipRect, float x, float y, float width, float height)
{
  double result; 

  *(float *)&result = ?GetObjectiveFade@CgCompassSystem@@IEBAMPEBUrectDef_s@@MMMM@Z(this, clipRect, x, y, width, height);
  return result;
}

/*
==============
CgCompassSystem::DrawPlayerNumber
==============
*/

void __fastcall CgCompassSystem::DrawPlayerNumber(CgCompassSystem *this, int clientNum, float centerX, float centerY, float angle, int team, bool hasObjective, bool largeMap, vec4_t *fontColor, const CgStatic *cgStatic, LUIElement *element, lua_State *luaVM)
{
  ?DrawPlayerNumber@CgCompassSystem@@QEBAXHMMMH_N0Tvec4_t@@PEBVCgStatic@@PEAULUIElement@@PEAUlua_State@@@Z(this, clientNum, centerX, centerY, angle, team, hasObjective, largeMap, fontColor, cgStatic, element, luaVM);
}

/*
==============
CgCompassSystem::AddContinuousPingInfo
==============
*/

void __fastcall CgCompassSystem::AddContinuousPingInfo(CgCompassSystem *this, const centity_t *cent, const vec3_t *origin)
{
  ?AddContinuousPingInfo@CgCompassSystem@@QEAAXPEBUcentity_t@@AEBTvec3_t@@@Z(this, cent, origin);
}

/*
==============
CG_CompassCalcDimensions
==============
*/

void __fastcall CG_CompassCalcDimensions(CompassType compassType, const cg_t *cgameGlob, const rectDef_s *parentRect, const rectDef_s *rect, float *x, float *y, float *w, float *h)
{
  ?CG_CompassCalcDimensions@@YAXW4CompassType@@PEBVcg_t@@PEBUrectDef_s@@2PEAM333@Z(compassType, cgameGlob, parentRect, rect, x, y, w, h);
}

/*
==============
CG_CompassPartialToWorld
==============
*/

void __fastcall CG_CompassPartialToWorld(const cg_t *cgameGlob, const float compassMapRange, const vec2_t *compassPosition, const vec2_t *yawVector, vec2_t *outWorldPosition, vec2_t *outWorldScale)
{
  ?CG_CompassPartialToWorld@@YAXPEBVcg_t@@MAEBTvec2_t@@1AEAT2@2@Z(cgameGlob, compassMapRange, compassPosition, yawVector, outWorldPosition, outWorldScale);
}

/*
==============
CgCompassSystem::~CgCompassSystem
==============
*/

void __fastcall CgCompassSystem::~CgCompassSystem(CgCompassSystem *this)
{
  ??1CgCompassSystem@@MEAA@XZ(this);
}

/*
==============
CgCompassSystem::DrawPlayerMapLocationSelector
==============
*/

void __fastcall CgCompassSystem::DrawPlayerMapLocationSelector(CgCompassSystem *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, Material *material, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawPlayerMapLocationSelector@CgCompassSystem@@QEBAXW4CompassType@@PEBUrectDef_s@@1PEAUMaterial@@AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, parentRect, rect, material, color, element, luaVM);
}

/*
==============
CG_BuildCompassDistanceString
==============
*/

void __fastcall CG_BuildCompassDistanceString(float distance, char *result, int resultSize)
{
  ?CG_BuildCompassDistanceString@@YAXMPEADH@Z(distance, result, resultSize);
}

/*
==============
CgCompassSystem::MapRotationFactor
==============
*/

double __fastcall CgCompassSystem::MapRotationFactor(CgCompassSystem *this)
{
  double result; 

  *(float *)&result = ?MapRotationFactor@CgCompassSystem@@UEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystem::SetIsUsingTabletMode
==============
*/

void __fastcall CgCompassSystem::SetIsUsingTabletMode(CgCompassSystem *this, bool usingTabletMode)
{
  ?SetIsUsingTabletMode@CgCompassSystem@@QEAAX_N@Z(this, usingTabletMode);
}

/*
==============
CG_CompassCalcDimensions
==============
*/

void __fastcall CG_CompassCalcDimensions(CompassType compassType, const cg_t *cgameGlob, const rectDef_s *parentRect, const rectDef_s *rect, const vec2_t *compassMapWorldSize, float *x, float *y, float *w, float *h)
{
  ?CG_CompassCalcDimensions@@YAXW4CompassType@@PEBVcg_t@@PEBUrectDef_s@@2AEBTvec2_t@@PEAM444@Z(compassType, cgameGlob, parentRect, rect, compassMapWorldSize, x, y, w, h);
}

/*
==============
CgCompassSystem::GetMinimapStyle
==============
*/

MinimapStyle __fastcall CgCompassSystem::GetMinimapStyle(CgCompassSystem *this)
{
  return ?GetMinimapStyle@CgCompassSystem@@QEBA?AW4MinimapStyle@@XZ(this);
}

/*
==============
CgCompassSystem::ComputeFriendlyCompassColor
==============
*/

void __fastcall CgCompassSystem::ComputeFriendlyCompassColor(CgCompassSystem *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *color)
{
  ?ComputeFriendlyCompassColor@CgCompassSystem@@UEBAXPEBUclientInfo_t@@0AEATvec4_t@@@Z(this, myClientInfo, clientInfo, color);
}

/*
==============
CgCompassSystem::GetPlayerCompassColor
==============
*/

void __fastcall CgCompassSystem::GetPlayerCompassColor(CgCompassSystem *this, vec4_t *color, const cg_t *cgameGlob)
{
  ?GetPlayerCompassColor@CgCompassSystem@@UEBAXAEATvec4_t@@PEBVcg_t@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystem::GetMainHudColor
==============
*/

void __fastcall CgCompassSystem::GetMainHudColor(CgCompassSystem *this, vec4_t *color)
{
  ?GetMainHudColor@CgCompassSystem@@QEBAXAEATvec4_t@@@Z(this, color);
}

/*
==============
CG_Compass_CalcElevation
==============
*/

CompassEnemyElevation __fastcall CG_Compass_CalcElevation(const cg_t *const cgameGlob, const vec3_t *worldPosition)
{
  return ?CG_Compass_CalcElevation@@YA?AW4CompassEnemyElevation@@QEBVcg_t@@AEBTvec3_t@@@Z(cgameGlob, worldPosition);
}

/*
==============
CgCompassSystem::SetMinimapStyle
==============
*/

void __fastcall CgCompassSystem::SetMinimapStyle(CgCompassSystem *this, MinimapStyle newStyle)
{
  ?SetMinimapStyle@CgCompassSystem@@QEAAXW4MinimapStyle@@@Z(this, newStyle);
}

/*
==============
CgCompassSystem::GetPlayerDrawSize
==============
*/

void __fastcall CgCompassSystem::GetPlayerDrawSize(CgCompassSystem *this, CompassType compassType, bool largeMap, float *outHeight, float *outWidth)
{
  ?GetPlayerDrawSize@CgCompassSystem@@QEBAXW4CompassType@@_NAEAM2@Z(this, compassType, largeMap, outHeight, outWidth);
}

/*
==============
CgCompassSystem::DrawPlayerMap
==============
*/

void __fastcall CgCompassSystem::DrawPlayerMap(CgCompassSystem *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, Material *material, const vec4_t *color, GfxImage *mapMask, GfxImage *mapOverlay, GfxImage *mapRotOverlay, LUIElement *element, lua_State *luaVM)
{
  ?DrawPlayerMap@CgCompassSystem@@QEBAXW4CompassType@@_NPEBUrectDef_s@@2PEAUMaterial@@AEBTvec4_t@@PEAUGfxImage@@55PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, material, color, mapMask, mapOverlay, mapRotOverlay, element, luaVM);
}

/*
==============
CG_CalcPlayerPos
==============
*/

void __fastcall CG_CalcPlayerPos(SecureVec3 *out, LocalClientNum_t localClientNum)
{
  ?CG_CalcPlayerPos@@YAXAEAUSecureVec3@@W4LocalClientNum_t@@@Z(out, localClientNum);
}

/*
==============
CgCompassSystem::DrawPlayer
==============
*/

void __fastcall CgCompassSystem::DrawPlayer(CgCompassSystem *this, CompassType compassType, bool cropPartialMap, bool largeMap, bool hasBomb, const GfxImage *objectiveIcon, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, const vec4_t *secondaryColor, const vec4_t *objectiveColor, const vec4_t *objectiveSecondaryColor, const vec4_t *playerNumberColor, const float fadeTime, LUIElement *element, lua_State *luaVM)
{
  ?DrawPlayer@CgCompassSystem@@QEBAXW4CompassType@@_N11PEBUGfxImage@@PEBUrectDef_s@@3MAEBTvec4_t@@4444MPEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, largeMap, hasBomb, objectiveIcon, parentRect, rect, boundsRadius, color, secondaryColor, objectiveColor, objectiveSecondaryColor, playerNumberColor, fadeTime, element, luaVM);
}

/*
==============
CG_CompassFullToWorld
==============
*/

void __fastcall CG_CompassFullToWorld(const cg_t *cgameGlob, const vec2_t *compassPosition, vec2_t *outWorldPosition)
{
  ?CG_CompassFullToWorld@@YAXPEBVcg_t@@AEBTvec2_t@@AEAT2@@Z(cgameGlob, compassPosition, outWorldPosition);
}

/*
==============
CgCompassSystem::GetPlayerAngle
==============
*/

double __fastcall CgCompassSystem::GetPlayerAngle(CgCompassSystem *this, const cg_t *const cgameGlob, const CgGlobalsMP *const cgameGlobMP, const CompassType compassType, const bool cropPartialMap)
{
  double result; 

  *(float *)&result = ?GetPlayerAngle@CgCompassSystem@@IEBAMQEBVcg_t@@QEBVCgGlobalsMP@@W4CompassType@@_N@Z(this, cgameGlob, cgameGlobMP, compassType, cropPartialMap);
  return result;
}

/*
==============
CgCompassSystem::SetTacmapMapCenter
==============
*/

void __fastcall CgCompassSystem::SetTacmapMapCenter(CgCompassSystem *this, vec2_t centerPos)
{
  ?SetTacmapMapCenter@CgCompassSystem@@QEAAXTvec2_t@@@Z(this, centerPos);
}

/*
==============
CgCompassSystem::GetCroppedMapZoom
==============
*/

double __fastcall CgCompassSystem::GetCroppedMapZoom(CgCompassSystem *this)
{
  double result; 

  *(float *)&result = ?GetCroppedMapZoom@CgCompassSystem@@UEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystem::GetTacmapMapCenter
==============
*/

vec2_t __fastcall CgCompassSystem::GetTacmapMapCenter(CgCompassSystem *this)
{
  return ?GetTacmapMapCenter@CgCompassSystem@@QEAA?ATvec2_t@@XZ(this);
}

/*
==============
CgCompassSystem::WorldPosToCompass
==============
*/

bool __fastcall CgCompassSystem::WorldPosToCompass(CgCompassSystem *this, CompassType compassType, bool cropPartialMap, const rectDef_s *mapRect, const float boundsRadius, const vec2_t *compassMapWorldSize, const vec2_t *compassMapUpperLeft, const vec2_t *compassNorth, const vec2_t *north, const vec2_t *playerWorldPos, const vec2_t *in, vec2_t *out, vec2_t *outClipped)
{
  return ?WorldPosToCompass@CgCompassSystem@@QEBA_NW4CompassType@@_NPEBUrectDef_s@@MAEBTvec2_t@@33333PEAT4@4@Z(this, compassType, cropPartialMap, mapRect, boundsRadius, compassMapWorldSize, compassMapUpperLeft, compassNorth, north, playerWorldPos, in, out, outClipped);
}

/*
==============
CgCompassSystem::GetCurrentCompassDisplayType
==============
*/

const CompassDisplay *__fastcall CgCompassSystem::GetCurrentCompassDisplayType(CgCompassSystem *this)
{
  return ?GetCurrentCompassDisplayType@CgCompassSystem@@QEBAAEBW4CompassDisplay@@XZ(this);
}

/*
==============
CgCompassSystem::GetPredictiveLocationInfo
==============
*/

void __fastcall CgCompassSystem::GetPredictiveLocationInfo(CgCompassSystem *this, const float objDist, const float avgMapDimension, const vec2_t *mapPosCurrent, const vec2_t *mapPosPrevious, const vec2_t *outClipped, vec2_t *forwardPoint, vec2_t *positioningDelta)
{
  ?GetPredictiveLocationInfo@CgCompassSystem@@IEBAXMMAEBTvec2_t@@00AEAT2@1@Z(this, objDist, avgMapDimension, mapPosCurrent, mapPosPrevious, outClipped, forwardPoint, positioningDelta);
}

/*
==============
CalcCompassClippedDistanceScale
==============
*/

double __fastcall CalcCompassClippedDistanceScale(const vec2_t *v0, const vec2_t *v1, bool forceCompute)
{
  double result; 

  *(float *)&result = ?CalcCompassClippedDistanceScale@@YAMAEBTvec2_t@@0_N@Z(v0, v1, forceCompute);
  return result;
}

/*
==============
CgCompassSystem::GetCurrentCompassType
==============
*/

CompassType __fastcall CgCompassSystem::GetCurrentCompassType(CgCompassSystem *this)
{
  return ?GetCurrentCompassType@CgCompassSystem@@QEBA?AW4CompassType@@XZ(this);
}

/*
==============
CgCompassSystem::GetIconFadeAlpha
==============
*/

double __fastcall CgCompassSystem::GetIconFadeAlpha(CgCompassSystem *this, const LocalClientNum_t localClientNum, CompassType compassType)
{
  double result; 

  *(float *)&result = ?GetIconFadeAlpha@CgCompassSystem@@QEBAMW4LocalClientNum_t@@W4CompassType@@@Z(this, localClientNum, compassType);
  return result;
}

/*
==============
CgCompassSystem::WorldYawToCompass
==============
*/

void __fastcall CgCompassSystem::WorldYawToCompass(CgCompassSystem *this, CompassType compassType, const cg_t *const cgameGlob, const float in, float *out)
{
  ?WorldYawToCompass@CgCompassSystem@@QEBAXW4CompassType@@QEBVcg_t@@MPEAM@Z(this, compassType, cgameGlob, in, out);
}

/*
==============
CgCompassSystem::WorldPosToCompassPredict
==============
*/

bool __fastcall CgCompassSystem::WorldPosToCompassPredict(CgCompassSystem *this, CompassType compassType, const rectDef_s *mapRect, const float boundsRadius, const vec2_t *north, const vec2_t *playerWorldPos, const vec2_t *in, const vec2_t *prev, vec2_t *out, vec2_t *outClipped)
{
  return ?WorldPosToCompassPredict@CgCompassSystem@@QEBA_NW4CompassType@@PEBUrectDef_s@@MAEBTvec2_t@@222PEAT4@3@Z(this, compassType, mapRect, boundsRadius, north, playerWorldPos, in, prev, out, outClipped);
}

/*
==============
CG_CalcPlayerViewAngles
==============
*/

void __fastcall CG_CalcPlayerViewAngles(vec3_t *out, LocalClientNum_t localClientNum)
{
  ?CG_CalcPlayerViewAngles@@YAXAEATvec3_t@@W4LocalClientNum_t@@@Z(out, localClientNum);
}

/*
==============
CgCompassSystem::MapShouldRotate
==============
*/

bool __fastcall CgCompassSystem::MapShouldRotate(CgCompassSystem *this)
{
  return ?MapShouldRotate@CgCompassSystem@@UEBA_NXZ(this);
}

/*
==============
CgCompassSystem::GetCompassYaw
==============
*/

bool __fastcall CgCompassSystem::GetCompassYaw(CgCompassSystem *this, const CompassType compassType, bool cropPartialMap, const cg_t *const cgameGlob, float *outAngle, vec2_t *outVector)
{
  return ?GetCompassYaw@CgCompassSystem@@QEBA_NW4CompassType@@_NQEBVcg_t@@PEAMAEATvec2_t@@@Z(this, compassType, cropPartialMap, cgameGlob, outAngle, outVector);
}

/*
==============
CgCompassSystem::SetPreventZoom
==============
*/

void __fastcall CgCompassSystem::SetPreventZoom(CgCompassSystem *this, const bool preventZoom)
{
  ?SetPreventZoom@CgCompassSystem@@QEAAX_N@Z(this, preventZoom);
}

/*
==============
CgCompassSystem::MapOffset
==============
*/

vec2_t __fastcall CgCompassSystem::MapOffset(CgCompassSystem *this)
{
  return ?MapOffset@CgCompassSystem@@UEBA?ATvec2_t@@XZ(this);
}

/*
==============
CgCompassSystem::GetIsUsingTabletMode
==============
*/

bool __fastcall CgCompassSystem::GetIsUsingTabletMode(CgCompassSystem *this)
{
  return ?GetIsUsingTabletMode@CgCompassSystem@@QEAA_NXZ(this);
}

/*
==============
CgCompassSystem::ResetCompassActorObfuscation
==============
*/

void __fastcall CgCompassSystem::ResetCompassActorObfuscation(CgCompassSystem *const compassSystem)
{
  ?ResetCompassActorObfuscation@CgCompassSystem@@KAXQEAV1@@Z(compassSystem);
}

/*
==============
CgCompassSystem::WorldPosToCompass
==============
*/

bool __fastcall CgCompassSystem::WorldPosToCompass(CgCompassSystem *this, CompassType compassType, bool cropPartialMap, const rectDef_s *mapRect, const float boundsRadius, const vec2_t *north, const vec2_t *playerWorldPos, const vec2_t *in, vec2_t *out, vec2_t *outClipped)
{
  return ?WorldPosToCompass@CgCompassSystem@@QEBA_NW4CompassType@@_NPEBUrectDef_s@@MAEBTvec2_t@@33PEAT4@4@Z(this, compassType, cropPartialMap, mapRect, boundsRadius, north, playerWorldPos, in, out, outClipped);
}

/*
==============
CgCompassSystem::IsCursorInTacMap
==============
*/

bool __fastcall CgCompassSystem::IsCursorInTacMap(CgCompassSystem *this)
{
  return ?IsCursorInTacMap@CgCompassSystem@@QEAA_NXZ(this);
}

/*
==============
CgCompassSystem::GetIfExceedMinDragDistance
==============
*/

bool __fastcall CgCompassSystem::GetIfExceedMinDragDistance(CgCompassSystem *this)
{
  return ?GetIfExceedMinDragDistance@CgCompassSystem@@QEAA_NXZ(this);
}

/*
==============
CG_CompassCalcLocationSelectorQuads
==============
*/

void __fastcall CG_CompassCalcLocationSelectorQuads(LocalClientNum_t localClientNum, const rectDef_s *scaledRect, int horzAlign, int vertAlign, const vec2_t *posScreen, vec2_t *outTexMin, vec2_t *outTexMax, float *x, float *y, float *w, float *h, float quadRad)
{
  ?CG_CompassCalcLocationSelectorQuads@@YAXW4LocalClientNum_t@@PEBUrectDef_s@@HHAEBTvec2_t@@AEAT3@3PEAM444M@Z(localClientNum, scaledRect, horzAlign, vertAlign, posScreen, outTexMin, outTexMax, x, y, w, h, quadRad);
}

/*
==============
CgCompassSystem::DrawPlayerName
==============
*/

void __fastcall CgCompassSystem::DrawPlayerName(CgCompassSystem *this, int clientNum, float centerX, float centerY, int team, LUIElement *element, lua_State *luaVM)
{
  ?DrawPlayerName@CgCompassSystem@@QEBAXHMMHPEAULUIElement@@PEAUlua_State@@@Z(this, clientNum, centerX, centerY, team, element, luaVM);
}

/*
==============
CgCompassSystem::GetMinimapRotationEnabled
==============
*/

bool __fastcall CgCompassSystem::GetMinimapRotationEnabled(CgCompassSystem *this)
{
  return ?GetMinimapRotationEnabled@CgCompassSystem@@QEBA_NXZ(this);
}

/*
==============
CalcCompassVehicleClippedDistanceScale
==============
*/

double __fastcall CalcCompassVehicleClippedDistanceScale(const vec2_t *v0, const vec2_t *v1, bool forceCompute)
{
  double result; 

  *(float *)&result = ?CalcCompassVehicleClippedDistanceScale@@YAMAEBTvec2_t@@0_N@Z(v0, v1, forceCompute);
  return result;
}

/*
==============
CgCompassSystem::CalcCompassPointerSize
==============
*/

void __fastcall CgCompassSystem::CalcCompassPointerSize(CgCompassSystem *this, CompassType compassType, ObjectiveIconSize iconSize, float *w, float *h)
{
  ?CalcCompassPointerSize@CgCompassSystem@@IEBAXW4CompassType@@W4ObjectiveIconSize@@PEAM2@Z(this, compassType, iconSize, w, h);
}

/*
==============
CalcCompassFriendlySize
==============
*/

void __fastcall CalcCompassFriendlySize(CompassType compassType, float *w, float *h)
{
  ?CalcCompassFriendlySize@@YAXW4CompassType@@PEAM1@Z(compassType, w, h);
}

/*
==============
CgCompassSystem::getTacmapMapRectangle
==============
*/

rectDef_s *__fastcall CgCompassSystem::getTacmapMapRectangle(CgCompassSystem *this, rectDef_s *result)
{
  return ?getTacmapMapRectangle@CgCompassSystem@@QEAA?AUrectDef_s@@XZ(this, result);
}

/*
==============
CG_CompassGetObjectivePingAlpha
==============
*/

void __fastcall CG_CompassGetObjectivePingAlpha(const ObjectiveView *obj, const int currentTime, float *pingAlpha)
{
  ?CG_CompassGetObjectivePingAlpha@@YAXPEBUObjectiveView@@HAEAM@Z(obj, currentTime, pingAlpha);
}

/*
==============
CgCompassSystem::~CgCompassSystem
==============
*/
void CgCompassSystem::~CgCompassSystem(CgCompassSystem *this)
{
  this->__vftable = (CgCompassSystem_vtbl *)&CgCompassSystem::`vftable';
}

/*
==============
CgCompassSystem::AddContinuousPingInfo
==============
*/
void CgCompassSystem::AddContinuousPingInfo(CgCompassSystem *this, const centity_t *cent, const vec3_t *origin)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1744, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  this->AddWeaponPingInfo(this, cent, origin, 50);
}

/*
==============
CG_ApplySplitScreenCompassScale
==============
*/
void CG_ApplySplitScreenCompassScale(CompassType compassType, float *x, float *y, float *w, float *h)
{
  _R14 = w;
  _RSI = y;
  _RBP = x;
  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 82, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  _RDI = h;
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 83, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  if ( compassType == COMPASS_TYPE_PARTIAL && CL_IsRenderingSplitScreen() )
  {
    _RBX = DVARFLT_cg_hudSplitscreenCompassScale;
    if ( !DVARFLT_cg_hudSplitscreenCompassScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm1, dword ptr [rbx+28h] }
    if ( _RBP )
    {
      __asm
      {
        vmulss  xmm0, xmm1, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm0
      }
    }
    if ( _RSI )
    {
      __asm
      {
        vmulss  xmm0, xmm1, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm0
      }
    }
    __asm
    {
      vmulss  xmm0, xmm1, dword ptr [r14]
      vmovss  dword ptr [r14], xmm0
      vmulss  xmm1, xmm1, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
    }
  }
}

/*
==============
CG_BuildCompassDistanceString
==============
*/

void __fastcall CG_BuildCompassDistanceString(double distance, char *result, int resultSize)
{
  unsigned __int64 v5; 
  char v10; 
  const char *v18; 
  ConversionArguments arguments; 
  char _Buffer[8]; 

  __asm { vmovaps [rsp+0C8h+var_28], xmm6 }
  v5 = resultSize;
  __asm { vmovaps xmm6, xmm0 }
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2450, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2451, ASSERT_TYPE_ASSERT, "(resultSize > 0)", (const char *)&queryFormat, "resultSize > 0") )
    __debugbreak();
  _RBX = DVARFLT_compassObjectiveDetailDist;
  if ( !DVARFLT_compassObjectiveDetailDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveDetailDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( v10 )
  {
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@41200000
      vcvttss2si eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm2, xmm1, cs:__real@3dcccccd
      vcvtss2sd xmm2, xmm2, xmm2
      vmovq   r8, xmm2
    }
    j_sprintf(_Buffer, "%.1f", *(double *)&_XMM2);
  }
  else
  {
    __asm { vcvttss2si r8d, xmm6 }
    j_sprintf(_Buffer, "%i", _R8);
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  *(_QWORD *)&arguments.argCount = 1i64;
  arguments.args[0] = _Buffer;
  __asm
  {
    vmovdqu xmmword ptr [rsp+0C8h+arguments.args+8], xmm0
    vmovdqu xmmword ptr [rsp+0C8h+arguments.args+18h], xmm1
    vmovdqu xmmword ptr [rsp+0C8h+arguments.args+28h], xmm0
    vmovdqu xmmword ptr [rsp+0C8h+arguments.args+38h], xmm1
  }
  v18 = UI_SafeTranslateString("HUD/OBJECTIVE_DISTANCE");
  UI_ReplaceConversions(v18, &arguments, result, v5);
  __asm { vmovaps xmm6, [rsp+0C8h+var_28] }
}

/*
==============
CG_CalcCircularCompassPos
==============
*/

bool __fastcall CG_CalcCircularCompassPos(const rectDef_s *mapRect, double boundsRadius, vec2_t *outClippedXY, bool *outClipped)
{
  bool v12; 
  bool v13; 
  bool result; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RBX = outClippedXY;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm1, xmm7
    vmovaps xmm6, xmm1
  }
  _RDI = mapRect;
  __asm { vmovaps [rsp+68h+var_38], xmm8 }
  if ( !mapRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 111, ASSERT_TYPE_ASSERT, "(mapRect)", (const char *)&queryFormat, "mapRect") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 112, ASSERT_TYPE_ASSERT, "(outClippedXY)", (const char *)&queryFormat, "outClippedXY") )
    __debugbreak();
  v12 = outClipped == NULL;
  if ( !outClipped )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 113, ASSERT_TYPE_ASSERT, "(outClipped)", (const char *)&queryFormat, "outClipped");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vminss  xmm1, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm8, xmm2, xmm6
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm0, xmm1, xmm1
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm6, xmm1, xmm1
    vcomiss xmm6, xmm8
  }
  if ( !v12 )
  {
    __asm { vcomiss xmm6, xmm7 }
    if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 119, ASSERT_TYPE_ASSERT, "(xyLen > 0.0f)", (const char *)&queryFormat, "xyLen > 0.0f") )
      __debugbreak();
    __asm
    {
      vdivss  xmm1, xmm8, xmm6
      vmulss  xmm0, xmm1, dword ptr [rbx]
      vmulss  xmm1, xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  dword ptr [rbx], xmm0
    }
    *outClipped = 1;
  }
  __asm { vmovaps xmm8, [rsp+68h+var_38] }
  result = 1;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
CG_CalcPlayerPos
==============
*/
void CG_CalcPlayerPos(SecureVec3 *out, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  BOOL v6; 
  __int16 remoteControlEnt; 
  __int64 v8; 
  CgEntitySystem *v9; 
  const cpose_t *p_pose; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  __int64 v14; 
  __int64 v15; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2572, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2575, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = 1;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v2);
    if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
      v6 = 0;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x1Cu) || (remoteControlEnt = LocalClientGlobals->predictedPlayerState.remoteControlEnt, remoteControlEnt == 2047) )
  {
    if ( v6 )
    {
      CG_GetPoseOrigin(&LocalClientGlobals->predictedPlayerEntity->pose, (vec3_t *)out);
    }
    else
    {
      p_view = &LocalClientGlobals->refdef.view;
      if ( !p_view && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
        __debugbreak();
      refdefViewOrg_aab = p_view->refdefViewOrg_aab;
      v = (_DWORD *)p_view->org.org.v;
      if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
        __debugbreak();
      LODWORD(out->x) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
      LODWORD(out->y) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
      LODWORD(out->z) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    }
  }
  else
  {
    v8 = remoteControlEnt;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v2) )
      __debugbreak();
    if ( (unsigned int)v2 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v15) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v14) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v2] )
    {
      LODWORD(v15) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v15) )
        __debugbreak();
    }
    v9 = CgEntitySystem::ms_entitySystemArray[v2];
    if ( (unsigned int)v8 >= 0x800 )
    {
      LODWORD(v15) = 2048;
      LODWORD(v14) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    p_pose = &v9->m_entities[v8].pose;
    if ( (v9->m_entities[v8].flags & 1) == 0 )
      p_pose = &LocalClientGlobals->predictedPlayerEntity->pose;
    CG_GetPoseOrigin(p_pose, (vec3_t *)out);
  }
}

/*
==============
CG_CalcPlayerViewAngles
==============
*/
void CG_CalcPlayerViewAngles(vec3_t *out, LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2609, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2612, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( LocalClientGlobals->renderingThirdPerson || (Instance = CgWeaponMap::GetInstance(localClientNum), BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState)) )
  {
    AxisToAngles(&LocalClientGlobals->refdef.view.axis, out);
  }
  else
  {
    out->v[0] = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
    out->v[1] = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
    out->v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
  }
}

/*
==============
CG_CompassCalcDimensions
==============
*/
void CG_CompassCalcDimensions(CompassType compassType, const cg_t *cgameGlob, const rectDef_s *parentRect, const rectDef_s *rect, const vec2_t *compassMapWorldSize, float *x, float *y, float *w, float *h)
{
  const dvar_t *v18; 
  char v24; 
  char v28; 
  bool v29; 
  bool v31; 
  bool v32; 
  bool v34; 
  bool v35; 
  const dvar_t *v58; 

  _RBX = rect;
  _R14 = parentRect;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 529, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 530, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 531, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  _R13 = x;
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 532, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  _R12 = y;
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 533, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  _RSI = w;
  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 534, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  _RDI = h;
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 535, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  if ( compassType )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vmovaps [rsp+88h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm0, xmm6
      vmovaps [rsp+88h+var_48], xmm7
      vcomiss xmm6, dword ptr [rbx+0Ch]
    }
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14427E200, 951i64);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vucomiss xmm0, xmm6
    }
    if ( v29 )
    {
      v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 566, ASSERT_TYPE_ASSERT, "(rect->w)", (const char *)&queryFormat, "rect->w");
      v28 = 0;
      v29 = !v31;
      if ( v31 )
        __debugbreak();
    }
    __asm { vucomiss xmm6, dword ptr [rbx+0Ch] }
    if ( v29 )
    {
      v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 567, ASSERT_TYPE_ASSERT, "(rect->h)", (const char *)&queryFormat, "rect->h");
      v28 = 0;
      v29 = !v32;
      if ( v32 )
        __debugbreak();
    }
    _RBP = compassMapWorldSize;
    __asm { vucomiss xmm6, dword ptr [rbp+0] }
    if ( v29 )
    {
      v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 568, ASSERT_TYPE_ASSERT, "(compassMapWorldSize[0])", (const char *)&queryFormat, "compassMapWorldSize[0]");
      v28 = 0;
      v29 = !v34;
      if ( v34 )
        __debugbreak();
    }
    __asm { vucomiss xmm6, dword ptr [rbp+4] }
    if ( v29 )
    {
      v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 569, ASSERT_TYPE_ASSERT, "(compassMapWorldSize[1])", (const char *)&queryFormat, "compassMapWorldSize[1]");
      v28 = 0;
      v29 = !v35;
      if ( v35 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vdivss  xmm4, xmm0, dword ptr [rbp+4]
      vmovss  xmm5, dword ptr [rbx+0Ch]
      vmovss  xmm2, dword ptr [rbx+8]
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  xmm1, dword ptr [r14]
      vaddss  xmm7, xmm0, dword ptr [rbx+4]
      vaddss  xmm6, xmm1, dword ptr [rbx]
      vdivss  xmm3, xmm2, xmm5
      vcomiss xmm4, xmm3
    }
    if ( v28 | v29 )
    {
      __asm
      {
        vmulss  xmm1, xmm2, cs:__real@3f000000
        vdivss  xmm0, xmm4, xmm3
        vmulss  xmm4, xmm0, xmm2
        vmulss  xmm0, xmm4, cs:__real@3f000000
        vaddss  xmm2, xmm1, xmm6
        vsubss  xmm2, xmm2, xmm0
        vmovss  dword ptr [r13+0], xmm2
        vmovss  dword ptr [r12], xmm7
        vmovss  dword ptr [rsi], xmm4
        vmovss  xmm3, dword ptr [rbx+0Ch]
      }
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [r13+0], xmm6
        vdivss  xmm0, xmm3, xmm4
        vmulss  xmm3, xmm0, xmm5
        vmulss  xmm0, xmm5, cs:__real@3f000000
        vmulss  xmm1, xmm3, cs:__real@3f000000
        vaddss  xmm2, xmm0, xmm7
        vsubss  xmm2, xmm2, xmm1
        vmovss  dword ptr [r12], xmm2
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rsi], xmm0
      }
    }
    __asm { vmovss  dword ptr [rdi], xmm3 }
    v58 = DVARFLT_cg_hudMapBorderWidth;
    __asm
    {
      vmovaps xmm7, [rsp+88h+var_48]
      vmovaps xmm6, [rsp+88h+var_38]
    }
    if ( !DVARFLT_cg_hudMapBorderWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapBorderWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    __asm
    {
      vmovss  xmm2, cs:__real@3e800000
      vmulss  xmm0, xmm2, dword ptr [rsi]
      vminss  xmm3, xmm0, dword ptr [rbx+28h]
      vmulss  xmm2, xmm2, dword ptr [rdi]
      vminss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, dword ptr [r13+0]
      vmulss  xmm3, xmm4, cs:__real@40000000
      vmovss  dword ptr [r13+0], xmm0
      vaddss  xmm1, xmm4, dword ptr [r12]
      vmovss  dword ptr [r12], xmm1
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm2, dword ptr [rdi]
      vsubss  xmm0, xmm2, xmm3
      vmovss  dword ptr [rdi], xmm0
    }
  }
  else
  {
    *x = _RBX->x;
    *y = _RBX->y;
    v18 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vmulss  xmm0, xmm0, dword ptr [rbp+28h]
      vmovss  dword ptr [rsi], xmm0
    }
    _RBP = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+28h]
      vmulss  xmm1, xmm0, dword ptr [rbx+0Ch]
      vmovss  dword ptr [rdi], xmm1
    }
    CG_ApplySplitScreenCompassScale(COMPASS_TYPE_PARTIAL, x, y, w, h);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rsi]
    }
    if ( !v24 )
      goto LABEL_31;
    __asm { vcomiss xmm0, dword ptr [rdi] }
    if ( !v24 )
LABEL_31:
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14427E200, 950i64);
  }
}

/*
==============
CG_CompassCalcDimensions
==============
*/
void CG_CompassCalcDimensions(CompassType compassType, const cg_t *cgameGlob, const rectDef_s *parentRect, const rectDef_s *rect, float *x, float *y, float *w, float *h)
{
  CG_CompassCalcDimensions(compassType, cgameGlob, parentRect, rect, &cgameGlob->compassMapWorldSize, x, y, w, h);
}

/*
==============
CG_CompassCalcLocationSelectorQuads
==============
*/
void CG_CompassCalcLocationSelectorQuads(LocalClientNum_t localClientNum, const rectDef_s *scaledRect, int horzAlign, int vertAlign, const vec2_t *posScreen, vec2_t *outTexMin, vec2_t *outTexMax, float *x, float *y, float *w, float *h, float quadRad)
{
  const ScreenPlacement *ActivePlacement; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  _R15 = scaledRect;
  if ( !scaledRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1475, ASSERT_TYPE_ASSERT, "(scaledRect)", (const char *)&queryFormat, "scaledRect") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1476, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1477, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1478, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1479, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  xmm4, cs:__real@3f000000
  }
  _RDX = outTexMin;
  _RCX = outTexMax;
  __asm
  {
    vsubss  xmm0, xmm0, dword ptr [rax]
    vmovss  xmm6, cs:__real@3f800000
    vdivss  xmm5, xmm6, [rsp+78h+quadRad]
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm2, xmm1, xmm4
    vmovss  dword ptr [rdx], xmm2
    vmovss  xmm0, dword ptr [r15+4]
    vsubss  xmm1, xmm0, dword ptr [rax+4]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, xmm4
    vmovss  dword ptr [rdx+4], xmm3
    vmovss  xmm0, dword ptr [r15+8]
    vaddss  xmm1, xmm0, dword ptr [r15]
    vsubss  xmm2, xmm1, dword ptr [rax]
    vmulss  xmm3, xmm2, xmm5
    vaddss  xmm0, xmm3, xmm4
    vmovss  dword ptr [rcx], xmm0
    vmovss  xmm0, dword ptr [r15+4]
    vaddss  xmm1, xmm0, dword ptr [r15+0Ch]
    vsubss  xmm2, xmm1, dword ptr [rax+4]
    vmulss  xmm3, xmm2, xmm5
    vaddss  xmm0, xmm3, xmm4
    vmovss  dword ptr [rcx+4], xmm0
  }
  *x = _R15->x;
  *y = _R15->y;
  *w = _R15->w;
  *h = _R15->h;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm0, xmm3
    vmovss  xmm0, dword ptr [rdx+4]
    vcomiss xmm0, xmm3
    vmovss  xmm2, dword ptr [rcx]
    vcomiss xmm2, xmm6
    vmovss  xmm2, dword ptr [rcx+4]
    vcomiss xmm2, xmm6
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
  ScrPlace_ApplyRect(ActivePlacement, x, y, w, h, horzAlign, vertAlign);
}

/*
==============
CG_CompassFullToWorld
==============
*/
void CG_CompassFullToWorld(const cg_t *cgameGlob, const vec2_t *compassPosition, vec2_t *outWorldPosition)
{
  _RSI = outWorldPosition;
  _RBX = cgameGlob;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 619, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4A020h]
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vmulss  xmm0, xmm3, dword ptr [rbx+4A004h]
    vaddss  xmm2, xmm0, dword ptr [rbx+4A018h]
    vmovss  xmm1, dword ptr [rbx+4A024h]
    vmulss  xmm4, xmm1, dword ptr [rdi+4]
    vmulss  xmm1, xmm4, dword ptr [rbx+4A000h]
    vsubss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rsi], xmm2
    vmovss  xmm0, dword ptr [rbx+4A01Ch]
    vmulss  xmm3, xmm3, dword ptr [rbx+4A000h]
    vmulss  xmm1, xmm4, dword ptr [rbx+4A004h]
    vsubss  xmm2, xmm0, xmm3
    vsubss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsi+4], xmm0
  }
}

/*
==============
CG_CompassGetObjectivePingAlpha
==============
*/
void CG_CompassGetObjectivePingAlpha(const ObjectiveView *obj, const int currentTime, float *pingAlpha)
{
  const dvar_t *v8; 
  char v12; 
  char v13; 

  _RDI = pingAlpha;
  if ( obj->pingTime )
  {
    v8 = DVARINT_bg_objectivePingDuration;
    if ( !DVARINT_bg_objectivePingDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_objectivePingDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [rbx+28h]
      vxorps  xmm1, xmm1, xmm1; min
      vcomiss xmm2, xmm1
    }
    if ( v12 | v13 )
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm3, xmm0, xmm2
        vmovss  xmm2, cs:__real@3f800000; max
        vsubss  xmm0, xmm2, xmm3; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    }
    __asm { vmovss  dword ptr [rdi], xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [r8], xmm0
    }
  }
}

/*
==============
CG_CompassPartialToWorld
==============
*/

void __fastcall CG_CompassPartialToWorld(const cg_t *cgameGlob, double compassMapRange, const vec2_t *compassPosition, const vec2_t *yawVector, vec2_t *outWorldPosition, vec2_t *outWorldScale)
{
  __int64 v43; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RBP = outWorldPosition;
  _R14 = outWorldScale;
  _RBX = cgameGlob;
  __asm { vmovaps xmm6, xmm1 }
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 630, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vmulss  xmm8, xmm6, dword ptr [rsi]
    vmulss  xmm9, xmm6, dword ptr [rsi+4]
    vmulss  xmm2, xmm8, dword ptr [rdi+4]
    vmulss  xmm0, xmm6, cs:__real@3f000000
    vmulss  xmm7, xmm0, dword ptr [rdi+4]
    vmulss  xmm6, xmm0, dword ptr [rdi]
  }
  v43 = *(_QWORD *)_RBX->predictedPlayerState.origin.v;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+var_58]
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm0, xmm9, dword ptr [rdi]
    vaddss  xmm3, xmm1, xmm6
    vaddss  xmm1, xmm6, dword ptr [rsp+88h+var_58+4]
    vaddss  xmm4, xmm3, xmm2
    vsubss  xmm5, xmm4, xmm0
    vmovss  dword ptr [rbp+0], xmm5
    vmulss  xmm0, xmm8, dword ptr [rdi]
    vaddss  xmm2, xmm1, xmm7
    vmulss  xmm1, xmm9, dword ptr [rdi+4]
    vsubss  xmm3, xmm2, xmm0
    vsubss  xmm4, xmm3, xmm1
    vmovss  dword ptr [rbp+4], xmm4
    vsubss  xmm0, xmm5, dword ptr [rbx+4A018h]
    vmovss  xmm2, dword ptr [rbx+4A01Ch]
    vdivss  xmm1, xmm0, dword ptr [rbx+4A020h]
    vsubss  xmm2, xmm2, xmm4
    vmovss  dword ptr [r14], xmm1
    vdivss  xmm0, xmm2, dword ptr [rbx+4A024h]
    vmovss  dword ptr [r14+4], xmm0
  }
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CG_Compass_CalcElevation
==============
*/
CompassEnemyElevation CG_Compass_CalcElevation(const cg_t *const cgameGlob, const vec3_t *worldPosition)
{
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2777, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return CG_Compass_CalcElevation_Internal(&cgameGlob->predictedPlayerState.origin, worldPosition);
}

/*
==============
CG_Compass_CalcElevationForLocalPlayerPosition
==============
*/

CompassEnemyElevation __fastcall CG_Compass_CalcElevationForLocalPlayerPosition(const vec3_t *localPlayerPosition, const vec3_t *worldPosition)
{
  return CG_Compass_CalcElevation_Internal(localPlayerPosition, worldPosition);
}

/*
==============
CG_Compass_CalcElevation_Internal
==============
*/
CompassEnemyElevation CG_Compass_CalcElevation_Internal(const vec3_t *localPlayerPosition, const vec3_t *worldPosition)
{
  char v6; 
  char v7; 
  CompassEnemyElevation result; 

  _RBX = DCONST_DVARFLT_compassEnemyHeightDelta;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm6, xmm0, dword ptr [rcx+8]
  }
  if ( !DCONST_DVARFLT_compassEnemyHeightDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnemyHeightDelta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( v6 )
  {
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
    return 0;
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    result = (v6 | v7) + 1;
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
  return result;
}

/*
==============
CalcCompassClippedDistanceScale
==============
*/
double CalcCompassClippedDistanceScale(const vec2_t *v0, const vec2_t *v1, bool forceCompute)
{
  double result; 

  _RBX = DVARFLT_compassClippedScale;
  if ( !DVARFLT_compassClippedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClippedScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm3, dword ptr [rbx+28h] }
  *(float *)&result = CalcCompassClippedDistanceScaleInternal(v0, v1, forceCompute, *(float *)&_XMM3);
  return result;
}

/*
==============
CalcCompassClippedDistanceScaleInternal
==============
*/

float __fastcall CalcCompassClippedDistanceScaleInternal(const vec2_t *v0, const vec2_t *v1, bool forceCompute, double clippedScaleValue)
{
  const dvar_t *v8; 
  const dvar_t *v14; 

  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  _RDI = v1;
  __asm { vmovaps xmm7, xmm3 }
  if ( forceCompute )
    goto LABEL_7;
  v8 = DVARBOOL_compassEnableClippedScale;
  if ( !DVARBOOL_compassEnableClippedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnableClippedScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
LABEL_7:
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm2, xmm1, dword ptr [rsi+4]
      vsubss  xmm4, xmm0, dword ptr [rsi]
    }
    v14 = DVARFLT_compassClippedScaleMaxDistance;
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vsqrtss xmm6, xmm1, xmm1
    }
    if ( !DVARFLT_compassClippedScaleMaxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClippedScaleMaxDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    __asm
    {
      vdivss  xmm0, xmm6, dword ptr [rbx+28h]
      vmovss  xmm6, cs:__real@3f800000
      vsubss  xmm0, xmm6, xmm0; val
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vmovaps xmm6, [rsp+68h+var_18]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm0, xmm2, xmm0
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  __asm { vmovaps xmm7, [rsp+68h+var_28] }
  return *(float *)&_XMM0;
}

/*
==============
CalcCompassFriendlySize
==============
*/
void CalcCompassFriendlySize(CompassType compassType, float *w, float *h)
{
  const dvar_t *v9; 
  const dvar_t *v13; 
  const dvar_t *v16; 

  _RBP = h;
  _R14 = w;
  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2471, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2472, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  if ( compassType )
  {
    v16 = DVARFLT_cg_hudMapFriendlyWidth;
    if ( !DVARFLT_cg_hudMapFriendlyWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapFriendlyWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    *_R14 = v16->current.value;
    _RBX = DVARFLT_cg_hudMapFriendlyHeight;
    if ( !DVARFLT_cg_hudMapFriendlyHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapFriendlyHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    _RBX = DVARFLT_compassFriendlyWidth;
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    if ( !DVARFLT_compassFriendlyWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassFriendlyWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v9 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
      vmovss  dword ptr [r14], xmm0
    }
    _RBX = DVARFLT_compassFriendlyHeight;
    if ( !DVARFLT_compassFriendlyHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassFriendlyHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v13 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
      vmovaps xmm6, [rsp+68h+var_28]
    }
  }
  __asm { vmovss  dword ptr [rbp+0], xmm0 }
  if ( CL_IsRenderingSplitScreen() && compassType == COMPASS_TYPE_PARTIAL )
  {
    _RBX = DVARFLT_cg_hudSplitscreenCompassElementScale;
    if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, dword ptr [r14]
      vmovss  dword ptr [r14], xmm1
    }
    _RBX = DVARFLT_cg_hudSplitscreenCompassElementScale;
    if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm1
    }
    CG_ApplySplitScreenCompassScale(COMPASS_TYPE_PARTIAL, NULL, NULL, _R14, _RBP);
  }
}

/*
==============
CgCompassSystem::CalcCompassPointerSize
==============
*/
void CgCompassSystem::CalcCompassPointerSize(CgCompassSystem *this, CompassType compassType, ObjectiveIconSize iconSize, float *w, float *h)
{
  const dvar_t *v12; 
  const dvar_t *v17; 
  const dvar_t *v20; 
  const dvar_t *v25; 
  const dvar_t *v29; 
  const char *v30; 
  const dvar_t *v37; 
  const dvar_t *v39; 
  const dvar_t *v41; 
  const char *v42; 

  _RBP = h;
  _RDI = w;
  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2373, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2374, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  if ( compassType )
  {
    if ( iconSize == OBJ_ICON_SIZE_LARGE )
    {
      v37 = DVARFLT_compassObjectiveIconWidthLarge;
      if ( !DVARFLT_compassObjectiveIconWidthLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconWidthLarge") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      *_RDI = v37->current.value;
      _RBX = DVARFLT_compassObjectiveIconHeightLarge;
      if ( !DVARFLT_compassObjectiveIconHeightLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconHeightLarge") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else if ( iconSize == OBJ_ICON_SIZE_MEDIUM )
    {
      v39 = DVARFLT_compassObjectiveIconWidthMedium;
      if ( !DVARFLT_compassObjectiveIconWidthMedium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconWidthMedium") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      *_RDI = v39->current.value;
      _RBX = DVARFLT_compassObjectiveIconHeightMedium;
      if ( !DVARFLT_compassObjectiveIconHeightMedium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconHeightMedium") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      if ( iconSize == OBJ_ICON_SIZE_SMALL )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconWidthSmall, "compassObjectiveIconWidthSmall");
        __asm { vmovss  dword ptr [rdi], xmm0 }
        v41 = DCONST_DVARFLT_compassObjectiveIconHeightSmall;
        v42 = "compassObjectiveIconHeightSmall";
      }
      else if ( iconSize == OBJ_ICON_SIZE_HEADICON )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveIconWidthHeadIcon, "compassObjectiveIconWidthHeadIcon");
        __asm { vmovss  dword ptr [rdi], xmm0 }
        v41 = DVARFLT_compassObjectiveIconHeightHeadIcon;
        v42 = "compassObjectiveIconHeightHeadIcon";
      }
      else
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveIconWidth, "compassObjectiveIconWidth");
        __asm { vmovss  dword ptr [rdi], xmm0 }
        v41 = DVARFLT_compassObjectiveIconHeight;
        v42 = "compassObjectiveIconHeight";
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v41, v42);
    }
  }
  else
  {
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    if ( iconSize == OBJ_ICON_SIZE_LARGE )
    {
      _RBX = DVARFLT_compassObjectiveWidthLarge;
      if ( !DVARFLT_compassObjectiveWidthLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveWidthLarge") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      v12 = DVARFLT_compassSize;
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rsi+28h]
        vmovss  dword ptr [rdi], xmm0
      }
      _RSI = DVARFLT_compassObjectiveHeightLarge;
      if ( !DVARFLT_compassObjectiveHeightLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveHeightLarge") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm6, dword ptr [rsi+28h] }
      v17 = DVARFLT_compassSize;
      if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rsi+28h]
        vmovaps xmm6, [rsp+68h+var_28]
      }
    }
    else if ( iconSize == OBJ_ICON_SIZE_MEDIUM )
    {
      _RBX = DVARFLT_compassObjectiveWidthMedium;
      if ( !DVARFLT_compassObjectiveWidthMedium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveWidthMedium") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      v20 = DVARFLT_compassSize;
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rsi+28h]
        vmovss  dword ptr [rdi], xmm0
      }
      _RSI = DVARFLT_compassObjectiveHeightMedium;
      if ( !DVARFLT_compassObjectiveHeightMedium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveHeightMedium") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm6, dword ptr [rsi+28h] }
      v25 = DVARFLT_compassSize;
      if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rsi+28h]
        vmovaps xmm6, [rsp+68h+var_28]
      }
    }
    else
    {
      if ( iconSize == OBJ_ICON_SIZE_SMALL )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveWidthSmall, "compassObjectiveWidthSmall");
        __asm { vmovaps xmm6, xmm0 }
        Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
        __asm
        {
          vmulss  xmm1, xmm6, xmm0
          vmovss  dword ptr [rdi], xmm1
        }
        v29 = DCONST_DVARFLT_compassObjectiveHeightSmall;
        v30 = "compassObjectiveHeightSmall";
      }
      else if ( iconSize == OBJ_ICON_SIZE_HEADICON )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveWidthHeadIcon, "compassObjectiveWidthHeadIcon");
        __asm { vmovaps xmm6, xmm0 }
        Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
        __asm
        {
          vmulss  xmm1, xmm6, xmm0
          vmovss  dword ptr [rdi], xmm1
        }
        v29 = DVARFLT_compassObjectiveHeightHeadIcon;
        v30 = "compassObjectiveHeightHeadIcon";
      }
      else
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveWidth, "compassObjectiveWidth");
        __asm { vmovaps xmm6, xmm0 }
        Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
        __asm
        {
          vmulss  xmm1, xmm6, xmm0
          vmovss  dword ptr [rdi], xmm1
        }
        v29 = DVARFLT_compassObjectiveHeight;
        v30 = "compassObjectiveHeight";
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v29, v30);
      __asm { vmovaps xmm6, xmm0 }
      Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
      __asm
      {
        vmulss  xmm0, xmm6, xmm0
        vmovaps xmm6, [rsp+68h+var_28]
      }
    }
  }
  __asm { vmovss  dword ptr [rbp+0], xmm0 }
  if ( CL_IsRenderingSplitScreen() && compassType == COMPASS_TYPE_PARTIAL )
  {
    _RBX = DVARFLT_cg_hudSplitscreenCompassElementScale;
    if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
    }
    _RBX = DVARFLT_cg_hudSplitscreenCompassElementScale;
    if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm1
    }
    CG_ApplySplitScreenCompassScale(COMPASS_TYPE_PARTIAL, NULL, NULL, _RDI, h);
  }
}

/*
==============
CalcCompassVehicleClippedDistanceScale
==============
*/
double CalcCompassVehicleClippedDistanceScale(const vec2_t *v0, const vec2_t *v1, bool forceCompute)
{
  const char *v7; 
  double result; 

  if ( CG_GameInterface_PlayingGroundWar() )
  {
    _RBX = DVARFLT_compassBigMapClippedVehicleScale;
    if ( DVARFLT_compassBigMapClippedVehicleScale )
      goto LABEL_8;
    v7 = "compassBigMapClippedVehicleScale";
  }
  else
  {
    _RBX = DVARFLT_compassClippedScale;
    if ( DVARFLT_compassClippedScale )
      goto LABEL_8;
    v7 = "compassClippedScale";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v7) )
    __debugbreak();
LABEL_8:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm3, dword ptr [rbx+28h] }
  *(float *)&result = CalcCompassClippedDistanceScaleInternal(v0, v1, forceCompute, *(double *)&_XMM3);
  return result;
}

/*
==============
CgCompassSystem::ComputeFriendlyCompassColor
==============
*/
void CgCompassSystem::ComputeFriendlyCompassColor(CgCompassSystem *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *color)
{
  __asm
  {
    vmovss  xmm0, dword ptr cs:playerColor
    vmovss  dword ptr [r9], xmm0
    vmovss  xmm1, dword ptr cs:playerColor+4
    vmovss  dword ptr [r9+4], xmm1
    vmovss  xmm0, dword ptr cs:playerColor+8
    vmovss  dword ptr [r9+8], xmm0
    vmovss  xmm1, dword ptr cs:playerColor+0Ch
    vmovss  dword ptr [r9+0Ch], xmm1
  }
}

/*
==============
CgCompassSystem::DrawPlayer
==============
*/
void CgCompassSystem::DrawPlayer(CgCompassSystem *this, CompassType compassType, bool cropPartialMap, bool largeMap, bool hasBomb, const GfxImage *objectiveIcon, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, const vec4_t *secondaryColor, const vec4_t *objectiveColor, const vec4_t *objectiveSecondaryColor, const vec4_t *playerNumberColor, const float fadeTime, LUIElement *element, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  __int64 m_localClientNum; 
  CgGlobalsMP *v31; 
  CgHandler *Handler; 
  bool IsGameTypeQuick_BR; 
  bool v34; 
  clientInfo_t *v47; 
  CompassType v50; 
  bool v56; 
  cg_t *v57; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  __int64 clientNum; 
  cg_t *v68; 
  characterInfo_t *CharacterInfo; 
  const GfxImage *material; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float *x; 
  float *xa; 
  float xb; 
  float xc; 
  float xd; 
  float xe; 
  float xf; 
  float xg; 
  float xh; 
  float xi; 
  float xj; 
  float *y; 
  float *ya; 
  float yb; 
  float yc; 
  float yd; 
  float ye; 
  float yf; 
  float yg; 
  float yh; 
  float yi; 
  float yj; 
  float w; 
  float wa; 
  float wb; 
  float wc; 
  float wd; 
  float we; 
  float wf; 
  float wg; 
  float wh; 
  float h; 
  float ha; 
  float hb; 
  float hc; 
  float hd; 
  float he; 
  float hf; 
  float hg; 
  float hh; 
  float playerWorldPos; 
  float playerWorldPosa; 
  float playerWorldPosb; 
  float playerWorldPosc; 
  float playerWorldPosd; 
  float playerWorldPose; 
  float playerWorldPosf; 
  float playerWorldPosg; 
  float playerWorldPosh; 
  float in; 
  float ina; 
  float inb; 
  float inc; 
  float ind; 
  float ine; 
  float inf; 
  float ing; 
  float inh; 
  float v252; 
  float v253; 
  float v254; 
  float v255; 
  float v256; 
  float v257; 
  float v258; 
  float v259; 
  float v260; 
  float outClipped; 
  float outClippeda; 
  float outClippedb; 
  float outClippedc; 
  float outClippedd; 
  float outClippede; 
  float outClippedf; 
  float outClippedg; 
  float outClippedh; 
  float v270; 
  float v271; 
  float v272; 
  float v273; 
  float v274; 
  float v275; 
  float v276; 
  float v277; 
  float v278; 
  float v279; 
  float v280; 
  float v281; 
  float v282; 
  float v283; 
  float v284; 
  float v285; 
  float v286; 
  float v287; 
  float v289; 
  float v290; 
  float outHeight; 
  float outWidth; 
  bool v293; 
  CompassType compassTypea; 
  float s; 
  float c; 
  CgStatic *v300; 
  rectDef_s mapRect; 
  rectDef_s *v302; 
  SecureVec3 out; 
  const vec4_t *v304; 
  GfxImage *v305; 
  const vec4_t *v306; 
  vec4_t v307; 
  GfxImage *v308[2]; 
  vec4_t v309; 
  vec2_t v310; 
  vec2_t outVector; 
  char v312; 
  void *retaddr; 

  _RAX = &retaddr;
  v308[1] = (GfxImage *)-2i64;
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
  v293 = cropPartialMap;
  compassTypea = compassType;
  v305 = (GfxImage *)objectiveIcon;
  v302 = (rectDef_s *)rect;
  v304 = objectiveColor;
  v306 = objectiveSecondaryColor;
  *(_QWORD *)v307.v = playerNumberColor;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&y = CgStatic::ms_allocatedCount;
    LODWORD(x) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", x, y) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[m_localClientNum] )
  {
    LODWORD(y) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", y) )
      __debugbreak();
  }
  v300 = CgStatic::ms_cgameStaticsArray[m_localClientNum];
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
    v31 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  else
    v31 = NULL;
  Handler = CgHandler::getHandler(this->m_localClientNum);
  IsGameTypeQuick_BR = BG_IsGameTypeQuick_BR(Handler);
  v34 = !IsGameTypeQuick_BR;
  if ( IsGameTypeQuick_BR )
  {
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vmovaps xmm0, xmm8
    }
  }
  else
  {
    CG_Radar_GetJammingLevel((const LocalClientNum_t)this->m_localClientNum);
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vsubss  xmm0, xmm8, xmm0
    }
  }
  _RDI = color;
  __asm
  {
    vmulss  xmm10, xmm0, dword ptr [rdi+0Ch]
    vxorps  xmm9, xmm9, xmm9
    vucomiss xmm10, xmm9
  }
  if ( !v34 && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 0xCu) )
  {
    __asm
    {
      vmovss  xmm12, dword ptr [rdi]
      vmovss  [rbp+120h+var_174], xmm12
      vmovss  xmm14, dword ptr [rdi+4]
      vmovss  [rbp+120h+var_178], xmm14
      vmovss  xmm15, dword ptr [rdi+8]
      vmovss  [rbp+120h+var_17C], xmm15
    }
    _RAX = secondaryColor;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  dword ptr [rbp+120h+var_100], xmm0
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rbp+120h+var_100+4], xmm1
      vmovss  xmm0, dword ptr [rax+8]
      vmovss  dword ptr [rbp+120h+var_100+8], xmm0
    }
    if ( !v31 || !v31->m_isMLGSpectator )
    {
      this->GetPlayerCompassColor(this, &v309, LocalClientGlobals);
      if ( CG_GameInterface_PlayingArena() )
      {
        v47 = v300->GetClientInfo(v300, (unsigned int)LocalClientGlobals->predictedPlayerState.clientNum);
        if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2130, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
          __debugbreak();
        if ( (v47->game_extrainfo & 7) != 0 )
          LUI_CoD_GameMP_GetBrColorForClientNum(v47->clientNum, &v309);
      }
    }
    __asm
    {
      vmovaps xmm13, xmm8
      vmovss  dword ptr [rbp+120h+var_100+0Ch], xmm10
    }
    if ( (!v31 || !v31->m_isMLGSpectator) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, GameModeFlagValues::ms_mpValue, 0x1Au) )
    {
      *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))this->GetGhostAlphaScale)(this);
      __asm
      {
        vmovaps xmm13, xmm0
        vmulss  xmm2, xmm0, dword ptr [rbp+120h+var_100+0Ch]
        vmovss  dword ptr [rbp+120h+var_100+0Ch], xmm2
      }
    }
    v50 = compassTypea;
    CG_CompassCalcDimensions(compassTypea, LocalClientGlobals, parentRect, v302, &LocalClientGlobals->compassMapWorldSize, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, [rbp+120h+mapRect.w]
      vaddss  xmm6, xmm1, [rbp+120h+mapRect.x]
      vmulss  xmm0, xmm3, [rbp+120h+mapRect.h]
      vaddss  xmm7, xmm0, [rbp+120h+mapRect.y]
      vmovss  dword ptr [rbp+120h+var_F0], xmm9
      vmovss  dword ptr [rbp+120h+var_F0+4], xmm9
    }
    v56 = v293;
    CgCompassSystem::GetCompassYaw(this, compassTypea, v293, LocalClientGlobals, (float *)&compassTypea, &outVector);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    v57 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    __asm
    {
      vmovss  xmm0, [rbp+120h+boundsRadius]
      vmovss  dword ptr [rsp+230h+fmt], xmm0
    }
    CgCompassSystem::WorldPosToCompass(this, v50, v293, &mapRect, fmt, &v57->compassMapWorldSize, &v57->compassMapUpperLeft, &v57->compassNorth, &outVector, (const vec2_t *)&out, (const vec2_t *)&out, NULL, &v310);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+120h+var_F0]
      vmovss  [rbp+120h+var_198], xmm0
      vmovss  xmm1, dword ptr [rbp+120h+var_F0+4]
      vmovss  [rbp+120h+var_19C], xmm1
    }
    CgCompassSystem::GetPlayerDrawSize(this, v50, largeMap, &outHeight, &outWidth);
    __asm
    {
      vaddss  xmm1, xmm6, [rbp+120h+var_198]
      vmovss  [rbp+120h+var_198], xmm1
      vaddss  xmm0, xmm7, [rbp+120h+var_19C]
      vmovss  [rbp+120h+var_19C], xmm0
    }
    *(double *)&_XMM0 = CgCompassSystem::GetPlayerAngle(this, LocalClientGlobals, v31, v50, v56);
    __asm { vmovaps xmm7, xmm0 }
    vertAlign = v302->vertAlign;
    horzAlign = v302->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, &v290, &v289, &outWidth, &outHeight, horzAlign, vertAlign);
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    v68 = CG_GetLocalClientGlobals((const LocalClientNum_t)v300->m_localClientNum);
    if ( !v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( v68->IsMP(v68) )
    {
      if ( (unsigned int)clientNum >= v68[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(ya) = v68[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(xa) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", xa, ya) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v68[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v68, clientNum);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2179, ASSERT_TYPE_ASSERT, "(localCharacterInfo)", (const char *)&queryFormat, "localCharacterInfo") )
      __debugbreak();
    if ( v31 && v31->m_isMLGSpectator )
    {
      if ( v31->clientNum != LocalClientGlobals->predictedPlayerState.clientNum )
      {
        __asm
        {
          vmovss  xmm5, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
          vmovss  xmm4, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
          vmovss  xmm3, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
          vmovss  xmm2, cs:__real@40000000
          vmulss  xmm6, xmm2, [rbp+120h+outHeight]
          vmulss  xmm0, xmm2, [rbp+120h+outWidth]
          vmovss  dword ptr [rsp+230h+var_1C0], xmm10
          vmovss  [rsp+230h+var_1C8], xmm3
          vmovss  dword ptr [rsp+230h+outClipped], xmm4
          vmovss  dword ptr [rsp+230h+var_1D8], xmm5
          vmovss  dword ptr [rsp+230h+in], xmm7
          vmovss  dword ptr [rsp+230h+playerWorldPos], xmm8
          vmovss  dword ptr [rsp+230h+h], xmm8
          vmovss  dword ptr [rsp+230h+w], xmm9
          vmovss  dword ptr [rsp+230h+y], xmm9
          vmovss  dword ptr [rsp+230h+x], xmm6
          vmovss  dword ptr [rsp+230h+fmt], xmm0
          vmovss  xmm3, [rbp+120h+var_19C]; centerY
          vmovss  xmm2, [rbp+120h+var_198]; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmta, xb, yb, w, h, playerWorldPos, in, v252, outClipped, v270, v279, cgMedia.compass.codcaster_fov_cone, luaVM);
        if ( hasBomb )
        {
          __asm
          {
            vmovss  xmm14, [rbp+120h+var_198]
            vmovss  xmm15, [rbp+120h+var_19C]
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassPlayerObjectiveHolderOverallSize, "compassPlayerObjectiveHolderOverallSize");
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSpectatedPlayerObjectiveArrowRadius, "compassSpectatedPlayerObjectiveArrowRadius");
          __asm { vmulss  xmm11, xmm0, xmm6 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassPlayerObjectiveHolderCicleSize, "compassPlayerObjectiveHolderCicleSize");
          __asm { vmovaps xmm10, xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassPlayerObjectiveHolderArrowSize, "compassPlayerObjectiveHolderArrowSize");
          __asm { vmovaps xmm12, xmm0 }
          if ( largeMap )
          {
            Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
            __asm { vmulss  xmm11, xmm11, xmm0 }
          }
          __asm { vmulss  xmm0, xmm7, cs:__real@3c8efa35; radians }
          FastSinCos(*(const float *)&_XMM0, &s, &c);
          __asm
          {
            vxorps  xmm4, xmm4, xmm4
            vcvtsi2ss xmm4, xmm4, rax
            vmulss  xmm1, xmm11, [rbp+120h+s]
            vmulss  xmm2, xmm1, xmm4
            vmulss  xmm3, xmm2, cs:__real@3a72b9d6
            vaddss  xmm14, xmm3, xmm14
            vmulss  xmm1, xmm11, [rbp+120h+c]
            vmulss  xmm2, xmm1, xmm4
            vmulss  xmm3, xmm2, cs:__real@ba72b9d6
            vaddss  xmm11, xmm3, xmm15
          }
          _RAX = v304;
          __asm
          {
            vmovss  xmm4, dword ptr [rax+8]
            vmovss  xmm2, dword ptr [rax+4]
            vmovss  xmm3, dword ptr [rax]
            vmulss  xmm0, xmm6, [rbp+120h+outHeight]
            vmulss  xmm0, xmm0, xmm10
            vmulss  xmm1, xmm6, [rbp+120h+outWidth]
            vmulss  xmm5, xmm1, xmm10
            vmovss  dword ptr [rsp+230h+var_1C0], xmm13
            vmovss  [rsp+230h+var_1C8], xmm4
            vmovss  dword ptr [rsp+230h+outClipped], xmm2
            vmovss  dword ptr [rsp+230h+var_1D8], xmm3
            vmovss  dword ptr [rsp+230h+in], xmm9
            vmovss  dword ptr [rsp+230h+playerWorldPos], xmm8
            vmovss  dword ptr [rsp+230h+h], xmm8
            vmovss  dword ptr [rsp+230h+w], xmm9
            vmovss  dword ptr [rsp+230h+y], xmm9
            vmovss  dword ptr [rsp+230h+x], xmm0
            vmovss  dword ptr [rsp+230h+fmt], xmm5
            vmovss  xmm3, [rbp+120h+var_19C]; centerY
            vmovss  xmm2, [rbp+120h+var_198]; centerX
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, xe, ye, wc, hc, playerWorldPosc, inc, v255, outClippedc, v273, v282, cgMedia.compass.minimap_codcaster_objective_circle_bg, luaVM);
          __asm
          {
            vmulss  xmm0, xmm6, [rbp+120h+outHeight]
            vmulss  xmm3, xmm0, xmm10
            vmulss  xmm1, xmm6, [rbp+120h+outWidth]
            vmulss  xmm2, xmm1, xmm10
            vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
            vmovss  dword ptr [rsp+230h+var_1C0], xmm0
            vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
            vmovss  [rsp+230h+var_1C8], xmm1
            vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
            vmovss  dword ptr [rsp+230h+outClipped], xmm0
            vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
            vmovss  dword ptr [rsp+230h+var_1D8], xmm1
            vmovss  dword ptr [rsp+230h+in], xmm9
            vmovss  dword ptr [rsp+230h+playerWorldPos], xmm8
            vmovss  dword ptr [rsp+230h+h], xmm8
            vmovss  dword ptr [rsp+230h+w], xmm9
            vmovss  dword ptr [rsp+230h+y], xmm9
            vmovss  dword ptr [rsp+230h+x], xmm3
            vmovss  dword ptr [rsp+230h+fmt], xmm2
            vmovss  xmm3, [rbp+120h+var_19C]; centerY
            vmovss  xmm2, [rbp+120h+var_198]; centerX
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmte, xf, yf, wd, hd, playerWorldPosd, ind, v256, outClippedd, v274, v283, cgMedia.compass.minimap_codcaster_objective_circle_outline, luaVM);
          if ( v305 )
          {
            _RAX = v306;
            __asm
            {
              vmovss  xmm2, dword ptr [rax+8]
              vmovss  xmm3, dword ptr [rax+4]
              vmovss  xmm4, dword ptr [rax]
              vmulss  xmm0, xmm6, [rbp+120h+outHeight]
              vmulss  xmm0, xmm0, xmm10
              vmulss  xmm1, xmm6, [rbp+120h+outWidth]
              vmulss  xmm5, xmm1, xmm10
              vmovss  dword ptr [rsp+230h+var_1C0], xmm8
              vmovss  [rsp+230h+var_1C8], xmm2
              vmovss  dword ptr [rsp+230h+outClipped], xmm3
              vmovss  dword ptr [rsp+230h+var_1D8], xmm4
              vmovss  dword ptr [rsp+230h+in], xmm9
              vmovss  dword ptr [rsp+230h+playerWorldPos], xmm8
              vmovss  dword ptr [rsp+230h+h], xmm8
              vmovss  dword ptr [rsp+230h+w], xmm9
              vmovss  dword ptr [rsp+230h+y], xmm9
              vmovss  dword ptr [rsp+230h+x], xmm0
              vmovss  dword ptr [rsp+230h+fmt], xmm5
              vmovss  xmm3, [rbp+120h+var_19C]; centerY
              vmovss  xmm2, [rbp+120h+var_198]; centerX
            }
            LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, xg, yg, we, he, playerWorldPose, ine, v257, outClippede, v275, v284, v305, luaVM);
          }
          __asm
          {
            vmulss  xmm0, xmm6, [rbp+120h+outHeight]
            vmulss  xmm3, xmm0, xmm12
            vmulss  xmm1, xmm6, [rbp+120h+outWidth]
            vmulss  xmm2, xmm1, xmm12
            vmovss  dword ptr [rsp+230h+var_1C0], xmm13
            vmovss  xmm0, [rbp+120h+var_17C]
            vmovss  [rsp+230h+var_1C8], xmm0
            vmovss  xmm0, [rbp+120h+var_178]
            vmovss  dword ptr [rsp+230h+outClipped], xmm0
            vmovss  xmm0, [rbp+120h+var_174]
            vmovss  dword ptr [rsp+230h+var_1D8], xmm0
            vmovss  dword ptr [rsp+230h+in], xmm7
            vmovss  dword ptr [rsp+230h+playerWorldPos], xmm8
            vmovss  dword ptr [rsp+230h+h], xmm8
            vmovss  dword ptr [rsp+230h+w], xmm9
            vmovss  dword ptr [rsp+230h+y], xmm9
            vmovss  dword ptr [rsp+230h+x], xmm3
            vmovss  dword ptr [rsp+230h+fmt], xmm2
            vmovaps xmm3, xmm11; centerY
            vmovaps xmm2, xmm14; centerX
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, xh, yh, wf, hf, playerWorldPosf, inf, v258, outClippedf, v276, v285, cgMedia.compass.minimap_codcaster_objective_arrow_bg, luaVM);
          __asm
          {
            vmulss  xmm0, xmm6, [rbp+120h+outHeight]
            vmulss  xmm5, xmm0, xmm12
            vmulss  xmm1, xmm6, [rbp+120h+outWidth]
            vmulss  xmm4, xmm1, xmm12
            vmovss  xmm0, dword ptr [rbp+120h+var_100+0Ch]
            vmovss  dword ptr [rsp+230h+var_1C0], xmm0
            vmovss  xmm1, dword ptr [rbp+120h+var_100+8]
            vmovss  [rsp+230h+var_1C8], xmm1
            vmovss  xmm0, dword ptr [rbp+120h+var_100+4]
            vmovss  dword ptr [rsp+230h+outClipped], xmm0
            vmovss  xmm1, dword ptr [rbp+120h+var_100]
            vmovss  dword ptr [rsp+230h+var_1D8], xmm1
            vmovss  dword ptr [rsp+230h+in], xmm7
            vmovss  dword ptr [rsp+230h+playerWorldPos], xmm8
            vmovss  dword ptr [rsp+230h+h], xmm8
            vmovss  dword ptr [rsp+230h+w], xmm9
            vmovss  dword ptr [rsp+230h+y], xmm9
            vmovss  dword ptr [rsp+230h+x], xmm5
            vmovss  dword ptr [rsp+230h+fmt], xmm4
            vmovaps xmm3, xmm11; centerY
            vmovaps xmm2, xmm14; centerX
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmth, xi, yi, wg, hg, playerWorldPosg, ing, v259, outClippedg, v277, v286, cgMedia.compass.minimap_codcaster_objective_arrow_outline, luaVM);
          __asm { vxorps  xmm7, xmm7, xmm7 }
        }
        else
        {
          __asm
          {
            vmovss  xmm6, cs:__real@3f4ccccd
            vmovss  xmm11, [rbp+120h+fadeTime]
            vcomiss xmm11, xmm9
            vmovss  dword ptr [rbp+120h+var_100+0Ch], xmm10
            vmulss  xmm3, xmm6, [rbp+120h+outHeight]
            vmulss  xmm2, xmm6, [rbp+120h+outWidth]
            vmovss  dword ptr [rsp+230h+var_1C0], xmm10
            vmovss  xmm0, dword ptr [rbp+120h+var_100+8]
            vmovss  [rsp+230h+var_1C8], xmm0
            vmovss  xmm1, dword ptr [rbp+120h+var_100+4]
            vmovss  dword ptr [rsp+230h+outClipped], xmm1
            vmovss  xmm0, dword ptr [rbp+120h+var_100]
            vmovss  dword ptr [rsp+230h+var_1D8], xmm0
            vmovss  dword ptr [rsp+230h+in], xmm7
            vmovss  dword ptr [rsp+230h+playerWorldPos], xmm8
            vmovss  dword ptr [rsp+230h+h], xmm8
            vmovss  dword ptr [rsp+230h+w], xmm9
            vmovss  dword ptr [rsp+230h+y], xmm9
            vmovss  dword ptr [rsp+230h+x], xmm3
            vmovss  dword ptr [rsp+230h+fmt], xmm2
            vmovss  xmm3, [rbp+120h+var_19C]; centerY
            vmovss  xmm2, [rbp+120h+var_198]; centerX
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, xc, yc, wa, ha, playerWorldPosa, ina, v253, outClippeda, v271, v280, cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border, luaVM);
          material = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_bg;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGLargeMapInnerArrowOpacity, "compassMLGLargeMapInnerArrowOpacity");
          __asm
          {
            vmulss  xmm2, xmm0, xmm13
            vmulss  xmm4, xmm6, [rbp+120h+outHeight]
            vmulss  xmm3, xmm6, [rbp+120h+outWidth]
            vmovss  dword ptr [rsp+230h+var_1C0], xmm2
            vmovss  [rsp+230h+var_1C8], xmm15
            vmovss  dword ptr [rsp+230h+outClipped], xmm14
            vmovss  dword ptr [rsp+230h+var_1D8], xmm12
            vmovss  dword ptr [rsp+230h+in], xmm7
            vmovss  dword ptr [rsp+230h+playerWorldPos], xmm8
            vmovss  dword ptr [rsp+230h+h], xmm8
            vmovss  dword ptr [rsp+230h+w], xmm9
            vmovss  dword ptr [rsp+230h+y], xmm9
            vmovss  dword ptr [rsp+230h+x], xmm4
            vmovss  dword ptr [rsp+230h+fmt], xmm3
            vmovss  xmm3, [rbp+120h+var_19C]; centerY
            vmovss  xmm2, [rbp+120h+var_198]; centerX
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, xd, yd, wb, hb, playerWorldPosb, inb, v254, outClippedb, v272, v281, material, luaVM);
        }
        _RAX = *(_QWORD *)v307.v;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups [rbp+120h+var_120], xmm0
          vmovss  dword ptr [rsp+230h+fmt], xmm7
          vmovss  xmm3, [rbp+120h+var_19C]
          vmovss  xmm2, [rbp+120h+var_198]
        }
        CgCompassSystem::DrawPlayerNumber(this, LocalClientGlobals->predictedPlayerState.clientNum, *(float *)&_XMM2, *(float *)&_XMM3, fmti, CharacterInfo->team, hasBomb, largeMap, &v307, v300, element, luaVM);
      }
    }
    else
    {
      this->GetPlayerCompassMaterial(this, LocalClientGlobals, (const GfxImage **)v308);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+120h+var_100+0Ch]
        vmovss  dword ptr [rsp+230h+var_1C0], xmm0
        vmovss  xmm1, dword ptr [rbp+120h+var_100+8]
        vmovss  [rsp+230h+var_1C8], xmm1
        vmovss  xmm0, dword ptr [rbp+120h+var_100+4]
        vmovss  dword ptr [rsp+230h+outClipped], xmm0
        vmovss  xmm1, dword ptr [rbp+120h+var_100]
        vmovss  dword ptr [rsp+230h+var_1D8], xmm1
        vmovss  dword ptr [rsp+230h+in], xmm7
        vmovss  dword ptr [rsp+230h+playerWorldPos], xmm8
        vmovss  dword ptr [rsp+230h+h], xmm8
        vmovss  dword ptr [rsp+230h+w], xmm9
        vmovss  dword ptr [rsp+230h+y], xmm9
        vmovss  xmm0, [rbp+120h+outHeight]
        vmovss  dword ptr [rsp+230h+x], xmm0
        vmovss  xmm1, [rbp+120h+outWidth]
        vmovss  dword ptr [rsp+230h+fmt], xmm1
        vmovss  xmm3, [rbp+120h+var_19C]; centerY
        vmovss  xmm2, [rbp+120h+var_198]; centerX
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, xj, yj, wh, hh, playerWorldPosh, inh, v260, outClippedh, v278, v287, v308[0], luaVM);
    }
  }
  memset(&out, 0, sizeof(out));
  _R11 = &v312;
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
CgCompassSystem::DrawPlayerMap
==============
*/
void CgCompassSystem::DrawPlayerMap(CgCompassSystem *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, Material *material, const vec4_t *color, GfxImage *mapMask, GfxImage *mapOverlay, GfxImage *mapRotOverlay, LUIElement *element, lua_State *luaVM)
{
  lua_State *v28; 
  Material *compassMapMaterial; 
  bool v31; 
  bool v32; 
  bool v39; 
  CgGlobalsMP *LocalClientGlobals; 
  CgCompassSystem *CompassSystem; 
  const dvar_t *v59; 
  __int64 m_localClientNum; 
  LocalClientNum_t v65; 
  int v100; 
  int v101; 
  const ScreenPlacement *v102; 
  const dvar_t *v103; 
  GfxImage *v108; 
  const dvar_t *v114; 
  char enabled; 
  unsigned int v116; 
  unsigned int v153; 
  MouseCursorPos v154; 
  int v169; 
  __int64 v170; 
  float *p_y; 
  float v172; 
  float v173; 
  int v174; 
  int v175; 
  int v176; 
  const char *v177; 
  bool v190; 
  int v191; 
  const GfxImage *v207; 
  const dvar_t *v208; 
  int v244; 
  int v245; 
  const ScreenPlacement *v246; 
  int ControllerFromClient; 
  int v262; 
  int v263; 
  bool IsPlayerUsingButtonLayoutBumperPing; 
  unsigned __int8 v266; 
  unsigned __int8 v267; 
  bool m_PreventZoom; 
  int v332; 
  char v333; 
  char v334; 
  int v385; 
  int v391; 
  CgGlobalsMP *v392; 
  float v393; 
  __int64 v394; 
  int compassMapTiles; 
  __int64 v398; 
  const char *v419; 
  bool v420; 
  __int64 v421; 
  const GfxImage *tile; 
  __int64 v423; 
  int framesDelayed; 
  lua_State *v435; 
  bool v436; 
  bool v437; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  CgWeaponMap *Instance; 
  bool v479; 
  bool v480; 
  char v484; 
  bool v485; 
  bool v490; 
  char v491; 
  bool v492; 
  bool v497; 
  float fmta; 
  float fmtb; 
  float fmt; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float fmto; 
  vec2_t *outVector; 
  float outVectorb; 
  float outVectora; 
  float outVectorc; 
  float outVectord; 
  float outVectore; 
  float outVectorf; 
  float outVectorg; 
  float outVectorh; 
  float outVectori; 
  float outVectorj; 
  float outVectork; 
  float outVectorl; 
  float outVectorm; 
  float outVectorn; 
  float *y; 
  float yb; 
  float ya; 
  float yc; 
  float yd; 
  float ye; 
  float yf; 
  float yg; 
  float yh; 
  float yi; 
  float yj; 
  float yk; 
  float yl; 
  float ym; 
  float yn; 
  float wa; 
  float w; 
  float wb; 
  float wc; 
  float wd; 
  float we; 
  float wf; 
  float wg; 
  float wh; 
  float wi; 
  float wj; 
  float wk; 
  float wl; 
  float wm; 
  float h; 
  float ha; 
  float hb; 
  float hc; 
  float hd; 
  float he; 
  float v613; 
  const GfxImage *v614; 
  float v615; 
  float v616; 
  float v617; 
  float v618; 
  float v619; 
  float v620; 
  float v621; 
  float v622; 
  float v623; 
  float v624; 
  float v625; 
  float viewportSize; 
  float viewportSizea; 
  float image; 
  float imagea; 
  float v630; 
  float v631; 
  char v633; 
  float outAngle; 
  float vMax; 
  float v636; 
  float alphaOffset; 
  float x; 
  float uvAngle; 
  char v640; 
  float v641; 
  int IsGamepadEnabled; 
  lua_State *v643; 
  char v644; 
  GfxImage *v645; 
  SecureVec3 out; 
  const vec4_t *v647; 
  __int64 v648; 
  rectDef_s *parentRecta; 
  MouseCursorPos curPos; 
  CgGlobalsMP *cgameGlobMP; 
  vec2_t outWorldPosition; 
  MouseCursorPos v653; 
  vec4_t v654; 
  vec4_t v655; 
  int v656; 
  vec4_t v657; 
  _DWORD v658[8]; 
  int v659; 
  vec4_t v660[4]; 
  vec4_t verts[4]; 
  vec4_t quadVerts[4]; 
  char v663; 
  void *retaddr; 

  _RAX = &retaddr;
  v648 = -2i64;
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
  parentRecta = (rectDef_s *)parentRect;
  _R15 = this;
  _RBX = rect;
  _R12 = color;
  v647 = color;
  v653 = (MouseCursorPos)mapMask;
  *(_QWORD *)v655.v = mapOverlay;
  *(_QWORD *)v657.v = mapRotOverlay;
  _RSI = element;
  outWorldPosition = (vec2_t)element;
  v28 = luaVM;
  v643 = luaVM;
  _R13 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !_R13->compassMapMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 691, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapMaterial)", (const char *)&queryFormat, "cgameGlob->compassMapMaterial") )
    __debugbreak();
  compassMapMaterial = _R13->compassMapMaterial;
  v31 = compassMapMaterial->textureCount == 0;
  if ( !compassMapMaterial->textureCount )
  {
    v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 692, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapMaterial->textureCount > 0)", (const char *)&queryFormat, "cgameGlob->compassMapMaterial->textureCount > 0");
    v31 = !v32;
    if ( v32 )
      __debugbreak();
  }
  v645 = _R13->compassMapMaterial->textureTable->image;
  __asm
  {
    vmovss  xmm2, dword ptr [r12+0Ch]
    vxorps  xmm10, xmm10, xmm10
    vucomiss xmm2, xmm10
  }
  if ( v31 )
    goto LABEL_212;
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vmovss  dword ptr [rbp+210h+var_208], xmm0
    vmovss  xmm1, dword ptr [r12+4]
    vmovss  dword ptr [rbp+210h+var_208+4], xmm1
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  dword ptr [rbp+210h+var_208+8], xmm0
    vmovss  dword ptr [rbp+210h+var_208+0Ch], xmm2
  }
  _R12 = &_R13->compassMapWorldSize;
  __asm { vucomiss xmm10, dword ptr [r12] }
  if ( v31 )
  {
    v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 703, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapWorldSize[0] != 0)", (const char *)&queryFormat, "cgameGlob->compassMapWorldSize[0] != 0");
    v31 = !v39;
    if ( v39 )
      __debugbreak();
  }
  __asm { vucomiss xmm10, dword ptr [r12+4] }
  if ( v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 704, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapWorldSize[1] != 0)", (const char *)&queryFormat, "cgameGlob->compassMapWorldSize[1] != 0") )
    __debugbreak();
  LocalClientGlobals = NULL;
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)_R15->m_localClientNum);
  cgameGlobMP = LocalClientGlobals;
  if ( compassType )
  {
    if ( compassType != COMPASS_TYPE_TACMAP )
    {
      if ( compassType != COMPASS_TYPE_FULL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1378, ASSERT_TYPE_ASSERT, "(compassType == CompassType::COMPASS_TYPE_FULL)", (const char *)&queryFormat, "compassType == CompassType::COMPASS_TYPE_FULL") )
        __debugbreak();
      CG_CompassCalcDimensions(compassType, _R13, parentRecta, rect, &_R13->compassMapWorldSize, &v641, &vMax, &outAngle, &uvAngle);
      vertAlign = rect->vertAlign;
      horzAlign = rect->horzAlign;
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)_R15->m_localClientNum);
      ScrPlace_ApplyRect(ActivePlacement, &v641, &vMax, &outAngle, &uvAngle, horzAlign, vertAlign);
      __asm
      {
        vmovss  xmm1, [rbp+210h+vMax]; top
        vaddss  xmm3, xmm1, [rbp+210h+uvAngle]; bottom
        vmovss  xmm0, [rbp+210h+var_270]; left
        vaddss  xmm2, xmm0, [rbp+210h+outAngle]; right
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vmovss  xmm9, cs:__real@3f000000
      }
      if ( cgameGlobMP && cgameGlobMP->m_isMLGSpectator && _R15->MapShouldRotate(_R15) )
      {
        *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))_R15->MapRotationFactor)(_R15);
        __asm
        {
          vmovss  dword ptr [rsp+330h+h], xmm0
          vmovss  dword ptr [rsp+330h+w], xmm9
          vmovss  dword ptr [rsp+330h+y], xmm9
          vmovss  dword ptr [rsp+330h+outVector], xmm9
          vmovss  dword ptr [rsp+330h+fmt], xmm9
        }
        LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)_R15->m_localClientNum, element, luaVM, (const vec4_t (*)[4])verts, fmtm, outVectorl, yl, wk, hd, &v654, v645);
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rsp+330h+w], xmm8
          vmovss  dword ptr [rsp+330h+y], xmm8
          vmovss  dword ptr [rsp+330h+outVector], xmm10
          vmovss  dword ptr [rsp+330h+fmt], xmm10
        }
        LUI_Render_DrawImage((const LocalClientNum_t)_R15->m_localClientNum, element, luaVM, (const vec4_t (*)[4])verts, fmtn, outVectorm, ym, wl, &v654, v645);
      }
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)_R15->m_localClientNum);
      v479 = TopDownMapData_HasData() && _R13->compassMapTDMDMaterial;
      v480 = BG_IsLocationSelectorActive(Instance, &_R13->predictedPlayerState) && !CL_Keys_IsCatcherActive(_R15->m_localClientNum, 16);
      if ( v479 && v480 && (_R13->predictedPlayerState.locationSelectionInfo & 2) != 0 )
      {
        __asm
        {
          vmovss  [rbp+210h+var_210.x], xmm10
          vmovss  [rbp+210h+var_210.y], xmm8
        }
        vectoyaw((const vec2_t *)&v653);
        __asm
        {
          vmovss  xmm1, dword ptr [r13+49FFCh]
          vsubss  xmm11, xmm1, xmm0
          vmulss  xmm1, xmm11, cs:__real@bc8efa35; radians
        }
        Vec2Rotate(&_R13->compassMapWorldSize, *(float *)&_XMM1, (vec2_t *)&parentRecta);
        __asm
        {
          vmovss  xmm7, dword ptr [rbp+210h+parentRect]
          vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm6, dword ptr [rbp+210h+parentRect+4]
          vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm7, xmm10
        }
        if ( v484 | v485 )
        {
          v490 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1415, ASSERT_TYPE_ASSERT, "(mapSizeW[0] > 0.f)", (const char *)&queryFormat, "mapSizeW[0] > 0.f");
          v484 = 0;
          v485 = !v490;
          if ( v490 )
            __debugbreak();
        }
        __asm { vcomiss xmm6, xmm10 }
        if ( v484 | v485 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1416, ASSERT_TYPE_ASSERT, "(mapSizeW[1] > 0.f)", (const char *)&queryFormat, "mapSizeW[1] > 0.f") )
          __debugbreak();
        TopDownMapData_GetCorners((vec2_t *)&cgameGlobMP, (vec2_t *)&curPos);
        __asm
        {
          vmovss  xmm0, [rbp+210h+curPos.x]
          vsubss  xmm13, xmm0, dword ptr [rbp+210h+cgameGlobMP]
          vmovss  xmm0, [rbp+210h+curPos.y]
          vsubss  xmm12, xmm0, dword ptr [rbp+210h+cgameGlobMP+4]
          vcomiss xmm13, xmm10
        }
        if ( v491 | v492 )
        {
          v497 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1423, ASSERT_TYPE_ASSERT, "(tdmdSizeW[0] > 0.f)", (const char *)&queryFormat, "tdmdSizeW[0] > 0.f");
          v491 = 0;
          v492 = !v497;
          if ( v497 )
            __debugbreak();
        }
        __asm { vcomiss xmm12, xmm10 }
        if ( v491 | v492 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1424, ASSERT_TYPE_ASSERT, "(tdmdSizeW[1] > 0.f)", (const char *)&queryFormat, "tdmdSizeW[1] > 0.f") )
          __debugbreak();
        __asm
        {
          vmulss  xmm1, xmm13, [rbp+210h+outAngle]
          vdivss  xmm14, xmm1, xmm7
          vmulss  xmm1, xmm12, [rbp+210h+uvAngle]
          vdivss  xmm15, xmm1, xmm6
          vmovss  dword ptr [rbp+210h+parentRect], xmm9
          vmovss  dword ptr [rbp+210h+parentRect+4], xmm9
        }
        CG_CompassFullToWorld(_R13, (const vec2_t *)&parentRecta, &outWorldPosition);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+210h+cgameGlobMP]
          vaddss  xmm3, xmm0, [rbp+210h+curPos.x]
          vmovss  xmm1, dword ptr [rbp+210h+cgameGlobMP+4]
          vaddss  xmm2, xmm1, [rbp+210h+curPos.y]
          vmulss  xmm0, xmm3, xmm9
          vmulss  xmm5, xmm2, xmm9
          vsubss  xmm4, xmm0, dword ptr [rbp+210h+outWorldPosition]
          vdivss  xmm1, xmm14, xmm13
          vmulss  xmm0, xmm1, xmm4
          vmovss  dword ptr [rbp+210h+parentRect], xmm0
          vsubss  xmm2, xmm5, dword ptr [rbp+210h+outWorldPosition+4]
          vdivss  xmm1, xmm15, xmm12
          vmulss  xmm0, xmm2, xmm1
          vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
          vmovss  dword ptr [rbp+210h+parentRect+4], xmm2
          vmulss  xmm1, xmm11, cs:__real@3c8efa35; radians
        }
        Vec2Rotate((const vec2_t *)&parentRecta, *(float *)&_XMM1, &outWorldPosition);
        __asm
        {
          vmulss  xmm1, xmm9, [rbp+210h+outAngle]
          vaddss  xmm3, xmm1, [rbp+210h+var_270]
          vmulss  xmm0, xmm9, [rbp+210h+uvAngle]
          vaddss  xmm4, xmm0, [rbp+210h+vMax]
          vmulss  xmm7, xmm14, xmm9
          vaddss  xmm0, xmm3, dword ptr [rbp+210h+outWorldPosition]
          vsubss  xmm5, xmm0, xmm7
          vmulss  xmm6, xmm15, xmm9
          vaddss  xmm0, xmm4, dword ptr [rbp+210h+outWorldPosition+4]
          vsubss  xmm3, xmm0, xmm6
          vmulss  xmm12, xmm9, dword ptr [rbp+210h+var_208]
          vmovss  xmm13, dword ptr [rbp+210h+var_208+4]
          vmovss  xmm0, dword ptr [rbp+210h+var_208+8]
          vmulss  xmm1, xmm0, cs:__real@3e4ccccd
          vmovss  [rbp+210h+var_26C], xmm1
          vmulss  xmm9, xmm9, dword ptr [rbp+210h+var_208+0Ch]
          vaddss  xmm7, xmm7, xmm5
          vaddss  xmm6, xmm6, xmm3
        }
        if ( !_R13->compassMapTDMDMaterial->textureCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1462, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapTDMDMaterial->textureCount > 0)", (const char *)&queryFormat, "cgameGlob->compassMapTDMDMaterial->textureCount > 0") )
          __debugbreak();
        __asm
        {
          vmovss  dword ptr [rsp+330h+image], xmm9
          vmovss  xmm0, [rbp+210h+var_26C]
          vmovss  dword ptr [rsp+330h+viewportSize], xmm0
          vmovss  dword ptr [rsp+330h+var_2D0], xmm13
          vmovss  [rsp+330h+var_2D8], xmm12
          vmovss  dword ptr [rsp+330h+var_2E0], xmm11
          vmovss  dword ptr [rsp+330h+var_2E8], xmm8
          vmovss  dword ptr [rsp+330h+h], xmm8
          vmovss  dword ptr [rsp+330h+w], xmm10
          vmovss  dword ptr [rsp+330h+y], xmm10
          vmovss  dword ptr [rsp+330h+outVector], xmm15
          vmovss  dword ptr [rsp+330h+fmt], xmm14
          vmovaps xmm3, xmm6; centerY
          vmovaps xmm2, xmm7; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)_R15->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmto, outVectorn, yn, wm, he, v616, v619, v622, v625, viewportSizea, imagea, _R13->compassMapTDMDMaterial->textureTable->image, luaVM);
      }
      goto LABEL_212;
    }
    IsGamepadEnabled = CL_Input_IsGamepadEnabled(_R15->m_localClientNum);
    CG_CompassCalcDimensions(COMPASS_TYPE_TACMAP, _R13, parentRecta, rect, &_R13->compassMapWorldSize, &v636, &alphaOffset, &vMax, &x);
    v244 = rect->vertAlign;
    v245 = rect->horzAlign;
    v246 = ScrPlace_GetActivePlacement((const LocalClientNum_t)_R15->m_localClientNum);
    ScrPlace_ApplyRect(v246, &v636, &alphaOffset, &vMax, &x, v245, v244);
    _RBX = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)_R15->m_localClientNum);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1096, ASSERT_TYPE_ASSERT, "(compassSystem)", (const char *)&queryFormat, "compassSystem") )
      __debugbreak();
    if ( CL_Keys_IsCatcherActive(_R15->m_localClientNum, 16) && _R15->m_PreventZoom )
      _RBX->m_PreventZoom = 0;
    _RDI = DVARFLT_compassTacMapZoomMaxLevel;
    if ( !DVARFLT_compassTacMapZoomMaxLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacMapZoomMaxLevel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm3, dword ptr [rdi+28h] }
    _EDX = 1;
    __asm
    {
      vmovd   xmm1, edx
      vmovd   xmm0, dword ptr [r13+4A02Ch]
      vpcmpgtq xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3f19999a
      vblendvps xmm0, xmm1, xmm3, xmm2
      vmovss  [rbp+210h+outAngle], xmm0
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [r13+65E4h]
      vmulss  xmm11, xmm2, cs:__real@3a83126f
      vmovss  xmm12, dword ptr [r15+20h]
    }
    ControllerFromClient = CL_Mgr_GetControllerFromClient(_R15->m_localClientNum);
    IN_GetCursorPos(ControllerFromClient, &curPos);
    __asm { vmovss  xmm13, cs:__real@3f000000 }
    v262 = IsGamepadEnabled;
    if ( !IsGamepadEnabled || Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_CP_TacOpsMap_interactions, "killswitch_CP_TacOpsMap_interactions") && (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+0CCh]
        vmovss  xmm0, dword ptr [rsi+0D4h]
        vsubss  xmm7, xmm0, xmm2
        vmovss  xmm4, dword ptr [rsi+0D0h]
        vmovss  xmm1, dword ptr [rsi+0D8h]
        vsubss  xmm6, xmm1, xmm4
        vmovss  xmm3, dword ptr [rsi+34h]
        vmulss  xmm0, xmm7, xmm13
        vmulss  xmm1, xmm0, xmm3
        vsubss  xmm8, xmm2, xmm1
        vmulss  xmm2, xmm6, xmm13
        vmulss  xmm0, xmm2, xmm3
        vsubss  xmm5, xmm4, xmm0
        vmovss  xmm9, cs:__real@3f800000
        vaddss  xmm1, xmm3, xmm9
        vmulss  xmm0, xmm1, xmm7
        vmulss  xmm2, xmm1, xmm6
        vinsertps xmm8, xmm8, xmm5, 10h
        vinsertps xmm8, xmm8, xmm0, 20h ; ' '
        vinsertps xmm8, xmm8, xmm2, 30h ; '0'
        vmovups xmmword ptr [rbx+0C8h], xmm8
      }
      *(_DWORD *)&_RBX->m_tacmapRectangle.horzAlign = v656;
      Dvar_GetFloat_Internal_DebugName(DVARFLT_compassTacMapMouseZoomSpeedFactor, "compassTacMapMouseZoomSpeedFactor");
      __asm
      {
        vmulss  xmm1, xmm11, dword ptr [rsi+48h]
        vmulss  xmm0, xmm1, xmm0
        vaddss  xmm0, xmm0, xmm12; val
        vmovaps xmm2, xmm9; max
        vmovss  xmm1, [rbp+210h+outAngle]; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm8, xmm0
        vucomiss xmm10, dword ptr [rsi+48h]
      }
      if ( !v31 )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rbx+0D0h]
          vmovss  xmm7, dword ptr [rbx+0D4h]
          vmovd   xmm5, [rbp+210h+curPos.y]
          vcvtdq2ps xmm5, xmm5
          vmovss  xmm6, dword ptr [r13+4A088h]
          vmulss  xmm0, xmm3, xmm13
          vaddss  xmm2, xmm0, dword ptr [rbx+0C8h]
          vmovd   xmm1, [rbp+210h+curPos.x]
          vcvtdq2ps xmm1, xmm1
          vsubss  xmm2, xmm2, xmm1
          vmulss  xmm0, xmm2, xmm8
          vdivss  xmm3, xmm0, xmm3
          vaddss  xmm1, xmm3, dword ptr [r13+4A084h]
          vmovss  dword ptr [rbx+5F4h], xmm1
          vmulss  xmm0, xmm7, xmm13
          vaddss  xmm2, xmm0, dword ptr [rbx+0CCh]
          vsubss  xmm1, xmm2, xmm5
          vmulss  xmm3, xmm1, xmm8
          vdivss  xmm0, xmm3, xmm7
          vaddss  xmm2, xmm0, xmm6
          vmovss  dword ptr [rbx+5F8h], xmm2
        }
      }
    }
    else
    {
      v263 = CL_Mgr_GetControllerFromClient(_R13->localClientNum);
      IsPlayerUsingButtonLayoutBumperPing = CG_IsPlayerUsingButtonLayoutBumperPing(v263);
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassTacMapZoomSpeedFactor, "compassTacMapZoomSpeedFactor");
      __asm { vmovaps xmm7, xmm0 }
      v266 = 5;
      if ( IsPlayerUsingButtonLayoutBumperPing )
        v266 = 2;
      v267 = 6;
      if ( IsPlayerUsingButtonLayoutBumperPing )
        v267 = 4;
      m_PreventZoom = _R15->m_PreventZoom;
      __asm { vmovss  xmm9, cs:__real@3f800000 }
      if ( m_PreventZoom )
      {
        __asm { vxorps  xmm6, xmm6, xmm6 }
      }
      else
      {
        _EAX = CL_Keys_IsKeyDown(_R15->m_localClientNum, v266);
        _EDI = 0;
        __asm
        {
          vmovd   xmm1, edi
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm9, xmm10, xmm2
        }
        m_PreventZoom = _R15->m_PreventZoom;
        __asm
        {
          vmovaps xmm6, xmm0
          vmovss  [rbp+210h+var_26C], xmm0
        }
      }
      if ( m_PreventZoom )
      {
        __asm { vxorps  xmm1, xmm1, xmm1 }
      }
      else
      {
        _EAX = CL_Keys_IsKeyDown(_R15->m_localClientNum, v267);
        __asm
        {
          vmovd   xmm1, edi
          vmovd   xmm0, eax
          vpcmpeqd xmm3, xmm0, xmm1
          vmovss  xmm2, cs:__real@80000000
          vmovss  xmm1, cs:__real@bf800000
          vblendvps xmm0, xmm1, xmm2, xmm3
          vmovaps xmm1, xmm0
          vmovss  [rbp+210h+var_26C], xmm0
        }
      }
      __asm
      {
        vaddss  xmm0, xmm1, xmm6
        vmulss  xmm1, xmm0, xmm11
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm0, xmm2, xmm12; val
        vmovaps xmm2, xmm9; max
        vmovss  xmm1, [rbp+210h+outAngle]; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm8, xmm0 }
    }
    __asm { vmovss  dword ptr [rbx+20h], xmm8 }
    element->currentAnimationState.userDataInt = 0;
    __asm
    {
      vmulss  xmm8, xmm13, dword ptr [r15+20h]
      vdivss  xmm14, xmm9, dword ptr [r15+20h]
    }
    if ( v262 )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [r13+4A084h]
        vmovss  xmm11, dword ptr [r13+4A088h]
      }
    }
    else
    {
      if ( !CL_Keys_IsKeyDown(_R15->m_localClientNum, 187) )
        goto LABEL_215;
      if ( _RBX->m_currentCompassType != COMPASS_TYPE_TACMAP )
        goto LABEL_215;
      v332 = CL_Mgr_GetControllerFromClient(_RBX->m_localClientNum);
      IN_GetCursorPos(v332, &v653);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, [rbp+210h+var_210.x]
        vmovss  xmm0, dword ptr [rbx+0C8h]
        vcomiss xmm0, xmm1
      }
      if ( !v333 )
        goto LABEL_215;
      __asm
      {
        vmovss  xmm5, dword ptr [rbx+0D0h]
        vaddss  xmm0, xmm0, xmm5
        vcomiss xmm0, xmm1
      }
      if ( v333 | v334 )
        goto LABEL_215;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, [rbp+210h+var_210.y]
        vmovss  xmm0, dword ptr [rbx+0CCh]
        vcomiss xmm0, xmm1
      }
      if ( !v333 )
        goto LABEL_215;
      __asm
      {
        vmovss  xmm11, dword ptr [rbx+0D4h]
        vaddss  xmm0, xmm0, xmm11
        vcomiss xmm0, xmm1
      }
      if ( !(v333 | v334) )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, [rbp+210h+curPos.x]
          vxorps  xmm7, xmm7, xmm7
          vcvtsi2ss xmm7, xmm7, [rbp+210h+curPos.y]
        }
        if ( _RBX->m_tacmapIsFirstDragInput )
        {
          __asm
          {
            vmovss  dword ptr [rbx+604h], xmm6
            vmovss  dword ptr [rbx+608h], xmm7
            vmovss  dword ptr [rbx+5FCh], xmm6
            vmovss  dword ptr [rbx+600h], xmm7
          }
          _RBX->m_tacmapIsFirstDragInput = 0;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+5FCh]
          vsubss  xmm3, xmm0, xmm6
          vmovss  xmm1, dword ptr [rbx+600h]
          vsubss  xmm4, xmm1, xmm7
          vmulss  xmm0, xmm3, dword ptr [rbx+20h]
          vdivss  xmm5, xmm0, xmm5
          vmulss  xmm1, xmm4, dword ptr [rbx+20h]
          vdivss  xmm3, xmm1, xmm11
          vaddss  xmm4, xmm5, dword ptr [rbx+5F4h]
          vaddss  xmm11, xmm3, dword ptr [rbx+5F8h]
          vmovss  dword ptr [rbx+5FCh], xmm6
          vmovss  dword ptr [rbx+600h], xmm7
        }
        if ( !_RBX->m_exceededMinDragDistance )
        {
          __asm
          {
            vsubss  xmm1, xmm6, dword ptr [rbx+604h]
            vsubss  xmm0, xmm7, dword ptr [rbx+608h]
            vmulss  xmm2, xmm0, xmm0
            vmulss  xmm1, xmm1, xmm1
            vaddss  xmm2, xmm2, xmm1
            vcomiss xmm2, cs:__real@41c80000
          }
          _RBX->m_exceededMinDragDistance = _RBX->m_exceededMinDragDistance;
        }
      }
      else
      {
LABEL_215:
        if ( !_RBX->m_tacmapIsFirstDragInput )
          *(_WORD *)&_RBX->m_exceededMinDragDistance = 256;
        __asm
        {
          vmovss  xmm4, dword ptr [rbx+5F4h]
          vmovss  xmm11, dword ptr [rbx+5F8h]
        }
      }
    }
    __asm
    {
      vsubss  xmm6, xmm9, xmm8
      vmovaps xmm2, xmm6; max
      vmovaps xmm1, xmm8; min
      vmovaps xmm0, xmm4; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm15, xmm0
      vmovaps xmm2, xmm6; max
      vmovaps xmm1, xmm8; min
      vmovaps xmm0, xmm11; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm11, xmm0
      vmovss  [rbp+210h+var_270], xmm0
      vmovss  dword ptr [rbx+5F4h], xmm15
      vmovss  dword ptr [rbx+5F8h], xmm0
      vcomiss xmm13, dword ptr [r15+20h]
    }
    if ( v333 | v31 )
    {
      __asm
      {
        vmovss  xmm1, [rbp+210h+alphaOffset]; top
        vaddss  xmm3, xmm1, [rbp+210h+x]; bottom
        vmovss  xmm0, [rbp+210h+var_284]; left
        vaddss  xmm2, xmm0, [rbp+210h+vMax]; right
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])v660);
      __asm
      {
        vmovss  dword ptr [rsp+330h+h], xmm10
        vmovss  dword ptr [rsp+330h+w], xmm8
        vmovss  dword ptr [rsp+330h+y], xmm8
        vmovss  dword ptr [rsp+330h+outVector], xmm11
        vmovss  dword ptr [rsp+330h+fmt], xmm15
      }
      v435 = v643;
      LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)_R15->m_localClientNum, element, v643, (const vec4_t (*)[4])v660, fmtj, outVectori, yi, wh, hc, &v654, v645);
LABEL_168:
      __asm
      {
        vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
        vmovss  dword ptr [rbp+210h+var_1E0], xmm0
        vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
        vmovss  dword ptr [rbp+210h+var_1E0+4], xmm1
        vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
        vmovss  dword ptr [rbp+210h+var_1E0+8], xmm0
        vmovss  xmm1, cs:__real@3ecccccd
        vmovss  dword ptr [rbp+210h+var_1E0+0Ch], xmm1
        vmovss  xmm12, cs:__real@3dcccccd
        vmovss  xmm8, cs:__real@40000000
        vmovss  xmm11, cs:__real@bf000000
      }
      for ( _EBX = 1; _EBX <= 9; v437 = _EBX == 9 )
      {
        __asm
        {
          vmovd   xmm0, ebx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm1, xmm0, xmm12
          vsubss  xmm2, xmm1, xmm15
          vsubss  xmm3, xmm1, [rbp+210h+var_270]
          vmulss  xmm0, xmm14, xmm2
          vmulss  xmm6, xmm14, xmm3
          vaddss  xmm2, xmm0, xmm13
          vaddss  xmm7, xmm6, xmm13
          vcomiss xmm2, xmm10
        }
        if ( !v436 )
        {
          __asm { vcomiss xmm2, xmm9 }
          if ( v436 || v437 )
          {
            __asm
            {
              vmovss  xmm1, [rbp+210h+alphaOffset]; top
              vaddss  xmm3, xmm1, [rbp+210h+x]; bottom
              vmulss  xmm2, xmm2, [rbp+210h+vMax]
              vaddss  xmm0, xmm2, [rbp+210h+var_284]; left
              vaddss  xmm2, xmm0, xmm8; right
            }
            LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])v660);
            __asm
            {
              vmovss  dword ptr [rsp+330h+w], xmm9
              vmovss  dword ptr [rsp+330h+y], xmm9
              vmovss  dword ptr [rsp+330h+outVector], xmm10
              vmovss  dword ptr [rsp+330h+fmt], xmm10
            }
            LUI_Render_DrawImage((const LocalClientNum_t)_R15->m_localClientNum, _RSI, v435, (const vec4_t (*)[4])v660, fmtk, outVectorj, yj, wi, &v657, rgp.blackImage);
          }
        }
        __asm { vcomiss xmm6, xmm11 }
        if ( !v436 )
        {
          __asm { vcomiss xmm7, xmm9 }
          if ( v436 || v437 )
          {
            __asm
            {
              vmulss  xmm1, xmm7, [rbp+210h+x]
              vaddss  xmm1, xmm1, [rbp+210h+alphaOffset]; top
              vaddss  xmm3, xmm1, xmm8; bottom
              vmovss  xmm0, [rbp+210h+var_284]; left
              vaddss  xmm2, xmm0, [rbp+210h+vMax]; right
            }
            LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])v660);
            __asm
            {
              vmovss  dword ptr [rsp+330h+w], xmm9
              vmovss  dword ptr [rsp+330h+y], xmm9
              vmovss  dword ptr [rsp+330h+outVector], xmm10
              vmovss  dword ptr [rsp+330h+fmt], xmm10
            }
            LUI_Render_DrawImage((const LocalClientNum_t)_R15->m_localClientNum, _RSI, v435, (const vec4_t (*)[4])v660, fmtl, outVectork, yk, wj, &v657, rgp.blackImage);
          }
        }
        v436 = (unsigned int)++_EBX < 9;
      }
      goto LABEL_212;
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+0D8h]
      vmaxss  xmm4, xmm1, xmm10
      vmovss  xmm2, dword ptr [rsi+0D4h]
      vmaxss  xmm3, xmm2, xmm10; right
      vmovss  xmm0, dword ptr [rsi+0D0h]
      vmaxss  xmm2, xmm0, xmm10; top
      vmovss  xmm1, dword ptr [rsi+0CCh]
      vmaxss  xmm1, xmm1, xmm10; left
      vmovss  dword ptr [rsp+330h+fmt], xmm4
    }
    LUI_Render_PushStencilRectangle((const LocalClientNum_t)_R15->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg);
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, rax
      vmulss  xmm0, xmm15, xmm2
      vcvttss2si edx, xmm0
      vmulss  xmm1, xmm2, xmm11
      vcvttss2si r14d, xmm1
    }
    v385 = _EDX + _R13->compassMapTiles * _ER14;
    __asm
    {
      vdivss  xmm1, xmm9, xmm2
      vmulss  xmm0, xmm1, [rbp+210h+vMax]
      vmulss  xmm8, xmm0, xmm14
      vmulss  xmm1, xmm1, [rbp+210h+x]
      vmulss  xmm12, xmm1, xmm14
    }
    v633 = 0;
    if ( v385 != _RBX->m_tacmapCenterTile )
    {
      _RBX->m_tacmapCenterTile = v385;
      v633 = 1;
    }
    v391 = _EDX - 4;
    IsGamepadEnabled = _EDX - 4;
    v392 = NULL;
    cgameGlobMP = NULL;
    LODWORD(v393) = _ER14 - 3;
    outAngle = v393;
    v653 = (MouseCursorPos)9i64;
LABEL_149:
    v394 = 0i64;
    LODWORD(_ECX) = LODWORD(v393) - 1;
    LODWORD(uvAngle) = LODWORD(v393) - 1;
    _ESI = v391;
    while ( 1 )
    {
      if ( _ESI < 0 || (compassMapTiles = _R13->compassMapTiles, _ESI >= compassMapTiles) || _ECX < 0.0 || SLODWORD(_ECX) >= compassMapTiles )
      {
        v435 = v643;
        goto LABEL_164;
      }
      v398 = (__int64)v392 + v394;
      __asm
      {
        vmovd   xmm6, esi
        vcvtdq2ps xmm6, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm1, xmm9, xmm0
        vmulss  xmm2, xmm1, xmm6
        vmovd   xmm7, ecx
        vcvtdq2ps xmm7, xmm7
        vmulss  xmm0, xmm1, xmm7
        vsubss  xmm1, xmm2, xmm15
        vsubss  xmm2, xmm0, xmm11
        vmulss  xmm3, xmm14, xmm1
        vmulss  xmm4, xmm14, xmm2
        vaddss  xmm5, xmm3, xmm13
        vaddss  xmm1, xmm4, xmm13
        vmulss  xmm4, xmm5, [rbp+210h+vMax]
        vmulss  xmm1, xmm1, [rbp+210h+vMax]
        vaddss  xmm1, xmm1, [rbp+210h+alphaOffset]; top
        vaddss  xmm3, xmm12, xmm1; bottom
        vaddss  xmm0, xmm4, [rbp+210h+var_284]; left
        vaddss  xmm2, xmm8, xmm0; right
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])v660);
      if ( v633 )
      {
        v419 = j_va("%s_%02d_%02d", _R13->compassMapMaterial->name, v393, (unsigned int)(_ESI + 1));
        _RBX->m_tacpmapTileImages[v398].tile = Image_Register(v419, IMAGE_TRACK_HUD);
      }
      v420 = 0;
      v421 = 2 * (v398 + 14);
      tile = _RBX->m_tacpmapTileImages[v398].tile;
      if ( tile && (v420 = Stream_TouchImageAndCheck(tile)) )
      {
        v423 = v398;
        framesDelayed = _RBX->m_tacpmapTileImages[v423].framesDelayed;
        if ( framesDelayed >= 5 )
          goto LABEL_162;
        _RBX->m_tacpmapTileImages[v423].framesDelayed = framesDelayed + 1;
      }
      else
      {
        _RBX->m_tacpmapTileImages[v398].framesDelayed = 0;
        if ( v420 )
        {
LABEL_162:
          __asm
          {
            vmovss  dword ptr [rsp+330h+w], xmm9
            vmovss  dword ptr [rsp+330h+y], xmm9
            vmovss  dword ptr [rsp+330h+outVector], xmm10
            vmovss  dword ptr [rsp+330h+fmt], xmm10
          }
          v435 = v643;
          LUI_Render_DrawImage((const LocalClientNum_t)_R15->m_localClientNum, *(LUIElement **)&outWorldPosition, v643, (const vec4_t (*)[4])v660, fmti, outVectorh, yh, wg, &v654, *((const GfxImage **)&_RBX->__vftable + v421));
          _ECX = uvAngle;
          v393 = outAngle;
          v392 = cgameGlobMP;
          goto LABEL_164;
        }
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm2, xmm9, xmm0
        vmulss  xmm5, xmm2, xmm6
        vmulss  xmm4, xmm2, xmm7
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm3, xmm0, xmm2
      }
      v393 = outAngle;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, r14d
        vmulss  xmm2, xmm1, xmm2
        vmovss  dword ptr [rsp+330h+w], xmm2
        vmovss  dword ptr [rsp+330h+y], xmm3
        vmovss  dword ptr [rsp+330h+outVector], xmm4
        vmovss  dword ptr [rsp+330h+fmt], xmm5
      }
      v435 = v643;
      LUI_Render_DrawImage((const LocalClientNum_t)_R15->m_localClientNum, *(LUIElement **)&outWorldPosition, v643, (const vec4_t (*)[4])v660, fmth, outVectorg, yg, wf, &v654, v645);
      _ECX = uvAngle;
      v392 = cgameGlobMP;
LABEL_164:
      ++_ESI;
      if ( ++v394 >= 9 )
      {
        ++LODWORD(v393);
        outAngle = v393;
        v392 = (CgGlobalsMP *)((char *)v392 + 9);
        cgameGlobMP = v392;
        v31 = (*(_QWORD *)&v653)-- == 1i64;
        v391 = IsGamepadEnabled;
        if ( v31 )
        {
          LUI_Render_PopStencilRectangle((const LocalClientNum_t)_R15->m_localClientNum);
          _RSI = (LUIElement *)outWorldPosition;
          goto LABEL_168;
        }
        goto LABEL_149;
      }
    }
  }
  __asm
  {
    vmovss  xmm7, dword ptr [r13+4A004h]
    vmovss  xmm0, dword ptr [r13+4A000h]
    vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  CG_CalcPlayerPos(&out, _R15->m_localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+210h+out.___u0]
    vsubss  xmm4, xmm0, dword ptr [r13+4A018h]
    vmovss  xmm1, dword ptr [rbp+210h+out.___u0+4]
    vsubss  xmm3, xmm1, dword ptr [r13+4A01Ch]
    vmulss  xmm2, xmm3, xmm6
    vmulss  xmm0, xmm4, xmm7
    vaddss  xmm15, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm3, xmm7
    vsubss  xmm0, xmm1, xmm0
    vmovss  [rbp+210h+uvAngle], xmm0
    vdivss  xmm12, xmm15, dword ptr [r12]
    vdivss  xmm13, xmm0, dword ptr [r13+4A024h]
  }
  *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))_R15->GetRange)(_R15);
  __asm { vmovaps xmm14, xmm0 }
  CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)_R15->m_localClientNum);
  curPos = (MouseCursorPos)CompassSystem;
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  if ( (CompassSystem->m_currentDisplayType & 2) != 0 )
  {
    v59 = DVARBOOL_compassZoomEnabled;
    if ( !DVARBOOL_compassZoomEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassZoomEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    if ( v59->current.enabled )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassZoomMaxLevel, "compassZoomMaxLevel");
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassZoomSpeedFactor, "compassZoomSpeedFactor");
      __asm
      {
        vmovaps xmm9, xmm0
        vsubss  xmm7, xmm11, xmm6
        vmovss  xmm8, dword ptr [r15+20h]
      }
      m_localClientNum = _R15->m_localClientNum;
      if ( (unsigned int)m_localClientNum >= 2 )
      {
        LODWORD(y) = 2;
        LODWORD(outVector) = _R15->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outVector, y) )
          __debugbreak();
        v28 = v643;
      }
      v65 = _R15->m_localClientNum;
      if ( clientUIActives[m_localClientNum].lastInputType )
      {
        _EAX = CL_Keys_IsKeyDown(v65, 187);
        _ECX = 0;
        __asm
        {
          vmovd   xmm1, ecx
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm11, xmm10, xmm2
          vmovaps xmm1, xmm0
          vmovss  [rbp+210h+var_26C], xmm0
        }
      }
      else
      {
        *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(v65, GPAD_PHYSAXIS_LTRIGGER);
        __asm { vmovaps xmm1, xmm0 }
      }
      __asm
      {
        vmulss  xmm0, xmm1, xmm7
        vaddss  xmm1, xmm0, xmm6
        vsubss  xmm2, xmm1, xmm8
        vdivss  xmm3, xmm2, xmm7
        vmulss  xmm0, xmm3, xmm9
        vaddss  xmm0, xmm0, xmm8; val
        vmovaps xmm2, xmm11; max
        vmovaps xmm1, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RAX = curPos;
      __asm { vmovss  dword ptr [rax+20h], xmm0 }
      goto LABEL_32;
    }
    CompassSystem = (CgCompassSystem *)curPos;
  }
  CompassSystem->m_currentZoomLevel = 1.0;
LABEL_32:
  __asm
  {
    vmulss  xmm0, xmm14, dword ptr [r15+20h]
    vmovss  xmm9, cs:__real@3f000000
    vmulss  xmm2, xmm0, xmm9
    vdivss  xmm6, xmm2, dword ptr [r12+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vdivss  xmm1, xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm1, xmm2
    vdivss  xmm7, xmm2, dword ptr [r12]
  }
  CgCompassSystem::GetCompassYaw(_R15, COMPASS_TYPE_PARTIAL, cropPartialMap, _R13, &outAngle, &outWorldPosition);
  __asm
  {
    vmovss  xmm0, [rbp+210h+outAngle]
    vsubss  xmm1, xmm0, dword ptr [r13+49FFCh]
    vxorps  xmm8, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  [rbp+210h+outAngle], xmm8
  }
  if ( cropPartialMap )
  {
    ((void (__fastcall *)(CgCompassSystem *, vec2_t *))_R15->MapOffset)(_R15, &outWorldPosition);
    __asm
    {
      vmovss  xmm12, dword ptr [rbp+210h+outWorldPosition]
      vmovss  xmm13, dword ptr [rbp+210h+outWorldPosition+4]
    }
    *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))_R15->GetCroppedMapZoom)(_R15);
    __asm
    {
      vmovss  xmm1, dword ptr [r13+4A024h]
      vmulss  xmm0, xmm0, xmm1
      vmulss  xmm2, xmm0, xmm9
      vdivss  xmm6, xmm2, xmm1
      vmovss  xmm0, dword ptr [rbx+8]
      vdivss  xmm1, xmm0, dword ptr [rbx+0Ch]
      vmulss  xmm2, xmm1, xmm2
      vdivss  xmm7, xmm2, dword ptr [r12]
      vxorps  xmm8, xmm8, xmm8
      vmovss  [rbp+210h+outAngle], xmm8
    }
  }
  if ( cgameGlobMP && cgameGlobMP->m_isMLGSpectator && _R15->MapShouldRotate(_R15) )
  {
    _R15->MapRotationFactor(_R15);
    __asm
    {
      vaddss  xmm8, xmm8, xmm0
      vmovss  [rbp+210h+outAngle], xmm8
    }
  }
  CG_CompassCalcDimensions(COMPASS_TYPE_PARTIAL, _R13, parentRecta, rect, &_R13->compassMapWorldSize, &x, &vMax, &alphaOffset, &v636);
  v100 = rect->vertAlign;
  v101 = rect->horzAlign;
  v102 = ScrPlace_GetActivePlacement((const LocalClientNum_t)_R15->m_localClientNum);
  ScrPlace_ApplyRect(v102, &x, &vMax, &alphaOffset, &v636, v101, v100);
  if ( !_R15->m_compassMirrorLeftRight )
    goto LABEL_44;
  v103 = DVARBOOL_compassRotation;
  if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v103);
  if ( v103->current.enabled )
  {
    __asm
    {
      vmovss  xmm2, [rbp+210h+x]
      vaddss  xmm0, xmm2, [rbp+210h+alphaOffset]
    }
  }
  else
  {
LABEL_44:
    __asm
    {
      vmovss  xmm0, [rbp+210h+x]; left
      vaddss  xmm2, xmm0, [rbp+210h+alphaOffset]; right
    }
  }
  __asm
  {
    vmovss  xmm1, [rbp+210h+vMax]; top
    vaddss  xmm3, xmm1, [rbp+210h+var_284]; bottom
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  v108 = (GfxImage *)v653;
  if ( v653 )
  {
    LUI_Render_GetViewportSize(_R15->m_localClientNum, (vec2_t *)&parentRecta);
    __asm
    {
      vmovss  xmm4, [rbp+210h+var_284]
      vmulss  xmm0, xmm9, xmm4
      vaddss  xmm2, xmm0, [rbp+210h+vMax]; maskCenterY
      vmovss  xmm3, [rbp+210h+alphaOffset]; maskWidth
      vmulss  xmm1, xmm9, xmm3
      vaddss  xmm1, xmm1, [rbp+210h+x]; maskCenterX
      vmovss  dword ptr [rsp+330h+var_2D0], xmm11
      vmovss  [rsp+330h+var_2D8], xmm11
      vmovss  dword ptr [rsp+330h+var_2E0], xmm10
      vmovss  dword ptr [rsp+330h+var_2E8], xmm10
      vmovss  dword ptr [rsp+330h+w], xmm10
      vmovss  dword ptr [rsp+330h+y], xmm11
      vmovss  dword ptr [rsp+330h+outVector], xmm10
      vmovss  dword ptr [rsp+330h+fmt], xmm4
    }
    LUI_Render_PushMask((const LocalClientNum_t)_R15->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, outVectorb, yb, wa, 0, v613, v617, v620, v623, (const vec2_t *)&parentRecta, v108);
  }
  v114 = DVARBOOL_compassRenderAdditionalHighResTiles;
  if ( !DVARBOOL_compassRenderAdditionalHighResTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRenderAdditionalHighResTiles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v114);
  enabled = v114->current.enabled;
  v644 = enabled;
  v116 = _R13->compassMapTiles;
  __asm
  {
    vmovss  xmm2, dword ptr [r13+4A024h]
    vmulss  xmm1, xmm14, dword ptr [r15+20h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm1, xmm0
    vdivss  xmm8, xmm2, xmm1
  }
  if ( v116 <= 1 )
  {
    __asm
    {
      vmovss  xmm14, [rbp+210h+outAngle]
      vmovss  dword ptr [rsp+330h+h], xmm14
      vmovss  dword ptr [rsp+330h+w], xmm6
      vmovss  dword ptr [rsp+330h+y], xmm7
      vmovss  dword ptr [rsp+330h+outVector], xmm13
      vmovss  dword ptr [rsp+330h+fmt], xmm12
    }
    LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)_R15->m_localClientNum, element, v28, (const vec4_t (*)[4])quadVerts, fmtc, outVectorc, yc, wb, h, &v654, v645);
    goto LABEL_87;
  }
  __asm { vcomiss xmm8, xmm11 }
  if ( _R15->m_currentMinimapStyle == MINIMAP_STYLE_SQUARE )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0D8h]
      vmaxss  xmm4, xmm0, xmm10
      vmovss  xmm1, dword ptr [rsi+0D4h]
      vmaxss  xmm3, xmm1, xmm10; right
      vmovss  xmm0, dword ptr [rsi+0D0h]
      vmaxss  xmm2, xmm0, xmm10; top
      vmovss  xmm1, dword ptr [rsi+0CCh]
      vmaxss  xmm1, xmm1, xmm10; left
      vmovss  dword ptr [rsp+330h+fmt], xmm4
    }
    LUI_Render_PushStencilRectangle((const LocalClientNum_t)_R15->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb);
    v116 = _R13->compassMapTiles;
    __asm { vmovss  xmm2, dword ptr [r13+4A024h] }
  }
  __asm
  {
    vdivss  xmm1, xmm15, dword ptr [r12]
    vmovss  xmm0, [rbp+210h+uvAngle]
    vdivss  xmm2, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm4, xmm1, xmm0
    vmulss  xmm3, xmm2, xmm0
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm4, 1
    vcvttss2si r8d, xmm1
  }
  v641 = _ER8;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm3, 1
    vcvttss2si r9d, xmm0
  }
  uvAngle = _ER9;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r9d
    vsubss  xmm6, xmm3, xmm0
    vmovdqu ymm0, cs:__ymm@ffffffff00000001ffffffff000000000000000000000001ffffffff00000000
    vmovdqu [rbp+210h+var_1D0], ymm0
  }
  v659 = 1;
  __asm
  {
    vmovdqu ymm0, cs:__ymm@0000000100000001ffffffffffffffff00000001000000000000000000000000
    vmovdqu ymmword ptr [rbp+210h+var_1A0], ymm0
  }
  v660[2].v[0] = NAN;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8d
    vsubss  xmm7, xmm4, xmm0
  }
  if ( !enabled )
  {
    memset(v658, 0, sizeof(v658));
    v659 = 0;
    memset(v660, 0, 36);
  }
  __asm { vcomiss xmm7, xmm9 }
  if ( !enabled )
  {
    v658[3] = 1;
    v658[1] = 1;
  }
  __asm { vcomiss xmm6, xmm9 }
  if ( !enabled )
    *(_QWORD *)&v660[0].xyz.z = 0x100000001i64;
  v640 = 0;
  v153 = LODWORD(_ER8) + LODWORD(_ER9) * v116;
  if ( v153 != _R15->m_minimapCenterTile || _R15->m_minimapTileFlags != 10 )
  {
    v154 = curPos;
    *(_DWORD *)(*(_QWORD *)&curPos + 192i64) = v153;
    *(_BYTE *)(*(_QWORD *)&v154 + 196i64) = 10;
    v640 = 1;
  }
  __asm
  {
    vmulss  xmm2, xmm9, [rbp+210h+alphaOffset]
    vaddss  xmm12, xmm2, [rbp+210h+x]
    vmulss  xmm2, xmm9, [rbp+210h+var_284]
    vaddss  xmm13, xmm2, [rbp+210h+vMax]
    vmovaps xmm3, xmm13; centerY
    vmovaps xmm2, xmm12; centerX
    vmovaps xmm1, xmm8; scaleY
    vmovaps xmm0, xmm8; scaleX
  }
  LUI_PushScaleMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v28);
  __asm
  {
    vmovss  xmm14, [rbp+210h+outAngle]
    vxorps  xmm0, xmm14, cs:__xmm@80000000800000008000000080000000; degrees
    vmovaps xmm2, xmm13; centerY
    vmovaps xmm1, xmm12; centerX
  }
  LUI_PushZRotationMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, v28);
  __asm
  {
    vmulss  xmm7, xmm7, [rbp+210h+alphaOffset]
    vmulss  xmm6, xmm6, [rbp+210h+var_284]
  }
  v169 = 0;
  v170 = *(_QWORD *)&curPos + 48i64;
  p_y = NULL;
  parentRecta = NULL;
  v172 = v641;
  v173 = uvAngle;
  do
  {
    outAngle = *(float *)((char *)v658 + (_QWORD)p_y);
    v174 = LODWORD(outAngle) + LODWORD(v172);
    IsGamepadEnabled = *(_DWORD *)((char *)v660[0].v + (_QWORD)p_y);
    v175 = IsGamepadEnabled + LODWORD(v173);
    if ( LODWORD(outAngle) + LODWORD(v172) < 0 || (v176 = _R13->compassMapTiles, v174 >= v176) || v175 < 0 || v175 >= v176 || !v644 && v169 >= 4 )
    {
      v28 = v643;
      goto LABEL_83;
    }
    if ( v640 )
    {
      v177 = j_va("%s_%02d_%02d", _R13->compassMapMaterial->name, (unsigned int)(v175 + 1), (unsigned int)(v174 + 1));
      *(_QWORD *)v170 = Image_Register(v177, IMAGE_TRACK_HUD);
    }
    __asm
    {
      vmovd   xmm0, [rbp+210h+outAngle]
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm0, xmm0, [rbp+210h+alphaOffset]
      vaddss  xmm1, xmm0, xmm12
      vsubss  xmm0, xmm1, xmm7; left
      vmovd   xmm2, [rbp+210h+var_26C]
      vcvtdq2ps xmm2, xmm2
      vmulss  xmm1, xmm2, [rbp+210h+var_284]
      vaddss  xmm2, xmm1, xmm13
      vsubss  xmm1, xmm2, xmm6; top
      vaddss  xmm3, xmm1, [rbp+210h+var_284]; bottom
      vaddss  xmm2, xmm0, [rbp+210h+alphaOffset]; right
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
    v190 = 0;
    if ( *(_QWORD *)v170 && (v190 = Stream_TouchImageAndCheck(*(const GfxImage **)v170)) )
    {
      v191 = *(_DWORD *)(v170 + 8);
      if ( v191 >= 5 )
        goto LABEL_78;
      *(_DWORD *)(v170 + 8) = v191 + 1;
    }
    else
    {
      *(_DWORD *)(v170 + 8) = 0;
      if ( v190 )
      {
LABEL_78:
        v614 = *(const GfxImage **)v170;
        __asm
        {
          vmovss  dword ptr [rsp+330h+w], xmm11
          vmovss  dword ptr [rsp+330h+y], xmm11
          vmovss  dword ptr [rsp+330h+outVector], xmm10
          vmovss  dword ptr [rsp+330h+fmt], xmm10
        }
        goto LABEL_79;
      }
    }
    if ( !*(_QWORD *)v170 )
    {
      v28 = v643;
      goto LABEL_82;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm3, xmm11, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r14d
      vmulss  xmm5, xmm0, xmm3
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebx
      vmulss  xmm4, xmm1, xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm3
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm0, xmm1, xmm3
    }
    v614 = v645;
    __asm
    {
      vmovss  dword ptr [rsp+330h+w], xmm0
      vmovss  dword ptr [rsp+330h+y], xmm2
      vmovss  dword ptr [rsp+330h+outVector], xmm4
      vmovss  dword ptr [rsp+330h+fmt], xmm5
    }
LABEL_79:
    v28 = v643;
    LUI_Render_DrawImage((const LocalClientNum_t)_R15->m_localClientNum, element, v643, (const vec4_t (*)[4])verts, fmt, outVectora, ya, w, &v654, v614);
LABEL_82:
    v172 = v641;
    v173 = uvAngle;
LABEL_83:
    ++v169;
    p_y = &parentRecta->y;
    parentRecta = (rectDef_s *)((char *)parentRecta + 4);
    v170 += 16i64;
  }
  while ( v169 < 9 );
  LUI_Matrix_Pop();
  LUI_Matrix_Pop();
  if ( _R15->m_currentMinimapStyle == MINIMAP_STYLE_SQUARE )
    LUI_Render_PopStencilRectangle((const LocalClientNum_t)_R15->m_localClientNum);
LABEL_87:
  v207 = *(const GfxImage **)v655.v;
  if ( *(_QWORD *)v655.v )
  {
    v208 = DVARBOOL_compassEnableFOVScaledCone;
    if ( !DVARBOOL_compassEnableFOVScaledCone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnableFOVScaledCone") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v208);
    if ( v208->current.enabled )
    {
      if ( _R13->nextSnap )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r13+17FF8h]
          vmulss  xmm1, xmm0, cs:__real@3c7c0fc1
          vmulss  xmm4, xmm1, [rbp+210h+alphaOffset]
          vmulss  xmm0, xmm9, [rbp+210h+alphaOffset]
          vaddss  xmm3, xmm0, [rbp+210h+x]
          vmulss  xmm1, xmm4, xmm9
          vsubss  xmm5, xmm3, xmm1
          vaddss  xmm2, xmm4, xmm5
          vmulss  xmm1, xmm9, [rbp+210h+var_284]
          vmovss  xmm4, [rbp+210h+vMax]
          vaddss  xmm3, xmm1, xmm4
        }
        goto LABEL_95;
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm5, [rbp+210h+x]
        vaddss  xmm2, xmm5, [rbp+210h+alphaOffset]; right
        vmulss  xmm3, xmm9, [rbp+210h+var_284]
        vmovss  xmm4, [rbp+210h+vMax]
        vaddss  xmm3, xmm3, xmm4; bottom
      }
LABEL_95:
      __asm
      {
        vmovaps xmm1, xmm4; top
        vmovaps xmm0, xmm5; left
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
      _RAX = v647;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  dword ptr [rbp+210h+var_1F8], xmm0
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  dword ptr [rbp+210h+var_1F8+4], xmm1
        vmovss  xmm0, dword ptr [rax+8]
        vmovss  dword ptr [rbp+210h+var_1F8+8], xmm0
        vmovss  xmm1, dword ptr [rax+0Ch]
        vmulss  xmm2, xmm1, cs:__real@3e4ccccd
        vmovss  dword ptr [rbp+210h+var_1F8+0Ch], xmm2
      }
      LUI_Render_PushBlendMode(LUI_BLEND_MODE_ADD);
      if ( _R15->m_isMinimapRotationEnabled )
      {
        __asm
        {
          vmovss  dword ptr [rsp+330h+w], xmm11
          vmovss  dword ptr [rsp+330h+y], xmm11
          vmovss  dword ptr [rsp+330h+outVector], xmm10
          vmovss  dword ptr [rsp+330h+fmt], xmm10
        }
        LUI_Render_DrawImage((const LocalClientNum_t)_R15->m_localClientNum, element, v28, (const vec4_t (*)[4])verts, fmte, outVectore, ye, wd, &v655, v207);
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm9, [rbp+210h+alphaOffset]
          vaddss  xmm8, xmm1, [rbp+210h+x]
          vmovss  xmm2, [rbp+210h+var_284]
          vmulss  xmm0, xmm9, xmm2
          vaddss  xmm7, xmm0, [rbp+210h+vMax]
          vmulss  xmm0, xmm2, cs:__real@3e800000
          vaddss  xmm6, xmm0, [rbp+210h+vMax]
        }
        *(double *)&_XMM0 = CgCompassSystem::GetPlayerAngle(_R15, _R13, cgameGlobMP, COMPASS_TYPE_PARTIAL, cropPartialMap);
        __asm
        {
          vmulss  xmm4, xmm9, [rbp+210h+var_284]
          vmovss  xmm1, dword ptr [rbp+210h+var_1F8+0Ch]
          vmovss  dword ptr [rsp+330h+var_2B0], xmm1
          vmovss  xmm2, dword ptr [rbp+210h+var_1F8+8]
          vmovss  dword ptr [rsp+330h+var_2B8], xmm2
          vmovss  xmm1, dword ptr [rbp+210h+var_1F8+4]
          vmovss  dword ptr [rsp+330h+image], xmm1
          vmovss  xmm2, dword ptr [rbp+210h+var_1F8]
          vmovss  dword ptr [rsp+330h+viewportSize], xmm2
          vmovss  dword ptr [rsp+330h+var_2D0], xmm0
          vmovss  [rsp+330h+var_2D8], xmm11
          vmovss  dword ptr [rsp+330h+var_2E0], xmm11
          vmovss  dword ptr [rsp+330h+var_2E8], xmm10
          vmovss  dword ptr [rsp+330h+h], xmm10
          vmovss  dword ptr [rsp+330h+w], xmm4
          vmovss  xmm0, [rbp+210h+alphaOffset]
          vmovss  dword ptr [rsp+330h+y], xmm0
          vmovss  dword ptr [rsp+330h+outVector], xmm6
          vmovss  dword ptr [rsp+330h+fmt], xmm8
          vmovaps xmm3, xmm7; rotationCenterY
          vmovaps xmm2, xmm8; rotationCenterX
        }
        LUI_Render_DrawQuadRotatedRelativeToPoint((const LocalClientNum_t)_R15->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, outVectord, yd, wc, ha, v615, v618, v621, v624, viewportSize, image, v630, v631, v207, v28);
      }
      LUI_Render_PopBlendMode();
    }
  }
  if ( v653 )
    LUI_Render_PopMask((const LocalClientNum_t)_R15->m_localClientNum);
  if ( *(_QWORD *)v657.v && _R15->m_isMinimapRotationEnabled )
  {
    __asm
    {
      vmovss  dword ptr [rsp+330h+h], xmm14
      vmovss  dword ptr [rsp+330h+w], xmm9
      vmovss  dword ptr [rsp+330h+y], xmm9
      vmovss  dword ptr [rsp+330h+outVector], xmm9
      vmovss  dword ptr [rsp+330h+fmt], xmm9
    }
    LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)_R15->m_localClientNum, element, v28, (const vec4_t (*)[4])quadVerts, fmtf, outVectorf, yf, we, hb, &v654, *(const GfxImage **)v657.v);
  }
LABEL_212:
  memset(&out, 0, sizeof(out));
  _R11 = &v663;
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
CgCompassSystem::DrawPlayerMapLocationSelector
==============
*/
void CgCompassSystem::DrawPlayerMapLocationSelector(CgCompassSystem *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, Material *material, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  bool v25; 
  bool v27; 
  bool v28; 
  CgGlobalsMP *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  unsigned int locationSelectionInfo; 
  int vertAlign; 
  unsigned int v37; 
  GfxImage *mapLocationSelectorArrow; 
  int v39; 
  float *v44; 
  LocalClientNum_t m_localClientNum; 
  int v49; 
  const ScreenPlacement *ActivePlacement; 
  unsigned int time; 
  bool v71; 
  bool v72; 
  int v83; 
  int v84; 
  const ScreenPlacement *v122; 
  CgMLGSpectator *MLGSpectator; 
  int v133; 
  CgMLGSpectator *v134; 
  bool HasData; 
  bool v141; 
  bool CanUseKillstreakAtPosition; 
  char v165; 
  const GfxImage *locationSelectorCursor; 
  LocalClientNum_t v175; 
  int v181; 
  int v182; 
  const ScreenPlacement *v192; 
  const GfxImage *mapLocationSelectorArrowSingle; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float x; 
  float xa; 
  float xb; 
  float xc; 
  float xd; 
  float y; 
  float ya; 
  float yb; 
  float yc; 
  float yd; 
  float w; 
  float wa; 
  float wb; 
  float wc; 
  float wd; 
  float h; 
  float ha; 
  float hb; 
  float v243; 
  float v244; 
  float v245; 
  float v246; 
  float v247; 
  float v248; 
  float v249; 
  float v250; 
  float v251; 
  float v252; 
  float v253; 
  float v254; 
  float v255; 
  float v256; 
  float v257; 
  float v258; 
  float width; 
  float v260; 
  float v261; 
  float v262; 
  float v264; 
  float v265; 
  float vMin; 
  float uMax[3]; 
  int v268; 
  lua_State *v269; 
  LUIElement *v270; 
  int horzAlign; 
  unsigned int v273; 
  const rectDef_s *v274; 
  GfxImage *v275; 
  GfxImage *locationSelectorCursorMark1; 
  GfxImage *locationSelectorCursorMark2; 
  vec4_t v278; 
  vec2_t position; 
  _QWORD clientNum[2]; 
  vec4_t quadVerts[4]; 
  char v292; 

  __asm { vmovaps [rsp+250h+var_60], xmm8 }
  _R12 = color;
  v270 = element;
  v269 = luaVM;
  v274 = rect;
  clientNum[0] = color;
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1523, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1524, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  __asm { vxorps  xmm8, xmm8, xmm8 }
  _RSI = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  __asm { vucomiss xmm8, dword ptr [rax+4A020h] }
  if ( v25 )
  {
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1527, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapWorldSize[0])", (const char *)&queryFormat, "cgameGlob->compassMapWorldSize[0]");
    v25 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm { vucomiss xmm8, dword ptr [rsi+4A024h] }
  if ( v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1528, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapWorldSize[1])", (const char *)&queryFormat, "cgameGlob->compassMapWorldSize[1]") )
    __debugbreak();
  v28 = _RSI->predictedPlayerState.pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u);
  LocalClientGlobals = NULL;
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  position = (vec2_t)LocalClientGlobals;
  if ( !v28 || LocalClientGlobals && LocalClientGlobals->m_isMLGSpectator )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
    if ( BG_IsLocationSelectorActive(Instance, &_RSI->predictedPlayerState) && !CL_Keys_IsCatcherActive(this->m_localClientNum, 16) )
    {
      locationSelectionInfo = _RSI->predictedPlayerState.locationSelectionInfo;
      __asm
      {
        vmovaps [rsp+250h+var_40], xmm6
        vmovaps [rsp+250h+var_50], xmm7
        vmovaps [rsp+250h+var_70], xmm9
        vmovaps [rsp+250h+var_80], xmm10
        vmovaps [rsp+250h+var_90], xmm11
        vmovaps [rsp+250h+var_A0], xmm12
      }
      vertAlign = locationSelectionInfo >> 2;
      __asm { vmovaps [rsp+250h+var_B0], xmm13 }
      LOBYTE(vertAlign) = vertAlign & 1;
      __asm
      {
        vmovaps [rsp+250h+var_C0], xmm14
        vmovaps [rsp+250h+var_D0], xmm15
      }
      v268 = vertAlign;
      CG_CompassCalcDimensions(compassType, _RSI, parentRect, rect, &_RSI->compassMapWorldSize, &v264, &v265, &vMin, uMax);
      this->GetDrawnItemScaler(this, compassType, (LocationSelectorType)((unsigned __int8)_RSI->predictedPlayerState.locationSelectionInfo >> 5), vertAlign);
      __asm
      {
        vmovss  xmm14, [rbp+140h+uMax]
        vmovss  xmm15, [rbp+140h+vMin]
        vmovss  xmm9, cs:__real@3f000000
        vmovss  xmm7, cs:__real@3f800000
      }
      v37 = (unsigned int)_RSI->predictedPlayerState.locationSelectionInfo >> 4;
      LOBYTE(v37) = (_RSI->predictedPlayerState.locationSelectionInfo & 0x10) != 0;
      v25 = (_RSI->predictedPlayerState.locationSelectionInfo & 0x10) == 0;
      v273 = v37;
      locationSelectorCursorMark1 = (GfxImage *)cgMedia.compass.locationSelectorCursorMark1;
      locationSelectorCursorMark2 = (GfxImage *)cgMedia.compass.locationSelectorCursorMark2;
      mapLocationSelectorArrow = (GfxImage *)cgMedia.mapLocationSelectorArrow;
      if ( !v25 )
        mapLocationSelectorArrow = (GfxImage *)cgMedia.mapLocationSelectorArrowSingle;
      v39 = 0;
      __asm
      {
        vmulss  xmm13, xmm0, xmm14
        vmovaps xmm6, xmm13
        vmovss  [rbp+140h+var_174], xmm13
        vmovss  [rbp+140h+var_1B0], xmm6
      }
      v275 = mapLocationSelectorArrow;
      if ( _RSI->locationSelectorNumInputs > 0 )
      {
        __asm
        {
          vmovss  xmm10, [rbp+140h+var_1A4]
          vmovss  xmm11, [rbp+140h+var_1A8]
        }
        v44 = (float *)_RSI->locationSelectorInputs + 1;
        _R15 = _RSI->locationSelectorInputTimes;
        do
        {
          if ( (_BYTE)vertAlign )
          {
            __asm { vmulss  xmm4, xmm13, cs:__real@40600000 }
            m_localClientNum = this->m_localClientNum;
            __asm
            {
              vmulss  xmm1, xmm13, xmm9
              vmovss  [rbp+140h+var_1BC], xmm1
            }
            vertAlign = v274->vertAlign;
            v49 = v274->horzAlign;
            __asm
            {
              vmovss  [rbp+140h+width], xmm4
              vmulss  xmm0, xmm15, dword ptr [r12-4]
              vaddss  xmm2, xmm0, xmm11
              vmulss  xmm1, xmm1, xmm9
              vsubss  xmm2, xmm2, xmm1
              vmovss  [rbp+140h+var_1B4], xmm2
              vmulss  xmm0, xmm14, dword ptr [r12]
              vaddss  xmm3, xmm0, xmm10
              vmulss  xmm1, xmm4, xmm9
              vsubss  xmm2, xmm3, xmm1
              vmovss  [rbp+140h+var_1B8], xmm2
            }
            ActivePlacement = ScrPlace_GetActivePlacement(m_localClientNum);
            ScrPlace_ApplyRect(ActivePlacement, &v262, &v261, &v260, &width, v49, vertAlign);
            __asm
            {
              vmovss  xmm0, dword ptr [r15-10h]
              vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
              vmovss  xmm5, [rbp+140h+var_1BC]
              vmovss  xmm6, [rbp+140h+width]
              vmulss  xmm0, xmm9, xmm5
              vaddss  xmm2, xmm0, [rbp+140h+var_1B4]; centerX
              vmovss  xmm0, dword ptr cs:markerColor+0Ch
              vmovss  dword ptr [rsp+250h+var_1E0], xmm0
              vmovss  xmm0, dword ptr cs:markerColor+4
              vmulss  xmm1, xmm9, xmm6
              vaddss  xmm3, xmm1, [rbp+140h+var_1B8]; centerY
              vmovss  xmm1, dword ptr cs:markerColor+8
              vmovss  dword ptr [rsp+250h+var_1E8], xmm1
              vmovss  xmm1, dword ptr cs:markerColor
              vmovss  [rsp+250h+var_1F0], xmm0
              vmovss  [rsp+250h+var_1F8], xmm1
              vmovss  [rsp+250h+var_200], xmm4
              vmovss  dword ptr [rsp+250h+var_208], xmm7
              vmovss  dword ptr [rsp+250h+h], xmm7
              vmovss  dword ptr [rsp+250h+w], xmm8
              vmovss  dword ptr [rsp+250h+y], xmm8
              vmovss  dword ptr [rsp+250h+x], xmm6
              vmovss  dword ptr [rsp+250h+fmt], xmm5
            }
            LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v270, *(float *)&_XMM2, *(float *)&_XMM3, fmt, x, y, w, h, v243, v246, v249, v252, v255, v257, v275, v269);
            LOBYTE(vertAlign) = v268;
          }
          else
          {
            time = _RSI->time;
            v71 = time < *_R15;
            v72 = time == *_R15;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vcomiss xmm0, cs:__real@43480000
              vmovaps xmm1, xmm7
            }
            if ( time < *_R15 )
            {
              __asm { vmulss  xmm0, xmm0, cs:__real@3d00adfd; X }
              *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
              __asm
              {
                vmulss  xmm1, xmm0, cs:__real@3d999998
                vaddss  xmm1, xmm1, cs:__real@3f6ccccd
              }
            }
            __asm
            {
              vmulss  xmm0, xmm15, dword ptr [r12-4]
              vmovss  xmm11, [rbp+140h+var_1A8]
              vmulss  xmm2, xmm1, xmm13
              vmulss  xmm1, xmm14, dword ptr [r12]
              vaddss  xmm4, xmm0, xmm11
            }
            v83 = v274->vertAlign;
            v84 = v274->horzAlign;
            __asm
            {
              vaddss  xmm5, xmm1, xmm10
              vdivss  xmm3, xmm7, xmm2
              vsubss  xmm0, xmm11, xmm4
              vmulss  xmm1, xmm0, xmm3
              vaddss  xmm10, xmm1, xmm9
              vcomiss xmm10, xmm8
              vminss  xmm6, xmm2, xmm6
              vmovss  xmm2, [rbp+140h+var_1A4]
              vsubss  xmm0, xmm2, xmm5
              vmulss  xmm1, xmm0, xmm3
              vaddss  xmm0, xmm15, xmm11
              vmovss  [rbp+140h+var_1B0], xmm6
              vaddss  xmm6, xmm1, xmm9
              vsubss  xmm1, xmm0, xmm4
              vmulss  xmm13, xmm1, xmm3
              vaddss  xmm0, xmm2, xmm14
              vsubss  xmm1, xmm0, xmm5
              vmovss  xmm0, [rbp+140h+var_1A8]
              vmulss  xmm5, xmm1, xmm3
              vmovaps xmm3, xmm15
              vmovaps xmm4, xmm14
              vmovss  [rbp+140h+var_1BC], xmm3
              vmovss  [rbp+140h+var_1B4], xmm0
              vmovss  [rbp+140h+var_1B8], xmm2
              vmovss  [rbp+140h+width], xmm4
            }
            horzAlign = v84;
            __asm
            {
              vaddss  xmm12, xmm13, xmm9
              vaddss  xmm11, xmm5, xmm9
            }
            if ( v71 )
            {
              __asm
              {
                vmulss  xmm1, xmm15, xmm10
                vsubss  xmm0, xmm10, xmm12
                vdivss  xmm2, xmm1, xmm0
                vaddss  xmm1, xmm2, [rbp+140h+var_1A8]
                vsubss  xmm3, xmm15, xmm2
                vmovss  [rbp+140h+var_1B4], xmm1
                vmovss  [rbp+140h+var_1BC], xmm3
                vmovaps xmm10, xmm8
              }
            }
            __asm { vcomiss xmm6, xmm8 }
            if ( v71 )
            {
              __asm
              {
                vmulss  xmm1, xmm6, xmm14
                vsubss  xmm0, xmm6, xmm11
                vdivss  xmm2, xmm1, xmm0
                vaddss  xmm1, xmm2, [rbp+140h+var_1A4]
                vsubss  xmm4, xmm14, xmm2
                vmovss  [rbp+140h+var_1B8], xmm1
                vmovss  [rbp+140h+width], xmm4
                vmovaps xmm6, xmm8
              }
            }
            __asm { vcomiss xmm13, xmm9 }
            if ( !v71 && !v72 )
            {
              __asm
              {
                vsubss  xmm0, xmm12, xmm10
                vsubss  xmm1, xmm7, xmm10
                vdivss  xmm1, xmm1, xmm0
                vmulss  xmm2, xmm3, xmm1
                vmovss  [rbp+140h+var_1BC], xmm2
                vmovaps xmm12, xmm7
              }
            }
            __asm { vcomiss xmm5, xmm9 }
            if ( !v71 && !v72 )
            {
              __asm
              {
                vsubss  xmm0, xmm11, xmm6
                vsubss  xmm1, xmm7, xmm6
                vdivss  xmm1, xmm1, xmm0
                vmulss  xmm2, xmm4, xmm1
                vmovss  [rbp+140h+width], xmm2
                vmovaps xmm11, xmm7
              }
            }
            v122 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
            ScrPlace_ApplyRect(v122, &v262, &v261, &v260, &width, horzAlign, v83);
            __asm
            {
              vmovss  xmm1, [rbp+140h+var_1B8]; top
              vmovss  xmm0, [rbp+140h+var_1B4]; left
              vaddss  xmm3, xmm1, [rbp+140h+width]; bottom
              vaddss  xmm2, xmm0, [rbp+140h+var_1BC]; right
            }
            LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
            __asm
            {
              vmovss  dword ptr [rsp+250h+w], xmm11
              vmovss  dword ptr [rsp+250h+y], xmm12
              vmovss  dword ptr [rsp+250h+x], xmm6
              vmovss  dword ptr [rsp+250h+fmt], xmm10
            }
            LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, v270, v269, (const vec4_t (*)[4])quadVerts, fmta, xa, ya, wa, &markerColor, locationSelectorCursorMark1);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, dword ptr [rsi+65ECh]
              vmulss  xmm1, xmm0, cs:__real@3c75c28f
              vmovss  [rsp+250h+var_1F0], xmm1
              vmovss  [rsp+250h+var_1F8], xmm11
              vmovss  [rsp+250h+var_200], xmm12
              vmovss  dword ptr [rsp+250h+var_208], xmm6
              vmovss  dword ptr [rsp+250h+h], xmm10
              vmovss  dword ptr [rsp+250h+w], xmm9
              vmovss  dword ptr [rsp+250h+y], xmm9
              vmovss  dword ptr [rsp+250h+x], xmm9
              vmovss  dword ptr [rsp+250h+fmt], xmm9
            }
            LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)this->m_localClientNum, v270, v269, (const vec4_t (*)[4])quadVerts, fmtb, xb, yb, wb, ha, v244, v247, v250, v253, &markerColor, locationSelectorCursorMark2);
            __asm
            {
              vmovss  xmm10, [rbp+140h+var_1A4]
              vmovss  xmm11, [rbp+140h+var_1A8]
              vmovss  xmm13, [rbp+140h+var_174]
            }
          }
          __asm { vmovss  xmm6, [rbp+140h+var_1B0] }
          ++v39;
          ++_R15;
          v44 += 2;
        }
        while ( v39 < _RSI->locationSelectorNumInputs );
        _R12 = (const vec4_t *)clientNum[0];
      }
      if ( *(_QWORD *)&position && *(_BYTE *)(*(_QWORD *)&position + 742183i64) )
      {
        MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
        v133 = _RSI->predictedPlayerState.clientNum;
        v134 = MLGSpectator;
        _RAX = CgMLGSpectator::GetLocationSelectorCursor(MLGSpectator, (int)clientNum);
        __asm
        {
          vmovss  xmm10, dword ptr [rax]
          vmovss  xmm11, dword ptr [rax+4]
        }
        *(double *)&_XMM0 = CgMLGSpectator::GetLocationSelectorAngle(v134, v133);
        __asm { vmovaps xmm12, xmm0 }
      }
      else
      {
        __asm
        {
          vmovss  xmm10, dword ptr [rsi+4A084h]
          vmovss  xmm11, dword ptr [rsi+4A088h]
          vmovss  xmm12, dword ptr [rsi+4A08Ch]
        }
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovups xmmword ptr [rbp+140h+var_148], xmm0
      }
      HasData = TopDownMapData_HasData();
      v141 = !HasData;
      if ( HasData )
      {
        v141 = (_RSI->predictedPlayerState.locationSelectionInfo & 2) == 0;
        if ( (_RSI->predictedPlayerState.locationSelectionInfo & 2) != 0 )
        {
          __asm
          {
            vmulss  xmm4, xmm10, dword ptr [rsi+4A020h]
            vmovss  xmm5, dword ptr [rsi+4A004h]
            vmulss  xmm6, xmm11, dword ptr [rsi+4A024h]
            vmovss  xmm3, dword ptr [rsi+4A000h]
            vmulss  xmm1, xmm3, xmm6
            vmulss  xmm0, xmm5, xmm4
            vaddss  xmm2, xmm0, dword ptr [rsi+4A018h]
            vmovss  xmm0, dword ptr [rsi+4A01Ch]
            vsubss  xmm2, xmm2, xmm1
            vmovss  dword ptr [rbp+140h+position], xmm2
            vmulss  xmm3, xmm3, xmm4
            vsubss  xmm2, xmm0, xmm3
            vmulss  xmm1, xmm5, xmm6
            vsubss  xmm2, xmm2, xmm1
            vmovss  dword ptr [rbp+140h+position+4], xmm2
          }
          CanUseKillstreakAtPosition = TopDownMapData_CanUseKillstreakAtPosition(&position);
          v141 = !CanUseKillstreakAtPosition;
          if ( !CanUseKillstreakAtPosition )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+140h+var_148+0Ch]
              vmulss  xmm1, xmm0, cs:__real@3ecccccd
              vmovss  dword ptr [rbp+140h+var_148+0Ch], xmm1
            }
          }
        }
      }
      __asm
      {
        vmovss  xmm0, [rbp+140h+var_1B0]
        vucomiss xmm0, xmm13
      }
      if ( !v141 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+140h+var_148]
          vmulss  xmm1, xmm0, dword ptr cs:markerColor
          vmovss  xmm2, dword ptr [rbp+140h+var_148+4]
          vmulss  xmm0, xmm2, dword ptr cs:markerColor+4
          vmovss  dword ptr [rbp+140h+var_148], xmm1
          vmovss  xmm1, dword ptr [rbp+140h+var_148+8]
          vmulss  xmm2, xmm1, dword ptr cs:markerColor+8
          vmovss  dword ptr [rbp+140h+var_148+8], xmm2
          vmovss  dword ptr [rbp+140h+var_148+4], xmm0
        }
      }
      v165 = v268;
      _ECX = 0;
      locationSelectorCursor = cgMedia.compass.locationSelectorCursor;
      __asm { vmovd   xmm1, ecx }
      _EAX = (unsigned __int8)v268;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm9, xmm7, xmm2
        vmulss  xmm3, xmm0, xmm13
        vmovd   xmm1, ecx
      }
      v175 = this->m_localClientNum;
      _EAX = (unsigned __int8)v268;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@40600000
        vblendvps xmm0, xmm0, xmm7, xmm2
      }
      v181 = v274->vertAlign;
      v182 = v274->horzAlign;
      __asm
      {
        vmulss  xmm4, xmm0, xmm13
        vmulss  xmm0, xmm3, xmm9
        vmulss  xmm1, xmm15, xmm10
        vaddss  xmm2, xmm1, [rbp+140h+var_1A8]
        vsubss  xmm2, xmm2, xmm0
        vmulss  xmm1, xmm11, xmm14
        vmovss  [rbp+140h+var_1BC], xmm3
        vaddss  xmm3, xmm1, [rbp+140h+var_1A4]
        vmulss  xmm0, xmm4, xmm9
        vmovss  [rbp+140h+var_1B4], xmm2
        vsubss  xmm2, xmm3, xmm0
        vmovss  [rbp+140h+var_1B8], xmm2
        vmovss  [rbp+140h+width], xmm4
      }
      v192 = ScrPlace_GetActivePlacement(v175);
      ScrPlace_ApplyRect(v192, &v262, &v261, &v260, &width, v182, v181);
      __asm
      {
        vmovaps xmm15, [rsp+250h+var_D0]
        vmovaps xmm14, [rsp+250h+var_C0]
        vmovaps xmm13, [rsp+250h+var_B0]
        vmovaps xmm11, [rsp+250h+var_90]
        vmovaps xmm10, [rsp+250h+var_80]
      }
      if ( v165 )
      {
        __asm
        {
          vmovss  xmm6, [rbp+140h+width]
          vmovss  xmm5, [rbp+140h+var_1BC]
        }
        mapLocationSelectorArrowSingle = cgMedia.mapLocationSelectorArrow;
        if ( (_BYTE)v273 )
          mapLocationSelectorArrowSingle = cgMedia.mapLocationSelectorArrowSingle;
        __asm
        {
          vxorps  xmm4, xmm12, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm0, xmm9, xmm6
          vaddss  xmm3, xmm0, [rbp+140h+var_1B8]; centerY
          vmovss  xmm0, dword ptr [r12+0Ch]
          vmovss  dword ptr [rsp+250h+var_1E0], xmm0
          vmovss  xmm0, dword ptr [r12+4]
          vmulss  xmm1, xmm9, xmm5
          vaddss  xmm2, xmm1, [rbp+140h+var_1B4]; centerX
          vmovss  xmm1, dword ptr [r12+8]
          vmovss  dword ptr [rsp+250h+var_1E8], xmm1
          vmovss  xmm1, dword ptr [r12]
          vmovss  [rsp+250h+var_1F0], xmm0
          vmovss  [rsp+250h+var_1F8], xmm1
          vmovss  [rsp+250h+var_200], xmm4
          vmovss  dword ptr [rsp+250h+var_208], xmm7
          vmovss  dword ptr [rsp+250h+h], xmm7
          vmovss  dword ptr [rsp+250h+w], xmm8
          vmovss  dword ptr [rsp+250h+y], xmm8
          vmovss  dword ptr [rsp+250h+x], xmm6
          vmovss  dword ptr [rsp+250h+fmt], xmm5
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v270, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, xc, yc, wc, hb, v245, v248, v251, v254, v256, v258, mapLocationSelectorArrowSingle, v269);
      }
      else
      {
        __asm
        {
          vmovss  xmm1, [rbp+140h+var_1B8]; top
          vmovss  xmm0, [rbp+140h+var_1B4]; left
          vaddss  xmm3, xmm1, [rbp+140h+width]; bottom
          vaddss  xmm2, xmm0, [rbp+140h+var_1BC]; right
        }
        LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
        __asm
        {
          vmovss  dword ptr [rsp+250h+w], xmm7
          vmovss  dword ptr [rsp+250h+y], xmm7
          vmovss  dword ptr [rsp+250h+x], xmm8
          vmovss  dword ptr [rsp+250h+fmt], xmm8
        }
        LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, v270, v269, (const vec4_t (*)[4])quadVerts, fmtd, xd, yd, wd, &v278, locationSelectorCursor);
      }
      __asm
      {
        vmovaps xmm9, [rsp+250h+var_70]
        vmovaps xmm7, [rsp+250h+var_50]
        vmovaps xmm6, [rsp+250h+var_40]
        vmovaps xmm12, [rsp+250h+var_A0]
      }
    }
  }
  _R11 = &v292;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
}

/*
==============
CgCompassSystem::DrawPlayerName
==============
*/

void __fastcall CgCompassSystem::DrawPlayerName(CgCompassSystem *this, int clientNum, double centerX, double centerY, int team, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  __int64 numScores; 
  __int64 v20; 
  int *p_client; 
  int v22; 
  LocalClientNum_t m_localClientNum; 
  __int64 v24; 
  CgMLGSpectator *MLGSpectator; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  float v59; 
  vec4_t color; 
  vec4_t verts[4]; 
  char out_playerName[48]; 
  char v69; 

  __asm
  {
    vmovaps [rsp+198h+var_68], xmm8
    vmovaps [rsp+198h+var_88], xmm10
  }
  _EBX = clientNum;
  __asm
  {
    vmovaps xmm10, xmm3
    vmovaps xmm8, xmm2
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  _RDI = LocalClientGlobals;
  numScores = LocalClientGlobals->numScores;
  if ( numScores > 0 )
  {
    v20 = 0i64;
    p_client = &LocalClientGlobals->scores[0].client;
    while ( 1 )
    {
      v22 = *p_client;
      if ( *p_client == _EBX )
        break;
      ++v20;
      p_client += 28;
      if ( v20 >= numScores )
        goto LABEL_20;
    }
    m_localClientNum = this->m_localClientNum;
    __asm
    {
      vmovaps [rsp+198h+var_48], xmm6
      vmovaps [rsp+198h+var_58], xmm7
      vmovaps [rsp+198h+var_78], xmm9
      vmovaps [rsp+198h+var_98], xmm11
    }
    Game_GetPlayerName(m_localClientNum, v22, 0x30ui64, out_playerName);
    v24 = tls_index;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, rax
      vmulss  xmm9, xmm6, cs:__real@3bd55555
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, rax
      vmulss  xmm11, xmm7, cs:__real@3c00f2ba
    }
    if ( dword_150ECED00 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_150ECED00);
      if ( dword_150ECED00 == -1 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, cs:__real@3c555555
          vmovss  cs:COMPASS_PLAYER_NAME_TEXT_X_OFFSET, xmm0
        }
        j__Init_thread_footer(&dword_150ECED00);
      }
    }
    if ( dword_150ECED08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v24) + 1772i64) )
    {
      j__Init_thread_header(&dword_150ECED08);
      if ( dword_150ECED08 == -1 )
      {
        __asm
        {
          vmulss  xmm0, xmm7, cs:__real@3c6b2408
          vmovss  cs:COMPASS_PLAYER_NAME_TEXT_Y_OFFSET, xmm0
        }
        j__Init_thread_footer(&dword_150ECED08);
      }
    }
    if ( dword_150ECED10 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v24) + 1772i64) )
    {
      j__Init_thread_header(&dword_150ECED10);
      if ( dword_150ECED10 == -1 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, cs:__real@3aaaaaab
          vmovss  cs:COMPASS_PLAYER_NAME_TEXT_WITH_PLAYER_NUMBER_OFFSET, xmm0
        }
        j__Init_thread_footer(&dword_150ECED10);
      }
    }
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
      vaddss  xmm6, xmm8, cs:COMPASS_PLAYER_NAME_TEXT_X_OFFSET
      vaddss  xmm8, xmm10, cs:COMPASS_PLAYER_NAME_TEXT_Y_OFFSET
      vmovups xmmword ptr [rsp+198h+color], xmm0
      vxorps  xmm7, xmm7, xmm7
    }
    if ( _RDI->m_isMLGSpectator )
    {
      MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
      if ( CgMLGSpectator::GetPlayerNumbersEnabled(MLGSpectator) )
      {
        __asm
        {
          vaddss  xmm0, xmm9, cs:COMPASS_PLAYER_NAME_TEXT_WITH_PLAYER_NUMBER_OFFSET
          vaddss  xmm6, xmm6, xmm0
        }
      }
      __asm
      {
        vmovd   xmm1, dword ptr [rdi+1D4h]
        vmovd   xmm0, ebx
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, dword ptr [rsp+198h+color+8]
        vblendvps xmm0, xmm7, xmm1, xmm2
        vmovss  dword ptr [rsp+198h+color+8], xmm0
      }
    }
    __asm
    {
      vsubss  xmm3, xmm8, xmm11; bottom
      vaddss  xmm2, xmm9, xmm6; right
      vaddss  xmm1, xmm11, xmm8; top
      vsubss  xmm0, xmm6, xmm9; left
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    __asm { vmovss  xmm2, cs:__real@3f800000; scale }
    font = UI_GetFontHandle(ActivePlacement, 1, *(float *)&_XMM2);
    __asm { vmovss  [rsp+198h+var_150], xmm7 }
    LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, luaVM, element, (const vec4_t (*)[4])verts, &color, font, out_playerName, 0, 0, v59, 20, NULL, NULL);
    __asm
    {
      vmovaps xmm11, [rsp+198h+var_98]
      vmovaps xmm9, [rsp+198h+var_78]
      vmovaps xmm7, [rsp+198h+var_58]
      vmovaps xmm6, [rsp+198h+var_48]
    }
  }
LABEL_20:
  _R11 = &v69;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-60h]
  }
}

/*
==============
CgCompassSystem::DrawPlayerNumber
==============
*/

void __fastcall CgCompassSystem::DrawPlayerNumber(CgCompassSystem *this, int clientNum, double centerX, double centerY, float angle, int team, bool hasObjective, bool largeMap, vec4_t *fontColor, const CgStatic *cgStatic, LUIElement *element, lua_State *luaVM)
{
  LocalClientNum_t m_localClientNum; 
  int v26; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGSpectator *MLGSpectator; 
  __int64 v31; 
  __int64 numScores; 
  __int64 v33; 
  score_t *scores; 
  const dvar_t *v35; 
  const char *v41; 
  const dvar_t *v43; 
  const dvar_t *v45; 
  const char *v56; 
  const dvar_t *v59; 
  const dvar_t *v61; 
  const dvar_t *v63; 
  const dvar_t *v65; 
  const dvar_t *v67; 
  const dvar_t *v68; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  float v93; 
  char dest[2]; 
  char v95; 
  float s; 
  float c; 
  vec4_t quadVerts[4]; 

  __asm
  {
    vmovaps [rsp+1A8h+var_C8], xmm14
    vmovaps [rsp+1A8h+var_D8], xmm15
  }
  m_localClientNum = this->m_localClientNum;
  v26 = 10;
  *(_WORD *)dest = 0;
  v95 = 0;
  __asm
  {
    vmovaps xmm15, xmm3
    vmovaps xmm14, xmm2
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(m_localClientNum);
  if ( LocalClientGlobals->m_isMLGSpectator )
  {
    MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
    if ( !CgMLGSpectator::GetPlayerNumbersEnabled(MLGSpectator) )
      goto LABEL_72;
  }
  v31 = 1i64;
  if ( (team & 0xFFFFFFFD) != 0 )
    v31 = 6i64;
  if ( team == 2 )
  {
    v26 = 5;
  }
  else if ( team == 1 )
  {
    v26 = 10;
  }
  numScores = LocalClientGlobals->numScores;
  if ( numScores > 0 )
  {
    v33 = 0i64;
    scores = LocalClientGlobals->scores;
    do
    {
      if ( scores->team == team )
      {
        if ( scores->client == clientNum )
          break;
        v31 = (unsigned int)(v31 + 1);
      }
      ++v33;
      ++scores;
    }
    while ( v33 < numScores );
  }
  if ( LocalClientGlobals->m_isMLGSpectator )
  {
    if ( (int)v31 > v26 )
      goto LABEL_72;
    if ( (_DWORD)v31 == 10 )
      v31 = 0i64;
  }
  __asm
  {
    vmovaps [rsp+1A8h+var_48], xmm6
    vmovaps [rsp+1A8h+var_58], xmm7
    vmovaps [rsp+1A8h+var_68], xmm8
    vmovaps [rsp+1A8h+var_78], xmm9
    vmovaps [rsp+1A8h+var_88], xmm10
    vmovaps [rsp+1A8h+var_98], xmm11
    vmovaps [rsp+1A8h+var_A8], xmm12
    vmovaps [rsp+1A8h+var_B8], xmm13
  }
  Com_sprintf(dest, 3ui64, "%d", v31);
  if ( LocalClientGlobals->m_isMLGSpectator && clientNum == LocalClientGlobals->predictedPlayerState.clientNum )
  {
    v35 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm12, xmm0, cs:__real@3a088889
    vmulss  xmm13, xmm0, cs:__real@3a72b9d6
  }
  if ( hasObjective )
  {
    _RBX = DVARFLT_compassPlayerNumberObjectiveCircleRadius;
    if ( DVARFLT_compassPlayerNumberObjectiveCircleRadius )
      goto LABEL_32;
    v41 = "compassPlayerNumberObjectiveCircleRadius";
  }
  else
  {
    _RBX = DVARFLT_compassPlayerNumberCircleRadius;
    if ( DVARFLT_compassPlayerNumberCircleRadius )
      goto LABEL_32;
    v41 = "compassPlayerNumberCircleRadius";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v41) )
    __debugbreak();
LABEL_32:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  v43 = DVARFLT_compassMLGPlayerNumberTextWidth;
  if ( !DVARFLT_compassMLGPlayerNumberTextWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGPlayerNumberTextWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  __asm { vmulss  xmm9, xmm12, dword ptr [rbx+28h] }
  v45 = DVARFLT_compassMLGPlayerNumberFontHeight;
  if ( !DVARFLT_compassMLGPlayerNumberFontHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGPlayerNumberFontHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  __asm
  {
    vmovss  xmm0, [rsp+1A8h+arg_20]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
    vmulss  xmm8, xmm13, dword ptr [rbx+28h]
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmulss  xmm1, xmm6, [rsp+1A8h+s]
    vmovss  xmm2, [rsp+1A8h+c]
    vxorps  xmm10, xmm1, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm11, xmm2, xmm6
  }
  if ( hasObjective )
  {
    _RBX = DVARFLT_compassObjectivePlayerNumberTextXOffset;
    if ( !DVARFLT_compassObjectivePlayerNumberTextXOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectivePlayerNumberTextXOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DVARFLT_compassObjectivePlayerNumberTextYOffset;
    if ( DVARFLT_compassObjectivePlayerNumberTextYOffset )
      goto LABEL_51;
    v56 = "compassObjectivePlayerNumberTextYOffset";
  }
  else
  {
    _RBX = DVARFLT_compassPlayerNumberTextXOffset;
    if ( !DVARFLT_compassPlayerNumberTextXOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerNumberTextXOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DVARFLT_compassPlayerNumberTextYOffset;
    if ( DVARFLT_compassPlayerNumberTextYOffset )
      goto LABEL_51;
    v56 = "compassPlayerNumberTextYOffset";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v56) )
    __debugbreak();
LABEL_51:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  if ( largeMap )
  {
    v59 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    __asm { vmulss  xmm10, xmm10, dword ptr [rbx+28h] }
    v61 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v61);
    __asm { vmulss  xmm11, xmm11, dword ptr [rbx+28h] }
    v63 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v63);
    __asm { vmulss  xmm9, xmm9, dword ptr [rbx+28h] }
    v65 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v65);
    __asm { vmulss  xmm8, xmm8, dword ptr [rbx+28h] }
    v67 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v67);
    __asm { vmulss  xmm7, xmm7, dword ptr [rbx+28h] }
    v68 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v68);
    __asm { vmulss  xmm6, xmm6, dword ptr [rbx+28h] }
  }
  __asm
  {
    vaddss  xmm0, xmm7, xmm10
    vmulss  xmm1, xmm0, xmm12
    vaddss  xmm4, xmm14, xmm1
    vaddss  xmm2, xmm6, xmm11
    vmulss  xmm0, xmm2, xmm13
    vaddss  xmm1, xmm15, xmm0
    vsubss  xmm3, xmm1, xmm8; bottom
    vaddss  xmm1, xmm1, xmm8; top
    vaddss  xmm2, xmm4, xmm9; right
    vsubss  xmm0, xmm4, xmm9; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
  __asm { vmovss  xmm2, cs:__real@3f800000; scale }
  font = UI_GetFontHandle(ActivePlacement, 4, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+1A8h+var_160], xmm0
  }
  LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, fontColor, font, dest, 0, 0, v93, 120, NULL, NULL);
  __asm
  {
    vmovaps xmm13, [rsp+1A8h+var_B8]
    vmovaps xmm12, [rsp+1A8h+var_A8]
    vmovaps xmm11, [rsp+1A8h+var_98]
    vmovaps xmm10, [rsp+1A8h+var_88]
    vmovaps xmm9, [rsp+1A8h+var_78]
    vmovaps xmm8, [rsp+1A8h+var_68]
    vmovaps xmm7, [rsp+1A8h+var_58]
    vmovaps xmm6, [rsp+1A8h+var_48]
  }
LABEL_72:
  __asm
  {
    vmovaps xmm14, [rsp+1A8h+var_C8]
    vmovaps xmm15, [rsp+1A8h+var_D8]
  }
}

/*
==============
CgCompassSystem::GetCompassYaw
==============
*/
bool CgCompassSystem::GetCompassYaw(CgCompassSystem *this, const CompassType compassType, bool cropPartialMap, const cg_t *const cgameGlob, float *outAngle, vec2_t *outVector)
{
  const dvar_t *v9; 

  if ( compassType != COMPASS_TYPE_NAVBAR && (compassType || !this->m_isMinimapRotationEnabled) )
    goto LABEL_10;
  v9 = DVARBOOL_compassRotation;
  if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && !cropPartialMap )
  {
    *outAngle = this->m_compassPlayerYaw;
    *outVector = this->m_compassPlayerForward;
    return this->m_compassMirrorLeftRight;
  }
  else
  {
LABEL_10:
    *outAngle = cgameGlob->compassNorthYaw;
    *outVector = cgameGlob->compassNorth;
    return 0;
  }
}

/*
==============
CgCompassSystem::GetCroppedMapZoom
==============
*/
float CgCompassSystem::GetCroppedMapZoom(CgCompassSystem *this)
{
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystem::GetCurrentCompassDisplayType
==============
*/
CompassDisplay *CgCompassSystem::GetCurrentCompassDisplayType(CgCompassSystem *this)
{
  return &this->m_currentDisplayType;
}

/*
==============
CgCompassSystem::GetCurrentCompassType
==============
*/
__int64 CgCompassSystem::GetCurrentCompassType(CgCompassSystem *this)
{
  return (unsigned int)this->m_currentCompassType;
}

/*
==============
CgCompassSystem::GetCurrentCompassZoomLevel
==============
*/
float CgCompassSystem::GetCurrentCompassZoomLevel(CgCompassSystem *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+20h] }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystem::GetIconFadeAlpha
==============
*/
float CgCompassSystem::GetIconFadeAlpha(CgCompassSystem *this, const LocalClientNum_t localClientNum, CompassType compassType)
{
  CG_Radar_GetJammingLevel(localClientNum);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm0, xmm1, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystem::GetIfExceedMinDragDistance
==============
*/
_BOOL8 CgCompassSystem::GetIfExceedMinDragDistance(CgCompassSystem *this)
{
  return this->m_exceededMinDragDistance;
}

/*
==============
CgCompassSystem::GetIsUsingTabletMode
==============
*/
_BOOL8 CgCompassSystem::GetIsUsingTabletMode(CgCompassSystem *this)
{
  return this->m_isUsingTabletMode;
}

/*
==============
CgCompassSystem::GetMainHudColor
==============
*/
void CgCompassSystem::GetMainHudColor(CgCompassSystem *this, vec4_t *color)
{
  const dvar_t *v2; 

  v2 = DCONST_DVARVEC4_compassMainHUDColor;
  if ( !DCONST_DVARVEC4_compassMainHUDColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMainHUDColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  LODWORD(color->v[0]) = v2->current.integer;
  color->v[1] = v2->current.vector.v[1];
  color->v[2] = v2->current.vector.v[2];
  color->v[3] = v2->current.vector.v[3];
}

/*
==============
CgCompassSystem::GetMinimapRotationEnabled
==============
*/
_BOOL8 CgCompassSystem::GetMinimapRotationEnabled(CgCompassSystem *this)
{
  return this->m_isMinimapRotationEnabled;
}

/*
==============
CgCompassSystem::GetMinimapStyle
==============
*/
__int64 CgCompassSystem::GetMinimapStyle(CgCompassSystem *this)
{
  return (unsigned int)this->m_currentMinimapStyle;
}

/*
==============
CgCompassSystem::GetObjectiveFade
==============
*/

float __fastcall CgCompassSystem::GetObjectiveFade(CgCompassSystem *this, const rectDef_s *clipRect, double x, double y)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm8
    vmovaps xmmword ptr [rax-28h], xmm9
    vmovaps xmmword ptr [rax-38h], xmm10
    vmovss  xmm10, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-48h], xmm11
    vmovss  xmm11, dword ptr [rdx]
    vmovaps xmmword ptr [rax-58h], xmm12
    vmovaps [rsp+68h+var_68], xmm13
    vmovss  xmm13, cs:__real@3f800000
    vdivss  xmm9, xmm13, [rsp+68h+width]
    vdivss  xmm8, xmm13, [rsp+68h+height]
    vsubss  xmm0, xmm11, xmm2
    vaddss  xmm2, xmm2, [rsp+68h+width]
    vmulss  xmm4, xmm0, xmm9
    vxorps  xmm1, xmm1, xmm1
    vmaxss  xmm5, xmm4, xmm1
    vsubss  xmm0, xmm10, xmm3
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm0, xmm11, dword ptr [rdx+8]
    vmovaps xmm11, xmmword ptr [rax-48h]
    vmovaps xmm12, xmm3
    vmaxss  xmm3, xmm1, xmm5
    vsubss  xmm1, xmm2, xmm0
    vaddss  xmm0, xmm10, dword ptr [rdx+0Ch]
    vmovaps xmm10, xmmword ptr [rax-38h]
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm1, xmm12, [rsp+68h+height]
    vmovaps xmm9, xmmword ptr [rax-28h]
    vmovaps xmm12, xmmword ptr [rax-58h]
    vsubss  xmm1, xmm1, xmm0
    vmaxss  xmm4, xmm2, xmm3
    vmulss  xmm2, xmm1, xmm8
    vmovaps xmm8, xmmword ptr [rax-18h]
    vmaxss  xmm3, xmm2, xmm4
    vminss  xmm0, xmm3, xmm13
    vsubss  xmm0, xmm13, xmm0
    vmovaps xmm13, [rsp+68h+var_68]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystem::GetPlayerAngle
==============
*/
float CgCompassSystem::GetPlayerAngle(CgCompassSystem *this, const cg_t *const cgameGlob, const CgGlobalsMP *const cgameGlobMP, const CompassType compassType, const bool cropPartialMap)
{
  const dvar_t *v15; 
  const dvar_t *v33; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _RDI = cgameGlob;
  _RBX = this;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2725, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cgameGlobMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2726, ASSERT_TYPE_ASSERT, "(cgameGlobMP)", (const char *)&queryFormat, "cgameGlobMP") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_58], xmm8
    vmovaps [rsp+0A8h+var_68], xmm9
    vxorps  xmm6, xmm6, xmm6
  }
  if ( compassType )
    goto LABEL_17;
  v15 = DVARBOOL_compassRotation;
  if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled || cropPartialMap || !_RBX->m_isMinimapRotationEnabled )
  {
LABEL_17:
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+49FFCh]
      vmovss  xmm8, cs:__real@3b360b61
      vmovss  xmm9, cs:__real@3f000000
    }
    if ( _RDI->predictedPlayerState.vehicleState.entity == 2047 )
      __asm { vsubss  xmm1, xmm0, dword ptr [rbx+0Ch] }
    else
      __asm { vsubss  xmm1, xmm0, dword ptr [rax+4Ch] }
    __asm
    {
      vmulss  xmm5, xmm1, xmm8
      vaddss  xmm2, xmm5, xmm9
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm4, xmm1, xmm2, 1
      vsubss  xmm0, xmm5, xmm4
      vmulss  xmm6, xmm0, cs:__real@43b40000
      vmovaps xmm7, xmm6
    }
    if ( cgameGlobMP && cgameGlobMP->m_isMLGSpectator && _RBX->MapShouldRotate(_RBX) )
    {
      _RBX->MapRotationFactor(_RBX);
      __asm
      {
        vsubss  xmm6, xmm6, xmm0
        vmovaps xmm7, xmm6
      }
    }
    if ( compassType )
      goto LABEL_31;
  }
  else
  {
    __asm
    {
      vmovss  xmm8, cs:__real@3b360b61
      vmovss  xmm9, cs:__real@3f000000
    }
    if ( _RDI->predictedPlayerState.vehicleState.entity != 2047 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vsubss  xmm1, xmm0, dword ptr [rax+4Ch]
        vmulss  xmm5, xmm1, xmm8
        vaddss  xmm2, xmm5, xmm9
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm4, xmm1, xmm2, 1
        vsubss  xmm0, xmm5, xmm4
        vmulss  xmm6, xmm0, cs:__real@43b40000
      }
    }
    __asm { vmovaps xmm7, xmm6 }
  }
  v33 = DVARBOOL_compassRotation;
  if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  if ( !v33->current.enabled || !_RBX->m_compassMirrorLeftRight )
  {
LABEL_31:
    __asm { vmovaps xmm0, xmm6 }
    goto LABEL_32;
  }
  __asm
  {
    vmulss  xmm4, xmm7, xmm8
    vaddss  xmm2, xmm4, xmm9
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm0, xmm0, cs:__real@c3b40000
  }
LABEL_32:
  __asm
  {
    vmovaps xmm9, [rsp+0A8h+var_68]
    vmovaps xmm8, [rsp+0A8h+var_58]
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm6, [rsp+0A8h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystem::GetPlayerCompassColor
==============
*/
void CgCompassSystem::GetPlayerCompassColor(CgCompassSystem *this, vec4_t *color, const cg_t *cgameGlob)
{
  __asm
  {
    vmovss  xmm0, dword ptr cs:playerColor
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, dword ptr cs:playerColor+4
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm0, dword ptr cs:playerColor+8
    vmovss  dword ptr [rdx+8], xmm0
    vmovss  xmm1, dword ptr cs:playerColor+0Ch
    vmovss  dword ptr [rdx+0Ch], xmm1
  }
}

/*
==============
CgCompassSystem::GetPlayerDrawSize
==============
*/
void CgCompassSystem::GetPlayerDrawSize(CgCompassSystem *this, CompassType compassType, bool largeMap, float *outHeight, float *outWidth)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v13; 
  const dvar_t *v18; 
  const dvar_t *v29; 
  const dvar_t *v31; 

  _RBX = outHeight;
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  else
    LocalClientGlobals = NULL;
  if ( (unsigned int)(compassType - 1) <= 1 )
  {
    v29 = DVARFLT_cg_hudMapPlayerWidth;
    if ( !DVARFLT_cg_hudMapPlayerWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapPlayerWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    _R12 = outWidth;
    *outWidth = v29->current.value;
    v31 = DVARFLT_cg_hudMapPlayerHeight;
    if ( !DVARFLT_cg_hudMapPlayerHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapPlayerHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    *_RBX = v31->current.value;
    if ( largeMap && compassType == COMPASS_TYPE_FULL && LocalClientGlobals && LocalClientGlobals->m_isMLGSpectator )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [r12]
        vmovss  dword ptr [r12], xmm0
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm0
      }
    }
  }
  else
  {
    __asm { vmovaps [rsp+78h+var_38], xmm6 }
    if ( compassType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2033, ASSERT_TYPE_ASSERT, "(compassType == CompassType::COMPASS_TYPE_PARTIAL)", (const char *)&queryFormat, "compassType == CompassType::COMPASS_TYPE_PARTIAL") )
      __debugbreak();
    _RSI = DVARFLT_compassPlayerWidth;
    if ( !DVARFLT_compassPlayerWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
    v13 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    __asm { vmulss  xmm0, xmm6, dword ptr [rsi+28h] }
    _RSI = outWidth;
    __asm { vmovss  dword ptr [rsi], xmm0 }
    _R12 = DVARFLT_compassPlayerHeight;
    if ( !DVARFLT_compassPlayerHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R12);
    __asm { vmovss  xmm6, dword ptr [r12+28h] }
    v18 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [r12+28h]
      vmovaps xmm6, [rsp+78h+var_38]
      vmovss  dword ptr [rbx], xmm0
    }
    if ( largeMap && LocalClientGlobals && LocalClientGlobals->m_isMLGSpectator )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm0
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm0
      }
    }
    if ( CL_IsRenderingSplitScreen() )
    {
      _RDI = DVARFLT_cg_hudSplitscreenCompassElementScale;
      if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmulss  xmm1, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm1
      }
      _RDI = DVARFLT_cg_hudSplitscreenCompassElementScale;
      if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmulss  xmm1, xmm0, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
    }
    CG_ApplySplitScreenCompassScale(compassType, NULL, NULL, outWidth, _RBX);
  }
}

/*
==============
CgCompassSystem::GetPredictiveLocationInfo
==============
*/

void __fastcall CgCompassSystem::GetPredictiveLocationInfo(CgCompassSystem *this, double objDist, double avgMapDimension, const vec2_t *mapPosCurrent, const vec2_t *mapPosPrevious, const vec2_t *outClipped, vec2_t *forwardPoint, vec2_t *positioningDelta)
{
  __asm
  {
    vcomiss xmm1, xmm2
    vmovss  xmm0, dword ptr [r9]
  }
  _RDX = positioningDelta;
  __asm
  {
    vmovaps [rsp+28h+var_18], xmm6
    vmovaps [rsp+28h+var_28], xmm7
    vsubss  xmm5, xmm0, dword ptr [r8]
    vmovss  dword ptr [rdx], xmm5
    vmovss  xmm3, dword ptr [r9+4]
    vsubss  xmm4, xmm3, dword ptr [r8+4]
    vmovss  dword ptr [rdx+4], xmm4
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm2, xmm1
    vmovaps xmm3, xmm5
    vmovaps xmm1, xmm2
    vrsqrtss xmm2, xmm1, xmm2
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rdx], xmm0
    vsubss  xmm0, xmm7, xmm6
    vmulss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rdx+4], xmm1
    vmulss  xmm3, xmm0, dword ptr [rdx]
    vmulss  xmm0, xmm0, dword ptr [rdx+4]
    vmovss  dword ptr [rdx+4], xmm0
    vmovss  dword ptr [rdx], xmm3
  }
  _RAX = outClipped;
  _RCX = forwardPoint;
  __asm
  {
    vaddss  xmm0, xmm3, dword ptr [rax]
    vmovss  dword ptr [rcx], xmm0
    vmovss  xmm0, dword ptr [rax+4]
    vaddss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  dword ptr [rcx+4], xmm1
    vmovaps xmm6, [rsp+28h+var_18]
    vmovaps xmm7, [rsp+28h+var_28]
  }
}

/*
==============
CgCompassSystem::GetTacmapMapCenter
==============
*/
vec2_t CgCompassSystem::GetTacmapMapCenter(CgCompassSystem *this, vec2_t *a2)
{
  *a2 = this->m_tacmapMapCenter;
  return (vec2_t)a2;
}

/*
==============
CgCompassSystem::IsCursorInTacMap
==============
*/

bool __fastcall CgCompassSystem::IsCursorInTacMap(CgCompassSystem *this, double _XMM1_8)
{
  int ControllerFromClient; 
  char v4; 
  char v5; 
  MouseCursorPos curPos; 

  _RBX = this;
  if ( this->m_currentCompassType != COMPASS_TYPE_TACMAP )
    return 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
  IN_GetCursorPos(ControllerFromClient, &curPos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C8h]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rsp+28h+curPos.x]
    vcomiss xmm0, xmm1
  }
  if ( !v4 )
    return 0;
  __asm
  {
    vaddss  xmm0, xmm0, dword ptr [rbx+0D0h]
    vcomiss xmm0, xmm1
  }
  if ( v4 | v5 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0CCh]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rsp+28h+curPos.y]
    vcomiss xmm0, xmm1
  }
  if ( !v4 )
    return 0;
  __asm
  {
    vaddss  xmm0, xmm0, dword ptr [rbx+0D4h]
    vcomiss xmm0, xmm1
  }
  return !(v4 | v5);
}

/*
==============
CgCompassSystem::MapOffset
==============
*/
vec2_t CgCompassSystem::MapOffset(CgCompassSystem *this, _QWORD *a2)
{
  __int64 v4; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f000000
    vmovss  dword ptr [rsp+arg_8], xmm0
    vmovss  dword ptr [rsp+arg_8+4], xmm0
  }
  *a2 = v4;
  return (vec2_t)a2;
}

/*
==============
CgCompassSystem::MapRotationFactor
==============
*/
float CgCompassSystem::MapRotationFactor(CgCompassSystem *this)
{
  __asm { vmovss  xmm0, cs:__real@42b40000 }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystem::MapShouldRotate
==============
*/
bool CgCompassSystem::MapShouldRotate(CgCompassSystem *this)
{
  return 0;
}

/*
==============
CgCompassSystem::ResetCompassActorObfuscation
==============
*/
void CgCompassSystem::ResetCompassActorObfuscation(CgCompassSystem *const compassSystem)
{
  CgCompassSystem *v2; 
  int v3; 
  int v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  bdRandom v19; 
  bdRandom v20; 
  bdRandom v21; 
  bdRandom v22; 
  CgCompassSystem *v23; 
  __int64 v24; 
  int v25; 

  v24 = -2i64;
  v2 = compassSystem;
  v23 = compassSystem;
  v3 = 0;
  v4 = compassSystem->GetCompassActorCount(compassSystem);
  if ( v4 > 0 )
  {
    do
    {
      v5 = v2->GetCompassActor(v2, v3);
      bdRandom::bdRandom(&v21);
      v6 = bdRandom::nextUInt(&v21) % 0x22;
      bdRandom::~bdRandom(&v21);
      SetObfuscatedFunction(v6, v5 + 24, v5 + 16, (void (__fastcall **)(const vec3_t *, vec4_t *))(v5 + 16), (void (__fastcall **)(const vec4_t *, vec3_t *))(v5 + 24), s_aab_set_pointer_lastpos, s_aab_get_pointer_lastpos);
      bdRandom::bdRandom(&v22);
      v7 = bdRandom::nextUInt(&v22) % 0x22;
      bdRandom::~bdRandom(&v22);
      SetObfuscatedFunction(v7, v5 + 56, v5 + 48, (void (__fastcall **)(const vec3_t *, vec4_t *))(v5 + 48), (void (__fastcall **)(const vec4_t *, vec3_t *))(v5 + 56), s_aab_set_pointer_lastenemypos, s_aab_get_pointer_lastenemypos);
      bdRandom::bdRandom(&v19);
      bdRandom::nextUInt(&v19);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmovss  [rbp+var_20], xmm0
      }
      bdRandom::nextUInt(&v19);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmovss  [rbp+var_1C], xmm0
      }
      bdRandom::nextUInt(&v19);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmovss  [rbp+var_18], xmm0
      }
      bdRandom::~bdRandom(&v19);
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 197, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
        __debugbreak();
      if ( !*(_QWORD *)(v5 + 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 205, ASSERT_TYPE_ASSERT, "(actor->lastPos.Set_lastPos)", (const char *)&queryFormat, "actor->lastPos.Set_lastPos") )
        __debugbreak();
      ((void (__fastcall *)(int *, __int64))(*(_QWORD *)(v5 + 16) ^ (v5 + 24) ^ s_aab_set_pointer_lastpos))(&v25, v5 + 32);
      bdRandom::bdRandom(&v20);
      bdRandom::nextUInt(&v20);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmovss  [rbp+var_20], xmm0
      }
      bdRandom::nextUInt(&v20);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmovss  [rbp+var_1C], xmm0
      }
      bdRandom::nextUInt(&v20);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmovss  [rbp+var_18], xmm0
      }
      bdRandom::~bdRandom(&v20);
      if ( !*(_QWORD *)(v5 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 261, ASSERT_TYPE_ASSERT, "(actor->lastEnemyPos.Set_lastEnemyPos)", (const char *)&queryFormat, "actor->lastEnemyPos.Set_lastEnemyPos") )
        __debugbreak();
      ((void (__fastcall *)(int *, __int64))(*(_QWORD *)(v5 + 48) ^ (v5 + 56) ^ s_aab_set_pointer_lastenemypos))(&v25, v5 + 64);
      ++v3;
      v2 = v23;
    }
    while ( v3 < v4 );
  }
}

/*
==============
CgCompassSystem::SetCurrentCompassDisplayType
==============
*/
void CgCompassSystem::SetCurrentCompassDisplayType(CgCompassSystem *this, CompassDisplay compassType)
{
  this->m_currentDisplayType = compassType;
}

/*
==============
CgCompassSystem::SetCurrentCompassType
==============
*/
void CgCompassSystem::SetCurrentCompassType(CgCompassSystem *this, CompassType compassType)
{
  bool v2; 

  v2 = compassType == this->m_currentCompassType;
  this->m_currentCompassType = compassType;
  if ( !v2 )
    this->m_PreventZoom = 1;
}

/*
==============
CgCompassSystem::SetCurrentCompassZoomLevel
==============
*/

void __fastcall CgCompassSystem::SetCurrentCompassZoomLevel(CgCompassSystem *this, double zoomLevel)
{
  __asm { vmovss  dword ptr [rcx+20h], xmm1 }
}

/*
==============
CgCompassSystem::SetIsUsingTabletMode
==============
*/
void CgCompassSystem::SetIsUsingTabletMode(CgCompassSystem *this, bool usingTabletMode)
{
  this->m_isUsingTabletMode = usingTabletMode;
}

/*
==============
CgCompassSystem::SetMinimapRotationEnabled
==============
*/
void CgCompassSystem::SetMinimapRotationEnabled(CgCompassSystem *this, bool value)
{
  this->m_isMinimapRotationEnabled = value;
}

/*
==============
CgCompassSystem::SetMinimapStyle
==============
*/
void CgCompassSystem::SetMinimapStyle(CgCompassSystem *this, MinimapStyle newStyle)
{
  if ( newStyle >= MINIMAP_STYLE_COUNT )
    newStyle = MINIMAP_STYLE_CIRCLE;
  this->m_currentMinimapStyle = newStyle;
}

/*
==============
CgCompassSystem::SetPreventZoom
==============
*/
void CgCompassSystem::SetPreventZoom(CgCompassSystem *this, const bool preventZoom)
{
  this->m_PreventZoom = preventZoom;
}

/*
==============
CgCompassSystem::SetTacmapMapCenter
==============
*/
void CgCompassSystem::SetTacmapMapCenter(CgCompassSystem *this, vec2_t centerPos)
{
  this->m_tacmapMapCenter = centerPos;
}

/*
==============
CgCompassSystem::UpdatePlayerOrientation
==============
*/
void CgCompassSystem::UpdatePlayerOrientation(CgCompassSystem *this, const playerState_s *const ps)
{
  int pm_type; 
  bool v5; 
  LocalClientNum_t m_localClientNum; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 
  char v19; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v31; 

  _RBX = this;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2535, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX->m_compassMirrorLeftRight = 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = ps->pm_type;
  v5 = pm_type == 1 || pm_type == 8 || (ps->linkFlags.m_flags[0] & 4) != 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u);
  m_localClientNum = _RBX->m_localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2609, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RDI = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2612, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( LocalClientGlobals->renderingThirdPerson || (Instance = CgWeaponMap::GetInstance(m_localClientNum), BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState)) )
  {
    AxisToAngles(&LocalClientGlobals->refdef.view.axis, &angles);
    __asm { vmovss  xmm1, dword ptr [rsp+0D8h+angles+4] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+1D8h]
      vmovss  dword ptr [rsp+0D8h+angles], xmm0
      vmovss  xmm1, dword ptr [rdi+1DCh]
      vmovss  dword ptr [rsp+0D8h+angles+4], xmm1
      vmovss  xmm0, dword ptr [rdi+1E0h]
      vmovss  dword ptr [rsp+0D8h+angles+8], xmm0
    }
  }
  if ( v5 )
  {
    __asm
    {
      vmovaps xmm0, xmm1; yaw
      vmovss  dword ptr [rbx+0Ch], xmm1
    }
    YawVectors2D(*(float *)&_XMM0, &_RBX->m_compassPlayerForward, NULL);
  }
  else
  {
    AnglesToAxis(&angles, &axis);
    Handler = CgHandler::getHandler(_RBX->m_localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v31, ps, Handler);
    WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v31, &axis);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+0D8h+axis]
      vmovss  xmm4, dword ptr [rsp+0D8h+axis+4]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vcomiss xmm2, cs:__real@3a83126f
    }
    if ( v19 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0D8h+axis+10h]
        vmovss  xmm1, dword ptr [rsp+0D8h+axis+0Ch]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm2, xmm2, xmm2
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm4, xmm1
        vmulss  xmm1, xmm3, xmm1
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+10h], xmm1
      vmovss  dword ptr [rbx+14h], xmm0
    }
    *(double *)&_XMM0 = vectoyaw(&_RBX->m_compassPlayerForward);
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+0D8h+var_70.m_axis+20h]
      vxorps  xmm2, xmm2, xmm2
      vcomiss xmm1, xmm2
      vmovss  dword ptr [rbx+0Ch], xmm0
    }
    if ( v19 )
      _RBX->m_compassMirrorLeftRight = 1;
  }
}

/*
==============
CgCompassSystem::UpdateTurretInfoCommon
==============
*/
void CgCompassSystem::UpdateTurretInfoCommon(CgCompassSystem *this, CompassTurret *turretInfo, LocalClientNum_t localClientNum, const centity_t *cent)
{
  _RBX = cent;
  _RDI = turretInfo;
  if ( !turretInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2654, ASSERT_TYPE_ASSERT, "(turretInfo)", (const char *)&queryFormat, "turretInfo") )
    __debugbreak();
  _RDI->lastUpdateTime = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
  CG_GetPoseOrigin(&_RBX->pose, &_RDI->positionCurrent);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 141, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (_RBX->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 142, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( _RBX->pose.eType == 11 && _RBX->pose.turret.remoteTurret )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2661, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+0A4h] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0A4h]
      vaddss  xmm0, xmm0, dword ptr [rbx+4Ch]; angle
    }
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm { vmovss  dword ptr [rdi+28h], xmm0 }
}

/*
==============
CgCompassSystem::WorldPosToCompass
==============
*/
__int64 CgCompassSystem::WorldPosToCompass(CgCompassSystem *this, CompassType compassType, bool cropPartialMap, const rectDef_s *mapRect, const float boundsRadius, const vec2_t *compassMapWorldSize, const vec2_t *compassMapUpperLeft, const vec2_t *compassNorth, const vec2_t *north, const vec2_t *playerWorldPos, const vec2_t *in, vec2_t *out, vec2_t *outClipped)
{
  CgCompassSystem_vtbl *v28; 
  bool v67; 
  CgCompassSystem *CompassSystem; 
  __int64 result; 
  float c[2]; 
  float s[2]; 
  vec2_t m_tacmapMapCenter; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  _R14 = out;
  _RSI = mapRect;
  __asm
  {
    vmovaps [rsp+0F0h+var_98+8], xmm12
    vmovaps [rsp+0F0h+var_A8+8], xmm13
  }
  if ( !mapRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 136, ASSERT_TYPE_ASSERT, "(mapRect)", (const char *)&queryFormat, "mapRect") )
    __debugbreak();
  v28 = this->__vftable;
  __asm
  {
    vmovaps [rsp+0F0h+var_48+8], xmm7
    vmovaps [rsp+0F0h+var_58+8], xmm8
    vmovaps [rsp+0F0h+var_68+8], xmm9
    vmovaps [rsp+0F0h+var_78+8], xmm10
    vmovaps [rsp+0F0h+var_88+8], xmm11
  }
  *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))v28->GetRange)(this);
  __asm
  {
    vmovss  xmm13, cs:__real@3f000000
    vmovaps xmm6, xmm0
    vxorps  xmm12, xmm12, xmm12
  }
  if ( compassType )
  {
    if ( compassType == COMPASS_TYPE_TACMAP )
    {
      _RCX = in;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vsubss  xmm11, xmm0, dword ptr [rax]
        vmovss  xmm0, dword ptr [rcx+4]
        vsubss  xmm10, xmm0, dword ptr [rax+4]
      }
      _RAX = compassNorth;
      __asm
      {
        vmovss  xmm7, dword ptr [rax+4]
        vmovss  xmm9, dword ptr [rax]
      }
      _RAX = compassMapWorldSize;
      __asm
      {
        vmovss  xmm6, dword ptr [rax]
        vmovss  xmm8, dword ptr [rax+4]
      }
      CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm4, xmm0, dword ptr [rdi+20h]
        vmulss  xmm2, xmm11, xmm7
        vmulss  xmm1, xmm10, xmm9
        vsubss  xmm0, xmm2, xmm1
        vdivss  xmm2, xmm0, xmm6
        vmulss  xmm0, xmm10, xmm7
      }
      m_tacmapMapCenter = CompassSystem->m_tacmapMapCenter;
      __asm
      {
        vsubss  xmm3, xmm2, dword ptr [rsp+0F0h+var_B0]
        vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm1, xmm3, xmm4
        vmulss  xmm6, xmm1, dword ptr [rsi+8]
        vmulss  xmm1, xmm11, xmm9
        vsubss  xmm2, xmm2, xmm1
        vdivss  xmm0, xmm2, xmm8
        vsubss  xmm3, xmm0, dword ptr [rsp+0F0h+var_B0+4]
        vmulss  xmm1, xmm3, xmm4
        vmulss  xmm7, xmm1, dword ptr [rsi+0Ch]
      }
    }
    else
    {
      if ( compassType != COMPASS_TYPE_FULL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 215, ASSERT_TYPE_ASSERT, "(compassType == CompassType::COMPASS_TYPE_FULL)", (const char *)&queryFormat, "compassType == CompassType::COMPASS_TYPE_FULL") )
        __debugbreak();
      _RCX = in;
      __asm
      {
        vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm0, dword ptr [rcx]
        vsubss  xmm6, xmm0, dword ptr [rax]
        vmovss  xmm0, dword ptr [rcx+4]
        vsubss  xmm4, xmm0, dword ptr [rax+4]
      }
      _RAX = compassNorth;
      __asm
      {
        vmovss  xmm3, dword ptr [rax+4]
        vmovss  xmm5, dword ptr [rax]
        vmulss  xmm1, xmm6, xmm3
        vmulss  xmm0, xmm4, xmm5
        vsubss  xmm2, xmm1, xmm0
        vdivss  xmm1, xmm2, dword ptr [rax]
        vsubss  xmm7, xmm1, xmm13
        vmulss  xmm0, xmm4, xmm3
        vxorps  xmm1, xmm0, xmm9
        vmulss  xmm0, xmm6, xmm5
        vsubss  xmm1, xmm1, xmm0
        vdivss  xmm2, xmm1, dword ptr [rax+4]
        vsubss  xmm8, xmm2, xmm13
        vmovss  [rsp+0F0h+s+4], xmm8
        vmovss  [rsp+0F0h+s], xmm7
      }
      if ( cg_t::ms_allocatedType == GLOB_TYPE_MP && CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->m_isMLGSpectator && this->MapShouldRotate(this) )
      {
        m_tacmapMapCenter = *(vec2_t *)s;
        *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))this->MapRotationFactor)(this);
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@3c8efa35
          vxorps  xmm1, xmm1, xmm9; radians
        }
        Vec2Rotate(&m_tacmapMapCenter, *(float *)&_XMM1, (vec2_t *)s);
        __asm
        {
          vmovss  xmm8, [rsp+0F0h+s+4]
          vmovss  xmm7, [rsp+0F0h+s]
        }
      }
      __asm
      {
        vmulss  xmm6, xmm7, dword ptr [rsi+8]
        vmulss  xmm7, xmm8, dword ptr [rsi+0Ch]
      }
    }
    goto LABEL_21;
  }
  __asm { vcomiss xmm0, xmm12 }
  if ( cropPartialMap )
  {
    *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))this->GetCroppedMapZoom)(this);
    _RBX = compassMapWorldSize;
    __asm
    {
      vmovaps xmm7, xmm0
      vmovss  xmm6, dword ptr [rbx+4]
    }
    ((void (__fastcall *)(CgCompassSystem *, vec2_t *))this->MapOffset)(this, &m_tacmapMapCenter);
    _RCX = in;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0Ch]
      vmulss  xmm1, xmm7, xmm6
      vmovss  xmm2, dword ptr [rcx]
      vdivss  xmm10, xmm0, xmm1
      vsubss  xmm9, xmm2, dword ptr [rax]
      vmovss  xmm0, dword ptr [rcx+4]
      vsubss  xmm6, xmm0, dword ptr [rax+4]
      vmulss  xmm0, xmm6, dword ptr [rax]
      vmulss  xmm1, xmm9, dword ptr [rax+4]
      vsubss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm6, dword ptr [rax+4]
      vdivss  xmm2, xmm1, dword ptr [rbx]
      vsubss  xmm3, xmm2, dword ptr [rsp+0F0h+var_B0]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm9, dword ptr [rax]
      vmulss  xmm11, xmm3, dword ptr [rbx]
      vsubss  xmm1, xmm1, xmm0
      vdivss  xmm2, xmm1, dword ptr [rbx+4]
      vsubss  xmm3, xmm2, dword ptr [rsp+0F0h+var_B0+4]
      vmulss  xmm7, xmm3, dword ptr [rbx+4]
      vmovaps xmm6, xmm11
    }
    if ( this->MapShouldRotate(this) )
    {
      *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))this->MapRotationFactor)(this);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3c8efa35
        vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000; radians
      }
      FastSinCos(*(const float *)&_XMM0, s, &c[1]);
      __asm
      {
        vmulss  xmm1, xmm11, [rsp+0F0h+c+4]
        vmulss  xmm0, xmm7, [rsp+0F0h+s]
        vmulss  xmm2, xmm11, [rsp+0F0h+s]
        vsubss  xmm6, xmm1, xmm0
        vmulss  xmm1, xmm7, [rsp+0F0h+c+4]
        vaddss  xmm7, xmm2, xmm1
      }
    }
    __asm
    {
      vmulss  xmm6, xmm10, xmm6
      vmulss  xmm7, xmm10, xmm7
    }
LABEL_21:
    __asm { vmovss  [rsp+0F0h+s+4], xmm7 }
    goto LABEL_22;
  }
  v67 = !this->m_compassMirrorLeftRight;
  _RCX = in;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vdivss  xmm3, xmm0, xmm6
    vmovss  xmm1, dword ptr [rcx]
    vsubss  xmm0, xmm1, dword ptr [rax]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm2, xmm1, dword ptr [rax+4]
    vmulss  xmm5, xmm0, xmm3
    vmulss  xmm4, xmm2, xmm3
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm5, dword ptr [rax+4]
    vmulss  xmm0, xmm4, dword ptr [rax]
    vsubss  xmm6, xmm1, xmm0
    vmulss  xmm0, xmm4, dword ptr [rax+4]
    vxorps  xmm1, xmm0, xmm3
    vmulss  xmm0, xmm5, dword ptr [rax]
    vsubss  xmm7, xmm1, xmm0
    vmovss  [rsp+0F0h+s+4], xmm7
    vmovss  [rsp+0F0h+s], xmm6
  }
  if ( v67 )
    goto LABEL_23;
  __asm { vxorps  xmm6, xmm6, xmm3 }
LABEL_22:
  __asm { vmovss  [rsp+0F0h+s], xmm6 }
LABEL_23:
  __asm
  {
    vmovaps xmm11, [rsp+0F0h+var_88+8]
    vmovaps xmm10, [rsp+0F0h+var_78+8]
    vmovaps xmm9, [rsp+0F0h+var_68+8]
    vmovaps xmm8, [rsp+0F0h+var_58+8]
  }
  if ( outClipped )
    __asm { vcomiss xmm12, dword ptr [rsi+8] }
  __asm { vmovaps xmm13, [rsp+0F0h+var_A8+8] }
  result = 0i64;
  __asm { vmovaps xmm12, [rsp+0F0h+var_98+8] }
  if ( out )
  {
    __asm
    {
      vmovss  dword ptr [r14], xmm6
      vmovss  dword ptr [r14+4], xmm7
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+0F0h+var_48+8]
    vmovaps xmm6, [rsp+0F0h+var_38+8]
  }
  return result;
}

/*
==============
CgCompassSystem::WorldPosToCompass
==============
*/
bool CgCompassSystem::WorldPosToCompass(CgCompassSystem *this, CompassType compassType, bool cropPartialMap, const rectDef_s *mapRect, const float boundsRadius, const vec2_t *north, const vec2_t *playerWorldPos, const vec2_t *in, vec2_t *out, vec2_t *outClipped)
{
  cg_t *LocalClientGlobals; 
  float v17; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  __asm
  {
    vmovss  xmm0, [rsp+78h+boundsRadius]
    vmovss  [rsp+78h+var_58], xmm0
  }
  return CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, mapRect, v17, &LocalClientGlobals->compassMapWorldSize, &LocalClientGlobals->compassMapUpperLeft, &LocalClientGlobals->compassNorth, north, playerWorldPos, in, out, outClipped);
}

/*
==============
CgCompassSystem::WorldPosToCompassPredict
==============
*/

bool __fastcall CgCompassSystem::WorldPosToCompassPredict(CgCompassSystem *this, CompassType compassType, const rectDef_s *mapRect, double boundsRadius, const vec2_t *north, const vec2_t *playerWorldPos, const vec2_t *in, const vec2_t *prev, vec2_t *out, vec2_t *outClipped)
{
  LocalClientNum_t m_localClientNum; 
  char v31; 
  bool result; 
  bool v114; 
  bool v116; 
  double v137; 
  bool v138[4]; 
  vec2_t outClippedXY; 
  void *retaddr; 

  _R11 = &retaddr;
  _R15 = out;
  _RDI = mapRect;
  _R12 = outClipped;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-0A8h], xmm13
    vmovss  [rsp+120h+var_E0], xmm3
  }
  if ( !mapRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 311, ASSERT_TYPE_ASSERT, "(mapRect)", (const char *)&queryFormat, "mapRect") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  __asm
  {
    vmovaps [rsp+120h+var_38+8], xmm6
    vmovaps [rsp+120h+var_48+8], xmm7
    vmovaps [rsp+120h+var_68+8], xmm9
    vmovaps [rsp+120h+var_78+8], xmm10
    vmovaps [rsp+120h+var_88+8], xmm11
    vmovaps [rsp+120h+var_98+8], xmm12
    vmovaps [rsp+120h+var_B8+8], xmm14
    vmovaps [rsp+120h+var_C8+8], xmm15
  }
  _RSI = CG_GetLocalClientGlobals(m_localClientNum);
  __asm
  {
    vmovss  xmm13, cs:__real@3f000000
    vxorps  xmm8, xmm8, xmm8
  }
  if ( compassType )
  {
    if ( (unsigned int)(compassType - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 344, ASSERT_TYPE_ASSERT, "(compassType == CompassType::COMPASS_TYPE_FULL || compassType == CompassType::COMPASS_TYPE_TACMAP)", (const char *)&queryFormat, "compassType == CompassType::COMPASS_TYPE_FULL || compassType == CompassType::COMPASS_TYPE_TACMAP") )
      __debugbreak();
    _RAX = in;
    __asm
    {
      vmovss  xmm4, dword ptr [rsi+4A004h]
      vmovss  xmm5, dword ptr [rsi+4A000h]
      vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm15, xmm0, dword ptr [rsi+4A018h]
      vmovss  xmm1, dword ptr [rax+4]
      vsubss  xmm6, xmm1, dword ptr [rsi+4A01Ch]
      vmovss  xmm11, dword ptr [rdi+0Ch]
      vmovss  xmm14, [rsp+120h+var_E0]
      vmovss  xmm7, [rsp+120h+var_E0]
      vmovss  xmm12, [rsp+120h+var_E0]
      vmulss  xmm1, xmm4, xmm15
      vmulss  xmm0, xmm5, xmm6
      vsubss  xmm1, xmm1, xmm0
      vdivss  xmm2, xmm1, dword ptr [rsi+4A020h]
      vsubss  xmm3, xmm2, xmm13
      vmulss  xmm9, xmm3, dword ptr [rdi+8]
      vmulss  xmm0, xmm4, xmm6
      vxorps  xmm1, xmm0, xmm10
      vmulss  xmm0, xmm5, xmm15
      vsubss  xmm1, xmm1, xmm0
      vdivss  xmm2, xmm1, dword ptr [rsi+4A024h]
      vmovss  xmm1, [rsp+120h+var_E0]
      vsubss  xmm3, xmm2, xmm13
      vmulss  xmm0, xmm3, xmm11
      vmovss  [rsp+120h+var_E8], xmm0
      vmovss  [rsp+120h+var_EC], xmm1
    }
  }
  else
  {
    *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))this->GetRange)(this);
    __asm { vcomiss xmm0, xmm8 }
    if ( v31 )
    {
      *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))this->GetRange)(this);
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  qword ptr [rsp+120h+var_F8], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 317, ASSERT_TYPE_ASSERT, "( ( GetRange() >= 0.0f ) )", "( GetRange() ) = %g", v137) )
        __debugbreak();
    }
    this->GetRange(this);
    v114 = !this->m_compassMirrorLeftRight;
    _RAX = in;
    __asm
    {
      vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm1, cs:__real@3f800000
      vmovss  xmm11, dword ptr [rdi+0Ch]
      vmovss  xmm3, dword ptr [rax]
      vmovss  xmm4, dword ptr [rax+4]
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm7, xmm11, xmm2
      vsubss  xmm0, xmm3, dword ptr [rax]
      vsubss  xmm1, xmm4, dword ptr [rax+4]
    }
    _RAX = north;
    __asm
    {
      vmulss  xmm2, xmm1, xmm7
      vmulss  xmm15, xmm0, xmm7
      vmovss  [rsp+120h+var_DC], xmm2
      vmovss  xmm5, dword ptr [rax+4]
      vmovss  xmm6, dword ptr [rax]
      vmulss  xmm0, xmm6, xmm2
      vmulss  xmm2, xmm5, xmm2
      vmulss  xmm3, xmm3, xmm7
      vmulss  xmm1, xmm5, xmm15
      vsubss  xmm9, xmm1, xmm0
      vxorps  xmm1, xmm2, xmm10
      vmulss  xmm2, xmm4, xmm7
      vmulss  xmm0, xmm6, xmm15
      vsubss  xmm0, xmm1, xmm0
      vmovss  [rsp+120h+var_E8], xmm0
      vmulss  xmm0, xmm6, xmm2
      vmulss  xmm1, xmm5, xmm3
      vsubss  xmm12, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm2
      vxorps  xmm2, xmm1, xmm10
      vmulss  xmm0, xmm6, xmm3
      vmulss  xmm3, xmm7, dword ptr [rax]
      vsubss  xmm4, xmm2, xmm0
      vmulss  xmm2, xmm7, dword ptr [rax+4]
      vmulss  xmm0, xmm2, xmm6
      vmulss  xmm1, xmm3, xmm5
      vsubss  xmm7, xmm1, xmm0
      vmulss  xmm1, xmm2, xmm5
      vxorps  xmm2, xmm1, xmm10
      vmulss  xmm0, xmm3, xmm6
      vsubss  xmm14, xmm2, xmm0
      vmovss  [rsp+120h+var_EC], xmm4
    }
    if ( !v114 )
    {
      __asm
      {
        vxorps  xmm9, xmm9, xmm10
        vxorps  xmm12, xmm12, xmm10
        vxorps  xmm7, xmm7, xmm10
      }
    }
    __asm
    {
      vmovss  xmm6, [rsp+120h+var_DC]
      vmovss  xmm0, [rsp+120h+var_E8]
    }
  }
  result = 0;
  v138[0] = 0;
  if ( outClipped )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+8]
      vcomiss xmm3, xmm8
      vcomiss xmm11, xmm8
    }
    if ( compassType == COMPASS_TYPE_PARTIAL )
    {
      __asm
      {
        vmulss  xmm1, xmm6, xmm6
        vmovss  dword ptr [rsp+120h+outClippedXY+4], xmm0
        vmovaps xmm4, xmm0
        vmulss  xmm0, xmm15, xmm15
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vmovss  xmm1, [rsp+120h+var_EC]
        vmulss  xmm0, xmm11, xmm13
        vsubss  xmm6, xmm1, xmm14
        vsubss  xmm11, xmm12, xmm7
        vmulss  xmm15, xmm3, xmm13
        vcomiss xmm2, xmm15
        vmovaps xmm5, xmm9
        vmovss  [rsp+120h+var_DC], xmm0
        vmulss  xmm0, xmm6, xmm6
        vmovss  dword ptr [rsp+120h+outClippedXY], xmm5
        vmovss  [rsp+120h+var_E4], xmm2
        vmulss  xmm1, xmm11, xmm11
        vmovaps xmm12, xmm11
        vmovss  [rsp+120h+var_E4], xmm7
        vmovss  [rsp+120h+var_EC], xmm14
        vcomiss xmm2, [rsp+120h+var_DC]
        vcomiss xmm9, xmm15
        vmovss  xmm11, cs:__real@bf000000
        vmulss  xmm0, xmm11, dword ptr [rdi+8]
        vcomiss xmm9, xmm0
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmulss  xmm1, xmm0, xmm13
        vcomiss xmm4, xmm1
        vmulss  xmm0, xmm0, xmm11
        vcomiss xmm4, xmm0
      }
      v114 = this->m_currentMinimapStyle == MINIMAP_STYLE_CIRCLE;
      if ( this->m_currentMinimapStyle )
        goto LABEL_19;
      __asm { vmovss  xmm1, [rsp+120h+var_E0]; boundsRadius }
      v116 = CG_CalcCircularCompassPos(_RDI, *(double *)&_XMM1, &outClippedXY, v138);
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+120h+outClippedXY+4]
        vmovss  xmm5, dword ptr [rsp+120h+outClippedXY]
      }
      v114 = !v116;
      result = v138[0];
      if ( v114 )
      {
LABEL_19:
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+8]
          vmovss  xmm2, cs:__real@bf800000
          vmulss  xmm1, xmm0, xmm13
          vcomiss xmm5, xmm1
        }
        if ( v114 )
        {
          __asm
          {
            vmulss  xmm0, xmm0, xmm11
            vcomiss xmm5, xmm0
          }
        }
        else
        {
          __asm
          {
            vdivss  xmm0, xmm1, xmm5
            vmulss  xmm5, xmm5, xmm0
            vmulss  xmm4, xmm4, xmm0
          }
          result = 1;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vmulss  xmm1, xmm0, xmm13
          vcomiss xmm4, xmm1
        }
        if ( v114 )
        {
          __asm
          {
            vmulss  xmm0, xmm0, xmm11
            vcomiss xmm4, xmm0
          }
        }
        else
        {
          __asm
          {
            vdivss  xmm0, xmm1, xmm4
            vmulss  xmm5, xmm5, xmm0
            vmulss  xmm4, xmm4, xmm0
          }
          result = 1;
        }
      }
      __asm
      {
        vmovss  dword ptr [r12], xmm5
        vmovss  dword ptr [r12+4], xmm4
      }
    }
  }
  __asm
  {
    vmovaps xmm15, [rsp+120h+var_C8+8]
    vmovaps xmm14, [rsp+120h+var_B8+8]
    vmovaps xmm13, [rsp+120h+var_A8+8]
    vmovaps xmm12, [rsp+120h+var_98+8]
    vmovaps xmm11, [rsp+120h+var_88+8]
    vmovaps xmm10, [rsp+120h+var_78+8]
    vmovaps xmm8, [rsp+120h+var_58+8]
    vmovaps xmm7, [rsp+120h+var_48+8]
    vmovaps xmm6, [rsp+120h+var_38+8]
  }
  if ( out )
  {
    __asm
    {
      vmovss  xmm0, [rsp+120h+var_E8]
      vmovss  dword ptr [r15+4], xmm0
      vmovss  dword ptr [r15], xmm9
    }
  }
  __asm { vmovaps xmm9, [rsp+120h+var_68+8] }
  return result;
}

/*
==============
CgCompassSystem::WorldYawToCompass
==============
*/

void __fastcall CgCompassSystem::WorldYawToCompass(CgCompassSystem *this, CompassType compassType, const cg_t *const cgameGlob, double in, float *out)
{
  const dvar_t *v11; 

  _RDI = out;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 501, ASSERT_TYPE_ASSERT, "(out)", (const char *)&queryFormat, "out") )
    __debugbreak();
  __asm { vmovss  dword ptr [rdi], xmm6 }
  if ( compassType == COMPASS_TYPE_PARTIAL )
  {
    v11 = DVARBOOL_compassRotation;
    if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled && this->m_compassMirrorLeftRight )
    {
      __asm
      {
        vmulss  xmm4, xmm6, cs:__real@3b360b61
        vaddss  xmm1, xmm4, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm2, xmm0, xmm1
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm3, xmm1, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, cs:__real@c3b40000
        vmovss  dword ptr [rdi], xmm1
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
CgCompassSystem::getTacmapMapRectangle
==============
*/
rectDef_s *CgCompassSystem::getTacmapMapRectangle(CgCompassSystem *this, rectDef_s *result)
{
  int v2; 

  v2 = *(_DWORD *)&this->m_tacmapRectangle.horzAlign;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+0C8h]
    vmovups xmmword ptr [rdx], xmm0
  }
  *(_DWORD *)&result->horzAlign = v2;
  return result;
}

/*
==============
CgCompassSystem::setTacmapMapRectangle
==============
*/
void CgCompassSystem::setTacmapMapRectangle(CgCompassSystem *this, rectDef_s *rect)
{
  int v3; 

  __asm { vmovups xmm0, xmmword ptr [rdx] }
  v3 = *(_DWORD *)&rect->horzAlign;
  __asm { vmovups xmmword ptr [rcx+0C8h], xmm0 }
  *(_DWORD *)&this->m_tacmapRectangle.horzAlign = v3;
}

