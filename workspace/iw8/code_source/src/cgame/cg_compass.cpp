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
  const dvar_t *v9; 
  float value; 

  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 82, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 83, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  if ( compassType == COMPASS_TYPE_PARTIAL && CL_IsRenderingSplitScreen() )
  {
    v9 = DVARFLT_cg_hudSplitscreenCompassScale;
    if ( !DVARFLT_cg_hudSplitscreenCompassScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    value = v9->current.value;
    if ( x )
      *x = value * *x;
    if ( y )
      *y = value * *y;
    *w = value * *w;
    *h = value * *h;
  }
}

/*
==============
CG_BuildCompassDistanceString
==============
*/

void __fastcall CG_BuildCompassDistanceString(double distance, char *result, int resultSize)
{
  unsigned __int64 v4; 
  float v6; 
  const dvar_t *v7; 
  __int128 v8; 
  __int128 v9; 
  const char *v12; 
  ConversionArguments arguments; 
  char _Buffer[8]; 

  v4 = resultSize;
  v6 = *(float *)&distance;
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2450, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2451, ASSERT_TYPE_ASSERT, "(resultSize > 0)", (const char *)&queryFormat, "resultSize > 0") )
    __debugbreak();
  v7 = DVARFLT_compassObjectiveDetailDist;
  if ( !DVARFLT_compassObjectiveDetailDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveDetailDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( *(float *)&distance >= v7->current.value )
  {
    j_sprintf(_Buffer, "%i", (unsigned int)(int)*(float *)&distance);
  }
  else
  {
    v8 = *(_OWORD *)&distance;
    *(float *)&v8 = *(float *)&distance * 10.0;
    *(_OWORD *)&distance = v8;
    v9 = 0i64;
    *(float *)&v9 = (float)(int)(float)(v6 * 10.0);
    _XMM1 = v9;
    j_sprintf(_Buffer, "%.1f", (float)(*(float *)&v9 * 0.1));
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  *(_QWORD *)&arguments.argCount = 1i64;
  arguments.args[0] = _Buffer;
  *(_OWORD *)&arguments.args[1] = _XMM0;
  *(_OWORD *)&arguments.args[3] = _XMM1;
  *(_OWORD *)&arguments.args[5] = _XMM0;
  *(_OWORD *)&arguments.args[7] = _XMM1;
  v12 = UI_SafeTranslateString("HUD/OBJECTIVE_DISTANCE");
  UI_ReplaceConversions(v12, &arguments, result, v4);
}

/*
==============
CG_CalcCircularCompassPos
==============
*/
char CG_CalcCircularCompassPos(const rectDef_s *mapRect, const float boundsRadius, vec2_t *outClippedXY, bool *outClipped)
{
  float v11; 
  float v12; 
  float v13; 
  float v14; 

  if ( boundsRadius <= 0.0 )
    return 0;
  if ( !mapRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 111, ASSERT_TYPE_ASSERT, "(mapRect)", (const char *)&queryFormat, "mapRect") )
    __debugbreak();
  if ( !outClippedXY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 112, ASSERT_TYPE_ASSERT, "(outClippedXY)", (const char *)&queryFormat, "outClippedXY") )
    __debugbreak();
  if ( !outClipped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 113, ASSERT_TYPE_ASSERT, "(outClipped)", (const char *)&queryFormat, "outClipped") )
    __debugbreak();
  _XMM0 = LODWORD(mapRect->h);
  __asm { vminss  xmm1, xmm0, dword ptr [rdi+8] }
  v11 = (float)(*(float *)&_XMM1 * 0.5) * boundsRadius;
  v13 = fsqrt((float)(outClippedXY->v[1] * outClippedXY->v[1]) + (float)(outClippedXY->v[0] * outClippedXY->v[0]));
  v12 = v13;
  if ( v13 > v11 )
  {
    if ( v13 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 119, ASSERT_TYPE_ASSERT, "(xyLen > 0.0f)", (const char *)&queryFormat, "xyLen > 0.0f") )
      __debugbreak();
    v14 = (float)(v11 / v13) * outClippedXY->v[0];
    outClippedXY->v[1] = (float)(v11 / v12) * outClippedXY->v[1];
    outClippedXY->v[0] = v14;
    *outClipped = 1;
  }
  return 1;
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
  const dvar_t *v12; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const dvar_t *v22; 
  __int128 v24; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 529, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 530, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 531, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 532, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 533, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 534, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 535, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  if ( compassType )
  {
    v14 = rect->w;
    if ( v14 <= 0.0 || rect->h <= 0.0 )
    {
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14427E200, 951i64);
      v14 = rect->w;
    }
    if ( v14 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 566, ASSERT_TYPE_ASSERT, "(rect->w)", (const char *)&queryFormat, "rect->w") )
      __debugbreak();
    if ( rect->h == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 567, ASSERT_TYPE_ASSERT, "(rect->h)", (const char *)&queryFormat, "rect->h") )
      __debugbreak();
    if ( compassMapWorldSize->v[0] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 568, ASSERT_TYPE_ASSERT, "(compassMapWorldSize[0])", (const char *)&queryFormat, "compassMapWorldSize[0]") )
      __debugbreak();
    if ( compassMapWorldSize->v[1] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 569, ASSERT_TYPE_ASSERT, "(compassMapWorldSize[1])", (const char *)&queryFormat, "compassMapWorldSize[1]") )
      __debugbreak();
    v15 = compassMapWorldSize->v[0] / compassMapWorldSize->v[1];
    v16 = rect->h;
    v17 = rect->w;
    v18 = parentRect->y + rect->y;
    v19 = parentRect->x + rect->x;
    if ( v15 <= (float)(v17 / v16) )
    {
      v21 = (float)(v15 / (float)(v17 / v16)) * v17;
      *x = (float)((float)(v17 * 0.5) + v19) - (float)(v21 * 0.5);
      *y = v18;
      *w = v21;
      v20 = rect->h;
    }
    else
    {
      *x = v19;
      v20 = (float)((float)(v17 / v16) / v15) * v16;
      *y = (float)((float)(v16 * 0.5) + v18) - (float)(v20 * 0.5);
      *w = rect->w;
    }
    *h = v20;
    v22 = DVARFLT_cg_hudMapBorderWidth;
    if ( !DVARFLT_cg_hudMapBorderWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapBorderWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v24 = LODWORD(FLOAT_0_25);
    *(float *)&v24 = 0.25 * *w;
    _XMM0 = v24;
    __asm
    {
      vminss  xmm3, xmm0, dword ptr [rbx+28h]
      vminss  xmm4, xmm3, xmm2
    }
    *x = *(float *)&_XMM4 + *x;
    *y = *(float *)&_XMM4 + *y;
    *w = *w - (float)(*(float *)&_XMM4 * 2.0);
    *h = *h - (float)(*(float *)&_XMM4 * 2.0);
  }
  else
  {
    *x = rect->x;
    *y = rect->y;
    v12 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    *w = rect->w * v12->current.value;
    v13 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    *h = v13->current.value * rect->h;
    CG_ApplySplitScreenCompassScale(COMPASS_TYPE_PARTIAL, x, y, w, h);
    if ( *w <= 0.0 || *h <= 0.0 )
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
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const ScreenPlacement *ActivePlacement; 

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
  outTexMin->v[0] = (float)((float)(scaledRect->x - posScreen->v[0]) * (float)(1.0 / quadRad)) + 0.5;
  outTexMin->v[1] = (float)((float)(scaledRect->y - posScreen->v[1]) * (float)(1.0 / quadRad)) + 0.5;
  outTexMax->v[0] = (float)((float)((float)(scaledRect->w + scaledRect->x) - posScreen->v[0]) * (float)(1.0 / quadRad)) + 0.5;
  outTexMax->v[1] = (float)((float)((float)(scaledRect->y + scaledRect->h) - posScreen->v[1]) * (float)(1.0 / quadRad)) + 0.5;
  *x = scaledRect->x;
  *y = scaledRect->y;
  *w = scaledRect->w;
  *h = scaledRect->h;
  if ( outTexMin->v[0] < 0.0 )
  {
    v16 = (float)(outTexMin->v[0] * *w) / (float)(outTexMin->v[0] - outTexMax->v[0]);
    *x = v16 + *x;
    *w = *w - v16;
    outTexMin->v[0] = 0.0;
  }
  v17 = outTexMin->v[1];
  if ( v17 < 0.0 )
  {
    v18 = (float)(v17 * *h) / (float)(v17 - outTexMax->v[1]);
    *y = v18 + *y;
    *h = *h - v18;
    outTexMin->v[1] = 0.0;
  }
  if ( outTexMax->v[0] > 1.0 )
  {
    *w = (float)((float)(1.0 - outTexMin->v[0]) / (float)(outTexMax->v[0] - outTexMin->v[0])) * *w;
    outTexMax->v[0] = 1.0;
  }
  v19 = outTexMax->v[1];
  if ( v19 > 1.0 )
  {
    *h = (float)((float)(1.0 - outTexMin->v[1]) / (float)(v19 - outTexMin->v[1])) * *h;
    outTexMax->v[1] = 1.0;
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  ScrPlace_ApplyRect(ActivePlacement, x, y, w, h, horzAlign, vertAlign);
}

/*
==============
CG_CompassFullToWorld
==============
*/
void CG_CompassFullToWorld(const cg_t *cgameGlob, const vec2_t *compassPosition, vec2_t *outWorldPosition)
{
  float v6; 
  float v7; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 619, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v6 = cgameGlob->compassMapWorldSize.v[0] * compassPosition->v[0];
  v7 = cgameGlob->compassMapWorldSize.v[1] * compassPosition->v[1];
  outWorldPosition->v[0] = (float)((float)(v6 * cgameGlob->compassNorth.v[1]) + cgameGlob->compassMapUpperLeft.v[0]) - (float)(v7 * cgameGlob->compassNorth.v[0]);
  outWorldPosition->v[1] = (float)(cgameGlob->compassMapUpperLeft.v[1] - (float)(v6 * cgameGlob->compassNorth.v[0])) - (float)(v7 * cgameGlob->compassNorth.v[1]);
}

/*
==============
CG_CompassGetObjectivePingAlpha
==============
*/
void CG_CompassGetObjectivePingAlpha(const ObjectiveView *obj, const int currentTime, float *pingAlpha)
{
  const dvar_t *v6; 
  float integer; 
  float v8; 
  double v9; 

  if ( obj->pingTime )
  {
    v6 = DVARINT_bg_objectivePingDuration;
    if ( !DVARINT_bg_objectivePingDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_objectivePingDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    integer = (float)v6->current.integer;
    if ( integer <= 0.0 )
    {
      *(float *)&v9 = FLOAT_1_0;
    }
    else
    {
      v8 = (float)(currentTime - obj->pingTime);
      v9 = I_fclamp(1.0 - (float)(v8 / integer), 0.0, 1.0);
    }
    *pingAlpha = *(float *)&v9;
  }
  else
  {
    *pingAlpha = FLOAT_1_0;
  }
}

/*
==============
CG_CompassPartialToWorld
==============
*/
void CG_CompassPartialToWorld(const cg_t *cgameGlob, const float compassMapRange, const vec2_t *compassPosition, const vec2_t *yawVector, vec2_t *outWorldPosition, vec2_t *outWorldScale)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int64 v16; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 630, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v9 = compassMapRange * compassPosition->v[0];
  v10 = compassMapRange * compassPosition->v[1];
  v11 = (float)(compassMapRange * 0.5) * yawVector->v[1];
  v12 = (float)(compassMapRange * 0.5) * yawVector->v[0];
  v16 = *(_QWORD *)cgameGlob->predictedPlayerState.origin.v;
  v13 = (float)((float)((float)(*(float *)&v16 - v11) + v12) + (float)(v9 * yawVector->v[1])) - (float)(v10 * yawVector->v[0]);
  outWorldPosition->v[0] = v13;
  v14 = (float)((float)((float)(v12 + *((float *)&v16 + 1)) + v11) - (float)(v9 * yawVector->v[0])) - (float)(v10 * yawVector->v[1]);
  outWorldPosition->v[1] = v14;
  v15 = cgameGlob->compassMapUpperLeft.v[1] - v14;
  outWorldScale->v[0] = (float)(v13 - cgameGlob->compassMapUpperLeft.v[0]) / cgameGlob->compassMapWorldSize.v[0];
  outWorldScale->v[1] = v15 / cgameGlob->compassMapWorldSize.v[1];
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
  const dvar_t *v2; 
  float v3; 

  v2 = DCONST_DVARFLT_compassEnemyHeightDelta;
  v3 = worldPosition->v[2] - localPlayerPosition->v[2];
  if ( !DCONST_DVARFLT_compassEnemyHeightDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnemyHeightDelta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( COERCE_FLOAT(LODWORD(v3) & _xmm) < v2->current.value )
    return 0;
  else
    return (v3 <= 0.0) + 1;
}

/*
==============
CalcCompassClippedDistanceScale
==============
*/
double CalcCompassClippedDistanceScale(const vec2_t *v0, const vec2_t *v1, bool forceCompute)
{
  const dvar_t *v3; 
  double result; 

  v3 = DVARFLT_compassClippedScale;
  if ( !DVARFLT_compassClippedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClippedScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  *(float *)&result = CalcCompassClippedDistanceScaleInternal(v0, v1, forceCompute, v3->current.value);
  return result;
}

/*
==============
CalcCompassClippedDistanceScaleInternal
==============
*/
float CalcCompassClippedDistanceScaleInternal(const vec2_t *v0, const vec2_t *v1, bool forceCompute, float clippedScaleValue)
{
  const dvar_t *v6; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  double v11; 

  if ( !forceCompute )
  {
    v6 = DVARBOOL_compassEnableClippedScale;
    if ( !DVARBOOL_compassEnableClippedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnableClippedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( !v6->current.enabled )
      return FLOAT_1_0;
  }
  v8 = v1->v[1] - v0->v[1];
  v9 = DVARFLT_compassClippedScaleMaxDistance;
  v10 = fsqrt((float)(v8 * v8) + (float)((float)(v1->v[0] - v0->v[0]) * (float)(v1->v[0] - v0->v[0])));
  if ( !DVARFLT_compassClippedScaleMaxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClippedScaleMaxDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v11 = I_fclamp(1.0 - (float)(v10 / v9->current.value), 0.0, 1.0);
  return (float)((float)(1.0 - *(float *)&v11) * clippedScaleValue) + *(float *)&v11;
}

/*
==============
CalcCompassFriendlySize
==============
*/
void CalcCompassFriendlySize(CompassType compassType, float *w, float *h)
{
  const dvar_t *v6; 
  float v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  float value; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 

  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2471, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2472, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  if ( compassType )
  {
    v13 = DVARFLT_cg_hudMapFriendlyWidth;
    if ( !DVARFLT_cg_hudMapFriendlyWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapFriendlyWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    *w = v13->current.value;
    v14 = DVARFLT_cg_hudMapFriendlyHeight;
    if ( !DVARFLT_cg_hudMapFriendlyHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapFriendlyHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    value = v14->current.value;
  }
  else
  {
    v6 = DVARFLT_compassFriendlyWidth;
    if ( !DVARFLT_compassFriendlyWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassFriendlyWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.value;
    v8 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    *w = v7 * v8->current.value;
    v9 = DVARFLT_compassFriendlyHeight;
    if ( !DVARFLT_compassFriendlyHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassFriendlyHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = v9->current.value;
    v11 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    value = v10 * v11->current.value;
  }
  *h = value;
  if ( CL_IsRenderingSplitScreen() && compassType == COMPASS_TYPE_PARTIAL )
  {
    v15 = DVARFLT_cg_hudSplitscreenCompassElementScale;
    if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    *w = v15->current.value * *w;
    v16 = DVARFLT_cg_hudSplitscreenCompassElementScale;
    if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    *h = v16->current.value * *h;
    CG_ApplySplitScreenCompassScale(COMPASS_TYPE_PARTIAL, NULL, NULL, w, h);
  }
}

/*
==============
CgCompassSystem::CalcCompassPointerSize
==============
*/
void CgCompassSystem::CalcCompassPointerSize(CgCompassSystem *this, CompassType compassType, ObjectiveIconSize iconSize, float *w, float *h)
{
  const dvar_t *v8; 
  const dvar_t *v9; 
  float value; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  double v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  float v17; 
  const dvar_t *v18; 
  double v19; 
  float v20; 
  double v21; 
  const dvar_t *v22; 
  const char *v23; 
  double v24; 
  float v25; 
  double v26; 
  double v27; 
  float v28; 
  double v29; 
  double v30; 
  float v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  double Float_Internal_DebugName; 
  const dvar_t *v36; 
  const char *v37; 
  double v38; 
  double v39; 
  const dvar_t *v40; 
  const dvar_t *v41; 

  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2373, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2374, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  if ( compassType )
  {
    if ( iconSize == OBJ_ICON_SIZE_LARGE )
    {
      v32 = DVARFLT_compassObjectiveIconWidthLarge;
      if ( !DVARFLT_compassObjectiveIconWidthLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconWidthLarge") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      *w = v32->current.value;
      v33 = DVARFLT_compassObjectiveIconHeightLarge;
      if ( !DVARFLT_compassObjectiveIconHeightLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconHeightLarge") )
        __debugbreak();
    }
    else
    {
      if ( iconSize != OBJ_ICON_SIZE_MEDIUM )
      {
        if ( iconSize == OBJ_ICON_SIZE_SMALL )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconWidthSmall, "compassObjectiveIconWidthSmall");
          *w = *(float *)&Float_Internal_DebugName;
          v36 = DCONST_DVARFLT_compassObjectiveIconHeightSmall;
          v37 = "compassObjectiveIconHeightSmall";
        }
        else if ( iconSize == OBJ_ICON_SIZE_HEADICON )
        {
          v38 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveIconWidthHeadIcon, "compassObjectiveIconWidthHeadIcon");
          *w = *(float *)&v38;
          v36 = DVARFLT_compassObjectiveIconHeightHeadIcon;
          v37 = "compassObjectiveIconHeightHeadIcon";
        }
        else
        {
          v39 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveIconWidth, "compassObjectiveIconWidth");
          *w = *(float *)&v39;
          v36 = DVARFLT_compassObjectiveIconHeight;
          v37 = "compassObjectiveIconHeight";
        }
        v14 = Dvar_GetFloat_Internal_DebugName(v36, v37);
        goto LABEL_64;
      }
      v34 = DVARFLT_compassObjectiveIconWidthMedium;
      if ( !DVARFLT_compassObjectiveIconWidthMedium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconWidthMedium") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      *w = v34->current.value;
      v33 = DVARFLT_compassObjectiveIconHeightMedium;
      if ( !DVARFLT_compassObjectiveIconHeightMedium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconHeightMedium") )
        __debugbreak();
    }
    Dvar_CheckFrontendServerThread(v33);
    LODWORD(v14) = v33->current.integer;
    goto LABEL_64;
  }
  switch ( iconSize )
  {
    case OBJ_ICON_SIZE_LARGE:
      v8 = DVARFLT_compassObjectiveWidthLarge;
      if ( !DVARFLT_compassObjectiveWidthLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveWidthLarge") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      v9 = DVARFLT_compassSize;
      value = v8->current.value;
      if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      *w = value * v9->current.value;
      v11 = DVARFLT_compassObjectiveHeightLarge;
      if ( !DVARFLT_compassObjectiveHeightLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveHeightLarge") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      v12 = v11->current.value;
      v13 = DVARFLT_compassSize;
      if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
        __debugbreak();
LABEL_21:
      Dvar_CheckFrontendServerThread(v13);
      *(float *)&v14 = v12 * v13->current.value;
      goto LABEL_64;
    case OBJ_ICON_SIZE_MEDIUM:
      v15 = DVARFLT_compassObjectiveWidthMedium;
      if ( !DVARFLT_compassObjectiveWidthMedium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveWidthMedium") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v16 = DVARFLT_compassSize;
      v17 = v15->current.value;
      if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      *w = v17 * v16->current.value;
      v18 = DVARFLT_compassObjectiveHeightMedium;
      if ( !DVARFLT_compassObjectiveHeightMedium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveHeightMedium") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      v12 = v18->current.value;
      v13 = DVARFLT_compassSize;
      if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
        __debugbreak();
      goto LABEL_21;
    case OBJ_ICON_SIZE_SMALL:
      v19 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveWidthSmall, "compassObjectiveWidthSmall");
      v20 = *(float *)&v19;
      v21 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
      *w = v20 * *(float *)&v21;
      v22 = DCONST_DVARFLT_compassObjectiveHeightSmall;
      v23 = "compassObjectiveHeightSmall";
      break;
    case OBJ_ICON_SIZE_HEADICON:
      v24 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveWidthHeadIcon, "compassObjectiveWidthHeadIcon");
      v25 = *(float *)&v24;
      v26 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
      *w = v25 * *(float *)&v26;
      v22 = DVARFLT_compassObjectiveHeightHeadIcon;
      v23 = "compassObjectiveHeightHeadIcon";
      break;
    default:
      v27 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveWidth, "compassObjectiveWidth");
      v28 = *(float *)&v27;
      v29 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
      *w = v28 * *(float *)&v29;
      v22 = DVARFLT_compassObjectiveHeight;
      v23 = "compassObjectiveHeight";
      break;
  }
  v30 = Dvar_GetFloat_Internal_DebugName(v22, v23);
  v31 = *(float *)&v30;
  v14 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
  *(float *)&v14 = v31 * *(float *)&v14;
LABEL_64:
  *h = *(float *)&v14;
  if ( CL_IsRenderingSplitScreen() && compassType == COMPASS_TYPE_PARTIAL )
  {
    v40 = DVARFLT_cg_hudSplitscreenCompassElementScale;
    if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    *w = v40->current.value * *w;
    v41 = DVARFLT_cg_hudSplitscreenCompassElementScale;
    if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    *h = v41->current.value * *h;
    CG_ApplySplitScreenCompassScale(COMPASS_TYPE_PARTIAL, NULL, NULL, w, h);
  }
}

/*
==============
CalcCompassVehicleClippedDistanceScale
==============
*/
double CalcCompassVehicleClippedDistanceScale(const vec2_t *v0, const vec2_t *v1, bool forceCompute)
{
  const dvar_t *v6; 
  const char *v7; 
  double result; 

  if ( CG_GameInterface_PlayingGroundWar() )
  {
    v6 = DVARFLT_compassBigMapClippedVehicleScale;
    if ( DVARFLT_compassBigMapClippedVehicleScale )
      goto LABEL_8;
    v7 = "compassBigMapClippedVehicleScale";
  }
  else
  {
    v6 = DVARFLT_compassClippedScale;
    if ( DVARFLT_compassClippedScale )
      goto LABEL_8;
    v7 = "compassClippedScale";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v7) )
    __debugbreak();
LABEL_8:
  Dvar_CheckFrontendServerThread(v6);
  *(float *)&result = CalcCompassClippedDistanceScaleInternal(v0, v1, forceCompute, v6->current.value);
  return result;
}

/*
==============
CgCompassSystem::ComputeFriendlyCompassColor
==============
*/
void CgCompassSystem::ComputeFriendlyCompassColor(CgCompassSystem *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *color)
{
  *color = playerColor;
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
  CgGlobalsMP *v20; 
  CgHandler *Handler; 
  float v22; 
  float v23; 
  double JammingLevel; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  clientInfo_t *v30; 
  float v31; 
  double v32; 
  CompassType v33; 
  float v34; 
  float v35; 
  bool v36; 
  cg_t *v37; 
  float v38; 
  float v39; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  __int64 clientNum; 
  cg_t *v44; 
  characterInfo_t *CharacterInfo; 
  double v46; 
  float v47; 
  LocalClientNum_t v48; 
  const GfxImage *material; 
  double v50; 
  float v51; 
  float v52; 
  double Float_Internal_DebugName; 
  float v54; 
  double v55; 
  float v56; 
  float v57; 
  double v58; 
  float v59; 
  double v60; 
  float v61; 
  double v62; 
  float displayHeight; 
  float v64; 
  float v65; 
  float *x; 
  float *xa; 
  float *y; 
  float *ya; 
  float v71; 
  float v72; 
  float outHeight; 
  float outWidth; 
  bool v75; 
  CompassType compassTypea; 
  float s; 
  float c; 
  float v79; 
  float v80; 
  float v81; 
  CgStatic *v82; 
  rectDef_s mapRect; 
  rectDef_s *v84; 
  SecureVec3 out; 
  const vec4_t *v86; 
  GfxImage *v87; 
  const vec4_t *v88; 
  vec4_t v89; 
  GfxImage *v90[2]; 
  vec4_t v91; 
  vec2_t outClipped; 
  vec2_t outVector; 

  v90[1] = (GfxImage *)-2i64;
  v75 = cropPartialMap;
  compassTypea = compassType;
  v87 = (GfxImage *)objectiveIcon;
  v84 = (rectDef_s *)rect;
  v86 = objectiveColor;
  v88 = objectiveSecondaryColor;
  *(_QWORD *)v89.v = playerNumberColor;
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
  v82 = CgStatic::ms_cgameStaticsArray[m_localClientNum];
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
    v20 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  else
    v20 = NULL;
  Handler = CgHandler::getHandler(this->m_localClientNum);
  if ( BG_IsGameTypeQuick_BR(Handler) )
  {
    v22 = FLOAT_1_0;
    v23 = FLOAT_1_0;
  }
  else
  {
    JammingLevel = CG_Radar_GetJammingLevel((const LocalClientNum_t)this->m_localClientNum);
    v22 = FLOAT_1_0;
    v23 = 1.0 - *(float *)&JammingLevel;
  }
  v26 = v23 * color->v[3];
  v25 = v26;
  if ( v26 != 0.0 && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 0xCu) )
  {
    v27 = color->v[0];
    v81 = color->v[0];
    v28 = color->v[1];
    v80 = v28;
    v29 = color->v[2];
    v79 = v29;
    *(_QWORD *)v91.v = *(_QWORD *)secondaryColor->v;
    v91.v[2] = secondaryColor->v[2];
    if ( !v20 || !v20->m_isMLGSpectator )
    {
      this->GetPlayerCompassColor(this, &v91, LocalClientGlobals);
      if ( CG_GameInterface_PlayingArena() )
      {
        v30 = v82->GetClientInfo(v82, (unsigned int)LocalClientGlobals->predictedPlayerState.clientNum);
        if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2130, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
          __debugbreak();
        if ( (v30->game_extrainfo & 7) != 0 )
          LUI_CoD_GameMP_GetBrColorForClientNum(v30->clientNum, &v91);
      }
    }
    v31 = v22;
    v91.v[3] = v26;
    if ( (!v20 || !v20->m_isMLGSpectator) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, GameModeFlagValues::ms_mpValue, 0x1Au) )
    {
      v32 = ((double (__fastcall *)(CgCompassSystem *))this->GetGhostAlphaScale)(this);
      v31 = *(float *)&v32;
      v91.v[3] = *(float *)&v32 * v91.v[3];
    }
    v33 = compassTypea;
    CG_CompassCalcDimensions(compassTypea, LocalClientGlobals, parentRect, v84, &LocalClientGlobals->compassMapWorldSize, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    v34 = (float)(0.5 * mapRect.w) + mapRect.x;
    v35 = (float)(0.5 * mapRect.h) + mapRect.y;
    outClipped.v[0] = 0.0;
    outClipped.v[1] = 0.0;
    v36 = v75;
    CgCompassSystem::GetCompassYaw(this, compassTypea, v75, LocalClientGlobals, (float *)&compassTypea, &outVector);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    v37 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    CgCompassSystem::WorldPosToCompass(this, v33, v75, &mapRect, boundsRadius, &v37->compassMapWorldSize, &v37->compassMapUpperLeft, &v37->compassNorth, &outVector, (const vec2_t *)&out, (const vec2_t *)&out, NULL, &outClipped);
    v72 = outClipped.v[0];
    v71 = outClipped.v[1];
    CgCompassSystem::GetPlayerDrawSize(this, v33, largeMap, &outHeight, &outWidth);
    v72 = v34 + v72;
    v71 = v35 + v71;
    v38 = v71;
    CgCompassSystem::GetPlayerAngle(this, LocalClientGlobals, v20, v33, v36);
    v39 = v71;
    vertAlign = v84->vertAlign;
    horzAlign = v84->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, &v72, &v71, &outWidth, &outHeight, horzAlign, vertAlign);
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    v44 = CG_GetLocalClientGlobals((const LocalClientNum_t)v82->m_localClientNum);
    if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( v44->IsMP(v44) )
    {
      if ( (unsigned int)clientNum >= v44[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(ya) = v44[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(xa) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", xa, ya) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v44[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v44, clientNum);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2179, ASSERT_TYPE_ASSERT, "(localCharacterInfo)", (const char *)&queryFormat, "localCharacterInfo") )
      __debugbreak();
    if ( v20 && v20->m_isMLGSpectator )
    {
      if ( v20->clientNum != LocalClientGlobals->predictedPlayerState.clientNum )
      {
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v72, v71, 2.0 * outWidth, 2.0 * outHeight, 0.0, 0.0, v22, v22, v38, 1.0, 1.0, 1.0, v25, cgMedia.compass.codcaster_fov_cone, luaVM);
        if ( hasBomb )
        {
          v51 = v72;
          v52 = v71;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassPlayerObjectiveHolderOverallSize, "compassPlayerObjectiveHolderOverallSize");
          v54 = *(float *)&Float_Internal_DebugName;
          v55 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSpectatedPlayerObjectiveArrowRadius, "compassSpectatedPlayerObjectiveArrowRadius");
          v57 = *(float *)&v55 * v54;
          v56 = *(float *)&v55 * v54;
          v58 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassPlayerObjectiveHolderCicleSize, "compassPlayerObjectiveHolderCicleSize");
          v59 = *(float *)&v58;
          v60 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassPlayerObjectiveHolderArrowSize, "compassPlayerObjectiveHolderArrowSize");
          v61 = *(float *)&v60;
          if ( largeMap )
          {
            v62 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
            v56 = v57 * *(float *)&v62;
          }
          FastSinCos(v39 * 0.017453292, &s, &c);
          displayHeight = (float)vidConfig.displayHeight;
          v64 = (float)((float)((float)(v56 * s) * displayHeight) * 0.00092592591) + v51;
          v65 = (float)((float)((float)(v56 * c) * displayHeight) * -0.00092592591) + v52;
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v72, v71, (float)(v54 * outWidth) * v59, (float)(v54 * outHeight) * v59, 0.0, 0.0, v22, v22, 0.0, v86->v[0], v86->v[1], v86->v[2], v31, cgMedia.compass.minimap_codcaster_objective_circle_bg, luaVM);
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v72, v71, (float)(v54 * outWidth) * v59, (float)(v54 * outHeight) * v59, 0.0, 0.0, v22, v22, 0.0, 1.0, 1.0, 1.0, 1.0, cgMedia.compass.minimap_codcaster_objective_circle_outline, luaVM);
          if ( v87 )
            LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v72, v71, (float)(v54 * outWidth) * v59, (float)(v54 * outHeight) * v59, 0.0, 0.0, v22, v22, 0.0, v88->v[0], v88->v[1], v88->v[2], v22, v87, luaVM);
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v64, v65, (float)(v54 * outWidth) * v61, (float)(v54 * outHeight) * v61, 0.0, 0.0, v22, v22, v39, v81, v80, v79, v31, cgMedia.compass.minimap_codcaster_objective_arrow_bg, luaVM);
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v64, v65, (float)(v54 * outWidth) * v61, (float)(v54 * outHeight) * v61, 0.0, 0.0, v22, v22, v39, v91.v[0], v91.v[1], v91.v[2], v91.v[3], cgMedia.compass.minimap_codcaster_objective_arrow_outline, luaVM);
          v39 = 0.0;
        }
        else
        {
          if ( fadeTime > 0.0 )
          {
            v46 = CG_Radar_GetJammingLevel((const LocalClientNum_t)this->m_localClientNum);
            v47 = (float)((float)(v22 - *(float *)&v46) * color->v[3]) * fadeTime;
            v91.v[3] = v47;
            v48 = this->m_localClientNum;
            if ( largeMap )
              LUI_Render_DrawQuadRotated(v48, element, v72, v71, 0.80000001 * outWidth, 0.80000001 * outHeight, 0.0, 0.0, v22, v22, v39, v91.v[0], v91.v[1], v91.v[2], v47, cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_shooting, luaVM);
            else
              LUI_Render_DrawQuadRotated(v48, element, v72, v71, outWidth, outHeight, 0.0, 0.0, v22, v22, v39, v91.v[0], v91.v[1], v91.v[2], v47, cgMedia.compass.friendly_firing, luaVM);
          }
          v91.v[3] = v25;
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v72, v71, 0.80000001 * outWidth, 0.80000001 * outHeight, 0.0, 0.0, v22, v22, v39, v91.v[0], v91.v[1], v91.v[2], v25, cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border, luaVM);
          material = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_bg;
          v50 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGLargeMapInnerArrowOpacity, "compassMLGLargeMapInnerArrowOpacity");
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v72, v71, 0.80000001 * outWidth, 0.80000001 * outHeight, 0.0, 0.0, v22, v22, v39, v27, v28, v29, *(float *)&v50 * v31, material, luaVM);
        }
        v89 = **(vec4_t **)v89.v;
        CgCompassSystem::DrawPlayerNumber(this, LocalClientGlobals->predictedPlayerState.clientNum, v72, v71, v39, CharacterInfo->team, hasBomb, largeMap, &v89, v82, element, luaVM);
      }
    }
    else
    {
      this->GetPlayerCompassMaterial(this, LocalClientGlobals, (const GfxImage **)v90);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v72, v71, outWidth, outHeight, 0.0, 0.0, v22, v22, v38, v91.v[0], v91.v[1], v91.v[2], v91.v[3], v90[0], luaVM);
    }
  }
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystem::DrawPlayerMap
==============
*/
void CgCompassSystem::DrawPlayerMap(CgCompassSystem *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, Material *material, const vec4_t *color, GfxImage *mapMask, GfxImage *mapOverlay, GfxImage *mapRotOverlay, LUIElement *element, lua_State *luaVM)
{
  LUIElement *v14; 
  lua_State *v15; 
  cg_t *LocalClientGlobals; 
  float v17; 
  float *p_compassMapWorldSize; 
  CgGlobalsMP *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  double v27; 
  float v28; 
  CgCompassSystem *v29; 
  const dvar_t *v31; 
  double v32; 
  float v33; 
  double v34; 
  float v35; 
  float v36; 
  __int64 m_localClientNum; 
  LocalClientNum_t v38; 
  double v39; 
  float v40; 
  double v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  double v49; 
  float v50; 
  float v51; 
  int v52; 
  int v53; 
  const ScreenPlacement *v54; 
  const dvar_t *v55; 
  float v56; 
  float v57; 
  GfxImage *image; 
  const dvar_t *v59; 
  char enabled; 
  __int64 v61; 
  float v62; 
  float v63; 
  float v64; 
  float v73; 
  float v74; 
  float v75; 
  float v80; 
  float v81; 
  char v82; 
  char v83; 
  int v84; 
  MouseCursorPos v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  int v91; 
  __int64 v92; 
  float *p_y; 
  float v94; 
  float v95; 
  int v96; 
  int v97; 
  int v98; 
  const char *v99; 
  float v100; 
  float v101; 
  bool v102; 
  int v103; 
  float v104; 
  const GfxImage *v105; 
  const dvar_t *v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  double PlayerAngle; 
  int v116; 
  int v117; 
  const ScreenPlacement *v118; 
  CgCompassSystem *CompassSystem; 
  const dvar_t *v120; 
  float v125; 
  float v126; 
  float m_currentZoomLevel; 
  int ControllerFromClient; 
  unsigned int v129; 
  int v130; 
  bool IsPlayerUsingButtonLayoutBumperPing; 
  double v132; 
  float v133; 
  unsigned __int8 v134; 
  unsigned __int8 v135; 
  bool m_PreventZoom; 
  float v138; 
  float v142; 
  float v147; 
  __int128 left_low; 
  double Float_Internal_DebugName; 
  double v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 
  int v162; 
  float v163; 
  float v164; 
  float v165; 
  float v166; 
  float v167; 
  float v168; 
  double v169; 
  float v170; 
  double v171; 
  __int64 compassMapTiles; 
  float v181; 
  int v182; 
  int v183; 
  float v184; 
  float v185; 
  unsigned int v186; 
  CgGlobalsMP *v187; 
  float v188; 
  __int64 v189; 
  int v190; 
  int v191; 
  __int64 v192; 
  __int64 v193; 
  float v194; 
  float v195; 
  float v196; 
  float v197; 
  float v198; 
  const char *v199; 
  bool v200; 
  __int64 v201; 
  const GfxImage *tile; 
  __int64 v203; 
  int framesDelayed; 
  float v205; 
  lua_State *v206; 
  bool v207; 
  int i; 
  float v209; 
  float v210; 
  float v211; 
  float v212; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float v216; 
  CgWeaponMap *Instance; 
  bool v218; 
  bool v219; 
  double v220; 
  float v221; 
  float v222; 
  float v223; 
  float v224; 
  float v225; 
  float v226; 
  float v227; 
  float v228; 
  float v229; 
  float v230; 
  float v231; 
  float v232; 
  float fmt; 
  vec2_t *outVector; 
  float outVectora; 
  float *y; 
  float ya; 
  float w; 
  const GfxImage *v239; 
  char v241; 
  float outAngle; 
  float vMax; 
  float h; 
  float alphaOffset; 
  float x; 
  float uvAngle; 
  char v248; 
  float v249; 
  unsigned int IsGamepadEnabled; 
  lua_State *v251; 
  char v252; 
  GfxImage *v253; 
  SecureVec3 out; 
  const vec4_t *v255; 
  __int64 v256; 
  rectDef_s *parentRecta; 
  MouseCursorPos curPos; 
  CgGlobalsMP *cgameGlobMP; 
  vec2_t outWorldPosition; 
  MouseCursorPos v261; 
  vec4_t v262; 
  vec4_t v263; 
  int v264; 
  vec4_t v265; 
  __m256i v266; 
  int v267; 
  vec4_t v268[4]; 
  vec4_t verts[4]; 
  vec4_t quadVerts[4]; 

  v256 = -2i64;
  parentRecta = (rectDef_s *)parentRect;
  v255 = color;
  v261 = (MouseCursorPos)mapMask;
  *(_QWORD *)v263.v = mapOverlay;
  *(_QWORD *)v265.v = mapRotOverlay;
  v14 = element;
  outWorldPosition = (vec2_t)element;
  v15 = luaVM;
  v251 = luaVM;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->compassMapMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 691, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapMaterial)", (const char *)&queryFormat, "cgameGlob->compassMapMaterial") )
    __debugbreak();
  if ( !LocalClientGlobals->compassMapMaterial->textureCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 692, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapMaterial->textureCount > 0)", (const char *)&queryFormat, "cgameGlob->compassMapMaterial->textureCount > 0") )
    __debugbreak();
  v253 = LocalClientGlobals->compassMapMaterial->textureTable->image;
  v17 = color->v[3];
  if ( v17 == 0.0 )
    goto LABEL_220;
  *(_QWORD *)v262.v = *(_QWORD *)color->v;
  v262.v[2] = color->v[2];
  v262.v[3] = v17;
  p_compassMapWorldSize = (float *)&LocalClientGlobals->compassMapWorldSize;
  if ( LocalClientGlobals->compassMapWorldSize.v[0] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 703, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapWorldSize[0] != 0)", (const char *)&queryFormat, "cgameGlob->compassMapWorldSize[0] != 0") )
    __debugbreak();
  if ( LocalClientGlobals->compassMapWorldSize.v[1] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 704, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapWorldSize[1] != 0)", (const char *)&queryFormat, "cgameGlob->compassMapWorldSize[1] != 0") )
    __debugbreak();
  v19 = NULL;
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
    v19 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  cgameGlobMP = v19;
  if ( compassType )
  {
    if ( compassType != COMPASS_TYPE_TACMAP )
    {
      if ( compassType != COMPASS_TYPE_FULL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1378, ASSERT_TYPE_ASSERT, "(compassType == CompassType::COMPASS_TYPE_FULL)", (const char *)&queryFormat, "compassType == CompassType::COMPASS_TYPE_FULL") )
        __debugbreak();
      CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRecta, rect, &LocalClientGlobals->compassMapWorldSize, &v249, &vMax, &outAngle, &uvAngle);
      vertAlign = rect->vertAlign;
      horzAlign = rect->horzAlign;
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      ScrPlace_ApplyRect(ActivePlacement, &v249, &vMax, &outAngle, &uvAngle, horzAlign, vertAlign);
      LUI_CoD_GenerateQuadVerts(v249, vMax, v249 + outAngle, vMax + uvAngle, (vec4_t (*)[4])verts);
      if ( cgameGlobMP && cgameGlobMP->m_isMLGSpectator && this->MapShouldRotate(this) )
      {
        v216 = this->MapRotationFactor(this);
        LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.5, 0.5, 0.5, 0.5, v216, &v262, v253);
      }
      else
      {
        LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &v262, v253);
      }
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
      v218 = TopDownMapData_HasData() && LocalClientGlobals->compassMapTDMDMaterial;
      v219 = BG_IsLocationSelectorActive(Instance, &LocalClientGlobals->predictedPlayerState) && !CL_Keys_IsCatcherActive(this->m_localClientNum, 16);
      if ( v218 && v219 && (LocalClientGlobals->predictedPlayerState.locationSelectionInfo & 2) != 0 )
      {
        *(float *)&v261.x = 0.0;
        *(float *)&v261.y = FLOAT_1_0;
        v220 = vectoyaw((const vec2_t *)&v261);
        v221 = LocalClientGlobals->compassNorthYaw - *(float *)&v220;
        Vec2Rotate(&LocalClientGlobals->compassMapWorldSize, v221 * -0.017453292, (vec2_t *)&parentRecta);
        LODWORD(v222) = (unsigned int)parentRecta & _xmm;
        LODWORD(v223) = HIDWORD(parentRecta) & _xmm;
        if ( COERCE_FLOAT((unsigned int)parentRecta & _xmm) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1415, ASSERT_TYPE_ASSERT, "(mapSizeW[0] > 0.f)", (const char *)&queryFormat, "mapSizeW[0] > 0.f") )
          __debugbreak();
        if ( v223 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1416, ASSERT_TYPE_ASSERT, "(mapSizeW[1] > 0.f)", (const char *)&queryFormat, "mapSizeW[1] > 0.f") )
          __debugbreak();
        TopDownMapData_GetCorners((vec2_t *)&cgameGlobMP, (vec2_t *)&curPos);
        v224 = *(float *)&curPos.x - *(float *)&cgameGlobMP;
        v225 = *(float *)&curPos.y - *((float *)&cgameGlobMP + 1);
        if ( (float)(*(float *)&curPos.x - *(float *)&cgameGlobMP) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1423, ASSERT_TYPE_ASSERT, "(tdmdSizeW[0] > 0.f)", (const char *)&queryFormat, "tdmdSizeW[0] > 0.f") )
          __debugbreak();
        if ( v225 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1424, ASSERT_TYPE_ASSERT, "(tdmdSizeW[1] > 0.f)", (const char *)&queryFormat, "tdmdSizeW[1] > 0.f") )
          __debugbreak();
        v226 = (float)(v224 * outAngle) / v222;
        v227 = (float)(v225 * uvAngle) / v223;
        *(float *)&parentRecta = FLOAT_0_5;
        *((float *)&parentRecta + 1) = FLOAT_0_5;
        CG_CompassFullToWorld(LocalClientGlobals, (const vec2_t *)&parentRecta, &outWorldPosition);
        *(float *)&parentRecta = (float)(v226 / v224) * (float)((float)((float)(*(float *)&cgameGlobMP + *(float *)&curPos.x) * 0.5) - outWorldPosition.v[0]);
        HIDWORD(parentRecta) = COERCE_UNSIGNED_INT((float)((float)((float)(*((float *)&cgameGlobMP + 1) + *(float *)&curPos.y) * 0.5) - outWorldPosition.v[1]) * (float)(v227 / v225)) ^ _xmm;
        Vec2Rotate((const vec2_t *)&parentRecta, v221 * 0.017453292, &outWorldPosition);
        v228 = 0.5 * v262.v[0];
        v229 = v262.v[1];
        *(float *)&IsGamepadEnabled = v262.v[2] * 0.2;
        v230 = 0.5 * v262.v[3];
        v231 = (float)(v226 * 0.5) + (float)((float)((float)((float)(0.5 * outAngle) + v249) + outWorldPosition.v[0]) - (float)(v226 * 0.5));
        v232 = (float)(v227 * 0.5) + (float)((float)((float)((float)(0.5 * uvAngle) + vMax) + outWorldPosition.v[1]) - (float)(v227 * 0.5));
        if ( !LocalClientGlobals->compassMapTDMDMaterial->textureCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1462, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapTDMDMaterial->textureCount > 0)", (const char *)&queryFormat, "cgameGlob->compassMapTDMDMaterial->textureCount > 0") )
          __debugbreak();
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v231, v232, v226, v227, 0.0, 0.0, 1.0, 1.0, v221, v228, v229, *(float *)&IsGamepadEnabled, v230, LocalClientGlobals->compassMapTDMDMaterial->textureTable->image, luaVM);
      }
      goto LABEL_220;
    }
    IsGamepadEnabled = CL_Input_IsGamepadEnabled(this->m_localClientNum);
    CG_CompassCalcDimensions(COMPASS_TYPE_TACMAP, LocalClientGlobals, parentRecta, rect, &LocalClientGlobals->compassMapWorldSize, &h, &alphaOffset, &vMax, &x);
    v116 = rect->vertAlign;
    v117 = rect->horzAlign;
    v118 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(v118, &h, &alphaOffset, &vMax, &x, v117, v116);
    CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !CompassSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1096, ASSERT_TYPE_ASSERT, "(compassSystem)", (const char *)&queryFormat, "compassSystem") )
      __debugbreak();
    if ( CL_Keys_IsCatcherActive(this->m_localClientNum, 16) && this->m_PreventZoom )
      CompassSystem->m_PreventZoom = 0;
    v120 = DVARFLT_compassTacMapZoomMaxLevel;
    if ( !DVARFLT_compassTacMapZoomMaxLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacMapZoomMaxLevel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v120);
    _XMM0 = LocalClientGlobals->compassMapTiles;
    __asm { vpcmpgtq xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_0_60000002);
    __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
    outAngle = *(float *)&_XMM0;
    v126 = (float)LocalClientGlobals->frametime * 0.001;
    v125 = v126;
    m_currentZoomLevel = this->m_currentZoomLevel;
    ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
    IN_GetCursorPos(ControllerFromClient, &curPos);
    v129 = IsGamepadEnabled;
    if ( *(float *)&IsGamepadEnabled == 0.0 || Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_CP_TacOpsMap_interactions, "killswitch_CP_TacOpsMap_interactions") && (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    {
      left_low = LODWORD(element->left);
      *(float *)&left_low = element->left - (float)((float)((float)(element->right - element->left) * 0.5) * element->currentAnimationState.scale);
      _XMM8 = left_low;
      *(float *)&_XMM9 = FLOAT_1_0;
      __asm
      {
        vinsertps xmm8, xmm8, xmm5, 10h
        vinsertps xmm8, xmm8, xmm0, 20h ; ' '
        vinsertps xmm8, xmm8, xmm2, 30h ; '0'
      }
      *(_OWORD *)&CompassSystem->m_tacmapRectangle.x = _XMM8;
      *(_DWORD *)&CompassSystem->m_tacmapRectangle.horzAlign = v264;
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassTacMapMouseZoomSpeedFactor, "compassTacMapMouseZoomSpeedFactor");
      *(float *)&left_low = (float)((float)(v125 * element->currentAnimationState.userData) * *(float *)&Float_Internal_DebugName) + m_currentZoomLevel;
      v154 = I_fclamp(*(float *)&left_low, outAngle, 1.0);
      v147 = *(float *)&left_low;
      if ( element->currentAnimationState.userData != 0.0 )
      {
        v155 = CompassSystem->m_tacmapRectangle.h;
        v156 = _mm_cvtepi32_ps((__m128i)(unsigned int)curPos.y).m128_f32[0];
        v157 = LocalClientGlobals->locationSelectorCursor.v[1];
        CompassSystem->m_tacmapMapCenter.v[0] = (float)((float)((float)((float)((float)(CompassSystem->m_tacmapRectangle.w * 0.5) + CompassSystem->m_tacmapRectangle.x) - _mm_cvtepi32_ps((__m128i)(unsigned int)curPos.x).m128_f32[0]) * *(float *)&v154) / CompassSystem->m_tacmapRectangle.w) + LocalClientGlobals->locationSelectorCursor.v[0];
        CompassSystem->m_tacmapMapCenter.v[1] = (float)((float)((float)((float)((float)(v155 * 0.5) + CompassSystem->m_tacmapRectangle.y) - v156) * *(float *)&v154) / v155) + v157;
      }
    }
    else
    {
      v130 = CL_Mgr_GetControllerFromClient(LocalClientGlobals->localClientNum);
      IsPlayerUsingButtonLayoutBumperPing = CG_IsPlayerUsingButtonLayoutBumperPing(v130);
      v132 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassTacMapZoomSpeedFactor, "compassTacMapZoomSpeedFactor");
      v133 = *(float *)&v132;
      v134 = 5;
      if ( IsPlayerUsingButtonLayoutBumperPing )
        v134 = 2;
      v135 = 6;
      if ( IsPlayerUsingButtonLayoutBumperPing )
        v135 = 4;
      m_PreventZoom = this->m_PreventZoom;
      _XMM9 = LODWORD(FLOAT_1_0);
      if ( m_PreventZoom )
      {
        v138 = 0.0;
      }
      else
      {
        _XMM0 = (unsigned int)CL_Keys_IsKeyDown(this->m_localClientNum, v134);
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm9, xmm10, xmm2
        }
        m_PreventZoom = this->m_PreventZoom;
        v138 = *(float *)&_XMM0;
        IsGamepadEnabled = _XMM0;
      }
      if ( m_PreventZoom )
      {
        v142 = 0.0;
      }
      else
      {
        _XMM0 = (unsigned int)CL_Keys_IsKeyDown(this->m_localClientNum, v135);
        __asm { vpcmpeqd xmm3, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_N1_0);
        __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
        v142 = *(float *)&_XMM0;
        IsGamepadEnabled = _XMM0;
      }
      I_fclamp((float)((float)((float)(v142 + v138) * v126) * v133) + m_currentZoomLevel, outAngle, 1.0);
      v147 = (float)((float)((float)(v142 + v138) * v126) * v133) + m_currentZoomLevel;
    }
    CompassSystem->m_currentZoomLevel = v147;
    element->currentAnimationState.userDataInt = 0;
    v158 = 0.5 * this->m_currentZoomLevel;
    v159 = *(float *)&_XMM9 / this->m_currentZoomLevel;
    if ( v129 )
    {
      v160 = LocalClientGlobals->locationSelectorCursor.v[0];
      v161 = LocalClientGlobals->locationSelectorCursor.v[1];
    }
    else if ( CL_Keys_IsKeyDown(this->m_localClientNum, 187) && CompassSystem->m_currentCompassType == COMPASS_TYPE_TACMAP && (v162 = CL_Mgr_GetControllerFromClient(CompassSystem->m_localClientNum), IN_GetCursorPos(v162, &v261), v163 = CompassSystem->m_tacmapRectangle.x, v163 < (float)v261.x) && (v164 = CompassSystem->m_tacmapRectangle.w, (float)(v163 + v164) > (float)v261.x) && (v165 = CompassSystem->m_tacmapRectangle.y, v165 < (float)v261.y) && (v166 = CompassSystem->m_tacmapRectangle.h, (float)(v165 + v166) > (float)v261.y) )
    {
      v167 = (float)curPos.x;
      v168 = (float)curPos.y;
      if ( CompassSystem->m_tacmapIsFirstDragInput )
      {
        CompassSystem->m_initialDragPosition.v[0] = v167;
        CompassSystem->m_initialDragPosition.v[1] = v168;
        CompassSystem->m_tacmapLastCursorPosition.v[0] = v167;
        CompassSystem->m_tacmapLastCursorPosition.v[1] = v168;
        CompassSystem->m_tacmapIsFirstDragInput = 0;
      }
      v160 = (float)((float)((float)(CompassSystem->m_tacmapLastCursorPosition.v[0] - v167) * CompassSystem->m_currentZoomLevel) / v164) + CompassSystem->m_tacmapMapCenter.v[0];
      v161 = (float)((float)((float)(CompassSystem->m_tacmapLastCursorPosition.v[1] - v168) * CompassSystem->m_currentZoomLevel) / v166) + CompassSystem->m_tacmapMapCenter.v[1];
      CompassSystem->m_tacmapLastCursorPosition.v[0] = v167;
      CompassSystem->m_tacmapLastCursorPosition.v[1] = v168;
      if ( !CompassSystem->m_exceededMinDragDistance )
        CompassSystem->m_exceededMinDragDistance = (float)((float)((float)(v168 - CompassSystem->m_initialDragPosition.v[1]) * (float)(v168 - CompassSystem->m_initialDragPosition.v[1])) + (float)((float)(v167 - CompassSystem->m_initialDragPosition.v[0]) * (float)(v167 - CompassSystem->m_initialDragPosition.v[0]))) > 25.0;
    }
    else
    {
      if ( !CompassSystem->m_tacmapIsFirstDragInput )
        *(_WORD *)&CompassSystem->m_exceededMinDragDistance = 256;
      v160 = CompassSystem->m_tacmapMapCenter.v[0];
      v161 = CompassSystem->m_tacmapMapCenter.v[1];
    }
    v169 = I_fclamp(v160, v158, *(float *)&_XMM9 - v158);
    v170 = *(float *)&v169;
    v171 = I_fclamp(v161, v158, *(float *)&_XMM9 - v158);
    v249 = *(float *)&v171;
    CompassSystem->m_tacmapMapCenter.v[0] = v170;
    CompassSystem->m_tacmapMapCenter.v[1] = *(float *)&v171;
    if ( this->m_currentZoomLevel >= 0.5 )
    {
      LUI_CoD_GenerateQuadVerts(h, alphaOffset, h + vMax, alphaOffset + x, (vec4_t (*)[4])v268);
      v206 = v251;
      LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)this->m_localClientNum, element, v251, (const vec4_t (*)[4])v268, v170, v161, v158, v158, 0.0, &v262, v253);
LABEL_176:
      v265.v[0] = colorWhite.v[0];
      v265.v[1] = colorWhite.v[1];
      v265.v[2] = colorWhite.v[2];
      v265.v[3] = FLOAT_0_40000001;
      for ( i = 1; i <= 9; ++i )
      {
        v209 = _mm_cvtepi32_ps((__m128i)(unsigned int)i).m128_f32[0];
        v210 = (float)(v209 * 0.1) - v249;
        v211 = (float)(v159 * (float)((float)(v209 * 0.1) - v170)) + 0.5;
        v212 = (float)(v159 * v210) + 0.5;
        if ( v211 >= 0.0 && v211 <= *(float *)&_XMM9 )
        {
          LUI_CoD_GenerateQuadVerts((float)(v211 * vMax) + h, alphaOffset, (float)((float)(v211 * vMax) + h) + 2.0, alphaOffset + x, (vec4_t (*)[4])v268);
          LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, v14, v206, (const vec4_t (*)[4])v268, 0.0, 0.0, *(float *)&_XMM9, *(float *)&_XMM9, &v265, rgp.blackImage);
        }
        if ( (float)(v159 * v210) >= -0.5 && v212 <= *(float *)&_XMM9 )
        {
          LUI_CoD_GenerateQuadVerts(h, (float)(v212 * x) + alphaOffset, h + vMax, (float)((float)(v212 * x) + alphaOffset) + 2.0, (vec4_t (*)[4])v268);
          LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, v14, v206, (const vec4_t (*)[4])v268, 0.0, 0.0, *(float *)&_XMM9, *(float *)&_XMM9, &v265, rgp.blackImage);
        }
      }
      goto LABEL_220;
    }
    _XMM1 = LODWORD(element->bottom);
    __asm { vmaxss  xmm4, xmm1, xmm10 }
    _XMM2 = LODWORD(element->right);
    __asm { vmaxss  xmm3, xmm2, xmm10; right }
    _XMM0 = LODWORD(element->top);
    __asm { vmaxss  xmm2, xmm0, xmm10; top }
    _XMM1 = LODWORD(element->left);
    __asm { vmaxss  xmm1, xmm1, xmm10; left }
    LUI_Render_PushStencilRectangle((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&_XMM4);
    compassMapTiles = LocalClientGlobals->compassMapTiles;
    v181 = (float)compassMapTiles;
    v182 = (int)(float)(v170 * v181);
    v183 = v182 + compassMapTiles * (int)(float)(v181 * v161);
    v184 = (float)((float)(*(float *)&_XMM9 / v181) * vMax) * v159;
    v185 = (float)((float)(*(float *)&_XMM9 / v181) * x) * v159;
    v241 = 0;
    if ( v183 != CompassSystem->m_tacmapCenterTile )
    {
      CompassSystem->m_tacmapCenterTile = v183;
      v241 = 1;
    }
    v186 = v182 - 4;
    IsGamepadEnabled = v182 - 4;
    v187 = NULL;
    cgameGlobMP = NULL;
    LODWORD(v188) = (int)(float)(v181 * v161) - 3;
    outAngle = v188;
    v261 = (MouseCursorPos)9i64;
LABEL_157:
    v189 = 0i64;
    v190 = LODWORD(v188) - 1;
    LODWORD(uvAngle) = LODWORD(v188) - 1;
    v191 = v186;
    while ( 1 )
    {
      if ( v191 < 0 || (v192 = LocalClientGlobals->compassMapTiles, v191 >= (int)v192) || v190 < 0 || v190 >= (int)v192 )
      {
        v206 = v251;
        goto LABEL_172;
      }
      v193 = (__int64)v187 + v189;
      v194 = _mm_cvtepi32_ps((__m128i)(unsigned int)v191).m128_f32[0];
      v195 = (float)v192;
      v196 = _mm_cvtepi32_ps((__m128i)(unsigned int)v190).m128_f32[0];
      v197 = (float)((float)((float)(v159 * (float)((float)((float)(*(float *)&_XMM9 / v195) * v196) - v161)) + 0.5) * vMax) + alphaOffset;
      v198 = (float)((float)((float)(v159 * (float)((float)((float)(*(float *)&_XMM9 / v195) * v194) - v170)) + 0.5) * vMax) + h;
      LUI_CoD_GenerateQuadVerts(v198, v197, v184 + v198, v185 + v197, (vec4_t (*)[4])v268);
      if ( v241 )
      {
        v199 = j_va("%s_%02d_%02d", LocalClientGlobals->compassMapMaterial->name, v188, (unsigned int)(v191 + 1));
        CompassSystem->m_tacpmapTileImages[v193].tile = Image_Register(v199, IMAGE_TRACK_HUD);
      }
      v200 = 0;
      v201 = 2 * (v193 + 14);
      tile = CompassSystem->m_tacpmapTileImages[v193].tile;
      if ( tile && (v200 = Stream_TouchImageAndCheck(tile)) )
      {
        v203 = v193;
        framesDelayed = CompassSystem->m_tacpmapTileImages[v203].framesDelayed;
        if ( framesDelayed >= 5 )
          goto LABEL_170;
        CompassSystem->m_tacpmapTileImages[v203].framesDelayed = framesDelayed + 1;
      }
      else
      {
        CompassSystem->m_tacpmapTileImages[v193].framesDelayed = 0;
        if ( v200 )
        {
LABEL_170:
          v206 = v251;
          LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, *(LUIElement **)&outWorldPosition, v251, (const vec4_t (*)[4])v268, 0.0, 0.0, *(float *)&_XMM9, *(float *)&_XMM9, &v262, *((const GfxImage **)&CompassSystem->__vftable + v201));
          v190 = LODWORD(uvAngle);
          v188 = outAngle;
          v187 = cgameGlobMP;
          goto LABEL_172;
        }
      }
      v205 = (float)LocalClientGlobals->compassMapTiles;
      v188 = outAngle;
      v206 = v251;
      LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, *(LUIElement **)&outWorldPosition, v251, (const vec4_t (*)[4])v268, (float)(*(float *)&_XMM9 / v205) * v194, (float)(*(float *)&_XMM9 / v205) * v196, (float)(v191 + 1) * (float)(*(float *)&_XMM9 / v205), (float)SLODWORD(outAngle) * (float)(*(float *)&_XMM9 / v205), &v262, v253);
      v190 = LODWORD(uvAngle);
      v187 = cgameGlobMP;
LABEL_172:
      ++v191;
      if ( ++v189 >= 9 )
      {
        ++LODWORD(v188);
        outAngle = v188;
        v187 = (CgGlobalsMP *)((char *)v187 + 9);
        cgameGlobMP = v187;
        v207 = (*(_QWORD *)&v261)-- == 1i64;
        v186 = IsGamepadEnabled;
        if ( v207 )
        {
          LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
          v14 = (LUIElement *)outWorldPosition;
          goto LABEL_176;
        }
        goto LABEL_157;
      }
    }
  }
  v20 = LocalClientGlobals->compassNorth.v[1];
  LODWORD(v21) = LODWORD(LocalClientGlobals->compassNorth.v[0]) ^ _xmm;
  CG_CalcPlayerPos(&out, this->m_localClientNum);
  v22 = out.x - LocalClientGlobals->compassMapUpperLeft.v[0];
  v23 = out.y - LocalClientGlobals->compassMapUpperLeft.v[1];
  v24 = (float)(v23 * v21) + (float)(v22 * v20);
  uvAngle = (float)(v22 * v21) - (float)(v23 * v20);
  v25 = v24 / *p_compassMapWorldSize;
  v26 = uvAngle / LocalClientGlobals->compassMapWorldSize.v[1];
  v27 = ((double (__fastcall *)(CgCompassSystem *))this->GetRange)(this);
  v28 = *(float *)&v27;
  v29 = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
  curPos = (MouseCursorPos)v29;
  _XMM11 = LODWORD(FLOAT_1_0);
  if ( (v29->m_currentDisplayType & 2) != 0 )
  {
    v31 = DVARBOOL_compassZoomEnabled;
    if ( !DVARBOOL_compassZoomEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassZoomEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( v31->current.enabled )
    {
      v32 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassZoomMaxLevel, "compassZoomMaxLevel");
      v33 = *(float *)&v32;
      v34 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassZoomSpeedFactor, "compassZoomSpeedFactor");
      v35 = *(float *)&v34;
      v36 = this->m_currentZoomLevel;
      m_localClientNum = this->m_localClientNum;
      if ( (unsigned int)m_localClientNum >= 2 )
      {
        LODWORD(y) = 2;
        LODWORD(outVector) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outVector, y) )
          __debugbreak();
        v15 = v251;
      }
      v38 = this->m_localClientNum;
      if ( clientUIActives[m_localClientNum].lastInputType )
      {
        _XMM0 = (unsigned int)CL_Keys_IsKeyDown(v38, 187);
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm11, xmm10, xmm2
        }
        v40 = *(float *)&_XMM0;
        IsGamepadEnabled = _XMM0;
      }
      else
      {
        v39 = CL_GamepadPhysicalAxisValue(v38, GPAD_PHYSAXIS_LTRIGGER);
        v40 = *(float *)&v39;
      }
      v44 = I_fclamp((float)((float)((float)((float)((float)(v40 * (float)(1.0 - v33)) + v33) - v36) / (float)(1.0 - v33)) * v35) + v36, v33, 1.0);
      *(float *)(*(_QWORD *)&curPos + 32i64) = *(float *)&v44;
      goto LABEL_32;
    }
    v29 = (CgCompassSystem *)curPos;
  }
  v29->m_currentZoomLevel = 1.0;
LABEL_32:
  v45 = (float)(v28 * this->m_currentZoomLevel) * 0.5;
  v46 = v45 / LocalClientGlobals->compassMapWorldSize.v[1];
  v47 = (float)((float)(rect->w / rect->h) * v45) / *p_compassMapWorldSize;
  CgCompassSystem::GetCompassYaw(this, COMPASS_TYPE_PARTIAL, cropPartialMap, LocalClientGlobals, &outAngle, &outWorldPosition);
  LODWORD(v48) = COERCE_UNSIGNED_INT(outAngle - LocalClientGlobals->compassNorthYaw) ^ _xmm;
  outAngle = v48;
  if ( cropPartialMap )
  {
    ((void (__fastcall *)(CgCompassSystem *, vec2_t *))this->MapOffset)(this, &outWorldPosition);
    v25 = outWorldPosition.v[0];
    v26 = outWorldPosition.v[1];
    v49 = ((double (__fastcall *)(CgCompassSystem *))this->GetCroppedMapZoom)(this);
    v50 = LocalClientGlobals->compassMapWorldSize.v[1];
    v51 = (float)(*(float *)&v49 * v50) * 0.5;
    v46 = v51 / v50;
    v47 = (float)((float)(rect->w / rect->h) * v51) / *p_compassMapWorldSize;
    v48 = 0.0;
    outAngle = 0.0;
  }
  if ( cgameGlobMP && cgameGlobMP->m_isMLGSpectator && this->MapShouldRotate(this) )
    outAngle = v48 + this->MapRotationFactor(this);
  CG_CompassCalcDimensions(COMPASS_TYPE_PARTIAL, LocalClientGlobals, parentRecta, rect, &LocalClientGlobals->compassMapWorldSize, &x, &vMax, &alphaOffset, &h);
  v52 = rect->vertAlign;
  v53 = rect->horzAlign;
  v54 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
  ScrPlace_ApplyRect(v54, &x, &vMax, &alphaOffset, &h, v53, v52);
  if ( !this->m_compassMirrorLeftRight )
    goto LABEL_44;
  v55 = DVARBOOL_compassRotation;
  if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v55);
  if ( v55->current.enabled )
  {
    v56 = x;
    v57 = x + alphaOffset;
  }
  else
  {
LABEL_44:
    v57 = x;
    v56 = x + alphaOffset;
  }
  LUI_CoD_GenerateQuadVerts(v57, vMax, v56, vMax + h, (vec4_t (*)[4])quadVerts);
  image = (GfxImage *)v261;
  if ( v261 )
  {
    LUI_Render_GetViewportSize(this->m_localClientNum, (vec2_t *)&parentRecta);
    LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, (float)(0.5 * alphaOffset) + x, (float)(0.5 * h) + vMax, alphaOffset, h, 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, (const vec2_t *)&parentRecta, image);
  }
  v59 = DVARBOOL_compassRenderAdditionalHighResTiles;
  if ( !DVARBOOL_compassRenderAdditionalHighResTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRenderAdditionalHighResTiles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v59);
  enabled = v59->current.enabled;
  v252 = enabled;
  v61 = LocalClientGlobals->compassMapTiles;
  v62 = LocalClientGlobals->compassMapWorldSize.v[1];
  v63 = (float)v61;
  v64 = v62 / (float)((float)(v28 * this->m_currentZoomLevel) * v63);
  if ( (unsigned int)v61 <= 1 || (float)(v62 / (float)((float)(v28 * this->m_currentZoomLevel) * v63)) < 1.0 && !enabled )
  {
    v88 = outAngle;
    LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)this->m_localClientNum, element, v15, (const vec4_t (*)[4])quadVerts, v25, v26, v47, v46, outAngle, &v262, v253);
    goto LABEL_95;
  }
  if ( this->m_currentMinimapStyle == MINIMAP_STYLE_SQUARE )
  {
    _XMM0 = LODWORD(element->bottom);
    __asm { vmaxss  xmm4, xmm0, xmm10 }
    _XMM1 = LODWORD(element->right);
    __asm { vmaxss  xmm3, xmm1, xmm10; right }
    _XMM0 = LODWORD(element->top);
    __asm { vmaxss  xmm2, xmm0, xmm10; top }
    _XMM1 = LODWORD(element->left);
    __asm { vmaxss  xmm1, xmm1, xmm10; left }
    LUI_Render_PushStencilRectangle((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&_XMM4);
    LODWORD(v61) = LocalClientGlobals->compassMapTiles;
    v62 = LocalClientGlobals->compassMapWorldSize.v[1];
  }
  v73 = (float)(unsigned int)v61;
  v74 = (float)(v24 / *p_compassMapWorldSize) * v73;
  v75 = (float)(uvAngle / v62) * v73;
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm4, 1 }
  LODWORD(v249) = (int)*(float *)&_XMM1;
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm3, 1 }
  LODWORD(uvAngle) = (int)*(float *)&_XMM0;
  v80 = v75 - (float)(int)*(float *)&_XMM0;
  v266 = _ymm_ffffffff00000001ffffffff000000000000000000000001ffffffff00000000;
  v267 = 1;
  *(__m256i *)v268[0].v = _ymm;
  v268[2].v[0] = NAN;
  v81 = v74 - (float)(int)*(float *)&_XMM1;
  if ( !enabled )
  {
    memset(&v266, 0, sizeof(v266));
    v267 = 0;
    memset(v268, 0, 36);
  }
  if ( v81 >= 0.5 )
  {
    v82 = 8;
    if ( !enabled )
    {
      v266.m256i_i32[3] = 1;
      v266.m256i_i32[1] = 1;
    }
  }
  else
  {
    v82 = 4;
    if ( !enabled )
    {
      v266.m256i_i32[3] = -1;
      v266.m256i_i32[1] = -1;
    }
  }
  if ( v80 >= 0.5 )
  {
    v83 = v82 | 2;
    if ( !enabled )
      *(_QWORD *)&v268[0].xyz.z = 0x100000001i64;
  }
  else
  {
    v83 = v82 | 1;
    if ( !enabled )
      *(_QWORD *)&v268[0].xyz.z = -1i64;
  }
  v248 = 0;
  v84 = (int)*(float *)&_XMM1 + (int)*(float *)&_XMM0 * v61;
  if ( v84 != this->m_minimapCenterTile || v83 != this->m_minimapTileFlags )
  {
    v85 = curPos;
    *(_DWORD *)(*(_QWORD *)&curPos + 192i64) = v84;
    *(_BYTE *)(*(_QWORD *)&v85 + 196i64) = v83;
    v248 = 1;
  }
  v86 = (float)(0.5 * alphaOffset) + x;
  v87 = (float)(0.5 * h) + vMax;
  LUI_PushScaleMatrix(v64, v64, v86, v87, v15);
  v88 = outAngle;
  LUI_PushZRotationMatrix(COERCE_FLOAT(LODWORD(outAngle) ^ _xmm), v86, v87, v15);
  v89 = v81 * alphaOffset;
  v90 = v80 * h;
  v91 = 0;
  v92 = *(_QWORD *)&curPos + 48i64;
  p_y = NULL;
  parentRecta = NULL;
  v94 = v249;
  v95 = uvAngle;
  do
  {
    outAngle = *(float *)((char *)v266.m256i_i32 + (_QWORD)p_y);
    v96 = LODWORD(outAngle) + LODWORD(v94);
    IsGamepadEnabled = *(unsigned int *)((char *)v268[0].v + (_QWORD)p_y);
    v97 = IsGamepadEnabled + LODWORD(v95);
    if ( LODWORD(outAngle) + LODWORD(v94) < 0 || (v98 = LocalClientGlobals->compassMapTiles, v96 >= v98) || v97 < 0 || v97 >= v98 || !v252 && v91 >= 4 )
    {
      v15 = v251;
      goto LABEL_91;
    }
    if ( v248 )
    {
      v99 = j_va("%s_%02d_%02d", LocalClientGlobals->compassMapMaterial->name, (unsigned int)(v97 + 1), (unsigned int)(v96 + 1));
      *(_QWORD *)v92 = Image_Register(v99, IMAGE_TRACK_HUD);
    }
    v100 = (float)((float)(_mm_cvtepi32_ps((__m128i)LODWORD(outAngle)).m128_f32[0] * alphaOffset) + v86) - v89;
    v101 = (float)((float)(_mm_cvtepi32_ps((__m128i)IsGamepadEnabled).m128_f32[0] * h) + v87) - v90;
    LUI_CoD_GenerateQuadVerts(v100, v101, v100 + alphaOffset, v101 + h, (vec4_t (*)[4])verts);
    v102 = 0;
    if ( *(_QWORD *)v92 && (v102 = Stream_TouchImageAndCheck(*(const GfxImage **)v92)) )
    {
      v103 = *(_DWORD *)(v92 + 8);
      if ( v103 >= 5 )
        goto LABEL_86;
      *(_DWORD *)(v92 + 8) = v103 + 1;
    }
    else
    {
      *(_DWORD *)(v92 + 8) = 0;
      if ( v102 )
      {
LABEL_86:
        v239 = *(const GfxImage **)v92;
        w = FLOAT_1_0;
        ya = FLOAT_1_0;
        outVectora = 0.0;
        fmt = 0.0;
        goto LABEL_87;
      }
    }
    if ( !*(_QWORD *)v92 )
    {
      v15 = v251;
      goto LABEL_90;
    }
    v104 = (float)LocalClientGlobals->compassMapTiles;
    v239 = v253;
    w = (float)(v97 + 1) * (float)(1.0 / v104);
    ya = (float)(v96 + 1) * (float)(1.0 / v104);
    outVectora = (float)v97 * (float)(1.0 / v104);
    fmt = (float)v96 * (float)(1.0 / v104);
LABEL_87:
    v15 = v251;
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, v251, (const vec4_t (*)[4])verts, fmt, outVectora, ya, w, &v262, v239);
LABEL_90:
    v94 = v249;
    v95 = uvAngle;
LABEL_91:
    ++v91;
    p_y = &parentRecta->y;
    parentRecta = (rectDef_s *)((char *)parentRecta + 4);
    v92 += 16i64;
  }
  while ( v91 < 9 );
  LUI_Matrix_Pop();
  LUI_Matrix_Pop();
  if ( this->m_currentMinimapStyle == MINIMAP_STYLE_SQUARE )
    LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
LABEL_95:
  v105 = *(const GfxImage **)v263.v;
  if ( *(_QWORD *)v263.v )
  {
    v106 = DVARBOOL_compassEnableFOVScaledCone;
    if ( !DVARBOOL_compassEnableFOVScaledCone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnableFOVScaledCone") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v106);
    if ( v106->current.enabled )
    {
      if ( LocalClientGlobals->nextSnap )
      {
        v107 = (float)(LocalClientGlobals->lastViewFov * 0.015384615) * alphaOffset;
        v108 = (float)((float)(0.5 * alphaOffset) + x) - (float)(v107 * 0.5);
        v109 = v107 + v108;
        v110 = vMax;
        v111 = (float)(0.5 * h) + vMax;
        goto LABEL_103;
      }
    }
    else
    {
      v108 = x;
      v109 = x + alphaOffset;
      v110 = vMax;
      v111 = (float)(0.5 * h) + vMax;
LABEL_103:
      LUI_CoD_GenerateQuadVerts(v108, v110, v109, v111, (vec4_t (*)[4])verts);
      *(_QWORD *)v263.v = *(_QWORD *)v255->v;
      v263.v[2] = v255->v[2];
      v263.v[3] = v255->v[3] * 0.2;
      LUI_Render_PushBlendMode(LUI_BLEND_MODE_ADD);
      if ( this->m_isMinimapRotationEnabled )
      {
        LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, v15, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &v263, v105);
      }
      else
      {
        v112 = (float)(0.5 * alphaOffset) + x;
        v113 = (float)(0.5 * h) + vMax;
        v114 = (float)(h * 0.25) + vMax;
        PlayerAngle = CgCompassSystem::GetPlayerAngle(this, LocalClientGlobals, cgameGlobMP, COMPASS_TYPE_PARTIAL, cropPartialMap);
        LUI_Render_DrawQuadRotatedRelativeToPoint((const LocalClientNum_t)this->m_localClientNum, element, v112, v113, v112, v114, alphaOffset, 0.5 * h, 0.0, 0.0, 1.0, 1.0, *(float *)&PlayerAngle, v263.v[0], v263.v[1], v263.v[2], v263.v[3], v105, v15);
      }
      LUI_Render_PopBlendMode();
    }
  }
  if ( v261 )
    LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
  if ( *(_QWORD *)v265.v && this->m_isMinimapRotationEnabled )
    LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)this->m_localClientNum, element, v15, (const vec4_t (*)[4])quadVerts, 0.5, 0.5, 0.5, 0.5, v88, &v262, *(const GfxImage **)v265.v);
LABEL_220:
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystem::DrawPlayerMapLocationSelector
==============
*/
void CgCompassSystem::DrawPlayerMapLocationSelector(CgCompassSystem *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, Material *material, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  float v8; 
  const vec4_t *v10; 
  cg_t *LocalClientGlobals; 
  bool v15; 
  CgGlobalsMP *v16; 
  CgWeaponMap *Instance; 
  unsigned int vertAlign; 
  float v19; 
  float v20; 
  unsigned int v22; 
  bool v23; 
  GfxImage *mapLocationSelectorArrow; 
  int v25; 
  float v26; 
  float v27; 
  float v28; 
  float *v29; 
  int *locationSelectorInputTimes; 
  LocalClientNum_t m_localClientNum; 
  int v32; 
  const ScreenPlacement *ActivePlacement; 
  __int128 v34; 
  __int128 v35; 
  __int128 v37; 
  float v38; 
  int v39; 
  int v40; 
  float v41; 
  float v42; 
  float v43; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  const ScreenPlacement *v54; 
  CgMLGSpectator *MLGSpectator; 
  int v56; 
  CgMLGSpectator *v57; 
  vec2_t LocationSelectorCursor; 
  float v59; 
  float v60; 
  double LocationSelectorAngle; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  char v68; 
  const GfxImage *v69; 
  float v73; 
  LocalClientNum_t v74; 
  int v79; 
  int v80; 
  const ScreenPlacement *v81; 
  const GfxImage *mapLocationSelectorArrowSingle; 
  float width; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float x; 
  float y; 
  float vMin; 
  float uMax[3]; 
  unsigned int v92; 
  lua_State *v93; 
  LUIElement *v94; 
  int horzAlign; 
  float v96; 
  unsigned int v97; 
  const rectDef_s *v98; 
  GfxImage *v99; 
  GfxImage *locationSelectorCursorMark1; 
  GfxImage *locationSelectorCursorMark2; 
  vec4_t v102; 
  vec2_t position; 
  _QWORD clientNum[2]; 
  vec4_t quadVerts[4]; 

  v10 = color;
  v94 = element;
  v93 = luaVM;
  v98 = rect;
  clientNum[0] = color;
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1523, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1524, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->compassMapWorldSize.v[0] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1527, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapWorldSize[0])", (const char *)&queryFormat, "cgameGlob->compassMapWorldSize[0]") )
    __debugbreak();
  if ( LocalClientGlobals->compassMapWorldSize.v[1] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 1528, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapWorldSize[1])", (const char *)&queryFormat, "cgameGlob->compassMapWorldSize[1]") )
    __debugbreak();
  v15 = LocalClientGlobals->predictedPlayerState.pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u);
  v16 = NULL;
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
    v16 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  position = (vec2_t)v16;
  if ( !v15 || v16 && v16->m_isMLGSpectator )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
    if ( BG_IsLocationSelectorActive(Instance, &LocalClientGlobals->predictedPlayerState) && !CL_Keys_IsCatcherActive(this->m_localClientNum, 16) )
    {
      vertAlign = (unsigned int)LocalClientGlobals->predictedPlayerState.locationSelectionInfo >> 2;
      LOBYTE(vertAlign) = (LocalClientGlobals->predictedPlayerState.locationSelectionInfo & 4) != 0;
      v92 = vertAlign;
      CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &LocalClientGlobals->compassMapWorldSize, &x, &y, &vMin, uMax);
      this->GetDrawnItemScaler(this, compassType, (LocationSelectorType)((unsigned __int8)LocalClientGlobals->predictedPlayerState.locationSelectionInfo >> 5), vertAlign);
      v19 = uMax[0];
      v20 = vMin;
      _XMM9 = LODWORD(FLOAT_0_5);
      v22 = (unsigned int)LocalClientGlobals->predictedPlayerState.locationSelectionInfo >> 4;
      LOBYTE(v22) = (LocalClientGlobals->predictedPlayerState.locationSelectionInfo & 0x10) != 0;
      v23 = (LocalClientGlobals->predictedPlayerState.locationSelectionInfo & 0x10) == 0;
      v97 = v22;
      locationSelectorCursorMark1 = (GfxImage *)cgMedia.compass.locationSelectorCursorMark1;
      locationSelectorCursorMark2 = (GfxImage *)cgMedia.compass.locationSelectorCursorMark2;
      mapLocationSelectorArrow = (GfxImage *)cgMedia.mapLocationSelectorArrow;
      if ( !v23 )
        mapLocationSelectorArrow = (GfxImage *)cgMedia.mapLocationSelectorArrowSingle;
      v25 = 0;
      v26 = v8 * uMax[0];
      v96 = v8 * uMax[0];
      v87 = v8 * uMax[0];
      v99 = mapLocationSelectorArrow;
      if ( LocalClientGlobals->locationSelectorNumInputs > 0 )
      {
        v27 = y;
        v28 = x;
        v29 = (float *)LocalClientGlobals->locationSelectorInputs + 1;
        locationSelectorInputTimes = LocalClientGlobals->locationSelectorInputTimes;
        do
        {
          if ( (_BYTE)vertAlign )
          {
            m_localClientNum = this->m_localClientNum;
            v84 = v26 * 0.5;
            vertAlign = v98->vertAlign;
            v32 = v98->horzAlign;
            width = v26 * 3.5;
            v86 = (float)((float)(v20 * *(v29 - 1)) + v28) - (float)((float)(v26 * 0.5) * 0.5);
            v85 = (float)((float)(v19 * *v29) + v27) - (float)((float)(v26 * 3.5) * 0.5);
            ActivePlacement = ScrPlace_GetActivePlacement(m_localClientNum);
            ScrPlace_ApplyRect(ActivePlacement, &v86, &v85, &v84, &width, v32, vertAlign);
            LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v94, (float)(0.5 * v84) + v86, (float)(0.5 * width) + v85, v84, width, 0.0, 0.0, 1.0, 1.0, COERCE_FLOAT(*(locationSelectorInputTimes - 4) ^ _xmm), markerColor.v[0], markerColor.v[1], markerColor.v[2], markerColor.v[3], v99, v93);
            LOBYTE(vertAlign) = v92;
          }
          else
          {
            v34 = 0i64;
            *(float *)&v34 = (float)(LocalClientGlobals->time - *locationSelectorInputTimes);
            v35 = LODWORD(FLOAT_1_0);
            if ( *(float *)&v34 < 200.0 )
            {
              *(float *)&v34 = (float)(cosf_0(*(float *)&v34 * 0.031415928) * 0.074999988) + 0.92500001;
              v35 = v34;
            }
            v37 = v35;
            *(float *)&v37 = *(float *)&v35 * v26;
            _XMM2 = v37;
            v38 = (float)(v20 * *(v29 - 1)) + x;
            v39 = v98->vertAlign;
            v40 = v98->horzAlign;
            v41 = (float)(v19 * *v29) + v27;
            v42 = 1.0 / (float)(*(float *)&v35 * v26);
            v43 = (float)((float)(x - v38) * v42) + 0.5;
            __asm { vminss  xmm6, xmm2, xmm6 }
            v87 = *(float *)&_XMM6;
            v45 = (float)((float)(y - v41) * v42) + 0.5;
            v46 = (float)((float)(v20 + x) - v38) * v42;
            v47 = (float)((float)(y + v19) - v41) * v42;
            v48 = v20;
            v49 = v19;
            v84 = v20;
            v86 = x;
            v85 = y;
            width = v19;
            horzAlign = v40;
            v50 = v46 + 0.5;
            v51 = v47 + 0.5;
            if ( v43 < 0.0 )
            {
              v52 = (float)(v20 * v43) / (float)(v43 - v50);
              v48 = v20 - v52;
              v86 = v52 + x;
              v84 = v20 - v52;
              v43 = 0.0;
            }
            if ( v45 < 0.0 )
            {
              v53 = (float)(v45 * v19) / (float)(v45 - v51);
              v49 = v19 - v53;
              v85 = v53 + y;
              width = v19 - v53;
              v45 = 0.0;
            }
            if ( v46 > 0.5 )
            {
              v84 = v48 * (float)((float)(1.0 - v43) / (float)(v50 - v43));
              v50 = FLOAT_1_0;
            }
            if ( v47 > 0.5 )
            {
              width = v49 * (float)((float)(1.0 - v45) / (float)(v51 - v45));
              v51 = FLOAT_1_0;
            }
            v54 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
            ScrPlace_ApplyRect(v54, &v86, &v85, &v84, &width, horzAlign, v39);
            LUI_CoD_GenerateQuadVerts(v86, v85, v86 + v84, v85 + width, (vec4_t (*)[4])quadVerts);
            LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, v94, v93, (const vec4_t (*)[4])quadVerts, v43, v45, v50, v51, &markerColor, locationSelectorCursorMark1);
            LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)this->m_localClientNum, v94, v93, (const vec4_t (*)[4])quadVerts, 0.5, 0.5, 0.5, 0.5, v43, v45, v50, v51, (float)LocalClientGlobals->time * 0.015, &markerColor, locationSelectorCursorMark2);
            v27 = y;
            v28 = x;
            v26 = v96;
          }
          ++v25;
          ++locationSelectorInputTimes;
          v29 += 2;
        }
        while ( v25 < LocalClientGlobals->locationSelectorNumInputs );
        v10 = (const vec4_t *)clientNum[0];
      }
      if ( *(_QWORD *)&position && *(_BYTE *)(*(_QWORD *)&position + 742183i64) )
      {
        MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
        v56 = LocalClientGlobals->predictedPlayerState.clientNum;
        v57 = MLGSpectator;
        LocationSelectorCursor = CgMLGSpectator::GetLocationSelectorCursor(MLGSpectator, (int)clientNum);
        v59 = **(float **)LocationSelectorCursor.v;
        v60 = *(float *)(*(_QWORD *)&LocationSelectorCursor + 4i64);
        LocationSelectorAngle = CgMLGSpectator::GetLocationSelectorAngle(v57, v56);
        v62 = *(float *)&LocationSelectorAngle;
      }
      else
      {
        v59 = LocalClientGlobals->locationSelectorCursor.v[0];
        v60 = LocalClientGlobals->locationSelectorCursor.v[1];
        v62 = LocalClientGlobals->locationSelectorAngle;
      }
      v102 = *v10;
      if ( TopDownMapData_HasData() && (LocalClientGlobals->predictedPlayerState.locationSelectionInfo & 2) != 0 )
      {
        v63 = v59 * LocalClientGlobals->compassMapWorldSize.v[0];
        v64 = LocalClientGlobals->compassNorth.v[1];
        v65 = v60 * LocalClientGlobals->compassMapWorldSize.v[1];
        v66 = LocalClientGlobals->compassNorth.v[0];
        v67 = LocalClientGlobals->compassMapUpperLeft.v[1];
        position.v[0] = (float)((float)(v64 * v63) + LocalClientGlobals->compassMapUpperLeft.v[0]) - (float)(v66 * v65);
        position.v[1] = (float)(v67 - (float)(v66 * v63)) - (float)(v64 * v65);
        if ( !TopDownMapData_CanUseKillstreakAtPosition(&position) )
          v102.v[3] = v102.v[3] * 0.40000001;
      }
      if ( v87 != v26 )
      {
        v102.v[0] = v102.v[0] * markerColor.v[0];
        v102.v[2] = v102.v[2] * markerColor.v[2];
        v102.v[1] = v102.v[1] * markerColor.v[1];
      }
      v68 = v92;
      v69 = cgMedia.compass.locationSelectorCursor;
      _XMM0 = (unsigned __int8)v92;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm9, xmm7, xmm2
      }
      v73 = *(float *)&_XMM0 * v26;
      v74 = this->m_localClientNum;
      _XMM0 = (unsigned __int8)v92;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM0 = LODWORD(FLOAT_3_5);
      __asm { vblendvps xmm0, xmm0, xmm7, xmm2 }
      v79 = v98->vertAlign;
      v80 = v98->horzAlign;
      v84 = v73;
      v86 = (float)((float)(v20 * v59) + x) - (float)(v73 * 0.5);
      v85 = (float)((float)(v60 * v19) + y) - (float)((float)(*(float *)&_XMM0 * v26) * 0.5);
      width = *(float *)&_XMM0 * v26;
      v81 = ScrPlace_GetActivePlacement(v74);
      ScrPlace_ApplyRect(v81, &v86, &v85, &v84, &width, v80, v79);
      if ( v68 )
      {
        mapLocationSelectorArrowSingle = cgMedia.mapLocationSelectorArrow;
        if ( (_BYTE)v97 )
          mapLocationSelectorArrowSingle = cgMedia.mapLocationSelectorArrowSingle;
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v94, (float)(0.5 * v84) + v86, (float)(0.5 * width) + v85, v84, width, 0.0, 0.0, 1.0, 1.0, COERCE_FLOAT(LODWORD(v62) ^ _xmm), v10->v[0], v10->v[1], v10->v[2], v10->v[3], mapLocationSelectorArrowSingle, v93);
      }
      else
      {
        LUI_CoD_GenerateQuadVerts(v86, v85, v86 + v84, v85 + width, (vec4_t (*)[4])quadVerts);
        LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, v94, v93, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &v102, v69);
      }
    }
  }
}

/*
==============
CgCompassSystem::DrawPlayerName
==============
*/
void CgCompassSystem::DrawPlayerName(CgCompassSystem *this, int clientNum, float centerX, float centerY, int team, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v10; 
  __int64 numScores; 
  __int64 v12; 
  const int *i; 
  __int64 v14; 
  float displayWidth; 
  float v16; 
  float displayHeight; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  CgMLGSpectator *MLGSpectator; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  vec4_t color; 
  vec4_t verts[4]; 
  char out_playerName[48]; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v10 = LocalClientGlobals;
  numScores = LocalClientGlobals->numScores;
  if ( numScores > 0 )
  {
    v12 = 0i64;
    for ( i = &LocalClientGlobals->scores[0].client; *i != clientNum; i += 28 )
    {
      if ( ++v12 >= numScores )
        return;
    }
    Game_GetPlayerName((const LocalClientNum_t)this->m_localClientNum, *i, 0x30ui64, out_playerName);
    v14 = tls_index;
    displayWidth = (float)vidConfig.displayWidth;
    v16 = displayWidth * 0.0065104165;
    displayHeight = (float)vidConfig.displayHeight;
    v18 = displayHeight * 0.0078703705;
    if ( dword_150ECED00 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_150ECED00);
      if ( dword_150ECED00 == -1 )
      {
        COMPASS_PLAYER_NAME_TEXT_X_OFFSET = displayWidth * 0.013020833;
        j__Init_thread_footer(&dword_150ECED00);
      }
    }
    if ( dword_150ECED08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v14) + 1772i64) )
    {
      j__Init_thread_header(&dword_150ECED08);
      if ( dword_150ECED08 == -1 )
      {
        COMPASS_PLAYER_NAME_TEXT_Y_OFFSET = displayHeight * 0.014351852;
        j__Init_thread_footer(&dword_150ECED08);
      }
    }
    if ( dword_150ECED10 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v14) + 1772i64) )
    {
      j__Init_thread_header(&dword_150ECED10);
      if ( dword_150ECED10 == -1 )
      {
        COMPASS_PLAYER_NAME_TEXT_WITH_PLAYER_NUMBER_OFFSET = displayWidth * 0.0013020834;
        j__Init_thread_footer(&dword_150ECED10);
      }
    }
    v20 = centerX + COMPASS_PLAYER_NAME_TEXT_X_OFFSET;
    v19 = centerX + COMPASS_PLAYER_NAME_TEXT_X_OFFSET;
    v21 = centerY + COMPASS_PLAYER_NAME_TEXT_Y_OFFSET;
    color = (vec4_t)_xmm;
    _XMM7 = 0i64;
    if ( v10->m_isMLGSpectator )
    {
      MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
      if ( CgMLGSpectator::GetPlayerNumbersEnabled(MLGSpectator) )
        v19 = v20 + (float)(v16 + COMPASS_PLAYER_NAME_TEXT_WITH_PLAYER_NUMBER_OFFSET);
      _XMM0 = (unsigned int)clientNum;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm7, xmm1, xmm2
      }
      color.v[2] = *(float *)&_XMM0;
    }
    LUI_CoD_GenerateQuadVerts(v19 - v16, v18 + v21, v16 + v19, v21 - v18, (vec4_t (*)[4])verts);
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    font = UI_GetFontHandle(ActivePlacement, 1, 1.0);
    LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, luaVM, element, (const vec4_t (*)[4])verts, &color, font, out_playerName, 0, 0, 0.0, 20, NULL, NULL);
  }
}

/*
==============
CgCompassSystem::DrawPlayerNumber
==============
*/
void CgCompassSystem::DrawPlayerNumber(CgCompassSystem *this, int clientNum, float centerX, float centerY, float angle, int team, bool hasObjective, bool largeMap, vec4_t *fontColor, const CgStatic *cgStatic, LUIElement *element, lua_State *luaVM)
{
  LocalClientNum_t m_localClientNum; 
  int v15; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGSpectator *MLGSpectator; 
  __int64 v18; 
  __int64 numScores; 
  __int64 v20; 
  score_t *scores; 
  const dvar_t *v22; 
  float displayHeight; 
  float v24; 
  const dvar_t *v25; 
  const char *v26; 
  float value; 
  const dvar_t *v28; 
  float v29; 
  const dvar_t *v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  const dvar_t *v35; 
  float v36; 
  const dvar_t *v37; 
  const char *v38; 
  const dvar_t *v39; 
  float v40; 
  const dvar_t *v41; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  const dvar_t *v46; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  char dest[2]; 
  char v50; 
  float s; 
  float c; 
  vec4_t quadVerts[4]; 

  m_localClientNum = this->m_localClientNum;
  v15 = 10;
  *(_WORD *)dest = 0;
  v50 = 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(m_localClientNum);
  if ( LocalClientGlobals->m_isMLGSpectator )
  {
    MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
    if ( !CgMLGSpectator::GetPlayerNumbersEnabled(MLGSpectator) )
      return;
  }
  v18 = 1i64;
  if ( (team & 0xFFFFFFFD) != 0 )
    v18 = 6i64;
  if ( team == 2 )
  {
    v15 = 5;
  }
  else if ( team == 1 )
  {
    v15 = 10;
  }
  numScores = LocalClientGlobals->numScores;
  if ( numScores > 0 )
  {
    v20 = 0i64;
    scores = LocalClientGlobals->scores;
    do
    {
      if ( scores->team == team )
      {
        if ( scores->client == clientNum )
          break;
        v18 = (unsigned int)(v18 + 1);
      }
      ++v20;
      ++scores;
    }
    while ( v20 < numScores );
  }
  if ( LocalClientGlobals->m_isMLGSpectator )
  {
    if ( (int)v18 > v15 )
      return;
    if ( (_DWORD)v18 == 10 )
      v18 = 0i64;
  }
  Com_sprintf(dest, 3ui64, "%d", v18);
  if ( LocalClientGlobals->m_isMLGSpectator && clientNum == LocalClientGlobals->predictedPlayerState.clientNum )
  {
    v22 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
  }
  displayHeight = (float)vidConfig.displayHeight;
  v24 = displayHeight * 0.00052083336;
  if ( hasObjective )
  {
    v25 = DVARFLT_compassPlayerNumberObjectiveCircleRadius;
    if ( DVARFLT_compassPlayerNumberObjectiveCircleRadius )
      goto LABEL_32;
    v26 = "compassPlayerNumberObjectiveCircleRadius";
  }
  else
  {
    v25 = DVARFLT_compassPlayerNumberCircleRadius;
    if ( DVARFLT_compassPlayerNumberCircleRadius )
      goto LABEL_32;
    v26 = "compassPlayerNumberCircleRadius";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v26) )
    __debugbreak();
LABEL_32:
  Dvar_CheckFrontendServerThread(v25);
  value = v25->current.value;
  v28 = DVARFLT_compassMLGPlayerNumberTextWidth;
  if ( !DVARFLT_compassMLGPlayerNumberTextWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGPlayerNumberTextWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  v29 = v24 * v28->current.value;
  v30 = DVARFLT_compassMLGPlayerNumberFontHeight;
  if ( !DVARFLT_compassMLGPlayerNumberFontHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGPlayerNumberFontHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  v31 = (float)(displayHeight * 0.00092592591) * v30->current.value;
  FastSinCos(angle * 0.017453292, &s, &c);
  LODWORD(v32) = COERCE_UNSIGNED_INT(value * s) ^ _xmm;
  v34 = c * value;
  v33 = c * value;
  if ( hasObjective )
  {
    v35 = DVARFLT_compassObjectivePlayerNumberTextXOffset;
    if ( !DVARFLT_compassObjectivePlayerNumberTextXOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectivePlayerNumberTextXOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    v36 = v35->current.value;
    v37 = DVARFLT_compassObjectivePlayerNumberTextYOffset;
    if ( DVARFLT_compassObjectivePlayerNumberTextYOffset )
      goto LABEL_51;
    v38 = "compassObjectivePlayerNumberTextYOffset";
  }
  else
  {
    v39 = DVARFLT_compassPlayerNumberTextXOffset;
    if ( !DVARFLT_compassPlayerNumberTextXOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerNumberTextXOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v36 = v39->current.value;
    v37 = DVARFLT_compassPlayerNumberTextYOffset;
    if ( DVARFLT_compassPlayerNumberTextYOffset )
      goto LABEL_51;
    v38 = "compassPlayerNumberTextYOffset";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v38) )
    __debugbreak();
LABEL_51:
  Dvar_CheckFrontendServerThread(v37);
  v40 = v37->current.value;
  if ( largeMap )
  {
    v41 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v32 = v32 * v41->current.value;
    v42 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    v33 = v34 * v42->current.value;
    v43 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    v29 = v29 * v43->current.value;
    v44 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    v31 = v31 * v44->current.value;
    v45 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    v36 = v36 * v45->current.value;
    v46 = DVARFLT_compassIconMLGSpectatorScale;
    if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    v40 = v40 * v46->current.value;
  }
  LUI_CoD_GenerateQuadVerts((float)(centerX + (float)((float)(v36 + v32) * v24)) - v29, (float)(centerY + (float)((float)(v40 + v33) * (float)(displayHeight * 0.00092592591))) + v31, (float)(centerX + (float)((float)(v36 + v32) * v24)) + v29, (float)(centerY + (float)((float)(v40 + v33) * (float)(displayHeight * 0.00092592591))) - v31, (vec4_t (*)[4])quadVerts);
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
  font = UI_GetFontHandle(ActivePlacement, 4, 1.0);
  LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, fontColor, font, dest, 0, 0, 0.0, 120, NULL, NULL);
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
  return FLOAT_1_0;
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
  return this->m_currentZoomLevel;
}

/*
==============
CgCompassSystem::GetIconFadeAlpha
==============
*/
float CgCompassSystem::GetIconFadeAlpha(CgCompassSystem *this, const LocalClientNum_t localClientNum, CompassType compassType)
{
  double JammingLevel; 

  JammingLevel = CG_Radar_GetJammingLevel(localClientNum);
  return 1.0 - *(float *)&JammingLevel;
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

float __fastcall CgCompassSystem::GetObjectiveFade(CgCompassSystem *this, const rectDef_s *clipRect, double x, double y, float width, float height)
{
  __int128 y_low; 
  __int128 x_low; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v13; 
  __int128 v15; 
  __int128 v17; 
  __int128 v19; 
  __int128 v21; 

  y_low = LODWORD(clipRect->y);
  x_low = LODWORD(clipRect->x);
  v9 = x_low;
  *(float *)&v9 = *(float *)&x_low - *(float *)&x;
  v8 = v9;
  v11 = *(_OWORD *)&x;
  *(float *)&v11 = *(float *)&x + width;
  v10 = v11;
  v13 = v8;
  *(float *)&v13 = *(float *)&v8 * (float)(1.0 / width);
  _XMM4 = v13;
  __asm { vmaxss  xmm5, xmm4, xmm1 }
  v15 = y_low;
  *(float *)&v15 = (float)(*(float *)&y_low - *(float *)&y) * (float)(1.0 / height);
  _XMM1 = v15;
  v17 = *(_OWORD *)&y;
  __asm { vmaxss  xmm3, xmm1, xmm5 }
  v19 = v10;
  *(float *)&v19 = (float)(*(float *)&v10 - (float)(*(float *)&x_low + clipRect->w)) * (float)(1.0 / width);
  _XMM2 = v19;
  v21 = v17;
  __asm { vmaxss  xmm4, xmm2, xmm3 }
  *(float *)&v21 = (float)((float)(*(float *)&v17 + height) - (float)(*(float *)&y_low + clipRect->h)) * (float)(1.0 / height);
  _XMM2 = v21;
  __asm
  {
    vmaxss  xmm3, xmm2, xmm4
    vminss  xmm0, xmm3, xmm13
  }
  return 1.0 - *(float *)&_XMM0;
}

/*
==============
CgCompassSystem::GetPlayerAngle
==============
*/
float CgCompassSystem::GetPlayerAngle(CgCompassSystem *this, const cg_t *const cgameGlob, const CgGlobalsMP *const cgameGlobMP, const CompassType compassType, const bool cropPartialMap)
{
  float v9; 
  const dvar_t *v10; 
  float v11; 
  float v14; 
  float compassNorthYaw; 
  float v16; 
  float v17; 
  float v20; 
  const dvar_t *v21; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2725, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cgameGlobMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2726, ASSERT_TYPE_ASSERT, "(cgameGlobMP)", (const char *)&queryFormat, "cgameGlobMP") )
    __debugbreak();
  v9 = 0.0;
  if ( compassType )
    goto LABEL_17;
  v10 = DVARBOOL_compassRotation;
  if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled || cropPartialMap || !this->m_isMinimapRotationEnabled )
  {
LABEL_17:
    compassNorthYaw = cgameGlob->compassNorthYaw;
    v11 = FLOAT_0_0027777778;
    if ( cgameGlob->predictedPlayerState.vehicleState.entity == 2047 )
      v16 = compassNorthYaw - this->m_compassPlayerYaw;
    else
      v16 = compassNorthYaw - cgameGlob->predictedPlayerEntity->pose.angles.v[1];
    v17 = v16 * 0.0027777778;
    _XMM1 = 0i64;
    __asm { vroundss xmm4, xmm1, xmm2, 1 }
    v20 = (float)(v17 - *(float *)&_XMM4) * 360.0;
    v9 = v20;
    v14 = v20;
    if ( cgameGlobMP && cgameGlobMP->m_isMLGSpectator && this->MapShouldRotate(this) )
    {
      v9 = v20 - this->MapRotationFactor(this);
      v14 = v9;
    }
    if ( compassType )
      return v9;
  }
  else
  {
    v11 = FLOAT_0_0027777778;
    if ( cgameGlob->predictedPlayerState.vehicleState.entity != 2047 )
    {
      _XMM1 = 0i64;
      __asm { vroundss xmm4, xmm1, xmm2, 1 }
      v9 = (float)((float)((float)(this->m_compassPlayerYaw - cgameGlob->predictedPlayerEntity->pose.angles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    }
    v14 = v9;
  }
  v21 = DVARBOOL_compassRotation;
  if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled && this->m_compassMirrorLeftRight )
  {
    _XMM1 = 0i64;
    __asm { vroundss xmm3, xmm1, xmm2, 1 }
    return (float)((float)(v14 * v11) - *(float *)&_XMM3) * -360.0;
  }
  return v9;
}

/*
==============
CgCompassSystem::GetPlayerCompassColor
==============
*/
void CgCompassSystem::GetPlayerCompassColor(CgCompassSystem *this, vec4_t *color, const cg_t *cgameGlob)
{
  *color = playerColor;
}

/*
==============
CgCompassSystem::GetPlayerDrawSize
==============
*/
void CgCompassSystem::GetPlayerDrawSize(CgCompassSystem *this, CompassType compassType, bool largeMap, float *outHeight, float *outWidth)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v9; 
  float value; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  double v15; 
  double v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  double Float_Internal_DebugName; 
  double v22; 

  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  else
    LocalClientGlobals = NULL;
  if ( (unsigned int)(compassType - 1) <= 1 )
  {
    v19 = DVARFLT_cg_hudMapPlayerWidth;
    if ( !DVARFLT_cg_hudMapPlayerWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapPlayerWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    *outWidth = v19->current.value;
    v20 = DVARFLT_cg_hudMapPlayerHeight;
    if ( !DVARFLT_cg_hudMapPlayerHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapPlayerHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    *outHeight = v20->current.value;
    if ( largeMap && compassType == COMPASS_TYPE_FULL && LocalClientGlobals && LocalClientGlobals->m_isMLGSpectator )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
      *outWidth = *(float *)&Float_Internal_DebugName * *outWidth;
      v22 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
      *outHeight = *(float *)&v22 * *outHeight;
    }
  }
  else
  {
    if ( compassType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2033, ASSERT_TYPE_ASSERT, "(compassType == CompassType::COMPASS_TYPE_PARTIAL)", (const char *)&queryFormat, "compassType == CompassType::COMPASS_TYPE_PARTIAL") )
      __debugbreak();
    v9 = DVARFLT_compassPlayerWidth;
    if ( !DVARFLT_compassPlayerWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    value = v9->current.value;
    v11 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    *outWidth = value * v11->current.value;
    v12 = DVARFLT_compassPlayerHeight;
    if ( !DVARFLT_compassPlayerHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v12->current.value;
    v14 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    *outHeight = v13 * v14->current.value;
    if ( largeMap && LocalClientGlobals && LocalClientGlobals->m_isMLGSpectator )
    {
      v15 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
      *outWidth = *(float *)&v15 * *outWidth;
      v16 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
      *outHeight = *(float *)&v16 * *outHeight;
    }
    if ( CL_IsRenderingSplitScreen() )
    {
      v17 = DVARFLT_cg_hudSplitscreenCompassElementScale;
      if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      *outWidth = v17->current.value * *outWidth;
      v18 = DVARFLT_cg_hudSplitscreenCompassElementScale;
      if ( !DVARFLT_cg_hudSplitscreenCompassElementScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenCompassElementScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      *outHeight = v18->current.value * *outHeight;
    }
    CG_ApplySplitScreenCompassScale(compassType, NULL, NULL, outWidth, outHeight);
  }
}

/*
==============
CgCompassSystem::GetPredictiveLocationInfo
==============
*/
void CgCompassSystem::GetPredictiveLocationInfo(CgCompassSystem *this, const float objDist, const float avgMapDimension, const vec2_t *mapPosCurrent, const vec2_t *mapPosPrevious, const vec2_t *outClipped, vec2_t *forwardPoint, vec2_t *positioningDelta)
{
  float v8; 
  __int128 v9; 
  float v10; 
  float v13; 

  v9 = LODWORD(mapPosCurrent->v[0]);
  *(float *)&v9 = mapPosCurrent->v[0] - mapPosPrevious->v[0];
  v8 = *(float *)&v9;
  positioningDelta->v[0] = *(float *)&v9;
  v10 = mapPosCurrent->v[1] - mapPosPrevious->v[1];
  positioningDelta->v[1] = v10;
  if ( objDist <= avgMapDimension )
  {
    *forwardPoint = *mapPosPrevious;
  }
  else
  {
    *(float *)&v9 = (float)(*(float *)&v9 * *(float *)&v9) + (float)(v10 * v10);
    v13 = v8;
    if ( *(float *)&v9 > 0.0 )
    {
      _XMM1 = v9;
      __asm { vrsqrtss xmm2, xmm1, xmm2 }
      positioningDelta->v[0] = v8 * *(float *)&_XMM2;
      positioningDelta->v[1] = v10 * *(float *)&_XMM2;
      v13 = (float)(objDist - avgMapDimension) * positioningDelta->v[0];
      positioningDelta->v[1] = (float)(objDist - avgMapDimension) * positioningDelta->v[1];
      positioningDelta->v[0] = v13;
    }
    forwardPoint->v[0] = v13 + outClipped->v[0];
    forwardPoint->v[1] = outClipped->v[1] + positioningDelta->v[1];
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
bool CgCompassSystem::IsCursorInTacMap(CgCompassSystem *this)
{
  int ControllerFromClient; 
  float x; 
  float y; 
  bool result; 
  MouseCursorPos curPos; 

  result = 0;
  if ( this->m_currentCompassType == COMPASS_TYPE_TACMAP )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
    IN_GetCursorPos(ControllerFromClient, &curPos);
    x = this->m_tacmapRectangle.x;
    if ( x < (float)curPos.x && (float)(x + this->m_tacmapRectangle.w) > (float)curPos.x )
    {
      y = this->m_tacmapRectangle.y;
      if ( y < (float)curPos.y && (float)(y + this->m_tacmapRectangle.h) > (float)curPos.y )
        return 1;
    }
  }
  return result;
}

/*
==============
CgCompassSystem::MapOffset
==============
*/
vec2_t CgCompassSystem::MapOffset(CgCompassSystem *this, _QWORD *a2)
{
  __int64 v3; 

  *(float *)&v3 = FLOAT_0_5;
  *((float *)&v3 + 1) = FLOAT_0_5;
  *a2 = v3;
  return (vec2_t)a2;
}

/*
==============
CgCompassSystem::MapRotationFactor
==============
*/
float CgCompassSystem::MapRotationFactor(CgCompassSystem *this)
{
  return FLOAT_90_0;
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
  CgCompassSystem *v1; 
  int v2; 
  int v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  bdRandom v13; 
  bdRandom v14; 
  bdRandom v15; 
  bdRandom v16; 
  CgCompassSystem *v17; 
  __int64 v18; 
  float v19; 
  float v20; 
  float v21; 

  v18 = -2i64;
  v1 = compassSystem;
  v17 = compassSystem;
  v2 = 0;
  v3 = compassSystem->GetCompassActorCount(compassSystem);
  if ( v3 > 0 )
  {
    do
    {
      v4 = v1->GetCompassActor(v1, v2);
      bdRandom::bdRandom(&v15);
      v5 = bdRandom::nextUInt(&v15) % 0x22;
      bdRandom::~bdRandom(&v15);
      SetObfuscatedFunction(v5, v4 + 24, v4 + 16, (void (__fastcall **)(const vec3_t *, vec4_t *))(v4 + 16), (void (__fastcall **)(const vec4_t *, vec3_t *))(v4 + 24), s_aab_set_pointer_lastpos, s_aab_get_pointer_lastpos);
      bdRandom::bdRandom(&v16);
      v6 = bdRandom::nextUInt(&v16) % 0x22;
      bdRandom::~bdRandom(&v16);
      SetObfuscatedFunction(v6, v4 + 56, v4 + 48, (void (__fastcall **)(const vec3_t *, vec4_t *))(v4 + 48), (void (__fastcall **)(const vec4_t *, vec3_t *))(v4 + 56), s_aab_set_pointer_lastenemypos, s_aab_get_pointer_lastenemypos);
      bdRandom::bdRandom(&v13);
      v7 = (float)bdRandom::nextUInt(&v13);
      v19 = v7;
      v8 = (float)bdRandom::nextUInt(&v13);
      v20 = v8;
      v9 = (float)bdRandom::nextUInt(&v13);
      v21 = v9;
      bdRandom::~bdRandom(&v13);
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 197, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
        __debugbreak();
      if ( !*(_QWORD *)(v4 + 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 205, ASSERT_TYPE_ASSERT, "(actor->lastPos.Set_lastPos)", (const char *)&queryFormat, "actor->lastPos.Set_lastPos") )
        __debugbreak();
      ((void (__fastcall *)(float *, __int64))(*(_QWORD *)(v4 + 16) ^ (v4 + 24) ^ s_aab_set_pointer_lastpos))(&v19, v4 + 32);
      bdRandom::bdRandom(&v14);
      v10 = (float)bdRandom::nextUInt(&v14);
      v19 = v10;
      v11 = (float)bdRandom::nextUInt(&v14);
      v20 = v11;
      v12 = (float)bdRandom::nextUInt(&v14);
      v21 = v12;
      bdRandom::~bdRandom(&v14);
      if ( !*(_QWORD *)(v4 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 261, ASSERT_TYPE_ASSERT, "(actor->lastEnemyPos.Set_lastEnemyPos)", (const char *)&queryFormat, "actor->lastEnemyPos.Set_lastEnemyPos") )
        __debugbreak();
      ((void (__fastcall *)(float *, __int64))(*(_QWORD *)(v4 + 48) ^ (v4 + 56) ^ s_aab_set_pointer_lastenemypos))(&v19, v4 + 64);
      ++v2;
      v1 = v17;
    }
    while ( v2 < v3 );
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
void CgCompassSystem::SetCurrentCompassZoomLevel(CgCompassSystem *this, const float zoomLevel)
{
  this->m_currentZoomLevel = zoomLevel;
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
  float v9; 
  CgHandler *Handler; 
  __int128 v11; 
  float v12; 
  float v13; 
  float v17; 
  double v18; 
  double v19; 
  bool v20; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v23; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2535, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  this->m_compassMirrorLeftRight = 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = ps->pm_type;
  v5 = pm_type == 1 || pm_type == 8 || (ps->linkFlags.m_flags[0] & 4) != 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u);
  m_localClientNum = this->m_localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2609, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2612, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( LocalClientGlobals->renderingThirdPerson || (Instance = CgWeaponMap::GetInstance(m_localClientNum), BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState)) )
  {
    AxisToAngles(&LocalClientGlobals->refdef.view.axis, &angles);
    v9 = angles.v[1];
  }
  else
  {
    angles.v[0] = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
    v9 = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
    *(_QWORD *)&angles.y = *(_QWORD *)&LocalClientGlobals->predictedPlayerState.viewangles.y;
  }
  if ( v5 )
  {
    this->m_compassPlayerYaw = v9;
    YawVectors2D(v9, &this->m_compassPlayerForward, NULL);
  }
  else
  {
    AnglesToAxis(&angles, &axis);
    Handler = CgHandler::getHandler(this->m_localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v23, ps, Handler);
    WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v23, &axis);
    v11 = LODWORD(axis.m[0].v[0]);
    *(float *)&v11 = (float)(axis.m[0].v[0] * axis.m[0].v[0]) + (float)(axis.m[0].v[1] * axis.m[0].v[1]);
    if ( *(float *)&v11 >= 0.001 )
    {
      *(float *)&v11 = fsqrt(*(float *)&v11);
      _XMM2 = v11;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      v17 = 1.0 / *(float *)&_XMM0;
      v12 = axis.m[0].v[1] * (float)(1.0 / *(float *)&_XMM0);
      v13 = axis.m[0].v[0] * v17;
    }
    else
    {
      v12 = axis.m[1].v[1];
      v13 = axis.m[1].v[0];
    }
    this->m_compassPlayerForward.v[0] = v13;
    this->m_compassPlayerForward.v[1] = v12;
    v18 = vectoyaw(&this->m_compassPlayerForward);
    v19 = AngleNormalize360(*(const float *)&v18);
    v20 = v23.m_axis.m[2].v[2] < 0.0;
    this->m_compassPlayerYaw = *(float *)&v19;
    if ( v20 )
      this->m_compassMirrorLeftRight = 1;
  }
}

/*
==============
CgCompassSystem::UpdateTurretInfoCommon
==============
*/
void CgCompassSystem::UpdateTurretInfoCommon(CgCompassSystem *this, CompassTurret *turretInfo, LocalClientNum_t localClientNum, const centity_t *cent)
{
  float roll; 
  double v8; 

  if ( !turretInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2654, ASSERT_TYPE_ASSERT, "(turretInfo)", (const char *)&queryFormat, "turretInfo") )
    __debugbreak();
  turretInfo->lastUpdateTime = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
  CG_GetPoseOrigin(&cent->pose, &turretInfo->positionCurrent);
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 141, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 142, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->pose.eType == 11 && cent->pose.turret.remoteTurret )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 2661, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    roll = cent->pose.actor.roll;
  }
  else
  {
    roll = cent->pose.actor.roll + cent->pose.angles.v[1];
  }
  v8 = AngleNormalize360(roll);
  turretInfo->yawCurrent = *(float *)&v8;
}

/*
==============
CgCompassSystem::WorldPosToCompass
==============
*/
__int64 CgCompassSystem::WorldPosToCompass(CgCompassSystem *this, CompassType compassType, bool cropPartialMap, const rectDef_s *mapRect, const float boundsRadius, const vec2_t *compassMapWorldSize, const vec2_t *compassMapUpperLeft, const vec2_t *compassNorth, const vec2_t *north, const vec2_t *playerWorldPos, const vec2_t *in, vec2_t *out, vec2_t *outClipped)
{
  double v17; 
  double v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  double v26; 
  float v27; 
  float v28; 
  bool v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  CgCompassSystem *CompassSystem; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  double v46; 
  unsigned __int8 v47; 
  char v48; 
  float v49; 
  float v50; 
  float w; 
  float v52; 
  float v53; 
  float h; 
  float v55; 
  float v56; 
  __int64 result; 
  float c[2]; 
  float s[2]; 
  vec2_t m_tacmapMapCenter; 

  if ( !mapRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 136, ASSERT_TYPE_ASSERT, "(mapRect)", (const char *)&queryFormat, "mapRect") )
    __debugbreak();
  v17 = ((double (__fastcall *)(CgCompassSystem *))this->GetRange)(this);
  if ( compassType )
  {
    if ( compassType == COMPASS_TYPE_TACMAP )
    {
      v33 = in->v[0] - compassMapUpperLeft->v[0];
      v34 = in->v[1] - compassMapUpperLeft->v[1];
      v35 = compassNorth->v[1];
      v36 = compassNorth->v[0];
      v37 = compassMapWorldSize->v[0];
      v38 = compassMapWorldSize->v[1];
      CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
      v40 = 1.0 / this->m_currentZoomLevel;
      m_tacmapMapCenter = CompassSystem->m_tacmapMapCenter;
      v27 = (float)((float)((float)((float)((float)(v33 * v35) - (float)(v34 * v36)) / v37) - m_tacmapMapCenter.v[0]) * v40) * mapRect->w;
      v28 = (float)((float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v34 * v35) ^ _xmm) - (float)(v33 * v36)) / v38) - m_tacmapMapCenter.v[1]) * v40) * mapRect->h;
    }
    else
    {
      if ( compassType != COMPASS_TYPE_FULL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 215, ASSERT_TYPE_ASSERT, "(compassType == CompassType::COMPASS_TYPE_FULL)", (const char *)&queryFormat, "compassType == CompassType::COMPASS_TYPE_FULL") )
        __debugbreak();
      v41 = in->v[0] - compassMapUpperLeft->v[0];
      v42 = in->v[1] - compassMapUpperLeft->v[1];
      v43 = compassNorth->v[1];
      v44 = (float)((float)((float)(v41 * v43) - (float)(v42 * compassNorth->v[0])) / compassMapWorldSize->v[0]) - 0.5;
      v45 = (float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v42 * v43) ^ _xmm) - (float)(v41 * compassNorth->v[0])) / compassMapWorldSize->v[1]) - 0.5;
      s[1] = v45;
      s[0] = v44;
      if ( cg_t::ms_allocatedType == GLOB_TYPE_MP && CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->m_isMLGSpectator && this->MapShouldRotate(this) )
      {
        m_tacmapMapCenter = *(vec2_t *)s;
        v46 = ((double (__fastcall *)(CgCompassSystem *))this->MapRotationFactor)(this);
        Vec2Rotate(&m_tacmapMapCenter, COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v46 * 0.017453292) ^ _xmm), (vec2_t *)s);
        v45 = s[1];
        v44 = s[0];
      }
      v27 = v44 * mapRect->w;
      v28 = v45 * mapRect->h;
    }
    goto LABEL_24;
  }
  if ( *(float *)&v17 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 141, ASSERT_TYPE_ASSERT, "( ( range >= 0.0f ) )", "( range ) = %g", *(float *)&v17) )
    __debugbreak();
  if ( cropPartialMap )
  {
    v18 = ((double (__fastcall *)(CgCompassSystem *))this->GetCroppedMapZoom)(this);
    v19 = compassMapWorldSize->v[1];
    ((void (__fastcall *)(CgCompassSystem *, vec2_t *))this->MapOffset)(this, &m_tacmapMapCenter);
    v20 = mapRect->h / (float)(*(float *)&v18 * v19);
    v21 = in->v[0] - compassMapUpperLeft->v[0];
    v22 = in->v[1] - compassMapUpperLeft->v[1];
    v23 = (float)((float)((float)((float)(v21 * compassNorth->v[1]) - (float)(v22 * compassNorth->v[0])) / compassMapWorldSize->v[0]) - m_tacmapMapCenter.v[0]) * compassMapWorldSize->v[0];
    v24 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 * compassNorth->v[1]) ^ _xmm) - (float)(v21 * compassNorth->v[0])) / compassMapWorldSize->v[1]) - m_tacmapMapCenter.v[1]) * compassMapWorldSize->v[1];
    v25 = v23;
    if ( this->MapShouldRotate(this) )
    {
      v26 = ((double (__fastcall *)(CgCompassSystem *))this->MapRotationFactor)(this);
      FastSinCos(COERCE_CONST_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v26 * 0.017453292) ^ _xmm), s, &c[1]);
      v25 = (float)(v23 * c[1]) - (float)(v24 * s[0]);
      v24 = (float)(v23 * s[0]) + (float)(v24 * c[1]);
    }
    v27 = v20 * v25;
    v28 = v20 * v24;
LABEL_24:
    s[1] = v28;
    goto LABEL_25;
  }
  v29 = !this->m_compassMirrorLeftRight;
  v30 = mapRect->h / *(float *)&v17;
  v31 = (float)(in->v[0] - playerWorldPos->v[0]) * v30;
  v32 = (float)(in->v[1] - playerWorldPos->v[1]) * v30;
  v27 = (float)(v31 * north->v[1]) - (float)(v32 * north->v[0]);
  v28 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 * north->v[1]) ^ _xmm) - (float)(v31 * north->v[0]);
  s[1] = v28;
  s[0] = v27;
  if ( !v29 )
  {
    LODWORD(v27) ^= _xmm;
LABEL_25:
    s[0] = v27;
  }
  v47 = 0;
  LOBYTE(c[0]) = 0;
  if ( !outClipped || mapRect->w < 0.0 || mapRect->h < 0.0 )
    goto LABEL_43;
  if ( this->m_currentMinimapStyle || (v48 = CG_CalcCircularCompassPos(mapRect, boundsRadius, (vec2_t *)s, (bool *)c), v47 = LOBYTE(c[0]), !v48) )
  {
    w = mapRect->w;
    v50 = s[0];
    v52 = w * 0.5;
    if ( s[0] <= (float)(w * 0.5) )
    {
      if ( s[0] >= (float)(w * -0.5) )
      {
        v49 = s[1];
      }
      else
      {
        v53 = (float)(-1.0 / s[0]) * (float)(w * 0.5);
        v50 = s[0] * v53;
        v49 = s[1] * v53;
        v47 = 1;
      }
    }
    else
    {
      v50 = s[0] * (float)(v52 / s[0]);
      v49 = s[1] * (float)(v52 / s[0]);
      v47 = 1;
    }
    h = mapRect->h;
    if ( v49 <= (float)(h * 0.5) )
    {
      if ( v49 >= (float)(h * -0.5) )
        goto LABEL_42;
      v56 = (float)(-1.0 / v49) * (float)(h * 0.5);
      v50 = v50 * v56;
      v49 = v49 * v56;
    }
    else
    {
      v55 = (float)(h * 0.5) / v49;
      v50 = v50 * v55;
      v49 = v49 * v55;
    }
    v47 = 1;
    goto LABEL_42;
  }
  v49 = s[1];
  v50 = s[0];
LABEL_42:
  outClipped->v[0] = v50;
  outClipped->v[1] = v49;
LABEL_43:
  result = v47;
  if ( out )
  {
    out->v[0] = v27;
    out->v[1] = v28;
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

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  return CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, mapRect, boundsRadius, &LocalClientGlobals->compassMapWorldSize, &LocalClientGlobals->compassMapUpperLeft, &LocalClientGlobals->compassNorth, north, playerWorldPos, in, out, outClipped);
}

/*
==============
CgCompassSystem::WorldPosToCompassPredict
==============
*/
bool CgCompassSystem::WorldPosToCompassPredict(CgCompassSystem *this, CompassType compassType, const rectDef_s *mapRect, const float boundsRadius, const vec2_t *north, const vec2_t *playerWorldPos, const vec2_t *in, const vec2_t *prev, vec2_t *out, vec2_t *outClipped)
{
  cg_t *LocalClientGlobals; 
  float v14; 
  float v15; 
  bool v16; 
  int v17; 
  float h; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  bool result; 
  float w; 
  float v41; 
  float v42; 
  float v43; 
  __int128 v44; 
  float v45; 
  float v46; 
  float v47; 
  __int128 v48; 
  __int128 v49; 
  float v50; 
  float v51; 
  __int128 v53; 
  float v54; 
  float v56; 
  __int128 v57; 
  __int128 v58; 
  float v59; 
  float v62; 
  float v63; 
  char v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  bool v72[4]; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  vec2_t outClippedXY; 

  v76 = boundsRadius;
  if ( !mapRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 311, ASSERT_TYPE_ASSERT, "(mapRect)", (const char *)&queryFormat, "mapRect") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( compassType )
  {
    if ( (unsigned int)(compassType - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 344, ASSERT_TYPE_ASSERT, "(compassType == CompassType::COMPASS_TYPE_FULL || compassType == CompassType::COMPASS_TYPE_TACMAP)", (const char *)&queryFormat, "compassType == CompassType::COMPASS_TYPE_FULL || compassType == CompassType::COMPASS_TYPE_TACMAP") )
      __debugbreak();
    v37 = LocalClientGlobals->compassNorth.v[1];
    v38 = LocalClientGlobals->compassNorth.v[0];
    v17 = _xmm;
    v22 = in->v[0] - LocalClientGlobals->compassMapUpperLeft.v[0];
    v35 = in->v[1] - LocalClientGlobals->compassMapUpperLeft.v[1];
    h = mapRect->h;
    v34 = v76;
    v33 = v76;
    v28 = v76;
    v26 = (float)((float)((float)((float)(v37 * v22) - (float)(v38 * v35)) / LocalClientGlobals->compassMapWorldSize.v[0]) - 0.5) * mapRect->w;
    v36 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v37 * v35) ^ _xmm) - (float)(v38 * v22)) / LocalClientGlobals->compassMapWorldSize.v[1]) - 0.5) * h;
    v74 = v36;
    v73 = v76;
  }
  else
  {
    if ( this->GetRange(this) < 0.0 )
    {
      v14 = ((__m128 (__fastcall *)(CgCompassSystem *))this->GetRange)(this).m128_f32[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 317, ASSERT_TYPE_ASSERT, "( ( GetRange() >= 0.0f ) )", "( GetRange() ) = %g", v14) )
        __debugbreak();
    }
    v15 = this->GetRange(this);
    v16 = !this->m_compassMirrorLeftRight;
    v17 = _xmm;
    h = mapRect->h;
    v19 = in->v[0];
    v20 = in->v[1];
    v21 = h * (float)(1.0 / v15);
    v22 = (float)(in->v[0] - playerWorldPos->v[0]) * v21;
    v77 = (float)(v20 - playerWorldPos->v[1]) * v21;
    v23 = north->v[1];
    v24 = north->v[0];
    v25 = v19 * v21;
    v27 = (float)(v23 * v22) - (float)(north->v[0] * v77);
    v26 = v27;
    v74 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 * v77) ^ _xmm) - (float)(north->v[0] * v22);
    v28 = (float)(v23 * v25) - (float)(v24 * (float)(v20 * v21));
    v29 = v24 * v25;
    v30 = v21 * prev->v[0];
    v31 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 * (float)(v20 * v21)) ^ _xmm) - v29;
    v32 = v21 * prev->v[1];
    v33 = (float)(v30 * v23) - (float)(v32 * v24);
    v34 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 * v23) ^ _xmm) - (float)(v30 * v24);
    v73 = v31;
    if ( !v16 )
    {
      LODWORD(v26) = LODWORD(v27) ^ _xmm;
      LODWORD(v28) ^= _xmm;
      LODWORD(v33) ^= _xmm;
    }
    v35 = v77;
    v36 = v74;
  }
  result = 0;
  v72[0] = 0;
  if ( outClipped )
  {
    w = mapRect->w;
    if ( w >= 0.0 && h >= 0.0 && compassType == COMPASS_TYPE_PARTIAL )
    {
      outClippedXY.v[1] = v36;
      v41 = v36;
      v42 = fsqrt((float)(v35 * v35) + (float)(v22 * v22));
      v43 = h * 0.5;
      v49 = LODWORD(v73);
      *(float *)&v49 = v73 - v34;
      v44 = v49;
      v45 = v28 - v33;
      v46 = w * 0.5;
      v47 = v26;
      v77 = v43;
      *(float *)&v49 = *(float *)&v49 * *(float *)&v49;
      v48 = v49;
      outClippedXY.v[0] = v26;
      v75 = v42;
      v50 = v45 * v45;
      v51 = v28 - v33;
      if ( v42 <= (float)(w * 0.5) )
      {
        v75 = v33;
        v73 = v34;
      }
      else
      {
        v73 = *(float *)&v44;
        if ( (float)(v50 + *(float *)&v49) > 0.0 )
        {
          v53 = 0i64;
          *(float *)&v53 = (float)(v45 * v45) + *(float *)&v48;
          _XMM3 = v53;
          v54 = v42 - v46;
          __asm { vrsqrtss xmm3, xmm3, xmm3 }
          v51 = (float)(v45 * *(float *)&_XMM3) * v54;
          v56 = (float)(*(float *)&v44 * *(float *)&_XMM3) * v54;
          v42 = v75;
          v73 = v56;
          v57 = v44;
          *(float *)&v57 = *(float *)&v44 * *(float *)&v44;
          v48 = v57;
          v50 = v45 * v45;
        }
        v75 = v26 + v51;
        v17 = _xmm;
        v73 = v74 + v73;
      }
      if ( v42 > v77 )
      {
        v58 = v48;
        if ( (float)(*(float *)&v48 + v50) > 0.0 )
        {
          v59 = v42 - v77;
          *(float *)&v58 = *(float *)&v48 + v50;
          _XMM1 = v58;
          __asm { vrsqrtss xmm3, xmm1, xmm3 }
          v45 = (float)(v45 * *(float *)&_XMM3) * v59;
          *(float *)&v44 = (float)(*(float *)&v44 * *(float *)&_XMM3) * v59;
        }
        v34 = v74 + *(float *)&v44;
        v33 = v26 + v45;
      }
      if ( v26 <= v46 )
      {
        if ( v26 >= (float)(-0.5 * mapRect->w) )
          goto LABEL_37;
        if ( v51 > 0.0 )
        {
          v41 = v73;
          v47 = v75;
          outClippedXY.v[1] = v73;
        }
        LODWORD(v47) = COERCE_UNSIGNED_INT((float)(v46 / v47) * v47) ^ v17;
      }
      else
      {
        v62 = v26;
        if ( COERCE_FLOAT(LODWORD(v51) ^ v17) > 0.0 )
        {
          v41 = v73;
          v62 = v75;
          outClippedXY.v[1] = v73;
        }
        v47 = (float)(v46 / v62) * v62;
      }
      result = 1;
      v72[0] = 1;
      outClippedXY.v[0] = v47;
LABEL_37:
      v63 = mapRect->h;
      if ( v41 <= (float)(v63 * 0.5) )
      {
        if ( v41 >= (float)(v63 * -0.5) )
        {
LABEL_46:
          if ( this->m_currentMinimapStyle == MINIMAP_STYLE_CIRCLE )
          {
            v64 = CG_CalcCircularCompassPos(mapRect, v76, &outClippedXY, v72);
            v41 = outClippedXY.v[1];
            v47 = outClippedXY.v[0];
            v16 = v64 == 0;
            result = v72[0];
            if ( !v16 )
              goto LABEL_58;
          }
          v65 = mapRect->w;
          v66 = v65 * 0.5;
          if ( v47 <= (float)(v65 * 0.5) )
          {
            if ( v47 >= (float)(v65 * -0.5) )
              goto LABEL_53;
            v68 = (float)(-1.0 / v47) * (float)(v65 * 0.5);
            v47 = v47 * v68;
            v41 = v41 * v68;
          }
          else
          {
            v67 = v66 / v47;
            v47 = v47 * (float)(v66 / v47);
            v41 = v41 * v67;
          }
          result = 1;
LABEL_53:
          v69 = mapRect->h;
          if ( v41 <= (float)(v69 * 0.5) )
          {
            if ( v41 >= (float)(v69 * -0.5) )
            {
LABEL_58:
              outClipped->v[0] = v47;
              outClipped->v[1] = v41;
              goto LABEL_59;
            }
            v71 = (float)(-1.0 / v41) * (float)(v69 * 0.5);
            v47 = v47 * v71;
            v41 = v41 * v71;
          }
          else
          {
            v70 = (float)(v69 * 0.5) / v41;
            v47 = v47 * v70;
            v41 = v41 * v70;
          }
          result = 1;
          goto LABEL_58;
        }
        if ( *(float *)&v44 > 0.0 )
        {
          outClippedXY.v[0] = v33;
          v47 = v33;
          v41 = v34;
        }
        v41 = v41 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v63 * 0.5) / v41) ^ v17);
      }
      else
      {
        if ( COERCE_FLOAT(v44 ^ v17) > 0.0 )
        {
          outClippedXY.v[0] = v33;
          v47 = v33;
          v41 = v34;
        }
        v41 = v41 * (float)((float)(v63 * 0.5) / v41);
      }
      result = 1;
      v72[0] = 1;
      outClippedXY.v[1] = v41;
      goto LABEL_46;
    }
  }
LABEL_59:
  if ( out )
  {
    out->v[1] = v74;
    out->v[0] = v26;
  }
  return result;
}

/*
==============
CgCompassSystem::WorldYawToCompass
==============
*/
void CgCompassSystem::WorldYawToCompass(CgCompassSystem *this, CompassType compassType, const cg_t *const cgameGlob, const float in, float *out)
{
  const dvar_t *v7; 
  float v8; 

  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.cpp", 501, ASSERT_TYPE_ASSERT, "(out)", (const char *)&queryFormat, "out") )
    __debugbreak();
  *out = in;
  if ( compassType == COMPASS_TYPE_PARTIAL )
  {
    v7 = DVARBOOL_compassRotation;
    if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled && this->m_compassMirrorLeftRight )
    {
      v8 = in * 0.0027777778;
      _XMM1 = 0i64;
      __asm { vroundss xmm3, xmm1, xmm2, 1 }
      *out = (float)(v8 - *(float *)&_XMM3) * -360.0;
    }
  }
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
  *(_OWORD *)&result->x = *(_OWORD *)&this->m_tacmapRectangle.x;
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
  int v2; 

  v2 = *(_DWORD *)&rect->horzAlign;
  *(_OWORD *)&this->m_tacmapRectangle.x = *(_OWORD *)&rect->x;
  *(_DWORD *)&this->m_tacmapRectangle.horzAlign = v2;
}

