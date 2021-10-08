/*
==============
CgCompassSystemMP::GetPlayerCompassMaterial
==============
*/

void __fastcall CgCompassSystemMP::GetPlayerCompassMaterial(CgCompassSystemMP *this, const cg_t *cgameGlob, const GfxImage **outMaterial)
{
  ?GetPlayerCompassMaterial@CgCompassSystemMP@@UEBAXPEBVcg_t@@PEAPEBUGfxImage@@@Z(this, cgameGlob, outMaterial);
}

/*
==============
CgCompassSystemMP::IsRadarSweepEnabled
==============
*/

bool __fastcall CgCompassSystemMP::IsRadarSweepEnabled(CgCompassSystemMP *this, const CgGlobalsMP *const cgameGlob)
{
  return ?IsRadarSweepEnabled@CgCompassSystemMP@@IEBA_NQEBVCgGlobalsMP@@@Z(this, cgameGlob);
}

/*
==============
CgCompassSystemMP::SetFullmap
==============
*/

void __fastcall CgCompassSystemMP::SetFullmap(CgCompassSystemMP *this, bool isFullMap)
{
  ?SetFullmap@CgCompassSystemMP@@QEAAX_N@Z(this, isFullMap);
}

/*
==============
CgCompassSystemMP::AddWeaponPingInfo
==============
*/

void __fastcall CgCompassSystemMP::AddWeaponPingInfo(CgCompassSystemMP *this, const centity_t *cent, const vec3_t *origin, int msec)
{
  ?AddWeaponPingInfo@CgCompassSystemMP@@UEAAXPEBUcentity_t@@AEBTvec3_t@@H@Z(this, cent, origin, msec);
}

/*
==============
CgCompassSystemMP::GetRadarSweepEnabled
==============
*/

bool __fastcall CgCompassSystemMP::GetRadarSweepEnabled(CgCompassSystemMP *this)
{
  return ?GetRadarSweepEnabled@CgCompassSystemMP@@QEAA_NXZ(this);
}

/*
==============
CgCompassSystemMP::DrawMapLayer
==============
*/

void __fastcall CgCompassSystemMP::DrawMapLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, const vec4_t *mapColor, LUIElement *element, lua_State *luaVM)
{
  ?DrawMapLayer@CgCompassSystemMP@@UEAAXPEBUMinimapOptions@@PEBUrectDef_s@@1AEBTvec4_t@@2PEAULUIElement@@PEAUlua_State@@@Z(this, minimapOptions, parentRect, rect, color, mapColor, element, luaVM);
}

/*
==============
CgCompassSystemMP::IncreaseRadarTime
==============
*/

void __fastcall CgCompassSystemMP::IncreaseRadarTime(CgCompassSystemMP *this)
{
  ?IncreaseRadarTime@CgCompassSystemMP@@QEAAXXZ(this);
}

/*
==============
CgCompassSystemMP::UpdatePlaneInfo
==============
*/

void __fastcall CgCompassSystemMP::UpdatePlaneInfo(CgCompassSystemMP *this, int entityIndex)
{
  ?UpdatePlaneInfo@CgCompassSystemMP@@QEAAXH@Z(this, entityIndex);
}

/*
==============
CgCompassSystemMP::IsBigMapMinimap
==============
*/

bool __fastcall CgCompassSystemMP::IsBigMapMinimap(CgCompassSystemMP *this)
{
  return ?IsBigMapMinimap@CgCompassSystemMP@@QEBA_NXZ(this);
}

/*
==============
CgCompassSystemMP::GetNeutralCompassColor
==============
*/

void __fastcall CgCompassSystemMP::GetNeutralCompassColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  ?GetNeutralCompassColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::IsObjectiveFiltered
==============
*/

bool __fastcall CgCompassSystemMP::IsObjectiveFiltered(CgCompassSystemMP *this, CompassType type, ObjectiveBackground background)
{
  return ?IsObjectiveFiltered@CgCompassSystemMP@@UEBA_NW4CompassType@@W4ObjectiveBackground@@@Z(this, type, background);
}

/*
==============
CgCompassSystemMP::DrawMLGCameraIcon
==============
*/

void __fastcall CgCompassSystemMP::DrawMLGCameraIcon(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *rect, const rectDef_s *scaledRect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM, float centerX, float centerY, const cg_t *cgameGlob, const vec3_t *camOrigin, const vec2_t *camAngles, const GfxImage *icon, int cameraNumber)
{
  ?DrawMLGCameraIcon@CgCompassSystemMP@@QEBAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@MMPEBVcg_t@@AEBTvec3_t@@AEBTvec2_t@@PEBUGfxImage@@H@Z(this, compassType, cropPartialMap, rect, scaledRect, boundsRadius, color, element, luaVM, centerX, centerY, cgameGlob, camOrigin, camAngles, icon, cameraNumber);
}

/*
==============
CgCompassSystemMP::DrawDead
==============
*/

void __fastcall CgCompassSystemMP::DrawDead(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, LUIElement *element, lua_State *luaVM)
{
  ?DrawDead@CgCompassSystemMP@@QEAAXW4CompassType@@_N1PEBUrectDef_s@@2MPEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, largeMap, parentRect, rect, boundsRadius, element, luaVM);
}

/*
==============
CgCompassSystemMP::InitCompassColors
==============
*/

void __fastcall CgCompassSystemMP::InitCompassColors(CgCompassSystemMP *this)
{
  ?InitCompassColors@CgCompassSystemMP@@MEAAXXZ(this);
}

/*
==============
CgCompassSystemMP::GetQuadInfoForPoints
==============
*/

void __fastcall CgCompassSystemMP::GetQuadInfoForPoints(CgCompassSystemMP *this, vec2_t position1, vec2_t position2, float *quadPositionX, float *quadPositionY, float *quadLength, float *quadAngle)
{
  ?GetQuadInfoForPoints@CgCompassSystemMP@@QEBAXTvec2_t@@0PEAM111@Z(this, position1, position2, quadPositionX, quadPositionY, quadLength, quadAngle);
}

/*
==============
CgCompassSystemMP::DrawScramblers
==============
*/

void __fastcall CgCompassSystemMP::DrawScramblers(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  ?DrawScramblers@CgCompassSystemMP@@UEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAUGfxImage@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, mapMask, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetEnemyCompassLightColor
==============
*/

void __fastcall CgCompassSystemMP::GetEnemyCompassLightColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  ?GetEnemyCompassLightColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::GetMissileInfo
==============
*/

CompassMissile *__fastcall CgCompassSystemMP::GetMissileInfo(CgCompassSystemMP *this, int entityNum)
{
  return ?GetMissileInfo@CgCompassSystemMP@@AEAAPEAUCompassMissile@@H@Z(this, entityNum);
}

/*
==============
CgCompassSystemMP::UpdateTurretInfo
==============
*/

void __fastcall CgCompassSystemMP::UpdateTurretInfo(CgCompassSystemMP *this, const centity_t *cent)
{
  ?UpdateTurretInfo@CgCompassSystemMP@@QEAAXPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgCompassSystemMP::UpdateActors
==============
*/

void __fastcall CgCompassSystemMP::UpdateActors(CgCompassSystemMP *this)
{
  ?UpdateActors@CgCompassSystemMP@@QEAAXXZ(this);
}

/*
==============
CgCompassSystemMP::GetMLGSpectatorObjectiveColors
==============
*/

void __fastcall CgCompassSystemMP::GetMLGSpectatorObjectiveColors(CgCompassSystemMP *this, ObjectiveSide side, vec4_t *outColor, vec4_t *outLightColor, CgGlobalsMP *cgameGlobMP)
{
  ?GetMLGSpectatorObjectiveColors@CgCompassSystemMP@@QEBAXW4ObjectiveSide@@AEATvec4_t@@1PEAVCgGlobalsMP@@@Z(this, side, outColor, outLightColor, cgameGlobMP);
}

/*
==============
CgCompassSystemMP::SetDebugCamSelectedIndex
==============
*/

void __fastcall CgCompassSystemMP::SetDebugCamSelectedIndex(int debugCamSelectedIndex)
{
  ?SetDebugCamSelectedIndex@CgCompassSystemMP@@SAXH@Z(debugCamSelectedIndex);
}

/*
==============
CgCompassSystemMP::DrawRadarEffects
==============
*/

void __fastcall CgCompassSystemMP::DrawRadarEffects(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  ?DrawRadarEffects@CgCompassSystemMP@@QEBAXW4CompassType@@_NPEBUrectDef_s@@2AEBTvec4_t@@PEAUGfxImage@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, color, mapMask, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetTurretInfo
==============
*/

CompassTurretMP *__fastcall CgCompassSystemMP::GetTurretInfo(CgCompassSystemMP *this, int entityNum)
{
  return ?GetTurretInfo@CgCompassSystemMP@@AEAAPEAUCompassTurretMP@@H@Z(this, entityNum);
}

/*
==============
CgCompassSystemMP::IsEnemyFullyVisible
==============
*/

bool __fastcall CgCompassSystemMP::IsEnemyFullyVisible(CgCompassSystemMP *this, const CompassActorMP *actor)
{
  return ?IsEnemyFullyVisible@CgCompassSystemMP@@QEAA_NPEBUCompassActorMP@@@Z(this, actor);
}

/*
==============
CgCompassSystemMP::GetPlaneInfo
==============
*/

CompassPlane *__fastcall CgCompassSystemMP::GetPlaneInfo(CgCompassSystemMP *this, int entityNum)
{
  return ?GetPlaneInfo@CgCompassSystemMP@@AEAAPEAUCompassPlane@@H@Z(this, entityNum);
}

/*
==============
CgCompassSystemMP::DoesMovementCrossRadar
==============
*/

bool __fastcall CgCompassSystemMP::DoesMovementCrossRadar(CgCompassSystemMP *this, float radarProgress, const vec2_t *p1, const vec2_t *p2)
{
  return ?DoesMovementCrossRadar@CgCompassSystemMP@@IEBA_NMAEBTvec2_t@@0@Z(this, radarProgress, p1, p2);
}

/*
==============
CgCompassSystemMP::DrawCursorLayer
==============
*/

void __fastcall CgCompassSystemMP::DrawCursorLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawCursorLayer@CgCompassSystemMP@@UEAAXPEBUMinimapOptions@@PEBUrectDef_s@@1AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, minimapOptions, parentRect, rect, color, element, luaVM);
}

/*
==============
StaticMlgCameras::ReadCSVs
==============
*/

void __fastcall StaticMlgCameras::ReadCSVs(StaticMlgCameras *this)
{
  ?ReadCSVs@StaticMlgCameras@@QEAAXXZ(this);
}

/*
==============
StaticMlgCameras::WriteCamerasFile
==============
*/

void __fastcall StaticMlgCameras::WriteCamerasFile(StaticMlgCameras *this, bool specificCameras)
{
  ?WriteCamerasFile@StaticMlgCameras@@QEAAX_N@Z(this, specificCameras);
}

/*
==============
CgCompassSystemMP::IsVehicleMini
==============
*/

bool __fastcall CgCompassSystemMP::IsVehicleMini(CgCompassSystemMP *this, CompassType compassType)
{
  return ?IsVehicleMini@CgCompassSystemMP@@UEBA_NW4CompassType@@@Z(this, compassType);
}

/*
==============
CgCompassSystemMP::IsActorWithinFadeTime
==============
*/

bool __fastcall CgCompassSystemMP::IsActorWithinFadeTime(CgCompassSystemMP *this, const int *beginFadeTime)
{
  return ?IsActorWithinFadeTime@CgCompassSystemMP@@QEAA_NAEBH@Z(this, beginFadeTime);
}

/*
==============
CgCompassSystemMP::DrawPlanes
==============
*/

void __fastcall CgCompassSystemMP::DrawPlanes(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawPlanes@CgCompassSystemMP@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetCompassActor
==============
*/

CompassActor *__fastcall CgCompassSystemMP::GetCompassActor(CgCompassSystemMP *this, const int actorIndex)
{
  return ?GetCompassActor@CgCompassSystemMP@@UEAAPEAUCompassActor@@H@Z(this, actorIndex);
}

/*
==============
CgCompassSystemMP::DrawAreaMarker
==============
*/

void __fastcall CgCompassSystemMP::DrawAreaMarker(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, const int startTime, const int duration, const vec2_t position, const float radius, const GfxImage *image, bool isPixelCircle, LUIElement *element, lua_State *luaVM)
{
  ?DrawAreaMarker@CgCompassSystemMP@@IEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@HHTvec2_t@@MPEBUGfxImage@@1PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, startTime, duration, position, radius, image, isPixelCircle, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetRadarLine
==============
*/

void __fastcall CgCompassSystemMP::GetRadarLine(CgCompassSystemMP *this, float radarProgress, vec3_t *outLine)
{
  ?GetRadarLine@CgCompassSystemMP@@IEBAXMAEATvec3_t@@@Z(this, radarProgress, outLine);
}

/*
==============
CgCompassSystemMP::GetPlayerCompassColor
==============
*/

void __fastcall CgCompassSystemMP::GetPlayerCompassColor(CgCompassSystemMP *this, vec4_t *color, const cg_t *cgameGlob)
{
  ?GetPlayerCompassColor@CgCompassSystemMP@@MEBAXAEATvec4_t@@PEBVcg_t@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::DrawHeadIcons
==============
*/

void __fastcall CgCompassSystemMP::DrawHeadIcons(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawHeadIcons@CgCompassSystemMP@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetRadarLineEastWestPercentage
==============
*/

double __fastcall CgCompassSystemMP::GetRadarLineEastWestPercentage(CgCompassSystemMP *this, float radarProgress)
{
  double result; 

  *(float *)&result = ?GetRadarLineEastWestPercentage@CgCompassSystemMP@@IEBAMM@Z(this, radarProgress);
  return result;
}

/*
==============
CgCompassSystemMP::GetObjectiveCompassColor
==============
*/

void __fastcall CgCompassSystemMP::GetObjectiveCompassColor(CgCompassSystemMP *this, const vec3_t *origin, ObjectiveSide side, ObjectiveSide progressSide, ObjectiveBackground background, int entNum, vec4_t *newColor, vec4_t *backgroundColor, const vec4_t *color)
{
  ?GetObjectiveCompassColor@CgCompassSystemMP@@UEBAXAEBTvec3_t@@W4ObjectiveSide@@1W4ObjectiveBackground@@HAEATvec4_t@@3AEBT5@@Z(this, origin, side, progressSide, background, entNum, newColor, backgroundColor, color);
}

/*
==============
CgCompassSystemMP::ShutdownLocks
==============
*/

void __fastcall CgCompassSystemMP::ShutdownLocks(CgCompassSystemMP *this)
{
  ?ShutdownLocks@CgCompassSystemMP@@IEAAXXZ(this);
}

/*
==============
CgCompassSystemMP::ActorUpdateEnemyPos
==============
*/

void __fastcall CgCompassSystemMP::ActorUpdateEnemyPos(CgCompassSystemMP *this, CompassActorMP *const actor, const vec2_t *newPos)
{
  ?ActorUpdateEnemyPos@CgCompassSystemMP@@AEBAXQEAUCompassActorMP@@AEBTvec2_t@@@Z(this, actor, newPos);
}

/*
==============
CgCompassSystemMP::ComputeEnemyCompassColor
==============
*/

void __fastcall CgCompassSystemMP::ComputeEnemyCompassColor(CgCompassSystemMP *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *fadedColor)
{
  ?ComputeEnemyCompassColor@CgCompassSystemMP@@UEBAXPEBUclientInfo_t@@0AEATvec4_t@@@Z(this, myClientInfo, clientInfo, fadedColor);
}

/*
==============
CgCompassSystemMP::GetCompassCircleOutlineThickness
==============
*/

double __fastcall CgCompassSystemMP::GetCompassCircleOutlineThickness(CgCompassSystemMP *this)
{
  double result; 

  *(float *)&result = ?GetCompassCircleOutlineThickness@CgCompassSystemMP@@IEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystemMP::GetMLGSpectatorObjectiveIconColor
==============
*/

void __fastcall CgCompassSystemMP::GetMLGSpectatorObjectiveIconColor(CgCompassSystemMP *this, ObjectiveSide side, vec4_t *outIconColor, CgGlobalsMP *cgameGlobMP)
{
  ?GetMLGSpectatorObjectiveIconColor@CgCompassSystemMP@@QEBAXW4ObjectiveSide@@AEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, side, outIconColor, cgameGlobMP);
}

/*
==============
CgCompassSystemMP::SetRadarSweepEnabled
==============
*/

void __fastcall CgCompassSystemMP::SetRadarSweepEnabled(CgCompassSystemMP *this, const bool radarSweepEnabled)
{
  ?SetRadarSweepEnabled@CgCompassSystemMP@@QEAAX_N@Z(this, radarSweepEnabled);
}

/*
==============
CgCompassSystemMP::UpdatePingedActor
==============
*/

void __fastcall CgCompassSystemMP::UpdatePingedActor(CgCompassSystemMP *this, int clientNum)
{
  ?UpdatePingedActor@CgCompassSystemMP@@QEAAXH@Z(this, clientNum);
}

/*
==============
CgCompassSystemMP::GetFriendlyCompassColor
==============
*/

void __fastcall CgCompassSystemMP::GetFriendlyCompassColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  ?GetFriendlyCompassColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::GetEnemyCompassSecondaryLightColor
==============
*/

void __fastcall CgCompassSystemMP::GetEnemyCompassSecondaryLightColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  ?GetEnemyCompassSecondaryLightColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::GetFriendlyCompassSecondaryLightColor
==============
*/

void __fastcall CgCompassSystemMP::GetFriendlyCompassSecondaryLightColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  ?GetFriendlyCompassSecondaryLightColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::MapOffset
==============
*/

vec2_t __fastcall CgCompassSystemMP::MapOffset(CgCompassSystemMP *this)
{
  return ?MapOffset@CgCompassSystemMP@@MEBA?ATvec2_t@@XZ(this);
}

/*
==============
CgCompassSystemMP::SetCurrentFilters
==============
*/

void __fastcall CgCompassSystemMP::SetCurrentFilters(CgCompassSystemMP *this, bitarray<32> filters)
{
  ?SetCurrentFilters@CgCompassSystemMP@@UEAAXV?$bitarray@$0CA@@@@Z(this, filters);
}

/*
==============
CgCompassSystemMP::GetObjectiveScale
==============
*/

void __fastcall CgCompassSystemMP::GetObjectiveScale(CgCompassSystemMP *this, const ObjectiveView *obj, const int *objectiveIndex, float *scale)
{
  ?GetObjectiveScale@CgCompassSystemMP@@QEBAXPEBUObjectiveView@@AEBHAEAM@Z(this, obj, objectiveIndex, scale);
}

/*
==============
CgCompassSystemMP::MapShouldRotate
==============
*/

bool __fastcall CgCompassSystemMP::MapShouldRotate(CgCompassSystemMP *this)
{
  return ?MapShouldRotate@CgCompassSystemMP@@MEBA_NXZ(this);
}

/*
==============
CgCompassSystemMP::SetCompassActorIcon
==============
*/

void __fastcall CgCompassSystemMP::SetCompassActorIcon(CgCompassSystemMP *this, const int actorIndex, const ScriptableEventCompassIconDef *icon)
{
  ?SetCompassActorIcon@CgCompassSystemMP@@UEAAXHPEBUScriptableEventCompassIconDef@@@Z(this, actorIndex, icon);
}

/*
==============
CgCompassSystemMP::ComputeWorldToScreenScale
==============
*/

void __fastcall CgCompassSystemMP::ComputeWorldToScreenScale(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, LUIElement *element, lua_State *luaVM)
{
  ?ComputeWorldToScreenScale@CgCompassSystemMP@@IEAAXW4CompassType@@_NPEBUrectDef_s@@2MPEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, element, luaVM);
}

/*
==============
CgCompassSystemMP::ShutdownCompass
==============
*/

void __fastcall CgCompassSystemMP::ShutdownCompass(CgCompassSystemMP *this)
{
  ?ShutdownCompass@CgCompassSystemMP@@QEAAXXZ(this);
}

/*
==============
CgCompassSystemMP::GetFriendlyTimeout
==============
*/

int __fastcall CgCompassSystemMP::GetFriendlyTimeout(CgCompassSystemMP *this)
{
  return ?GetFriendlyTimeout@CgCompassSystemMP@@UEBAHXZ(this);
}

/*
==============
CgCompassSystemMP::DrawScriptableObjectives
==============
*/

void __fastcall CgCompassSystemMP::DrawScriptableObjectives(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawScriptableObjectives@CgCompassSystemMP@@QEBAXW4CompassType@@_N1PEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, largeMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::IsObjectiveMini
==============
*/

bool __fastcall CgCompassSystemMP::IsObjectiveMini(CgCompassSystemMP *this, CompassType compassType, ObjectiveBackground background)
{
  return ?IsObjectiveMini@CgCompassSystemMP@@UEBA_NW4CompassType@@W4ObjectiveBackground@@@Z(this, compassType, background);
}

/*
==============
CgCompassSystemMP::TurretSweep
==============
*/

void __fastcall CgCompassSystemMP::TurretSweep(CgCompassSystemMP *this, cg_t *const cgameGlob, CompassPortableRadarPing *const pingInfo, const float maxDist, const vec3_t *localUsersPosition)
{
  ?TurretSweep@CgCompassSystemMP@@AEAAXQEAVcg_t@@QEAUCompassPortableRadarPing@@MAEBTvec3_t@@@Z(this, cgameGlob, pingInfo, maxDist, localUsersPosition);
}

/*
==============
CgCompassSystemMP::DrawPortableRadar
==============
*/

void __fastcall CgCompassSystemMP::DrawPortableRadar(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  ?DrawPortableRadar@CgCompassSystemMP@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAUGfxImage@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, mapMask, element, luaVM);
}

/*
==============
CgCompassSystemMP::InitLocks
==============
*/

void __fastcall CgCompassSystemMP::InitLocks(CgCompassSystemMP *this)
{
  ?InitLocks@CgCompassSystemMP@@IEAAXXZ(this);
}

/*
==============
CgCompassSystemMP::DrawEnemies
==============
*/

void __fastcall CgCompassSystemMP::DrawEnemies(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawEnemies@CgCompassSystemMP@@QEAAXW4CompassType@@_N1PEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, largeMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetDefaultFriendlyCompassColor
==============
*/

void __fastcall CgCompassSystemMP::GetDefaultFriendlyCompassColor(CgCompassSystemMP *this, vec4_t *color)
{
  ?GetDefaultFriendlyCompassColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@@Z(this, color);
}

/*
==============
CgCompassSystemMP::DrawBigMapUAV
==============
*/

void __fastcall CgCompassSystemMP::DrawBigMapUAV(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawBigMapUAV@CgCompassSystemMP@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::DrawMinimapPlayerPing
==============
*/

void __fastcall CgCompassSystemMP::DrawMinimapPlayerPing(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawMinimapPlayerPing@CgCompassSystemMP@@QEAAXPEBUMinimapOptions@@PEBUrectDef_s@@1AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, minimapOptions, parentRect, rect, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetFriendlyCompassLightColor
==============
*/

void __fastcall CgCompassSystemMP::GetFriendlyCompassLightColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  ?GetFriendlyCompassLightColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::FindTurretInfo
==============
*/

CompassTurretMP *__fastcall CgCompassSystemMP::FindTurretInfo(CgCompassSystemMP *this, int entityNum)
{
  return ?FindTurretInfo@CgCompassSystemMP@@AEAAPEAUCompassTurretMP@@H@Z(this, entityNum);
}

/*
==============
CgCompassSystemMP::CompassTurretIsPingType
==============
*/

int __fastcall CgCompassSystemMP::CompassTurretIsPingType(const centity_t *cent)
{
  return ?CompassTurretIsPingType@CgCompassSystemMP@@SAHPEBUcentity_t@@@Z(cent);
}

/*
==============
CgCompassSystemMP::DrawText
==============
*/

void __fastcall CgCompassSystemMP::DrawText(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *rect, const char *locString, int fontIndex, float x, float y, float h, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawText@CgCompassSystemMP@@QEBAXW4CompassType@@PEBUrectDef_s@@PEBDHMMMAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, rect, locString, fontIndex, x, y, h, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::DrawItemsLayer
==============
*/

void __fastcall CgCompassSystemMP::DrawItemsLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawItemsLayer@CgCompassSystemMP@@UEAAXPEBUMinimapOptions@@PEBUrectDef_s@@1AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, minimapOptions, parentRect, rect, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetLastShotFireAmount
==============
*/

double __fastcall CgCompassSystemMP::GetLastShotFireAmount(CgCompassSystemMP *this, const int *lastShotTime)
{
  double result; 

  *(float *)&result = ?GetLastShotFireAmount@CgCompassSystemMP@@QEAAMAEBH@Z(this, lastShotTime);
  return result;
}

/*
==============
CgCompassSystemMP::CreateDecoyActor
==============
*/

void __fastcall CgCompassSystemMP::CreateDecoyActor(CgCompassSystemMP *this, const cg_t *const cgameGlob, const vec3_t *pos, const __int16 *entityNum, const int *numDecoys, const float *magnitude)
{
  ?CreateDecoyActor@CgCompassSystemMP@@QEAAXQEBVcg_t@@AEBTvec3_t@@AEBFAEBHAEBM@Z(this, cgameGlob, pos, entityNum, numDecoys, magnitude);
}

/*
==============
CgCompassSystemMP::UpdatePortableRadarPings
==============
*/

void __fastcall CgCompassSystemMP::UpdatePortableRadarPings(CgCompassSystemMP *this)
{
  ?UpdatePortableRadarPings@CgCompassSystemMP@@AEAAXXZ(this);
}

/*
==============
CgCompassSystemMP::GetObjectiveShouldRender
==============
*/

bool __fastcall CgCompassSystemMP::GetObjectiveShouldRender(CgCompassSystemMP *this, objectiveState_t state, ObjectiveFlags flags, bool isForCompass, unsigned int iconIndex, const GfxImage **outIcon)
{
  return ?GetObjectiveShouldRender@CgCompassSystemMP@@QEBA_NW4objectiveState_t@@W4ObjectiveFlags@@_NIPEAPEBUGfxImage@@@Z(this, state, flags, isForCompass, iconIndex, outIcon);
}

/*
==============
CgCompassSystemMP::GetEnemyCompassColor
==============
*/

void __fastcall CgCompassSystemMP::GetEnemyCompassColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  ?GetEnemyCompassColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::GetPartyCompassColor
==============
*/

void __fastcall CgCompassSystemMP::GetPartyCompassColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  ?GetPartyCompassColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::GetObjectiveCompassOrigin
==============
*/

void __fastcall CgCompassSystemMP::GetObjectiveCompassOrigin(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const unsigned int entNum, const unsigned int scriptableIndex, const ObjectiveFlags flags, const vec3_t *objOrigin, float yawAngle, SecureVec3 *outOrigin, bool *useAlternate, float *yawTo)
{
  ?GetObjectiveCompassOrigin@CgCompassSystemMP@@QEBAXW4CompassType@@_NIIW4ObjectiveFlags@@Tvec3_t@@MAEAUSecureVec3@@AEA_NAEAM@Z(this, compassType, cropPartialMap, entNum, scriptableIndex, flags, objOrigin, yawAngle, outOrigin, useAlternate, yawTo);
}

/*
==============
CgCompassSystemMP::GetRange
==============
*/

double __fastcall CgCompassSystemMP::GetRange(CgCompassSystemMP *this)
{
  double result; 

  *(float *)&result = ?GetRange@CgCompassSystemMP@@UEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystemMP::GetActorPingFadeAmount
==============
*/

double __fastcall CgCompassSystemMP::GetActorPingFadeAmount(CgCompassSystemMP *this, const int *beginRadarFadeTime)
{
  double result; 

  *(float *)&result = ?GetActorPingFadeAmount@CgCompassSystemMP@@QEAAMAEBH@Z(this, beginRadarFadeTime);
  return result;
}

/*
==============
CgCompassSystemMP::AddTurretWeaponPingInfo
==============
*/

void __fastcall CgCompassSystemMP::AddTurretWeaponPingInfo(CgCompassSystemMP *this, const centity_t *cent, const vec3_t *origin, int msec)
{
  ?AddTurretWeaponPingInfo@CgCompassSystemMP@@AEAAXPEBUcentity_t@@AEBTvec3_t@@H@Z(this, cent, origin, msec);
}

/*
==============
CgCompassSystemMP::GetFriendlyCompassSecondaryColor
==============
*/

void __fastcall CgCompassSystemMP::GetFriendlyCompassSecondaryColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  ?GetFriendlyCompassSecondaryColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::DrawDecoys
==============
*/

void __fastcall CgCompassSystemMP::DrawDecoys(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawDecoys@CgCompassSystemMP@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetUAVPingIntervalTime
==============
*/

int __fastcall CgCompassSystemMP::GetUAVPingIntervalTime(CgCompassSystemMP *this, const cg_t *const cgameGlob)
{
  return ?GetUAVPingIntervalTime@CgCompassSystemMP@@AEBAHQEBVcg_t@@@Z(this, cgameGlob);
}

/*
==============
CgCompassSystemMP::GetWorldToScreenScale
==============
*/

double __fastcall CgCompassSystemMP::GetWorldToScreenScale(CgCompassSystemMP *this)
{
  double result; 

  *(float *)&result = ?GetWorldToScreenScale@CgCompassSystemMP@@IEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystemMP::GetObjectiveClippedPos
==============
*/

bool __fastcall CgCompassSystemMP::GetObjectiveClippedPos(CgCompassSystemMP *this, CompassType compassType, bool useAlternate, bool cropPartialMap, const rectDef_s *scaledRect, const float boundsRadius, const vec2_t *yawVector, const SecureVec3 *playerPos, const vec3_t *origin, const vec3_t *prevOrigin, const float centerX, float centerY, vec2_t *out_xy, vec2_t *out_xyClipped)
{
  return ?GetObjectiveClippedPos@CgCompassSystemMP@@IEBA_NW4CompassType@@_N1PEBUrectDef_s@@MAEBTvec2_t@@AEBUSecureVec3@@AEBTvec3_t@@5MMAEAT4@6@Z(this, compassType, useAlternate, cropPartialMap, scaledRect, boundsRadius, yawVector, playerPos, origin, prevOrigin, centerX, centerY, out_xy, out_xyClipped);
}

/*
==============
CgCompassSystemMP::GetTeamCompassColor
==============
*/

bool __fastcall CgCompassSystemMP::GetTeamCompassColor(CgCompassSystemMP *this, CgGlobalsMP *cgameGlob, const team_t team, vec4_t *color)
{
  return ?GetTeamCompassColor@CgCompassSystemMP@@QEBA_NPEAVCgGlobalsMP@@W4team_t@@AEATvec4_t@@@Z(this, cgameGlob, team, color);
}

/*
==============
CgCompassSystemMP::IsVehicleFiltered
==============
*/

bool __fastcall CgCompassSystemMP::IsVehicleFiltered(CgCompassSystemMP *this, CompassType compassType, const centity_t *cent)
{
  return ?IsVehicleFiltered@CgCompassSystemMP@@UEBA_NW4CompassType@@PEBUcentity_t@@@Z(this, compassType, cent);
}

/*
==============
CgCompassSystemMP::GetCompassActorCount
==============
*/

int __fastcall CgCompassSystemMP::GetCompassActorCount(CgCompassSystemMP *this)
{
  return ?GetCompassActorCount@CgCompassSystemMP@@UEBAHXZ(this);
}

/*
==============
CgCompassSystemMP::GetDrawnItemScalerRadiusAndMultiplier
==============
*/

void __fastcall CgCompassSystemMP::GetDrawnItemScalerRadiusAndMultiplier(CgCompassSystemMP *this, LocationSelectorType locationSelectorType, float *outSelectorRadius, float *outLocationSelectorSizeMultiplier)
{
  ?GetDrawnItemScalerRadiusAndMultiplier@CgCompassSystemMP@@UEBAXW4LocationSelectorType@@AEAM1@Z(this, locationSelectorType, outSelectorRadius, outLocationSelectorSizeMultiplier);
}

/*
==============
CgCompassSystemMP::IsItemFiltered
==============
*/

bool __fastcall CgCompassSystemMP::IsItemFiltered(CgCompassSystemMP *this, TacMapFilterFlags flag)
{
  return ?IsItemFiltered@CgCompassSystemMP@@UEBA_NW4TacMapFilterFlags@@@Z(this, flag);
}

/*
==============
CgCompassSystemMP::GetObjectiveIconSizeDefault
==============
*/

ObjectiveIconSize __fastcall CgCompassSystemMP::GetObjectiveIconSizeDefault(CgCompassSystemMP *this, ObjectiveFlags flags, ObjectiveIconSize size)
{
  return ?GetObjectiveIconSizeDefault@CgCompassSystemMP@@IEBA?AW4ObjectiveIconSize@@W4ObjectiveFlags@@W42@@Z(this, flags, size);
}

/*
==============
CompassDecoyActorMP::CompassDecoyActorMP
==============
*/

void __fastcall CompassDecoyActorMP::CompassDecoyActorMP(CompassDecoyActorMP *this)
{
  ??0CompassDecoyActorMP@@QEAA@XZ(this);
}

/*
==============
CgCompassSystemMP::UpdateScrambler
==============
*/

void __fastcall CgCompassSystemMP::UpdateScrambler(CgCompassSystemMP *this, const unsigned int _scramblerEntNum, const unsigned int ownerEntNum, const vec3_t *origin, const JammingType jammingType)
{
  ?UpdateScrambler@CgCompassSystemMP@@QEAAXIIAEBTvec3_t@@W4JammingType@@@Z(this, _scramblerEntNum, ownerEntNum, origin, jammingType);
}

/*
==============
CgCompassSystemMP::GetDecoyCompassActor
==============
*/

CompassDecoyActorMP *__fastcall CgCompassSystemMP::GetDecoyCompassActor(CgCompassSystemMP *this, const int actorIndex)
{
  return ?GetDecoyCompassActor@CgCompassSystemMP@@QEAAPEAUCompassDecoyActorMP@@H@Z(this, actorIndex);
}

/*
==============
CgCompassSystemMP::DrawSelectionCursor
==============
*/

void __fastcall CgCompassSystemMP::DrawSelectionCursor(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, Material *material, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawSelectionCursor@CgCompassSystemMP@@QEBAXW4CompassType@@PEBUrectDef_s@@1PEAUMaterial@@AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, parentRect, rect, material, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::CgCompassSystemMP
==============
*/

void __fastcall CgCompassSystemMP::CgCompassSystemMP(CgCompassSystemMP *this, const LocalClientNum_t localClientNum)
{
  ??0CgCompassSystemMP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgCompassSystemMP::GetDebugCamSelectedIndex
==============
*/

int __fastcall CgCompassSystemMP::GetDebugCamSelectedIndex()
{
  return ?GetDebugCamSelectedIndex@CgCompassSystemMP@@SAHXZ();
}

/*
==============
CgCompassSystemMP::ModifyObjectiveScaleForPos
==============
*/

void __fastcall CgCompassSystemMP::ModifyObjectiveScaleForPos(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *scaledRect, const vec2_t *xy, float *inOut_scale)
{
  ?ModifyObjectiveScaleForPos@CgCompassSystemMP@@QEBAXW4CompassType@@AEBUrectDef_s@@AEBTvec2_t@@AEAM@Z(this, compassType, scaledRect, xy, inOut_scale);
}

/*
==============
CgCompassSystemMP::GetCompassScaler
==============
*/

double __fastcall CgCompassSystemMP::GetCompassScaler(CgCompassSystemMP *this, CompassType compassType)
{
  double result; 

  *(float *)&result = ?GetCompassScaler@CgCompassSystemMP@@UEBAMW4CompassType@@@Z(this, compassType);
  return result;
}

/*
==============
CgCompassSystemMP::SetLastStandEnabled
==============
*/

void __fastcall CgCompassSystemMP::SetLastStandEnabled(CgCompassSystemMP *this, bool enabled)
{
  ?SetLastStandEnabled@CgCompassSystemMP@@QEAAX_N@Z(this, enabled);
}

/*
==============
CgCompassSystemMP::GetGhostAlphaScale
==============
*/

double __fastcall CgCompassSystemMP::GetGhostAlphaScale(CgCompassSystemMP *this)
{
  double result; 

  *(float *)&result = ?GetGhostAlphaScale@CgCompassSystemMP@@MEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystemMP::GetRadarLineMargin
==============
*/

double __fastcall CgCompassSystemMP::GetRadarLineMargin(CgCompassSystemMP *this)
{
  double result; 

  *(float *)&result = ?GetRadarLineMargin@CgCompassSystemMP@@IEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystemMP::AddClientWeaponPingInfo
==============
*/

void __fastcall CgCompassSystemMP::AddClientWeaponPingInfo(CgCompassSystemMP *this, const centity_t *cent, const vec3_t *origin, int msec)
{
  ?AddClientWeaponPingInfo@CgCompassSystemMP@@AEAAXPEBUcentity_t@@AEBTvec3_t@@H@Z(this, cent, origin, msec);
}

/*
==============
CgCompassSystemMP::DrawObjectiveHolders
==============
*/

void __fastcall CgCompassSystemMP::DrawObjectiveHolders(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, LUIElement *element, lua_State *luaVM)
{
  ?DrawObjectiveHolders@CgCompassSystemMP@@QEAAXW4CompassType@@_N1PEBUrectDef_s@@2MPEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, largeMap, parentRect, rect, boundsRadius, element, luaVM);
}

/*
==============
CgCompassSystemMP::MapRotationFactor
==============
*/

double __fastcall CgCompassSystemMP::MapRotationFactor(CgCompassSystemMP *this)
{
  double result; 

  *(float *)&result = ?MapRotationFactor@CgCompassSystemMP@@MEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystemMP::DrawGlitchOnMinimap
==============
*/

void __fastcall CgCompassSystemMP::DrawGlitchOnMinimap(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  ?DrawGlitchOnMinimap@CgCompassSystemMP@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2AEBTvec4_t@@PEAUGfxImage@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, color, mapMask, element, luaVM);
}

/*
==============
CgCompassSystemMP::CalculateAreaMarker
==============
*/

bool __fastcall CgCompassSystemMP::CalculateAreaMarker(CgCompassSystemMP *this, const CompassType compassType, const bool cropPartialMap, const rectDef_s *const parentRect, const rectDef_s *const rect, const float boundsRadius, const vec2_t position, const float radius, const bool isPixelShapeCircle, vec2_t *out_s1t1, vec2_t *out_s2t2, vec4_t (*outVerts)[4])
{
  return ?CalculateAreaMarker@CgCompassSystemMP@@IEAA_NW4CompassType@@_NQEBUrectDef_s@@2MTvec2_t@@M1AEAT4@4AEAY03Tvec4_t@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, position, radius, isPixelShapeCircle, out_s1t1, out_s2t2, outVerts);
}

/*
==============
CgCompassSystemMP::DrawObjective
==============
*/

void __fastcall CgCompassSystemMP::DrawObjective(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *rect, vec2_t *xy, vec2_t *xyClipped, bool clipped, ObjectiveFlags flags, ObjectiveIconSize size, const GfxImage *background, float yawTo, float scale, float bgScale, const GfxImage *icon, const vec4_t *color, const vec4_t *bgColor, LUIElement *element, lua_State *luaVM)
{
  ?DrawObjective@CgCompassSystemMP@@IEBAXW4CompassType@@PEBUrectDef_s@@AEATvec2_t@@2_NW4ObjectiveFlags@@W4ObjectiveIconSize@@PEBUGfxImage@@MMM6AEBTvec4_t@@7PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, rect, xy, xyClipped, clipped, flags, size, background, yawTo, scale, bgScale, icon, color, bgColor, element, luaVM);
}

/*
==============
CgCompassSystemMP::DrawTurrets
==============
*/

void __fastcall CgCompassSystemMP::DrawTurrets(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawTurrets@CgCompassSystemMP@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetActorFadeAmount
==============
*/

double __fastcall CgCompassSystemMP::GetActorFadeAmount(CgCompassSystemMP *this, const int *beginFadeTime)
{
  double result; 

  *(float *)&result = ?GetActorFadeAmount@CgCompassSystemMP@@QEAAMAEBH@Z(this, beginFadeTime);
  return result;
}

/*
==============
CgCompassSystemMP::TriggerPortableRadarPing
==============
*/

int __fastcall CgCompassSystemMP::TriggerPortableRadarPing(CgCompassSystemMP *this, const cg_t *const cgameGlob, const vec3_t *pos, const int duration, const float radius, unsigned int perkImmunityOverrideIndex)
{
  return ?TriggerPortableRadarPing@CgCompassSystemMP@@QEAAHQEBVcg_t@@AEBTvec3_t@@HMI@Z(this, cgameGlob, pos, duration, radius, perkImmunityOverrideIndex);
}

/*
==============
CgCompassSystemMP::PingEnemyPlayers
==============
*/

void __fastcall CgCompassSystemMP::PingEnemyPlayers(CgCompassSystemMP *this, float oldRadarProgress, float newRadarProgress)
{
  ?PingEnemyPlayers@CgCompassSystemMP@@AEAAXMM@Z(this, oldRadarProgress, newRadarProgress);
}

/*
==============
CgCompassSystemMP::GetObjectiveImage
==============
*/

const GfxImage *__fastcall CgCompassSystemMP::GetObjectiveImage(CgCompassSystemMP *this)
{
  return ?GetObjectiveImage@CgCompassSystemMP@@QEAAPEBUGfxImage@@XZ(this);
}

/*
==============
CgCompassSystemMP::DrawMissiles
==============
*/

void __fastcall CgCompassSystemMP::DrawMissiles(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawMissiles@CgCompassSystemMP@@AEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::UpdateMissileInfo
==============
*/

void __fastcall CgCompassSystemMP::UpdateMissileInfo(CgCompassSystemMP *this, const centity_t *cent)
{
  ?UpdateMissileInfo@CgCompassSystemMP@@QEAAXPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgCompassSystemMP::DrawPlayerCalloutMarkerPings
==============
*/

void __fastcall CgCompassSystemMP::DrawPlayerCalloutMarkerPings(CgCompassSystemMP *this, bool bracketPass, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawPlayerCalloutMarkerPings@CgCompassSystemMP@@QEBAX_NW4CompassType@@0PEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, bracketPass, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::ActorUpdatePosAndElevation
==============
*/

void __fastcall CgCompassSystemMP::ActorUpdatePosAndElevation(CgCompassSystemMP *this, CompassActorMP *actor, const vec2_t *newPos, const CompassEnemyElevation elevation, const centity_t *actorEntity)
{
  ?ActorUpdatePosAndElevation@CgCompassSystemMP@@IEBAXPEAUCompassActorMP@@AEBTvec2_t@@W4CompassEnemyElevation@@PEBUcentity_t@@@Z(this, actor, newPos, elevation, actorEntity);
}

/*
==============
CgCompassSystemMP::DrawMLGSpectatorObjective
==============
*/

void __fastcall CgCompassSystemMP::DrawMLGSpectatorObjective(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *rect, vec2_t *xy, vec2_t *xyClipped, bool clipped, ObjectiveFlags flags, float yawTo, float scale, float bgScale, const GfxImage *icon, const vec4_t *color, const vec4_t *bgColorLeft, const vec4_t *bgColorRight, const vec4_t *bgColorLeftLight, const vec4_t *bgColorRightLight, LUIElement *element, lua_State *luaVM)
{
  ?DrawMLGSpectatorObjective@CgCompassSystemMP@@QEBAXW4CompassType@@PEBUrectDef_s@@AEATvec2_t@@2_NW4ObjectiveFlags@@MMMPEBUGfxImage@@AEBTvec4_t@@6666PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, rect, xy, xyClipped, clipped, flags, yawTo, scale, bgScale, icon, color, bgColorLeft, bgColorRight, bgColorLeftLight, bgColorRightLight, element, luaVM);
}

/*
==============
CgCompassSystemMP::IsActorWithinPingTime
==============
*/

bool __fastcall CgCompassSystemMP::IsActorWithinPingTime(CgCompassSystemMP *this, const int *beginRadarFadeTime)
{
  return ?IsActorWithinPingTime@CgCompassSystemMP@@QEAA_NAEBH@Z(this, beginRadarFadeTime);
}

/*
==============
CgCompassSystemMP::DrawGridLabels
==============
*/

void __fastcall CgCompassSystemMP::DrawGridLabels(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawGridLabels@CgCompassSystemMP@@QEAAXW4CompassType@@PEBUrectDef_s@@1AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, parentRect, rect, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::DrawPlayerLayer
==============
*/

void __fastcall CgCompassSystemMP::DrawPlayerLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawPlayerLayer@CgCompassSystemMP@@UEAAXPEBUMinimapOptions@@PEBUrectDef_s@@1AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, minimapOptions, parentRect, rect, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::DrawPlayerMP
==============
*/

void __fastcall CgCompassSystemMP::DrawPlayerMP(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawPlayerMP@CgCompassSystemMP@@QEAAXW4CompassType@@_N1PEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, largeMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
StaticMlgCameras::SetCameraToCurrentPosition
==============
*/

void __fastcall StaticMlgCameras::SetCameraToCurrentPosition(StaticMlgCameras *this, int camIndex, const playerState_s *ps)
{
  ?SetCameraToCurrentPosition@StaticMlgCameras@@QEAAXHPEBUplayerState_s@@@Z(this, camIndex, ps);
}

/*
==============
CgCompassSystemMP::ActorSweep
==============
*/

void __fastcall CgCompassSystemMP::ActorSweep(CgCompassSystemMP *this, cg_t *const cgameGlob, CompassPortableRadarPing *const pingInfo, const float maxDist, const vec3_t *localUsersPosition)
{
  ?ActorSweep@CgCompassSystemMP@@AEAAXQEAVcg_t@@QEAUCompassPortableRadarPing@@MAEBTvec3_t@@@Z(this, cgameGlob, pingInfo, maxDist, localUsersPosition);
}

/*
==============
CgCompassSystemMP::ActorUpdatePos
==============
*/

void __fastcall CgCompassSystemMP::ActorUpdatePos(CgCompassSystemMP *this, CompassActorMP *actor, const vec3_t *newPos, const centity_t *actorEntity)
{
  ?ActorUpdatePos@CgCompassSystemMP@@IEBAXPEAUCompassActorMP@@AEBTvec3_t@@PEBUcentity_t@@@Z(this, actor, newPos, actorEntity);
}

/*
==============
CgCompassSystemMP::GetPortableRadarForEnt
==============
*/

CompassPortableRadar *__fastcall CgCompassSystemMP::GetPortableRadarForEnt(CgCompassSystemMP *this, const int radarEntNum)
{
  return ?GetPortableRadarForEnt@CgCompassSystemMP@@AEAAPEAUCompassPortableRadar@@H@Z(this, radarEntNum);
}

/*
==============
CgCompassSystemMP::UpdatePortableRadar
==============
*/

void __fastcall CgCompassSystemMP::UpdatePortableRadar(CgCompassSystemMP *this, const int radarEntNum, const vec3_t *origin)
{
  ?UpdatePortableRadar@CgCompassSystemMP@@QEAAXHAEBTvec3_t@@@Z(this, radarEntNum, origin);
}

/*
==============
CgCompassSystemMP::GetBigMapRange
==============
*/

double __fastcall CgCompassSystemMP::GetBigMapRange(CgCompassSystemMP *this, bool useExtendedRange)
{
  double result; 

  *(float *)&result = ?GetBigMapRange@CgCompassSystemMP@@IEBAM_N@Z(this, useExtendedRange);
  return result;
}

/*
==============
CgCompassSystemMP::DrawMLGCameras
==============
*/

void __fastcall CgCompassSystemMP::DrawMLGCameras(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawMLGCameras@CgCompassSystemMP@@QEBAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::InitCompass
==============
*/

void __fastcall CgCompassSystemMP::InitCompass(CgCompassSystemMP *this)
{
  ?InitCompass@CgCompassSystemMP@@QEAAXXZ(this);
}

/*
==============
CgCompassSystemMP::GetDefaultEnemyCompassColor
==============
*/

void __fastcall CgCompassSystemMP::GetDefaultEnemyCompassColor(CgCompassSystemMP *this, vec4_t *color)
{
  ?GetDefaultEnemyCompassColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@@Z(this, color);
}

/*
==============
CgCompassSystemMP::GetCroppedMapZoom
==============
*/

double __fastcall CgCompassSystemMP::GetCroppedMapZoom(CgCompassSystemMP *this)
{
  double result; 

  *(float *)&result = ?GetCroppedMapZoom@CgCompassSystemMP@@MEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystemMP::DrawPlayerPointers
==============
*/

void __fastcall CgCompassSystemMP::DrawPlayerPointers(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawPlayerPointers@CgCompassSystemMP@@QEBAXW4CompassType@@_N1PEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, largeMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::DrawOthersLayer
==============
*/

void __fastcall CgCompassSystemMP::DrawOthersLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawOthersLayer@CgCompassSystemMP@@UEAAXPEBUMinimapOptions@@PEBUrectDef_s@@1AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, minimapOptions, parentRect, rect, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetObjectiveBackgroundImage
==============
*/

const GfxImage *__fastcall CgCompassSystemMP::GetObjectiveBackgroundImage(CgCompassSystemMP *this, ObjectiveBackground background, int elevation)
{
  return ?GetObjectiveBackgroundImage@CgCompassSystemMP@@MEBAPEBUGfxImage@@W4ObjectiveBackground@@H@Z(this, background, elevation);
}

/*
==============
CgCompassSystemMP::GetEnemyCompassSecondaryColor
==============
*/

void __fastcall CgCompassSystemMP::GetEnemyCompassSecondaryColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  ?GetEnemyCompassSecondaryColor@CgCompassSystemMP@@QEBAXAEATvec4_t@@PEAVCgGlobalsMP@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemMP::ComputeFriendlyCompassColor
==============
*/

void __fastcall CgCompassSystemMP::ComputeFriendlyCompassColor(CgCompassSystemMP *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *fadedColor)
{
  ?ComputeFriendlyCompassColor@CgCompassSystemMP@@UEBAXPEBUclientInfo_t@@0AEATvec4_t@@@Z(this, myClientInfo, clientInfo, fadedColor);
}

/*
==============
CgCompassSystemMP::DrawFriendlies
==============
*/

void __fastcall CgCompassSystemMP::DrawFriendlies(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawFriendlies@CgCompassSystemMP@@QEAAXW4CompassType@@_N1PEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, largeMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::GetDrawnItemScaler
==============
*/

double __fastcall CgCompassSystemMP::GetDrawnItemScaler(CgCompassSystemMP *this, CompassType compassType, LocationSelectorType locationSelectorType, bool useDirection)
{
  double result; 

  *(float *)&result = ?GetDrawnItemScaler@CgCompassSystemMP@@UEBAMW4CompassType@@W4LocationSelectorType@@_N@Z(this, compassType, locationSelectorType, useDirection);
  return result;
}

/*
==============
CgCompassSystemMP::CgCompassSystemMP
==============
*/
void CgCompassSystemMP::CgCompassSystemMP(CgCompassSystemMP *this, const LocalClientNum_t localClientNum)
{
  CompassActorMP *m_compassActors; 
  __int64 v4; 
  CompassDecoyActorMP *m_compassDecoyActors; 
  __int64 v6; 
  int *p_scramblerEntNum; 
  __int64 v8; 

  this->m_localClientNum = localClientNum;
  *(_QWORD *)&this->m_compassPlayerYaw = 0i64;
  *(_WORD *)&this->m_compassMirrorLeftRight = 0;
  this->m_currentCompassType = COMPASS_TYPE_FULL;
  this->m_currentZoomLevel = 1.0;
  this->m_PreventZoom = 1;
  this->m_minimapCenterTile = -1;
  this->m_minimapTileFlags = 0;
  this->m_tacmapCenterTile = -1;
  *(_WORD *)&this->m_exceededMinDragDistance = 256;
  *(_QWORD *)&this->m_tacmapRectangle.x = 0i64;
  *(_QWORD *)&this->m_tacmapRectangle.w = 0i64;
  this->m_compassPlayerForward.v[1] = 1.0;
  this->m_tacmapLastCursorPosition = 0i64;
  this->m_initialDragPosition = 0i64;
  this->m_tacmapMapCenter.v[0] = 0.5;
  this->m_tacmapMapCenter.v[1] = 0.5;
  memset_0(this->m_minimapTileImages, 0, sizeof(this->m_minimapTileImages));
  memset_0(this->m_tacpmapTileImages, 0, sizeof(this->m_tacpmapTileImages));
  this->__vftable = (CgCompassSystemMP_vtbl *)&CgCompassSystemMP::`vftable';
  m_compassActors = this->m_compassActors;
  v4 = 256i64;
  do
  {
    CompassActorMP::CompassActorMP(m_compassActors++);
    --v4;
  }
  while ( v4 );
  this->m_scramblersUpdated = 0;
  m_compassDecoyActors = this->m_compassDecoyActors;
  v6 = 15i64;
  do
  {
    CompassDecoyActorMP::CompassDecoyActorMP(m_compassDecoyActors++);
    --v6;
  }
  while ( v6 );
  this->m_isBigMapMinimap = 0;
  *(_QWORD *)&this->m_bigMapRange = 0i64;
  this->m_bigMapTabletRange = 0.0;
  this->m_compassPortableRadarList[0].entIndex = 2047;
  this->m_compassPortableRadarList[1].entIndex = 2047;
  this->m_compassPortableRadarList[2].entIndex = 2047;
  this->m_compassPortableRadarList[3].entIndex = 2047;
  p_scramblerEntNum = &this->m_compassScramblers[0][0].scramblerEntNum;
  v8 = 992i64;
  do
  {
    *p_scramblerEntNum = 2047;
    p_scramblerEntNum += 4;
    --v8;
  }
  while ( v8 );
}

/*
==============
CompassDecoyActorMP::CompassDecoyActorMP
==============
*/
void CompassDecoyActorMP::CompassDecoyActorMP(CompassDecoyActorMP *this)
{
  __int64 v2; 

  this->pingTime = -1;
  v2 = 0i64;
  __asm
  {
    vmovsd  xmm0, [rsp+18h+var_18]
    vmovsd  qword ptr [rcx+0Ch], xmm0
  }
  this->pos.v[2] = 0.0;
  *(_QWORD *)&this->beginFadeTime = 0i64;
}

/*
==============
CgCompassSystemMP::ActorSweep
==============
*/

void __fastcall CgCompassSystemMP::ActorSweep(CgCompassSystemMP *this, cg_t *const cgameGlob, CompassPortableRadarPing *const pingInfo, double maxDist)
{
  int v13; 
  __int64 v14; 
  char v18; 
  bool v29; 
  bool v30; 
  __int64 v49; 
  __int64 v50; 
  vec3_t pos; 
  CgSoundSystemMP *SoundSystemMP; 
  vec3_t v53; 
  __int64 v54; 
  char v55; 
  void *retaddr; 

  _RAX = &retaddr;
  v54 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmm8, xmm3
  }
  SoundSystemMP = CgSoundSystemMP::GetSoundSystemMP((const LocalClientNum_t)cgameGlob->localClientNum);
  v13 = 0;
  v14 = 0i64;
  _RBX = &this->m_compassActors[0].lastPosZ;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm9, cs:__real@40000000
  }
  do
  {
    if ( (unsigned int)v13 >= 0x100 )
    {
      LODWORD(v50) = 256;
      LODWORD(v49) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1713, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassActors ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_compassActors )\n\t%i not in [0, %i)", v49, v50) )
        __debugbreak();
    }
    if ( (*(_DWORD *)&_RBX[-6].zIsValid & 3) == 1 )
    {
      if ( _RBX->zIsValid )
      {
        CompassActor_GetLastPosValue((const CompassActor *)&_RBX[-6], &pos);
      }
      else
      {
        CompassActor_GetLastPosValue((const CompassActor *)&_RBX[-6], &v53);
        *(_QWORD *)pos.v = *(_QWORD *)v53.v;
        v18 = 0;
        memset(&v53, 0, sizeof(v53));
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0E8h+pos]
        vsubss  xmm4, xmm0, dword ptr [r14]
        vmovss  xmm1, dword ptr [rsp+0E8h+pos+4]
        vsubss  xmm2, xmm1, dword ptr [r14+4]
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm3, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcomiss xmm2, xmm8
      }
      if ( v18 )
      {
        _RDI = DCONST_DVARFLT_bg_compassPortableRadarMinVelocity;
        if ( !DCONST_DVARFLT_bg_compassPortableRadarMinVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarMinVelocity") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm
        {
          vmovss  xmm6, dword ptr [rdi+28h]
          vucomiss xmm6, xmm7
        }
        if ( v29 )
          goto LABEL_28;
        v29 = _RBX[55].elevation == COMPASSENEMY_ELEVATION_LEVEL;
        if ( _RBX[55].elevation == COMPASSENEMY_ELEVATION_LEVEL )
        {
          v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1735, ASSERT_TYPE_ASSERT, "(minVelo == 0.0f || actor->lastVelValid)", (const char *)&queryFormat, "minVelo == 0.0f || actor->lastVelValid");
          v29 = !v30;
          if ( v30 )
            __debugbreak();
        }
        __asm { vcomiss xmm6, dword ptr [rbx+50h] }
        if ( v29 )
        {
LABEL_28:
          if ( !pingInfo->actorPinged[v14] )
          {
            pingInfo->actorPinged[v14] = 1;
            if ( CG_CompassMP_RadarPingEnemyPlayer((CompassActorMP *)&_RBX[-6], cgameGlob->time, pingInfo->perkImmunityOverrideIndex) )
            {
              if ( !_RBX->zIsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1745, ASSERT_TYPE_ASSERT, "(actor->lastPosZ.zIsValid)", (const char *)&queryFormat, "actor->lastPosZ.zIsValid") )
                __debugbreak();
              __asm
              {
                vmulss  xmm5, xmm9, dword ptr [r14+14h]
                vmovss  xmm1, dword ptr [rsp+0E8h+pos]
                vsubss  xmm3, xmm1, dword ptr [r12]
                vmovss  xmm0, dword ptr [rsp+0E8h+pos+4]
                vsubss  xmm2, xmm0, dword ptr [r12+4]
                vmovss  xmm1, dword ptr [rsp+0E8h+pos+8]
                vsubss  xmm4, xmm1, dword ptr [r12+8]
                vmulss  xmm2, xmm2, xmm2
                vmulss  xmm0, xmm3, xmm3
                vaddss  xmm3, xmm2, xmm0
                vmulss  xmm1, xmm4, xmm4
                vaddss  xmm2, xmm3, xmm1
                vsqrtss xmm0, xmm2, xmm2
                vcomiss xmm0, xmm5
              }
            }
          }
        }
      }
    }
    ++v13;
    ++v14;
    _RBX += 68;
  }
  while ( v13 < 248 );
  memset(&pos, 0, sizeof(pos));
  _R11 = &v55;
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
CgCompassSystemMP::ActorUpdateEnemyPos
==============
*/
void CgCompassSystemMP::ActorUpdateEnemyPos(CgCompassSystemMP *this, CompassActorMP *const actor, const vec2_t *newPos)
{
  CgGlobalsMP *LocalClientGlobals; 
  vec2_t outPos; 
  __int64 v39; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  v39 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1121, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  _RBX = LocalClientGlobals;
  if ( LocalClientGlobals->predictedPlayerState.radarMode == RADAR_MODE_CONSTANT )
  {
    CG_CompassMP_RadarPingEnemyPlayer(actor, LocalClientGlobals->time, 0x44u);
  }
  else if ( !this->m_isBigMapMinimap && CgCompassSystemMP::IsRadarSweepEnabled(this, LocalClientGlobals) && actor->lastUpdate > _RBX->time - 500 )
  {
    CompassActor_GetLastPos(actor, &outPos);
    __asm { vmovss  xmm7, dword ptr [rbx+0B39B4h] }
    _RDI = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    *(double *)&_XMM0 = CgCompassSystemMP::GetRadarLineMargin(this);
    __asm
    {
      vmovss  xmm8, dword ptr [rdi+4A004h]
      vmovss  xmm1, dword ptr [rdi+4A000h]
      vxorps  xmm6, xmm1, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm2, xmm6, dword ptr [rdi+4A01Ch]
      vmulss  xmm1, xmm8, dword ptr [rdi+4A018h]
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm2, xmm0, cs:__real@40000000
      vaddss  xmm3, xmm2, dword ptr [rdi+4A020h]
      vmulss  xmm1, xmm3, xmm7
      vaddss  xmm4, xmm4, xmm1
      vsubss  xmm5, xmm4, xmm0
      vmulss  xmm2, xmm6, dword ptr [rsp+88h+outPos+4]
      vmulss  xmm0, xmm8, dword ptr [rsp+88h+outPos]
      vaddss  xmm1, xmm2, xmm0
      vsubss  xmm4, xmm1, xmm5
      vmulss  xmm2, xmm6, dword ptr [r14+4]
      vmulss  xmm0, xmm8, dword ptr [r14]
      vaddss  xmm1, xmm2, xmm0
      vsubss  xmm3, xmm1, xmm5
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm3, xmm0
      vcomiss xmm4, xmm0
    }
    memset(&outPos, 0, sizeof(outPos));
  }
  _R11 = &v42;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CgCompassSystemMP::ActorUpdatePos
==============
*/
void CgCompassSystemMP::ActorUpdatePos(CgCompassSystemMP *this, CompassActorMP *actor, const vec3_t *newPos, const centity_t *actorEntity)
{
  CgGlobalsMP *LocalClientGlobals; 

  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1145, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( (actor->flags & 1) != 0 )
  {
    CgCompassSystemMP::ActorUpdateEnemyPos(this, actor, (const vec2_t *)newPos);
    if ( BG_IsCharacterEntity(&actorEntity->nextState) && CG_CompassMP_CanLocalPlayerHearActorFootsteps(this->m_localClientNum, newPos, actorEntity) )
      CG_CompassMP_RadarPingEnemyPlayer(actor, LocalClientGlobals->time, 0x44u);
  }
  actor->lastPosZ.elevation = CG_Compass_CalcElevation(LocalClientGlobals, newPos);
  actor->lastPosZ.zIsValid = 1;
  CompassActor_SetLastPosValue(actor, newPos);
}

/*
==============
CgCompassSystemMP::ActorUpdatePosAndElevation
==============
*/
void CgCompassSystemMP::ActorUpdatePosAndElevation(CgCompassSystemMP *this, CompassActorMP *actor, const vec2_t *newPos, const CompassEnemyElevation elevation)
{
  vec3_t pos; 
  float v15; 

  _RBX = newPos;
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1164, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor", -2i64) )
    __debugbreak();
  if ( (actor->flags & 1) != 0 )
    CgCompassSystemMP::ActorUpdateEnemyPos(this, actor, _RBX);
  actor->lastPosZ.elevation = elevation;
  actor->lastPosZ.zIsValid = 0;
  if ( __TSS0__1__CompassActor_SetLastPosAndElevation__YAXQEAUCompassActor__AEBTvec2_t__W4CompassEnemyElevation___Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&__TSS0__1__CompassActor_SetLastPosAndElevation__YAXQEAUCompassActor__AEBTvec2_t__W4CompassEnemyElevation___Z_4HA);
    if ( __TSS0__1__CompassActor_SetLastPosAndElevation__YAXQEAUCompassActor__AEBTvec2_t__W4CompassEnemyElevation___Z_4HA == -1 )
    {
      bdRandom::bdRandom(&`CompassActor_SetLastPosAndElevation'::`2'::rand);
      j_atexit(`CompassActor_SetLastPosAndElevation'::`2'::`dynamic atexit destructor for 'rand'');
      j__Init_thread_footer(&__TSS0__1__CompassActor_SetLastPosAndElevation__YAXQEAUCompassActor__AEBTvec2_t__W4CompassEnemyElevation___Z_4HA);
    }
  }
  bdRandom::nextUInt(&`CompassActor_SetLastPosAndElevation'::`2'::rand);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+68h+var_18], xmm1
    vunpcklps xmm0, xmm0, xmm2
    vmovsd  qword ptr [rsp+68h+pos], xmm0
  }
  pos.v[2] = v15;
  CompassActor_SetLastPosValue(actor, &pos);
  memset(&pos, 0, sizeof(pos));
}

/*
==============
CgCompassSystemMP::AddClientWeaponPingInfo
==============
*/
void CgCompassSystemMP::AddClientWeaponPingInfo(CgCompassSystemMP *this, const centity_t *cent, const vec3_t *origin, int msec)
{
  CgGlobalsMP *LocalClientGlobals; 
  entityType_s eType; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v11; 
  unsigned int team; 
  __int64 number; 
  int time; 
  CompassActorMP *v15; 
  team_t v16; 
  __int64 v17; 

  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2106, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2110, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2111, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
    __debugbreak();
  if ( !LocalClientGlobals->inKillCam )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2120, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
    {
      v11 = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.clientNum);
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2126, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
        __debugbreak();
      if ( v11->infoValid )
      {
        team = v11->team;
        number = cent->nextState.number;
        if ( team != 201 && !CG_Players_ShouldHidePlayerFromLocalPlayer((const LocalClientNum_t)this->m_localClientNum, cent->nextState.clientNum) )
        {
          if ( team > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2141, ASSERT_TYPE_ASSERT, "(playerTeam >= TEAM_FREE && playerTeam < TEAM_SPECTATOR)", (const char *)&queryFormat, "playerTeam >= TEAM_FREE && playerTeam < TEAM_SPECTATOR") )
            __debugbreak();
          if ( (unsigned int)number >= 0x100 )
          {
            LODWORD(v17) = number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2142, ASSERT_TYPE_ASSERT, "(unsigned)( playerIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassActors ) ) + 0 ) )", "playerIndex doesn't index ARRAY_COUNT( m_compassActors )\n\t%i not in [0, %i)", v17, 256) )
              __debugbreak();
          }
          time = LocalClientGlobals->time;
          v15 = &this->m_compassActors[number];
          if ( time + msec > v15->beginFadeTime )
          {
            v15->beginFadeTime = time + msec;
            time = LocalClientGlobals->time;
          }
          v15->lastShotFiredTime = time;
          v16 = CharacterInfo->team;
          if ( v16 && team == v16 )
            v15->flags &= ~1u;
          else
            v15->flags |= 1u;
          v15->perks.array[0] = v11->perks.array[0];
          v15->perks.array[1] = v11->perks.array[1];
          if ( (v15->flags & 1) != 0 )
          {
            CgCompassSystemMP::ActorUpdatePos(this, v15, origin, cent);
            CompassActor_SetLastEnemyPosFromLastPos(v15);
            v15->lastEnemyYaw = v15->lastYaw;
          }
        }
      }
    }
  }
}

/*
==============
CgCompassSystemMP::AddTurretWeaponPingInfo
==============
*/
void CgCompassSystemMP::AddTurretWeaponPingInfo(CgCompassSystemMP *this, const centity_t *cent, const vec3_t *origin, int msec)
{
  cg_t *LocalClientGlobals; 
  CompassTurretMP *Item; 
  int time; 
  int lastUpdateTime; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2177, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2179, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2180, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
    __debugbreak();
  if ( CgCompassSystemMP::CompassTurretIsPingType(cent) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2187, ASSERT_TYPE_SANITY, "( cgameGlob )", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2188, ASSERT_TYPE_SANITY, "( cgameGlob->nextSnap )", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    Item = CgCompassSystem::FindItemInfo<CompassTurretMP>(this, cent->nextState.number, this->m_compassTurrets, 0x20u, &this->m_compassTurretLock);
    if ( Item )
    {
      time = LocalClientGlobals->time;
      lastUpdateTime = Item->lastUpdateTime;
      if ( lastUpdateTime <= time )
      {
        if ( lastUpdateTime )
        {
          if ( lastUpdateTime >= time - 500 )
          {
            Item->yawLastKnown = Item->yawCurrent;
            Item->firePingTime = time;
            Item->positionLastKnown.v[0] = Item->positionCurrent.v[0];
            Item->positionLastKnown.v[1] = Item->positionCurrent.v[1];
            Item->positionLastKnown.v[2] = Item->positionCurrent.v[2];
          }
        }
      }
      else
      {
        Item->lastUpdateTime = 0;
      }
    }
  }
}

/*
==============
CgCompassSystemMP::AddWeaponPingInfo
==============
*/
void CgCompassSystemMP::AddWeaponPingInfo(CgCompassSystemMP *this, const centity_t *cent, const vec3_t *origin, int msec)
{
  cg_t *LocalClientGlobals; 
  char v14; 
  __int64 v15; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2236, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) != 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2242, ASSERT_TYPE_SANITY, "( cgameGlob )", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2243, ASSERT_TYPE_SANITY, "( cgameGlob->nextSnap )", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    if ( !LocalClientGlobals->inKillCam )
    {
      if ( BG_HasPerk(&LocalClientGlobals->predictedPlayerState.perks, 0x2Cu) )
        goto LABEL_20;
      _RDI = DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowFriendlyOnly;
      __asm { vmovaps [rsp+68h+var_28], xmm6 }
      if ( !DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowFriendlyOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_counterUAVRadarJamLevelShowFriendlyOnly") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm6, dword ptr [rdi+28h] }
      *(double *)&_XMM0 = CG_Radar_GetJammingLevel((const LocalClientNum_t)this->m_localClientNum);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovaps xmm6, [rsp+68h+var_28]
      }
      if ( v14 )
      {
LABEL_20:
        switch ( cent->nextState.eType )
        {
          case ET_PLAYER:
            goto LABEL_25;
          case ET_PLAYER_CORPSE:
            return;
          case ET_TURRET:
            CgCompassSystemMP::AddTurretWeaponPingInfo(this, cent, origin, msec);
            return;
          case ET_AGENT:
LABEL_25:
            CgCompassSystemMP::AddClientWeaponPingInfo(this, cent, origin, msec);
            break;
          default:
            if ( cent->nextState.eType != ET_AGENT_CORPSE )
            {
              LODWORD(v15) = cent->nextState.eType;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2279, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Compass weapon-ping unhandled for entity with eType '%i'.", v15) )
                __debugbreak();
            }
            break;
        }
      }
    }
  }
}

/*
==============
CG_CompassMP_CanLocalPlayerHearActorFootsteps
==============
*/
bool CG_CompassMP_CanLocalPlayerHearActorFootsteps(LocalClientNum_t localClientNum, const vec3_t *actorPos, const centity_t *actorEntity)
{
  const dvar_t *v5; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const bitarray<64> *v12; 
  char v25; 
  char v26; 
  const snapshot_t *snap; 
  const snapshot_t *nextSnap; 
  bool result; 
  CgTrajectory v47; 
  vec3_t v48; 
  vec3_t outPos; 

  v5 = DCONST_DVARBOOL_compassEnemyFootstepEnabled;
  _RSI = actorPos;
  if ( !DCONST_DVARBOOL_compassEnemyFootstepEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnemyFootstepEnabled") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0D8h+var_38], xmm6
    vmovaps [rsp+0D8h+var_48], xmm7
  }
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    goto LABEL_18;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.pm_type )
    goto LABEL_18;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, actorEntity->nextState.clientNum);
  v12 = (const bitarray<64> *)CharacterInfo;
  if ( (!CharacterInfo || !CharacterInfo->infoValid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1025, ASSERT_TYPE_ASSERT, "(ci && ci->infoValid)", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  if ( BG_HasPerk(v12 + 347, 0x1Fu) )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm3, xmm0, dword ptr [rbx+38h]
    vsubss  xmm2, xmm1, dword ptr [rbx+3Ch]
  }
  _RDI = DVARFLT_compassEnemyFootstepMaxRange;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm6, xmm0, dword ptr [rbx+40h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm7, xmm2, xmm1
  }
  if ( !DVARFLT_compassEnemyFootstepMaxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnemyFootstepMaxRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm7, xmm1
  }
  if ( !(v25 | v26) )
    goto LABEL_18;
  __asm { vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassEnemyFootstepMaxZ, "compassEnemyFootstepMaxZ");
  __asm { vcomiss xmm6, xmm0 }
  if ( !(v25 | v26) )
    goto LABEL_18;
  snap = LocalClientGlobals->snap;
  nextSnap = LocalClientGlobals->nextSnap;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, cs:__real@3a83126f
    vcomiss xmm6, xmm1
  }
  if ( nextSnap->serverTime > (unsigned int)snap->serverTime )
  {
    CgTrajectory::CgTrajectory(&v47, localClientNum, actorEntity, &actorEntity->prevState);
    BgTrajectory::EvaluatePosTrajectory(&v47, snap->serverTime, &outPos);
    v47.m_es = &actorEntity->nextState.lerp;
    BgTrajectory::EvaluatePosTrajectory(&v47, nextSnap->serverTime, &v48);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+var_70]
      vsubss  xmm1, xmm0, dword ptr [rsp+0D8h+outPos]
      vmovss  xmm2, dword ptr [rsp+0D8h+var_70+4]
      vsubss  xmm0, xmm2, dword ptr [rsp+0D8h+outPos+4]
      vdivss  xmm7, xmm1, xmm6
      vdivss  xmm6, xmm0, xmm6
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassEnemyFootstepMinSpeed, "compassEnemyFootstepMinSpeed");
    __asm
    {
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm0, xmm0
      vcomiss xmm3, xmm0
    }
    result = !v25;
  }
  else
  {
LABEL_18:
    result = 0;
  }
  __asm
  {
    vmovaps xmm7, [rsp+0D8h+var_48]
    vmovaps xmm6, [rsp+0D8h+var_38]
  }
  return result;
}

/*
==============
CG_CompassMP_ClipUVToViewRect
==============
*/
void CG_CompassMP_ClipUVToViewRect(const rectDef_s *pScaledRect, vec2_t *graphic_x1y1, float *outW, float *outH, vec2_t *s1t1, vec2_t *s2t2)
{
  _RBX = outH;
  _RDI = outW;
  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  _RBP = graphic_x1y1;
  __asm { vmovaps [rsp+88h+var_58], xmm7 }
  _RSI = pScaledRect;
  if ( !pScaledRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4208, ASSERT_TYPE_ASSERT, "(pScaledRect)", (const char *)&queryFormat, "pScaledRect") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4209, ASSERT_TYPE_ASSERT, "(outW)", (const char *)&queryFormat, "outW") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4210, ASSERT_TYPE_ASSERT, "(outH)", (const char *)&queryFormat, "outH") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]
    vmovss  xmm3, dword ptr [rbx]
  }
  *s1t1 = 0i64;
  s2t2->v[0] = 1.0;
  s2t2->v[1] = 1.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rsi+8]
    vaddss  xmm7, xmm0, dword ptr [rbp+4]
    vaddss  xmm0, xmm1, dword ptr [rsi]
    vaddss  xmm5, xmm4, dword ptr [rbp+0]
    vcomiss xmm5, xmm0
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vcomiss xmm7, xmm1
    vmovss  xmm1, dword ptr [rbp+0]
    vmovss  xmm0, dword ptr [rsi]
    vcomiss xmm1, xmm0
    vmovss  xmm5, cs:__real@3f800000
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rsi+4]
    vcomiss xmm1, xmm0
    vmovss  dword ptr [rdi], xmm2
    vmovss  dword ptr [rbx], xmm3
    vmovaps xmm6, [rsp+88h+var_48]
    vmovaps xmm7, [rsp+88h+var_58]
  }
}

/*
==============
CG_CompassMP_GetEnemyMaterial
==============
*/

GfxImage *__fastcall CG_CompassMP_GetEnemyMaterial(const CompassActorMP *actor, const bool alwaysShowActor, double fadeTimeAmount)
{
  const dvar_t *v5; 
  int v8; 
  __int64 elevation; 
  const dvar_t *v11; 
  __int64 v12; 
  const ScriptableEventCompassIconDef *iconState; 
  GfxImage *result; 

  v5 = DVARBOOL_compassPrototypeElevation;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  v8 = 1;
  __asm { vmovaps xmm6, xmm2 }
  if ( !DVARBOOL_compassPrototypeElevation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPrototypeElevation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  elevation = 0i64;
  if ( v5->current.enabled )
  {
    if ( alwaysShowActor )
      elevation = (unsigned __int8)actor->lastPosZ.elevation;
    else
      elevation = (unsigned __int8)actor->lastEnemyPosZ.elevation;
  }
  v11 = DVARBOOL_compassPrototypeFiring;
  if ( !DVARBOOL_compassPrototypeFiring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPrototypeFiring") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = 1i64;
  if ( v11->current.enabled )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( !v11->current.enabled )
    {
      v8 = 0;
      v12 = 0i64;
    }
  }
  iconState = actor->iconState;
  if ( v8 == 1 )
  {
    if ( iconState )
      result = iconState->enemyCompassIconFiring[elevation]->textureTable->image;
    else
      result = (GfxImage *)cgMedia.compass.enemy_blip[1][elevation];
  }
  else if ( iconState )
  {
    result = iconState->enemyCompassIconQuiet[elevation]->textureTable->image;
  }
  else
  {
    result = (GfxImage *)*((_QWORD *)&cgMedia.compass.enemy_blip[0][2 * v12] + elevation + v12);
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

/*
==============
CG_CompassMP_GetRadarUpdateTime
==============
*/
float CG_CompassMP_GetRadarUpdateTime(const cg_t *const cgameGlob)
{
  RadarMode radarMode; 
  const char *v3; 

  if ( !cgameGlob->predictedPlayerState.radarEnabled )
  {
LABEL_8:
    _RBX = DCONST_DVARFLT_compassRadarUpdateTime;
    if ( DCONST_DVARFLT_compassRadarUpdateTime )
      goto LABEL_12;
    v3 = "compassRadarUpdateTime";
    goto LABEL_10;
  }
  radarMode = cgameGlob->predictedPlayerState.radarMode;
  if ( radarMode != RADAR_MODE_SLOW )
  {
    if ( radarMode )
    {
      _RBX = DCONST_DVARFLT_compassFastRadarUpdateTime;
      if ( DCONST_DVARFLT_compassFastRadarUpdateTime )
        goto LABEL_12;
      v3 = "compassFastRadarUpdateTime";
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  _RBX = DCONST_DVARFLT_compassSlowRadarUpdateTime;
  if ( DCONST_DVARFLT_compassSlowRadarUpdateTime )
    goto LABEL_12;
  v3 = "compassSlowRadarUpdateTime";
LABEL_10:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v3) )
    __debugbreak();
LABEL_12:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@447a0000
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_CompassMP_RadarPingEnemyPlayer
==============
*/
bool CG_CompassMP_RadarPingEnemyPlayer(CompassActorMP *actor, int time, unsigned int perkImmunityOverrideIndex)
{
  int lastUpdate; 
  bool result; 

  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 791, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
    __debugbreak();
  lastUpdate = actor->lastUpdate;
  if ( lastUpdate > time )
  {
    lastUpdate = 0;
    actor->lastUpdate = 0;
  }
  if ( lastUpdate < time - 500 )
    return 0;
  if ( (actor->flags & 0x10) == 0 )
  {
    if ( perkImmunityOverrideIndex == 68 )
    {
      if ( (actor->flags & 8) != 0 )
        return 0;
    }
    else if ( BG_HasPerk(&actor->perks, perkImmunityOverrideIndex) )
    {
      return 0;
    }
  }
  CompassActor_SetLastEnemyPosFromLastPos(actor);
  actor->lastEnemyYaw = actor->lastYaw;
  result = 1;
  actor->beginRadarFadeTime = time;
  return result;
}

/*
==============
CG_CompassMP_TurretIsAlwaysVisibleAndValid
==============
*/
_BOOL8 CG_CompassMP_TurretIsAlwaysVisibleAndValid(LocalClientNum_t localClientNum, CompassTurretMP *turretInfo)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v5; 
  CgGlobalsMP *v6; 

  if ( !turretInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 827, ASSERT_TYPE_ASSERT, "(turretInfo)", (const char *)&queryFormat, "turretInfo") )
    __debugbreak();
  if ( turretInfo->isFriendly )
    return 1i64;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v5 = DVARBOOL_bg_compassShowEnemies;
  v6 = LocalClientGlobals;
  if ( !DVARBOOL_bg_compassShowEnemies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassShowEnemies") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.enabled || v6->m_isMLGSpectator;
}

/*
==============
CG_CompassMP_TurretRadarPingEnemy
==============
*/
void CG_CompassMP_TurretRadarPingEnemy(CompassTurretMP *turretInfo, int currentTime)
{
  int lastUpdateTime; 

  if ( !turretInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 854, ASSERT_TYPE_ASSERT, "(turretInfo)", (const char *)&queryFormat, "turretInfo") )
    __debugbreak();
  lastUpdateTime = turretInfo->lastUpdateTime;
  if ( lastUpdateTime <= currentTime )
  {
    if ( lastUpdateTime && lastUpdateTime >= currentTime - 500 )
      goto LABEL_10;
  }
  else
  {
    turretInfo->lastUpdateTime = 0;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 858, ASSERT_TYPE_ASSERT, "(CG_CompassMP_TurretHasRecentUpdate( turretInfo, currentTime ))", (const char *)&queryFormat, "CG_CompassMP_TurretHasRecentUpdate( turretInfo, currentTime )") )
    __debugbreak();
LABEL_10:
  turretInfo->yawLastKnown = turretInfo->yawCurrent;
  turretInfo->radarPingTime = currentTime;
  turretInfo->positionLastKnown.v[0] = turretInfo->positionCurrent.v[0];
  turretInfo->positionLastKnown.v[1] = turretInfo->positionCurrent.v[1];
  turretInfo->positionLastKnown.v[2] = turretInfo->positionCurrent.v[2];
}

/*
==============
CgCompassSystemMP::CalculateAreaMarker
==============
*/
__int64 CgCompassSystemMP::CalculateAreaMarker(CgCompassSystemMP *this, const CompassType compassType, const bool cropPartialMap, const rectDef_s *const parentRect, const rectDef_s *const rect, const float boundsRadius, const vec2_t position, const float radius, const bool isPixelShapeCircle, vec2_t *out_s1t1, vec2_t *out_s2t2, vec4_t (*outVerts)[4])
{
  CgGlobalsMP *LocalClientGlobals; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  unsigned __int8 v48; 
  __int64 result; 
  float outAngle; 
  float outH; 
  float outW; 
  float v57[2]; 
  vec2_t *s2t2; 
  vec4_t (*quadVerts)[4]; 
  SecureVec3 out; 
  __int64 v61; 
  vec2_t graphic_x1y1; 
  rectDef_s x; 
  vec2_t in; 
  vec2_t north; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  v61 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  in = position;
  s2t2 = out_s2t2;
  quadVerts = outVerts;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, v57, &north);
  CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
  __asm
  {
    vmovss  xmm6, cs:__real@3f000000
    vmulss  xmm1, xmm6, [rbp+3Fh+var_98]
    vaddss  xmm7, xmm1, [rbp+3Fh+x]
    vmulss  xmm0, xmm6, [rbp+3Fh+var_94]
    vaddss  xmm8, xmm0, [rbp+3Fh+y]
  }
  CG_CalcPlayerPos(&out, this->m_localClientNum);
  __asm
  {
    vmovss  xmm0, [rbp+3Fh+boundsRadius]
    vmovss  dword ptr [rsp+130h+outAngle], xmm0
  }
  CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &x, outAngle, &north, (const vec2_t *)&out, &in, &graphic_x1y1, NULL);
  __asm { vmovss  xmm0, [rbp+3Fh+radius] }
  if ( isPixelShapeCircle )
    __asm { vmulss  xmm0, xmm0, cs:__real@3f834834 }
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@40000000
    vmulss  xmm3, xmm0, dword ptr [r15+0FB00h]
    vmovss  [rsp+130h+outW], xmm3
    vmovss  [rsp+130h+outH], xmm3
    vmulss  xmm1, xmm3, xmm6
    vsubss  xmm0, xmm7, xmm1
    vaddss  xmm4, xmm0, dword ptr [rbp+3Fh+graphic_x1y1]
    vmovss  dword ptr [rbp+3Fh+graphic_x1y1], xmm4
    vsubss  xmm0, xmm8, xmm1
    vaddss  xmm5, xmm0, dword ptr [rbp+3Fh+graphic_x1y1+4]
    vmovss  dword ptr [rbp+3Fh+graphic_x1y1+4], xmm5
    vaddss  xmm2, xmm4, xmm3
    vaddss  xmm6, xmm5, xmm3
    vmovss  xmm1, [rbp+3Fh+x]
    vaddss  xmm3, xmm1, [rbp+3Fh+var_98]
    vcomiss xmm2, xmm1
    vcomiss xmm4, xmm3
  }
  if ( isPixelShapeCircle )
  {
    v48 = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm1, [rbp+3Fh+y]
      vaddss  xmm2, xmm1, [rbp+3Fh+var_94]
      vcomiss xmm6, xmm1
      vcomiss xmm5, xmm2
    }
    CG_CompassMP_ClipUVToViewRect(&x, &graphic_x1y1, &outW, &outH, out_s1t1, s2t2);
    vertAlign = rect->vertAlign;
    horzAlign = rect->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, (float *)&graphic_x1y1, (float *)&graphic_x1y1 + 1, &outW, &outH, horzAlign, vertAlign);
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+3Fh+graphic_x1y1+4]; top
      vaddss  xmm3, xmm1, [rsp+130h+outH]; bottom
      vmovss  xmm0, dword ptr [rbp+3Fh+graphic_x1y1]; left
      vaddss  xmm2, xmm0, [rsp+130h+outW]; right
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, quadVerts);
    v48 = 1;
  }
  memset(&out, 0, sizeof(out));
  result = v48;
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
  return result;
}

/*
==============
CgCompassSystemMP::CompassTurretIsPingType
==============
*/
_BOOL8 CgCompassSystemMP::CompassTurretIsPingType(const centity_t *cent)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1200, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  return GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x13u);
}

/*
==============
CgCompassSystemMP::ComputeEnemyCompassColor
==============
*/
void CgCompassSystemMP::ComputeEnemyCompassColor(CgCompassSystemMP *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *fadedColor)
{
  CgGlobalsMP *LocalClientGlobals; 

  LocalClientGlobals = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CgCompassSystemMP::GetEnemyCompassColor(this, fadedColor, LocalClientGlobals);
}

/*
==============
CgCompassSystemMP::ComputeFriendlyCompassColor
==============
*/
void CgCompassSystemMP::ComputeFriendlyCompassColor(CgCompassSystemMP *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *fadedColor)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 

  _RBX = fadedColor;
  if ( CG_GameInterface_PlayingArena() && (clientInfo->game_extrainfo & 7) != 0 )
  {
    LUI_CoD_GameMP_GetBrColorForClientNum(clientInfo->clientNum, _RBX);
  }
  else
  {
    LocalClientGlobals = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    if ( LocalClientStatics->HasCharacterInfo(LocalClientStatics, clientInfo->clientNum) )
    {
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientInfo->clientNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2546, ASSERT_TYPE_ASSERT, "(ownerCi)", (const char *)&queryFormat, "ownerCi") )
        __debugbreak();
      if ( CharacterInfo->infoValid && Party_ClientIsInMyParty(clientInfo->clientNum) )
        goto LABEL_19;
    }
    if ( LocalClientGlobals->m_useSquads && myClientInfo->squadIndex == clientInfo->squadIndex )
    {
LABEL_19:
      if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:xmmword_147FA89B0
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr cs:xmmword_147FA89B0+4
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm0, dword ptr cs:xmmword_147FA89B0+8
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  xmm1, dword ptr cs:xmmword_147FA89B0+0Ch
          vmovss  dword ptr [rbx+0Ch], xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:rgbColor
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr cs:rgbColor+4
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm0, dword ptr cs:rgbColor+8
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  xmm1, cs:dword_147FA8A0C
          vmovss  dword ptr [rbx+0Ch], xmm1
        }
      }
    }
    else
    {
      CgCompassSystemMP::GetFriendlyCompassColor(this, _RBX, LocalClientGlobals);
    }
  }
}

/*
==============
CgCompassSystemMP::ComputeWorldToScreenScale
==============
*/
void CgCompassSystemMP::ComputeWorldToScreenScale(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius)
{
  const cg_t *LocalClientGlobals; 
  float x; 
  float xa; 
  float outAngle; 
  vec2_t playerWorldPos; 
  vec2_t outVector; 
  vec2_t v32; 
  vec2_t out; 
  vec2_t in; 
  rectDef_s mapRect; 

  __asm { vmovaps [rsp+0F0h+var_40], xmm6 }
  _R13 = this;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
  CgCompassSystem::GetCompassYaw(_R13, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
  __asm
  {
    vmovss  xmm6, [rbp+37h+boundsRadius]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+37h+playerWorldPos], xmm0
    vmovss  dword ptr [rbp+37h+playerWorldPos+4], xmm0
    vmovss  [rbp+37h+var_90], xmm0
    vmovss  dword ptr [rbp+37h+in+4], xmm0
    vmovss  [rbp+37h+var_68], xmm0
    vmovss  xmm0, cs:__real@461c4000
    vmovss  dword ptr [rsp+0F0h+x], xmm6
    vmovss  dword ptr [rbp+37h+in], xmm0
  }
  CgCompassSystem::WorldPosToCompass(_R13, compassType, cropPartialMap, &mapRect, x, &outVector, &playerWorldPos, &playerWorldPos, &out, NULL);
  __asm { vmovss  dword ptr [rsp+0F0h+x], xmm6 }
  CgCompassSystem::WorldPosToCompass(_R13, compassType, cropPartialMap, &mapRect, xa, &outVector, &playerWorldPos, &in, &v32, NULL);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+37h+var_80]
    vmovss  xmm1, dword ptr [rbp+37h+var_80+4]
    vsubss  xmm2, xmm1, dword ptr [rbp+37h+var_78+4]
    vsubss  xmm4, xmm0, dword ptr [rbp+37h+var_78]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmulss  xmm3, xmm2, cs:__real@38d1b717
    vmovss  dword ptr [r13+0FB00h], xmm3
    vmovaps xmm6, [rsp+0F0h+var_40]
  }
}

/*
==============
CgCompassSystemMP::CreateDecoyActor
==============
*/
void CgCompassSystemMP::CreateDecoyActor(CgCompassSystemMP *this, const cg_t *const cgameGlob, const vec3_t *pos, const __int16 *entityNum, const int *numDecoys)
{
  int time; 
  CgCompassSystemMP *v9; 
  __int16 v12; 
  int v14; 
  int v23; 
  bool v24; 
  const dvar_t *v25; 
  int v26; 
  int v29; 
  bool *p_wasJustUpdated; 
  bool v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned int pHoldrand; 
  float c; 
  float s; 
  CompassDecoyActorMP *m_compassDecoyActors; 
  CgCompassSystemMP *v38; 
  int v40; 

  time = cgameGlob->time;
  v9 = this;
  v12 = *entityNum;
  _R13 = pos;
  v38 = this;
  pHoldrand = time;
  BG_srand(&pHoldrand);
  v14 = 0;
  if ( *numDecoys > 0 )
  {
    __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
    _RDI = (__int64)v9->m_compassDecoyActors;
    __asm
    {
      vmovaps [rsp+0D8h+var_58], xmm7
      vmovss  xmm7, cs:__real@40c90fdb
    }
    m_compassDecoyActors = v9->m_compassDecoyActors;
    do
    {
      *(double *)&_XMM0 = BG_random(&pHoldrand);
      __asm
      {
        vmulss  xmm6, xmm0, dword ptr [rax]
        vmulss  xmm0, xmm0, xmm7; radians
      }
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      __asm
      {
        vmulss  xmm1, xmm6, [rsp+0D8h+c]
        vaddss  xmm2, xmm1, dword ptr [r13+0]
        vmulss  xmm1, xmm6, [rsp+0D8h+s]
        vmovss  xmm0, dword ptr [r13+8]
        vmovss  dword ptr [rsp+0D8h+var_78], xmm2
        vaddss  xmm2, xmm1, dword ptr [r13+4]
      }
      v23 = 0;
      __asm
      {
        vmovss  dword ptr [rsp+0D8h+var_78+4], xmm2
        vmovss  [rsp+0D8h+var_70], xmm0
      }
      v24 = 1;
      while ( 1 )
      {
        if ( !v24 )
        {
          LODWORD(v33) = 15;
          LODWORD(v32) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1656, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassDecoyActors ) ) + 0 ) )", "actorIndex doesn't index ARRAY_COUNT( m_compassDecoyActors )\n\t%i not in [0, %i)", v32, v33) )
            __debugbreak();
        }
        if ( cgameGlob->time >= *(_DWORD *)_RDI )
          break;
        ++v23;
        _RDI += 28i64;
        v24 = (unsigned int)v23 < 0xF;
        if ( v23 >= 15 )
          goto LABEL_16;
      }
      v25 = DCONST_DVARINT_bg_compassDecoyPingBeginFadeTime;
      if ( !DCONST_DVARINT_bg_compassDecoyPingBeginFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassDecoyPingBeginFadeTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      __asm { vmovsd  xmm0, [rsp+0D8h+var_78] }
      *(_DWORD *)(_RDI + 4) = cgameGlob->time + v25->current.integer;
      *(_DWORD *)_RDI = cgameGlob->time + 3000;
      v26 = v40;
      __asm { vmovsd  qword ptr [rdi+0Ch], xmm0 }
      *(_DWORD *)(_RDI + 20) = v26;
      if ( v12 == 2047 )
      {
        *(_BYTE *)(_RDI + 26) = 0;
        *(_WORD *)(_RDI + 24) = 2047;
      }
      else
      {
        *(_BYTE *)(_RDI + 26) = 1;
        *(_WORD *)(_RDI + 24) = *entityNum;
      }
LABEL_16:
      _RDI = (__int64)m_compassDecoyActors;
      ++v14;
    }
    while ( v14 < *numDecoys );
    v9 = v38;
    __asm
    {
      vmovaps xmm7, [rsp+0D8h+var_58]
      vmovaps xmm6, [rsp+0D8h+var_48]
    }
  }
  if ( v12 != 2047 )
  {
    v29 = 0;
    p_wasJustUpdated = &v9->m_compassDecoyActors[0].wasJustUpdated;
    v31 = 1;
    do
    {
      if ( !v31 )
      {
        LODWORD(v33) = 15;
        LODWORD(v32) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1684, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassDecoyActors ) ) + 0 ) )", "actorIndex doesn't index ARRAY_COUNT( m_compassDecoyActors )\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      if ( *((_WORD *)p_wasJustUpdated - 1) == *entityNum )
      {
        if ( *p_wasJustUpdated )
        {
          *p_wasJustUpdated = 0;
        }
        else if ( *(_DWORD *)(p_wasJustUpdated - 26) )
        {
          *(_QWORD *)(p_wasJustUpdated - 26) = 0i64;
        }
      }
      ++v29;
      p_wasJustUpdated += 28;
      v31 = (unsigned int)v29 < 0xF;
    }
    while ( v29 < 15 );
  }
}

/*
==============
CgCompassSystemMP::DoesMovementCrossRadar
==============
*/

bool __fastcall CgCompassSystemMP::DoesMovementCrossRadar(CgCompassSystemMP *this, double radarProgress, const vec2_t *p1, const vec2_t *p2)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm6, xmm1
  }
  _RDI = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *(double *)&_XMM0 = CgCompassSystemMP::GetRadarLineMargin(this);
  __asm
  {
    vmovss  xmm7, dword ptr [rdi+4A004h]
    vmulss  xmm1, xmm7, dword ptr [rdi+4A018h]
    vmovss  xmm2, dword ptr [rdi+4A000h]
    vxorps  xmm5, xmm2, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm2, xmm5, dword ptr [rdi+4A01Ch]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, cs:__real@40000000
    vaddss  xmm1, xmm2, dword ptr [rdi+4A020h]
    vmulss  xmm2, xmm1, xmm6
    vmulss  xmm1, xmm5, dword ptr [rsi+4]
    vmovaps xmm6, [rsp+48h+var_18]
    vaddss  xmm3, xmm3, xmm2
    vsubss  xmm4, xmm3, xmm0
    vmulss  xmm0, xmm7, dword ptr [rsi]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm7, dword ptr [rbp+0]
    vmovaps xmm7, [rsp+48h+var_28]
    vsubss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm5, dword ptr [rbp+4]
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm2, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsubss  xmm2, xmm1, xmm4
    vcomiss xmm2, xmm3
  }
  return 0;
}

/*
==============
CgCompassSystemMP::DrawAreaMarker
==============
*/
void CgCompassSystemMP::DrawAreaMarker(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, const int startTime, const int duration, const vec2_t position, const float radius, const GfxImage *image, bool isPixelCircle, LUIElement *element, lua_State *luaVM)
{
  LocalClientNum_t m_localClientNum; 
  const dvar_t *v19; 
  float v31; 
  float v32; 
  float vMin; 
  float vMina; 
  float vMinb; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float outVerts; 
  vec2_t out_s2t2; 
  vec2_t out_s1t1; 
  vec2_t outSize; 
  vec4_t verts[4]; 

  __asm
  {
    vmovss  xmm0, [rsp+108h+radius]
    vmovss  [rsp+108h+var_D0], xmm0
    vmovss  xmm0, [rsp+108h+boundsRadius]
    vmovss  [rsp+108h+vMin], xmm0
  }
  if ( CgCompassSystemMP::CalculateAreaMarker(this, compassType, cropPartialMap, parentRect, rect, vMin, position, v38, isPixelCircle, &out_s1t1, &out_s2t2, (vec4_t (*)[4])verts) )
  {
    m_localClientNum = this->m_localClientNum;
    if ( isPixelCircle )
    {
      LUI_Render_GetViewportSize(m_localClientNum, &outSize);
      v19 = DVARFLT_compassCircleOutlineThickness;
      if ( !DVARFLT_compassCircleOutlineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCircleOutlineThickness") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+108h+outSize+4]
        vmulss  xmm1, xmm0, dword ptr [rbx+28h]
        vmulss  xmm2, xmm1, cs:__real@3ab60b61
        vmovss  xmm0, dword ptr [rsp+108h+var_A8+4]
        vmovss  xmm1, dword ptr [rsp+108h+var_A8]
        vmovss  dword ptr [rsp+108h+outVerts], xmm2
        vmovss  [rsp+108h+var_D0], xmm0
        vmovss  xmm0, dword ptr [rsp+108h+var_A0+4]
        vmovss  dword ptr [rsp+108h+var_D8], xmm1
        vmovss  xmm1, dword ptr [rsp+108h+var_A0]
        vmovss  [rsp+108h+vMin], xmm0
        vmovss  dword ptr [rsp+108h+var_E8], xmm1
      }
      LUI_Render_DrawImage_PixelShape((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])verts, v31, vMina, v36, v39, color, image, GFX_PIXEL_SHAPE_TYPE_CIRCLE, outVerts);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+108h+var_A8+4]
        vmovss  xmm1, dword ptr [rsp+108h+var_A8]
        vmovss  [rsp+108h+var_D0], xmm0
        vmovss  xmm0, dword ptr [rsp+108h+var_A0+4]
        vmovss  dword ptr [rsp+108h+var_D8], xmm1
        vmovss  xmm1, dword ptr [rsp+108h+var_A0]
        vmovss  [rsp+108h+vMin], xmm0
        vmovss  dword ptr [rsp+108h+var_E8], xmm1
      }
      LUI_Render_DrawImage(m_localClientNum, element, luaVM, (const vec4_t (*)[4])verts, v32, vMinb, v37, v40, color, image);
    }
  }
}

/*
==============
CgCompassSystemMP::DrawBigMapUAV
==============
*/
void CgCompassSystemMP::DrawBigMapUAV(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  int startTime; 
  const dvar_t *v16; 
  RadarMode radarMode; 
  int m_bigMapUAVPingIntervalTimeSlow; 
  float fmt; 
  float v23; 
  float v24; 

  _RBX = this;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5030, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CgCompassSystemMP::IsRadarSweepEnabled(_RBX, LocalClientGlobals) )
  {
    startTime = _RBX->m_bigMapUAVPingDuration;
    v16 = DVARBOOL_compassUAVDrawOuterCircle;
    __asm
    {
      vmovaps [rsp+0B8h+var_38], xmm6
      vmovss  xmm6, dword ptr [rbx+0FAE4h]
    }
    if ( !DVARBOOL_compassUAVDrawOuterCircle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassUAVDrawOuterCircle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, [rsp+0B8h+boundsRadius]
        vmovss  [rsp+0B8h+var_68], xmm6
        vmovss  [rsp+0B8h+var_90], xmm0
      }
      CgCompassSystemMP::DrawAreaMarker(_RBX, compassType, cropPartialMap, parentRect, rect, v23, &colorWhite, startTime, startTime, *(const vec2_t *)LocalClientGlobals->predictedPlayerState.origin.v, v24, cgMedia.compass_bounding_circle, 0, element, luaVM);
    }
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1077, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE && LocalClientGlobals->predictedPlayerState.radarEnabled )
    {
      radarMode = LocalClientGlobals->predictedPlayerState.radarMode;
      if ( radarMode == RADAR_MODE_SLOW )
      {
        m_bigMapUAVPingIntervalTimeSlow = _RBX->m_bigMapUAVPingIntervalTimeSlow;
LABEL_20:
        if ( LocalClientGlobals->time - _RBX->m_radarPingTime >= m_bigMapUAVPingIntervalTimeSlow )
        {
          __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm6 }
          CgCompassSystemMP::TriggerPortableRadarPing(_RBX, LocalClientGlobals, &LocalClientGlobals->predictedPlayerState.origin, startTime, fmt, 0x44u);
          _RBX->m_radarPingTime = LocalClientGlobals->time;
        }
        __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
        return;
      }
      if ( radarMode )
      {
        m_bigMapUAVPingIntervalTimeSlow = _RBX->m_bigMapUAVPingIntervalTimeFast;
        goto LABEL_20;
      }
    }
    m_bigMapUAVPingIntervalTimeSlow = _RBX->m_bigMapUAVPingIntervalTime;
    goto LABEL_20;
  }
}

/*
==============
CgCompassSystemMP::DrawCursorLayer
==============
*/
void CgCompassSystemMP::DrawCursorLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  float material; 

  _RSI = element;
  __asm
  {
    vxorps  xmm5, xmm5, xmm5
    vmovss  xmm0, dword ptr [rsi+0D8h]
    vmovss  xmm1, dword ptr [rsi+0D0h]
    vmaxss  xmm4, xmm0, xmm5
    vmovss  xmm0, dword ptr [rsi+0D4h]
    vmaxss  xmm3, xmm0, xmm5; right
    vmovss  xmm0, dword ptr [rsi+0CCh]
    vmaxss  xmm2, xmm1, xmm5; top
    vmaxss  xmm1, xmm0, xmm5; left
    vmovss  dword ptr [rsp+58h+material], xmm4
  }
  LUI_Render_PushStencilRectangle((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, material);
  CgCompassSystem::DrawPlayerMapLocationSelector(this, minimapOptions->compassType, parentRect, rect, NULL, color, element, luaVM);
  CgCompassSystemMP::DrawSelectionCursor(this, minimapOptions->compassType, parentRect, rect, NULL, color, element, luaVM);
  LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
}

/*
==============
CgCompassSystemMP::DrawDead
==============
*/
void CgCompassSystemMP::DrawDead(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  int *p_ownerNum; 
  __int64 v31; 
  int v32; 
  int v33; 
  characterInfo_t *CharacterInfo; 
  CompassType v39; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v67; 
  const dvar_t *v70; 
  const dvar_t *v73; 
  const GfxImage *codcaster_death_skull_outline; 
  const GfxImage *codcaster_death_skull; 
  const dvar_t *v87; 
  const GfxImage *codcaster_objective_circle_bg; 
  const GfxImage *codcaster_objective_revive_cross; 
  const dvar_t *v101; 
  int team; 
  float fmta; 
  float fmtb; 
  float fmt; 
  float fmtc; 
  float fmtd; 
  float ya; 
  float y; 
  float yb; 
  float wa; 
  float w; 
  float wb; 
  float ha; 
  float h; 
  float hb; 
  float v142; 
  float v143; 
  float v144; 
  float outClippeda; 
  float outClipped; 
  float outClippedb; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 
  float v162; 
  GfxImage *material; 
  lua_State *v164; 
  float v167; 
  float v168; 
  lua_State *v169; 
  CompassType compassTypea; 
  vec2_t in; 
  __int64 v174; 
  const rectDef_s *v175; 
  CgStatic *v176; 
  vec3_t pos; 
  SecureVec3 out; 
  __int64 v179; 
  vec2_t v180; 
  rectDef_s x; 
  vec4_t color; 
  vec4_t v183; 
  vec2_t north; 
  char v185; 
  void *retaddr; 

  _RAX = &retaddr;
  v179 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  compassTypea = compassType;
  v175 = rect;
  v169 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3078, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  v176 = LocalClientStatics;
  if ( CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum)->infoValid )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, [rbp+120h+var_120]
      vaddss  xmm0, xmm1, [rbp+120h+x]
      vmovss  [rbp+120h+var_184], xmm0
      vmulss  xmm0, xmm3, [rbp+120h+var_11C]
      vaddss  xmm0, xmm0, [rbp+120h+var_124]
      vmovss  [rbp+120h+var_180], xmm0
    }
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    p_ownerNum = &this->m_compassActors[0].ownerNum;
    v31 = 248i64;
    v174 = 248i64;
    while ( 1 )
    {
      v32 = LocalClientGlobals->time - 500;
      v33 = *(p_ownerNum - 27);
      if ( v33 < v32 )
      {
        __asm
        {
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, ecx
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm0, cs:__real@45dac000
          vcomiss xmm2, xmm1
        }
        if ( v33 >= (unsigned int)v32 || this->m_lastStandEnabled )
        {
          CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, *p_ownerNum);
          if ( (unsigned int)(CharacterInfo->team - 1) <= 1 )
            break;
        }
      }
LABEL_54:
      p_ownerNum += 34;
      v174 = --v31;
      if ( !v31 )
        goto LABEL_55;
    }
    CompassActor_GetLastPosValue((const CompassActor *)(p_ownerNum - 28), &pos);
    in = *(vec2_t *)pos.v;
    memset(&pos, 0, sizeof(pos));
    __asm
    {
      vmovss  xmm0, [rbp+120h+boundsRadius]
      vmovss  dword ptr [rsp+230h+fmt], xmm0
    }
    v39 = compassTypea;
    CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, fmta, &north, (const vec2_t *)&out, &in, &v180, &v180);
    if ( CharacterInfo->team == TEAM_TWO )
    {
      if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        __asm
        {
          vmovss  xmm11, dword ptr cs:xmmword_147FA89B0
          vmovss  xmm12, dword ptr cs:xmmword_147FA89B0+4
          vmovss  xmm13, dword ptr cs:xmmword_147FA89B0+8
          vmovss  xmm6, dword ptr cs:xmmword_147FA89B0+0Ch
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm11, dword ptr cs:friendlyColors
          vmovss  xmm12, dword ptr cs:friendlyColors+4
          vmovss  xmm13, dword ptr cs:friendlyColors+8
          vmovss  xmm6, dword ptr cs:unk_147FA89AC
        }
      }
      CgCompassSystemMP::GetFriendlyCompassLightColor(this, &color, LocalClientGlobals);
      if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        __asm
        {
          vmovss  xmm7, cs:dword_147FA89C0
          vmovss  xmm8, cs:dword_147FA89C4
          vmovss  xmm9, cs:dword_147FA89C8
          vmovss  xmm2, cs:dword_147FA89CC
        }
        goto LABEL_26;
      }
    }
    else
    {
      if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        __asm
        {
          vmovss  xmm11, dword ptr cs:xmmword_147FA8A20
          vmovss  xmm12, dword ptr cs:xmmword_147FA8A20+4
          vmovss  xmm13, dword ptr cs:xmmword_147FA8A20+8
          vmovss  xmm6, dword ptr cs:xmmword_147FA8A20+0Ch
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm11, dword ptr cs:enemyColors
          vmovss  xmm12, dword ptr cs:enemyColors+4
          vmovss  xmm13, dword ptr cs:enemyColors+8
          vmovss  xmm6, dword ptr cs:unk_147FA8A1C
        }
      }
      CgCompassSystemMP::GetEnemyCompassLightColor(this, &color, LocalClientGlobals);
      if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        __asm
        {
          vmovss  xmm7, cs:dword_147FA8A30
          vmovss  xmm8, cs:dword_147FA8A34
          vmovss  xmm9, cs:dword_147FA8A38
          vmovss  xmm2, cs:dword_147FA8A3C
        }
        goto LABEL_26;
      }
    }
    __asm
    {
      vmovss  xmm2, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  xmm9, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  xmm8, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  xmm7, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
    }
LABEL_26:
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [r15-6Ch]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vsubss  xmm3, xmm0, cs:__real@459c4000
      vcomiss xmm1, xmm3
    }
    if ( LocalClientGlobals->time > 0x1F4u || this->m_lastStandEnabled )
    {
      __asm { vmovss  xmm10, cs:__real@3f800000 }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm3, xmm1
        vmulss  xmm1, xmm0, cs:__real@3a03126f
        vmovss  xmm10, cs:__real@3f800000
        vsubss  xmm10, xmm10, xmm1
      }
    }
    __asm
    {
      vmulss  xmm15, xmm6, xmm10
      vmulss  xmm6, xmm10, dword ptr [rbp+120h+color+0Ch]
      vmovss  dword ptr [rbp+120h+color+0Ch], xmm6
      vmulss  xmm14, xmm2, xmm10
    }
    CalcCompassFriendlySize(v39, &v168, &v167);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+120h+var_130]
      vaddss  xmm1, xmm0, [rbp+120h+var_184]
      vmovss  dword ptr [rbp+120h+var_130], xmm1
      vmovss  xmm2, dword ptr [rbp+120h+var_130+4]
      vaddss  xmm0, xmm2, [rbp+120h+var_180]
      vmovss  dword ptr [rbp+120h+var_130+4], xmm0
    }
    vertAlign = v175->vertAlign;
    horzAlign = v175->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, (float *)&v180, (float *)&v180 + 1, &v168, &v167, horzAlign, vertAlign);
    if ( largeMap )
    {
      v67 = DVARFLT_compassIconMLGSpectatorScale;
      if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v67);
      __asm
      {
        vmovss  xmm0, [rbp+120h+var_198]
        vmulss  xmm1, xmm0, dword ptr [rdi+28h]
        vmovss  [rbp+120h+var_198], xmm1
      }
      v70 = DVARFLT_compassIconMLGSpectatorScale;
      if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v70);
      __asm
      {
        vmovss  xmm0, [rbp+120h+var_19C]
        vmulss  xmm1, xmm0, dword ptr [rdi+28h]
        vmovss  [rbp+120h+var_19C], xmm1
      }
    }
    v73 = DVARFLT_compassMLGLargeMapInnerArrowOpacity;
    if ( this->m_lastStandEnabled )
    {
      codcaster_objective_circle_bg = cgMedia.compass.codcaster_objective_circle_bg;
      if ( !DVARFLT_compassMLGLargeMapInnerArrowOpacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGLargeMapInnerArrowOpacity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v73);
      __asm
      {
        vmulss  xmm2, xmm15, dword ptr [rdi+28h]
        vmovss  xmm15, cs:__real@3f2aaaab
        vmulss  xmm4, xmm15, [rbp+120h+var_19C]
        vmulss  xmm3, xmm15, [rbp+120h+var_198]
        vmovss  dword ptr [rsp+230h+var_1C0], xmm2
        vmovss  [rsp+230h+var_1C8], xmm13
        vmovss  [rsp+230h+var_1D0], xmm12
        vmovss  [rsp+230h+var_1D8], xmm11
        vxorps  xmm11, xmm11, xmm11
        vmovss  dword ptr [rsp+230h+var_1E0], xmm11
        vmovss  xmm6, cs:__real@3f800000
        vmovss  dword ptr [rsp+230h+outClipped], xmm6
        vmovss  dword ptr [rsp+230h+var_1F0], xmm6
        vmovss  dword ptr [rsp+230h+h], xmm11
        vmovss  dword ptr [rsp+230h+w], xmm11
        vmovss  dword ptr [rsp+230h+y], xmm4
        vmovss  dword ptr [rsp+230h+fmt], xmm3
        vmovss  xmm3, dword ptr [rbp+120h+var_130+4]; centerY
        vmovss  xmm2, dword ptr [rbp+120h+var_130]; centerX
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, yb, wb, hb, v144, outClippedb, v150, v153, v156, v159, v162, codcaster_objective_circle_bg, v169);
      codcaster_objective_revive_cross = cgMedia.compass.codcaster_objective_revive_cross;
      v101 = DVARFLT_compassMLGLargeMapInnerArrowOpacity;
      if ( !DVARFLT_compassMLGLargeMapInnerArrowOpacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGLargeMapInnerArrowOpacity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v101);
      __asm
      {
        vmulss  xmm1, xmm14, dword ptr [rdi+28h]
        vmulss  xmm3, xmm1, xmm10
        vmovss  xmm12, cs:__real@3f000000
        vmulss  xmm4, xmm12, [rbp+120h+var_19C]
        vmulss  xmm1, xmm12, [rbp+120h+var_198]
      }
      v164 = v169;
      material = (GfxImage *)codcaster_objective_revive_cross;
      __asm
      {
        vmovss  dword ptr [rsp+230h+var_1C0], xmm3
        vmovss  [rsp+230h+var_1C8], xmm9
        vmovss  [rsp+230h+var_1D0], xmm8
        vmovss  [rsp+230h+var_1D8], xmm7
        vmovss  dword ptr [rsp+230h+var_1E0], xmm11
        vmovss  dword ptr [rsp+230h+outClipped], xmm6
        vmovss  dword ptr [rsp+230h+var_1F0], xmm6
        vmovss  dword ptr [rsp+230h+h], xmm11
        vmovss  dword ptr [rsp+230h+w], xmm11
        vmovss  dword ptr [rsp+230h+y], xmm4
        vmovss  dword ptr [rsp+230h+fmt], xmm1
      }
    }
    else
    {
      codcaster_death_skull_outline = cgMedia.compass.codcaster_death_skull_outline;
      if ( !DVARFLT_compassMLGLargeMapInnerArrowOpacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGLargeMapInnerArrowOpacity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v73);
      __asm
      {
        vmulss  xmm2, xmm6, dword ptr [rdi+28h]
        vmovss  xmm8, cs:__real@3f2aaaab
        vmulss  xmm4, xmm8, [rbp+120h+var_19C]
        vmulss  xmm3, xmm8, [rbp+120h+var_198]
        vmovss  dword ptr [rsp+230h+var_1C0], xmm2
        vmovss  xmm0, dword ptr [rbp+120h+color+8]
        vmovss  [rsp+230h+var_1C8], xmm0
        vmovss  xmm1, dword ptr [rbp+120h+color+4]
        vmovss  [rsp+230h+var_1D0], xmm1
        vmovss  xmm0, dword ptr [rbp+120h+color]
        vmovss  [rsp+230h+var_1D8], xmm0
        vxorps  xmm7, xmm7, xmm7
        vmovss  dword ptr [rsp+230h+var_1E0], xmm7
        vmovss  xmm6, cs:__real@3f800000
        vmovss  dword ptr [rsp+230h+outClipped], xmm6
        vmovss  dword ptr [rsp+230h+var_1F0], xmm6
        vmovss  dword ptr [rsp+230h+h], xmm7
        vmovss  dword ptr [rsp+230h+w], xmm7
        vmovss  dword ptr [rsp+230h+y], xmm4
        vmovss  dword ptr [rsp+230h+fmt], xmm3
        vmovss  xmm3, dword ptr [rbp+120h+var_130+4]; centerY
        vmovss  xmm2, dword ptr [rbp+120h+var_130]; centerX
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, ya, wa, ha, v142, outClippeda, v148, v151, v154, v157, v160, codcaster_death_skull_outline, v169);
      codcaster_death_skull = cgMedia.compass.codcaster_death_skull;
      v87 = DVARFLT_compassMLGLargeMapInnerArrowOpacity;
      if ( !DVARFLT_compassMLGLargeMapInnerArrowOpacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGLargeMapInnerArrowOpacity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v87);
      __asm
      {
        vmulss  xmm2, xmm15, dword ptr [rdi+28h]
        vmulss  xmm4, xmm8, [rbp+120h+var_19C]
        vmulss  xmm3, xmm8, [rbp+120h+var_198]
      }
      v164 = v169;
      material = (GfxImage *)codcaster_death_skull;
      __asm
      {
        vmovss  dword ptr [rsp+230h+var_1C0], xmm2
        vmovss  [rsp+230h+var_1C8], xmm13
        vmovss  [rsp+230h+var_1D0], xmm12
        vmovss  [rsp+230h+var_1D8], xmm11
        vmovss  dword ptr [rsp+230h+var_1E0], xmm7
        vmovss  dword ptr [rsp+230h+outClipped], xmm6
        vmovss  dword ptr [rsp+230h+var_1F0], xmm6
        vmovss  dword ptr [rsp+230h+h], xmm7
        vmovss  dword ptr [rsp+230h+w], xmm7
        vmovss  dword ptr [rsp+230h+y], xmm4
        vmovss  dword ptr [rsp+230h+fmt], xmm3
      }
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+120h+var_130+4]; centerY
      vmovss  xmm2, dword ptr [rbp+120h+var_130]; centerX
    }
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmt, y, w, h, v143, outClipped, v149, v152, v155, v158, v161, material, v164);
    __asm
    {
      vmovss  xmm4, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmulss  xmm3, xmm10, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
    }
    team = CharacterInfo->team;
    __asm
    {
      vinsertps xmm4, xmm4, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4, 10h; vec4_t const colorWhite
      vinsertps xmm4, xmm4, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8, 20h ; ' '; vec4_t const colorWhite
      vinsertps xmm4, xmm4, xmm3, 30h ; '0'
      vmovups [rbp+120h+var_100], xmm4
      vmovdqa [rbp+120h+var_100], xmm4
    }
    LocalClientStatics = v176;
    __asm
    {
      vmovss  xmm0, cs:__real@435c0000
      vmovss  dword ptr [rsp+230h+fmt], xmm0
      vmovss  xmm3, dword ptr [rbp+120h+var_130+4]
      vmovss  xmm2, dword ptr [rbp+120h+var_130]
    }
    CgCompassSystem::DrawPlayerNumber(this, *p_ownerNum, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, team, 0, largeMap, &v183, v176, element, v169);
    memset(&in, 0, sizeof(in));
    v31 = v174;
    goto LABEL_54;
  }
LABEL_55:
  memset(&out, 0, sizeof(out));
  _R11 = &v185;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
CgCompassSystemMP::DrawDecoys
==============
*/
void CgCompassSystemMP::DrawDecoys(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  const rectDef_s *v25; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  unsigned int m_omnvarCompassHideWeaponPings; 
  OmnvarData *Data; 
  char v34; 
  int *p_beginRadarFadeTime; 
  __int64 v44; 
  bool IsActorWithinFadeTime; 
  bool IsActorWithinPingTime; 
  CompassType v52; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  char v59; 
  lua_State *v61; 
  GfxImage *v62; 
  LUIElement *v63; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float outVector; 
  float outVectora; 
  float w; 
  float wa; 
  float h; 
  float ha; 
  float v94; 
  float v95; 
  float outClipped; 
  float outClippeda; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float width; 
  float v110; 
  OmnvarValue current; 
  CompassType compassTypea; 
  rectDef_s *v114; 
  GfxImage *material; 
  LUIElement *v116; 
  lua_State *v117; 
  float outAngle; 
  SecureVec3 out; 
  __int64 v120; 
  vec4_t v121; 
  rectDef_s x; 
  vec2_t north; 
  char v124; 
  void *retaddr; 

  _RAX = &retaddr;
  v120 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  compassTypea = compassType;
  v25 = rect;
  v114 = (rectDef_s *)rect;
  v116 = element;
  v117 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3188, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3192, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  m_omnvarCompassHideWeaponPings = LocalClientGlobals->m_omnvarCompassHideWeaponPings;
  if ( m_omnvarCompassHideWeaponPings == -1 || (Data = CG_Omnvar_GetData(this->m_localClientNum, m_omnvarCompassHideWeaponPings)) == NULL )
  {
    current.integer = 0;
  }
  else
  {
    current = Data->current;
    if ( current.integer == 1 )
      goto LABEL_32;
    v25 = v114;
  }
  CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &north);
  *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  _RBX = color;
  __asm
  {
    vmulss  xmm10, xmm0, dword ptr [rbx+0Ch]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm10, xmm6
  }
  if ( !v34 && CharacterInfo->infoValid && (LocalClientGlobals->m_isMLGSpectator || CharacterInfo->team != TEAM_SPECTATOR) )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, v25, &x.x, &x.y, &x.w, &x.h);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, [rbp+0F0h+var_100]
      vaddss  xmm15, xmm1, [rbp+0F0h+x]
      vmulss  xmm0, xmm3, [rbp+0F0h+var_FC]
      vaddss  xmm7, xmm0, [rbp+0F0h+y]
      vmovss  [rbp+0F0h+var_160], xmm7
      vmovss  xmm1, dword ptr [rbx]
      vmovss  dword ptr [rbp+0F0h+var_118], xmm1
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rbp+0F0h+var_118+4], xmm0
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+0F0h+var_118+8], xmm1
    }
    CgCompassSystemMP::GetEnemyCompassColor(this, &v121, LocalClientGlobals);
    material = Image_Register("icon_minimap_enemy", IMAGE_TRACK_HUD);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    p_beginRadarFadeTime = &this->m_compassDecoyActors[0].beginRadarFadeTime;
    v44 = 15i64;
    __asm
    {
      vmovss  xmm14, [rbp+0F0h+boundsRadius]
      vmovss  xmm11, dword ptr [rbp+0F0h+var_118+8]
      vmovss  xmm12, dword ptr [rbp+0F0h+var_118+4]
      vmovss  xmm13, dword ptr [rbp+0F0h+var_118]
      vmovss  xmm8, cs:__real@3f800000
    }
    do
    {
      if ( LocalClientGlobals->time < *(p_beginRadarFadeTime - 2) )
      {
        IsActorWithinFadeTime = CgCompassSystemMP::IsActorWithinFadeTime(this, p_beginRadarFadeTime - 1);
        IsActorWithinPingTime = CgCompassSystemMP::IsActorWithinPingTime(this, p_beginRadarFadeTime);
        if ( (IsActorWithinFadeTime || IsActorWithinPingTime) && (current.integer != 2 || LocalClientGlobals->predictedPlayerState.radarEnabled || IsActorWithinPingTime) )
        {
          __asm { vmovss  dword ptr [rsp+200h+fmt], xmm14 }
          v52 = compassTypea;
          if ( !CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, fmt, &north, (const vec2_t *)&out, (const vec2_t *)(p_beginRadarFadeTime + 1), NULL, (vec2_t *)&v121) || Dvar_GetBool_Internal_DebugName(DVARBOOL_compassClampIcons, "compassClampIcons") )
          {
            CalcCompassFriendlySize(v52, &v110, &width);
            __asm
            {
              vaddss  xmm1, xmm15, dword ptr [rbp+0F0h+var_118]
              vmovss  dword ptr [rbp+0F0h+var_118], xmm1
              vaddss  xmm0, xmm7, dword ptr [rbp+0F0h+var_118+4]
              vmovss  dword ptr [rbp+0F0h+var_118+4], xmm0
            }
            vertAlign = v114->vertAlign;
            horzAlign = v114->horzAlign;
            ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
            ScrPlace_ApplyRect(ActivePlacement, v121.v, &v121.v[1], &v110, &width, horzAlign, vertAlign);
            *(double *)&_XMM0 = CgCompassSystemMP::GetActorPingFadeAmount(this, p_beginRadarFadeTime);
            __asm { vmovaps xmm9, xmm0 }
            *(double *)&_XMM0 = CgCompassSystemMP::GetActorFadeAmount(this, p_beginRadarFadeTime - 1);
            __asm { vmovaps xmm7, xmm0 }
            v61 = v117;
            v62 = material;
            v63 = v116;
            __asm { vcomiss xmm9, xmm6 }
            if ( !v59 )
            {
              __asm
              {
                vmulss  xmm1, xmm9, xmm10
                vmovss  dword ptr [rsp+200h+var_190], xmm1
                vmovss  [rsp+200h+var_198], xmm11
                vmovss  [rsp+200h+var_1A0], xmm12
                vmovss  [rsp+200h+var_1A8], xmm13
                vmovss  [rsp+200h+var_1B0], xmm6
                vmovss  dword ptr [rsp+200h+outClipped], xmm8
                vmovss  dword ptr [rsp+200h+var_1C0], xmm8
                vmovss  dword ptr [rsp+200h+h], xmm6
                vmovss  dword ptr [rsp+200h+w], xmm6
                vmovss  xmm0, [rbp+0F0h+width]
                vmovss  dword ptr [rsp+200h+outVector], xmm0
                vmovss  xmm1, [rbp+0F0h+var_168]
                vmovss  dword ptr [rsp+200h+fmt], xmm1
                vmovss  xmm3, dword ptr [rbp+0F0h+var_118+4]; centerY
                vmovss  xmm2, dword ptr [rbp+0F0h+var_118]; centerX
              }
              LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v116, *(float *)&_XMM2, *(float *)&_XMM3, fmta, outVector, w, h, v94, outClipped, v98, v100, v102, v104, v106, material, v117);
            }
            __asm { vcomiss xmm7, xmm6 }
            if ( !v59 )
            {
              __asm
              {
                vmulss  xmm0, xmm7, xmm10
                vmovss  dword ptr [rsp+200h+var_190], xmm0
                vmovss  [rsp+200h+var_198], xmm11
                vmovss  [rsp+200h+var_1A0], xmm12
                vmovss  [rsp+200h+var_1A8], xmm13
                vmovss  [rsp+200h+var_1B0], xmm6
                vmovss  dword ptr [rsp+200h+outClipped], xmm8
                vmovss  dword ptr [rsp+200h+var_1C0], xmm8
                vmovss  dword ptr [rsp+200h+h], xmm6
                vmovss  dword ptr [rsp+200h+w], xmm6
                vmovss  xmm0, [rbp+0F0h+width]
                vmovss  dword ptr [rsp+200h+outVector], xmm0
                vmovss  xmm1, [rbp+0F0h+var_168]
                vmovss  dword ptr [rsp+200h+fmt], xmm1
                vmovss  xmm3, dword ptr [rbp+0F0h+var_118+4]; centerY
                vmovss  xmm2, dword ptr [rbp+0F0h+var_118]; centerX
              }
              LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v63, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, outVectora, wa, ha, v95, outClippeda, v99, v101, v103, v105, v107, v62, v61);
            }
            __asm { vmovss  xmm7, [rbp+0F0h+var_160] }
          }
        }
      }
      p_beginRadarFadeTime += 7;
      --v44;
    }
    while ( v44 );
    memset(&out, 0, sizeof(out));
  }
LABEL_32:
  _R11 = &v124;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
CgCompassSystemMP::DrawEnemies
==============
*/
void CgCompassSystemMP::DrawEnemies(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  unsigned int m_omnvarCompassHideWeaponPings; 
  OmnvarData *Data; 
  int integer; 
  __int64 BombCarrierEntityNum; 
  __int64 v43; 
  __int64 v44; 
  signed int v48; 
  CompassActorMP *v50; 
  characterInfo_t *v51; 
  int FlagCarrierEntityNum; 
  bool v53; 
  bool v54; 
  cg_t *v55; 
  const clientInfo_t *v56; 
  const clientInfo_t *v57; 
  CgGlobalsMP *v58; 
  const dvar_t *v59; 
  bool HasPerk; 
  const ScriptableEventCompassIconDef *iconState; 
  int v62; 
  bool v63; 
  int lastUpdate; 
  int time; 
  bool IsActorWithinFadeTime; 
  bool IsActorWithinPingTime; 
  vec2_t *p_outPos; 
  CompassType v69; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  CompassType v78; 
  CgMLGSpectator *MLGSpectator; 
  int SelectedClientNum; 
  int v85; 
  LUIElement *v92; 
  const GfxImage *minimap_codcaster_player_arrow_fullmap_bg; 
  char v106; 
  int v108; 
  lua_State *v111; 
  const GfxImage *minimap_codcaster_player_arrow_fullmap_border_bold_shooting; 
  const GfxImage *enemy_juggernaut; 
  char v117; 
  const ScriptableEventCompassIconDef *v118; 
  const ScriptableEventCompassIconDef *v129; 
  int v140; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float outVector; 
  float outVectora; 
  float outVectorb; 
  float outVectorc; 
  float outVectord; 
  float w; 
  float wa; 
  float wb; 
  float wc; 
  float wd; 
  float h; 
  float ha; 
  float hb; 
  float hc; 
  float hd; 
  float v177; 
  float v178; 
  float v179; 
  float v180; 
  float v181; 
  float outClipped; 
  float outClippeda; 
  float outClippedb; 
  float outClippedc; 
  float outClippedd; 
  float v187; 
  float v188; 
  float v189; 
  float v190; 
  float v191; 
  LUIElement *v192; 
  float v193; 
  float v194; 
  float v195; 
  float v196; 
  float v197; 
  float v198; 
  float v199; 
  float v200; 
  float v201; 
  float v202; 
  float v203; 
  float v204; 
  float v205; 
  float v206; 
  float v207; 
  float v208; 
  float v209; 
  float v210; 
  float v211; 
  float v212; 
  GfxImage *material; 
  float width; 
  char v216; 
  bool v217; 
  float v218; 
  float v219; 
  int v220; 
  CompassType compassTypea; 
  lua_State *v222; 
  cg_t *cgameGlob; 
  LUIElement *v225; 
  CgStatic *v226; 
  __int64 v227; 
  int v228; 
  float outAngle; 
  __int64 v231; 
  rectDef_s *v232; 
  __int64 v233; 
  vec2_t outPos; 
  SecureVec3 out; 
  vec4_t v236; 
  __int64 v237[3]; 
  vec2_t v238; 
  __int128 v239; 
  vec4_t v240; 
  rectDef_s x; 
  vec2_t north; 
  char v243; 
  void *retaddr; 

  _RAX = &retaddr;
  v237[2] = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  v217 = largeMap;
  compassTypea = compassType;
  v232 = (rectDef_s *)rect;
  v225 = element;
  v222 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  cgameGlob = LocalClientGlobals;
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3364, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  v226 = LocalClientStatics;
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3368, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  m_omnvarCompassHideWeaponPings = LocalClientGlobals->m_omnvarCompassHideWeaponPings;
  if ( m_omnvarCompassHideWeaponPings == -1 || (Data = CG_Omnvar_GetData(this->m_localClientNum, m_omnvarCompassHideWeaponPings)) == NULL )
    integer = 0;
  else
    integer = Data->current.integer;
  v228 = integer;
  if ( integer != 1 )
  {
    CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &north);
    *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
    _RBX = color;
    __asm
    {
      vmulss  xmm14, xmm0, dword ptr [rbx+0Ch]
      vxorps  xmm11, xmm11, xmm11
      vucomiss xmm14, xmm11
    }
    if ( !v53 && CharacterInfo->infoValid && (LocalClientGlobals->m_isMLGSpectator || CharacterInfo->team != TEAM_SPECTATOR) )
    {
      BombCarrierEntityNum = GetBombCarrierEntityNum(LocalClientGlobals);
      CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, v232, &x.x, &x.y, &x.w, &x.h);
      __asm
      {
        vmovss  xmm3, cs:__real@3f000000
        vmulss  xmm1, xmm3, [rbp+170h+var_108]
        vaddss  xmm6, xmm1, [rbp+170h+x]
        vmovss  [rbp+170h+var_198], xmm6
        vmulss  xmm0, xmm3, [rbp+170h+var_104]
        vaddss  xmm7, xmm0, [rbp+170h+y]
        vmovss  [rbp+170h+var_1C8], xmm7
        vmovss  xmm1, dword ptr [rbx]
        vmovss  dword ptr [rbp+170h+var_130], xmm1
        vmovss  xmm0, dword ptr [rbx+4]
        vmovss  dword ptr [rbp+170h+var_130+4], xmm0
        vmovss  xmm1, dword ptr [rbx+8]
        vmovss  dword ptr [rbp+170h+var_130+8], xmm1
      }
      ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_compassShowEnemies, "bg_compassShowEnemies");
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v220 = 0;
      v43 = BombCarrierEntityNum;
      v227 = BombCarrierEntityNum;
      v44 = 0i64;
      v231 = 0i64;
      __asm
      {
        vmovss  xmm15, [rbp+170h+boundsRadius]
        vmovss  xmm12, cs:__real@3f800000
        vmovss  xmm13, cs:__real@3f4ccccd
      }
      v48 = 0;
      while ( 1 )
      {
        if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
          __asm { vmovaps xmm0, cs:xmmword_147FA8A20 }
        else
          __asm { vmovaps xmm0, xmmword ptr cs:enemyColors }
        __asm { vmovups [rbp+170h+var_130], xmm0 }
        CgCompassSystemMP::GetEnemyCompassLightColor(this, &v240, LocalClientGlobals);
        v50 = &this->m_compassActors[v44];
        v51 = CgStatic::GetCharacterInfo(LocalClientStatics, this->m_compassActors[v44].ownerNum);
        *(_QWORD *)v236.v = v51;
        FlagCarrierEntityNum = GetFlagCarrierEntityNum(LocalClientGlobals, (const team_t)v51->team);
        if ( LocalClientGlobals->m_isMLGSpectator )
        {
          if ( v51->team != TEAM_ONE || LocalClientGlobals->predictedPlayerState.clientNum == v48 || v43 == v231 )
            goto LABEL_125;
          v53 = FlagCarrierEntityNum == v48;
        }
        else
        {
          v53 = (v50->flags & 1) == 0;
        }
        if ( !v53 && !CG_Players_ShouldHidePlayerFromLocalPlayer((const LocalClientNum_t)this->m_localClientNum, v50->ownerNum) )
          break;
LABEL_125:
        v220 = ++v48;
        v44 = ++v231;
        if ( v48 >= 248 )
          goto LABEL_126;
      }
      v54 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, FIRING|0x20) && bitarray_base<bitarray<224>>::testBit(&LocalClientGlobals->predictedPlayerState.sightedEnemyPlayersMask, v48);
      v55 = cgameGlob;
      if ( cgameGlob->time >= v50->pingTime )
        v50->wasPinged = 0;
      v56 = LocalClientStatics->GetClientInfo(LocalClientStatics, v55->predictedPlayerState.clientNum);
      if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3474, ASSERT_TYPE_ASSERT, "(myClientInfo)", (const char *)&queryFormat, "myClientInfo") )
        __debugbreak();
      v57 = LocalClientStatics->GetClientInfo(LocalClientStatics, v48);
      if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3476, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
        __debugbreak();
      this->ComputeEnemyCompassColor(this, v56, v57, (vec4_t *)&v239);
      v58 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      v59 = DVARBOOL_bg_compassShowEnemies;
      if ( !DVARBOOL_bg_compassShowEnemies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassShowEnemies") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v59);
      if ( v59->current.enabled || v58->m_isMLGSpectator || (HasPerk = BG_HasPerk(&v50->perks, 0x2Eu), BG_HasPerk(&v50->perks, 0x2Fu)) || HasPerk || (iconState = v50->iconState) != NULL && iconState->enemyCompassIconAlwaysVisible || v50->wasPinged || v54 )
      {
        v62 = 1;
        v216 = 1;
      }
      else
      {
        v62 = 0;
        v216 = 0;
      }
      v63 = (v50->flags & 0x10) != 0;
      if ( v62 )
      {
        lastUpdate = v50->lastUpdate;
        LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
        time = cgameGlob->time;
        if ( lastUpdate > time )
        {
          v50->lastUpdate = 0;
          time = LocalClientGlobals->time;
          lastUpdate = 0;
        }
        if ( lastUpdate < time - 500 )
          goto LABEL_123;
      }
      IsActorWithinFadeTime = CgCompassSystemMP::IsActorWithinFadeTime(this, &v50->beginFadeTime);
      if ( v62 )
        IsActorWithinPingTime = 1;
      else
        IsActorWithinPingTime = CgCompassSystemMP::IsActorWithinPingTime(this, &v50->beginRadarFadeTime);
      if ( !IsActorWithinFadeTime && !IsActorWithinPingTime )
        goto LABEL_122;
      if ( v228 == 2 && !cgameGlob->predictedPlayerState.radarEnabled && !IsActorWithinPingTime )
      {
        LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
        goto LABEL_123;
      }
      if ( v62 )
      {
        CompassActor_GetLastPos(v50, &outPos);
        p_outPos = &outPos;
      }
      else
      {
        if ( !v50->lastEnemyPos.Get_lastEnemyPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 233, ASSERT_TYPE_ASSERT, "(actor->lastEnemyPos.Get_lastEnemyPos)", (const char *)&queryFormat, "actor->lastEnemyPos.Get_lastEnemyPos") )
          __debugbreak();
        ((void (__fastcall *)(vec4_t *, __int64 *))((unsigned __int64)v50->lastEnemyPos.Get_lastEnemyPos ^ (unsigned __int64)&v50->lastEnemyPos ^ s_aab_get_pointer_lastenemypos))(&v50->lastEnemyPos.lastEnemyPos, v237);
        v233 = v237[0];
        memset(v237, 0, 0xCui64);
        p_outPos = (vec2_t *)&v233;
      }
      v69 = compassTypea;
      __asm { vmovss  dword ptr [rsp+280h+fmt], xmm15 }
      if ( CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, fmt, &north, (const vec2_t *)&out, p_outPos, NULL, &v238) && !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassClampIcons, "compassClampIcons") )
      {
LABEL_122:
        LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
        goto LABEL_123;
      }
      CalcCompassFriendlySize(v69, &v219, &v218);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rbp+170h+var_138]
        vmovss  dword ptr [rbp+170h+var_138], xmm1
        vaddss  xmm0, xmm7, dword ptr [rbp+170h+var_138+4]
        vmovss  dword ptr [rbp+170h+var_138+4], xmm0
      }
      vertAlign = v232->vertAlign;
      horzAlign = v232->horzAlign;
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      ScrPlace_ApplyRect(ActivePlacement, (float *)&v238, (float *)&v238 + 1, &v219, &v218, horzAlign, vertAlign);
      if ( v62 )
      {
        __asm { vmovaps xmm6, xmm12 }
      }
      else
      {
        *(double *)&_XMM0 = CgCompassSystemMP::GetActorPingFadeAmount(this, &v50->beginRadarFadeTime);
        __asm { vmovaps xmm6, xmm0 }
      }
      *(double *)&_XMM0 = CgCompassSystemMP::GetActorFadeAmount(this, &v50->beginFadeTime);
      __asm { vmovaps xmm10, xmm0 }
      LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
      if ( cgameGlob->predictedPlayerState.radarShowEnemyDirection && !v63 || cgameGlob->m_isMLGSpectator )
      {
        __asm { vmovss  xmm0, [rbp+170h+outAngle] }
        if ( v62 )
          __asm { vsubss  xmm0, xmm0, dword ptr [rsi+8] }
        else
          __asm { vsubss  xmm0, xmm0, dword ptr [rsi+58h]; angle }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm { vmovss  [rbp+170h+width], xmm0 }
        v78 = compassTypea;
        if ( (cropPartialMap || compassTypea || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation")) && LocalClientGlobals->m_isMLGSpectator && this->MapShouldRotate(this) )
        {
          this->MapRotationFactor(this);
          __asm
          {
            vmovss  xmm1, [rbp+170h+width]
            vsubss  xmm0, xmm1, xmm0
            vmovss  [rbp+170h+width], xmm0
          }
        }
      }
      else
      {
        __asm { vmovss  [rbp+170h+width], xmm11 }
        v78 = compassTypea;
      }
      __asm { vmovss  xmm3, [rbp+170h+width]; in }
      CgCompassSystem::WorldYawToCompass(this, v78, LocalClientGlobals, *(const float *)&_XMM3, &width);
      if ( LocalClientGlobals->m_isMLGSpectator )
      {
        if ( v217 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
          __asm
          {
            vmulss  xmm0, xmm0, [rbp+170h+var_1E0]
            vmovss  [rbp+170h+var_1E0], xmm0
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
          __asm
          {
            vmulss  xmm0, xmm0, [rbp+170h+var_1E4]
            vmovss  [rbp+170h+var_1E4], xmm0
          }
        }
        MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
        __asm { vmovss  dword ptr [rbp+170h+var_130+0Ch], xmm12 }
        SelectedClientNum = CgMLGSpectator::GetSelectedClientNum(MLGSpectator);
        v85 = v220;
        __asm
        {
          vmulss  xmm3, xmm13, [rbp+170h+var_1E4]
          vmulss  xmm2, xmm13, [rbp+170h+var_1E0]
          vmovss  xmm0, dword ptr [rbp+170h+var_120+0Ch]
          vmovss  xmm7, dword ptr [rbp+170h+var_120+8]
          vmovss  xmm8, dword ptr [rbp+170h+var_120+4]
          vmovss  xmm9, dword ptr [rbp+170h+var_120]
        }
        v92 = v225;
        if ( v220 == SelectedClientNum )
          material = (GfxImage *)cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_bold;
        else
          material = (GfxImage *)cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border;
        __asm
        {
          vmovss  dword ptr [rsp+280h+var_210], xmm0
          vmovss  [rsp+280h+var_218], xmm7
          vmovss  [rsp+280h+var_220], xmm8
          vmovss  [rsp+280h+var_228], xmm9
          vmovss  xmm0, [rbp+170h+width]
          vmovss  dword ptr [rsp+280h+var_230], xmm0
          vmovss  dword ptr [rsp+280h+outClipped], xmm12
          vmovss  dword ptr [rsp+280h+var_240], xmm12
          vmovss  dword ptr [rsp+280h+h], xmm11
          vmovss  dword ptr [rsp+280h+w], xmm11
          vmovss  dword ptr [rsp+280h+outVector], xmm3
          vmovss  dword ptr [rsp+280h+fmt], xmm2
          vmovss  xmm3, dword ptr [rbp+170h+var_138+4]; centerY
          vmovss  xmm2, dword ptr [rbp+170h+var_138]; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v225, *(float *)&_XMM2, *(float *)&_XMM3, fmta, outVector, w, h, v177, outClipped, v187, v193, v198, v203, v208, material, v222);
        minimap_codcaster_player_arrow_fullmap_bg = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_bg;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGLargeMapInnerArrowOpacity, "compassMLGLargeMapInnerArrowOpacity");
        __asm
        {
          vmulss  xmm2, xmm0, dword ptr [rbp+170h+var_130+0Ch]
          vmulss  xmm4, xmm13, [rbp+170h+var_1E4]
          vmulss  xmm3, xmm13, [rbp+170h+var_1E0]
          vmovss  dword ptr [rsp+280h+var_210], xmm2
          vmovss  xmm0, dword ptr [rbp+170h+var_130+8]
          vmovss  [rsp+280h+var_218], xmm0
          vmovss  xmm1, dword ptr [rbp+170h+var_130+4]
          vmovss  [rsp+280h+var_220], xmm1
          vmovss  xmm0, dword ptr [rbp+170h+var_130]
          vmovss  [rsp+280h+var_228], xmm0
          vmovss  xmm1, [rbp+170h+width]
          vmovss  dword ptr [rsp+280h+var_230], xmm1
          vmovss  dword ptr [rsp+280h+outClipped], xmm12
          vmovss  dword ptr [rsp+280h+var_240], xmm12
          vmovss  dword ptr [rsp+280h+h], xmm11
          vmovss  dword ptr [rsp+280h+w], xmm11
          vmovss  dword ptr [rsp+280h+outVector], xmm4
          vmovss  dword ptr [rsp+280h+fmt], xmm3
          vmovss  xmm3, dword ptr [rbp+170h+var_138+4]; centerY
          vmovss  xmm2, dword ptr [rbp+170h+var_138]; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v92, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, outVectora, wa, ha, v178, outClippeda, v188, v194, v199, v204, v209, minimap_codcaster_player_arrow_fullmap_bg, v222);
        __asm { vcomiss xmm10, xmm11 }
        if ( !(v106 | v53) )
        {
          __asm
          {
            vmulss  xmm6, xmm10, xmm14
            vmovss  dword ptr [rbp+170h+var_120+0Ch], xmm6
          }
          v108 = CgMLGSpectator::GetSelectedClientNum(MLGSpectator);
          __asm
          {
            vmulss  xmm3, xmm13, [rbp+170h+var_1E4]
            vmulss  xmm2, xmm13, [rbp+170h+var_1E0]
          }
          v111 = v222;
          __asm { vmovss  xmm0, [rbp+170h+width] }
          v53 = v85 == v108;
          minimap_codcaster_player_arrow_fullmap_border_bold_shooting = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_bold_shooting;
          if ( !v53 )
            minimap_codcaster_player_arrow_fullmap_border_bold_shooting = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_shooting;
          __asm
          {
            vmovss  dword ptr [rsp+280h+var_210], xmm6
            vmovss  [rsp+280h+var_218], xmm7
            vmovss  [rsp+280h+var_220], xmm8
            vmovss  [rsp+280h+var_228], xmm9
            vmovss  dword ptr [rsp+280h+var_230], xmm0
            vmovss  dword ptr [rsp+280h+outClipped], xmm12
            vmovss  dword ptr [rsp+280h+var_240], xmm12
            vmovss  dword ptr [rsp+280h+h], xmm11
            vmovss  dword ptr [rsp+280h+w], xmm11
            vmovss  dword ptr [rsp+280h+outVector], xmm3
            vmovss  dword ptr [rsp+280h+fmt], xmm2
            vmovss  xmm3, dword ptr [rbp+170h+var_138+4]; centerY
            vmovss  xmm2, dword ptr [rbp+170h+var_138]; centerX
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v92, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, outVectorb, wb, hb, v179, outClippedb, v189, v195, v200, v205, v210, minimap_codcaster_player_arrow_fullmap_border_bold_shooting, v222);
          __asm { vmovss  xmm7, [rbp+170h+var_1C8] }
          goto LABEL_118;
        }
        __asm { vmovss  xmm7, [rbp+170h+var_1C8] }
LABEL_117:
        v111 = v222;
LABEL_118:
        if ( LocalClientGlobals->m_isMLGSpectator )
        {
          __asm { vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite }
          v140 = *(_DWORD *)(*(_QWORD *)v236.v + 12i64);
          __asm { vmovdqa [rbp+170h+var_160], xmm0 }
          v192 = v92;
          LocalClientStatics = v226;
          __asm
          {
            vmovss  xmm0, [rbp+170h+width]
            vmovss  dword ptr [rsp+280h+fmt], xmm0
            vmovss  xmm3, dword ptr [rbp+170h+var_138+4]
            vmovss  xmm2, dword ptr [rbp+170h+var_138]
          }
          CgCompassSystem::DrawPlayerNumber(this, v50->ownerNum, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v140, 0, v217, &v236, v226, v192, v111);
          __asm { vmovss  xmm6, [rbp+170h+var_198] }
LABEL_124:
          v43 = v227;
          v48 = v220;
          goto LABEL_125;
        }
        __asm { vmovss  xmm6, [rbp+170h+var_198] }
LABEL_123:
        LocalClientStatics = v226;
        goto LABEL_124;
      }
      if ( BG_HasPerk(&v50->perks, 0x2Fu) )
      {
        __asm { vmovss  [rbp+170h+width], xmm11 }
        enemy_juggernaut = cgMedia.compass.enemy_juggernaut;
      }
      else
      {
        if ( LocalClientGlobals->predictedPlayerState.radarShowEnemyDirection )
        {
          if ( !v63 )
          {
            v118 = v50->iconState;
            if ( v118 )
              enemy_juggernaut = v118->enemyCompassIconDirectional->textureTable->image;
            else
              enemy_juggernaut = cgMedia.compass.enemy_arrow;
            goto LABEL_111;
          }
          v117 = v62;
        }
        else
        {
          v117 = v216;
        }
        __asm { vmovaps xmm2, xmm10; fadeTimeAmount }
        enemy_juggernaut = CG_CompassMP_GetEnemyMaterial(v50, v117, *(double *)&_XMM2);
      }
LABEL_111:
      if ( enemy_juggernaut )
      {
        __asm
        {
          vcomiss xmm6, xmm11
          vmulss  xmm0, xmm6, xmm14
          vmovss  dword ptr [rbp+170h+var_130+0Ch], xmm0
        }
        v111 = v222;
        __asm
        {
          vmovss  dword ptr [rsp+280h+var_210], xmm0
          vmovss  xmm0, dword ptr [rbp+170h+var_130+8]
          vmovss  [rsp+280h+var_218], xmm0
          vmovss  xmm1, dword ptr [rbp+170h+var_130+4]
          vmovss  [rsp+280h+var_220], xmm1
          vmovss  xmm0, dword ptr [rbp+170h+var_130]
          vmovss  [rsp+280h+var_228], xmm0
          vmovss  xmm1, [rbp+170h+width]
          vmovss  dword ptr [rsp+280h+var_230], xmm1
          vmovss  dword ptr [rsp+280h+outClipped], xmm12
          vmovss  dword ptr [rsp+280h+var_240], xmm12
          vmovss  dword ptr [rsp+280h+h], xmm11
          vmovss  dword ptr [rsp+280h+w], xmm11
          vmovss  xmm0, [rbp+170h+var_1E4]
          vmovss  dword ptr [rsp+280h+outVector], xmm0
          vmovss  xmm1, [rbp+170h+var_1E0]
          vmovss  dword ptr [rsp+280h+fmt], xmm1
          vmovss  xmm3, dword ptr [rbp+170h+var_138+4]; centerY
          vmovss  xmm2, dword ptr [rbp+170h+var_138]; centerX
        }
        v92 = v225;
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v225, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, outVectorc, wc, hc, v180, outClippedc, v190, v196, v201, v206, v211, enemy_juggernaut, v222);
        __asm { vcomiss xmm10, xmm11 }
        if ( !v106 || (v129 = v50->iconState) != NULL && v129->enemyCompassIconAlwaysVisible )
        {
          __asm
          {
            vmulss  xmm0, xmm10, xmm14
            vmovss  dword ptr [rbp+170h+var_130+0Ch], xmm0
            vmovss  dword ptr [rsp+280h+var_210], xmm0
            vmovss  xmm0, dword ptr [rbp+170h+var_130+8]
            vmovss  [rsp+280h+var_218], xmm0
            vmovss  xmm1, dword ptr [rbp+170h+var_130+4]
            vmovss  [rsp+280h+var_220], xmm1
            vmovss  xmm0, dword ptr [rbp+170h+var_130]
            vmovss  [rsp+280h+var_228], xmm0
            vmovss  xmm1, [rbp+170h+width]
            vmovss  dword ptr [rsp+280h+var_230], xmm1
            vmovss  dword ptr [rsp+280h+outClipped], xmm12
            vmovss  dword ptr [rsp+280h+var_240], xmm12
            vmovss  dword ptr [rsp+280h+h], xmm11
            vmovss  dword ptr [rsp+280h+w], xmm11
            vmovss  xmm0, [rbp+170h+var_1E4]
            vmovss  dword ptr [rsp+280h+outVector], xmm0
            vmovss  xmm1, [rbp+170h+var_1E0]
            vmovss  dword ptr [rsp+280h+fmt], xmm1
            vmovss  xmm3, dword ptr [rbp+170h+var_138+4]; centerY
            vmovss  xmm2, dword ptr [rbp+170h+var_138]; centerX
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v92, *(float *)&_XMM2, *(float *)&_XMM3, fmte, outVectord, wd, hd, v181, outClippedd, v191, v197, v202, v207, v212, enemy_juggernaut, v111);
        }
        goto LABEL_118;
      }
      v92 = v225;
      goto LABEL_117;
    }
  }
LABEL_126:
  memset(&out, 0, sizeof(out));
  memset(&v233, 0, sizeof(v233));
  memset(&outPos, 0, sizeof(outPos));
  _R11 = &v243;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
CgCompassSystemMP::DrawFriendlies
==============
*/
void CgCompassSystemMP::DrawFriendlies(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  int clientNum; 
  CgHandler *Handler; 
  bool IsGameTypeQuick_BR; 
  char v30; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  bool v34; 
  int team; 
  int v46; 
  __int64 v47; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  CompassActorMP *v52; 
  int lastUpdate; 
  int time; 
  characterInfo_t *v56; 
  int FlagCarrierEntityNum; 
  bool v59; 
  characterInfo_t *v60; 
  int v61; 
  clientInfo_t *v62; 
  clientInfo_t *v63; 
  bool m_useSquads; 
  bool v65; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  CompassType v78; 
  int v81; 
  int pingTime; 
  bool wasPinged; 
  const GfxImage *friendly_chatting; 
  const ScriptableEventCompassIconDef *iconState; 
  const GfxImage *image; 
  const ScriptableEventCompassIconDef *v97; 
  const GfxImage *friendly_yelling; 
  int v121; 
  CgMLGSpectator *MLGSpectator; 
  int SelectedClientNum; 
  const GfxImage *minimap_codcaster_player_arrow_fullmap_border_bold; 
  const GfxImage *minimap_codcaster_player_arrow_fullmap_bg; 
  LUIElement *v147; 
  lua_State *v158; 
  LocalClientNum_t m_localClientNum; 
  CgMLGSpectator *v169; 
  const GfxImage *v175; 
  int v185; 
  const GfxImage *minimap_codcaster_player_arrow_fullmap_border_bold_shooting; 
  int v203; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmt; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float outVectora; 
  float outVectorb; 
  float outVector; 
  float outVectorc; 
  float outVectord; 
  float outVectore; 
  float outVectorf; 
  float outVectorg; 
  float outVectorh; 
  float wa; 
  float wb; 
  float w; 
  float wc; 
  float wd; 
  float we; 
  float wf; 
  float wg; 
  float wh; 
  float ha; 
  float hb; 
  float h; 
  float hc; 
  float hd; 
  float he; 
  float hf; 
  float hg; 
  float hh; 
  float v257; 
  float v258; 
  float v259; 
  float v260; 
  float v261; 
  float v262; 
  float v263; 
  float v264; 
  float outClippeda; 
  float outClippedb; 
  float outClipped; 
  vec2_t *outClippedc; 
  float outClippedd; 
  float outClippede; 
  float outClippedf; 
  float outClippedg; 
  float outClippedh; 
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
  float v288; 
  float v289; 
  float v290; 
  float v291; 
  float v292; 
  float v293; 
  float v294; 
  float v295; 
  float v296; 
  float v297; 
  float v298; 
  float v299; 
  float v300; 
  float v301; 
  float v302; 
  float v303; 
  float v304; 
  float v305; 
  float v306; 
  float v307; 
  float v308; 
  float v309; 
  float v310; 
  float v311; 
  float v312; 
  float v313; 
  GfxImage *material; 
  GfxImage *materiala; 
  lua_State *v316; 
  unsigned int v317; 
  float v318; 
  float v319; 
  float v320; 
  bool v321; 
  bool v322; 
  char v323; 
  char v324; 
  bool v325; 
  int v326; 
  CompassType compassTypea; 
  LUIElement *v328; 
  int v329; 
  lua_State *v331; 
  CgStatic *v332; 
  vec2_t outPos; 
  int ownerNum; 
  __int64 v337; 
  float outAngle; 
  int v339; 
  rectDef_s *v340; 
  __int64 BombCarrierEntityNum; 
  vec4_t v342; 
  SecureVec3 out; 
  __int64 v344; 
  vec2_t v1; 
  vec4_t v346; 
  vec2_t v0; 
  rectDef_s x; 
  vec4_t v349; 
  vec2_t north; 
  vec4_t quadVerts[4]; 
  char v352; 
  void *retaddr; 

  _RAX = &retaddr;
  v344 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  v325 = largeMap;
  v321 = cropPartialMap;
  compassTypea = compassType;
  v340 = (rectDef_s *)rect;
  _RBX = color;
  v328 = element;
  v331 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2689, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v317 = clientNum;
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 || (v323 = 0, GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u)) )
    v323 = 1;
  Handler = CgHandler::getHandler(this->m_localClientNum);
  IsGameTypeQuick_BR = BG_IsGameTypeQuick_BR(Handler);
  v322 = IsGameTypeQuick_BR;
  if ( LocalClientGlobals->m_isMLGSpectator || IsGameTypeQuick_BR || BG_HasPerk(&LocalClientGlobals->predictedPlayerState.perks, 0x2Cu) )
    goto LABEL_20;
  _RDI = DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowMapOnly;
  if ( !DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowMapOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_counterUAVRadarJamLevelShowMapOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  *(double *)&_XMM0 = CG_Radar_GetJammingLevel((const LocalClientNum_t)this->m_localClientNum);
  __asm { vcomiss xmm0, xmm6 }
  if ( v30 )
  {
LABEL_20:
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    v332 = LocalClientStatics;
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
    CgCompassSystem::GetCompassYaw(this, compassTypea, v321, LocalClientGlobals, &outAngle, &north);
    __asm { vmovss  xmm14, cs:__real@3f800000 }
    v34 = !v322;
    if ( v322 )
      __asm { vmovaps xmm0, xmm14 }
    else
      *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassTypea);
    __asm
    {
      vmulss  xmm8, xmm0, dword ptr [rbx+0Ch]
      vmovss  [rbp+1B0h+var_204], xmm8
      vxorps  xmm13, xmm13, xmm13
      vucomiss xmm8, xmm13
    }
    if ( !v34 )
    {
      if ( CharacterInfo->infoValid )
      {
        team = CharacterInfo->team;
        v339 = team;
        if ( LocalClientGlobals->m_isMLGSpectator || team != 201 )
        {
          CG_CompassCalcDimensions(compassTypea, LocalClientGlobals, parentRect, v340, &x.x, &x.y, &x.w, &x.h);
          __asm
          {
            vmovss  xmm3, cs:__real@3f000000
            vmulss  xmm1, xmm3, [rbp+1B0h+var_160]
            vaddss  xmm6, xmm1, [rbp+1B0h+x]
            vmovss  [rbp+1B0h+var_1DC], xmm6
            vmulss  xmm0, xmm3, [rbp+1B0h+var_15C]
            vaddss  xmm7, xmm0, [rbp+1B0h+y]
            vmovss  [rbp+1B0h+var_1D8], xmm7
            vmovss  xmm1, dword ptr [rbx]
            vmovss  dword ptr [rbp+1B0h+var_180], xmm1
            vmovss  xmm0, dword ptr [rbx+4]
            vmovss  dword ptr [rbp+1B0h+var_180+4], xmm0
            vmovss  xmm1, dword ptr [rbx+8]
            vmovss  dword ptr [rbp+1B0h+var_180+8], xmm1
          }
          ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
          v46 = 0;
          v326 = 0;
          BombCarrierEntityNum = GetBombCarrierEntityNum(LocalClientGlobals);
          v47 = 0i64;
          v337 = 0i64;
          __asm
          {
            vmovss  xmm9, cs:__real@447a0000
            vmovss  xmm15, cs:__real@3f4ccccd
          }
          do
          {
            if ( !LocalClientGlobals->m_isMLGSpectator )
            {
              Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v46);
              p_nextState = &Entity->nextState;
              if ( !v339 && (!BG_IsAgentEntity(&Entity->nextState) || p_nextState->otherEntityNum != clientNum) || v322 && BG_IsAgentEntity(p_nextState) )
                goto LABEL_168;
              v47 = v337;
            }
            v52 = &this->m_compassActors[v47];
            lastUpdate = this->m_compassActors[v47].lastUpdate;
            time = LocalClientGlobals->time;
            if ( lastUpdate > time )
            {
              v52->lastUpdate = 0;
              time = LocalClientGlobals->time;
              lastUpdate = 0;
            }
            if ( time > 500 && lastUpdate >= time - 500 )
            {
              if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
                __asm { vmovaps xmm0, cs:xmmword_147FA89B0 }
              else
                __asm { vmovaps xmm0, xmmword ptr cs:friendlyColors }
              __asm { vmovups xmmword ptr [rbp+1B0h+var_180], xmm0 }
              CgCompassSystemMP::GetFriendlyCompassLightColor(this, &v349, LocalClientGlobals);
              v56 = CgStatic::GetCharacterInfo(LocalClientStatics, v52->ownerNum);
              *(_QWORD *)v342.v = v56;
              FlagCarrierEntityNum = GetFlagCarrierEntityNum(LocalClientGlobals, (const team_t)v56->team);
              if ( LocalClientGlobals->m_isMLGSpectator )
              {
                if ( v56->team != TEAM_TWO || LocalClientGlobals->predictedPlayerState.clientNum == v46 )
                  goto LABEL_167;
LABEL_42:
                if ( v317 == v46 && !v323 || CG_Players_IsPlayerIconHidden((const LocalClientNum_t)this->m_localClientNum, v52->ownerNum) || BombCarrierEntityNum != -1 && BombCarrierEntityNum == v337 || FlagCarrierEntityNum == v46 && LocalClientGlobals->m_isMLGSpectator )
                  goto LABEL_167;
                CG_CalcPlayerPos(&out, this->m_localClientNum);
                CompassActor_GetLastPos(v52, &outPos);
                __asm
                {
                  vmovss  dword ptr [rbp+1B0h+v1], xmm13
                  vmovss  dword ptr [rbp+1B0h+v1+4], xmm13
                  vmovss  xmm0, [rbp+1B0h+boundsRadius]
                  vmovss  dword ptr [rsp+2C0h+fmt], xmm0
                }
                v59 = CgCompassSystem::WorldPosToCompass(this, compassTypea, v321, &x, fmta, &north, (const vec2_t *)&out, &outPos, &v0, &v1);
                if ( v59 && !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassClampIcons, "compassClampIcons") )
                {
LABEL_166:
                  memset(&outPos, 0, sizeof(outPos));
                  goto LABEL_167;
                }
                if ( !LocalClientStatics->HasCharacterInfo(LocalClientStatics, v46) )
                  goto LABEL_59;
                v60 = CgStatic::GetCharacterInfo(LocalClientStatics, v46);
                if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2834, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
                  __debugbreak();
                if ( v46 < cls.maxClients && v60->infoValid && Party_ClientIsInMyParty(v46) )
                  v61 = 1;
                else
LABEL_59:
                  v61 = 0;
                if ( v59 && !v61 && Dvar_GetBool_Internal_DebugName(DVARBOOL_compassHideClippedFriendlies, "compassHideClippedFriendlies") )
                {
                  LocalClientStatics = v332;
                  goto LABEL_166;
                }
                ownerNum = v52->ownerNum;
                v62 = v332->GetClientInfo(v332, v317);
                if ( !v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2853, ASSERT_TYPE_ASSERT, "(myClientInfo)", (const char *)&queryFormat, "myClientInfo") )
                  __debugbreak();
                v63 = v332->GetClientInfo(v332, (unsigned int)v46);
                if ( !v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2855, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
                  __debugbreak();
                this->ComputeFriendlyCompassColor(this, v62, v63, &v346);
                m_useSquads = LocalClientGlobals->m_useSquads;
                v65 = m_useSquads && v62->squadIndex == v63->squadIndex;
                if ( v59 && m_useSquads && !v65 && Dvar_GetBool_Internal_DebugName(DVARBOOL_compassHideClippedNonSquad, "compassHideClippedNonSquad") )
                {
                  v46 = v326;
                  LocalClientStatics = v332;
                  goto LABEL_166;
                }
                CalcCompassFriendlySize(compassTypea, &v319, &v318);
                __asm
                {
                  vaddss  xmm1, xmm6, dword ptr [rbp+1B0h+v0]
                  vmovss  dword ptr [rbp+1B0h+v0], xmm1
                  vaddss  xmm0, xmm7, dword ptr [rbp+1B0h+v0+4]
                  vmovss  dword ptr [rbp+1B0h+v0+4], xmm0
                  vaddss  xmm2, xmm6, dword ptr [rbp+1B0h+v1]
                  vmovss  dword ptr [rbp+1B0h+v1], xmm2
                  vaddss  xmm1, xmm7, dword ptr [rbp+1B0h+v1+4]
                  vmovss  dword ptr [rbp+1B0h+v1+4], xmm1
                }
                if ( v59 )
                {
                  *(double *)&_XMM0 = CalcCompassClippedDistanceScale(&v0, &v1, 0);
                  __asm
                  {
                    vmulss  xmm2, xmm0, [rbp+1B0h+var_228]
                    vmovss  [rbp+1B0h+var_228], xmm2
                    vmulss  xmm0, xmm0, [rbp+1B0h+var_22C]
                    vmovss  [rbp+1B0h+var_22C], xmm0
                  }
                }
                vertAlign = v340->vertAlign;
                horzAlign = v340->horzAlign;
                ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
                ScrPlace_ApplyRect(ActivePlacement, (float *)&v1, (float *)&v1 + 1, &v319, &v318, horzAlign, vertAlign);
                __asm
                {
                  vmovss  xmm0, [rbp+1B0h+outAngle]
                  vsubss  xmm0, xmm0, dword ptr [r15+8]; angle
                }
                *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
                __asm { vmovss  [rbp+1B0h+var_224], xmm0 }
                if ( LocalClientGlobals->m_isMLGSpectator && v325 )
                {
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
                  __asm
                  {
                    vmulss  xmm0, xmm0, [rbp+1B0h+var_228]
                    vmovss  [rbp+1B0h+var_228], xmm0
                  }
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
                  __asm
                  {
                    vmulss  xmm0, xmm0, [rbp+1B0h+var_22C]
                    vmovss  [rbp+1B0h+var_22C], xmm0
                  }
                }
                v78 = compassTypea;
                if ( (v321 || compassTypea || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation")) && LocalClientGlobals->m_isMLGSpectator && this->MapShouldRotate(this) )
                {
                  this->MapRotationFactor(this);
                  __asm
                  {
                    vmovss  xmm1, [rbp+1B0h+var_224]
                    vsubss  xmm0, xmm1, xmm0
                    vmovss  [rbp+1B0h+var_224], xmm0
                  }
                }
                __asm { vmovss  xmm3, [rbp+1B0h+var_224]; in }
                CgCompassSystem::WorldYawToCompass(this, v78, LocalClientGlobals, *(const float *)&_XMM3, &v320);
                v81 = LocalClientGlobals->time;
                pingTime = v52->pingTime;
                if ( v81 < pingTime )
                {
                  wasPinged = v52->wasPinged;
                }
                else
                {
                  v52->wasPinged = 0;
                  wasPinged = 0;
                  v81 = LocalClientGlobals->time;
                }
                v324 = 1;
                if ( wasPinged && (pingTime - v81) % 500 >= 250 )
                {
                  v329 = 1;
                  __asm { vmovss  [rbp+1B0h+var_224], xmm13 }
                  friendly_chatting = cgMedia.compass.friendly_chatting;
                  if ( v61 )
                    friendly_chatting = cgMedia.compass.party_chatting;
                }
                else
                {
                  v329 = 0;
                  iconState = v52->iconState;
                  if ( v317 == ownerNum )
                  {
                    if ( iconState )
                      friendly_chatting = iconState->squadArrow->textureTable->image;
                    else
                      friendly_chatting = cgMedia.compass.squad_arrow;
                  }
                  else if ( v61 )
                  {
                    if ( iconState )
                      friendly_chatting = iconState->partyArrow->textureTable->image;
                    else
                      friendly_chatting = cgMedia.compass.party_arrow;
                  }
                  else if ( iconState )
                  {
                    friendly_chatting = iconState->friendlyArrow->textureTable->image;
                  }
                  else
                  {
                    friendly_chatting = cgMedia.compass.friendly_arrow;
                  }
                  if ( v322 && (GetBRPlayerFlags(v63) & 8) != 0 )
                  {
                    friendly_chatting = cgMedia.compass.last_stand;
                    v324 = 0;
                  }
                }
                image = NULL;
                __asm { vmovaps xmm12, xmm13 }
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSoundPingFadeTime, "compassSoundPingFadeTime");
                __asm { vcomiss xmm0, xmm13 }
                if ( v30 | v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2946, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassSoundPingFadeTime, \"compassSoundPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassSoundPingFadeTime ) > 0.0f") )
                  __debugbreak();
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSoundPingFadeTime, "compassSoundPingFadeTime");
                __asm
                {
                  vmulss  xmm1, xmm0, xmm9
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, ecx
                  vaddss  xmm2, xmm0, xmm1
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, eax
                  vcomiss xmm2, xmm1
                }
                if ( !v30 )
                {
                  if ( v52->beginFadeTime < LocalClientGlobals->time )
                  {
                    __asm
                    {
                      vxorps  xmm6, xmm6, xmm6
                      vcvtsi2ss xmm6, xmm6, eax
                    }
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSoundPingFadeTime, "compassSoundPingFadeTime");
                    __asm
                    {
                      vmulss  xmm1, xmm0, xmm9
                      vdivss  xmm2, xmm6, xmm1
                      vsubss  xmm12, xmm14, xmm2
                    }
                  }
                  else
                  {
                    __asm { vmovaps xmm12, xmm14 }
                  }
                  v97 = v52->iconState;
                  if ( v317 == ownerNum )
                  {
                    if ( v97 )
                      image = v97->squadFiring->textureTable->image;
                    else
                      image = cgMedia.compass.squad_firing;
                  }
                  else if ( v61 )
                  {
                    if ( v97 )
                      image = v97->partyFiring->textureTable->image;
                    else
                      image = cgMedia.compass.party_firing;
                  }
                  else if ( v97 )
                  {
                    image = v97->friendlyFiring->textureTable->image;
                  }
                  else
                  {
                    image = cgMedia.compass.friendly_firing;
                  }
                }
                friendly_yelling = NULL;
                __asm { vmovaps xmm7, xmm13 }
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSoundPingFadeTime, "compassSoundPingFadeTime");
                __asm
                {
                  vmulss  xmm1, xmm0, xmm9
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, ecx
                  vaddss  xmm2, xmm0, xmm1
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, eax
                  vcomiss xmm2, xmm1
                }
                if ( !v30 )
                {
                  if ( v52->beginVoiceFadeTime < LocalClientGlobals->time )
                  {
                    __asm
                    {
                      vxorps  xmm6, xmm6, xmm6
                      vcvtsi2ss xmm6, xmm6, eax
                    }
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSoundPingFadeTime, "compassSoundPingFadeTime");
                    __asm
                    {
                      vmulss  xmm1, xmm0, xmm9
                      vdivss  xmm2, xmm6, xmm1
                      vsubss  xmm7, xmm14, xmm2
                    }
                  }
                  else
                  {
                    __asm { vmovaps xmm7, xmm14 }
                  }
                  friendly_yelling = cgMedia.compass.friendly_yelling;
                  if ( v61 )
                    friendly_yelling = cgMedia.compass.party_yelling;
                }
                if ( BG_HasPerk(&v52->perks, 0x2Fu) )
                {
                  __asm
                  {
                    vmovss  [rbp+1B0h+var_224], xmm13
                    vmovss  dword ptr [rbp+1B0h+var_180+0Ch], xmm8
                    vmovss  dword ptr [rsp+2C0h+var_250], xmm8
                    vmovss  xmm0, dword ptr [rbp+1B0h+var_180+8]
                    vmovss  [rsp+2C0h+var_258], xmm0
                    vmovss  xmm1, dword ptr [rbp+1B0h+var_180+4]
                    vmovss  [rsp+2C0h+var_260], xmm1
                    vmovss  xmm0, dword ptr [rbp+1B0h+var_180]
                    vmovss  [rsp+2C0h+var_268], xmm0
                    vmovss  dword ptr [rsp+2C0h+var_270], xmm13
                    vmovss  dword ptr [rsp+2C0h+outClipped], xmm14
                    vmovss  dword ptr [rsp+2C0h+var_280], xmm14
                    vmovss  dword ptr [rsp+2C0h+h], xmm13
                    vmovss  dword ptr [rsp+2C0h+w], xmm13
                    vmovss  xmm0, [rbp+1B0h+var_22C]
                    vmovss  dword ptr [rsp+2C0h+outVector], xmm0
                    vmovss  xmm1, [rbp+1B0h+var_228]
                    vmovss  dword ptr [rsp+2C0h+fmt], xmm1
                    vmovss  xmm3, dword ptr [rbp+1B0h+v1+4]; centerY
                    vmovss  xmm2, dword ptr [rbp+1B0h+v1]; centerX
                  }
                  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v328, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, outVectora, wa, ha, v257, outClippeda, v274, v282, v290, v298, v306, cgMedia.compass.friendly_juggernaut, v331);
                  v46 = v326;
                  LocalClientStatics = v332;
LABEL_165:
                  __asm
                  {
                    vmovss  xmm7, [rbp+1B0h+var_1D8]
                    vmovss  xmm6, [rbp+1B0h+var_1DC]
                  }
                  goto LABEL_166;
                }
                __asm
                {
                  vmovss  xmm11, dword ptr [rbp+1B0h+var_150+0Ch]
                  vmovss  xmm8, dword ptr [rbp+1B0h+var_150+8]
                  vmovss  xmm9, dword ptr [rbp+1B0h+var_150+4]
                  vmovss  xmm10, dword ptr [rbp+1B0h+var_150]
                }
                if ( image )
                  __asm { vucomiss xmm12, xmm14 }
                if ( friendly_yelling )
                  __asm { vucomiss xmm7, xmm14 }
                v121 = v329;
                if ( LocalClientGlobals->m_isMLGSpectator )
                {
                  MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
                  SelectedClientNum = CgMLGSpectator::GetSelectedClientNum(MLGSpectator);
                  __asm
                  {
                    vmulss  xmm3, xmm15, [rbp+1B0h+var_22C]
                    vmulss  xmm2, xmm15, [rbp+1B0h+var_228]
                    vmovss  xmm0, [rbp+1B0h+var_224]
                  }
                  v34 = v326 == SelectedClientNum;
                  minimap_codcaster_player_arrow_fullmap_border_bold = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_bold;
                  if ( !v34 )
                    minimap_codcaster_player_arrow_fullmap_border_bold = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border;
                  __asm
                  {
                    vmovss  dword ptr [rsp+2C0h+var_250], xmm11
                    vmovss  [rsp+2C0h+var_258], xmm8
                    vmovss  [rsp+2C0h+var_260], xmm9
                    vmovss  [rsp+2C0h+var_268], xmm10
                    vmovss  dword ptr [rsp+2C0h+var_270], xmm0
                    vmovss  dword ptr [rsp+2C0h+outClipped], xmm14
                    vmovss  dword ptr [rsp+2C0h+var_280], xmm14
                    vmovss  dword ptr [rsp+2C0h+h], xmm13
                    vmovss  dword ptr [rsp+2C0h+w], xmm13
                    vmovss  dword ptr [rsp+2C0h+outVector], xmm3
                    vmovss  dword ptr [rsp+2C0h+fmt], xmm2
                    vmovss  xmm3, dword ptr [rbp+1B0h+v1+4]; centerY
                    vmovss  xmm2, dword ptr [rbp+1B0h+v1]; centerX
                  }
                  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v328, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, outVectorb, wb, hb, v258, outClippedb, v275, v283, v291, v299, v307, minimap_codcaster_player_arrow_fullmap_border_bold, v331);
                  minimap_codcaster_player_arrow_fullmap_bg = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_bg;
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGLargeMapInnerArrowOpacity, "compassMLGLargeMapInnerArrowOpacity");
                  __asm
                  {
                    vmulss  xmm2, xmm0, dword ptr [rbp+1B0h+var_180+0Ch]
                    vmulss  xmm4, xmm15, [rbp+1B0h+var_22C]
                    vmulss  xmm3, xmm15, [rbp+1B0h+var_228]
                  }
                  v316 = v331;
                  material = (GfxImage *)minimap_codcaster_player_arrow_fullmap_bg;
                  __asm
                  {
                    vmovss  dword ptr [rsp+2C0h+var_250], xmm2
                    vmovss  xmm0, dword ptr [rbp+1B0h+var_180+8]
                    vmovss  [rsp+2C0h+var_258], xmm0
                    vmovss  xmm1, dword ptr [rbp+1B0h+var_180+4]
                    vmovss  [rsp+2C0h+var_260], xmm1
                    vmovss  xmm0, dword ptr [rbp+1B0h+var_180]
                    vmovss  [rsp+2C0h+var_268], xmm0
                    vmovss  xmm1, [rbp+1B0h+var_224]
                    vmovss  dword ptr [rsp+2C0h+var_270], xmm1
                    vmovss  dword ptr [rsp+2C0h+outClipped], xmm14
                    vmovss  dword ptr [rsp+2C0h+var_280], xmm14
                    vmovss  dword ptr [rsp+2C0h+h], xmm13
                    vmovss  dword ptr [rsp+2C0h+w], xmm13
                    vmovss  dword ptr [rsp+2C0h+outVector], xmm4
                    vmovss  dword ptr [rsp+2C0h+fmt], xmm3
                  }
LABEL_149:
                  __asm
                  {
                    vmovss  xmm3, dword ptr [rbp+1B0h+v1+4]; centerY
                    vmovss  xmm2, dword ptr [rbp+1B0h+v1]; centerX
                  }
                  v147 = v328;
                  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v328, *(float *)&_XMM2, *(float *)&_XMM3, fmt, outVector, w, h, v259, outClipped, v276, v284, v292, v300, v308, material, v316);
                }
                else if ( friendly_chatting )
                {
                  __asm
                  {
                    vmovss  xmm0, [rbp+1B0h+var_204]
                    vmovss  dword ptr [rbp+1B0h+var_180+0Ch], xmm0
                  }
                  if ( v324 )
                  {
                    v316 = v331;
                    material = (GfxImage *)friendly_chatting;
                    __asm
                    {
                      vmovss  dword ptr [rsp+2C0h+var_250], xmm0
                      vmovss  xmm0, dword ptr [rbp+1B0h+var_180+8]
                      vmovss  [rsp+2C0h+var_258], xmm0
                      vmovss  xmm1, dword ptr [rbp+1B0h+var_180+4]
                      vmovss  [rsp+2C0h+var_260], xmm1
                      vmovss  xmm0, dword ptr [rbp+1B0h+var_180]
                      vmovss  [rsp+2C0h+var_268], xmm0
                      vmovss  xmm1, [rbp+1B0h+var_224]
                      vmovss  dword ptr [rsp+2C0h+var_270], xmm1
                      vmovss  dword ptr [rsp+2C0h+outClipped], xmm14
                      vmovss  dword ptr [rsp+2C0h+var_280], xmm14
                      vmovss  dword ptr [rsp+2C0h+h], xmm13
                      vmovss  dword ptr [rsp+2C0h+w], xmm13
                      vmovss  xmm0, [rbp+1B0h+var_22C]
                      vmovss  dword ptr [rsp+2C0h+outVector], xmm0
                      vmovss  xmm1, [rbp+1B0h+var_228]
                      vmovss  dword ptr [rsp+2C0h+fmt], xmm1
                    }
                    goto LABEL_149;
                  }
                  __asm
                  {
                    vmovss  xmm2, cs:__real@3f000000
                    vmulss  xmm6, xmm2, [rbp+1B0h+var_228]
                    vmulss  xmm5, xmm2, [rbp+1B0h+var_22C]
                    vmovss  xmm4, dword ptr [rbp+1B0h+v1+4]
                    vaddss  xmm3, xmm5, xmm4; bottom
                    vmovss  xmm0, dword ptr [rbp+1B0h+v1]
                    vaddss  xmm2, xmm6, xmm0; right
                    vsubss  xmm1, xmm4, xmm5; top
                    vsubss  xmm0, xmm0, xmm6; left
                  }
                  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
                  outClippedc = (vec2_t *)friendly_chatting;
                  __asm
                  {
                    vmovss  dword ptr [rsp+2C0h+h], xmm14
                    vmovss  dword ptr [rsp+2C0h+w], xmm14
                    vmovss  dword ptr [rsp+2C0h+outVector], xmm13
                    vmovss  dword ptr [rsp+2C0h+fmt], xmm13
                  }
                  v147 = v328;
                  LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, v328, v331, (const vec4_t (*)[4])quadVerts, fmtd, outVectorc, wc, hc, &v346, (const GfxImage *)outClippedc);
                }
                else
                {
                  v147 = v328;
                }
                if ( !v121 )
                {
                  __asm { vmovss  xmm6, [rbp+1B0h+var_204] }
                  v158 = v331;
                  v147 = v328;
                  if ( friendly_yelling )
                  {
                    __asm
                    {
                      vmulss  xmm0, xmm7, xmm6
                      vmovss  dword ptr [rbp+1B0h+var_180+0Ch], xmm0
                      vmovss  dword ptr [rsp+2C0h+var_250], xmm0
                      vmovss  xmm0, dword ptr [rbp+1B0h+var_180+8]
                      vmovss  [rsp+2C0h+var_258], xmm0
                      vmovss  xmm1, dword ptr [rbp+1B0h+var_180+4]
                      vmovss  [rsp+2C0h+var_260], xmm1
                      vmovss  xmm0, dword ptr [rbp+1B0h+var_180]
                      vmovss  [rsp+2C0h+var_268], xmm0
                      vmovss  xmm1, [rbp+1B0h+var_224]
                      vmovss  dword ptr [rsp+2C0h+var_270], xmm1
                      vmovss  dword ptr [rsp+2C0h+outClipped], xmm14
                      vmovss  dword ptr [rsp+2C0h+var_280], xmm14
                      vmovss  dword ptr [rsp+2C0h+h], xmm13
                      vmovss  dword ptr [rsp+2C0h+w], xmm13
                      vmovss  xmm0, [rbp+1B0h+var_22C]
                      vmovss  dword ptr [rsp+2C0h+outVector], xmm0
                      vmovss  xmm1, [rbp+1B0h+var_228]
                      vmovss  dword ptr [rsp+2C0h+fmt], xmm1
                      vmovss  xmm3, dword ptr [rbp+1B0h+v1+4]; centerY
                      vmovss  xmm2, dword ptr [rbp+1B0h+v1]; centerX
                    }
                    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v328, *(float *)&_XMM2, *(float *)&_XMM3, fmte, outVectord, wd, hd, v260, outClippedd, v277, v285, v293, v301, v309, friendly_yelling, v331);
                  }
                  if ( image )
                  {
                    m_localClientNum = this->m_localClientNum;
                    if ( LocalClientGlobals->m_isMLGSpectator )
                    {
                      v169 = CgMLGSpectator::GetMLGSpectator(m_localClientNum);
                      __asm
                      {
                        vmulss  xmm3, xmm15, [rbp+1B0h+var_22C]
                        vmulss  xmm2, xmm15, [rbp+1B0h+var_228]
                        vmovss  dword ptr [rsp+2C0h+var_250], xmm11
                        vmovss  [rsp+2C0h+var_258], xmm8
                        vmovss  [rsp+2C0h+var_260], xmm9
                        vmovss  [rsp+2C0h+var_268], xmm10
                        vmovss  xmm0, [rbp+1B0h+var_224]
                        vmovss  dword ptr [rsp+2C0h+var_270], xmm0
                        vmovss  dword ptr [rsp+2C0h+outClipped], xmm14
                        vmovss  dword ptr [rsp+2C0h+var_280], xmm14
                        vmovss  dword ptr [rsp+2C0h+h], xmm13
                        vmovss  dword ptr [rsp+2C0h+w], xmm13
                        vmovss  dword ptr [rsp+2C0h+outVector], xmm3
                        vmovss  dword ptr [rsp+2C0h+fmt], xmm2
                        vmovss  xmm3, dword ptr [rbp+1B0h+v1+4]; centerY
                        vmovss  xmm2, dword ptr [rbp+1B0h+v1]; centerX
                      }
                      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v147, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, outVectore, we, he, v261, outClippede, v278, v286, v294, v302, v310, cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border, v158);
                      v175 = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_bg;
                      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGLargeMapInnerArrowOpacity, "compassMLGLargeMapInnerArrowOpacity");
                      __asm
                      {
                        vmulss  xmm2, xmm0, dword ptr [rbp+1B0h+var_180+0Ch]
                        vmulss  xmm4, xmm15, [rbp+1B0h+var_22C]
                        vmulss  xmm3, xmm15, [rbp+1B0h+var_228]
                      }
                      materiala = (GfxImage *)v175;
                      __asm
                      {
                        vmovss  dword ptr [rsp+2C0h+var_250], xmm2
                        vmovss  xmm0, dword ptr [rbp+1B0h+var_180+8]
                        vmovss  [rsp+2C0h+var_258], xmm0
                        vmovss  xmm1, dword ptr [rbp+1B0h+var_180+4]
                        vmovss  [rsp+2C0h+var_260], xmm1
                        vmovss  xmm0, dword ptr [rbp+1B0h+var_180]
                        vmovss  [rsp+2C0h+var_268], xmm0
                        vmovss  xmm1, [rbp+1B0h+var_224]
                        vmovss  dword ptr [rsp+2C0h+var_270], xmm1
                        vmovss  dword ptr [rsp+2C0h+outClipped], xmm14
                        vmovss  dword ptr [rsp+2C0h+var_280], xmm14
                        vmovss  dword ptr [rsp+2C0h+h], xmm13
                        vmovss  dword ptr [rsp+2C0h+w], xmm13
                        vmovss  dword ptr [rsp+2C0h+outVector], xmm4
                        vmovss  dword ptr [rsp+2C0h+fmt], xmm3
                        vmovss  xmm3, dword ptr [rbp+1B0h+v1+4]; centerY
                        vmovss  xmm2, dword ptr [rbp+1B0h+v1]; centerX
                      }
                      v147 = v328;
                      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v328, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, outVectorf, wf, hf, v262, outClippedf, v279, v287, v295, v303, v311, materiala, v158);
                      v185 = CgMLGSpectator::GetSelectedClientNum(v169);
                      v46 = v326;
                      __asm
                      {
                        vmulss  xmm3, xmm15, [rbp+1B0h+var_22C]
                        vmulss  xmm2, xmm15, [rbp+1B0h+var_228]
                        vmulss  xmm0, xmm12, xmm6
                      }
                      v34 = v326 == v185;
                      minimap_codcaster_player_arrow_fullmap_border_bold_shooting = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_bold_shooting;
                      if ( !v34 )
                        minimap_codcaster_player_arrow_fullmap_border_bold_shooting = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_shooting;
                      __asm
                      {
                        vmovss  dword ptr [rsp+2C0h+var_250], xmm0
                        vmovss  [rsp+2C0h+var_258], xmm8
                        vmovss  [rsp+2C0h+var_260], xmm9
                        vmovss  [rsp+2C0h+var_268], xmm10
                        vmovss  xmm0, [rbp+1B0h+var_224]
                        vmovss  dword ptr [rsp+2C0h+var_270], xmm0
                        vmovss  dword ptr [rsp+2C0h+outClipped], xmm14
                        vmovss  dword ptr [rsp+2C0h+var_280], xmm14
                        vmovss  dword ptr [rsp+2C0h+h], xmm13
                        vmovss  dword ptr [rsp+2C0h+w], xmm13
                        vmovss  dword ptr [rsp+2C0h+outVector], xmm3
                        vmovss  dword ptr [rsp+2C0h+fmt], xmm2
                        vmovss  xmm3, dword ptr [rbp+1B0h+v1+4]; centerY
                        vmovss  xmm2, dword ptr [rbp+1B0h+v1]; centerX
                      }
                      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v147, *(float *)&_XMM2, *(float *)&_XMM3, fmth, outVectorg, wg, hg, v263, outClippedg, v280, v288, v296, v304, v312, minimap_codcaster_player_arrow_fullmap_border_bold_shooting, v158);
                      goto LABEL_162;
                    }
                    __asm
                    {
                      vmulss  xmm0, xmm12, xmm6
                      vmovss  dword ptr [rbp+1B0h+var_180+0Ch], xmm0
                      vmovss  dword ptr [rsp+2C0h+var_250], xmm0
                      vmovss  xmm0, dword ptr [rbp+1B0h+var_180+8]
                      vmovss  [rsp+2C0h+var_258], xmm0
                      vmovss  xmm1, dword ptr [rbp+1B0h+var_180+4]
                      vmovss  [rsp+2C0h+var_260], xmm1
                      vmovss  xmm0, dword ptr [rbp+1B0h+var_180]
                      vmovss  [rsp+2C0h+var_268], xmm0
                      vmovss  xmm1, [rbp+1B0h+var_224]
                      vmovss  dword ptr [rsp+2C0h+var_270], xmm1
                      vmovss  dword ptr [rsp+2C0h+outClipped], xmm14
                      vmovss  dword ptr [rsp+2C0h+var_280], xmm14
                      vmovss  dword ptr [rsp+2C0h+h], xmm13
                      vmovss  dword ptr [rsp+2C0h+w], xmm13
                      vmovss  xmm0, [rbp+1B0h+var_22C]
                      vmovss  dword ptr [rsp+2C0h+outVector], xmm0
                      vmovss  xmm1, [rbp+1B0h+var_228]
                      vmovss  dword ptr [rsp+2C0h+fmt], xmm1
                      vmovss  xmm3, dword ptr [rbp+1B0h+v1+4]; centerY
                      vmovss  xmm2, dword ptr [rbp+1B0h+v1]; centerX
                    }
                    LUI_Render_DrawQuadRotated(m_localClientNum, v147, *(float *)&_XMM2, *(float *)&_XMM3, fmti, outVectorh, wh, hh, v264, outClippedh, v281, v289, v297, v305, v313, image, v158);
                  }
                }
                v46 = v326;
LABEL_162:
                LocalClientStatics = v332;
                if ( LocalClientGlobals->m_isMLGSpectator )
                {
                  __asm { vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite }
                  v203 = *(_DWORD *)(*(_QWORD *)v342.v + 12i64);
                  __asm
                  {
                    vmovdqa [rbp+1B0h+var_1B0], xmm0
                    vmovss  xmm0, [rbp+1B0h+var_224]
                    vmovss  dword ptr [rsp+2C0h+fmt], xmm0
                    vmovss  xmm3, dword ptr [rbp+1B0h+v1+4]
                    vmovss  xmm2, dword ptr [rbp+1B0h+v1]
                  }
                  CgCompassSystem::DrawPlayerNumber(this, v52->ownerNum, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, v203, 0, v325, &v342, v332, v147, v331);
                }
                __asm
                {
                  vmovss  xmm8, [rbp+1B0h+var_204]
                  vmovss  xmm9, cs:__real@447a0000
                }
                goto LABEL_165;
              }
              if ( (v52->flags & 1) == 0 )
                goto LABEL_42;
            }
LABEL_167:
            clientNum = v317;
LABEL_168:
            v326 = ++v46;
            v47 = ++v337;
          }
          while ( v46 < 248 );
        }
      }
    }
  }
  memset(&out, 0, sizeof(out));
  _R11 = &v352;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
CgCompassSystemMP::DrawGlitchOnMinimap
==============
*/
void CgCompassSystemMP::DrawGlitchOnMinimap(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  const rectDef_s *v13; 
  const rectDef_s *v14; 
  bool v15; 
  CgGlobalsMP *LocalClientGlobals; 
  LocalClientNum_t m_localClientNum; 
  CgGlobalsMP *v19; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  const characterInfo_t *CharacterInfo; 
  CgCompassSystemMP_vtbl *v23; 
  const dvar_t *v24; 
  int v29; 
  __int64 v32; 
  __int64 v33; 
  CgEntitySystem *v34; 
  cg_t *v35; 
  const characterInfo_t *v36; 
  team_t team; 
  team_t v38; 
  bool v39; 
  const dvar_t *v53; 
  Material *material; 
  vec4_t *v62; 
  int v64; 
  CgGlobalsMP *v65; 
  char v66; 
  CgStatic *v67; 
  const characterInfo_t *v68; 
  const rectDef_s *v69; 
  const rectDef_s *v70; 
  lua_State *v71; 
  LUIElement *v72; 
  GfxImage *v73; 
  vec4_t *v74; 

  v13 = parentRect;
  v14 = rect;
  v15 = cropPartialMap;
  v74 = (vec4_t *)color;
  v73 = mapMask;
  v72 = element;
  v71 = luaVM;
  v69 = parentRect;
  v70 = rect;
  if ( compassType == COMPASS_TYPE_PARTIAL )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    m_localClientNum = this->m_localClientNum;
    v19 = LocalClientGlobals;
    v65 = LocalClientGlobals;
    LocalClientStatics = CgStatic::GetLocalClientStatics(m_localClientNum);
    clientNum = v19->predictedPlayerState.clientNum;
    v67 = LocalClientStatics;
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
    v23 = this->__vftable;
    v68 = CharacterInfo;
    v23->GetDrawnItemScalerRadiusAndMultiplier(this, CUAV, (float *)&v64, (float *)&v66);
    v24 = DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed;
    if ( !DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_counterUAVStrengthLevelFullyJammed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( v19->predictedPlayerState.radarStrength == v24->current.integer )
    {
      _RBX = DCONST_DVARFLT_compassCUAVGlitchAmount;
      __asm { vmovaps [rsp+148h+var_58], xmm6 }
      if ( !DCONST_DVARFLT_compassCUAVGlitchAmount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCUAVGlitchAmount") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      if ( this->m_isBigMapMinimap )
      {
        __asm
        {
          vmovaps [rsp+148h+var_68], xmm7
          vmovaps [rsp+148h+var_78], xmm8
          vmovss  xmm8, cs:__real@7f7fffff
          vmovaps [rsp+148h+var_88], xmm9
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (int)ComCharacterLimits::ms_gameData.m_characterCount > 248 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4984, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetCharacterMaxCount() ) <= ( ((200 + 48)) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetCharacterMaxCount()", "MAX_COMPASS_ACTORS_MP", ComCharacterLimits::ms_gameData.m_characterCount, 248) )
            __debugbreak();
        }
        __asm { vmovss  xmm7, cs:__real@3f800000 }
        v29 = 0;
        _R15 = (float *)&this->m_compassScramblers[0][0].pos + 1;
        __asm { vxorps  xmm9, xmm9, xmm9 }
        while ( 1 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( v29 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
            break;
          v32 = 4i64;
          do
          {
            if ( *((_DWORD *)_R15 + 1) != 2047 )
            {
              v33 = this->m_localClientNum;
              if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
              {
                LODWORD(v62) = this->m_localClientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v62) )
                  __debugbreak();
              }
              if ( (unsigned int)v33 >= CgEntitySystem::ms_allocatedCount )
              {
                LODWORD(v62) = CgEntitySystem::ms_allocatedCount;
                LODWORD(material) = v33;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", material, v62) )
                  __debugbreak();
              }
              if ( !CgEntitySystem::ms_entitySystemArray[v33] )
              {
                LODWORD(v62) = v33;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v62) )
                  __debugbreak();
              }
              v34 = CgEntitySystem::ms_entitySystemArray[v33];
              if ( (unsigned int)v29 >= 0x800 )
              {
                LODWORD(v62) = 2048;
                LODWORD(material) = v29;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", material, v62) )
                  __debugbreak();
              }
              v35 = CG_GetLocalClientGlobals((const LocalClientNum_t)v67->m_localClientNum);
              if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                __debugbreak();
              if ( v35->IsMP(v35) )
              {
                if ( v29 >= v35[1].predictedPlayerState.rxvOmnvars[64].timeModified )
                {
                  LODWORD(v62) = v35[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                  LODWORD(material) = v29;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", material, v62) )
                    __debugbreak();
                }
                v36 = (const characterInfo_t *)(*(_QWORD *)&v35[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v29);
              }
              else
              {
                v36 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v35, v29);
              }
              team = v36->team;
              v38 = v68->team;
              if ( v65 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
                __debugbreak();
              if ( (CgEntitySystem *)((char *)v34 + 760 * v29) == (CgEntitySystem *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
                __debugbreak();
              v39 = v38 == TEAM_ZERO;
              if ( v38 == TEAM_ZERO || (v39 = v38 <= (unsigned int)team, v38 != team) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [r15-4]
                  vmovss  xmm1, dword ptr [r15]
                  vsubss  xmm3, xmm0, dword ptr [rdi+38h]
                  vsubss  xmm2, xmm1, dword ptr [rdi+3Ch]
                  vmulss  xmm0, xmm2, xmm2
                  vmulss  xmm3, xmm3, xmm3
                  vaddss  xmm1, xmm3, xmm0
                  vmovss  xmm0, [rsp+148h+var_E4]
                  vcomiss xmm0, xmm9
                  vsqrtss xmm2, xmm1, xmm1
                  vminss  xmm8, xmm2, xmm8
                }
                if ( v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5013, ASSERT_TYPE_ASSERT, "(compassCUAVRadius > 0.0f)", (const char *)&queryFormat, "compassCUAVRadius > 0.0f") )
                  __debugbreak();
                __asm
                {
                  vdivss  xmm0, xmm8, [rsp+148h+var_E4]; val
                  vmovaps xmm2, xmm7; max
                  vmovaps xmm1, xmm9; min
                }
                *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v53 = DCONST_DVARFLT_compassCUAVGlitchAmount;
                __asm { vmovaps xmm6, xmm0 }
                if ( !DCONST_DVARFLT_compassCUAVGlitchAmount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCUAVGlitchAmount") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v53);
                __asm
                {
                  vsubss  xmm0, xmm7, xmm6
                  vmulss  xmm6, xmm0, dword ptr [rbx+28h]
                }
              }
            }
            _R15 += 4;
            --v32;
          }
          while ( v32 );
          ++v29;
        }
        v15 = cropPartialMap;
        v13 = v69;
        v14 = v70;
        __asm
        {
          vmovaps xmm9, [rsp+148h+var_88]
          vmovaps xmm8, [rsp+148h+var_78]
          vmovaps xmm7, [rsp+148h+var_68]
        }
      }
      __asm { vmovaps xmm0, xmm6; glitchAmount }
      LUI_Render_PushGlitch(*(float *)&_XMM0);
      CgCompassSystem::DrawPlayerMap(this, COMPASS_TYPE_PARTIAL, v15, v13, v14, NULL, v74, v73, NULL, NULL, v72, v71);
      LUI_Render_PopGlitch();
      __asm { vmovaps xmm6, [rsp+148h+var_58] }
    }
  }
}

/*
==============
CgCompassSystemMP::DrawGridLabels
==============
*/
void CgCompassSystemMP::DrawGridLabels(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  LocalClientNum_t m_localClientNum; 
  const cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  CgCompassSystem *CompassSystem; 
  LocalClientNum_t v57; 
  const ScreenPlacement *v60; 
  bool v66; 
  bool v67; 
  bool v68; 
  __int64 v69; 
  float x; 
  float xa; 
  float xb; 
  float xc; 
  float xd; 
  float xe; 
  float xf; 
  float xg; 
  float y; 
  float ya; 
  float yb; 
  float yc; 
  float yd; 
  float ye; 
  float yf; 
  float yg; 
  float w; 
  float wa; 
  float wb; 
  float wc; 
  float wd; 
  float we; 
  float wf; 
  float wg; 
  float h; 
  float ha; 
  float hb; 
  float hc; 
  float hd; 
  float he; 
  float hf; 
  float hg; 
  float v151; 
  float v152; 
  float v153; 
  float vMax; 
  int textHeight; 
  vec4_t v158; 
  vec4_t quadVerts[4]; 
  char *text; 
  const char *v162; 
  const char *v163; 
  const char *v164; 
  const char *v165; 
  const char *v166; 
  const char *v167; 
  const char *v168; 
  const char *v169; 
  const char *v170; 
  char *v171; 
  const char *v172; 
  const char *v173; 
  const char *v174; 
  const char *v175; 
  const char *v176; 
  const char *v177; 
  const char *v178; 
  const char *v179; 
  const char *v180; 
  void *retaddr; 

  if ( compassType == COMPASS_TYPE_TACMAP )
  {
    _R11 = &retaddr;
    m_localClientNum = this->m_localClientNum;
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm6
      vmovaps xmmword ptr [r11-68h], xmm7
      vmovaps xmmword ptr [r11-78h], xmm8
      vmovaps xmmword ptr [r11-88h], xmm9
      vmovaps xmmword ptr [r11-98h], xmm10
      vmovaps xmmword ptr [r11-0A8h], xmm11
      vmovaps xmmword ptr [r11-0B8h], xmm12
      vmovaps xmmword ptr [r11-0C8h], xmm13
      vmovaps xmmword ptr [r11-0D8h], xmm14
      vmovaps xmmword ptr [r11-0E8h], xmm15
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
    CG_CompassCalcDimensions(COMPASS_TYPE_TACMAP, LocalClientGlobals, parentRect, rect, &v152, &v151, &v153, &vMax);
    LODWORD(parentRect) = rect->vertAlign;
    LODWORD(rect) = rect->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, &v152, &v151, &v153, &vMax, (int)rect, (int)parentRect);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  xmm2, [rsp+280h+var_208]
      vmulss  xmm6, xmm2, cs:__real@3cf5c28f
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  xmm3, [rsp+280h+var_210]; bottom
      vmovss  xmm11, cs:__real@3f000000
      vmovss  dword ptr [rbp+180h+var_1F0], xmm0
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [rbp+180h+var_1F0+8], xmm0
      vmovss  xmm0, [rsp+280h+var_20C]; left
      vmovss  dword ptr [rbp+180h+var_1F0+4], xmm1
      vaddss  xmm2, xmm2, xmm0; right
      vsubss  xmm1, xmm3, xmm6; top
      vmovss  [rbp+180h+var_200], xmm6
      vmovss  dword ptr [rbp+180h+var_1F0+0Ch], xmm11
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vmovss  dword ptr [rsp+280h+h], xmm8
      vxorps  xmm7, xmm7, xmm7
      vmovss  dword ptr [rsp+280h+w], xmm8
      vmovss  dword ptr [rsp+280h+y], xmm7
      vmovss  dword ptr [rsp+280h+x], xmm7
    }
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, x, y, w, h, &v158, rgp.blackImage);
    __asm
    {
      vmovss  xmm0, [rsp+280h+var_210]
      vaddss  xmm1, xmm0, [rsp+280h+vMax]; top
      vaddss  xmm3, xmm1, xmm6; bottom
      vmovss  xmm0, [rsp+280h+var_20C]; left
      vaddss  xmm2, xmm0, [rsp+280h+var_208]; right
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  dword ptr [rsp+280h+h], xmm8
      vmovss  dword ptr [rsp+280h+w], xmm8
      vmovss  dword ptr [rsp+280h+y], xmm7
      vmovss  dword ptr [rsp+280h+x], xmm7
    }
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, xa, ya, wa, ha, &v158, rgp.blackImage);
    __asm
    {
      vmovss  xmm1, [rsp+280h+var_210]
      vaddss  xmm0, xmm1, [rsp+280h+vMax]
      vmovss  xmm2, [rsp+280h+var_20C]; right
      vaddss  xmm3, xmm0, xmm6; bottom
      vsubss  xmm0, xmm2, xmm6; left
      vsubss  xmm1, xmm1, xmm6; top
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  dword ptr [rsp+280h+h], xmm8
      vmovss  dword ptr [rsp+280h+w], xmm8
      vmovss  dword ptr [rsp+280h+y], xmm7
      vmovss  dword ptr [rsp+280h+x], xmm7
    }
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, xb, yb, wb, hb, &v158, rgp.blackImage);
    __asm
    {
      vmovss  xmm4, [rsp+280h+var_210]
      vaddss  xmm1, xmm4, [rsp+280h+vMax]
      vmovss  xmm0, [rsp+280h+var_20C]
      vaddss  xmm0, xmm0, [rsp+280h+var_208]; left
      vaddss  xmm3, xmm1, xmm6; bottom
      vsubss  xmm1, xmm4, xmm6; top
      vaddss  xmm2, xmm0, xmm6; right
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  dword ptr [rsp+280h+h], xmm8
      vmovss  dword ptr [rsp+280h+w], xmm8
      vmovss  dword ptr [rsp+280h+y], xmm7
      vmovss  dword ptr [rsp+280h+x], xmm7
    }
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, xc, yc, wc, hc, &v158, rgp.blackImage);
    __asm { vdivss  xmm14, xmm8, dword ptr [rsi+20h] }
    CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
    _RAX = CgCompassSystem::GetTacmapMapCenter(CompassSystem);
    v57 = this->m_localClientNum;
    __asm
    {
      vmovss  xmm9, dword ptr [rax]
      vmovss  xmm10, dword ptr [rax+4]
      vmovss  [rbp+180h+var_1F8], xmm9
      vmovss  [rbp+180h+var_1E0], xmm10
    }
    v60 = ScrPlace_GetActivePlacement(v57);
    __asm { vmovaps xmm2, xmm8; scale }
    UI_GetFontHandle(v60, 1, *(float *)&_XMM2);
    __asm
    {
      vcvttss2si eax, xmm6
      vmulss  xmm12, xmm6, cs:__real@3eaaaaab
      vmovss  xmm13, cs:__real@40000000
    }
    textHeight = _EAX;
    _EDI = 0;
    text = "A";
    v66 = 0;
    v67 = 1;
    v68 = 1;
    v69 = 0i64;
    v162 = "B";
    v163 = "C";
    v164 = "D";
    v165 = "E";
    v166 = "F";
    v167 = "G";
    v168 = "H";
    v169 = "I";
    v170 = "J";
    v171 = "0";
    v172 = "1";
    v173 = "2";
    v174 = "3";
    v175 = "4";
    v176 = "5";
    v177 = "6";
    v178 = "7";
    v179 = "8";
    v180 = "9";
    do
    {
      __asm
      {
        vmovd   xmm0, edi
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm3, xmm0, cs:__real@3dcccccd
        vsubss  xmm1, xmm3, xmm9
        vsubss  xmm0, xmm3, xmm10
        vmulss  xmm2, xmm1, xmm14
        vaddss  xmm9, xmm2, xmm11
        vcomiss xmm9, xmm7
        vmulss  xmm15, xmm9, [rsp+280h+var_208]
        vmulss  xmm1, xmm0, xmm14
        vaddss  xmm6, xmm1, xmm11
        vmulss  xmm10, xmm6, [rsp+280h+var_208]
      }
      if ( !v66 )
      {
        __asm { vcomiss xmm9, xmm8 }
        if ( v68 )
        {
          __asm
          {
            vaddss  xmm0, xmm15, [rsp+280h+var_20C]; left
            vmovss  xmm3, [rsp+280h+var_210]; bottom
            vaddss  xmm2, xmm0, xmm13; right
            vsubss  xmm1, xmm3, xmm12; top
          }
          LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
          __asm
          {
            vmovss  dword ptr [rsp+280h+h], xmm8
            vmovss  dword ptr [rsp+280h+w], xmm8
            vmovss  dword ptr [rsp+280h+y], xmm7
            vmovss  dword ptr [rsp+280h+x], xmm7
          }
          LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, xd, yd, wd, hd, &colorDkGrey, rgp.whiteImage);
          __asm
          {
            vmovss  xmm0, [rsp+280h+var_210]
            vaddss  xmm1, xmm0, [rsp+280h+vMax]; top
            vaddss  xmm0, xmm15, [rsp+280h+var_20C]; left
            vaddss  xmm2, xmm0, xmm13; right
            vaddss  xmm3, xmm1, xmm12; bottom
          }
          LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
          __asm
          {
            vmovss  dword ptr [rsp+280h+h], xmm8
            vmovss  dword ptr [rsp+280h+w], xmm8
            vmovss  dword ptr [rsp+280h+y], xmm7
            vmovss  dword ptr [rsp+280h+x], xmm7
          }
          LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, xe, ye, we, he, &colorDkGrey, rgp.whiteImage);
        }
      }
      __asm { vcomiss xmm6, xmm7 }
      if ( !v66 )
      {
        __asm { vcomiss xmm6, xmm8 }
        if ( v66 || v67 )
        {
          __asm
          {
            vaddss  xmm0, xmm10, [rsp+280h+var_210]
            vmovss  xmm2, [rsp+280h+var_20C]; right
            vaddss  xmm1, xmm10, [rsp+280h+var_210]; top
            vaddss  xmm3, xmm0, xmm13; bottom
            vsubss  xmm0, xmm2, xmm12; left
          }
          LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
          __asm
          {
            vmovss  dword ptr [rsp+280h+h], xmm8
            vmovss  dword ptr [rsp+280h+w], xmm8
            vmovss  dword ptr [rsp+280h+y], xmm7
            vmovss  dword ptr [rsp+280h+x], xmm7
          }
          LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, xf, yf, wf, hf, &colorDkGrey, rgp.whiteImage);
          __asm
          {
            vaddss  xmm1, xmm10, [rsp+280h+var_210]
            vmovss  xmm0, [rsp+280h+var_20C]
            vaddss  xmm0, xmm0, [rsp+280h+var_208]; left
            vaddss  xmm3, xmm1, xmm13; bottom
            vaddss  xmm1, xmm10, [rsp+280h+var_210]; top
            vaddss  xmm2, xmm0, xmm12; right
          }
          LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
          __asm
          {
            vmovss  dword ptr [rsp+280h+h], xmm8
            vmovss  dword ptr [rsp+280h+w], xmm8
            vmovss  dword ptr [rsp+280h+y], xmm7
            vmovss  dword ptr [rsp+280h+x], xmm7
          }
          LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, xg, yg, wg, hg, &colorDkGrey, rgp.whiteImage);
        }
      }
      if ( _EDI < 10 )
      {
        __asm
        {
          vmulss  xmm0, xmm14, cs:__real@3d4ccccd
          vaddss  xmm1, xmm9, xmm0
          vcomiss xmm1, xmm7
          vmulss  xmm10, xmm1, [rsp+280h+var_208]
          vaddss  xmm6, xmm0, xmm6
          vmulss  xmm9, xmm6, [rsp+280h+var_208]
        }
        if ( (unsigned int)_EDI >= 0xA )
          __asm { vcomiss xmm1, xmm8 }
        __asm
        {
          vmovss  xmm10, [rbp+180h+var_200]
          vcomiss xmm6, xmm7
        }
        if ( (unsigned int)_EDI >= 0xA )
          __asm { vcomiss xmm6, xmm8 }
      }
      __asm
      {
        vmovss  xmm9, [rbp+180h+var_1F8]
        vmovss  xmm10, [rbp+180h+var_1E0]
      }
      ++_EDI;
      v69 += 8i64;
      v66 = (unsigned int)_EDI < 0xA;
      v67 = _EDI == 10;
      v68 = (unsigned int)_EDI <= 0xA;
    }
    while ( _EDI <= 10 );
    __asm
    {
      vmovaps xmm15, [rsp+280h+var_E8+8]
      vmovaps xmm14, [rsp+280h+var_D8+8]
      vmovaps xmm13, [rsp+280h+var_C8+8]
      vmovaps xmm12, [rsp+280h+var_B8+8]
      vmovaps xmm11, [rsp+280h+var_A8+8]
      vmovaps xmm10, [rsp+280h+var_98+8]
      vmovaps xmm9, [rsp+280h+var_88+8]
      vmovaps xmm8, [rsp+280h+var_78+8]
      vmovaps xmm7, [rsp+280h+var_68+8]
      vmovaps xmm6, xmmword ptr [rsp+280h+var_58+8]
    }
  }
}

/*
==============
CgCompassSystemMP::DrawHeadIcons
==============
*/
void CgCompassSystemMP::DrawHeadIcons(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  char v21; 
  char v22; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int v29; 
  const GfxImage **p_cachedImage; 
  unsigned int *p_icon; 
  bool v33; 
  float x; 
  ObjectiveFlags w; 
  float outClipped; 
  float v46; 
  float v47; 
  float outAngle; 
  char *outName; 
  lua_State *v51; 
  LUIElement *v52; 
  rectDef_s *v53; 
  SecureVec3 out; 
  __int64 v55; 
  vec2_t xyClipped; 
  vec2_t xy; 
  rectDef_s mapRect; 
  vec2_t outVector; 
  vec3_t outWorldPosition; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  v55 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  v53 = (rectDef_s *)rect;
  v52 = element;
  v51 = luaVM;
  *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rax+0Ch]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm1, xmm6
  }
  if ( !(v21 | v22) )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, [rbp+90h+mapRect.w]
      vaddss  xmm7, xmm1, [rbp+90h+mapRect.x]
      vmulss  xmm0, xmm3, [rbp+90h+mapRect.h]
      vaddss  xmm8, xmm0, [rbp+90h+mapRect.y]
    }
    CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    v29 = 0;
    p_cachedImage = &LocalClientGlobals->headIconCompassImageCache[0].cachedImage;
    p_icon = &LocalClientGlobals->predictedPlayerState.headIcons[0].icon;
    __asm { vmovss  xmm9, [rbp+90h+boundsRadius] }
    do
    {
      if ( (p_icon[1] & 1) != 0 )
      {
        if ( *((_BYTE *)p_cachedImage - 501235) )
        {
          if ( CG_Players_HeadIcons_GetWorldPosition(this->m_localClientNum, (const HeadIconView *)(p_icon - 1), (const HeadIconExtendedView *)p_cachedImage - 31328, &outWorldPosition) )
          {
            if ( *((_DWORD *)p_cachedImage - 2) == *p_icon && *p_cachedImage )
              goto LABEL_14;
            if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_HEADICON, *p_icon, (const char **)&outName) )
            {
              *p_cachedImage = Image_Register(outName, IMAGE_TRACK_HUD);
              *((_DWORD *)p_cachedImage - 2) = *p_icon;
            }
            if ( *p_cachedImage )
            {
LABEL_14:
              __asm
              {
                vmovss  dword ptr [rbp+90h+xy], xmm6
                vmovss  dword ptr [rbp+90h+xy+4], xmm6
                vmovss  dword ptr [rbp+90h+xyClipped], xmm6
                vmovss  dword ptr [rbp+90h+xyClipped+4], xmm6
                vmovss  dword ptr [rsp+1A0h+x], xmm9
              }
              v33 = CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &mapRect, x, &outVector, (const vec2_t *)&out, (const vec2_t *)&outWorldPosition, &xy, &xyClipped);
              __asm
              {
                vaddss  xmm1, xmm7, dword ptr [rbp+90h+xy]
                vmovss  dword ptr [rbp+90h+xy], xmm1
                vaddss  xmm0, xmm8, dword ptr [rbp+90h+xy+4]
                vmovss  dword ptr [rbp+90h+xy+4], xmm0
                vaddss  xmm2, xmm7, dword ptr [rbp+90h+xyClipped]
                vmovss  dword ptr [rbp+90h+xyClipped], xmm2
                vaddss  xmm1, xmm8, dword ptr [rbp+90h+xyClipped+4]
                vmovss  dword ptr [rbp+90h+xyClipped+4], xmm1
                vmovss  [rsp+1A0h+var_148], xmm6
                vmovss  [rsp+1A0h+var_150], xmm6
                vmovss  dword ptr [rsp+1A0h+outClipped], xmm6
              }
              LOWORD(w) = 0;
              CgCompassSystemMP::DrawObjective(this, compassType, v53, &xy, &xyClipped, v33, w, OBJ_ICON_SIZE_HEADICON, NULL, outClipped, v46, v47, *p_cachedImage, &colorWhite, &colorWhite, v52, v51);
            }
          }
          else
          {
            *p_cachedImage = NULL;
          }
        }
        else
        {
          *p_cachedImage = NULL;
        }
      }
      else
      {
        *p_cachedImage = NULL;
      }
      ++v29;
      p_icon += 6;
      p_cachedImage += 2;
    }
    while ( v29 < 0x20 );
  }
  memset(&out, 0, sizeof(out));
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
CgCompassSystemMP::DrawItemsLayer
==============
*/
void CgCompassSystemMP::DrawItemsLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  LocalClientNum_t m_localClientNum; 
  bool cropPartialMap; 
  CompassType compassType; 
  const cg_t *LocalClientGlobals; 
  CgCompassSystemMP_vtbl *v25; 
  float x; 
  float xa; 
  int y; 
  float ya; 
  float yb; 
  float yc; 
  float yd; 
  float ye; 
  float yf; 
  float w; 
  float wa; 
  float wb; 
  float outAngle; 
  const MinimapOptions *v54; 
  vec2_t playerWorldPos; 
  vec2_t outVector; 
  vec2_t v58; 
  vec2_t out; 
  vec2_t in; 
  rectDef_s mapRect; 

  __asm { vmovaps [rsp+130h+var_50], xmm6 }
  _R13 = this;
  m_localClientNum = this->m_localClientNum;
  __asm { vmovss  xmm6, dword ptr [rdx+38h] }
  cropPartialMap = minimapOptions->cropPartialMap;
  compassType = minimapOptions->compassType;
  v54 = minimapOptions;
  LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
  CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
  CgCompassSystem::GetCompassYaw(_R13, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+3Fh+playerWorldPos], xmm0
    vmovss  dword ptr [rbp+3Fh+playerWorldPos+4], xmm0
    vmovss  [rbp+3Fh+var_A8], xmm0
    vmovss  dword ptr [rbp+3Fh+in+4], xmm0
    vmovss  [rbp+3Fh+var_80], xmm0
    vmovss  xmm0, cs:__real@461c4000
    vmovss  dword ptr [rsp+130h+x], xmm6
    vmovss  dword ptr [rbp+3Fh+in], xmm0
  }
  CgCompassSystem::WorldPosToCompass(_R13, compassType, cropPartialMap, &mapRect, x, &outVector, &playerWorldPos, &playerWorldPos, &out, NULL);
  __asm { vmovss  dword ptr [rsp+130h+x], xmm6 }
  CgCompassSystem::WorldPosToCompass(_R13, compassType, cropPartialMap, &mapRect, xa, &outVector, &playerWorldPos, &in, &v58, NULL);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+3Fh+var_98]
    vmovss  xmm1, dword ptr [rbp+3Fh+var_98+4]
    vsubss  xmm2, xmm1, dword ptr [rbp+3Fh+var_90+4]
    vsubss  xmm4, xmm0, dword ptr [rbp+3Fh+var_90]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
  }
  _RBX = v54;
  v25 = _R13->__vftable;
  __asm
  {
    vsqrtss xmm2, xmm1, xmm1
    vmulss  xmm3, xmm2, cs:__real@38d1b717
    vmovss  dword ptr [r13+0FB00h], xmm3
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+130h+y], xmm0
  }
  ((void (__fastcall *)(CgCompassSystemMP *, _QWORD, bool, const rectDef_s *, const rectDef_s *, int, const vec4_t *, GfxImage *, LUIElement *, lua_State *))v25->DrawScramblers)(_R13, (unsigned int)_RBX->compassType, _RBX->cropPartialMap, parentRect, rect, y, color, _RBX->mapMask, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+130h+y], xmm0
  }
  CgCompassSystemMP::DrawPortableRadar(_R13, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, ya, color, _RBX->mapMask, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+130h+w], xmm0
  }
  CgCompassSystemMP::DrawScriptableObjectives(_R13, _RBX->compassType, _RBX->cropPartialMap, _RBX->largeMap, parentRect, rect, w, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+130h+y], xmm0
  }
  CG_VehicleHudMP_DrawCompass(_R13->m_localClientNum, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, yb, color, _RBX->largeMap, _RBX->mapMask, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+130h+w], xmm0
  }
  CgCompassSystemMP::DrawPlayerPointers(_R13, _RBX->compassType, _RBX->cropPartialMap, _RBX->largeMap, parentRect, rect, wa, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+130h+y], xmm0
  }
  CgCompassSystemMP::DrawTurrets(_R13, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, yc, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+130h+y], xmm0
  }
  CgCompassSystemMP::DrawPlanes(_R13, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, yd, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+130h+y], xmm0
  }
  CgCompassSystemMP::DrawHeadIcons(_R13, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, ye, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+130h+w], xmm0
  }
  CgCompassSystemMP::DrawPlayerCalloutMarkerPings(_R13, 0, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, wb, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+130h+y], xmm0
  }
  CgCompassSystemMP::DrawMLGCameras(_R13, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, yf, color, element, luaVM);
  CgCompassSystemMP::DrawGridLabels(_R13, _RBX->compassType, parentRect, rect, color, element, luaVM);
  __asm { vmovaps xmm6, [rsp+130h+var_50] }
}

/*
==============
CgCompassSystemMP::DrawMLGCameraIcon
==============
*/
void CgCompassSystemMP::DrawMLGCameraIcon(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *rect, const rectDef_s *scaledRect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM, float centerX, float centerY, const cg_t *cgameGlob, const vec3_t *camOrigin, const vec2_t *camAngles, const GfxImage *icon, int cameraNumber)
{
  const dvar_t *v33; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  lua_State *v55; 
  LUIElement *v60; 
  __int64 v71; 
  const ScreenPlacement *v81; 
  GfxFont *FontHandle; 
  __int64 v93; 
  float *outAngle; 
  vec2_t *outVector; 
  vec2_t *playerWorldPos; 
  vec2_t *in; 
  vec2_t *v98; 
  vec2_t *outClipped; 
  int fontSize[2]; 
  FontDecodeStyle *fontDecodeStyle; 
  FontGlowStyle *fontGlowStyle; 
  float v103; 
  __int64 v104; 
  GfxImage *material; 
  lua_State *v106; 
  float out; 
  char dest[4]; 
  float w; 
  float h; 
  float v111; 
  rectDef_s *mapRect; 
  const rectDef_s *v113; 
  GfxImage *v114; 
  lua_State *v115; 
  LUIElement *v116; 
  SecureVec3 v117; 
  __int64 v118; 
  vec2_t v119; 
  vec2_t v120; 
  vec4_t v121; 
  vec2_t north; 
  vec4_t quadVerts[4]; 
  char v124; 
  void *retaddr; 

  _RAX = &retaddr;
  v118 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
  }
  v113 = rect;
  mapRect = (rectDef_s *)scaledRect;
  _R15 = color;
  v116 = element;
  v115 = luaVM;
  _R13 = camOrigin;
  v114 = (GfxImage *)icon;
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vucomiss xmm0, dword ptr [r13+0]
  }
  if ( (unsigned __int64)&v93 != _security_cookie )
  {
    CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, cgameGlob, &v111, &north);
    __asm
    {
      vmovss  xmm0, [rbp+110h+var_180]
      vsubss  xmm0, xmm0, dword ptr [rdi+4]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovss  [rbp+110h+out], xmm0 }
    if ( !cropPartialMap && compassType == COMPASS_TYPE_PARTIAL )
    {
      v33 = DVARBOOL_compassRotation;
      if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      if ( v33->current.enabled )
        goto LABEL_10;
    }
    if ( this->MapShouldRotate(this) )
    {
      this->MapRotationFactor(this);
      __asm
      {
        vmovss  xmm1, [rbp+110h+out]
        vsubss  xmm3, xmm1, xmm0
        vmovss  [rbp+110h+out], xmm3
      }
    }
    else
    {
LABEL_10:
      __asm { vmovss  xmm3, [rbp+110h+out]; in }
    }
    CgCompassSystem::WorldYawToCompass(this, compassType, cgameGlob, *(const float *)&_XMM3, &out);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rbp+110h+var_138], xmm6
      vmovss  dword ptr [rbp+110h+var_138+4], xmm6
    }
    CG_CalcPlayerPos(&v117, this->m_localClientNum);
    __asm
    {
      vmovss  xmm0, [rbp+110h+boundsRadius]
      vmovss  dword ptr [rsp+220h+outAngle], xmm0
    }
    CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, mapRect, *(const float *)&outAngle, &north, (const vec2_t *)&v117, (const vec2_t *)camOrigin, &v120, &v119);
    __asm
    {
      vmovss  xmm4, [rbp+110h+centerX]
      vaddss  xmm1, xmm4, dword ptr [rbp+110h+var_130]
      vmovss  dword ptr [rbp+110h+var_130], xmm1
      vmovss  xmm3, [rbp+110h+centerY]
      vaddss  xmm1, xmm3, dword ptr [rbp+110h+var_130+4]
      vmovss  dword ptr [rbp+110h+var_130+4], xmm1
      vaddss  xmm0, xmm4, dword ptr [rbp+110h+var_138]
      vmovss  dword ptr [rbp+110h+var_138], xmm0
      vaddss  xmm2, xmm3, dword ptr [rbp+110h+var_138+4]
      vmovss  dword ptr [rbp+110h+var_138+4], xmm2
    }
    CgCompassSystem::CalcCompassPointerSize(this, compassType, OBJ_ICON_SIZE_REGULAR, &w, &h);
    vertAlign = v113->vertAlign;
    horzAlign = v113->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, (float *)&v119, (float *)&v119 + 1, &w, &h, horzAlign, vertAlign);
    __asm
    {
      vmovss  xmm4, [rbp+110h+w]
      vmovaps xmm12, xmm4
      vmovss  xmm5, [rbp+110h+h]
      vmovaps xmm13, xmm5
    }
    if ( v114 == staticMLGCameras.m_mlgSelectedCamIcon )
    {
      __asm
      {
        vmulss  xmm4, xmm4, cs:__real@4031c71c
        vmovss  [rbp+110h+w], xmm4
        vmulss  xmm5, xmm5, cs:__real@4031c71c
        vmovss  [rbp+110h+h], xmm5
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15+0Ch]
      vmovss  xmm1, dword ptr [r15+8]
      vmovss  xmm2, dword ptr [r15+4]
      vmovss  xmm3, dword ptr [r15]
    }
    v55 = v115;
    v106 = v115;
    material = v114;
    __asm
    {
      vmovss  dword ptr [rsp+220h+var_1B0], xmm0
      vmovss  [rsp+220h+var_1B8], xmm1
      vmovss  dword ptr [rsp+220h+fontGlowStyle], xmm2
      vmovss  dword ptr [rsp+220h+fontDecodeStyle], xmm3
      vmovss  xmm0, [rbp+110h+out]
      vmovss  [rsp+220h+fontSize], xmm0
      vmovss  xmm9, cs:__real@3f800000
      vmovss  dword ptr [rsp+220h+outClipped], xmm9
      vmovss  dword ptr [rsp+220h+var_1E0], xmm9
      vmovss  dword ptr [rsp+220h+in], xmm6
      vmovss  dword ptr [rsp+220h+playerWorldPos], xmm6
      vmovss  dword ptr [rsp+220h+outVector], xmm5
      vmovss  dword ptr [rsp+220h+outAngle], xmm4
      vmovss  xmm3, dword ptr [rbp+110h+var_138+4]; centerY
      vmovss  xmm2, dword ptr [rbp+110h+var_138]; centerX
    }
    v60 = v116;
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v116, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&outAngle, *(float *)&outVector, *(float *)&playerWorldPos, *(float *)&in, *(float *)&v98, *(float *)&outClipped, *(float *)fontSize, *(float *)&fontDecodeStyle, *(float *)&fontGlowStyle, v103, *(float *)&v104, v114, v115);
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, rax
      vxorps  xmm8, xmm8, xmm8
      vcvtsi2ss xmm8, xmm8, rax
      vmulss  xmm10, xmm7, cs:__real@3bd55555
      vmulss  xmm11, xmm8, cs:__real@3c00f2ba
      vmulss  xmm0, xmm12, cs:__real@3f000000
      vaddss  xmm12, xmm0, dword ptr [rbp+110h+var_138]
      vmulss  xmm1, xmm13, cs:__real@3f000000
      vaddss  xmm13, xmm1, dword ptr [rbp+110h+var_138+4]
    }
    v71 = tls_index;
    if ( dword_151419078 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_151419078);
      if ( dword_151419078 == -1 )
      {
        __asm
        {
          vmulss  xmm0, xmm7, cs:__real@bbaaaaab
          vmovss  cs:compassMLGCameraTextXOffset, xmm0
        }
        j__Init_thread_footer(&dword_151419078);
      }
    }
    if ( dword_151419080 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v71) + 1772i64) )
    {
      j__Init_thread_header(&dword_151419080);
      if ( dword_151419080 == -1 )
      {
        __asm
        {
          vmulss  xmm0, xmm8, cs:__real@ba72b9d6
          vmovss  cs:compassMLGCameraTextYOffset, xmm0
        }
        j__Init_thread_footer(&dword_151419080);
      }
    }
    __asm
    {
      vaddss  xmm4, xmm12, cs:compassMLGCameraTextXOffset
      vaddss  xmm0, xmm13, cs:compassMLGCameraTextYOffset
      vsubss  xmm3, xmm0, xmm11; bottom
      vaddss  xmm2, xmm10, xmm4; right
      vaddss  xmm1, xmm0, xmm11; top
      vsubss  xmm0, xmm4, xmm10; left
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  dword ptr [rbp+110h+var_128], xmm6
      vmovss  dword ptr [rbp+110h+var_128+4], xmm6
      vmovss  dword ptr [rbp+110h+var_128+8], xmm6
      vmovss  xmm0, dword ptr [r15+0Ch]
      vmovss  dword ptr [rbp+110h+var_128+0Ch], xmm0
    }
    Com_sprintf(dest, 2ui64, "%d", (unsigned int)cameraNumber);
    v81 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    __asm { vmovaps xmm2, xmm9; scale }
    FontHandle = UI_GetFontHandle(v81, 1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rsp+220h+outClipped], xmm6 }
    LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, v55, v60, (const vec4_t (*)[4])quadVerts, &v121, FontHandle, dest, 0, 0, *(float *)&outClipped, 20, NULL, NULL);
    memset(&v117, 0, sizeof(v117));
  }
  _R11 = &v124;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
  }
}

/*
==============
CgCompassSystemMP::DrawMLGCameras
==============
*/
void CgCompassSystemMP::DrawMLGCameras(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  const dvar_t *v21; 
  const cg_t *LocalClientGlobals; 
  LocalClientNum_t m_localClientNum; 
  int cameraNumber; 
  DDLContext *DDLContext; 
  bool *m_newlyCreated; 
  vec3_t *camOrigin; 
  char v43; 
  vec2_t *camAngles; 
  float *v45; 
  const GfxImage *m_mlgCamIcon; 
  bool v68; 
  unsigned __int64 v70; 
  __int64 v89; 
  int v90; 
  int cmdsize; 
  int v92; 
  __int64 i; 
  unsigned __int8 *v94; 
  float *v98; 
  LocalClientNum_t ClientFromController; 
  int IsKeyPressed; 
  __int64 m_debugCamSelectedIndex; 
  __int64 v111; 
  char *fmt; 
  float y; 
  float *ya; 
  float yb; 
  float *w; 
  float *h; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  GfxImage *icon; 
  int controllerIndex; 
  vec3_t *p_origin; 
  cg_t *cgameGlob; 
  DDLState fromState; 
  DDLState toState; 
  vec2_t v131; 
  rectDef_s x; 
  DDLState result; 
  float v1[4]; 
  float v0[4]; 
  char dest[256]; 

  v21 = DVARBOOL_cg_mlg_static_cameras;
  if ( !DVARBOOL_cg_mlg_static_cameras && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_static_cameras") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    cgameGlob = (cg_t *)LocalClientGlobals;
    if ( CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->m_isMLGSpectator )
    {
      m_localClientNum = this->m_localClientNum;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      cameraNumber = 0;
      fromState.offset = 0;
      toState.isValid = 0;
      toState.offset = 0;
      fromState.isValid = 0;
      fromState.arrayIndex = -1;
      __asm { vmovdqu xmmword ptr [rbp+250h+fromState.member], xmm0 }
      toState.arrayIndex = -1;
      __asm { vmovdqu xmmword ptr [rbp+250h+toState.member], xmm0 }
      controllerIndex = CL_Mgr_GetControllerFromClient(m_localClientNum);
      DDLContext = GamerProfile_GetDDLContext(controllerIndex, MLG_SETTINGS);
      _RAX = DDL_GetRootState(&result, DDLContext->def);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+250h+fromState.isValid], ymm0
      }
      DDL_MoveToName(&fromState, &toState, "shoutcaster_cameraicon");
      if ( DDL_GetUInt(&toState, DDLContext) )
      {
        __asm
        {
          vmovaps [rsp+350h+var_50], xmm6
          vmovaps [rsp+350h+var_60], xmm7
          vmovaps [rsp+350h+var_70], xmm8
          vmovaps [rsp+350h+var_80], xmm9
          vmovaps [rsp+350h+var_90], xmm10
          vmovaps [rsp+350h+var_A0], xmm11
          vmovaps [rsp+350h+var_B0], xmm12
          vmovaps [rsp+350h+var_C0], xmm13
          vmovaps [rsp+350h+var_D0], xmm14
          vmovaps [rsp+350h+var_E0], xmm15
        }
        if ( !staticMLGCameras.m_mlgCamIcon )
          goto LABEL_16;
        if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
          __debugbreak();
        if ( strcmp(cls.m_activeGameMapName, staticMLGCameras.m_lastReadMapName) )
          goto LABEL_16;
        if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
          __debugbreak();
        if ( strcmp(cls.m_activeGameTypeName, staticMLGCameras.m_lastReadGametype) )
LABEL_16:
          StaticMlgCameras::ReadCSVs(&staticMLGCameras);
        CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
        __asm { vmovss  xmm3, cs:__real@3f000000 }
        m_newlyCreated = staticMLGCameras.m_newlyCreated;
        __asm
        {
          vmulss  xmm1, xmm3, [rbp+250h+var_240]
          vmulss  xmm0, xmm3, [rbp+250h+var_23C]
          vaddss  xmm14, xmm1, [rbp+250h+x]
          vaddss  xmm15, xmm0, [rbp+250h+var_244]
          vmovss  xmm13, cs:__real@3a83126f
          vmovss  xmm9, cs:__real@3e99999a
          vmovss  xmm10, cs:__real@3d4ccccd
          vmovss  xmm11, cs:__real@3f4ccccd
        }
        LODWORD(v131.v[0]) = staticMLGCameras.m_lastSelectCamIndex;
        camOrigin = staticMLGCameras.m_camOrigins;
        _RAX = &LocalClientGlobals->predictedPlayerState.origin;
        v43 = 0;
        p_origin = &LocalClientGlobals->predictedPlayerState.origin;
        camAngles = staticMLGCameras.m_camAngles;
        v45 = &staticMLGCameras.m_camOrigins[0].v[2];
        __asm { vxorps  xmm12, xmm12, xmm12 }
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vsubss  xmm1, xmm0, dword ptr [r15-8]
            vmovss  xmm2, dword ptr [rax+4]
            vsubss  xmm0, xmm2, dword ptr [r15-4]
          }
          m_mlgCamIcon = staticMLGCameras.m_mlgCamIcon;
          __asm
          {
            vmovss  [rbp+250h+v0], xmm1
            vmovss  xmm1, dword ptr [rax+8]
          }
          _RAX = color;
          __asm
          {
            vsubss  xmm2, xmm1, dword ptr [r15]
            vmovss  [rbp+250h+var_1FC], xmm0
            vmovss  [rbp+250h+var_1F8], xmm2
            vmovss  xmm0, dword ptr [rax]
            vmovss  xmm6, dword ptr [rax+4]
            vmovss  xmm7, dword ptr [rax+8]
            vmovss  xmm8, dword ptr [rax+0Ch]
            vmovaps xmm2, xmm13; epsilon
            vmovss  dword ptr [rbp+250h+result.isValid], xmm0
            vmovss  [rbp+250h+result.offset], xmm6
            vmovss  [rbp+250h+result.arrayIndex], xmm7
            vmovss  dword ptr [rbp+250h+result+0Ch], xmm8
            vmovss  [rbp+250h+v1], xmm12
            vmovss  [rbp+250h+var_20C], xmm12
            vmovss  [rbp+250h+var_208], xmm12
          }
          if ( VecNCompareCustomEpsilon(v0, v1, *(float *)&_XMM2, 3) )
          {
            m_mlgCamIcon = staticMLGCameras.m_mlgSelectedCamIcon;
            staticMLGCameras.m_lastSelectCamIndex = cameraNumber;
          }
          else if ( staticMLGCameras.m_debugCamSelectedIndex == cameraNumber && (staticMLGCameras.m_lastSelectCamIndex == cameraNumber || *m_newlyCreated) )
          {
            __asm
            {
              vmulss  xmm0, xmm6, xmm9
              vmovss  [rbp+250h+result.offset], xmm0
              vmulss  xmm0, xmm8, xmm11
              vmulss  xmm1, xmm7, xmm10
              vmovss  dword ptr [rbp+250h+result+0Ch], xmm0
              vmovss  [rbp+250h+result.arrayIndex], xmm1
            }
            v43 = 1;
          }
          ++cameraNumber;
          __asm { vmovss  xmm6, [rbp+250h+boundsRadius] }
          icon = (GfxImage *)m_mlgCamIcon;
          _R14 = cgameGlob;
          __asm
          {
            vmovss  [rsp+350h+var_300], xmm15
            vmovss  [rsp+350h+var_308], xmm14
            vmovss  dword ptr [rsp+350h+y], xmm6
          }
          CgCompassSystemMP::DrawMLGCameraIcon(this, compassType, cropPartialMap, rect, &x, y, (const vec4_t *)&result, element, luaVM, v118, v120, cgameGlob, camOrigin, camAngles, icon, cameraNumber);
          _RAX = p_origin;
          ++camAngles;
          ++camOrigin;
          v45 += 3;
          ++m_newlyCreated;
        }
        while ( cameraNumber < 8 );
        __asm { vmovaps xmm13, [rsp+350h+var_C0] }
        _R12 = &staticMLGCameras;
        __asm { vmovaps xmm12, [rsp+350h+var_B0] }
        v68 = v43 == 0;
        __asm { vmovaps xmm11, [rsp+350h+var_A0] }
        v70 = -1i64;
        __asm
        {
          vmovaps xmm10, [rsp+350h+var_90]
          vmovaps xmm9, [rsp+350h+var_80]
          vmovaps xmm8, [rsp+350h+var_70]
          vmovaps xmm7, [rsp+350h+var_60]
        }
        if ( v68 )
        {
          v98 = (float *)p_origin;
        }
        else
        {
          _RAX = staticMLGCameras.m_debugCamSelectedIndex;
          if ( staticMLGCameras.m_newlyCreated[staticMLGCameras.m_debugCamSelectedIndex] && LODWORD(v131.v[0]) != staticMLGCameras.m_debugCamSelectedIndex )
          {
            __asm { vmovss  xmm0, cs:__real@7f7fffff }
            _RDX = 3i64 * staticMLGCameras.m_debugCamSelectedIndex;
            __asm { vucomiss xmm0, dword ptr [r12+rdx*4+10h] }
            if ( LODWORD(v131.v[0]) != staticMLGCameras.m_debugCamSelectedIndex )
            {
              staticMLGCameras.m_lastSelectCamIndex = staticMLGCameras.m_debugCamSelectedIndex;
              __asm
              {
                vmovss  xmm1, dword ptr [r12+rdx*4+18h]
                vmovss  xmm3, dword ptr [r12+rdx*4+10h]
                vmovss  xmm0, dword ptr [r12+rdx*4+14h]
                vmovss  xmm4, dword ptr [r12+rax*8+70h]
                vmovss  xmm2, dword ptr [r12+rax*8+74h]
                vcvtss2sd xmm4, xmm4, xmm4
                vmovsd  [rsp+350h+h], xmm4
                vcvtss2sd xmm2, xmm2, xmm2
                vmovsd  [rsp+350h+w], xmm2
                vcvtss2sd xmm1, xmm1, xmm1
                vcvtss2sd xmm3, xmm3, xmm3
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+350h+y], xmm1
                vmovq   r9, xmm3
                vmovsd  [rsp+350h+fmt], xmm0
              }
              Com_sprintf(dest, 0x100ui64, "setspectatorviewpos %f %f %f %f %f\n", *(double *)&_XMM3, *(double *)&fmt, *(double *)&ya, *(double *)&w, *(double *)&h);
              v89 = this->m_localClientNum;
              Sys_EnterCriticalSection(CRITSECT_CBUF);
              do
                ++v70;
              while ( dest[v70] );
              v90 = truncate_cast<int,unsigned __int64>(v70);
              cmdsize = s_cmd_textArray[v89].cmdsize;
              v92 = v90 + 1;
              if ( v90 + 1 + cmdsize <= s_cmd_textArray[v89].maxsize )
              {
                for ( i = cmdsize - 1; i >= 0; v94[v92] = *v94 )
                  v94 = &s_cmd_textArray[v89].data[i--];
                memcpy_0(s_cmd_textArray[v89].data, dest, v90);
                s_cmd_textArray[v89].data[v92 - 1] = 10;
                s_cmd_textArray[v89].cmdsize += v92;
              }
              else
              {
                Com_PrintError(1, "Cbuf_InsertText overflowed\n");
              }
              Sys_LeaveCriticalSection(CRITSECT_CBUF);
              LODWORD(_RAX) = staticMLGCameras.m_debugCamSelectedIndex;
            }
          }
          _RCX = color;
          __asm
          {
            vmovss  xmm0, dword ptr [r14+1E0h]
            vmovss  xmm1, dword ptr [r14+1E4h]
          }
          v98 = (float *)p_origin;
          __asm
          {
            vmovss  [rsp+350h+var_300], xmm15
            vmovss  [rsp+350h+var_308], xmm14
            vmovss  dword ptr [rbp+250h+var_250], xmm0
            vmovss  xmm0, dword ptr [rcx+4]
            vmovss  dword ptr [rbp+250h+var_250+4], xmm1
            vmovss  xmm1, dword ptr [rcx+0Ch]
            vmovss  [rbp+250h+result.offset], xmm0
            vmovss  xmm0, dword ptr [rcx]
            vmulss  xmm2, xmm0, cs:__real@3e800000
            vmovss  dword ptr [rbp+250h+result+0Ch], xmm1
            vmovss  xmm1, dword ptr [rcx+8]
            vmulss  xmm0, xmm1, cs:__real@3f000000
            vmovss  dword ptr [rsp+350h+y], xmm6
            vmovss  dword ptr [rbp+250h+result.isValid], xmm2
            vmovss  [rbp+250h+result.arrayIndex], xmm0
          }
          CgCompassSystemMP::DrawMLGCameraIcon(this, compassType, cropPartialMap, rect, &x, yb, (const vec4_t *)&result, element, luaVM, v119, v121, cgameGlob, p_origin, &v131, staticMLGCameras.m_mlgSelectedCamIcon, _RAX + 1);
        }
        ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
        IsKeyPressed = CL_Keys_IsKeyPressed(ClientFromController, "END");
        __asm
        {
          vmovaps xmm15, [rsp+350h+var_E0]
          vmovaps xmm14, [rsp+350h+var_D0]
          vmovaps xmm6, [rsp+350h+var_50]
        }
        if ( IsKeyPressed )
        {
          if ( !staticMLGCameras.m_saveKeyPressed )
          {
            m_debugCamSelectedIndex = staticMLGCameras.m_debugCamSelectedIndex;
            if ( staticMLGCameras.m_debugCamSelectedIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6548, ASSERT_TYPE_ASSERT, "(camIndex < ( 4 + 4 ) && camIndex >= 0)", (const char *)&queryFormat, "camIndex < MAX_MLG_CAMERAS && camIndex >= 0") )
              __debugbreak();
            v111 = m_debugCamSelectedIndex;
            staticMLGCameras.m_camOrigins[v111].v[0] = *v98;
            staticMLGCameras.m_camOrigins[v111].v[1] = v98[1];
            staticMLGCameras.m_camOrigins[v111].v[2] = v98[2];
            staticMLGCameras.m_camAngles[m_debugCamSelectedIndex].v[0] = cgameGlob->predictedPlayerState.viewangles.v[0];
            staticMLGCameras.m_camAngles[m_debugCamSelectedIndex].v[1] = cgameGlob->predictedPlayerState.viewangles.v[1];
            StaticMlgCameras::WriteCamerasFile(&staticMLGCameras, staticMLGCameras.m_debugCamSelectedIndex >= 4);
          }
          staticMLGCameras.m_saveKeyPressed = 1;
        }
        else
        {
          staticMLGCameras.m_saveKeyPressed = 0;
        }
      }
    }
  }
}

/*
==============
CgCompassSystemMP::DrawMLGSpectatorObjective
==============
*/
void CgCompassSystemMP::DrawMLGSpectatorObjective(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *rect, vec2_t *xy, vec2_t *xyClipped, bool clipped, ObjectiveFlags flags, float yawTo, float scale, float bgScale, const GfxImage *icon, const vec4_t *color, const vec4_t *bgColorLeft, const vec4_t *bgColorRight, const vec4_t *bgColorLeftLight, const vec4_t *bgColorRightLight, LUIElement *element, lua_State *luaVM)
{
  const GfxImage *material; 
  int v33; 
  int v34; 
  const ScreenPlacement *ActivePlacement; 
  lua_State *v50; 
  LUIElement *v52; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  int horzAlign; 
  int horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  int horzAlignd; 
  int vertAlign; 
  int vertAligna; 
  int vertAlignb; 
  int vertAlignc; 
  int vertAlignd; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  char v159; 
  void *retaddr; 
  float w; 

  _RAX = &retaddr;
  material = icon;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
  }
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5914, ASSERT_TYPE_ASSERT, "(icon)", (const char *)&queryFormat, "icon") )
    __debugbreak();
  CgCompassSystem::CalcCompassPointerSize(this, compassType, OBJ_ICON_SIZE_REGULAR, &w, (float *)&icon);
  v33 = rect->vertAlign;
  v34 = rect->horzAlign;
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
  _RSI = xyClipped;
  ScrPlace_ApplyRect(ActivePlacement, (float *)xyClipped, (float *)xyClipped + 1, &w, (float *)&icon, v34, v33);
  __asm
  {
    vmovss  xmm12, cs:__real@3f800000
    vaddss  xmm3, xmm12, [rsp+138h+scale]
    vmulss  xmm2, xmm3, [rsp+138h+w]
    vmulss  xmm1, xmm3, dword ptr [rsp+138h+icon]
    vmovss  [rsp+138h+w], xmm2
    vmovss  dword ptr [rsp+138h+icon], xmm1
  }
  if ( clipped )
  {
    *(double *)&_XMM0 = CalcCompassClippedDistanceScale(xy, _RSI, 0);
    __asm
    {
      vmulss  xmm2, xmm0, [rsp+138h+w]
      vmulss  xmm0, xmm0, dword ptr [rsp+138h+icon]
      vmovss  dword ptr [rsp+138h+icon], xmm0
      vmovss  [rsp+138h+w], xmm2
    }
  }
  _RBX = DCONST_DVARFLT_compassObjectiveIconHeightAdjust;
  if ( !DCONST_DVARFLT_compassObjectiveIconHeightAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconHeightAdjust") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm13, dword ptr [rbx+28h] }
  _RBX = DVARFLT_compassObjectiveIconBackgroundScalar;
  if ( !DVARFLT_compassObjectiveIconBackgroundScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconBackgroundScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+28h]
    vaddss  xmm2, xmm12, [rsp+138h+bgScale]
    vmulss  xmm0, xmm3, dword ptr [rsp+138h+icon]
    vmulss  xmm1, xmm3, [rsp+138h+w]
  }
  v50 = luaVM;
  __asm { vmovss  xmm8, [rsp+138h+yawTo] }
  v52 = element;
  __asm { vaddss  xmm3, xmm13, dword ptr [rsi+4]; centerY }
  _RAX = bgColorLeftLight;
  __asm
  {
    vmulss  xmm9, xmm0, xmm2
    vmulss  xmm6, xmm9, cs:__real@3f933333
    vmulss  xmm11, xmm1, xmm2
    vmovss  xmm0, dword ptr [rax+0Ch]
    vmovss  xmm1, dword ptr [rax+8]
    vmulss  xmm7, xmm11, cs:__real@3f933333
    vmovss  xmm2, dword ptr [rsi]; centerX
    vmovss  [rsp+138h+var_C8], xmm0
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  [rsp+138h+var_D0], xmm1
    vmovss  xmm1, dword ptr [rax]
    vmovss  [rsp+138h+var_D8], xmm0
    vmovss  [rsp+138h+var_E0], xmm1
    vmovss  [rsp+138h+var_E8], xmm8
    vmovss  [rsp+138h+var_F0], xmm12
    vmovss  [rsp+138h+var_F8], xmm12
    vxorps  xmm10, xmm10, xmm10
    vmovss  [rsp+138h+var_100], xmm10
    vmovss  [rsp+138h+vertAlign], xmm10
    vmovss  [rsp+138h+horzAlign], xmm6
    vmovss  dword ptr [rsp+138h+fmt], xmm7
  }
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmt, *(float *)&horzAlign, *(float *)&vertAlign, v119, v124, v129, v134, v139, v144, v149, v154, cgMedia.compass.codcaster_objective_background_left, luaVM);
  __asm
  {
    vaddss  xmm3, xmm13, dword ptr [rsi+4]; centerY
    vmovss  xmm2, dword ptr [rsi]; centerX
  }
  _RAX = bgColorRightLight;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0Ch]
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  [rsp+138h+var_C8], xmm0
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  [rsp+138h+var_D0], xmm1
    vmovss  xmm1, dword ptr [rax]
    vmovss  [rsp+138h+var_D8], xmm0
    vmovss  [rsp+138h+var_E0], xmm1
    vmovss  [rsp+138h+var_E8], xmm8
    vmovss  [rsp+138h+var_F0], xmm12
    vmovss  [rsp+138h+var_F8], xmm10
    vmovss  [rsp+138h+var_100], xmm10
    vmovss  [rsp+138h+vertAlign], xmm12
    vmovss  [rsp+138h+horzAlign], xmm6
    vmovss  dword ptr [rsp+138h+fmt], xmm7
  }
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v52, *(float *)&_XMM2, *(float *)&_XMM3, fmta, *(float *)&horzAligna, *(float *)&vertAligna, v120, v125, v130, v135, v140, v145, v150, v155, cgMedia.compass.codcaster_objective_background_left, v50);
  __asm { vaddss  xmm3, xmm13, dword ptr [rsi+4]; centerY }
  _RAX = bgColorLeft;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0Ch]
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  [rsp+138h+var_C8], xmm0
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  [rsp+138h+var_D0], xmm1
    vmovss  xmm1, dword ptr [rax]
    vmovss  [rsp+138h+var_D8], xmm0
    vmovss  [rsp+138h+var_E0], xmm1
    vmovss  [rsp+138h+var_E8], xmm8
    vmovss  [rsp+138h+var_F0], xmm12
    vmovss  [rsp+138h+var_F8], xmm12
    vmovss  [rsp+138h+var_100], xmm10
    vmovss  [rsp+138h+vertAlign], xmm10
    vmovss  [rsp+138h+horzAlign], xmm9
    vmovss  xmm2, dword ptr [rsi]; centerX
    vmovss  dword ptr [rsp+138h+fmt], xmm11
  }
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v52, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, *(float *)&horzAlignb, *(float *)&vertAlignb, v121, v126, v131, v136, v141, v146, v151, v156, cgMedia.compass.codcaster_objective_background_left, v50);
  __asm
  {
    vaddss  xmm3, xmm13, dword ptr [rsi+4]; centerY
    vmovss  xmm2, dword ptr [rsi]; centerX
  }
  _RAX = bgColorRight;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0Ch]
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  [rsp+138h+var_C8], xmm0
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  [rsp+138h+var_D0], xmm1
    vmovss  xmm1, dword ptr [rax]
    vmovss  [rsp+138h+var_D8], xmm0
    vmovss  [rsp+138h+var_E0], xmm1
    vmovss  [rsp+138h+var_E8], xmm8
    vmovss  [rsp+138h+var_F0], xmm12
    vmovss  [rsp+138h+var_F8], xmm10
    vmovss  [rsp+138h+var_100], xmm10
    vmovss  [rsp+138h+vertAlign], xmm12
    vmovss  [rsp+138h+horzAlign], xmm9
    vmovss  dword ptr [rsp+138h+fmt], xmm11
  }
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v52, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, *(float *)&horzAlignc, *(float *)&vertAlignc, v122, v127, v132, v137, v142, v147, v152, v157, cgMedia.compass.codcaster_objective_background_left, v50);
  _RAX = color;
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+4]; centerY
    vmovss  xmm2, dword ptr [rsi]; centerX
    vmovss  xmm0, dword ptr [rax+0Ch]
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  [rsp+138h+var_C8], xmm0
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  [rsp+138h+var_D0], xmm1
    vmovss  xmm1, dword ptr [rax]
    vmovss  [rsp+138h+var_D8], xmm0
    vmovss  xmm0, dword ptr [rsp+138h+icon]
    vmovss  [rsp+138h+var_E0], xmm1
    vmovss  xmm1, [rsp+138h+w]
    vmovss  [rsp+138h+var_E8], xmm8
    vmovss  [rsp+138h+var_F0], xmm12
    vmovss  [rsp+138h+var_F8], xmm12
    vmovss  [rsp+138h+var_100], xmm10
    vmovss  [rsp+138h+vertAlign], xmm10
    vmovss  [rsp+138h+horzAlign], xmm0
    vmovss  dword ptr [rsp+138h+fmt], xmm1
  }
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v52, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, *(float *)&horzAlignd, *(float *)&vertAlignd, v123, v128, v133, v138, v143, v148, v153, v158, material, v50);
  _R11 = &v159;
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
CgCompassSystemMP::DrawMapLayer
==============
*/
void CgCompassSystemMP::DrawMapLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, const vec4_t *mapColor, LUIElement *element, lua_State *luaVM)
{
  bool cropPartialMap; 
  CompassType compassType; 
  float v15; 

  _RBX = minimapOptions;
  CgCompassSystem::DrawPlayerMap(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, NULL, mapColor, minimapOptions->mapMask, minimapOptions->mapOverlay, minimapOptions->mapRotOverlay, element, luaVM);
  CgCompassSystemMP::DrawGlitchOnMinimap(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, mapColor, _RBX->mapMask, element, luaVM);
  cropPartialMap = _RBX->cropPartialMap;
  compassType = _RBX->compassType;
  if ( this->m_isBigMapMinimap )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+38h]
      vmovss  dword ptr [rsp+78h+var_50], xmm0
    }
    CgCompassSystemMP::DrawBigMapUAV(this, compassType, cropPartialMap, parentRect, rect, v15, color, element, luaVM);
  }
  else
  {
    CgCompassSystemMP::DrawRadarEffects(this, compassType, cropPartialMap, parentRect, rect, mapColor, _RBX->mapMask, element, luaVM);
  }
}

/*
==============
CgCompassSystemMP::DrawMinimapPlayerPing
==============
*/
void CgCompassSystemMP::DrawMinimapPlayerPing(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v12; 
  int integer; 
  const dvar_t *v14; 
  int m_playerPingRepeatCount; 
  const dvar_t *v16; 
  const GfxImage *compassping_portable_radar_sweep; 
  float fmt; 
  float boundsRadius; 
  float boundsRadiusa; 
  float position; 
  float v46; 
  float v47; 
  float outWidth; 
  float outHeight; 
  rectDef_s *recta; 
  SecureVec3 out; 
  __int64 v52; 
  vec2_t out_s2t2; 
  vec2_t out_s1t1; 
  vec4_t verts[4]; 

  v52 = -2i64;
  recta = (rectDef_s *)rect;
  _RBX = minimapOptions;
  if ( minimapOptions->drawPlayerPingCircle )
  {
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    v12 = DVARINT_minimapPlayerCirclePingDuration;
    if ( !DVARINT_minimapPlayerCirclePingDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "minimapPlayerCirclePingDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    integer = v12->current.integer;
    if ( _RBX->isMapInitialized )
    {
      v14 = DCONST_DVARINT_minimapPlayerCirclePinRepeatCount;
      if ( !DCONST_DVARINT_minimapPlayerCirclePinRepeatCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "minimapPlayerCirclePinRepeatCount") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      this->m_playerPingRepeatCount = v14->current.integer;
      this->m_playerPingStartTime = integer - LocalClientGlobals->time;
      _RBX->isMapInitialized = 0;
    }
    if ( LocalClientGlobals->time - this->m_playerPingStartTime > integer )
    {
      this->m_playerPingStartTime = LocalClientGlobals->time;
      m_playerPingRepeatCount = this->m_playerPingRepeatCount;
      if ( m_playerPingRepeatCount >= 0 )
        this->m_playerPingRepeatCount = m_playerPingRepeatCount - 1;
    }
    v16 = DCONST_DVARINT_minimapPlayerCirclePinRepeatCount;
    if ( !DCONST_DVARINT_minimapPlayerCirclePinRepeatCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "minimapPlayerCirclePinRepeatCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.integer == -1 || this->m_playerPingRepeatCount >= 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+138h+outWidth], xmm0
        vmovss  [rsp+138h+outHeight], xmm0
      }
      CgCompassSystem::GetPlayerDrawSize(this, _RBX->compassType, _RBX->largeMap, &outHeight, &outWidth);
      __asm
      {
        vmovss  xmm2, [rsp+138h+outWidth]
        vmovss  xmm1, [rsp+138h+outHeight]
        vcmpltss xmm0, xmm2, xmm1
        vblendvps xmm0, xmm2, xmm1, xmm0
        vmovss  dword ptr [rsp+138h+var_B0], xmm0
      }
      _RSI = DVARFLT_minimapPlayerCirclePingRadius;
      if ( !DVARFLT_minimapPlayerCirclePingRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "minimapPlayerCirclePingRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm
      {
        vmovss  xmm4, dword ptr [rsi+28h]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebp
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm2, xmm2
        vmulss  xmm2, xmm1, xmm2
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm3, xmm0, xmm2
        vaddss  xmm1, xmm4, dword ptr [rsp+138h+var_B0]
        vdivss  xmm2, xmm1, dword ptr [rdi+0FB00h]
        vmulss  xmm0, xmm3, xmm2
      }
      compassping_portable_radar_sweep = cgMedia.compassping_portable_radar_sweep;
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+38h]
        vmovss  [rsp+138h+var_100], xmm0
        vmovss  [rsp+138h+boundsRadius], xmm1
      }
      if ( CgCompassSystemMP::CalculateAreaMarker(this, (const CompassType)_RBX->compassType, _RBX->cropPartialMap, parentRect, recta, boundsRadius, *(const vec2_t *)&out.x, v46, 0, &out_s1t1, &out_s2t2, (vec4_t (*)[4])verts) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+138h+var_B0+4]
          vmovss  [rsp+138h+var_100], xmm0
          vmovss  xmm1, dword ptr [rsp+138h+var_B0]
          vmovss  dword ptr [rsp+138h+position], xmm1
          vmovss  xmm0, dword ptr [rsp+138h+var_A8+4]
          vmovss  [rsp+138h+boundsRadius], xmm0
          vmovss  xmm1, dword ptr [rsp+138h+var_A8]
          vmovss  dword ptr [rsp+138h+fmt], xmm1
        }
        LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])verts, fmt, boundsRadiusa, position, v47, &colorWhite, compassping_portable_radar_sweep);
      }
    }
    memset(&out, 0, sizeof(out));
  }
}

/*
==============
CgCompassSystemMP::DrawMissiles
==============
*/
void CgCompassSystemMP::DrawMissiles(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  int clientNum; 
  char v29; 
  int *p_lastUpdateTime; 
  __int64 v38; 
  __int64 m_localClientNum; 
  CgEntitySystem *v40; 
  int v41; 
  int time; 
  bool v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  CgMLGSpectator *MLGSpectator; 
  team_t Team; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v49; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float fmta; 
  float *y; 
  float ya; 
  float *w; 
  float wa; 
  float h; 
  float v97; 
  float outClipped; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v105; 
  float v106; 
  CompassType compassTypea; 
  float width; 
  float outAngle; 
  CgStatic *LocalClientStatics; 
  __int64 v111; 
  const rectDef_s *v112; 
  lua_State *v113; 
  LUIElement *v114; 
  SecureVec3 out; 
  __int64 v116; 
  vec2_t v1; 
  vec2_t v0; 
  rectDef_s x; 
  vec2_t outVector; 
  char v121; 
  void *retaddr; 

  _RAX = &retaddr;
  v116 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  compassTypea = compassType;
  v112 = rect;
  v114 = element;
  v113 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5083, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  __asm
  {
    vmovaps xmm12, xmm0
    vxorps  xmm13, xmm13, xmm13
    vucomiss xmm0, xmm13
  }
  if ( !v29 )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, [rbp+100h+var_108]
      vaddss  xmm10, xmm1, [rbp+100h+x]
      vmulss  xmm0, xmm3, [rbp+100h+var_104]
      vaddss  xmm11, xmm0, [rbp+100h+var_10C]
    }
    CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    p_lastUpdateTime = &this->m_compassMissiles[0].lastUpdateTime;
    v111 = 8i64;
    __asm
    {
      vmovss  xmm14, [rbp+100h+boundsRadius]
      vmovss  xmm15, cs:__real@3f800000
    }
    while ( 1 )
    {
      v38 = *(p_lastUpdateTime - 1);
      m_localClientNum = this->m_localClientNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(w) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", w) )
          __debugbreak();
      }
      if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(w) = CgEntitySystem::ms_allocatedCount;
        LODWORD(y) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, w) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
      {
        LODWORD(w) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", w) )
          __debugbreak();
      }
      v40 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
      if ( (unsigned int)v38 >= 0x800 )
      {
        LODWORD(w) = 2048;
        LODWORD(y) = v38;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", y, w) )
          __debugbreak();
      }
      if ( v40->m_entities[v38].nextState.eType != ET_MISSILE )
        goto LABEL_62;
      v41 = *p_lastUpdateTime;
      time = LocalClientGlobals->time;
      if ( *p_lastUpdateTime > time )
      {
        *p_lastUpdateTime = 0;
        time = LocalClientGlobals->time;
        v41 = 0;
      }
      if ( v41 < time - 500 )
        goto LABEL_62;
      __asm { vmovss  dword ptr [rsp+210h+fmt], xmm14 }
      v43 = CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, fmt, &outVector, (const vec2_t *)&out, (const vec2_t *)p_lastUpdateTime + 1, &v0, &v1);
      v44 = DCONST_DVARBOOL_bg_compassHellfireTargetSpot;
      if ( !DCONST_DVARBOOL_bg_compassHellfireTargetSpot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassHellfireTargetSpot") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v44);
      if ( !v44->current.enabled )
        break;
      if ( !v43 )
        goto LABEL_33;
LABEL_62:
      p_lastUpdateTime += 8;
      if ( !--v111 )
        goto LABEL_63;
    }
    if ( v43 )
    {
      v45 = DVARBOOL_compassClampIcons;
      if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v45);
      if ( !v45->current.enabled )
        goto LABEL_62;
    }
LABEL_33:
    if ( LocalClientGlobals->m_isMLGSpectator )
    {
      MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
      Team = CgMLGSpectator::GetTeam(MLGSpectator);
    }
    else
    {
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5140, ASSERT_TYPE_ASSERT, "(clientCI)", (const char *)&queryFormat, "clientCI") )
        __debugbreak();
      Team = CharacterInfo->team;
    }
    v49 = CgStatic::GetCharacterInfo(LocalClientStatics, p_lastUpdateTime[6]);
    if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5146, ASSERT_TYPE_ASSERT, "(ownerCI)", (const char *)&queryFormat, "ownerCI") )
      __debugbreak();
    if ( (Team || clientNum == p_lastUpdateTime[6]) && Team == v49->team )
    {
      if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        __asm
        {
          vmovss  xmm7, dword ptr cs:xmmword_147FA89B0
          vmovss  xmm8, dword ptr cs:xmmword_147FA89B0+4
          vmovss  xmm9, dword ptr cs:xmmword_147FA89B0+8
          vmovss  xmm6, dword ptr cs:xmmword_147FA89B0+0Ch
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm7, dword ptr cs:friendlyColors
          vmovss  xmm8, dword ptr cs:friendlyColors+4
          vmovss  xmm9, dword ptr cs:friendlyColors+8
          vmovss  xmm6, dword ptr cs:unk_147FA89AC
        }
      }
    }
    else if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
    {
      __asm
      {
        vmovss  xmm7, dword ptr cs:xmmword_147FA8A20
        vmovss  xmm8, dword ptr cs:xmmword_147FA8A20+4
        vmovss  xmm9, dword ptr cs:xmmword_147FA8A20+8
        vmovss  xmm6, dword ptr cs:xmmword_147FA8A20+0Ch
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm7, dword ptr cs:enemyColors
        vmovss  xmm8, dword ptr cs:enemyColors+4
        vmovss  xmm9, dword ptr cs:enemyColors+8
        vmovss  xmm6, dword ptr cs:unk_147FA8A1C
      }
    }
    _RDI = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, cs:MY_ICON_WIDTH
      vmovss  [rbp+100h+var_178], xmm1
    }
    _RDI = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, cs:MY_ICON_HEIGHT
      vmovss  [rbp+100h+var_17C], xmm1
      vaddss  xmm0, xmm10, dword ptr [rbp+100h+v0]
      vmovss  dword ptr [rbp+100h+v0], xmm0
      vaddss  xmm2, xmm11, dword ptr [rbp+100h+v0+4]
      vmovss  dword ptr [rbp+100h+v0+4], xmm2
      vaddss  xmm1, xmm10, dword ptr [rbp+100h+v1]
      vmovss  dword ptr [rbp+100h+v1], xmm1
      vaddss  xmm0, xmm11, dword ptr [rbp+100h+v1+4]
      vmovss  dword ptr [rbp+100h+v1+4], xmm0
    }
    if ( v43 )
    {
      *(double *)&_XMM0 = CalcCompassClippedDistanceScale(&v0, &v1, 0);
      __asm
      {
        vmulss  xmm2, xmm0, [rbp+100h+var_178]
        vmovss  [rbp+100h+var_178], xmm2
        vmulss  xmm0, xmm0, [rbp+100h+var_17C]
        vmovss  [rbp+100h+var_17C], xmm0
      }
    }
    vertAlign = v112->vertAlign;
    horzAlign = v112->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, (float *)&v1, (float *)&v1 + 1, &v106, &v105, horzAlign, vertAlign);
    __asm
    {
      vmovss  xmm0, [rbp+100h+outAngle]
      vsubss  xmm0, xmm0, dword ptr [r14+14h]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  [rbp+100h+width], xmm0
      vmovaps xmm3, xmm0; in
    }
    CgCompassSystem::WorldYawToCompass(this, compassTypea, LocalClientGlobals, *(const float *)&_XMM3, &width);
    __asm
    {
      vcmpltss xmm0, xmm12, xmm6
      vblendvps xmm1, xmm6, xmm12, xmm0
      vmovss  dword ptr [rsp+210h+var_1A0], xmm1
      vmovss  [rsp+210h+var_1A8], xmm9
      vmovss  [rsp+210h+var_1B0], xmm8
      vmovss  [rsp+210h+var_1B8], xmm7
      vmovss  xmm0, [rbp+100h+width]
      vmovss  [rsp+210h+var_1C0], xmm0
      vmovss  dword ptr [rsp+210h+outClipped], xmm15
      vmovss  dword ptr [rsp+210h+var_1D0], xmm15
      vmovss  dword ptr [rsp+210h+h], xmm13
      vmovss  dword ptr [rsp+210h+w], xmm13
      vmovss  xmm0, [rbp+100h+var_17C]
      vmovss  dword ptr [rsp+210h+y], xmm0
      vmovss  xmm1, [rbp+100h+var_178]
      vmovss  dword ptr [rsp+210h+fmt], xmm1
      vmovss  xmm3, dword ptr [rbp+100h+v1+4]; centerY
      vmovss  xmm2, dword ptr [rbp+100h+v1]; centerX
    }
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v114, *(float *)&_XMM2, *(float *)&_XMM3, fmta, ya, wa, h, v97, outClipped, v99, v100, v101, v102, v103, cgMedia.compass.missile, v113);
    goto LABEL_62;
  }
LABEL_63:
  memset(&out, 0, sizeof(out));
  _R11 = &v121;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
CgCompassSystemMP::DrawObjective
==============
*/
void CgCompassSystemMP::DrawObjective(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *rect, vec2_t *xy, vec2_t *xyClipped, bool clipped, ObjectiveFlags flags, ObjectiveIconSize size, const GfxImage *background, float yawTo, float scale, float bgScale, const GfxImage *icon, const vec4_t *color, const vec4_t *bgColor, LUIElement *element, lua_State *luaVM)
{
  const GfxImage *v26; 
  bool v38; 
  int v42; 
  int v43; 
  const ScreenPlacement *ActivePlacement; 
  const GfxImage *v52; 
  lua_State *v63; 
  float ha; 
  float h; 
  int horzAligna; 
  int horzAlign; 
  int vertAligna; 
  int vertAlign; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  GfxImage *material; 
  lua_State *v113; 
  char v115; 
  void *retaddr; 
  float width; 
  float w; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  CgCompassSystem::CalcCompassPointerSize(this, compassType, size, &w, &width);
  v26 = icon;
  if ( !icon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5858, ASSERT_TYPE_ASSERT, "(icon)", (const char *)&queryFormat, "icon") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
  }
  if ( v26->height )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm2, xmm1, xmm0
      vucomiss xmm2, xmm7
      vcomiss xmm2, xmm7
      vmovss  xmm0, [rbp+37h+w]
      vmulss  xmm3, xmm0, xmm2
      vmovss  xmm4, [rbp+37h+width]
      vmulss  xmm0, xmm3, cs:__real@3f400000
      vmulss  xmm1, xmm4, cs:__real@3f400000
      vmovss  [rbp+37h+w], xmm0
      vmovss  [rbp+37h+width], xmm1
    }
  }
  v38 = clipped;
  _R15 = xyClipped;
  __asm { vmovaps xmmword ptr [rsp+0F0h+var_48+8], xmm6 }
  if ( clipped )
  {
    *(double *)&_XMM0 = CalcCompassClippedDistanceScale(xy, xyClipped, 0);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vmovaps xmm6, xmm7 }
  }
  v42 = rect->vertAlign;
  v43 = rect->horzAlign;
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
  ScrPlace_ApplyRect(ActivePlacement, (float *)_R15, (float *)_R15 + 1, &w, &width, v43, v42);
  __asm
  {
    vmovss  xmm4, cs:__real@3f000000
    vmulss  xmm0, xmm4, [rbp+37h+w]
    vmulss  xmm0, xmm0, [rbp+37h+scale]
    vaddss  xmm5, xmm0, [rbp+37h+w]
    vmulss  xmm0, xmm4, [rbp+37h+width]
    vmulss  xmm1, xmm0, [rbp+37h+scale]
    vaddss  xmm4, xmm1, [rbp+37h+width]
    vmovss  [rbp+37h+width], xmm4
    vmovss  [rbp+37h+w], xmm5
  }
  if ( v38 )
  {
    __asm
    {
      vmulss  xmm5, xmm5, xmm6
      vmulss  xmm4, xmm4, xmm6
      vmovss  [rbp+37h+w], xmm5
      vmovss  [rbp+37h+width], xmm4
    }
  }
  v52 = background;
  if ( background )
  {
    _RBX = DCONST_DVARFLT_compassObjectiveIconHeightAdjust;
    if ( !DCONST_DVARFLT_compassObjectiveIconHeightAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconHeightAdjust") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    _RBX = DVARFLT_compassObjectiveIconBackgroundScalar;
    if ( !DVARFLT_compassObjectiveIconBackgroundScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconBackgroundScalar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm3, dword ptr [rbx+28h] }
    _RAX = bgColor;
    __asm
    {
      vmulss  xmm0, xmm3, [rbp+37h+w]
      vaddss  xmm2, xmm7, [rbp+37h+bgScale]
      vmulss  xmm1, xmm3, [rbp+37h+width]
      vaddss  xmm3, xmm6, dword ptr [r15+4]; centerY
    }
    _RSI = color;
    v63 = luaVM;
    __asm
    {
      vmovss  xmm6, [rbp+37h+yawTo]
      vmulss  xmm4, xmm0, xmm2
      vmovss  xmm0, dword ptr [rsi+0Ch]
      vmovss  dword ptr [rsp+0F0h+var_80], xmm0
      vmovss  xmm0, dword ptr [rax+4]
      vmulss  xmm5, xmm1, xmm2
      vmovss  xmm1, dword ptr [rax+8]
      vmovss  xmm2, dword ptr [r15]; centerX
      vmovss  [rsp+0F0h+var_88], xmm1
      vmovss  xmm1, dword ptr [rax]
      vmovss  [rsp+0F0h+var_90], xmm0
      vmovss  [rsp+0F0h+var_98], xmm1
      vmovss  [rsp+0F0h+var_A0], xmm6
      vmovss  [rsp+0F0h+var_A8], xmm7
      vmovss  [rsp+0F0h+var_B0], xmm7
      vmovss  [rsp+0F0h+var_B8], xmm8
      vmovss  [rsp+0F0h+vertAlign], xmm8
      vmovss  [rsp+0F0h+horzAlign], xmm5
      vmovss  dword ptr [rsp+0F0h+h], xmm4
    }
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, ha, *(float *)&horzAligna, *(float *)&vertAligna, v96, v98, v100, v102, v104, v106, v108, v110, v52, luaVM);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0Ch]
      vmovss  xmm1, dword ptr [rsi+8]
    }
    v113 = v63;
    material = (GfxImage *)v26;
    __asm
    {
      vmovss  dword ptr [rsp+0F0h+var_80], xmm0
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  [rsp+0F0h+var_88], xmm1
      vmovss  xmm1, dword ptr [rsi]
      vmovss  [rsp+0F0h+var_90], xmm0
      vmovss  xmm0, [rbp+37h+width]
      vmovss  [rsp+0F0h+var_98], xmm1
      vmovss  xmm1, [rbp+37h+w]
      vmovss  [rsp+0F0h+var_A0], xmm6
      vmovss  [rsp+0F0h+var_A8], xmm7
      vmovss  [rsp+0F0h+var_B0], xmm7
      vmovss  [rsp+0F0h+var_B8], xmm8
      vmovss  [rsp+0F0h+vertAlign], xmm8
      vmovss  [rsp+0F0h+horzAlign], xmm0
      vmovss  dword ptr [rsp+0F0h+h], xmm1
    }
  }
  else
  {
    v113 = luaVM;
    _RAX = bgColor;
    material = (GfxImage *)v26;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0Ch]
      vmovss  xmm1, dword ptr [rax+8]
      vmovss  dword ptr [rsp+0F0h+var_80], xmm0
      vmovss  xmm0, dword ptr [rax+4]
      vmovss  [rsp+0F0h+var_88], xmm1
      vmovss  xmm1, dword ptr [rax]
      vmovss  [rsp+0F0h+var_90], xmm0
      vmovss  xmm0, [rbp+37h+yawTo]
      vmovss  [rsp+0F0h+var_98], xmm1
      vmovss  [rsp+0F0h+var_A0], xmm0
      vmovss  [rsp+0F0h+var_A8], xmm7
      vmovss  [rsp+0F0h+var_B0], xmm7
      vmovss  [rsp+0F0h+var_B8], xmm8
      vmovss  [rsp+0F0h+vertAlign], xmm8
      vmovss  [rsp+0F0h+horzAlign], xmm4
      vmovss  dword ptr [rsp+0F0h+h], xmm5
    }
  }
  __asm
  {
    vmovss  xmm3, dword ptr [r15+4]; centerY
    vmovss  xmm2, dword ptr [r15]; centerX
  }
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, h, *(float *)&horzAlign, *(float *)&vertAlign, v97, v99, v101, v103, v105, v107, v109, v111, material, v113);
  __asm { vmovaps xmm6, xmmword ptr [rsp+0F0h+var_48+8] }
  _R11 = &v115;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CgCompassSystemMP::DrawObjectiveHolders
==============
*/
void CgCompassSystemMP::DrawObjectiveHolders(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  __int64 BombCarrierEntityNum; 
  __int64 FlagCarrierEntityNum; 
  __int64 v25; 
  int v31; 
  __int64 v32; 
  int *p_lastUpdate; 
  __int64 v34; 
  cg_t *v35; 
  characterInfo_t *v36; 
  int time; 
  int v38; 
  CompassType v40; 
  const dvar_t *v41; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  CompassType v49; 
  char v61; 
  const dvar_t *v62; 
  const dvar_t *v63; 
  const dvar_t *v66; 
  __int64 v83; 
  CgGlobalsMP *v88; 
  CgCompassSystemMP *v89; 
  LUIElement *v102; 
  const GfxImage *material; 
  int v146; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  vec2_t *outVector; 
  float outVectora; 
  float outVectorb; 
  float outVectorc; 
  float outVectord; 
  float outVectore; 
  float *w; 
  float wa; 
  float wb; 
  float wc; 
  float wd; 
  float we; 
  float h; 
  float ha; 
  float hb; 
  float hc; 
  float hd; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  float v188; 
  float outClipped; 
  float outClippeda; 
  float outClippedb; 
  float outClippedc; 
  float outClippedd; 
  float v194; 
  float v195; 
  float v196; 
  float v197; 
  float v198; 
  float v199; 
  float v200; 
  float v201; 
  float v202; 
  float v203; 
  float v204; 
  float v205; 
  float v206; 
  float v207; 
  float v208; 
  float v209; 
  float v210; 
  float v211; 
  float v212; 
  float v213; 
  float v214; 
  float v215; 
  float v216; 
  float v217; 
  float v218; 
  float v220; 
  float v221; 
  bool v222; 
  float v223; 
  CompassType compassTypea; 
  int v225; 
  lua_State *v226; 
  float outAngle; 
  float s; 
  float c; 
  rectDef_s *v232; 
  __int64 v233; 
  __int64 v234; 
  CgStatic *LocalClientStatics; 
  vec2_t in; 
  __int64 v237; 
  vec4_t v238; 
  LUIElement *v239; 
  vec3_t pos; 
  SecureVec3 out; 
  __int64 v242; 
  vec2_t v243; 
  vec2_t v244; 
  vec4_t v245; 
  rectDef_s x; 
  vec4_t v247; 
  vec4_t color; 
  vec2_t north; 
  char v250; 
  void *retaddr; 

  _RAX = &retaddr;
  v242 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  v222 = largeMap;
  compassTypea = compassType;
  v232 = (rectDef_s *)rect;
  v239 = element;
  v226 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3688, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3692, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  BombCarrierEntityNum = GetBombCarrierEntityNum(LocalClientGlobals);
  FlagCarrierEntityNum = GetFlagCarrierEntityNum(LocalClientGlobals, TEAM_ONE);
  v25 = GetFlagCarrierEntityNum(LocalClientGlobals, TEAM_TWO);
  CgCompassSystem::GetCompassYaw(this, compassTypea, cropPartialMap, LocalClientGlobals, &outAngle, &north);
  if ( CharacterInfo->infoValid )
  {
    CG_CompassCalcDimensions(compassTypea, LocalClientGlobals, parentRect, v232, &x.x, &x.y, &x.w, &x.h);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, [rbp+180h+var_128]
      vaddss  xmm6, xmm1, [rbp+180h+x]
      vmovss  [rbp+180h+var_1CC], xmm6
      vmulss  xmm0, xmm3, [rbp+180h+var_124]
      vaddss  xmm7, xmm0, [rbp+180h+y]
      vmovss  [rbp+180h+var_1C8], xmm7
    }
    CgCompassSystemMP::GetEnemyCompassLightColor(this, &color, LocalClientGlobals);
    ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    v31 = 0;
    v225 = 0;
    v237 = BombCarrierEntityNum;
    v233 = FlagCarrierEntityNum;
    v234 = v25;
    v32 = 0i64;
    p_lastUpdate = &this->m_compassActors[0].lastUpdate;
    while ( 1 )
    {
      v34 = p_lastUpdate[27];
      v35 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v35->IsMP(v35) )
      {
        if ( (unsigned int)v34 >= v35[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(w) = v35[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(outVector) = v34;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outVector, w) )
            __debugbreak();
        }
        v36 = (characterInfo_t *)(*(_QWORD *)&v35[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v34);
      }
      else
      {
        v36 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v35, v34);
      }
      *(_QWORD *)v238.v = v36;
      if ( v237 != v32 && v233 != v32 && v234 != v32 || (unsigned int)(v36->team - 1) > 1 || LocalClientGlobals->predictedPlayerState.clientNum == v31 )
        goto LABEL_77;
      time = LocalClientGlobals->time;
      if ( time >= p_lastUpdate[23] )
      {
        *((_BYTE *)p_lastUpdate + 118) = 0;
        time = LocalClientGlobals->time;
      }
      v38 = *p_lastUpdate;
      if ( *p_lastUpdate > time )
      {
        *p_lastUpdate = 0;
        time = LocalClientGlobals->time;
        v38 = 0;
      }
      if ( v38 < time - 500 )
        goto LABEL_77;
      CgCompassSystemMP::IsActorWithinFadeTime(this, p_lastUpdate + 24);
      CompassActor_GetLastPosValue((const CompassActor *)(p_lastUpdate - 1), &pos);
      in = *(vec2_t *)pos.v;
      memset(&pos, 0, sizeof(pos));
      __asm
      {
        vmovss  xmm0, [rbp+180h+boundsRadius]
        vmovss  dword ptr [rsp+290h+fmt], xmm0
      }
      v40 = compassTypea;
      if ( !CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, fmt, &north, (const vec2_t *)&out, &in, NULL, &v243) )
        break;
      v41 = DVARBOOL_compassClampIcons;
      if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v41);
      if ( v41->current.enabled )
        break;
LABEL_76:
      v31 = v225;
LABEL_77:
      v225 = ++v31;
      ++v32;
      p_lastUpdate += 34;
      if ( v32 >= 248 )
        goto LABEL_78;
    }
    CalcCompassFriendlySize(v40, &v221, &v220);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbp+180h+var_150]
      vmovss  dword ptr [rbp+180h+var_150], xmm1
      vaddss  xmm0, xmm7, dword ptr [rbp+180h+var_150+4]
      vmovss  dword ptr [rbp+180h+var_150+4], xmm0
    }
    vertAlign = v232->vertAlign;
    horzAlign = v232->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, (float *)&v243, (float *)&v243 + 1, &v221, &v220, horzAlign, vertAlign);
    CgCompassSystemMP::GetActorFadeAmount(this, p_lastUpdate + 24);
    __asm
    {
      vmovss  xmm0, [rbp+180h+outAngle]
      vsubss  xmm0, xmm0, dword ptr [r15+4]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovss  [rbp+180h+var_1F0], xmm0 }
    v49 = compassTypea;
    if ( (cropPartialMap || compassTypea || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation")) && this->MapShouldRotate(this) )
    {
      this->MapRotationFactor(this);
      __asm
      {
        vmovss  xmm1, [rbp+180h+var_1F0]
        vsubss  xmm3, xmm1, xmm0
        vmovss  [rbp+180h+var_1F0], xmm3
      }
    }
    else
    {
      __asm { vmovss  xmm3, [rbp+180h+var_1F0]; in }
    }
    CgCompassSystem::WorldYawToCompass(this, v49, LocalClientGlobals, *(const float *)&_XMM3, &v223);
    v244 = v243;
    _RDI = DVARFLT_compassPlayerObjectiveHolderOverallSize;
    if ( !DVARFLT_compassPlayerObjectiveHolderOverallSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerObjectiveHolderOverallSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm12, dword ptr [rdi+28h] }
    _RDI = DVARFLT_compassPlayerObjectiveArrowRadius;
    if ( !DVARFLT_compassPlayerObjectiveArrowRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerObjectiveArrowRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm6, xmm0, xmm12
    }
    _RDI = DVARFLT_compassPlayerObjectiveHolderCicleSize;
    if ( !DVARFLT_compassPlayerObjectiveHolderCicleSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerObjectiveHolderCicleSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm15, dword ptr [rdi+28h] }
    _RDI = DVARFLT_compassPlayerObjectiveHolderArrowSize;
    if ( !DVARFLT_compassPlayerObjectiveHolderArrowSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerObjectiveHolderArrowSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm14, dword ptr [rdi+28h] }
    v61 = v222;
    if ( v222 )
    {
      v62 = DVARFLT_compassIconMLGSpectatorScale;
      if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v62);
      __asm { vmulss  xmm6, xmm6, dword ptr [rdi+28h] }
      v63 = DVARFLT_compassIconMLGSpectatorScale;
      if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v63);
      __asm
      {
        vmovss  xmm0, [rbp+180h+var_1F8]
        vmulss  xmm1, xmm0, dword ptr [rdi+28h]
        vmovss  [rbp+180h+var_1F8], xmm1
      }
      v66 = DVARFLT_compassIconMLGSpectatorScale;
      if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v66);
      __asm
      {
        vmovss  xmm0, [rbp+180h+var_1FC]
        vmulss  xmm1, xmm0, dword ptr [rdi+28h]
        vmovss  [rbp+180h+var_1FC], xmm1
      }
    }
    __asm
    {
      vmovss  xmm0, [rbp+180h+var_1F0]
      vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, &c);
    __asm
    {
      vxorps  xmm4, xmm4, xmm4
      vcvtsi2ss xmm4, xmm4, rax
      vmulss  xmm1, xmm6, [rbp+180h+s]
      vmulss  xmm2, xmm1, xmm4
      vmulss  xmm3, xmm2, cs:__real@3a72b9d6
      vaddss  xmm10, xmm3, dword ptr [rbp+180h+var_148]
      vmovss  dword ptr [rbp+180h+var_148], xmm10
      vmulss  xmm1, xmm6, [rbp+180h+c]
      vmulss  xmm2, xmm1, xmm4
      vmulss  xmm3, xmm2, cs:__real@ba72b9d6
      vaddss  xmm11, xmm3, dword ptr [rbp+180h+var_148+4]
      vmovss  dword ptr [rbp+180h+var_148+4], xmm11
      vmovups xmm13, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
    }
    v83 = *(_QWORD *)v238.v;
    if ( *(_DWORD *)(*(_QWORD *)v238.v + 12i64) == 1 )
    {
      if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        __asm
        {
          vmovss  xmm6, dword ptr cs:xmmword_147FA8A20+0Ch
          vmovss  xmm7, dword ptr cs:xmmword_147FA8A20+8
          vmovss  xmm9, dword ptr cs:xmmword_147FA8A20
          vmovss  xmm8, dword ptr cs:xmmword_147FA8A20+4
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm6, dword ptr cs:unk_147FA8A1C
          vmovss  xmm7, dword ptr cs:enemyColors+8
          vmovss  xmm9, dword ptr cs:enemyColors
          vmovss  xmm8, dword ptr cs:enemyColors+4
        }
      }
      CgCompassSystemMP::GetEnemyCompassLightColor(this, &color, LocalClientGlobals);
      v88 = LocalClientGlobals;
      v89 = this;
      if ( v233 != v32 )
      {
LABEL_68:
        CgCompassSystemMP::GetEnemyCompassColor(v89, &v245, v88);
        CgCompassSystemMP::GetEnemyCompassSecondaryColor(this, &v247, LocalClientGlobals);
LABEL_75:
        __asm
        {
          vmulss  xmm0, xmm12, [rbp+180h+var_1FC]
          vmulss  xmm3, xmm0, xmm15
          vmulss  xmm1, xmm12, [rbp+180h+var_1F8]
          vmulss  xmm2, xmm1, xmm15
          vmovss  xmm0, dword ptr [rbp+180h+var_140+0Ch]
          vmovss  dword ptr [rsp+290h+var_220], xmm0
          vmovss  xmm1, dword ptr [rbp+180h+var_140+8]
          vmovss  [rsp+290h+var_228], xmm1
          vmovss  xmm0, dword ptr [rbp+180h+var_140+4]
          vmovss  [rsp+290h+var_230], xmm0
          vmovss  xmm1, dword ptr [rbp+180h+var_140]
          vmovss  [rsp+290h+var_238], xmm1
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rsp+290h+var_240], xmm0
          vmovss  xmm1, cs:__real@3f800000
          vmovss  dword ptr [rsp+290h+outClipped], xmm1
          vmovss  dword ptr [rsp+290h+var_250], xmm1
          vmovss  dword ptr [rsp+290h+h], xmm0
          vmovss  dword ptr [rsp+290h+w], xmm0
          vmovss  dword ptr [rsp+290h+outVector], xmm3
          vmovss  dword ptr [rsp+290h+fmt], xmm2
          vmovss  xmm3, dword ptr [rbp+180h+var_150+4]; centerY
          vmovss  xmm2, dword ptr [rbp+180h+var_150]; centerX
        }
        v102 = v239;
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v239, *(float *)&_XMM2, *(float *)&_XMM3, fmta, outVectora, wa, h, v184, outClipped, v194, v199, v204, v209, v214, cgMedia.compass.minimap_codcaster_objective_circle_bg, v226);
        __asm
        {
          vmulss  xmm0, xmm12, [rbp+180h+var_1FC]
          vmulss  xmm3, xmm0, xmm15
          vmulss  xmm1, xmm12, [rbp+180h+var_1F8]
          vmulss  xmm2, xmm1, xmm15
          vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
          vmovss  dword ptr [rsp+290h+var_220], xmm0
          vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
          vmovss  [rsp+290h+var_228], xmm1
          vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
          vmovss  [rsp+290h+var_230], xmm0
          vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
          vmovss  [rsp+290h+var_238], xmm1
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rsp+290h+var_240], xmm0
          vmovss  xmm1, cs:__real@3f800000
          vmovss  dword ptr [rsp+290h+outClipped], xmm1
          vmovss  dword ptr [rsp+290h+var_250], xmm1
          vmovss  dword ptr [rsp+290h+h], xmm0
          vmovss  dword ptr [rsp+290h+w], xmm0
          vmovss  dword ptr [rsp+290h+outVector], xmm3
          vmovss  dword ptr [rsp+290h+fmt], xmm2
          vmovss  xmm3, dword ptr [rbp+180h+var_150+4]; centerY
          vmovss  xmm2, dword ptr [rbp+180h+var_150]; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v102, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, outVectorb, wb, ha, v185, outClippeda, v195, v200, v205, v210, v215, cgMedia.compass.minimap_codcaster_objective_circle_outline, v226);
        material = CgCompassSystemMP::GetObjectiveImage(this);
        __asm
        {
          vmulss  xmm0, xmm12, [rbp+180h+var_1FC]
          vmulss  xmm3, xmm0, xmm15
          vmulss  xmm1, xmm12, [rbp+180h+var_1F8]
          vmulss  xmm2, xmm1, xmm15
          vmovss  xmm4, cs:__real@3f800000
          vmovss  dword ptr [rsp+290h+var_220], xmm4
          vmovss  xmm0, dword ptr [rbp+180h+var_118+8]
          vmovss  [rsp+290h+var_228], xmm0
          vmovss  xmm1, dword ptr [rbp+180h+var_118+4]
          vmovss  [rsp+290h+var_230], xmm1
          vmovss  xmm0, dword ptr [rbp+180h+var_118]
          vmovss  [rsp+290h+var_238], xmm0
          vxorps  xmm15, xmm15, xmm15
          vmovss  dword ptr [rsp+290h+var_240], xmm15
          vmovss  dword ptr [rsp+290h+outClipped], xmm4
          vmovss  dword ptr [rsp+290h+var_250], xmm4
          vmovss  dword ptr [rsp+290h+h], xmm15
          vmovss  dword ptr [rsp+290h+w], xmm15
          vmovss  dword ptr [rsp+290h+outVector], xmm3
          vmovss  dword ptr [rsp+290h+fmt], xmm2
          vmovss  xmm3, dword ptr [rbp+180h+var_150+4]; centerY
          vmovss  xmm2, dword ptr [rbp+180h+var_150]; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v102, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, outVectorc, wc, hb, v186, outClippedb, v196, v201, v206, v211, v216, material, v226);
        __asm
        {
          vmulss  xmm0, xmm12, [rbp+180h+var_1FC]
          vmulss  xmm3, xmm0, xmm14
          vmulss  xmm1, xmm12, [rbp+180h+var_1F8]
          vmulss  xmm2, xmm1, xmm14
          vmovss  dword ptr [rsp+290h+var_220], xmm6
          vmovss  [rsp+290h+var_228], xmm7
          vmovss  [rsp+290h+var_230], xmm8
          vmovss  [rsp+290h+var_238], xmm9
          vmovss  xmm0, [rbp+180h+var_1F0]
          vmovss  dword ptr [rsp+290h+var_240], xmm0
          vmovss  xmm6, cs:__real@3f800000
          vmovss  dword ptr [rsp+290h+outClipped], xmm6
          vmovss  dword ptr [rsp+290h+var_250], xmm6
          vmovss  dword ptr [rsp+290h+h], xmm15
          vmovss  dword ptr [rsp+290h+w], xmm15
          vmovss  dword ptr [rsp+290h+outVector], xmm3
          vmovss  dword ptr [rsp+290h+fmt], xmm2
          vmovaps xmm3, xmm11; centerY
          vmovaps xmm2, xmm10; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v102, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, outVectord, wd, hc, v187, outClippedc, v197, v202, v207, v212, v217, cgMedia.compass.minimap_codcaster_objective_arrow_bg, v226);
        __asm
        {
          vmulss  xmm0, xmm12, [rbp+180h+var_1FC]
          vmulss  xmm5, xmm0, xmm14
          vmulss  xmm1, xmm12, [rbp+180h+var_1F8]
          vmulss  xmm4, xmm1, xmm14
          vmovss  xmm0, dword ptr [rbp+180h+color+0Ch]
          vmovss  dword ptr [rsp+290h+var_220], xmm0
          vmovss  xmm1, dword ptr [rbp+180h+color+8]
          vmovss  [rsp+290h+var_228], xmm1
          vmovss  xmm0, dword ptr [rbp+180h+color+4]
          vmovss  [rsp+290h+var_230], xmm0
          vmovss  xmm1, dword ptr [rbp+180h+color]
          vmovss  [rsp+290h+var_238], xmm1
          vmovss  xmm0, [rbp+180h+var_1F0]
          vmovss  dword ptr [rsp+290h+var_240], xmm0
          vmovss  dword ptr [rsp+290h+outClipped], xmm6
          vmovss  dword ptr [rsp+290h+var_250], xmm6
          vmovss  dword ptr [rsp+290h+h], xmm15
          vmovss  dword ptr [rsp+290h+w], xmm15
          vmovss  dword ptr [rsp+290h+outVector], xmm5
          vmovss  dword ptr [rsp+290h+fmt], xmm4
          vmovaps xmm3, xmm11; centerY
          vmovaps xmm2, xmm10; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v102, *(float *)&_XMM2, *(float *)&_XMM3, fmte, outVectore, we, hd, v188, outClippedd, v198, v203, v208, v213, v218, cgMedia.compass.minimap_codcaster_objective_arrow_outline, v226);
        v146 = *(_DWORD *)(v83 + 12);
        __asm
        {
          vmovdqa [rbp+180h+var_190], xmm13
          vmovss  dword ptr [rsp+290h+fmt], xmm15
          vmovss  xmm3, dword ptr [rbp+180h+var_150+4]
          vmovss  xmm2, dword ptr [rbp+180h+var_150]
        }
        CgCompassSystem::DrawPlayerNumber(this, p_lastUpdate[27], *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v146, 1, v61, &v238, LocalClientStatics, v102, v226);
        __asm
        {
          vmovss  xmm6, [rbp+180h+var_1CC]
          vmovss  xmm7, [rbp+180h+var_1C8]
        }
        goto LABEL_76;
      }
    }
    else
    {
      if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        __asm
        {
          vmovss  xmm9, dword ptr cs:xmmword_147FA89B0
          vmovss  xmm6, dword ptr cs:xmmword_147FA89B0+0Ch
          vmovss  xmm7, dword ptr cs:xmmword_147FA89B0+8
          vmovss  xmm8, dword ptr cs:xmmword_147FA89B0+4
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm9, dword ptr cs:friendlyColors
          vmovss  xmm6, dword ptr cs:unk_147FA89AC
          vmovss  xmm7, dword ptr cs:friendlyColors+8
          vmovss  xmm8, dword ptr cs:friendlyColors+4
        }
      }
      CgCompassSystemMP::GetFriendlyCompassLightColor(this, &color, LocalClientGlobals);
      v88 = LocalClientGlobals;
      v89 = this;
      if ( v234 == v32 )
        goto LABEL_68;
    }
    CgCompassSystemMP::GetFriendlyCompassColor(v89, &v245, v88);
    CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, &v247, LocalClientGlobals);
    goto LABEL_75;
  }
LABEL_78:
  memset(&out, 0, sizeof(out));
  memset(&v237, 0, sizeof(v237));
  memset(&in, 0, sizeof(in));
  _R11 = &v250;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
CgCompassSystemMP::DrawOthersLayer
==============
*/
void CgCompassSystemMP::DrawOthersLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  float recta; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 

  _RDI = minimapOptions;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+38h]
      vmovss  dword ptr [rsp+78h+var_48], xmm0
    }
    CgCompassSystemMP::DrawDead(this, _RDI->compassType, _RDI->cropPartialMap, _RDI->largeMap, parentRect, rect, v18, element, luaVM);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovss  dword ptr [rsp+78h+var_48], xmm0
  }
  CgCompassSystemMP::DrawFriendlies(this, _RDI->compassType, _RDI->cropPartialMap, _RDI->largeMap, parentRect, rect, v19, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovss  dword ptr [rsp+78h+var_48], xmm0
  }
  CgCompassSystemMP::DrawEnemies(this, _RDI->compassType, _RDI->cropPartialMap, _RDI->largeMap, parentRect, rect, v20, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovss  dword ptr [rsp+78h+rect], xmm0
  }
  CgCompassSystemMP::DrawDecoys(this, _RDI->compassType, _RDI->cropPartialMap, parentRect, rect, recta, color, element, luaVM);
  if ( LocalClientGlobals->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+38h]
      vmovss  dword ptr [rsp+78h+var_48], xmm0
    }
    CgCompassSystemMP::DrawObjectiveHolders(this, _RDI->compassType, _RDI->cropPartialMap, _RDI->largeMap, parentRect, rect, v21, element, luaVM);
  }
}

/*
==============
CgCompassSystemMP::DrawPlanes
==============
*/
void CgCompassSystemMP::DrawPlanes(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CompassType v20; 
  CgGlobalsMP *LocalClientGlobals; 
  char v25; 
  int *p_ownerNum; 
  __int64 v36; 
  __int64 m_localClientNum; 
  CgEntitySystem *v38; 
  int v39; 
  int time; 
  bool v41; 
  bool v42; 
  const dvar_t *v43; 
  int v44; 
  characterInfo_t *CharacterInfo; 
  team_t team; 
  characterInfo_t *v47; 
  team_t v48; 
  const GfxImage *material; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  LUIElement *v71; 
  float fmt; 
  float fmta; 
  float *y; 
  float ya; 
  float yb; 
  float *w; 
  float wa; 
  float h; 
  float v94; 
  float outClipped; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v102; 
  float v103; 
  CompassType compassTypea; 
  float width; 
  LUIElement *v106; 
  int characterIndex; 
  float outAngle; 
  CgStatic *LocalClientStatics; 
  __int64 v110; 
  lua_State *v111; 
  rectDef_s *v112; 
  rectDef_s *parentRecta; 
  SecureVec3 out; 
  __int64 v115; 
  vec4_t v116; 
  vec2_t v1; 
  rectDef_s x; 
  vec2_t outVector; 
  vec2_t v0; 
  char v121; 
  void *retaddr; 

  _RAX = &retaddr;
  v115 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  parentRecta = (rectDef_s *)parentRect;
  v20 = compassType;
  compassTypea = compassType;
  v112 = (rectDef_s *)rect;
  v106 = element;
  v111 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5212, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, v20);
  __asm
  {
    vmovaps xmm8, xmm0
    vxorps  xmm9, xmm9, xmm9
    vucomiss xmm0, xmm9
  }
  if ( !v25 )
  {
    characterIndex = LocalClientGlobals->predictedPlayerState.clientNum;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CG_CompassCalcDimensions(v20, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, [rbp+0E0h+var_D8]
      vaddss  xmm10, xmm1, [rbp+0E0h+x]
      vmulss  xmm0, xmm3, [rbp+0E0h+var_D4]
      vaddss  xmm11, xmm0, [rbp+0E0h+var_DC]
    }
    _RAX = color;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+0E0h+var_F8], xmm1
    }
    CgCompassSystem::GetCompassYaw(this, v20, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    p_ownerNum = &this->m_compassPlanes[0].ownerNum;
    v110 = 128i64;
    __asm
    {
      vmovss  xmm7, [rbp+0E0h+boundsRadius]
      vmovss  xmm12, cs:__real@3f800000
    }
    while ( 1 )
    {
      v36 = *(p_ownerNum - 7);
      m_localClientNum = this->m_localClientNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(w) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", w) )
          __debugbreak();
      }
      if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(w) = CgEntitySystem::ms_allocatedCount;
        LODWORD(y) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, w) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
      {
        LODWORD(w) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", w) )
          __debugbreak();
      }
      v38 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
      if ( (unsigned int)v36 >= 0x800 )
      {
        LODWORD(w) = 2048;
        LODWORD(y) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", y, w) )
          __debugbreak();
      }
      if ( v38->m_entities[v36].nextState.eType != ET_PLANE )
        goto LABEL_52;
      v39 = *(p_ownerNum - 6);
      time = LocalClientGlobals->time;
      if ( v39 > time )
      {
        *(p_ownerNum - 6) = 0;
        time = LocalClientGlobals->time;
        v39 = 0;
      }
      v41 = cropPartialMap;
      if ( v39 >= time - 500 )
      {
        __asm { vmovss  dword ptr [rsp+1F0h+fmt], xmm7 }
        v42 = CgCompassSystem::WorldPosToCompass(this, v20, cropPartialMap, &x, fmt, &outVector, (const vec2_t *)&out, (const vec2_t *)p_ownerNum - 2, &v0, &v1);
        if ( !v42 )
          goto LABEL_27;
        v43 = DVARBOOL_compassClampIcons;
        if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v43);
        if ( v43->current.enabled )
        {
LABEL_27:
          v44 = characterIndex;
          CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, characterIndex);
          if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5252, ASSERT_TYPE_ASSERT, "(clientCI)", (const char *)&queryFormat, "clientCI") )
            __debugbreak();
          team = CharacterInfo->team;
          v47 = CgStatic::GetCharacterInfo(LocalClientStatics, *p_ownerNum);
          if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5257, ASSERT_TYPE_ASSERT, "(ownerCI)", (const char *)&queryFormat, "ownerCI") )
            __debugbreak();
          v48 = v47->team;
          if ( LocalClientGlobals->m_isMLGSpectator )
          {
            if ( v48 == TEAM_ZERO )
            {
              if ( v44 == *p_ownerNum )
                goto LABEL_36;
LABEL_42:
              material = *(const GfxImage **)(p_ownerNum + 3);
              if ( this->m_isUsingCustomCodCasterEnemyColor )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr cs:xmmword_147FA8A20
                  vmovss  dword ptr [rbp+0E0h+var_F8], xmm0
                  vmovss  xmm1, dword ptr cs:xmmword_147FA8A20+4
                  vmovss  dword ptr [rbp+0E0h+var_F8+4], xmm1
                  vmovss  xmm0, dword ptr cs:xmmword_147FA8A20+8
                  vmovss  dword ptr [rbp+0E0h+var_F8+8], xmm0
                  vmovss  xmm6, dword ptr cs:xmmword_147FA8A20+0Ch
                  vmovss  dword ptr [rbp+0E0h+var_F8+0Ch], xmm6
                }
                goto LABEL_37;
              }
LABEL_48:
              __asm
              {
                vmovss  xmm0, dword ptr cs:enemyColors
                vmovss  dword ptr [rbp+0E0h+var_F8], xmm0
                vmovss  xmm6, dword ptr cs:unk_147FA8A1C
                vmovss  xmm0, dword ptr cs:enemyColors+8
                vmovss  xmm1, dword ptr cs:enemyColors+4
                vmovss  dword ptr [rbp+0E0h+var_F8+0Ch], xmm6
                vmovss  dword ptr [rbp+0E0h+var_F8+8], xmm0
                vmovss  dword ptr [rbp+0E0h+var_F8+4], xmm1
              }
LABEL_37:
              if ( material )
              {
                CalcCompassFriendlySize(compassTypea, &v103, &v102);
                __asm
                {
                  vaddss  xmm1, xmm10, dword ptr [rbp+0E0h+v1]
                  vmovss  dword ptr [rbp+0E0h+v1], xmm1
                  vaddss  xmm0, xmm11, dword ptr [rbp+0E0h+v1+4]
                  vmovss  dword ptr [rbp+0E0h+v1+4], xmm0
                }
                if ( v42 )
                {
                  *(double *)&_XMM0 = CalcCompassClippedDistanceScale(&v0, &v1, 0);
                  __asm
                  {
                    vmulss  xmm2, xmm0, [rbp+0E0h+var_158]
                    vmovss  [rbp+0E0h+var_158], xmm2
                    vmulss  xmm0, xmm0, [rbp+0E0h+var_15C]
                    vmovss  [rbp+0E0h+var_15C], xmm0
                  }
                }
                vertAlign = v112->vertAlign;
                horzAlign = v112->horzAlign;
                ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
                ScrPlace_ApplyRect(ActivePlacement, (float *)&v1, (float *)&v1 + 1, &v103, &v102, horzAlign, vertAlign);
                __asm
                {
                  vmovss  xmm0, [rbp+0E0h+outAngle]
                  vsubss  xmm0, xmm0, dword ptr [rsi-4]; angle
                }
                *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
                __asm
                {
                  vmovss  [rbp+0E0h+width], xmm0
                  vmovaps xmm3, xmm0; in
                }
                v20 = compassTypea;
                CgCompassSystem::WorldYawToCompass(this, compassTypea, LocalClientGlobals, *(const float *)&_XMM3, &width);
                __asm
                {
                  vcmpltss xmm0, xmm8, xmm6
                  vblendvps xmm1, xmm6, xmm8, xmm0
                  vmovss  dword ptr [rbp+0E0h+var_F8+0Ch], xmm1
                  vmovss  dword ptr [rsp+1F0h+var_180], xmm1
                  vmovss  xmm0, dword ptr [rbp+0E0h+var_F8+8]
                  vmovss  [rsp+1F0h+var_188], xmm0
                  vmovss  xmm1, dword ptr [rbp+0E0h+var_F8+4]
                  vmovss  [rsp+1F0h+var_190], xmm1
                  vmovss  xmm0, dword ptr [rbp+0E0h+var_F8]
                  vmovss  [rsp+1F0h+var_198], xmm0
                  vmovss  xmm1, [rbp+0E0h+width]
                  vmovss  [rsp+1F0h+var_1A0], xmm1
                  vmovss  dword ptr [rsp+1F0h+outClipped], xmm12
                  vmovss  dword ptr [rsp+1F0h+var_1B0], xmm12
                  vmovss  dword ptr [rsp+1F0h+h], xmm9
                  vmovss  dword ptr [rsp+1F0h+w], xmm9
                  vmovss  xmm0, [rbp+0E0h+var_15C]
                  vmovss  dword ptr [rsp+1F0h+y], xmm0
                  vmovss  xmm1, [rbp+0E0h+var_158]
                  vmovss  dword ptr [rsp+1F0h+fmt], xmm1
                  vmovss  xmm3, dword ptr [rbp+0E0h+v1+4]; centerY
                  vmovss  xmm2, dword ptr [rbp+0E0h+v1]; centerX
                }
                v71 = v106;
                LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v106, *(float *)&_XMM2, *(float *)&_XMM3, fmta, ya, wa, h, v94, outClipped, v96, v97, v98, v99, v100, material, v111);
              }
              else
              {
                v20 = compassTypea;
LABEL_52:
                v71 = v106;
              }
              v41 = cropPartialMap;
              goto LABEL_54;
            }
            if ( v48 == TEAM_ONE )
              goto LABEL_42;
          }
          else if ( team == TEAM_ZERO && v44 != *p_ownerNum || team != v48 )
          {
            material = *(const GfxImage **)(p_ownerNum + 3);
            goto LABEL_48;
          }
LABEL_36:
          material = *(const GfxImage **)(p_ownerNum + 1);
          CgCompassSystemMP::GetFriendlyCompassColor(this, &v116, LocalClientGlobals);
          __asm { vmovss  xmm6, dword ptr [rbp+0E0h+var_F8+0Ch] }
          goto LABEL_37;
        }
        v20 = compassTypea;
      }
      v71 = v106;
LABEL_54:
      p_ownerNum += 12;
      if ( !--v110 )
      {
        __asm { vmovss  dword ptr [rsp+1F0h+y], xmm7 }
        CgCompassSystemMP::DrawMissiles(this, v20, v41, parentRecta, v112, yb, color, v71, v111);
        break;
      }
    }
  }
  memset(&out, 0, sizeof(out));
  _R11 = &v121;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
}

/*
==============
CgCompassSystemMP::DrawPlayerCalloutMarkerPings
==============
*/
void CgCompassSystemMP::DrawPlayerCalloutMarkerPings(CgCompassSystemMP *this, bool bracketPass, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  bool v23; 
  cg_t *LocalClientGlobals; 
  char v28; 
  const playerState_s *p_predictedPlayerState; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const cg_t *v37; 
  bool v38; 
  unsigned __int8 v39; 
  __int16 v40; 
  const CalloutMarkerPingView *View; 
  CalloutMarkerPingPool v46; 
  CalloutMarkerPingPool v47; 
  unsigned __int8 owner; 
  unsigned int index; 
  int v50; 
  bool HasOvalBackgroundOnMap; 
  char v52; 
  unsigned __int8 v53; 
  __int16 *v54; 
  CompassType v57; 
  bool v59; 
  bool v60; 
  bool v65; 
  ObjectiveIconSize TacmapIconSize; 
  char v68; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  LocalClientNum_t m_localClientNum; 
  LUIElement *v96; 
  LocalClientNum_t v97; 
  const GfxImage *calloutMarkerPing_OvalBackgroundVertical; 
  const GfxImage *Icon; 
  unsigned int x; 
  float xa; 
  float xb; 
  ObjectiveFlags y; 
  float ya; 
  float w; 
  float h; 
  float ha; 
  float v132; 
  float outClipped; 
  float angle; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  GfxImage *material; 
  lua_State *v140; 
  unsigned __int8 v142; 
  float width; 
  float v145; 
  bool v146; 
  bool v147; 
  __int16 v148; 
  float v149; 
  float v150; 
  playerState_s *v151; 
  float v152; 
  float outAngle; 
  CompassType compassTypea; 
  lua_State *v155; 
  LUIElement *v156; 
  SecureVec3 out; 
  SecureVec3 in; 
  const rectDef_s *v159; 
  vec3_t v160; 
  vec3_t out_origin; 
  vec2_t prev[3]; 
  vec2_t v1; 
  vec2_t v0; 
  vec4_t out_color; 
  rectDef_s mapRect; 
  vec2_t outVector; 
  vec3_t outWorldOrigin; 
  char v169; 
  void *retaddr; 

  _RAX = &retaddr;
  prev[2] = (vec2_t)-2i64;
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
  compassTypea = compassType;
  v23 = bracketPass;
  v159 = rect;
  v156 = element;
  v155 = luaVM;
  v148 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  __asm
  {
    vmulss  xmm10, xmm0, dword ptr [rcx+0Ch]
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm10, xmm8
  }
  if ( !v28 && !this->IsItemFiltered(this, TAC_MAP_FILTER_PLAYER_PINGS) )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    __asm
    {
      vmovss  xmm9, cs:__real@3f000000
      vmulss  xmm1, xmm9, [rbp+150h+mapRect.w]
      vaddss  xmm13, xmm1, [rbp+150h+mapRect.x]
      vmulss  xmm0, xmm9, [rbp+150h+mapRect.h]
      vaddss  xmm14, xmm0, [rbp+150h+mapRect.y]
    }
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    v151 = &LocalClientGlobals->predictedPlayerState;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 7084, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
    {
      v37 = LocalClientGlobals;
      v38 = cropPartialMap;
      CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, v37, &outAngle, &outVector);
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v39 = 0;
      v142 = 0;
      v40 = -1;
      __asm
      {
        vmovss  xmm12, [rbp+150h+boundsRadius]
        vmovss  xmm7, cs:__real@3f800000
        vmovss  xmm15, cs:__real@3fe00000
        vmovss  xmm11, cs:__real@3f8ccccd
      }
      while ( 1 )
      {
        View = CG_CalloutMarkerPing_GetView(this->m_localClientNum, v39, p_predictedPlayerState);
        if ( View->origin.owner )
          break;
LABEL_70:
        v39 = v142 + 1;
        v142 = v39;
        if ( v39 >= 0x35u )
          goto LABEL_71;
      }
      v46 = CG_CalloutMarkerPing_ViewIndexToPool(this->m_localClientNum, v142);
      v47 = v46;
      if ( v46 == CONST_CALLOUT_POOL_ID_REQUEST )
      {
        owner = View->origin.owner;
        if ( owner )
          v40 = owner - 1;
      }
      else
      {
        if ( v46 == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(v46 - 4) <= 2u )
          v40 = View->origin.x;
        else
          v40 = 2047;
        if ( (unsigned __int8)(v46 - 9) <= 2u )
        {
          index = View->scriptable.index;
          goto LABEL_13;
        }
      }
      index = -1;
LABEL_13:
      if ( (unsigned __int8)v46 <= CONST_CALLOUT_POOL_ID_REQUEST )
      {
        v50 = 4464;
        if ( _bittest(&v50, (unsigned __int8)v46) )
        {
          if ( v40 == v151->clientNum )
          {
            p_predictedPlayerState = v151;
            goto LABEL_69;
          }
        }
      }
      HasOvalBackgroundOnMap = CG_CalloutMarkerPing_HasOvalBackgroundOnMap(v46, View, this->m_localClientNum);
      v147 = HasOvalBackgroundOnMap;
      if ( v23 && !HasOvalBackgroundOnMap )
        goto LABEL_60;
      if ( (unsigned __int8)(v47 - 9) <= 2u && ScriptableCl_ObjectiveActiveForInstance((const LocalClientNum_t)this->m_localClientNum, index) )
      {
        v52 = 1;
        v53 = ScriptableCl_ObjectiveGetForInstance((const LocalClientNum_t)this->m_localClientNum, index);
        v54 = (__int16 *)ScriptableCl_ObjectiveGet((const LocalClientNum_t)this->m_localClientNum, v53, &out_origin);
        if ( v54 )
          v148 = *v54;
        memset(&out_origin, 0, sizeof(out_origin));
        v38 = cropPartialMap;
      }
      else
      {
        v52 = 0;
      }
      CG_CalloutMarkerPing_GetWorldOrigin(v47, View, this->m_localClientNum, &outWorldOrigin);
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+150h+outWorldOrigin]
        vmovsd  [rbp+150h+var_160], xmm0
      }
      v160.v[2] = outWorldOrigin.v[2];
      __asm
      {
        vmovss  xmm0, [rbp+150h+outAngle]
        vmovss  dword ptr [rsp+260h+h], xmm0
      }
      LOWORD(y) = v148;
      x = index;
      v57 = compassTypea;
      CgCompassSystemMP::GetObjectiveCompassOrigin(this, compassTypea, v38, v40, x, y, &v160, h, &in, &v146, &v152);
      __asm
      {
        vmovss  dword ptr [rbp+150h+v0], xmm8
        vmovss  dword ptr [rbp+150h+v0+4], xmm8
        vmovss  dword ptr [rbp+150h+v1], xmm8
        vmovss  dword ptr [rbp+150h+v1+4], xmm8
      }
      if ( !v146 || v38 )
      {
        __asm { vmovss  dword ptr [rsp+260h+x], xmm12 }
        v59 = CgCompassSystem::WorldPosToCompass(this, v57, v38, &mapRect, xa, &outVector, (const vec2_t *)&out, (const vec2_t *)&in, &v0, &v1);
      }
      else
      {
        __asm { vmovaps xmm3, xmm12; boundsRadius }
        v59 = CgCompassSystem::WorldPosToCompassPredict(this, v57, &mapRect, *(const float *)&_XMM3, &outVector, (const vec2_t *)&out, (const vec2_t *)&in, prev, &v0, &v1);
      }
      v60 = v59;
      __asm
      {
        vaddss  xmm1, xmm13, dword ptr [rbp+150h+v0]
        vmovss  dword ptr [rbp+150h+v0], xmm1
        vaddss  xmm0, xmm14, dword ptr [rbp+150h+v0+4]
        vmovss  dword ptr [rbp+150h+v0+4], xmm0
        vaddss  xmm2, xmm13, dword ptr [rbp+150h+v1]
        vmovss  dword ptr [rbp+150h+v1], xmm2
        vaddss  xmm1, xmm14, dword ptr [rbp+150h+v1+4]
        vmovss  dword ptr [rbp+150h+v1+4], xmm1
      }
      v65 = 1;
      if ( v57 == COMPASS_TYPE_PARTIAL )
      {
        if ( v47 )
          v65 = v52 == 0;
        else
          v65 = 0;
      }
      if ( v60 && v65 )
        goto LABEL_67;
      TacmapIconSize = CG_CalloutMarkerPing_GetTacmapIconSize(this->m_localClientNum, v47, View);
      CgCompassSystem::CalcCompassPointerSize(this, v57, TacmapIconSize, &v145, &width);
      *(double *)&_XMM0 = CG_CalloutMarkerPing_GetAspectRatio(v47, View, this->m_localClientNum);
      __asm
      {
        vmovaps xmm6, xmm0
        vcomiss xmm0, xmm8
      }
      if ( v68 | v28 )
      {
LABEL_67:
        v23 = bracketPass;
        v38 = cropPartialMap;
        p_predictedPlayerState = v151;
        goto LABEL_69;
      }
      if ( v60 )
      {
        CalcCompassClippedDistanceScale(&v0, &v1, 0);
        __asm
        {
          vmovss  xmm1, [rbp+150h+var_1C8]
          vmulss  xmm3, xmm1, xmm0
          vmovss  [rbp+150h+var_1C8], xmm3
          vmovss  xmm2, [rbp+150h+width]
          vmulss  xmm1, xmm2, xmm0
          vmovss  [rbp+150h+width], xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm1, [rbp+150h+width]
          vmovss  xmm3, [rbp+150h+var_1C8]
        }
      }
      v23 = bracketPass;
      if ( bracketPass )
      {
        __asm
        {
          vucomiss xmm6, xmm7
          vcomiss xmm6, xmm7
          vmulss  xmm0, xmm6, cs:__real@3f99999a
          vmulss  xmm3, xmm3, xmm0
          vmulss  xmm0, xmm3, xmm11
          vmovss  [rbp+150h+var_1C8], xmm0
          vmulss  xmm1, xmm1, xmm11
          vmovss  [rbp+150h+width], xmm1
        }
      }
      else
      {
        __asm { vcomiss xmm6, xmm7 }
      }
      if ( v57 == COMPASS_TYPE_TACMAP )
      {
        if ( !CG_CalloutMarkerPing_TacmapIsLookingAtPing(this->m_localClientNum, v142) )
          goto LABEL_51;
        *(double *)&_XMM0 = CG_CalloutMarkerPing_GetTacmapLookAtScale(this->m_localClientNum);
        __asm { vcomiss xmm0, xmm8 }
        if ( v68 | v28 )
        {
LABEL_51:
          __asm { vmovss  xmm1, [rbp+150h+width] }
        }
        else
        {
          __asm
          {
            vmulss  xmm1, xmm9, [rbp+150h+var_1C8]
            vmulss  xmm2, xmm1, xmm0
            vaddss  xmm3, xmm2, [rbp+150h+var_1C8]
            vmovss  [rbp+150h+var_1C8], xmm3
            vmovss  xmm4, [rbp+150h+width]
            vmulss  xmm1, xmm9, xmm4
            vmulss  xmm0, xmm1, xmm0
            vaddss  xmm1, xmm4, xmm0
            vmovss  [rbp+150h+width], xmm1
          }
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+150h+v1]
        vmovss  [rbp+150h+var_1BC], xmm0
        vmovss  xmm2, dword ptr [rbp+150h+v1+4]
        vmovss  [rbp+150h+var_1C0], xmm2
      }
      if ( v47 == CONST_CALLOUT_POOL_ID_NAVIGATION )
      {
        __asm
        {
          vmulss  xmm0, xmm1, xmm9
          vsubss  xmm1, xmm2, xmm0
          vmovss  [rbp+150h+var_1C0], xmm1
        }
      }
      vertAlign = v159->vertAlign;
      horzAlign = v159->horzAlign;
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      ScrPlace_ApplyRect(ActivePlacement, &v150, &v149, &v145, &width, horzAlign, vertAlign);
      m_localClientNum = this->m_localClientNum;
      if ( bracketPass )
      {
        CG_CalloutMarkerPing_GetColor(v47, View, m_localClientNum, &out_color);
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+150h+out_color+0Ch]
          vcmpltss xmm0, xmm10, xmm1
          vblendvps xmm0, xmm1, xmm10, xmm0
          vmovss  dword ptr [rbp+150h+out_color+0Ch], xmm0
          vmovss  xmm0, dword ptr [rbp+150h+out_color+0Ch]
          vmovss  xmm1, dword ptr [rbp+150h+out_color+8]
          vmovss  xmm3, [rbp+150h+var_1C0]; centerY
          vmovss  xmm2, [rbp+150h+var_1BC]; centerX
        }
        v96 = v156;
        v97 = this->m_localClientNum;
        v140 = v155;
        __asm { vcomiss xmm6, xmm7 }
        if ( v68 )
          calloutMarkerPing_OvalBackgroundVertical = cgMedia.compass.calloutMarkerPing_OvalBackgroundVertical;
        else
          calloutMarkerPing_OvalBackgroundVertical = cgMedia.compass.calloutMarkerPing_OvalBackground;
        material = (GfxImage *)calloutMarkerPing_OvalBackgroundVertical;
        __asm
        {
          vmovss  dword ptr [rsp+260h+var_1F0], xmm0
          vmovss  [rsp+260h+var_1F8], xmm1
          vmovss  xmm0, dword ptr [rbp+150h+out_color+4]
          vmovss  [rsp+260h+var_200], xmm0
          vmovss  xmm1, dword ptr [rbp+150h+out_color]
          vmovss  [rsp+260h+var_208], xmm1
          vmovss  xmm0, [rbp+150h+var_1B0]
          vmovss  [rsp+260h+angle], xmm0
        }
      }
      else
      {
        Icon = CG_CalloutMarkerPing_GetIcon(v47, View, m_localClientNum, v57);
        if ( !Icon )
          goto LABEL_59;
        if ( v147 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
            vmovups xmmword ptr [rbp+150h+out_color], xmm0
          }
        }
        else
        {
          CG_CalloutMarkerPing_GetColor(v47, View, this->m_localClientNum, &out_color);
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+150h+out_color+0Ch]
          vcmpltss xmm0, xmm10, xmm1
          vblendvps xmm2, xmm1, xmm10, xmm0
        }
        v140 = v155;
        material = (GfxImage *)Icon;
        __asm
        {
          vmovss  dword ptr [rbp+150h+out_color+0Ch], xmm2
          vmovss  dword ptr [rsp+260h+var_1F0], xmm2
          vmovss  xmm0, dword ptr [rbp+150h+out_color+8]
          vmovss  [rsp+260h+var_1F8], xmm0
          vmovss  xmm1, dword ptr [rbp+150h+out_color+4]
          vmovss  [rsp+260h+var_200], xmm1
          vmovss  xmm0, dword ptr [rbp+150h+out_color]
          vmovss  [rsp+260h+var_208], xmm0
          vmovss  xmm1, [rbp+150h+var_1B0]
          vmovss  [rsp+260h+angle], xmm1
          vmovss  xmm3, [rbp+150h+var_1C0]
          vmovss  xmm2, [rbp+150h+var_1BC]
        }
        v96 = v156;
        v97 = this->m_localClientNum;
      }
      __asm
      {
        vmovss  dword ptr [rsp+260h+outClipped], xmm7
        vmovss  dword ptr [rsp+260h+var_220], xmm7
        vmovss  dword ptr [rsp+260h+h], xmm8
        vmovss  dword ptr [rsp+260h+w], xmm8
        vmovss  xmm0, [rbp+150h+width]
        vmovss  dword ptr [rsp+260h+y], xmm0
        vmovss  xmm1, [rbp+150h+var_1C8]
        vmovss  dword ptr [rsp+260h+x], xmm1
      }
      LUI_Render_DrawQuadRotated(v97, v96, *(float *)&_XMM2, *(float *)&_XMM3, xb, ya, w, ha, v132, outClipped, angle, v135, v136, v137, v138, material, v140);
LABEL_59:
      v38 = cropPartialMap;
LABEL_60:
      p_predictedPlayerState = v151;
LABEL_69:
      v40 = -1;
      goto LABEL_70;
    }
  }
LABEL_71:
  memset(&out, 0, sizeof(out));
  memset(prev, 0, 0xCui64);
  memset(&in, 0, sizeof(in));
  _R11 = &v169;
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
CgCompassSystemMP::DrawPlayerLayer
==============
*/
void CgCompassSystemMP::DrawPlayerLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  const MinimapOptions *v11; 
  float v13; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovss  xmm0, dword ptr [rdx+38h] }
  v11 = minimapOptions;
  __asm { vmovss  dword ptr [rax-38h], xmm0 }
  CgCompassSystemMP::DrawPlayerMP(this, minimapOptions->compassType, minimapOptions->cropPartialMap, minimapOptions->largeMap, parentRect, rect, v13, color, element, luaVM);
  CgCompassSystemMP::DrawMinimapPlayerPing(this, v11, parentRect, rect, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::DrawPlayerMP
==============
*/
void CgCompassSystemMP::DrawPlayerMP(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  const GfxImage *objectiveIcon; 
  cg_t *LocalClientGlobals; 
  CgGlobalsMP *v16; 
  CgHandler *Handler; 
  bool IsGameTypeQuick_BR; 
  bool v19; 
  CgCompassSystemMP_vtbl *v24; 
  LocalClientNum_t m_localClientNum; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  int BombCarrierEntityNum; 
  int FlagCarrierEntityNum; 
  CgStatic *v31; 
  characterInfo_t *v32; 
  __int64 clientNum; 
  float v52; 
  float v53; 
  bool v54; 
  vec4_t secondaryColor; 
  vec4_t objectiveSecondaryColor; 
  vec4_t v60; 
  vec4_t objectiveColor; 
  vec4_t playerNumberColor; 

  objectiveIcon = NULL;
  v54 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
    v16 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  else
    v16 = NULL;
  Handler = CgHandler::getHandler(this->m_localClientNum);
  IsGameTypeQuick_BR = BG_IsGameTypeQuick_BR(Handler);
  v19 = !IsGameTypeQuick_BR;
  if ( IsGameTypeQuick_BR )
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  else
    *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  _RBX = color;
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rbx+0Ch]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( !v19 && !CG_Players_IsPlayerIconHidden((const LocalClientNum_t)this->m_localClientNum, LocalClientGlobals->predictedPlayerState.clientNum) )
  {
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    v24 = this->__vftable;
    __asm
    {
      vmovaps [rsp+170h+var_50], xmm6
      vmovaps xmmword ptr [rbp+60h+var_90], xmm0
    }
    v24->GetPlayerCompassColor(this, &v60, LocalClientGlobals);
    __asm { vmovups xmm0, xmmword ptr [rbp+60h+var_90] }
    m_localClientNum = this->m_localClientNum;
    __asm { vmovdqa xmmword ptr [rbp+60h+var_B0], xmm0 }
    LocalClientStatics = CgStatic::GetLocalClientStatics(m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    BombCarrierEntityNum = GetBombCarrierEntityNum(v16);
    FlagCarrierEntityNum = GetFlagCarrierEntityNum(LocalClientGlobals, (const team_t)CharacterInfo->team);
    if ( v16->m_isMLGSpectator && BombCarrierEntityNum != -1 && BombCarrierEntityNum == LocalClientGlobals->predictedPlayerState.clientNum || FlagCarrierEntityNum == LocalClientGlobals->predictedPlayerState.clientNum )
      v54 = 1;
    v31 = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    v32 = CgStatic::GetCharacterInfo(v31, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3907, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
      __debugbreak();
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    *(double *)&_XMM0 = CgCompassSystemMP::GetActorFadeAmount(this, &this->m_compassActors[clientNum].beginFadeTime);
    __asm { vmovaps xmm6, xmm0 }
    if ( v16->m_isMLGSpectator )
    {
      if ( this->m_compassActors[clientNum].lastUpdate < LocalClientGlobals->time - 500 )
      {
LABEL_32:
        __asm { vmovaps xmm6, [rsp+170h+var_50] }
        return;
      }
      __asm
      {
        vmovups xmm1, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
        vmovups xmmword ptr [rbp+60h+var_70], xmm1
      }
      if ( v32->team == TEAM_TWO )
      {
        CgCompassSystemMP::GetFriendlyCompassColor(this, &v60, v16);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+60h+var_90]
          vmovss  xmm1, dword ptr [rbp+60h+var_90+4]
          vmovss  dword ptr [rbp+60h+var_80], xmm0
          vmovss  xmm0, dword ptr [rbp+60h+var_90+8]
          vmovss  dword ptr [rbp+60h+var_80+8], xmm0
          vmovss  dword ptr [rbp+60h+var_80+4], xmm1
        }
        if ( this->m_isUsingCustomCodCasterFriendlyColor )
        {
          CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, &secondaryColor, v16);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+60h+var_B0]
            vmovss  xmm1, dword ptr [rbp+60h+var_B0+4]
            vmovss  dword ptr [rbp+60h+var_A0], xmm0
            vmovss  xmm0, dword ptr [rbp+60h+var_B0+8]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm2, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
            vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
            vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
            vmovss  dword ptr [rbp+60h+var_B0], xmm2
            vmovss  dword ptr [rbp+60h+var_B0+4], xmm1
            vmovss  dword ptr [rbp+60h+var_B0+8], xmm0
            vmovss  dword ptr [rbp+60h+var_A0], xmm2
          }
        }
        __asm
        {
          vmovss  dword ptr [rbp+60h+var_A0+8], xmm0
          vmovss  dword ptr [rbp+60h+var_A0+4], xmm1
        }
        if ( FlagCarrierEntityNum == LocalClientGlobals->predictedPlayerState.clientNum )
        {
          CgCompassSystemMP::GetEnemyCompassColor(this, &objectiveColor, v16);
          CgCompassSystemMP::GetEnemyCompassSecondaryColor(this, &objectiveSecondaryColor, v16);
        }
      }
      else
      {
        CgCompassSystemMP::GetEnemyCompassColor(this, &v60, v16);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+60h+var_90]
          vmovss  xmm1, dword ptr [rbp+60h+var_90+4]
          vmovss  dword ptr [rbp+60h+var_80], xmm0
          vmovss  xmm0, dword ptr [rbp+60h+var_90+8]
          vmovss  dword ptr [rbp+60h+var_80+8], xmm0
          vmovss  dword ptr [rbp+60h+var_80+4], xmm1
        }
        if ( this->m_isUsingCustomCodCasterEnemyColor )
        {
          CgCompassSystemMP::GetEnemyCompassSecondaryColor(this, &secondaryColor, v16);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+60h+var_B0]
            vmovss  xmm1, dword ptr [rbp+60h+var_B0+4]
            vmovss  dword ptr [rbp+60h+var_A0], xmm0
            vmovss  xmm0, dword ptr [rbp+60h+var_B0+8]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm2, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
            vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
            vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
            vmovss  dword ptr [rbp+60h+var_B0], xmm2
            vmovss  dword ptr [rbp+60h+var_B0+4], xmm1
            vmovss  dword ptr [rbp+60h+var_B0+8], xmm0
            vmovss  dword ptr [rbp+60h+var_A0], xmm2
          }
        }
        __asm
        {
          vmovss  dword ptr [rbp+60h+var_A0+8], xmm0
          vmovss  dword ptr [rbp+60h+var_A0+4], xmm1
        }
        if ( FlagCarrierEntityNum == LocalClientGlobals->predictedPlayerState.clientNum )
        {
          CgCompassSystemMP::GetFriendlyCompassColor(this, &objectiveColor, v16);
          CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, &objectiveSecondaryColor, v16);
        }
      }
      objectiveIcon = CgCompassSystemMP::GetObjectiveImage(this);
    }
    __asm
    {
      vmovss  xmm0, [rbp+60h+boundsRadius]
      vmovss  [rsp+170h+var_100], xmm6
      vmovss  [rsp+170h+var_130], xmm0
    }
    CgCompassSystem::DrawPlayer(this, compassType, cropPartialMap, largeMap, v54, objectiveIcon, parentRect, rect, v52, &v60, &secondaryColor, &objectiveColor, &objectiveSecondaryColor, &playerNumberColor, v53, element, luaVM);
    goto LABEL_32;
  }
}

/*
==============
CgCompassSystemMP::DrawPlayerPointers
==============
*/
void CgCompassSystemMP::DrawPlayerPointers(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  CgGlobalsMP *v32; 
  __int64 m_localClientNum; 
  ClActiveClient *v34; 
  int BombCarrierEntityNum; 
  __int64 v36; 
  int v37; 
  CompassType v40; 
  unsigned int v42; 
  char v43; 
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v45; 
  GfxImage *v46; 
  char v47; 
  unsigned int v48; 
  char v49; 
  LocalClientNum_t v50; 
  __int64 v51; 
  unsigned __int8 v52; 
  CompassType v55; 
  bool v57; 
  bool v58; 
  cg_t *v66; 
  int clientNum; 
  unsigned int v74; 
  const dvar_t *v75; 
  char v78; 
  char v79; 
  __int64 v83; 
  const GfxImage *v84; 
  bool m_isMLGSpectator; 
  ObjectiveSide v87; 
  ObjectiveIconSize v92; 
  int x; 
  float xa; 
  float *y; 
  float *w; 
  float h; 
  float ha; 
  float v108; 
  float outClipped; 
  float outClippeda; 
  float icon; 
  float v112; 
  int v115; 
  bool v116; 
  bool v117; 
  float v118; 
  ClActiveClient *v119; 
  int objectiveIndex; 
  float scale; 
  float outAngle; 
  float pingAlpha; 
  int FlagCarrierEntityNum; 
  GfxImage *v125; 
  SecureVec3 in; 
  LUIElement *v127; 
  rectDef_s *v128; 
  cg_t *cgameGlob; 
  lua_State *v130; 
  SecureVec3 out; 
  playerState_s *p_predictedPlayerState; 
  char *outName; 
  char *imageName; 
  float v135[2]; 
  vec3_t v136; 
  vec2_t prev[3]; 
  vec2_t xyClipped; 
  vec2_t xy; 
  vec4_t bgColorRight; 
  vec4_t outColor; 
  rectDef_s mapRect; 
  vec4_t v143; 
  vec2_t outVector; 
  vec4_t v145; 
  vec4_t bgColorRightLight; 
  vec4_t outLightColor; 
  float yawTo[4]; 
  char v149; 
  void *retaddr; 

  _RAX = &retaddr;
  prev[2] = (vec2_t)-2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
  }
  v117 = largeMap;
  v128 = (rectDef_s *)rect;
  *(_QWORD *)v135 = color;
  v127 = element;
  v130 = luaVM;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  cgameGlob = LocalClientGlobals;
  *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  __asm
  {
    vmulss  xmm12, xmm0, dword ptr [r13+0Ch]
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm12, xmm7
  }
  if ( !v79 )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, [rbp+1A0h+mapRect.w]
      vaddss  xmm9, xmm1, [rbp+1A0h+mapRect.x]
      vmulss  xmm0, xmm3, [rbp+1A0h+mapRect.h]
      vaddss  xmm10, xmm0, [rbp+1A0h+mapRect.y]
    }
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6064, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
    {
      CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v32 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      m_localClientNum = this->m_localClientNum;
      if ( (unsigned int)m_localClientNum >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&w = cl_maxLocalClients;
        LODWORD(y) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, w) )
          __debugbreak();
      }
      if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
        __debugbreak();
      if ( !ClActiveClient::ms_activeClients[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
        __debugbreak();
      v34 = ClActiveClient::ms_activeClients[m_localClientNum];
      v119 = v34;
      BombCarrierEntityNum = GetBombCarrierEntityNum(LocalClientGlobals);
      v115 = BombCarrierEntityNum;
      FlagCarrierEntityNum = GetFlagCarrierEntityNum(LocalClientGlobals, (const team_t)CharacterInfo->team);
      objectiveIndex = 0;
      v37 = 0;
      __asm
      {
        vmovss  xmm8, [rbp+1A0h+boundsRadius]
        vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      }
      v40 = compassType;
      while ( 1 )
      {
        v36 = v32 && v32->m_isMLGSpectator && v34 ? ((__int64 (__fastcall *)(ClActiveClient *, __int64, const char *))v34->GetPlayerState)(v34, v36, "%s\n\tRequested gametype before it was set") + 172i64 * v37 : (__int64)p_predictedPlayerState + 172 * v37;
        _RSI = v36 + 4720;
        if ( !v32->m_isMLGSpectator )
          goto LABEL_38;
        if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
          __debugbreak();
        if ( *(int *)(_RSI + 132) > 0 && (BombCarrierEntityNum != -1 || !I_strcmp(cls.m_activeGameTypeName, "ctf")) )
          goto LABEL_111;
        v42 = *(_DWORD *)(_RSI + 164);
        v43 = *(_BYTE *)(_RSI + 159);
        if ( v43 != 1 && v43 != 4 )
          goto LABEL_38;
        CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
        v45 = CurrentValidLocalClient;
        if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(w) = 2;
          LODWORD(y) = CurrentValidLocalClient;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, w) )
            __debugbreak();
        }
        if ( clientUIActives[v45].connectionState == CA_ACTIVE && v42 && NetConstStrings_AreStringsLoaded() && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, v42, (const char **)&outName) )
        {
          v46 = Image_Register(outName, IMAGE_TRACK_HUD);
          v47 = 1;
        }
        else
        {
LABEL_38:
          v48 = *(_DWORD *)(_RSI + 144);
          v49 = *(_BYTE *)(_RSI + 159);
          if ( v49 != 1 && v49 != 4 )
            goto LABEL_110;
          v50 = LUI_CoD_GetCurrentValidLocalClient();
          v51 = v50;
          if ( (unsigned int)v50 >= LOCAL_CLIENT_COUNT )
          {
            LODWORD(w) = 2;
            LODWORD(y) = v50;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, w) )
              __debugbreak();
          }
          if ( clientUIActives[v51].connectionState != CA_ACTIVE || !v48 || !NetConstStrings_AreStringsLoaded() || !NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, v48, (const char **)&imageName) )
            goto LABEL_110;
          v46 = Image_Register(imageName, IMAGE_TRACK_HUD);
          v47 = 0;
        }
        v125 = v46;
        v52 = CG_CalloutMarkerPing_CheckSquadPingsForTarget(this->m_localClientNum, *(_DWORD *)_RSI, 0xFFFFFFFF, -1);
        if ( !this->IsObjectiveFiltered(this, v40, *(ObjectiveBackground *)(_RSI + 158)) || v52 != 53 )
          break;
LABEL_109:
        BombCarrierEntityNum = v115;
LABEL_110:
        v34 = v119;
LABEL_111:
        v37 = ++objectiveIndex;
        if ( objectiveIndex >= 32 )
          goto LABEL_112;
      }
      __asm
      {
        vmovsd  xmm0, qword ptr [rsi+20h]
        vmovsd  [rbp+1A0h+var_180], xmm0
      }
      v136.v[2] = *(float *)(_RSI + 40);
      __asm
      {
        vmovss  xmm0, [rbp+1A0h+outAngle]
        vmovss  dword ptr [rsp+2B0h+h], xmm0
      }
      LOWORD(y) = *(_WORD *)(_RSI + 156);
      v55 = compassType;
      CgCompassSystemMP::GetObjectiveCompassOrigin(this, compassType, cropPartialMap, *(_DWORD *)_RSI, 0xFFFFFFFF, (const ObjectiveFlags)y, &v136, h, &in, &v116, &v118);
      __asm
      {
        vmovss  dword ptr [rbp+1A0h+xy], xmm7
        vmovss  dword ptr [rbp+1A0h+xy+4], xmm7
        vmovss  dword ptr [rbp+1A0h+xyClipped], xmm7
        vmovss  dword ptr [rbp+1A0h+xyClipped+4], xmm7
      }
      if ( !v116 || cropPartialMap )
      {
        __asm { vmovss  dword ptr [rsp+2B0h+x], xmm8 }
        v57 = CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &mapRect, xa, &outVector, (const vec2_t *)&out, (const vec2_t *)&in, &xy, &xyClipped);
      }
      else
      {
        __asm { vmovaps xmm3, xmm8; boundsRadius }
        v57 = CgCompassSystem::WorldPosToCompassPredict(this, compassType, &mapRect, *(const float *)&_XMM3, &outVector, (const vec2_t *)&out, (const vec2_t *)&in, prev, &xy, &xyClipped);
      }
      v58 = v57;
      __asm
      {
        vaddss  xmm1, xmm9, dword ptr [rbp+1A0h+xy]
        vmovss  dword ptr [rbp+1A0h+xy], xmm1
        vaddss  xmm0, xmm10, dword ptr [rbp+1A0h+xy+4]
        vmovss  dword ptr [rbp+1A0h+xy+4], xmm0
        vaddss  xmm2, xmm9, dword ptr [rbp+1A0h+xyClipped]
        vmovss  dword ptr [rbp+1A0h+xyClipped], xmm2
        vaddss  xmm1, xmm10, dword ptr [rbp+1A0h+xyClipped+4]
        vmovss  dword ptr [rbp+1A0h+xyClipped+4], xmm1
      }
      if ( !v57 || (*(_WORD *)(_RSI + 156) & 0x800) == 0 )
      {
        LOBYTE(x) = *(_BYTE *)(_RSI + 158);
        this->GetObjectiveCompassColor(this, (const vec3_t *)&in, *(ObjectiveSide *)(_RSI + 161), *(ObjectiveSide *)(_RSI + 162), (ObjectiveBackground)x, *(_DWORD *)_RSI, &v143, (vec4_t *)yawTo, *(const vec4_t **)v135);
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+1A0h+var_110+0Ch]
          vcmpltss xmm0, xmm12, xmm1
          vblendvps xmm0, xmm1, xmm12, xmm0
          vmovss  dword ptr [rbp+1A0h+var_110+0Ch], xmm0
        }
        v66 = cgameGlob;
        CG_CompassGetObjectivePingAlpha((const ObjectiveView *)_RSI, cgameGlob->time, &pingAlpha);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+1A0h+var_110+0Ch]
          vmulss  xmm1, xmm0, [rbp+1A0h+pingAlpha]
          vmovss  dword ptr [rbp+1A0h+var_110+0Ch], xmm1
          vmovss  [rbp+1A0h+scale], xmm7
        }
        CgCompassSystemMP::GetObjectiveScale(this, (const ObjectiveView *)_RSI, &objectiveIndex, &scale);
        v36 = v115;
        if ( v115 == -1i64 || (*(_WORD *)(_RSI + 156) & 0x2000) == 0 )
          goto LABEL_66;
        if ( !v32->m_isMLGSpectator )
        {
          __asm
          {
            vmovss  xmm0, [rbp+1A0h+outAngle]
            vsubss  xmm0, xmm0, dword ptr [rax+rbx+620h]; angle
          }
          *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
          __asm { vmovss  [rbp+1A0h+var_210], xmm0 }
          if ( (cropPartialMap || compassType || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation")) && this->MapShouldRotate(this) )
          {
            this->MapRotationFactor(this);
            __asm
            {
              vmovss  xmm1, [rbp+1A0h+var_210]
              vsubss  xmm3, xmm1, xmm0
              vmovss  [rbp+1A0h+var_210], xmm3
            }
          }
          else
          {
            __asm { vmovss  xmm3, [rbp+1A0h+var_210]; in }
          }
          CgCompassSystem::WorldYawToCompass(this, compassType, v66, *(const float *)&_XMM3, &v118);
          v36 = (unsigned int)v115;
LABEL_66:
          if ( *(int *)(_RSI + 132) > 0 )
          {
            clientNum = v66->predictedPlayerState.clientNum;
            if ( FlagCarrierEntityNum == clientNum || (_DWORD)v36 == clientNum )
              goto LABEL_108;
          }
          v74 = 0;
          v75 = DVARBOOL_compassPrototypeElevation;
          if ( !DVARBOOL_compassPrototypeElevation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPrototypeElevation") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v75);
          if ( v75->current.enabled && (*(_WORD *)(_RSI + 156) & 0x1000) == 0 )
          {
            __asm
            {
              vmovss  xmm0, [rbp+1A0h+var_1D8]
              vsubss  xmm6, xmm0, dword ptr [rax+40h]
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassEnemyHeightDelta, "compassEnemyHeightDelta");
            __asm
            {
              vandps  xmm1, xmm6, xmm11
              vcomiss xmm1, xmm0
            }
            if ( !v78 )
            {
              __asm { vcomiss xmm6, xmm7 }
              LOBYTE(v74) = v78 | v79;
              ++v74;
            }
          }
          v55 = compassType;
          if ( compassType == COMPASS_TYPE_TACMAP && CG_CalloutMarkerPing_TacmapIsLookingAtObjective(this->m_localClientNum, objectiveIndex) )
          {
            CG_CalloutMarkerPing_GetTacmapLookAtScale(this->m_localClientNum);
            __asm
            {
              vmovss  xmm1, [rbp+1A0h+scale]
              vaddss  xmm6, xmm1, xmm0
            }
          }
          else
          {
            __asm { vmovss  xmm6, [rbp+1A0h+scale] }
          }
          if ( v32->m_isMLGSpectator && v47 )
            v83 = *(unsigned __int8 *)(_RSI + 168);
          else
            v83 = *(unsigned __int8 *)(_RSI + 158);
          v84 = this->GetObjectiveBackgroundImage(this, v83, v74);
          if ( *(_BYTE *)(_RSI + 158) == 1 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+1A0h+yawTo]
              vmovdqa xmmword ptr [rbp+1A0h+var_110], xmm0
            }
          }
          m_isMLGSpectator = v32->m_isMLGSpectator;
          if ( !m_isMLGSpectator )
            goto LABEL_105;
          if ( v117 )
          {
            Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorLargeMapObjectiveSize, "compassIconMLGSpectatorLargeMapObjectiveSize");
            __asm { vaddss  xmm6, xmm6, xmm0 }
            m_isMLGSpectator = v32->m_isMLGSpectator;
          }
          if ( !m_isMLGSpectator )
          {
LABEL_105:
            v92 = OBJ_ICON_SIZE_LARGE;
            if ( (*(_WORD *)(_RSI + 156) & 2) == 0 )
              v92 = *(_BYTE *)(_RSI + 160);
            __asm
            {
              vmovss  dword ptr [rsp+2B0h+var_258], xmm7
              vmovss  dword ptr [rsp+2B0h+icon], xmm6
              vmovss  xmm0, [rbp+1A0h+var_210]
              vmovss  dword ptr [rsp+2B0h+outClipped], xmm0
            }
            LOWORD(w) = *(_WORD *)(_RSI + 156);
            CgCompassSystemMP::DrawObjective(this, compassType, v128, &xy, &xyClipped, v58, (ObjectiveFlags)w, v92, v84, outClippeda, icon, v112, v125, &v143, (const vec4_t *)yawTo, v127, v130);
            goto LABEL_108;
          }
          v87 = *(_BYTE *)(_RSI + 161);
          if ( v87 == IN_FLUX )
          {
            if ( this->m_isUsingCustomCodCasterFriendlyColor )
              __asm { vmovaps xmm0, cs:xmmword_147FA89B0 }
            else
              __asm { vmovaps xmm0, xmmword ptr cs:friendlyColors }
            __asm { vmovups xmmword ptr [rbp+1A0h+outColor], xmm0 }
            CgCompassSystemMP::GetFriendlyCompassLightColor(this, &outLightColor, v32);
            if ( this->m_isUsingCustomCodCasterEnemyColor && v32->m_isMLGSpectator )
              __asm { vmovaps xmm0, cs:xmmword_147FA8A20 }
            else
              __asm { vmovaps xmm0, xmmword ptr cs:enemyColors }
            __asm { vmovups xmmword ptr [rbp+1A0h+var_148], xmm0 }
            CgCompassSystemMP::GetEnemyCompassLightColor(this, &bgColorRightLight, v32);
          }
          else
          {
            CgCompassSystemMP::GetMLGSpectatorObjectiveColors(this, v87, &outColor, &outLightColor, v32);
            CgCompassSystemMP::GetMLGSpectatorObjectiveColors(this, v87, &bgColorRight, &bgColorRightLight, v32);
            if ( v87 == FRIENDLY )
            {
              CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, &v145, v32);
              goto LABEL_100;
            }
            if ( v87 == ENEMY )
            {
              CgCompassSystemMP::GetEnemyCompassSecondaryColor(this, &v145, v32);
              goto LABEL_100;
            }
          }
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
            vmovups xmmword ptr [rbp+1A0h+var_F8], xmm0
          }
LABEL_100:
          __asm
          {
            vmovss  dword ptr [rsp+2B0h+outClipped], xmm6
            vmovss  dword ptr [rsp+2B0h+var_270], xmm6
            vmovss  xmm0, [rbp+1A0h+var_210]
            vmovss  dword ptr [rsp+2B0h+h], xmm0
          }
          LOWORD(w) = *(_WORD *)(_RSI + 156);
          CgCompassSystemMP::DrawMLGSpectatorObjective(this, compassType, v128, &xy, &xyClipped, v58, (ObjectiveFlags)w, ha, v108, outClipped, v125, &v145, &outColor, &bgColorRight, &outLightColor, &bgColorRightLight, v127, v130);
        }
      }
LABEL_108:
      v40 = v55;
      goto LABEL_109;
    }
  }
LABEL_112:
  memset(&out, 0, sizeof(out));
  memset(prev, 0, 0xCui64);
  memset(&in, 0, sizeof(in));
  _R11 = &v149;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
CgCompassSystemMP::DrawPortableRadar
==============
*/
void CgCompassSystemMP::DrawPortableRadar(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  const dvar_t *v16; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int clientNum; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  LocalClientNum_t m_localClientNum; 
  char v30; 
  bool v31; 
  bool v33; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  rectDef_s *v52; 
  int *p_duration; 
  __int64 v54; 
  int v55; 
  int time; 
  int v57; 
  int v58; 
  vec2_t v63; 
  float fmt; 
  float *y; 
  float ya; 
  float yb; 
  float *w; 
  float wa; 
  float h; 
  float position; 
  float v78; 
  float v79; 
  float v80; 
  float isPixelCircle; 
  char v82; 
  float alphaOffset; 
  float v85; 
  rectDef_s *parentRecta; 
  lua_State *v87; 
  LUIElement *v88; 
  float x; 
  float v90; 
  vec4_t v91; 
  vec2_t outSize; 
  vec4_t quadVerts[4]; 

  v16 = DCONST_DVARINT_bg_compassPortableRadarSweepTime;
  v88 = element;
  v87 = luaVM;
  parentRecta = (rectDef_s *)parentRect;
  if ( !DCONST_DVARINT_bg_compassPortableRadarSweepTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarSweepTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( !v16->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4379, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_bg_compassPortableRadarSweepTime, \"bg_compassPortableRadarSweepTime\" ))", (const char *)&queryFormat, "Dconst_GetInt( bg_compassPortableRadarSweepTime )") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(w) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(y) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4382, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", y, w) )
      __debugbreak();
  }
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
  if ( CharacterInfo->infoValid && CharacterInfo->team != TEAM_SPECTATOR )
  {
    m_localClientNum = this->m_localClientNum;
    __asm
    {
      vmovaps [rsp+1A0h+var_60], xmm7
      vmovaps [rsp+1A0h+var_80], xmm9
    }
    *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, m_localClientNum, compassType);
    _RAX = color;
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vmulss  xmm9, xmm0, dword ptr [rax+0Ch]
      vucomiss xmm9, xmm7
    }
    if ( !v31 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  dword ptr [rbp+0A0h+var_F0], xmm0
        vmovss  xmm0, dword ptr [rax+8]
        vmovaps [rsp+1A0h+var_50], xmm6
        vmovaps [rsp+1A0h+var_70], xmm8
        vmovss  dword ptr [rbp+0A0h+var_F0+4], xmm1
        vmovss  dword ptr [rbp+0A0h+var_F0+8], xmm0
      }
      CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x, &v90, &v85, &alphaOffset);
      __asm
      {
        vmovss  xmm0, [rbp+0A0h+var_118]
        vcomiss xmm0, xmm7
      }
      if ( v30 | v31 )
      {
        v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4415, ASSERT_TYPE_SANITY, "( w > 0.0f )", (const char *)&queryFormat, "w > 0.0f");
        v30 = 0;
        v31 = !v33;
        if ( v33 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, [rbp+0A0h+alphaOffset]
        vcomiss xmm0, xmm7
      }
      if ( v30 | v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4416, ASSERT_TYPE_SANITY, "( h > 0.0f )", (const char *)&queryFormat, "h > 0.0f") )
        __debugbreak();
      __asm { vmovss  xmm8, cs:__real@3f800000 }
      if ( compassType || !mapMask )
      {
        v82 = 0;
      }
      else
      {
        v82 = 1;
        LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
        vertAlign = rect->vertAlign;
        horzAlign = rect->horzAlign;
        ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        ScrPlace_ApplyRect(ActivePlacement, &x, &v90, &v85, &alphaOffset, horzAlign, vertAlign);
        __asm
        {
          vmovss  xmm1, [rbp+0A0h+var_F4]; top
          vmovss  xmm0, [rbp+0A0h+x]; left
          vaddss  xmm3, xmm1, [rbp+0A0h+alphaOffset]; bottom
          vaddss  xmm2, xmm0, [rbp+0A0h+var_118]; right
        }
        LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
        __asm
        {
          vmovss  xmm2, dword ptr [rbp+0A0h+quadVerts+24h]
          vaddss  xmm0, xmm2, dword ptr [rbp+0A0h+quadVerts+4]
          vsubss  xmm6, xmm2, dword ptr [rbp+0A0h+quadVerts+4]
          vmovss  xmm4, dword ptr [rbp+0A0h+quadVerts+10h]
          vmulss  xmm2, xmm0, cs:__real@3f000000; maskCenterY
          vsubss  xmm5, xmm4, dword ptr [rbp+0A0h+quadVerts]
          vaddss  xmm0, xmm4, dword ptr [rbp+0A0h+quadVerts]
          vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vandps  xmm3, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; maskWidth
          vmulss  xmm1, xmm0, cs:__real@3f000000; maskCenterX
          vmovss  dword ptr [rsp+1A0h+isPixelCircle], xmm8
          vmovss  dword ptr [rsp+1A0h+var_148], xmm8
          vmovss  [rsp+1A0h+var_150], xmm7
          vmovss  dword ptr [rsp+1A0h+position], xmm7
          vmovss  dword ptr [rsp+1A0h+h], xmm7
          vmovss  dword ptr [rsp+1A0h+w], xmm8
          vmovss  dword ptr [rsp+1A0h+y], xmm7
          vmovss  dword ptr [rsp+1A0h+fmt], xmm6
        }
        LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, ya, wa, h, 0, position, v78, v80, isPixelCircle, &outSize, mapMask);
      }
      __asm { vmovss  xmm6, [rbp+0A0h+boundsRadius] }
      v52 = parentRecta;
      p_duration = &this->m_compassPortableRadarPingsList[0].duration;
      v54 = 10i64;
      do
      {
        v55 = *(p_duration - 1);
        time = LocalClientGlobals->time;
        if ( v55 + *p_duration >= time && time >= v55 )
        {
          if ( !*p_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4447, ASSERT_TYPE_ASSERT, "(pingInfo->duration)", (const char *)&queryFormat, "pingInfo->duration") )
            __debugbreak();
          v57 = *(p_duration - 1);
          v58 = *p_duration;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, edx
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
          }
          v63 = *(vec2_t *)(p_duration - 4);
          __asm
          {
            vdivss  xmm2, xmm1, xmm0
            vsubss  xmm1, xmm8, xmm2
            vmulss  xmm0, xmm1, xmm9
            vmovss  dword ptr [rbp+0A0h+var_F0+0Ch], xmm0
            vmulss  xmm0, xmm2, dword ptr [rbx+4]
            vmovss  [rsp+1A0h+var_150], xmm0
            vmovss  dword ptr [rsp+1A0h+y], xmm6
          }
          CgCompassSystemMP::DrawAreaMarker(this, compassType, cropPartialMap, v52, rect, yb, &v91, v57, v58, v63, v79, cgMedia.compassping_portable_radar_sweep, 0, v88, v87);
        }
        p_duration += 79;
        --v54;
      }
      while ( v54 );
      __asm
      {
        vmovaps xmm8, [rsp+1A0h+var_70]
        vmovaps xmm6, [rsp+1A0h+var_50]
      }
      if ( v82 != (_BYTE)v54 )
        LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
    }
    __asm
    {
      vmovaps xmm7, [rsp+1A0h+var_60]
      vmovaps xmm9, [rsp+1A0h+var_80]
    }
  }
}

/*
==============
CgCompassSystemMP::DrawRadarEffects
==============
*/
void CgCompassSystemMP::DrawRadarEffects(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  char v22; 
  bool v23; 
  bool v26; 
  int v46; 
  int v47; 
  const ScreenPlacement *v48; 
  char v72; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float y; 
  float ya; 
  float yb; 
  float w; 
  float wa; 
  float wb; 
  float h; 
  float ha; 
  float hb; 
  float applyParallax; 
  float applyParallaxa; 
  float v123; 
  float material; 
  float v125; 
  float v126; 
  float alphaOffset; 
  float v129; 
  float outAngle; 
  SecureVec3 out; 
  lua_State *v132; 
  LUIElement *v133; 
  __int64 v134; 
  float x; 
  float v136; 
  vec3_t outLine; 
  vec2_t outVector; 
  vec4_t quadVerts[4]; 
  char v140; 
  void *retaddr; 

  _RAX = &retaddr;
  v134 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
  }
  v133 = element;
  v132 = luaVM;
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4861, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4862, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  _RDI = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4865, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CgCompassSystemMP::IsRadarSweepEnabled(this, _RDI) )
  {
    ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    CG_CompassCalcDimensions(compassType, _RDI, parentRect, rect, &x, &v136, &v129, &alphaOffset);
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vmovss  xmm0, [rbp+0F0h+var_168]
      vcomiss xmm0, xmm8
    }
    if ( v22 | v23 )
    {
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4881, ASSERT_TYPE_SANITY, "( w > 0.0f )", (const char *)&queryFormat, "w > 0.0f");
      v22 = 0;
      v23 = !v26;
      if ( v26 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, [rbp+0F0h+alphaOffset]
      vcomiss xmm0, xmm8
    }
    if ( v22 | v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4882, ASSERT_TYPE_SANITY, "( h > 0.0f )", (const char *)&queryFormat, "h > 0.0f") )
      __debugbreak();
    if ( compassType )
    {
      if ( (unsigned int)(compassType - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4923, ASSERT_TYPE_ASSERT, "(compassType == CompassType::COMPASS_TYPE_FULL || compassType == CompassType::COMPASS_TYPE_TACMAP)", (const char *)&queryFormat, "compassType == CompassType::COMPASS_TYPE_FULL || compassType == CompassType::COMPASS_TYPE_TACMAP") )
        __debugbreak();
      __asm { vmovss  xmm6, dword ptr [rdi+0B39B4h] }
      CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      *(double *)&_XMM0 = CgCompassSystemMP::GetRadarLineMargin(this);
      __asm
      {
        vdivss  xmm2, xmm0, dword ptr [rdi+4A020h]
        vmulss  xmm1, xmm2, cs:__real@40000000
        vmovss  xmm7, cs:__real@3f800000
        vaddss  xmm0, xmm1, xmm7
        vmulss  xmm1, xmm0, xmm6
        vsubss  xmm10, xmm1, xmm2
      }
      _RDI = DVARFLT_cg_hudMapRadarLineThickness;
      if ( !DVARFLT_cg_hudMapRadarLineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapRadarLineThickness") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm6, dword ptr [rdi+28h]
        vcomiss xmm6, xmm8
      }
      if ( !(v22 | v72) )
      {
        __asm
        {
          vdivss  xmm1, xmm7, xmm6
          vmulss  xmm0, xmm1, xmm10
          vmovss  xmm9, cs:__real@3f000000
          vsubss  xmm11, xmm9, xmm0
          vsubss  xmm0, xmm7, xmm10
          vmulss  xmm1, xmm0, xmm1
          vaddss  xmm10, xmm1, xmm9
          vaddss  xmm2, xmm10, xmm11
          vmulss  xmm12, xmm2, xmm9
          vmovss  xmm0, [rbp+0F0h+alphaOffset]
          vucomiss xmm0, xmm8
        }
        if ( v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4937, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
          __debugbreak();
        __asm
        {
          vmulss  xmm0, xmm6, [rbp+0F0h+var_168]
          vdivss  xmm1, xmm0, [rbp+0F0h+alphaOffset]
          vdivss  xmm6, xmm7, xmm1
          vmulss  xmm7, xmm6, xmm9
        }
        vertAlign = rect->vertAlign;
        horzAlign = rect->horzAlign;
        ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        ScrPlace_ApplyRect(ActivePlacement, &x, &v136, &v129, &alphaOffset, horzAlign, vertAlign);
        __asm
        {
          vmovss  xmm1, [rbp+0F0h+var_134]; top
          vaddss  xmm3, xmm1, [rbp+0F0h+alphaOffset]; bottom
          vmovss  xmm0, [rbp+0F0h+x]; left
          vaddss  xmm2, xmm0, [rbp+0F0h+var_168]; right
        }
        LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
        __asm
        {
          vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmulss  xmm3, xmm6, xmm9
          vsubss  xmm0, xmm10, xmm11
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmulss  xmm2, xmm0, xmm9
          vmovss  dword ptr [rsp+1F0h+applyParallax], xmm8
          vmovss  dword ptr [rsp+1F0h+h], xmm3
          vmovss  dword ptr [rsp+1F0h+w], xmm2
          vmovss  dword ptr [rsp+1F0h+y], xmm7
          vmovss  dword ptr [rsp+1F0h+fmt], xmm12
        }
        LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)this->m_localClientNum, v133, v132, (const vec4_t (*)[4])quadVerts, fmtb, yb, wb, hb, applyParallaxa, color, cgMedia.compass_radarline);
      }
    }
    else
    {
      __asm { vmovss  xmm1, dword ptr [rdi+0B39B4h]; radarProgress }
      CgCompassSystemMP::GetRadarLine(this, *(float *)&_XMM1, &outLine);
      _RBX = DVARFLT_compassRadarLineThickness;
      if ( !DVARFLT_compassRadarLineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarLineThickness") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0F0h+out.___u0]
        vmulss  xmm3, xmm0, dword ptr [rbp+0F0h+outLine]
        vmovss  xmm1, dword ptr [rbp+0F0h+outLine+4]
        vmulss  xmm2, xmm1, dword ptr [rbp+0F0h+out.___u0+4]
        vaddss  xmm0, xmm3, xmm2
        vsubss  xmm6, xmm0, dword ptr [rbp+0F0h+outLine+8]
      }
      this->GetRange(this);
      __asm
      {
        vdivss  xmm1, xmm6, xmm0
        vmovss  xmm10, cs:__real@3f800000
        vdivss  xmm6, xmm10, xmm7
        vmulss  xmm0, xmm6, xmm1
        vmovss  xmm9, cs:__real@3f000000
        vaddss  xmm11, xmm0, xmm9
      }
      CgCompassSystem::GetCompassYaw(this, COMPASS_TYPE_PARTIAL, cropPartialMap, _RDI, &outAngle, &outVector);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+49FFCh]
        vsubss  xmm12, xmm0, [rbp+0F0h+outAngle]
        vmulss  xmm13, xmm6, xmm9
      }
      v46 = rect->vertAlign;
      v47 = rect->horzAlign;
      v48 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      ScrPlace_ApplyRect(v48, &x, &v136, &v129, &alphaOffset, v47, v46);
      __asm
      {
        vmovss  xmm1, [rbp+0F0h+var_134]; top
        vaddss  xmm3, xmm1, [rbp+0F0h+alphaOffset]; bottom
        vmovss  xmm0, [rbp+0F0h+x]; left
        vaddss  xmm2, xmm0, [rbp+0F0h+var_168]; right
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
      if ( mapMask )
      {
        LUI_Render_GetViewportSize(this->m_localClientNum, (vec2_t *)&outLine);
        __asm
        {
          vmovss  xmm4, dword ptr [rbp+0F0h+quadVerts+24h]
          vsubss  xmm7, xmm4, dword ptr [rbp+0F0h+quadVerts+4]
          vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm2, dword ptr [rbp+0F0h+quadVerts+10h]
          vsubss  xmm6, xmm2, dword ptr [rbp+0F0h+quadVerts]
          vandps  xmm3, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; maskWidth
          vaddss  xmm0, xmm4, dword ptr [rbp+0F0h+quadVerts+4]
          vmulss  xmm5, xmm0, xmm9
          vaddss  xmm1, xmm2, dword ptr [rbp+0F0h+quadVerts]
          vmulss  xmm1, xmm1, xmm9; maskCenterX
          vmovss  dword ptr [rsp+1F0h+var_190], xmm10
          vmovss  [rsp+1F0h+var_198], xmm10
          vmovss  dword ptr [rsp+1F0h+material], xmm8
          vmovss  dword ptr [rsp+1F0h+var_1A8], xmm8
          vmovss  dword ptr [rsp+1F0h+h], xmm8
          vmovss  dword ptr [rsp+1F0h+w], xmm10
          vmovss  dword ptr [rsp+1F0h+y], xmm8
          vmovss  dword ptr [rsp+1F0h+fmt], xmm7
          vmovaps xmm2, xmm5; maskCenterY
        }
        LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, y, w, h, 0, v123, material, v125, v126, (const vec2_t *)&outLine, mapMask);
      }
      __asm
      {
        vmovss  dword ptr [rsp+1F0h+applyParallax], xmm12
        vmovss  dword ptr [rsp+1F0h+h], xmm9
        vmovss  dword ptr [rsp+1F0h+w], xmm13
        vmovss  dword ptr [rsp+1F0h+y], xmm9
        vmovss  dword ptr [rsp+1F0h+fmt], xmm11
      }
      LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)this->m_localClientNum, v133, v132, (const vec4_t (*)[4])quadVerts, fmta, ya, wa, ha, applyParallax, color, cgMedia.compass_radarline);
      if ( mapMask )
        LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
    }
    memset(&out, 0, sizeof(out));
  }
  _R11 = &v140;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
  }
}

/*
==============
CgCompassSystemMP::DrawScramblers
==============
*/
void CgCompassSystemMP::DrawScramblers(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int clientNum; 
  characterInfo_t *CharacterInfo; 
  char v28; 
  int v34; 
  bool *p_isActive; 
  __int64 v39; 
  __int64 m_localClientNum; 
  CgEntitySystem *v41; 
  cg_t *v42; 
  characterInfo_t *v43; 
  team_t team; 
  team_t v45; 
  CompassType v46; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  rectDef_s *v71; 
  const dvar_t *v72; 
  float fmt; 
  float fmta; 
  vec2_t *outVector; 
  vec2_t *outVectora; 
  float outVectorb; 
  float outVectorc; 
  float *w; 
  float wa; 
  float *h; 
  float ha; 
  float outClipped; 
  float v93; 
  float v94; 
  float v95; 
  float isPixelCircle; 
  __int64 v98; 
  float v99; 
  float v100; 
  CompassType compassTypea; 
  CgStatic *LocalClientStatics; 
  vec4_t *v103; 
  rectDef_s *v104; 
  lua_State *v105; 
  LUIElement *v106; 
  rectDef_s *parentRecta; 
  float outAngle; 
  characterInfo_t *v109; 
  CgGlobalsMP *v110; 
  GfxImage *v111; 
  SecureVec3 out; 
  __int64 v113; 
  vec2_t v114; 
  rectDef_s x; 
  vec2_t north; 
  vec2_t outSize; 
  vec4_t quadVerts[4]; 
  char v119; 
  void *retaddr; 

  _RAX = &retaddr;
  v113 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  parentRecta = (rectDef_s *)parentRect;
  compassTypea = compassType;
  v104 = (rectDef_s *)rect;
  v103 = (vec4_t *)color;
  v111 = mapMask;
  v106 = element;
  v105 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v110 = LocalClientGlobals;
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(outVector) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4489, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", outVector, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( this->m_scramblersUpdated )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4498, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
      __debugbreak();
    if ( CharacterInfo->infoValid && (CharacterInfo->team != TEAM_SPECTATOR || LocalClientGlobals->m_isMLGSpectator) )
    {
      CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &north);
      *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rax+0Ch]
        vxorps  xmm8, xmm8, xmm8
        vucomiss xmm1, xmm8
      }
      if ( !v28 )
      {
        CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
        __asm
        {
          vmovss  xmm7, cs:__real@3f000000
          vmulss  xmm1, xmm7, [rbp+140h+var_128]
          vaddss  xmm11, xmm1, [rbp+140h+x]
          vmulss  xmm0, xmm7, [rbp+140h+var_124]
          vaddss  xmm12, xmm0, [rbp+140h+y]
        }
        ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        v109 = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
        CG_CalcPlayerPos(&out, this->m_localClientNum);
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (int)ComCharacterLimits::ms_gameData.m_characterCount > 248 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(h) = ComCharacterLimits::ms_gameData.m_characterCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4535, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetCharacterMaxCount() ) <= ( ((200 + 48)) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetCharacterMaxCount()", "MAX_COMPASS_ACTORS_MP", h, 248) )
            __debugbreak();
        }
        v34 = 0;
        p_isActive = &this->m_compassScramblers[0][0].isActive;
        __asm
        {
          vmovss  xmm6, [rbp+140h+boundsRadius]
          vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm9, cs:__real@3f800000
        }
        while ( 1 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( v34 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
            break;
          v39 = 4i64;
          v98 = 4i64;
          do
          {
            if ( *p_isActive )
            {
              *p_isActive = 0;
              *(_DWORD *)(p_isActive - 5) = 2047;
              m_localClientNum = this->m_localClientNum;
              if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
              {
                LODWORD(w) = this->m_localClientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", w) )
                  __debugbreak();
              }
              if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
              {
                LODWORD(w) = CgEntitySystem::ms_allocatedCount;
                LODWORD(outVectora) = m_localClientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", outVectora, w) )
                  __debugbreak();
              }
              if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
              {
                LODWORD(w) = m_localClientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", w) )
                  __debugbreak();
              }
              v41 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
              if ( (unsigned int)v34 >= 0x800 )
              {
                LODWORD(w) = 2048;
                LODWORD(outVectora) = v34;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", outVectora, w) )
                  __debugbreak();
              }
              v42 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
              if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                __debugbreak();
              if ( v42->IsMP(v42) )
              {
                if ( v34 >= v42[1].predictedPlayerState.rxvOmnvars[64].timeModified )
                {
                  LODWORD(w) = v42[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                  LODWORD(outVectora) = v34;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outVectora, w) )
                    __debugbreak();
                }
                v43 = (characterInfo_t *)(*(_QWORD *)&v42[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v34);
              }
              else
              {
                v43 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v42, v34);
              }
              team = v43->team;
              v45 = v109->team;
              if ( v110 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
                __debugbreak();
              if ( (CgEntitySystem *)((char *)v41 + 760 * v34) == (CgEntitySystem *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
                __debugbreak();
              if ( v45 && v45 == team )
              {
                __asm { vmovss  dword ptr [rsp+240h+fmt], xmm6 }
                v46 = compassTypea;
                CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, fmt, &north, (const vec2_t *)&out, (const vec2_t *)(p_isActive - 13), &v114, NULL);
                *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystemMP *, _QWORD, __int64))this->GetDrawnItemScaler)(this, (unsigned int)v46, 1i64);
                __asm
                {
                  vmulss  xmm1, xmm0, [rbp+140h+var_124]
                  vmovss  [rbp+140h+var_1AC], xmm1
                  vmovss  [rbp+140h+var_1B0], xmm1
                  vmulss  xmm2, xmm1, xmm7
                  vsubss  xmm1, xmm11, xmm2
                  vaddss  xmm1, xmm1, dword ptr [rbp+140h+var_138]
                  vmovss  dword ptr [rbp+140h+var_138], xmm1
                  vsubss  xmm2, xmm12, xmm2
                  vaddss  xmm1, xmm2, dword ptr [rbp+140h+var_138+4]
                  vmovss  dword ptr [rbp+140h+var_138+4], xmm1
                }
                vertAlign = v104->vertAlign;
                horzAlign = v104->horzAlign;
                ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
                ScrPlace_ApplyRect(ActivePlacement, (float *)&v114, (float *)&v114 + 1, &v100, &v99, horzAlign, vertAlign);
                __asm
                {
                  vmovss  xmm1, dword ptr [rbp+140h+var_138+4]; top
                  vaddss  xmm3, xmm1, [rbp+140h+var_1B0]; bottom
                  vmovss  xmm0, dword ptr [rbp+140h+var_138]; left
                  vaddss  xmm2, xmm0, [rbp+140h+var_1AC]; right
                }
                LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
                LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
                __asm
                {
                  vmovss  xmm2, dword ptr [rbp+140h+quadVerts+24h]
                  vsubss  xmm5, xmm2, dword ptr [rbp+140h+quadVerts+4]
                  vandps  xmm5, xmm5, xmm10
                  vmovss  xmm3, dword ptr [rbp+140h+quadVerts+10h]
                  vsubss  xmm4, xmm3, dword ptr [rbp+140h+quadVerts]
                  vandps  xmm4, xmm4, xmm10
                  vaddss  xmm0, xmm2, dword ptr [rbp+140h+quadVerts+4]
                  vmulss  xmm2, xmm0, xmm7; maskCenterY
                  vaddss  xmm1, xmm3, dword ptr [rbp+140h+quadVerts]
                  vmulss  xmm1, xmm1, xmm7; maskCenterX
                  vmovss  dword ptr [rsp+240h+isPixelCircle], xmm9
                  vmovss  dword ptr [rsp+240h+var_1E8], xmm9
                  vmovss  dword ptr [rsp+240h+var_1F0], xmm8
                  vmovss  dword ptr [rsp+240h+outClipped], xmm8
                  vmovss  dword ptr [rsp+240h+h], xmm8
                  vmovss  dword ptr [rsp+240h+w], xmm9
                  vmovss  dword ptr [rsp+240h+outVector], xmm8
                  vmovss  dword ptr [rsp+240h+fmt], xmm5
                  vmovaps xmm3, xmm4; maskWidth
                }
                LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, outVectorb, wa, ha, 1, outClipped, v93, v95, isPixelCircle, &outSize, (GfxImage *)cgMedia.compassping_scrambler_friendly);
                __asm { vmovaps xmm0, xmm7; glitchAmount }
                LUI_Render_PushGlitch(*(float *)&_XMM0);
                v71 = v104;
                CgCompassSystem::DrawPlayerMap(this, v46, cropPartialMap, parentRecta, v104, NULL, v103, v111, NULL, NULL, v106, v105);
                LUI_Render_PopGlitch();
                LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
                v72 = DVARBOOL_compassCUAVDrawOuterCircle;
                if ( !DVARBOOL_compassCUAVDrawOuterCircle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCUAVDrawOuterCircle") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v72);
                if ( v72->current.enabled && this->m_isBigMapMinimap )
                {
                  _RDI = DCONST_DVARFLT_compassCUAVRadius;
                  if ( !DCONST_DVARFLT_compassCUAVRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCUAVRadius") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(_RDI);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rdi+28h]
                    vmovss  dword ptr [rsp+240h+var_1F0], xmm0
                    vmovss  dword ptr [rsp+240h+outVector], xmm6
                  }
                  CgCompassSystemMP::DrawAreaMarker(this, v46, cropPartialMap, parentRecta, v71, outVectorc, &colorWhite, 1, 1, *(const vec2_t *)(p_isActive - 13), v94, cgMedia.compass_bounding_circle, 0, v106, v105);
                }
              }
              v39 = v98;
            }
            p_isActive += 16;
            v98 = --v39;
          }
          while ( v39 );
          ++v34;
        }
        this->m_scramblersUpdated = 0;
      }
    }
  }
  memset(&out, 0, sizeof(out));
  _R11 = &v119;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
}

/*
==============
CgCompassSystemMP::DrawScriptableObjectives
==============
*/
void CgCompassSystemMP::DrawScriptableObjectives(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  char v25; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  unsigned __int8 v33; 
  const ObjectiveSettings *v36; 
  const ObjectiveSettings *v37; 
  objectiveState_t state; 
  unsigned int v39; 
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v41; 
  GfxImage *icon; 
  unsigned int InstanceIndex; 
  bool v44; 
  bool v48; 
  bool v52; 
  bool v53; 
  unsigned int v62; 
  char v67; 
  const GfxImage *v68; 
  Material *objectiveMiniIconMission; 
  ObjectiveIconSize size; 
  float xa; 
  int x; 
  float *y; 
  float *w; 
  ObjectiveFlags wa; 
  float outClipped; 
  float v87; 
  float v88; 
  unsigned __int8 v89; 
  bool v91; 
  unsigned __int8 v92; 
  float v93; 
  vec3_t out_origin; 
  float outAngle; 
  unsigned int scriptableIndex; 
  cg_t *cgameGlob; 
  char *outName; 
  const vec4_t *v99; 
  lua_State *v100; 
  LUIElement *v101; 
  rectDef_s *v102; 
  SecureVec3 out; 
  __int64 v104; 
  char v105[12]; 
  vec2_t xyClipped; 
  vec2_t xy; 
  rectDef_s mapRect; 
  vec2_t outVector; 
  vec4_t v110; 
  vec4_t bgColor; 
  char v112; 
  void *retaddr; 

  _RAX = &retaddr;
  v104 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
  }
  v102 = (rectDef_s *)rect;
  v99 = color;
  v101 = element;
  v100 = luaVM;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  cgameGlob = LocalClientGlobals;
  *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  __asm
  {
    vmulss  xmm8, xmm0, dword ptr [r12+0Ch]
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm8, xmm7
  }
  if ( !v25 )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, [rbp+100h+mapRect.w]
      vaddss  xmm11, xmm1, [rbp+100h+mapRect.x]
      vmulss  xmm0, xmm3, [rbp+100h+mapRect.h]
      vaddss  xmm12, xmm0, [rbp+100h+mapRect.y]
    }
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6305, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
    {
      CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v92 = ScriptableCl_ObjectiveCount((const LocalClientNum_t)this->m_localClientNum);
      v33 = 0;
      v89 = 0;
      if ( v92 )
      {
        __asm
        {
          vmovss  xmm10, [rbp+100h+boundsRadius]
          vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        }
        do
        {
          v36 = ScriptableCl_ObjectiveGet((const LocalClientNum_t)this->m_localClientNum, v33, &out_origin);
          v37 = v36;
          if ( v36 )
          {
            state = v36->state;
            if ( state == OBJST_ACTIVE || state == OBJST_CURRENT )
            {
              v39 = v37->icon;
              CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
              v41 = CurrentValidLocalClient;
              if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT )
              {
                LODWORD(w) = 2;
                LODWORD(y) = CurrentValidLocalClient;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, w) )
                  __debugbreak();
              }
              if ( clientUIActives[v41].connectionState == CA_ACTIVE )
              {
                if ( v39 )
                {
                  if ( NetConstStrings_AreStringsLoaded() && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, v39, (const char **)&outName) )
                  {
                    icon = Image_Register(outName, IMAGE_TRACK_HUD);
                    InstanceIndex = ScriptableCl_ObjectiveGetInstanceIndex((const LocalClientNum_t)this->m_localClientNum, v89);
                    scriptableIndex = InstanceIndex;
                    v44 = CG_CalloutMarkerPing_CheckSquadPingsForTarget(this->m_localClientNum, 2047, InstanceIndex, -1) != 53;
                    if ( !this->IsObjectiveFiltered(this, compassType, v37->background) || v44 )
                    {
                      __asm
                      {
                        vxorps  xmm1, xmm1, xmm1
                        vcvtsi2ss xmm1, xmm1, dword ptr [rsi+4]
                        vaddss  xmm1, xmm1, dword ptr [rbp+100h+out_origin+8]
                        vmovss  dword ptr [rbp+100h+out_origin+8], xmm1
                        vmovss  dword ptr [rbp+100h+xy], xmm7
                        vmovss  dword ptr [rbp+100h+xy+4], xmm7
                        vmovss  dword ptr [rbp+100h+xyClipped], xmm7
                        vmovss  dword ptr [rbp+100h+xyClipped+4], xmm7
                        vmovss  dword ptr [rsp+210h+x], xmm10
                      }
                      v48 = CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &mapRect, xa, &outVector, (const vec2_t *)&out, (const vec2_t *)&out_origin, &xy, &xyClipped);
                      v91 = v48;
                      __asm
                      {
                        vaddss  xmm1, xmm11, dword ptr [rbp+100h+xy]
                        vmovss  dword ptr [rbp+100h+xy], xmm1
                        vaddss  xmm0, xmm12, dword ptr [rbp+100h+xy+4]
                        vmovss  dword ptr [rbp+100h+xy+4], xmm0
                        vaddss  xmm2, xmm11, dword ptr [rbp+100h+xyClipped]
                        vmovss  dword ptr [rbp+100h+xyClipped], xmm2
                        vaddss  xmm1, xmm12, dword ptr [rbp+100h+xyClipped+4]
                        vmovss  dword ptr [rbp+100h+xyClipped+4], xmm1
                      }
                      v52 = (*(_WORD *)v37->flags & 0x800) != 0;
                      if ( compassType == COMPASS_TYPE_PARTIAL )
                      {
                        v53 = (*(_WORD *)v37->flags & 0x800) != 0;
                        if ( v44 )
                          v53 = 0;
                        v52 = v53;
                      }
                      if ( !v48 || !v52 )
                      {
                        __asm { vmovss  [rbp+100h+var_178], xmm7 }
                        if ( (v37->flags[0] & 1) != 0 )
                        {
                          ScriptableCl_GetInstanceAngles((const LocalClientNum_t)this->m_localClientNum, InstanceIndex);
                          if ( compassType || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation") || cropPartialMap )
                          {
                            _R15 = cgameGlob;
                            __asm
                            {
                              vmovss  xmm0, dword ptr [r15+49FFCh]
                              vsubss  xmm0, xmm0, dword ptr [rdi+4]; angle
                            }
                            *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
                            __asm { vmovss  [rbp+100h+var_178], xmm0 }
                            if ( _R15->m_isMLGSpectator )
                            {
                              if ( this->MapShouldRotate(this) )
                              {
                                this->MapRotationFactor(this);
                                __asm
                                {
                                  vmovss  xmm1, [rbp+100h+var_178]
                                  vsubss  xmm0, xmm1, xmm0
                                  vmovss  [rbp+100h+var_178], xmm0
                                }
                              }
                              else
                              {
                                __asm { vmovss  xmm0, [rbp+100h+var_178] }
                              }
                            }
                          }
                          else
                          {
                            __asm
                            {
                              vmovss  xmm0, [rbp+100h+outAngle]
                              vsubss  xmm0, xmm0, dword ptr [rdi+4]; angle
                            }
                            *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
                            __asm { vmovss  [rbp+100h+var_178], xmm0 }
                            _R15 = cgameGlob;
                          }
                          __asm { vmovaps xmm3, xmm0; in }
                          CgCompassSystem::WorldYawToCompass(this, compassType, _R15, *(const float *)&_XMM3, &v93);
                        }
                        LOBYTE(x) = v37->background;
                        this->GetObjectiveCompassColor(this, &out_origin, NEUTRAL, NEUTRAL, (ObjectiveBackground)x, 2047, &v110, &bgColor, v99);
                        __asm
                        {
                          vmovss  xmm1, dword ptr [rbp+100h+var_D0+0Ch]
                          vcmpltss xmm0, xmm8, xmm1
                          vblendvps xmm0, xmm1, xmm8, xmm0
                          vmovss  dword ptr [rbp+100h+var_D0+0Ch], xmm0
                        }
                        v62 = 0;
                        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_compassPrototypeElevation, "compassPrototypeElevation") && (*(_WORD *)v37->flags & 0x1000) == 0 )
                        {
                          __asm
                          {
                            vxorps  xmm1, xmm1, xmm1
                            vcvtsi2ss xmm1, xmm1, dword ptr [rsi+4]
                            vmovss  xmm0, dword ptr [rbp+100h+out_origin+8]
                            vsubss  xmm1, xmm0, xmm1
                            vsubss  xmm6, xmm1, dword ptr [r15+40h]
                          }
                          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassEnemyHeightDelta, "compassEnemyHeightDelta");
                          __asm
                          {
                            vandps  xmm1, xmm6, xmm9
                            vcomiss xmm1, xmm0
                          }
                          if ( !v67 )
                          {
                            __asm { vcomiss xmm6, xmm7 }
                            LOBYTE(v62) = 1;
                            ++v62;
                          }
                        }
                        v68 = this->GetObjectiveBackgroundImage(this, (unsigned __int8)v37->background, v62);
                        if ( this->IsObjectiveMini(this, compassType, v37->background) && !v44 )
                        {
                          v68 = NULL;
                          objectiveMiniIconMission = cgMedia.objectiveMiniIconMission;
                          if ( v37->background != EASE_IN_OUT_QUAD )
                            objectiveMiniIconMission = cgMedia.objectiveMiniIconPOI;
                          icon = objectiveMiniIconMission->textureTable->image;
                        }
                        if ( (*(_WORD *)v37->flags & 0x2000) != 0 && this->IsVehicleMini(this, compassType) )
                          icon = (GfxImage *)cgMedia.objectiveMiniIconVehicle;
                        __asm { vmovaps xmm6, xmm7 }
                        if ( compassType == COMPASS_TYPE_TACMAP && CG_CalloutMarkerPing_TacmapIsLookingAtScriptable(this->m_localClientNum, scriptableIndex) )
                        {
                          *(double *)&_XMM0 = CG_CalloutMarkerPing_GetTacmapLookAtScale(this->m_localClientNum);
                          __asm { vmovaps xmm6, xmm0 }
                        }
                        size = OBJ_ICON_SIZE_LARGE;
                        if ( (*(_WORD *)v37->flags & 2) == 0 )
                          size = v37->size;
                        __asm
                        {
                          vmovss  dword ptr [rsp+210h+var_1B8], xmm7
                          vmovss  [rsp+210h+var_1C0], xmm6
                          vmovss  xmm0, [rbp+100h+var_178]
                          vmovss  dword ptr [rsp+210h+outClipped], xmm0
                        }
                        LOWORD(wa) = *(_WORD *)v37->flags;
                        CgCompassSystemMP::DrawObjective(this, compassType, v102, &xy, &xyClipped, v91, wa, size, v68, outClipped, v87, v88, icon, &v110, &bgColor, v101, v100);
                      }
                    }
                  }
                }
              }
            }
          }
          v33 = v89 + 1;
          v89 = v33;
        }
        while ( v33 < v92 );
      }
    }
  }
  memset(&out, 0, sizeof(out));
  memset(v105, 0, sizeof(v105));
  memset(&out_origin, 0, sizeof(out_origin));
  _R11 = &v112;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
CgCompassSystemMP::DrawSelectionCursor
==============
*/
void CgCompassSystemMP::DrawSelectionCursor(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, Material *material, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgCompassSystem *CompassSystem; 
  LocalClientNum_t m_localClientNum; 
  char v55; 
  char v56; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v62; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *v101; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float y; 
  int ya; 
  float yb; 
  int yc; 
  float yd; 
  int ye; 
  float yf; 
  float yg; 
  float w; 
  int wa; 
  float wb; 
  int wc; 
  float wd; 
  int we; 
  float wf; 
  float wg; 
  float h; 
  float ha; 
  float hb; 
  float hc; 
  float hd; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 
  float v162; 
  float v163; 
  float v164; 
  float v165; 
  float quadLength; 
  float width; 
  float quadAngle; 
  float v169; 
  float v170; 
  float v171; 
  float v172; 
  float quadPositionX; 
  float quadPositionY; 
  vec2_t position2; 
  vec2_t position1; 
  float x; 
  float v178; 
  float v179; 
  float vMin[3]; 
  vec4_t v181; 
  vec4_t quadVerts[4]; 

  _RSI = this;
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4651, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4652, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)_RSI->m_localClientNum);
  if ( CL_Keys_IsCatcherActive(_RSI->m_localClientNum, 16) )
  {
    __asm
    {
      vmovaps [rsp+220h+var_50], xmm6
      vmovaps [rsp+220h+var_60], xmm7
      vmovaps [rsp+220h+var_70], xmm8
      vmovaps [rsp+220h+var_80], xmm9
      vmovaps [rsp+220h+var_90], xmm10
      vmovaps [rsp+220h+var_A0], xmm11
      vmovaps [rsp+220h+var_B0], xmm12
      vmovaps [rsp+220h+var_C0], xmm13
      vmovaps [rsp+220h+var_D0], xmm14
      vmovaps [rsp+220h+var_E0], xmm15
    }
    CG_CompassCalcDimensions(compassType, _RBX, parentRect, rect, &x, &v178, &v179, vMin);
    _R14 = color;
    __asm
    {
      vmovss  xmm8, cs:__real@40000000
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm10, cs:__real@3f000000
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbp+110h+var_140], xmm0
      vmovss  xmm0, cs:__real@42000000
      vmovss  [rbp+110h+var_17C], xmm0
      vmovss  [rbp+110h+var_178], xmm0
      vmovaps xmm3, xmm0
    }
    if ( compassType == COMPASS_TYPE_TACMAP )
    {
      __asm { vmovss  xmm6, dword ptr [rsi+20h] }
      CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)_RSI->m_localClientNum);
      CgCompassSystem::GetTacmapMapCenter(CompassSystem);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4A084h]
        vdivss  xmm4, xmm8, xmm6
        vsubss  xmm1, xmm0, dword ptr [rax]
        vmovss  xmm0, dword ptr [rbx+4A088h]
        vmulss  xmm2, xmm1, xmm4
        vsubss  xmm1, xmm0, dword ptr [rax+4]
        vmovss  xmm0, [rbp+110h+var_17C]
        vaddss  xmm3, xmm2, xmm9
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm5, xmm3, xmm10
        vaddss  xmm3, xmm2, xmm9
        vmulss  xmm2, xmm3, xmm10
        vmovss  xmm3, [rbp+110h+var_178]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rbx+4A084h]
        vmovss  xmm2, dword ptr [rbx+4A088h]
      }
    }
    __asm
    {
      vmulss  xmm1, xmm5, [rbp+110h+var_150]
      vmovss  xmm7, [rbp+110h+x]
    }
    m_localClientNum = _RSI->m_localClientNum;
    __asm
    {
      vaddss  xmm1, xmm1, xmm7
      vmulss  xmm11, xmm0, xmm10
      vsubss  xmm4, xmm1, xmm11
      vmulss  xmm1, xmm2, [rbp+110h+vMin]
      vaddss  xmm2, xmm1, [rbp+110h+var_154]
      vmulss  xmm12, xmm3, xmm10
      vsubss  xmm3, xmm2, xmm12
      vaddss  xmm0, xmm3, xmm12
      vsubss  xmm6, xmm4, xmm8
      vmovss  dword ptr [rbp+110h+position2+4], xmm0
      vmovss  dword ptr [rbp+110h+position1+4], xmm0
      vmovss  [rbp+110h+var_180], xmm4
      vmovss  [rbp+110h+var_184], xmm3
      vmovss  dword ptr [rbp+110h+position2], xmm6
      vmovss  dword ptr [rbp+110h+position1], xmm7
      vmovss  [rbp+110h+width], xmm8
    }
    ActivePlacement = ScrPlace_GetActivePlacement(m_localClientNum);
    __asm
    {
      vmovss  xmm13, dword ptr [r14]
      vmovss  xmm14, dword ptr [r14+4]
      vmovss  xmm15, dword ptr [r14+8]
      vcomiss xmm6, xmm7
      vmovaps xmm7, [rsp+220h+var_60]
    }
    v62 = ActivePlacement;
    __asm
    {
      vmovaps xmm6, [rsp+220h+var_50]
      vxorps  xmm10, xmm10, xmm10
    }
    if ( !(v55 | v56) )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(_RSI, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      ScrPlace_ApplyRect(v62, &quadPositionX, &quadPositionY, &quadLength, &width, rect->horzAlign, rect->vertAlign);
      __asm
      {
        vmovss  xmm0, [rbp+110h+quadAngle]
        vmovss  xmm3, [rbp+110h+quadPositionY]; centerY
        vmovss  xmm2, [rbp+110h+quadPositionX]; centerX
        vmovss  [rsp+220h+var_1B0], xmm9
        vmovss  [rsp+220h+var_1B8], xmm15
        vmovss  [rsp+220h+var_1C0], xmm14
        vmovss  [rsp+220h+var_1C8], xmm13
        vmovss  [rsp+220h+var_1D0], xmm0
        vmovss  xmm0, [rbp+110h+quadLength]
        vmovss  dword ptr [rsp+220h+var_1D8], xmm9
        vmovss  dword ptr [rsp+220h+var_1E0], xmm9
        vmovss  dword ptr [rsp+220h+h], xmm10
        vmovss  dword ptr [rsp+220h+w], xmm10
        vmovss  dword ptr [rsp+220h+y], xmm8
        vmovss  dword ptr [rsp+220h+fmt], xmm0
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)_RSI->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmt, y, w, h, v138, v142, v146, v150, v154, v158, v162, _RSI->m_uiTravelLineMaterial, luaVM);
    }
    __asm
    {
      vmovss  xmm4, [rbp+110h+var_180]
      vaddss  xmm0, xmm4, [rbp+110h+var_17C]
      vmovss  xmm5, [rbp+110h+var_184]
      vaddss  xmm3, xmm0, xmm8
      vmovss  xmm0, [rbp+110h+var_150]
      vaddss  xmm1, xmm0, [rbp+110h+x]
      vcomiss xmm3, xmm1
      vaddss  xmm2, xmm12, xmm5
      vmovaps xmm12, [rsp+220h+var_B0]
      vmovss  dword ptr [rbp+110h+position2], xmm3
      vmovss  dword ptr [rbp+110h+position2+4], xmm2
      vmovss  dword ptr [rbp+110h+position1], xmm1
      vmovss  dword ptr [rbp+110h+position1+4], xmm2
    }
    if ( v55 )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(_RSI, position2, position1, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      wa = rect->vertAlign;
      ya = rect->horzAlign;
      __asm { vmovss  [rbp+110h+width], xmm8 }
      ScrPlace_ApplyRect(v62, &quadPositionX, &quadPositionY, &quadLength, &width, ya, wa);
      __asm
      {
        vmovss  xmm0, [rbp+110h+quadAngle]
        vmovss  xmm3, [rbp+110h+quadPositionY]; centerY
        vmovss  xmm2, [rbp+110h+quadPositionX]; centerX
        vmovss  [rsp+220h+var_1B0], xmm9
        vmovss  [rsp+220h+var_1B8], xmm15
        vmovss  [rsp+220h+var_1C0], xmm14
        vmovss  [rsp+220h+var_1C8], xmm13
        vmovss  [rsp+220h+var_1D0], xmm0
        vmovss  xmm0, [rbp+110h+quadLength]
        vmovss  dword ptr [rsp+220h+var_1D8], xmm9
        vmovss  dword ptr [rsp+220h+var_1E0], xmm9
        vmovss  dword ptr [rsp+220h+h], xmm10
        vmovss  dword ptr [rsp+220h+w], xmm10
        vmovss  dword ptr [rsp+220h+y], xmm8
        vmovss  dword ptr [rsp+220h+fmt], xmm0
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)_RSI->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmta, yb, wb, ha, v139, v143, v147, v151, v155, v159, v163, _RSI->m_uiTravelLineMaterial, luaVM);
      __asm
      {
        vmovss  xmm4, [rbp+110h+var_180]
        vmovss  xmm5, [rbp+110h+var_184]
      }
    }
    __asm
    {
      vmovss  xmm3, [rbp+110h+var_154]
      vsubss  xmm1, xmm5, xmm8
      vcomiss xmm1, xmm3
      vaddss  xmm0, xmm11, xmm4
      vmovss  dword ptr [rbp+110h+position2], xmm0
      vmovss  dword ptr [rbp+110h+position2+4], xmm1
      vmovss  dword ptr [rbp+110h+position1], xmm0
      vmovss  dword ptr [rbp+110h+position1+4], xmm3
    }
    if ( !(v55 | v56) )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(_RSI, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      wc = rect->vertAlign;
      yc = rect->horzAlign;
      __asm { vmovss  [rbp+110h+width], xmm8 }
      ScrPlace_ApplyRect(v62, &quadPositionX, &quadPositionY, &quadLength, &width, yc, wc);
      __asm
      {
        vmovss  xmm0, [rbp+110h+quadAngle]
        vmovss  xmm3, [rbp+110h+quadPositionY]; centerY
        vmovss  xmm2, [rbp+110h+quadPositionX]; centerX
        vmovss  [rsp+220h+var_1B0], xmm9
        vmovss  [rsp+220h+var_1B8], xmm15
        vmovss  [rsp+220h+var_1C0], xmm14
        vmovss  [rsp+220h+var_1C8], xmm13
        vmovss  [rsp+220h+var_1D0], xmm0
        vmovss  xmm0, [rbp+110h+quadLength]
        vmovss  dword ptr [rsp+220h+var_1D8], xmm9
        vmovss  dword ptr [rsp+220h+var_1E0], xmm9
        vmovss  dword ptr [rsp+220h+h], xmm10
        vmovss  dword ptr [rsp+220h+w], xmm10
        vmovss  dword ptr [rsp+220h+y], xmm8
        vmovss  dword ptr [rsp+220h+fmt], xmm0
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)_RSI->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, yd, wd, hb, v140, v144, v148, v152, v156, v160, v164, _RSI->m_uiTravelLineMaterial, luaVM);
      __asm
      {
        vmovss  xmm3, [rbp+110h+var_154]
        vmovss  xmm4, [rbp+110h+var_180]
        vmovss  xmm5, [rbp+110h+var_184]
      }
    }
    __asm
    {
      vaddss  xmm0, xmm5, [rbp+110h+var_17C]
      vaddss  xmm1, xmm11, xmm4
      vmovaps xmm11, [rsp+220h+var_A0]
      vaddss  xmm2, xmm0, xmm8
      vmovss  dword ptr [rbp+110h+position2], xmm1
      vmovss  dword ptr [rbp+110h+position1], xmm1
      vaddss  xmm1, xmm3, [rbp+110h+vMin]
      vcomiss xmm2, xmm1
      vmovss  dword ptr [rbp+110h+position2+4], xmm2
      vmovss  dword ptr [rbp+110h+position1+4], xmm1
    }
    if ( v55 )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(_RSI, position2, position1, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      we = rect->vertAlign;
      ye = rect->horzAlign;
      __asm { vmovss  [rbp+110h+width], xmm8 }
      ScrPlace_ApplyRect(v62, &quadPositionX, &quadPositionY, &quadLength, &width, ye, we);
      __asm
      {
        vmovss  xmm0, [rbp+110h+quadAngle]
        vmovss  xmm3, [rbp+110h+quadPositionY]; centerY
        vmovss  xmm2, [rbp+110h+quadPositionX]; centerX
        vmovss  [rsp+220h+var_1B0], xmm9
        vmovss  [rsp+220h+var_1B8], xmm15
        vmovss  [rsp+220h+var_1C0], xmm14
        vmovss  [rsp+220h+var_1C8], xmm13
        vmovss  [rsp+220h+var_1D0], xmm0
        vmovss  xmm0, [rbp+110h+quadLength]
        vmovss  dword ptr [rsp+220h+var_1D8], xmm9
        vmovss  dword ptr [rsp+220h+var_1E0], xmm9
        vmovss  dword ptr [rsp+220h+h], xmm10
        vmovss  dword ptr [rsp+220h+w], xmm10
        vmovss  dword ptr [rsp+220h+y], xmm8
        vmovss  dword ptr [rsp+220h+fmt], xmm0
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)_RSI->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, yf, wf, hc, v141, v145, v149, v153, v157, v161, v165, _RSI->m_uiTravelLineMaterial, luaVM);
    }
    vertAlign = rect->vertAlign;
    horzAlign = rect->horzAlign;
    v101 = ScrPlace_GetActivePlacement((const LocalClientNum_t)_RSI->m_localClientNum);
    ScrPlace_ApplyRect(v101, &v170, &v169, &v171, &v172, horzAlign, vertAlign);
    __asm
    {
      vmovss  xmm1, [rbp+110h+var_184]; top
      vmovss  xmm0, [rbp+110h+var_180]; left
      vaddss  xmm3, xmm1, [rbp+110h+var_178]; bottom
      vaddss  xmm2, xmm0, [rbp+110h+var_17C]; right
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  dword ptr [rsp+220h+h], xmm9
      vmovss  dword ptr [rsp+220h+w], xmm9
      vmovss  dword ptr [rsp+220h+y], xmm10
      vmovss  dword ptr [rsp+220h+fmt], xmm10
    }
    LUI_Render_DrawImage((const LocalClientNum_t)_RSI->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, fmtd, yg, wg, hd, &v181, _RSI->m_uiMapPingCrosshair);
    __asm
    {
      vmovaps xmm15, [rsp+220h+var_E0]
      vmovaps xmm14, [rsp+220h+var_D0]
      vmovaps xmm13, [rsp+220h+var_C0]
      vmovaps xmm10, [rsp+220h+var_90]
      vmovaps xmm9, [rsp+220h+var_80]
      vmovaps xmm8, [rsp+220h+var_70]
    }
  }
}

/*
==============
CgCompassSystemMP::DrawText
==============
*/
void CgCompassSystemMP::DrawText(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *rect, const char *locString, int fontIndex, float x, float y, float h, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  LUIElement *v13; 
  lua_State *v14; 
  const char *String; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  GfxFont *v21; 
  int vertAlign; 
  LocalClientNum_t m_localClientNum; 
  const ScreenPlacement *v26; 
  int fontSize; 
  float v36; 
  float w[4]; 
  vec4_t verts[4]; 

  v13 = element;
  v14 = luaVM;
  String = SEH_StringEd_GetString(locString);
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
  __asm { vmovss  xmm2, cs:__real@3f800000; scale }
  FontHandle = UI_GetFontHandle(ActivePlacement, fontIndex, *(float *)&_XMM2);
  __asm { vcvttss2si r9d, [rsp+108h+h]; textHeight }
  v21 = FontHandle;
  R_TextWidth(String, 0, FontHandle, _ER9);
  vertAlign = rect->vertAlign;
  m_localClientNum = this->m_localClientNum;
  LODWORD(rect) = rect->horzAlign;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  [rsp+108h+w], xmm0
  }
  v26 = ScrPlace_GetActivePlacement(m_localClientNum);
  ScrPlace_ApplyRect(v26, &x, &y, w, &h, (int)rect, vertAlign);
  __asm
  {
    vmovss  xmm0, [rsp+108h+w]
    vmulss  xmm4, xmm0, cs:__real@3f000000
    vmovss  xmm0, [rsp+108h+x]
    vmovss  xmm1, [rsp+108h+y]; top
    vaddss  xmm3, xmm1, [rsp+108h+h]; bottom
    vaddss  xmm2, xmm4, xmm0; right
    vsubss  xmm0, xmm0, xmm4; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vcvttss2si eax, [rsp+108h+h]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+108h+var_C0], xmm0
  }
  LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, v14, v13, (const vec4_t (*)[4])verts, &colorWhite, v21, String, 0, 0, v36, fontSize, NULL, NULL);
}

/*
==============
CgCompassSystemMP::DrawTurrets
==============
*/
void CgCompassSystemMP::DrawTurrets(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  char v30; 
  char v31; 
  __int64 v37; 
  CompassTurretMP *v41; 
  int time; 
  int lastUpdateTime; 
  int v44; 
  centity_t *Entity; 
  int v46; 
  const GfxImage **p_enemy_firing; 
  int firePingTime; 
  const dvar_t *v53; 
  int v58; 
  int radarPingTime; 
  const dvar_t *v60; 
  int v66; 
  __int64 v67; 
  bool v69; 
  BOOL v70; 
  const dvar_t *v71; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v81; 
  const dvar_t *v86; 
  bool v92; 
  lua_State *v96; 
  LUIElement *v97; 
  const GfxImage **v98; 
  bool v104; 
  float fmt; 
  float fmta; 
  float outVector; 
  float w; 
  float h; 
  float v121; 
  float outClipped; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float width; 
  bool v129; 
  CompassType compassTypea; 
  int v132; 
  LUIElement *v133; 
  lua_State *v134; 
  float outAngle; 
  const GfxImage **p_friendly; 
  const GfxImage **p_friendly_firing; 
  CompassTurretMedia *turretMedia; 
  const GfxImage **v139; 
  cg_t *cgameGlob; 
  __int64 v141; 
  __int64 v142; 
  const rectDef_s *v143; 
  SecureVec3 out; 
  __int64 v145; 
  float v146; 
  float v147; 
  vec2_t v1; 
  rectDef_s x; 
  vec2_t north; 
  vec2_t v0; 
  char v152; 
  void *retaddr; 

  _RAX = &retaddr;
  v145 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  v129 = cropPartialMap;
  compassTypea = compassType;
  v143 = rect;
  v133 = element;
  v134 = luaVM;
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4042, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4043, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  cgameGlob = LocalClientGlobals;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4046, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4047, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4052, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  if ( CharacterInfo->infoValid && (LocalClientGlobals->m_isMLGSpectator || CharacterInfo->team != TEAM_SPECTATOR) )
  {
    *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
    __asm
    {
      vmulss  xmm12, xmm0, dword ptr [rax+0Ch]
      vxorps  xmm10, xmm10, xmm10
      vcomiss xmm12, xmm10
    }
    if ( !(v30 | v31) )
    {
      CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &north);
      CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
      __asm
      {
        vmovss  xmm3, cs:__real@3f000000
        vmulss  xmm1, xmm3, [rbp+130h+var_110]
        vaddss  xmm15, xmm1, [rbp+130h+x]
        vmulss  xmm0, xmm3, [rbp+130h+var_10C]
        vaddss  xmm6, xmm0, [rbp+130h+y]
        vmovss  [rbp+130h+var_1A8], xmm6
      }
      ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v37 = 0i64;
      v141 = 0i64;
      v142 = 32i64;
      __asm
      {
        vmovss  xmm13, cs:__real@447a0000
        vmovss  xmm14, cs:__real@3a83126f
        vmovss  xmm11, cs:__real@3f800000
      }
      do
      {
        v41 = &this->m_compassTurrets[v37];
        if ( CG_CompassMP_TurretIsAlwaysVisibleAndValid(this->m_localClientNum, v41) )
        {
          time = LocalClientGlobals->time;
          lastUpdateTime = v41->lastUpdateTime;
          if ( lastUpdateTime <= time )
          {
            if ( lastUpdateTime && lastUpdateTime >= time - 500 )
            {
              v44 = 1;
              goto LABEL_25;
            }
          }
          else
          {
            v41->lastUpdateTime = 0;
          }
        }
        v44 = 0;
LABEL_25:
        v132 = v44;
        Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v41->entityNum);
        if ( (Entity->flags & 1) == 0 )
          goto LABEL_109;
        v46 = Entity->nextState.lerp.u.anonymous.data[5];
        if ( (v46 & 8) != 0 )
        {
          p_friendly = &cgMedia.compass.turretMedia[1].friendly;
          p_friendly_firing = &cgMedia.compass.turretMedia[1].friendly_firing;
          turretMedia = &cgMedia.compass.turretMedia[1];
          p_enemy_firing = &cgMedia.compass.turretMedia[1].enemy_firing;
        }
        else if ( (v46 & 0x10) != 0 )
        {
          p_friendly = &cgMedia.compass.turretMedia[2].friendly;
          p_friendly_firing = &cgMedia.compass.turretMedia[2].friendly_firing;
          turretMedia = &cgMedia.compass.turretMedia[2];
          p_enemy_firing = &cgMedia.compass.turretMedia[2].enemy_firing;
        }
        else
        {
          p_friendly = &cgMedia.compass.turretMedia[0].friendly;
          p_friendly_firing = &cgMedia.compass.turretMedia[0].friendly_firing;
          turretMedia = cgMedia.compass.turretMedia;
          p_enemy_firing = &cgMedia.compass.turretMedia[0].enemy_firing;
        }
        v139 = p_enemy_firing;
        _RDI = DVARFLT_compassSoundPingFadeTime;
        if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vcomiss xmm0, xmm10
        }
        if ( v30 | v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4099, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassSoundPingFadeTime, \"compassSoundPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassSoundPingFadeTime ) > 0.0f") )
          __debugbreak();
        _RDI = DVARFLT_compassRadarPingFadeTime;
        if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vcomiss xmm0, xmm10
        }
        if ( v30 | v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4100, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
          __debugbreak();
        firePingTime = v41->firePingTime;
        if ( firePingTime <= 0 || firePingTime > LocalClientGlobals->time )
          goto LABEL_53;
        v53 = DVARFLT_compassSoundPingFadeTime;
        if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v53);
        __asm
        {
          vmulss  xmm2, xmm13, dword ptr [rdi+28h]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [r12+0Ch]
          vaddss  xmm3, xmm2, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rsi+65ECh]
          vcomiss xmm3, xmm0
        }
        if ( v30 )
LABEL_53:
          v58 = 0;
        else
          v58 = 1;
        radarPingTime = v41->radarPingTime;
        if ( radarPingTime <= 0 || radarPingTime > LocalClientGlobals->time )
          goto LABEL_61;
        v60 = DVARFLT_compassRadarPingFadeTime;
        if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v60);
        __asm
        {
          vmulss  xmm2, xmm13, dword ptr [rdi+28h]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [r12+34h]
          vaddss  xmm3, xmm2, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rsi+65ECh]
          vcomiss xmm3, xmm0
        }
        if ( v30 )
LABEL_61:
          v66 = 0;
        else
          v66 = 1;
        if ( !v58 && !v66 && !v44 )
          goto LABEL_109;
        v67 = 16i64;
        if ( !v44 )
          v67 = 28i64;
        __asm
        {
          vmovss  xmm0, [rbp+130h+boundsRadius]
          vmovss  dword ptr [rsp+240h+fmt], xmm0
        }
        v69 = CgCompassSystem::WorldPosToCompass(this, compassTypea, v129, &x, fmt, &north, (const vec2_t *)&out, (const vec2_t *)((char *)v41 + v67), &v0, &v1);
        v70 = v69;
        if ( v69 )
        {
          v71 = DVARBOOL_compassClampIcons;
          if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v71);
          if ( !v71->current.enabled )
          {
            LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
            goto LABEL_109;
          }
        }
        CalcCompassFriendlySize(compassTypea, &v146, &v147);
        __asm
        {
          vaddss  xmm1, xmm15, dword ptr [rbp+130h+v1]
          vmovss  dword ptr [rbp+130h+v1], xmm1
          vaddss  xmm0, xmm6, dword ptr [rbp+130h+v1+4]
          vmovss  dword ptr [rbp+130h+v1+4], xmm0
        }
        if ( v70 )
        {
          *(double *)&_XMM0 = CalcCompassClippedDistanceScale(&v0, &v1, 0);
          __asm
          {
            vmulss  xmm2, xmm0, [rbp+130h+var_128]
            vmovss  [rbp+130h+var_128], xmm2
            vmulss  xmm0, xmm0, [rbp+130h+var_124]
            vmovss  [rbp+130h+var_124], xmm0
          }
        }
        vertAlign = v143->vertAlign;
        horzAlign = v143->horzAlign;
        ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        ScrPlace_ApplyRect(ActivePlacement, (float *)&v1, (float *)&v1 + 1, &v146, &v147, horzAlign, vertAlign);
        __asm
        {
          vmovss  xmm0, [rbp+130h+outAngle]
          vsubss  xmm0, xmm0, dword ptr [r12+rsi*4+28h]; angle
        }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm { vmovss  [rbp+130h+width], xmm0 }
        LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
        if ( cgameGlob->m_isMLGSpectator )
        {
          if ( this->MapShouldRotate(this) )
          {
            this->MapRotationFactor(this);
            __asm
            {
              vmovss  xmm1, [rbp+130h+width]
              vsubss  xmm0, xmm1, xmm0
              vmovss  [rbp+130h+width], xmm0
            }
          }
          else
          {
            __asm { vmovss  xmm0, [rbp+130h+width] }
          }
        }
        __asm { vmovaps xmm3, xmm0; in }
        CgCompassSystem::WorldYawToCompass(this, compassTypea, LocalClientGlobals, *(const float *)&_XMM3, &width);
        if ( v58 )
        {
          v81 = DVARFLT_compassSoundPingFadeTime;
          if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v81);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vdivss  xmm0, xmm14, dword ptr [rdi+28h]
            vmulss  xmm1, xmm1, xmm0
            vsubss  xmm9, xmm11, xmm1
          }
        }
        else
        {
          __asm { vmovaps xmm9, xmm10 }
        }
        if ( v66 )
        {
          v86 = DVARFLT_compassRadarPingFadeTime;
          if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v86);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vdivss  xmm0, xmm14, dword ptr [rdi+28h]
            vmulss  xmm1, xmm1, xmm0
            vsubss  xmm2, xmm11, xmm1
          }
        }
        else
        {
          __asm { vmovaps xmm2, xmm10 }
        }
        if ( v41->isFriendly )
        {
          v92 = !this->m_isUsingCustomCodCasterFriendlyColor;
          if ( this->m_isUsingCustomCodCasterFriendlyColor && (v92 = !LocalClientGlobals->m_isMLGSpectator, LocalClientGlobals->m_isMLGSpectator) )
          {
            __asm
            {
              vmovss  xmm6, dword ptr cs:xmmword_147FA89B0
              vmovss  xmm7, dword ptr cs:xmmword_147FA89B0+4
              vmovss  xmm8, dword ptr cs:xmmword_147FA89B0+8
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm6, dword ptr cs:friendlyColors
              vmovss  xmm7, dword ptr cs:friendlyColors+4
              vmovss  xmm8, dword ptr cs:friendlyColors+8
            }
          }
          v96 = v134;
          v97 = v133;
          __asm
          {
            vcomiss xmm9, xmm11
            vcomiss xmm9, xmm10
          }
          if ( v92 )
            goto LABEL_98;
          v98 = p_friendly_firing;
        }
        else
        {
          if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
          {
            __asm
            {
              vmovss  xmm6, dword ptr cs:xmmword_147FA8A20
              vmovss  xmm7, dword ptr cs:xmmword_147FA8A20+4
              vmovss  xmm8, dword ptr cs:xmmword_147FA8A20+8
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm6, dword ptr cs:enemyColors
              vmovss  xmm7, dword ptr cs:enemyColors+4
              vmovss  xmm8, dword ptr cs:enemyColors+8
            }
          }
          v104 = v132 == 0;
          if ( v132 || (v104 = v66 == 0, v66) )
            __asm { vcomiss xmm9, xmm11 }
          v96 = v134;
          v97 = v133;
          __asm { vcomiss xmm9, xmm10 }
          if ( v104 )
            goto LABEL_98;
          v98 = v139;
        }
        __asm
        {
          vmulss  xmm0, xmm9, xmm12
          vmovss  dword ptr [rsp+240h+var_1D0], xmm0
          vmovss  [rsp+240h+var_1D8], xmm8
          vmovss  [rsp+240h+var_1E0], xmm7
          vmovss  [rsp+240h+var_1E8], xmm6
          vmovss  xmm0, [rbp+130h+width]
          vmovss  [rsp+240h+var_1F0], xmm0
          vmovss  dword ptr [rsp+240h+outClipped], xmm11
          vmovss  dword ptr [rsp+240h+var_200], xmm11
          vmovss  dword ptr [rsp+240h+h], xmm10
          vmovss  dword ptr [rsp+240h+w], xmm10
          vmovss  xmm0, [rbp+130h+var_124]
          vmovss  dword ptr [rsp+240h+outVector], xmm0
          vmovss  xmm1, [rbp+130h+var_128]
          vmovss  dword ptr [rsp+240h+fmt], xmm1
          vmovss  xmm3, dword ptr [rbp+130h+v1+4]; centerY
          vmovss  xmm2, dword ptr [rbp+130h+v1]; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v97, *(float *)&_XMM2, *(float *)&_XMM3, fmta, outVector, w, h, v121, outClipped, v123, v124, v125, v126, v127, *v98, v96);
LABEL_98:
        __asm { vmovss  xmm6, [rbp+130h+var_1A8] }
LABEL_109:
        v37 = ++v141;
        --v142;
      }
      while ( v142 );
    }
  }
  memset(&out, 0, sizeof(out));
  _R11 = &v152;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
CgCompassSystemMP::FindTurretInfo
==============
*/
CompassTurretMP *CgCompassSystemMP::FindTurretInfo(CgCompassSystemMP *this, int entityNum)
{
  return CgCompassSystem::FindItemInfo<CompassTurretMP>(this, entityNum, this->m_compassTurrets, 0x20u, &this->m_compassTurretLock);
}

/*
==============
CgCompassSystemMP::GetActorFadeAmount
==============
*/
float CgCompassSystemMP::GetActorFadeAmount(CgCompassSystemMP *this, const int *beginFadeTime)
{
  char v7; 
  const dvar_t *v9; 

  _RBX = DVARFLT_compassSoundPingFadeTime;
  if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6984, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassSoundPingFadeTime, \"compassSoundPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassSoundPingFadeTime ) > 0.0f") )
    __debugbreak();
  if ( *beginFadeTime < CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time )
  {
    v9 = DVARFLT_compassSoundPingFadeTime;
    if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    __asm
    {
      vmovss  xmm0, cs:__real@3a83126f
      vdivss  xmm1, xmm0, dword ptr [rbx+28h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm1, xmm0
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm0, xmm1, xmm2
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetActorPingFadeAmount
==============
*/
float CgCompassSystemMP::GetActorPingFadeAmount(CgCompassSystemMP *this, const int *beginRadarFadeTime)
{
  char v7; 
  const dvar_t *v9; 

  _RBX = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 7022, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
    __debugbreak();
  if ( *beginRadarFadeTime < CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time )
  {
    v9 = DVARFLT_compassRadarPingFadeTime;
    if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    __asm
    {
      vmovss  xmm0, cs:__real@3a83126f
      vdivss  xmm1, xmm0, dword ptr [rbx+28h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm1, xmm0
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm0, xmm1, xmm2
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetBigMapRange
==============
*/
float CgCompassSystemMP::GetBigMapRange(CgCompassSystemMP *this, bool useExtendedRange)
{
  __asm { vxorps  xmm1, xmm1, xmm1 }
  if ( !this->m_isUsingTabletMode )
    goto LABEL_3;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0FAE0h]
    vucomiss xmm0, xmm1
  }
  if ( !this->m_isUsingTabletMode )
  {
LABEL_3:
    if ( useExtendedRange )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+0FADCh]
        vucomiss xmm0, xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+0FAD8h]
        vucomiss xmm0, xmm1
      }
      _RBX = DVARFLT_compassMaxRange;
      if ( !DVARFLT_compassMaxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMaxRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
GetBombCarrierEntityNum
==============
*/
int GetBombCarrierEntityNum(const cg_t *cgameGlob)
{
  unsigned __int8 ActiveGameMode; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 

  if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
    __debugbreak();
  if ( I_strcmp(cls.m_activeGameTypeName, "cyber") )
  {
    if ( I_strcmp(cls.m_activeGameTypeName, "sd") )
      return -1;
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode) )
      return -1;
  }
  IndexByName = BG_Omnvar_GetIndexByName("ui_bomb_carrier");
  Def = BG_Omnvar_GetDef(IndexByName);
  Data = CG_Omnvar_GetData(cgameGlob->localClientNum, IndexByName);
  return Omnvar_GetInteger(Def, Data);
}

/*
==============
CgCompassSystemMP::GetCompassActor
==============
*/
CompassActorMP *CgCompassSystemMP::GetCompassActor(CgCompassSystemMP *this, const int actorIndex)
{
  __int64 v2; 
  int v6; 

  v2 = actorIndex;
  if ( (unsigned int)actorIndex >= 0x100 )
  {
    v6 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2217, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassActors ) ) + 0 ) )", "actorIndex doesn't index ARRAY_COUNT( m_compassActors )\n\t%i not in [0, %i)", actorIndex, v6) )
      __debugbreak();
  }
  return &this->m_compassActors[v2];
}

/*
==============
CgCompassSystemMP::GetCompassActorCount
==============
*/
__int64 CgCompassSystemMP::GetCompassActorCount(CgCompassSystemMP *this)
{
  return 256i64;
}

/*
==============
CgCompassSystemMP::GetCompassCircleOutlineThickness
==============
*/
float CgCompassSystemMP::GetCompassCircleOutlineThickness(CgCompassSystemMP *this)
{
  const dvar_t *v1; 
  vec2_t outSize; 

  LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
  v1 = DVARFLT_compassCircleOutlineThickness;
  if ( !DVARFLT_compassCircleOutlineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCircleOutlineThickness") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+outSize+4]
    vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm1, cs:__real@3ab60b61
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetCompassScaler
==============
*/
float CgCompassSystemMP::GetCompassScaler(CgCompassSystemMP *this, CompassType compassType)
{
  if ( compassType )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    this->GetRange(this);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm2, dword ptr [rbx+4A024h]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetCroppedMapZoom
==============
*/
float CgCompassSystemMP::GetCroppedMapZoom(CgCompassSystemMP *this)
{
  const dvar_t *v4; 
  char v7; 

  _RDI = this;
  if ( this->m_isUsingTabletMode )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    v4 = DVARBOOL_compassEditSettingsEnabled;
    if ( !DVARBOOL_compassEditSettingsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( !v4->current.enabled )
      goto LABEL_15;
    _RBX = DVARFLT_compassEditSettingsZoom;
    if ( !DVARFLT_compassEditSettingsZoom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsZoom") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbx+28h]
    }
    if ( v7 )
    {
      _RBX = DVARFLT_compassEditSettingsZoom;
      if ( !DVARFLT_compassEditSettingsZoom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsZoom") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
LABEL_15:
      __asm { vmovss  xmm0, dword ptr [rdi+0FABCh] }
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetDebugCamSelectedIndex
==============
*/
__int64 CgCompassSystemMP::GetDebugCamSelectedIndex()
{
  return (unsigned int)staticMLGCameras.m_debugCamSelectedIndex;
}

/*
==============
CgCompassSystemMP::GetDecoyCompassActor
==============
*/
CompassDecoyActorMP *CgCompassSystemMP::GetDecoyCompassActor(CgCompassSystemMP *this, const int actorIndex)
{
  __int64 v2; 
  int v6; 

  v2 = actorIndex;
  if ( (unsigned int)actorIndex >= 0xF )
  {
    v6 = 15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2210, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassDecoyActors ) ) + 0 ) )", "actorIndex doesn't index ARRAY_COUNT( m_compassDecoyActors )\n\t%i not in [0, %i)", actorIndex, v6) )
      __debugbreak();
  }
  return &this->m_compassDecoyActors[v2];
}

/*
==============
CgCompassSystemMP::GetDefaultEnemyCompassColor
==============
*/
void CgCompassSystemMP::GetDefaultEnemyCompassColor(CgCompassSystemMP *this, vec4_t *color)
{
  __asm
  {
    vmovss  xmm0, dword ptr cs:enemyColors
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, dword ptr cs:enemyColors+4
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm0, dword ptr cs:enemyColors+8
    vmovss  dword ptr [rdx+8], xmm0
    vmovss  xmm1, dword ptr cs:unk_147FA8A1C
    vmovss  dword ptr [rdx+0Ch], xmm1
  }
}

/*
==============
CgCompassSystemMP::GetDefaultFriendlyCompassColor
==============
*/
void CgCompassSystemMP::GetDefaultFriendlyCompassColor(CgCompassSystemMP *this, vec4_t *color)
{
  __asm
  {
    vmovss  xmm0, dword ptr cs:friendlyColors
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, dword ptr cs:friendlyColors+4
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm0, dword ptr cs:friendlyColors+8
    vmovss  dword ptr [rdx+8], xmm0
    vmovss  xmm1, dword ptr cs:unk_147FA89AC
    vmovss  dword ptr [rdx+0Ch], xmm1
  }
}

/*
==============
CgCompassSystemMP::GetDrawnItemScaler
==============
*/
float CgCompassSystemMP::GetDrawnItemScaler(CgCompassSystemMP *this, CompassType compassType, LocationSelectorType locationSelectorType, bool useDirection)
{
  const dvar_t *v13; 
  const dvar_t *v20; 
  const dvar_t *v27; 
  int v33; 
  int v34; 

  _RDI = this;
  _R14 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+88h+arg_18], xmm0
    vmovss  [rsp+88h+arg_0], xmm1
  }
  if ( !useDirection )
  {
    _RDI->GetDrawnItemScalerRadiusAndMultiplier(_RDI, locationSelectorType, (float *)&v34, (float *)&v33);
LABEL_15:
    v20 = DVARBOOL_compassDynamicSelectorSizeEnabled;
    __asm { vmovaps [rsp+88h+var_48], xmm6 }
    if ( !DVARBOOL_compassDynamicSelectorSizeEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassDynamicSelectorSizeEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, [rsp+88h+arg_18]
        vmulss  xmm1, xmm0, [rsp+88h+arg_0]
        vmovss  [rsp+88h+arg_18], xmm1
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4A024h]
      vmovss  xmm6, cs:__real@3f000000
      vmulss  xmm1, xmm0, xmm6
    }
    if ( compassType == COMPASS_TYPE_PARTIAL )
    {
      *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystemMP *))_RDI->GetRange)(_RDI);
      __asm { vmulss  xmm1, xmm0, xmm6 }
    }
    v27 = DVARFLT_compassSize;
    __asm
    {
      vmovss  xmm0, [rsp+88h+arg_18]
      vdivss  xmm6, xmm0, xmm1
    }
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
      vmovaps xmm6, [rsp+88h+var_48]
    }
    return *(float *)&_XMM0;
  }
  v13 = DVARBOOL_compassDynamicSelectorSizeEnabled;
  if ( !DVARBOOL_compassDynamicSelectorSizeEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassDynamicSelectorSizeEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    _RBX = DVARFLT_compassSelectorSizeBase;
    if ( !DVARFLT_compassSelectorSizeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSelectorSizeBase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [rdi+0FB04h]
      vmovss  [rsp+88h+arg_18], xmm0
      vmovss  [rsp+88h+arg_0], xmm1
    }
    goto LABEL_15;
  }
  _RBX = DVARFLT_compassSize;
  if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3e800000
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetDrawnItemScalerRadiusAndMultiplier
==============
*/
void CgCompassSystemMP::GetDrawnItemScalerRadiusAndMultiplier(CgCompassSystemMP *this, LocationSelectorType locationSelectorType, float *outSelectorRadius, float *outLocationSelectorSizeMultiplier)
{
  __int32 v7; 
  __int32 v8; 
  const dvar_t *v10; 
  const dvar_t *v12; 
  const dvar_t *v13; 

  _RBX = outLocationSelectorSizeMultiplier;
  _RSI = this;
  v7 = locationSelectorType - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        *outSelectorRadius = 1000.0;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+0FB14h]
          vmovss  dword ptr [r9], xmm0
        }
        return;
      }
      v10 = DCONST_DVARFLT_compassEMPDroneRadius;
      if ( !DCONST_DVARFLT_compassEMPDroneRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEMPDroneRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      *outSelectorRadius = v10->current.value;
      __asm { vmovss  xmm0, dword ptr [rsi+0FB10h] }
    }
    else
    {
      v12 = DCONST_DVARFLT_compassCUAVRadius;
      if ( !DCONST_DVARFLT_compassCUAVRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCUAVRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      *outSelectorRadius = v12->current.value;
      __asm { vmovss  xmm0, dword ptr [rsi+0FB0Ch] }
    }
  }
  else
  {
    v13 = DCONST_DVARFLT_compassScramblerRadius;
    if ( !DCONST_DVARFLT_compassScramblerRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassScramblerRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    *outSelectorRadius = v13->current.value;
    __asm { vmovss  xmm0, dword ptr [rsi+0FB08h] }
  }
  __asm { vmovss  dword ptr [rbx], xmm0 }
}

/*
==============
CgCompassSystemMP::GetEnemyCompassColor
==============
*/
void CgCompassSystemMP::GetEnemyCompassColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterEnemyColor && cgameGlob->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:xmmword_147FA8A20
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:xmmword_147FA8A20+4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:xmmword_147FA8A20+8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:xmmword_147FA8A20+0Ch
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:enemyColors
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:enemyColors+4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:enemyColors+8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:unk_147FA8A1C
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetEnemyCompassLightColor
==============
*/
void CgCompassSystemMP::GetEnemyCompassLightColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( cgameGlob->m_isMLGSpectator )
  {
    if ( this->m_isUsingCustomCodCasterEnemyColor )
    {
      __asm
      {
        vmovss  xmm0, cs:dword_147FA8A40
        vmovss  dword ptr [rdx], xmm0
        vmovss  xmm1, cs:dword_147FA8A44
        vmovss  dword ptr [rdx+4], xmm1
        vmovss  xmm0, cs:dword_147FA8A48
        vmovss  dword ptr [rdx+8], xmm0
        vmovss  xmm1, cs:dword_147FA8A4C
        vmovss  dword ptr [rdx+0Ch], xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:dword_147FA8A60
        vmovss  dword ptr [rdx], xmm0
        vmovss  xmm1, cs:dword_147FA8A64
        vmovss  dword ptr [rdx+4], xmm1
        vmovss  xmm0, cs:dword_147FA8A68
        vmovss  dword ptr [rdx+8], xmm0
        vmovss  xmm1, cs:dword_147FA8A6C
        vmovss  dword ptr [rdx+0Ch], xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:enemyColors
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:enemyColors+4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:enemyColors+8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:unk_147FA8A1C
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetEnemyCompassSecondaryColor
==============
*/
void CgCompassSystemMP::GetEnemyCompassSecondaryColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterEnemyColor && cgameGlob->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, cs:dword_147FA8A30
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, cs:dword_147FA8A34
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, cs:dword_147FA8A38
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, cs:dword_147FA8A3C
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetEnemyCompassSecondaryLightColor
==============
*/
void CgCompassSystemMP::GetEnemyCompassSecondaryLightColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterEnemyColor && cgameGlob->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, cs:dword_147FA8A50
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, cs:dword_147FA8A54
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, cs:dword_147FA8A58
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, cs:dword_147FA8A5C
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
GetFlagCarrierEntityNum
==============
*/
int GetFlagCarrierEntityNum(const cg_t *cgameGlob, const team_t team)
{
  unsigned __int8 ActiveGameMode; 
  const char *v5; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 

  if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
    __debugbreak();
  if ( I_strcmp(cls.m_activeGameTypeName, "ctf") )
    return -1;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode) || (unsigned int)(team - 1) > 1 )
    return -1;
  v5 = "ui_ctf_flag_allies";
  if ( team == TEAM_TWO )
    v5 = "ui_ctf_flag_axis";
  IndexByName = BG_Omnvar_GetIndexByName(v5);
  Def = BG_Omnvar_GetDef(IndexByName);
  Data = CG_Omnvar_GetData(cgameGlob->localClientNum, IndexByName);
  return Omnvar_GetInteger(Def, Data);
}

/*
==============
CgCompassSystemMP::GetFriendlyCompassColor
==============
*/
void CgCompassSystemMP::GetFriendlyCompassColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterFriendlyColor && cgameGlob->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:xmmword_147FA89B0
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:xmmword_147FA89B0+4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:xmmword_147FA89B0+8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:xmmword_147FA89B0+0Ch
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:friendlyColors
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:friendlyColors+4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:friendlyColors+8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:unk_147FA89AC
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetFriendlyCompassLightColor
==============
*/
void CgCompassSystemMP::GetFriendlyCompassLightColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( cgameGlob->m_isMLGSpectator )
  {
    if ( this->m_isUsingCustomCodCasterFriendlyColor )
    {
      __asm
      {
        vmovss  xmm0, cs:dword_147FA89D0
        vmovss  dword ptr [rdx], xmm0
        vmovss  xmm1, cs:dword_147FA89D4
        vmovss  dword ptr [rdx+4], xmm1
        vmovss  xmm0, cs:dword_147FA89D8
        vmovss  dword ptr [rdx+8], xmm0
        vmovss  xmm1, cs:dword_147FA89DC
        vmovss  dword ptr [rdx+0Ch], xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:dword_147FA89F0
        vmovss  dword ptr [rdx], xmm0
        vmovss  xmm1, cs:dword_147FA89F4
        vmovss  dword ptr [rdx+4], xmm1
        vmovss  xmm0, cs:dword_147FA89F8
        vmovss  dword ptr [rdx+8], xmm0
        vmovss  xmm1, cs:dword_147FA89FC
        vmovss  dword ptr [rdx+0Ch], xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:friendlyColors
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:friendlyColors+4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:friendlyColors+8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:unk_147FA89AC
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetFriendlyCompassSecondaryColor
==============
*/
void CgCompassSystemMP::GetFriendlyCompassSecondaryColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterFriendlyColor && cgameGlob->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, cs:dword_147FA89C0
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, cs:dword_147FA89C4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, cs:dword_147FA89C8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, cs:dword_147FA89CC
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetFriendlyCompassSecondaryLightColor
==============
*/
void CgCompassSystemMP::GetFriendlyCompassSecondaryLightColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterFriendlyColor && cgameGlob->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, cs:dword_147FA89E0
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, cs:dword_147FA89E4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, cs:dword_147FA89E8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, cs:dword_147FA89EC
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetFriendlyTimeout
==============
*/
__int64 CgCompassSystemMP::GetFriendlyTimeout(CgCompassSystemMP *this)
{
  return 500i64;
}

/*
==============
CgCompassSystemMP::GetGhostAlphaScale
==============
*/
float CgCompassSystemMP::GetGhostAlphaScale(CgCompassSystemMP *this)
{
  _RBX = DCONST_DVARFLT_compassPlayerGhostFade;
  if ( !DCONST_DVARFLT_compassPlayerGhostFade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerGhostFade") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetLastShotFireAmount
==============
*/
float CgCompassSystemMP::GetLastShotFireAmount(CgCompassSystemMP *this, const int *lastShotTime)
{
  char v7; 
  const dvar_t *v9; 

  _RBX = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6999, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
    __debugbreak();
  if ( *lastShotTime < CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time )
  {
    v9 = DVARFLT_compassRadarPingFadeTime;
    if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    __asm
    {
      vmovss  xmm0, cs:__real@3a83126f
      vdivss  xmm1, xmm0, dword ptr [rbx+28h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm1, xmm0
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm0, xmm1, xmm2
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetMLGSpectatorObjectiveColors
==============
*/
void CgCompassSystemMP::GetMLGSpectatorObjectiveColors(CgCompassSystemMP *this, ObjectiveSide side, vec4_t *outColor, vec4_t *outLightColor, CgGlobalsMP *cgameGlobMP)
{
  _RDI = outLightColor;
  _RSI = outColor;
  switch ( side )
  {
    case IN_FLUX:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5991, ASSERT_TYPE_ASSERT, "(side != ObjectiveSide::IN_FLUX)", (const char *)&queryFormat, "side != ObjectiveSide::IN_FLUX") )
        __debugbreak();
      goto LABEL_4;
    case FRIENDLY:
      CgCompassSystemMP::GetFriendlyCompassColor(this, outColor, cgameGlobMP);
      CgCompassSystemMP::GetFriendlyCompassLightColor(this, _RDI, cgameGlobMP);
      break;
    case ENEMY:
      CgCompassSystemMP::GetEnemyCompassColor(this, outColor, cgameGlobMP);
      CgCompassSystemMP::GetEnemyCompassLightColor(this, _RDI, cgameGlobMP);
      break;
    default:
LABEL_4:
      __asm
      {
        vmovss  xmm0, dword ptr cs:?colorDkGrey@@3Tvec4_t@@B; vec4_t const colorDkGrey
        vmovss  dword ptr [rsi], xmm0
        vmovss  xmm1, dword ptr cs:?colorDkGrey@@3Tvec4_t@@B+4; vec4_t const colorDkGrey
        vmovss  dword ptr [rsi+4], xmm1
        vmovss  xmm0, dword ptr cs:?colorDkGrey@@3Tvec4_t@@B+8; vec4_t const colorDkGrey
        vmovss  dword ptr [rsi+8], xmm0
        vmovss  xmm1, dword ptr cs:?colorDkGrey@@3Tvec4_t@@B+0Ch; vec4_t const colorDkGrey
        vmovss  dword ptr [rsi+0Ch], xmm1
        vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
        vmovss  dword ptr [rdi+4], xmm1
        vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
        vmovss  dword ptr [rdi+8], xmm0
        vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
        vmovss  dword ptr [rdi+0Ch], xmm1
      }
      return;
  }
}

/*
==============
CgCompassSystemMP::GetMLGSpectatorObjectiveIconColor
==============
*/
void CgCompassSystemMP::GetMLGSpectatorObjectiveIconColor(CgCompassSystemMP *this, ObjectiveSide side, vec4_t *outIconColor, CgGlobalsMP *cgameGlobMP)
{
  if ( side == FRIENDLY )
  {
    CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, outIconColor, cgameGlobMP);
  }
  else if ( side == ENEMY )
  {
    CgCompassSystemMP::GetEnemyCompassSecondaryColor(this, outIconColor, cgameGlobMP);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [r8], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [r8+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [r8+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  dword ptr [r8+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetMissileInfo
==============
*/
CompassMissile *CgCompassSystemMP::GetMissileInfo(CgCompassSystemMP *this, int entityNum)
{
  return CgCompassSystem::GetItemInfo<CompassMissile>(this, entityNum, this->m_compassMissiles, 8u, &this->m_compassMissileLock);
}

/*
==============
CgCompassSystemMP::GetNeutralCompassColor
==============
*/
void CgCompassSystemMP::GetNeutralCompassColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterColor && cgameGlob->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorMdGrey@@3Tvec4_t@@B; vec4_t const colorMdGrey
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:?colorMdGrey@@3Tvec4_t@@B+4; vec4_t const colorMdGrey
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorMdGrey@@3Tvec4_t@@B+8; vec4_t const colorMdGrey
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorMdGrey@@3Tvec4_t@@B+0Ch; vec4_t const colorMdGrey
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetObjectiveBackgroundImage
==============
*/
const GfxImage *CgCompassSystemMP::GetObjectiveBackgroundImage(CgCompassSystemMP *this, ObjectiveBackground background, __int64 elevation)
{
  const GfxImage *result; 

  switch ( background )
  {
    case LINEAR:
      return cgMedia.objectiveBackgroundPentagon->textureTable->image;
    case EASE_OUT_QUAD:
      return cgMedia.objectiveBackgroundDiamond->textureTable->image;
    case EASE_IN_OUT_QUAD:
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1442EBF50, elevation);
      goto $LN7_307;
    case EASE_IN_CUBIC:
$LN7_307:
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1442EBF70, elevation);
      goto $LN8_156;
    case EASE_IN_OUT_CUBIC:
$LN8_156:
      result = cgMedia.objectiveBackgroundCircleNew->textureTable->image;
      break;
    case EASE_IN_SINE:
      result = cgMedia.objectiveBackgroundDiamondNew->textureTable->image;
      break;
    default:
      result = NULL;
      break;
  }
  return result;
}

/*
==============
CgCompassSystemMP::GetObjectiveClippedPos
==============
*/
bool CgCompassSystemMP::GetObjectiveClippedPos(CgCompassSystemMP *this, CompassType compassType, bool useAlternate, bool cropPartialMap, const rectDef_s *scaledRect, const float boundsRadius, const vec2_t *yawVector, const SecureVec3 *playerPos, const vec3_t *origin, const vec3_t *prevOrigin, const float centerX, float centerY, vec2_t *out_xy, vec2_t *out_xyClipped)
{
  bool result; 
  float v25; 

  _RBX = out_xy;
  _RDI = out_xyClipped;
  *out_xy = 0i64;
  *out_xyClipped = 0i64;
  if ( !useAlternate || cropPartialMap )
  {
    __asm
    {
      vmovss  xmm0, [rsp+58h+boundsRadius]
      vmovss  [rsp+58h+var_38], xmm0
    }
    result = CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, scaledRect, v25, yawVector, (const vec2_t *)playerPos, (const vec2_t *)origin, out_xy, out_xyClipped);
  }
  else
  {
    __asm { vmovss  xmm3, [rsp+58h+boundsRadius]; boundsRadius }
    result = CgCompassSystem::WorldPosToCompassPredict(this, compassType, scaledRect, *(const float *)&_XMM3, yawVector, (const vec2_t *)playerPos, (const vec2_t *)origin, (const vec2_t *)prevOrigin, out_xy, out_xyClipped);
  }
  __asm
  {
    vmovss  xmm1, [rsp+58h+centerX]
    vaddss  xmm0, xmm1, dword ptr [rbx]
    vmovss  xmm2, [rsp+58h+centerY]
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm0
    vaddss  xmm1, xmm1, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm1
    vaddss  xmm0, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm0
  }
  return result;
}

/*
==============
CgCompassSystemMP::GetObjectiveCompassColor
==============
*/
void CgCompassSystemMP::GetObjectiveCompassColor(CgCompassSystemMP *this, const vec3_t *origin, ObjectiveSide side, ObjectiveSide progressSide, ObjectiveBackground background, int entNum, vec4_t *newColor, vec4_t *backgroundColor, const vec4_t *color)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  char v33; 
  char v34; 
  const dvar_t *v36; 
  const dvar_t *v45; 
  centity_t *Entity; 
  team_t team; 
  team_t v52; 
  CgHandler *Handler; 
  CgStatic *v54; 
  const characterInfo_t *v55; 
  __int16 otherEntityNum; 
  CgGlobalsMP *v57; 
  vec4_t *v58; 
  CgCompassSystemMP *v59; 
  SecureVec3 out; 
  __int64 v70; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  v70 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RDI = origin;
  _RSI = newColor;
  _R14 = backgroundColor;
  LocalClientGlobals = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_CalcPlayerPos(&out, this->m_localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm4, xmm0, dword ptr [rsp+0B8h+out.___u0]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+0B8h+out.___u0+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vsqrtss xmm8, xmm1, xmm1
  }
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5533, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !CharacterInfo->infoValid )
    goto LABEL_59;
  _RCX = color;
  newColor->v[0] = color->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rsi+4], xmm0
    vmovss  xmm1, dword ptr [rcx+8]
    vmovss  dword ptr [rsi+8], xmm1
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  dword ptr [rsi+0Ch], xmm0
  }
  *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystemMP *))this->GetRange)(this);
  __asm { vcomiss xmm8, xmm0 }
  if ( v33 | v34 )
  {
    newColor->v[3] = 1.0;
  }
  else
  {
    _RDI = DVARFLT_compassObjectiveMaxRange;
    if ( !DVARFLT_compassObjectiveMaxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMaxRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm8, dword ptr [rdi+28h] }
    if ( v33 )
    {
      __asm { vxorps  xmm7, xmm7, xmm7 }
      _RDI = DVARFLT_compassObjectiveMaxRange;
      if ( !DVARFLT_compassObjectiveMaxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMaxRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm6, dword ptr [rdi+28h] }
      this->GetRange(this);
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vucomiss xmm1, xmm7
      }
      if ( !v34 )
      {
        this->GetRange(this);
        __asm { vsubss  xmm7, xmm8, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveMaxRange, "compassObjectiveMaxRange");
        __asm { vmovaps xmm6, xmm0 }
        this->GetRange(this);
        __asm
        {
          vsubss  xmm1, xmm6, xmm0
          vdivss  xmm7, xmm7, xmm1
        }
      }
      v45 = DVARFLT_compassObjectiveMinAlpha;
      if ( !DVARFLT_compassObjectiveMinAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMinAlpha") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v45);
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000
        vsubss  xmm0, xmm2, dword ptr [rdi+28h]
        vmulss  xmm1, xmm0, xmm7
        vsubss  xmm1, xmm2, xmm1
        vmovss  dword ptr [rsi+0Ch], xmm1
      }
    }
    else
    {
      v36 = DVARFLT_compassObjectiveMinAlpha;
      if ( !DVARFLT_compassObjectiveMinAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMinAlpha") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      LODWORD(newColor->v[3]) = v36->current.integer;
    }
  }
  switch ( side )
  {
    case NEUTRAL:
      if ( background == EASE_OUT_QUAD )
        goto LABEL_49;
      CgCompassSystem::GetMainHudColor(this, backgroundColor);
      goto LABEL_58;
    case FRIENDLY:
      CgCompassSystemMP::GetFriendlyCompassColor(this, backgroundColor, LocalClientGlobals);
      if ( !LocalClientGlobals->m_isMLGSpectator )
        goto LABEL_59;
      goto LABEL_45;
    case ENEMY:
      CgCompassSystemMP::GetEnemyCompassColor(this, backgroundColor, LocalClientGlobals);
      if ( !LocalClientGlobals->m_isMLGSpectator )
        goto LABEL_59;
      v57 = LocalClientGlobals;
      v58 = newColor;
      v59 = this;
      goto LABEL_53;
    case IN_FLUX:
      if ( background == EASE_OUT_QUAD )
      {
LABEL_49:
        CgCompassSystem::GetMainHudColor(this, newColor);
        backgroundColor->v[0] = 0.06666667;
        backgroundColor->v[1] = 0.06666667;
        backgroundColor->v[2] = 0.06666667;
        backgroundColor->v[3] = 1.0;
        goto LABEL_59;
      }
      __asm
      {
        vmovss  xmm0, dword ptr cs:contestColor_0
        vmovss  dword ptr [r14], xmm0
        vmovss  xmm1, dword ptr cs:contestColor_0+4
        vmovss  dword ptr [r14+4], xmm1
        vmovss  xmm0, dword ptr cs:contestColor_0+8
        vmovss  dword ptr [r14+8], xmm0
        vmovss  xmm1, dword ptr cs:contestColor_0+0Ch
        vmovss  dword ptr [r14+0Ch], xmm1
      }
LABEL_58:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
        vmovups xmmword ptr [rsi], xmm0
      }
      goto LABEL_59;
  }
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  team = CharacterInfo->team;
  v52 = TEAM_ZERO;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((Entity->nextState.eType - 1) & 0xFFEF) != 0 )
  {
    if ( (Entity->flags & 1) != 0 )
      v52 = CgEntitySystemMP::CG_EntityMP_GetTeam((const LocalClientNum_t)this->m_localClientNum, Entity);
  }
  else
  {
    Handler = CgHandler::getHandler(this->m_localClientNum);
    v54 = CgStatic::GetLocalClientStatics((const LocalClientNum_t)Handler->m_localClientNum);
    v55 = CgStatic::GetCharacterInfo(v54, entNum);
    if ( v55 )
      v52 = v55->team;
  }
  if ( (unsigned int)(v52 - 1) <= 1 )
  {
    v57 = LocalClientGlobals;
    v58 = newColor;
    v59 = this;
    if ( !LocalClientGlobals->m_isMLGSpectator )
    {
      if ( team == v52 )
        goto LABEL_41;
      goto LABEL_42;
    }
    if ( v52 == TEAM_TWO )
    {
LABEL_45:
      CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, newColor, LocalClientGlobals);
      goto LABEL_59;
    }
LABEL_53:
    CgCompassSystemMP::GetEnemyCompassSecondaryColor(v59, v58, v57);
    goto LABEL_59;
  }
  if ( (Entity->flags & 1) != 0 )
  {
    otherEntityNum = Entity->nextState.otherEntityNum;
    if ( otherEntityNum != 2047 && v52 == TEAM_ZERO )
    {
      v57 = LocalClientGlobals;
      v58 = newColor;
      v59 = this;
      if ( otherEntityNum == LocalClientGlobals->clientNum )
      {
LABEL_41:
        CgCompassSystemMP::GetFriendlyCompassColor(v59, v58, v57);
        goto LABEL_59;
      }
LABEL_42:
      CgCompassSystemMP::GetEnemyCompassColor(v59, v58, v57);
    }
  }
LABEL_59:
  memset(&out, 0, sizeof(out));
  _R11 = &v72;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CgCompassSystemMP::GetObjectiveCompassOrigin
==============
*/
void CgCompassSystemMP::GetObjectiveCompassOrigin(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const unsigned int entNum, const unsigned int scriptableIndex, const ObjectiveFlags flags, const vec3_t *objOrigin, float yawAngle, SecureVec3 *outOrigin, bool *useAlternate, float *yawTo)
{
  const dvar_t *v33; 
  void *retaddr; 

  _RAX = &retaddr;
  _RSI = yawTo;
  _RBX = objOrigin;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RBP = outOrigin;
  *yawTo = 0.0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  *useAlternate = 0;
  _R15 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( entNum == 2047 )
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_58], xmm7
      vmovaps [rsp+0C8h+var_68], xmm8
      vmovaps [rsp+0C8h+var_78], xmm9
      vmovss  xmm9, dword ptr [rbx+8]
      vmovss  xmm7, dword ptr [rbx]
      vmovss  xmm8, dword ptr [rbx+4]
    }
    if ( scriptableIndex != -1 )
    {
      _RAX = ScriptableCl_GetInstanceAngles((const LocalClientNum_t)this->m_localClientNum, scriptableIndex);
      __asm { vmovss  xmm6, dword ptr [rax+4] }
    }
    __asm
    {
      vmovss  dword ptr [rbp+8], xmm9
      vmovaps xmm9, [rsp+0C8h+var_78]
      vmovss  dword ptr [rbp+4], xmm8
      vmovaps xmm8, [rsp+0C8h+var_68]
      vmovss  dword ptr [rbp+0], xmm7
      vmovaps xmm7, [rsp+0C8h+var_58]
    }
  }
  else
  {
    _RBX = (const cpose_t *)CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
    CG_GetPoseOrigin(_RBX, (vec3_t *)outOrigin);
    __asm { vmovss  xmm6, dword ptr [rbx+4Ch] }
    *useAlternate = (_RBX[1].vehicle.wheelBoneIndex[0] & 0x20) != 0 && compassType == COMPASS_TYPE_PARTIAL;
  }
  if ( (flags & 1) != 0 )
  {
    if ( compassType )
      goto LABEL_17;
    v33 = DVARBOOL_compassRotation;
    if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    if ( !v33->current.enabled || cropPartialMap )
    {
LABEL_17:
      __asm
      {
        vmovss  xmm0, dword ptr [r15+49FFCh]
        vsubss  xmm0, xmm0, xmm6; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm { vmovss  dword ptr [rsi], xmm0 }
      if ( !_R15->m_isMLGSpectator || !this->MapShouldRotate(this) )
        goto LABEL_21;
      this->MapRotationFactor(this);
      __asm
      {
        vmovss  xmm1, dword ptr [rsi]
        vsubss  xmm0, xmm1, xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rsp+0C8h+arg_38]
        vsubss  xmm0, xmm0, xmm6; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    }
    __asm { vmovss  dword ptr [rsi], xmm0 }
LABEL_21:
    __asm { vmovss  xmm3, dword ptr [rsi]; in }
    CgCompassSystem::WorldYawToCompass(this, compassType, _R15, *(const float *)&_XMM3, yawTo);
  }
  __asm { vmovaps xmm6, [rsp+0C8h+var_48] }
}

/*
==============
CgCompassSystemMP::GetObjectiveIconSizeDefault
==============
*/
__int64 CgCompassSystemMP::GetObjectiveIconSizeDefault(CgCompassSystemMP *this, ObjectiveFlags flags, ObjectiveIconSize size)
{
  __int64 result; 

  result = (unsigned __int8)size;
  if ( (flags & 2) != 0 )
    return 1i64;
  return result;
}

/*
==============
CgCompassSystemMP::GetObjectiveImage
==============
*/
const GfxImage *CgCompassSystemMP::GetObjectiveImage(CgCompassSystemMP *this)
{
  int v1; 
  __int64 v2; 

  if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
    __debugbreak();
  if ( !I_strcmp(cls.m_activeGameTypeName, "cyber") || !I_strcmp(cls.m_activeGameTypeName, "sd") )
    return cgMedia.compass.codcaster_objective_bomb;
  v1 = I_strcmp(cls.m_activeGameTypeName, "ctf");
  v2 = 0i64;
  if ( !v1 )
    return cgMedia.compass.codcaster_objective_flag;
  return (const GfxImage *)v2;
}

/*
==============
CgCompassSystemMP::GetObjectiveScale
==============
*/
void CgCompassSystemMP::GetObjectiveScale(CgCompassSystemMP *this, const ObjectiveView *obj, const int *objectiveIndex, float *scale)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v11; 
  cg_t *v12; 
  __int64 v13; 
  ObjectiveSide side; 
  int time; 
  int v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 

  _RBP = scale;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v11 = DCONST_DVARINT_compassObjectivePopTime;
  v12 = LocalClientGlobals;
  if ( !DCONST_DVARINT_compassObjectivePopTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectivePopTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v13 = *objectiveIndex;
  side = obj->side;
  time = v12->time;
  v16 = objectivePopStartTimes[v13] + v11->current.integer;
  if ( side == objectiveSides[v13] )
  {
    if ( time > 2 * v16 )
      objectivePopStartTimes[v13] = -1;
  }
  else
  {
    objectivePopStartTimes[v13] = time;
    objectiveSides[v13] = side;
  }
  v17 = DCONST_DVARINT_compassObjectivePopTime;
  if ( !DCONST_DVARINT_compassObjectivePopTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectivePopTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5697, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_compassObjectivePopTime, \"compassObjectivePopTime\" ) > 0)", (const char *)&queryFormat, "Dconst_GetInt( compassObjectivePopTime ) > 0") )
    __debugbreak();
  v18 = DCONST_DVARINT_compassObjectivePopTime;
  if ( v12->time >= v16 )
  {
    if ( !DCONST_DVARINT_compassObjectivePopTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectivePopTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vdivss  xmm2, xmm1, xmm0
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm3, xmm1, xmm2
    }
  }
  else
  {
    if ( !DCONST_DVARINT_compassObjectivePopTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectivePopTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vcvtsi2ss xmm1, xmm1, eax
      vdivss  xmm3, xmm1, xmm0
    }
  }
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcmpless xmm1, xmm3, xmm2
    vmovaps xmm0, xmm3
    vblendvps xmm1, xmm0, xmm2, xmm1
    vmovss  dword ptr [rbp+0], xmm1
  }
}

/*
==============
CgCompassSystemMP::GetObjectiveShouldRender
==============
*/
char CgCompassSystemMP::GetObjectiveShouldRender(CgCompassSystemMP *this, objectiveState_t state, ObjectiveFlags flags, bool isForCompass, unsigned int iconIndex, const GfxImage **outIcon)
{
  __int16 v7; 
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v9; 
  char *outName; 

  v7 = flags;
  if ( state != OBJST_ACTIVE && state != OBJST_CURRENT )
    return 0;
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v9 = CurrentValidLocalClient;
  if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", CurrentValidLocalClient, 2) )
    __debugbreak();
  if ( clientUIActives[v9].connectionState != CA_ACTIVE || isForCompass && (v7 & 0x200) == 0 || !iconIndex || !NetConstStrings_AreStringsLoaded() || !NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, iconIndex, (const char **)&outName) )
    return 0;
  *outIcon = Image_Register(outName, IMAGE_TRACK_HUD);
  return 1;
}

/*
==============
CgCompassSystemMP::GetPartyCompassColor
==============
*/
void CgCompassSystemMP::GetPartyCompassColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterFriendlyColor && cgameGlob->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:xmmword_147FA89B0
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:xmmword_147FA89B0+4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:xmmword_147FA89B0+8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:xmmword_147FA89B0+0Ch
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:rgbColor
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:rgbColor+4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:rgbColor+8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, cs:dword_147FA8A0C
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetPlaneInfo
==============
*/
CompassPlane *CgCompassSystemMP::GetPlaneInfo(CgCompassSystemMP *this, int entityNum)
{
  return CgCompassSystem::GetItemInfo<CompassPlane>(this, entityNum, this->m_compassPlanes, 0x80u, &this->m_compassPlaneLock);
}

/*
==============
CgCompassSystemMP::GetPlayerCompassColor
==============
*/
void CgCompassSystemMP::GetPlayerCompassColor(CgCompassSystemMP *this, vec4_t *color, const cg_t *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterColor && cgameGlob->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:unk_147FA8A90
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:unk_147FA8A94
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:unk_147FA8A98
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:unk_147FA8A9C
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:playerColors
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:playerColors+4
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:playerColors+8
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm1, dword ptr cs:unk_147FA8A8C
      vmovss  dword ptr [rdx+0Ch], xmm1
    }
  }
}

/*
==============
CgCompassSystemMP::GetPlayerCompassMaterial
==============
*/
void CgCompassSystemMP::GetPlayerCompassMaterial(CgCompassSystemMP *this, const cg_t *cgameGlob, const GfxImage **outMaterial)
{
  if ( outMaterial )
    *outMaterial = cgMedia.compass.friendly_arrow;
}

/*
==============
CgCompassSystemMP::GetPortableRadarForEnt
==============
*/
CompassPortableRadar *CgCompassSystemMP::GetPortableRadarForEnt(CgCompassSystemMP *this, const int radarEntNum)
{
  CompassPortableRadar *result; 
  __int64 v3; 
  CompassPortableRadar *m_compassPortableRadarList; 

  result = NULL;
  v3 = 0i64;
  m_compassPortableRadarList = this->m_compassPortableRadarList;
  do
  {
    if ( m_compassPortableRadarList->entIndex == radarEntNum )
      return m_compassPortableRadarList;
    if ( !result && m_compassPortableRadarList->entIndex == 2047 )
      result = m_compassPortableRadarList;
    ++v3;
    ++m_compassPortableRadarList;
  }
  while ( v3 < 4 );
  if ( result )
  {
    result->entIndex = radarEntNum;
    result->nextPing = 0;
    result->pingIdx = -1;
  }
  return result;
}

/*
==============
CgCompassSystemMP::GetQuadInfoForPoints
==============
*/
void CgCompassSystemMP::GetQuadInfoForPoints(CgCompassSystemMP *this, vec2_t position1, vec2_t position2, float *quadPositionX, float *quadPositionY, float *quadLength, float *quadAngle)
{
  char v37; 
  vec2_t v45; 
  vec2_t v46; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
  }
  _RAX = quadPositionY;
  _RCX = quadLength;
  _RBX = quadAngle;
  v45 = position1;
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+78h+var_58]
    vmovss  xmm8, dword ptr [rsp+78h+var_58+4]
  }
  v46 = position2;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+var_50]
    vmovss  xmm7, dword ptr [rsp+78h+var_50+4]
    vminss  xmm2, xmm1, xmm0
    vsubss  xmm6, xmm0, xmm1
    vmaxss  xmm0, xmm1, xmm0
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm1, xmm1, cs:__real@3f000000
    vaddss  xmm0, xmm1, xmm2
    vmovss  dword ptr [r9], xmm0
    vmaxss  xmm2, xmm8, xmm7
    vminss  xmm4, xmm8, xmm7
    vsubss  xmm1, xmm2, xmm4
    vmulss  xmm0, xmm1, cs:__real@3f000000
    vaddss  xmm3, xmm0, xmm4
    vsubss  xmm5, xmm7, xmm8
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm1, xmm1, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm1, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm0, xmm1
    vmovss  dword ptr [rax], xmm3
    vdivss  xmm0, xmm6, xmm0; X
    vmovss  dword ptr [rcx], xmm2
  }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vcomiss xmm7, xmm8
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vmovss  dword ptr [rbx], xmm1
  }
  if ( v37 )
  {
    __asm
    {
      vxorps  xmm1, xmm1, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rbx], xmm1
    }
  }
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm1, xmm2
  }
  if ( v37 )
  {
    __asm { vmovss  xmm3, cs:__real@43b40000 }
    do
    {
      __asm
      {
        vaddss  xmm1, xmm3, dword ptr [rbx]
        vcomiss xmm1, xmm2
        vmovss  dword ptr [rbx], xmm1
      }
    }
    while ( v37 );
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
}

/*
==============
CgCompassSystemMP::GetRadarLine
==============
*/

void __fastcall CgCompassSystemMP::GetRadarLine(CgCompassSystemMP *this, double radarProgress, vec3_t *outLine)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RSI = outLine;
  __asm { vmovaps xmm6, xmm1 }
  _RDI = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *(double *)&_XMM0 = CgCompassSystemMP::GetRadarLineMargin(this);
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+4A004h]
    vmovss  dword ptr [rsi], xmm4
    vmovss  xmm2, dword ptr [rdi+4A000h]
    vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rsi+4], xmm3
    vmulss  xmm2, xmm3, dword ptr [rdi+4A01Ch]
    vmulss  xmm1, xmm4, dword ptr [rdi+4A018h]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, cs:__real@40000000
    vaddss  xmm1, xmm2, dword ptr [rdi+4A020h]
    vmovaps xmm5, xmm0
    vmulss  xmm0, xmm1, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm3, xmm2, xmm5
    vmovss  dword ptr [rsi+8], xmm3
  }
}

/*
==============
CgCompassSystemMP::GetRadarLineEastWestPercentage
==============
*/

float __fastcall CgCompassSystemMP::GetRadarLineEastWestPercentage(CgCompassSystemMP *this, double radarProgress)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *(double *)&_XMM0 = CgCompassSystemMP::GetRadarLineMargin(this);
  __asm
  {
    vdivss  xmm4, xmm0, dword ptr [rbx+4A020h]
    vmulss  xmm2, xmm4, cs:__real@40000000
    vaddss  xmm3, xmm2, cs:__real@3f800000
    vmulss  xmm0, xmm3, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vsubss  xmm0, xmm0, xmm4
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetRadarLineMargin
==============
*/
float CgCompassSystemMP::GetRadarLineMargin(CgCompassSystemMP *this)
{
  char v6; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vxorps  xmm0, xmm0, xmm0
  }
  _RDI = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  __asm { vucomiss xmm0, dword ptr [rax+4A020h] }
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 722, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapWorldSize[0])", (const char *)&queryFormat, "cgameGlob->compassMapWorldSize[0]") )
    __debugbreak();
  _RSI = DVARFLT_compassRadarLineThickness;
  if ( !DVARFLT_compassRadarLineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarLineThickness") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm6, dword ptr [rsi+28h] }
  *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystemMP *))this->GetRange)(this);
  __asm { vmulss  xmm6, xmm0, xmm6 }
  *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystemMP *))this->GetRange)(this);
  _RBX = DVARFLT_cg_hudMapRadarLineThickness;
  __asm
  {
    vmulss  xmm1, xmm0, cs:SQRT2
    vaddss  xmm6, xmm1, xmm6
  }
  if ( !DVARFLT_cg_hudMapRadarLineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapRadarLineThickness") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, dword ptr [rdi+4A020h]
    vmaxss  xmm2, xmm1, xmm6
    vmulss  xmm0, xmm2, cs:__real@3f000000
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetRadarSweepEnabled
==============
*/
_BOOL8 CgCompassSystemMP::GetRadarSweepEnabled(CgCompassSystemMP *this)
{
  return this->m_radarSweepEnabled;
}

/*
==============
CgCompassSystemMP::GetRange
==============
*/
double CgCompassSystemMP::GetRange(CgCompassSystemMP *this)
{
  CgGlobalsMP *LocalClientGlobals; 
  int v3; 
  bool HasPerk; 
  bool m_isBigMapMinimap; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v3 = *CgCompassSystem::GetCurrentCompassDisplayType(this);
  if ( (v3 & 2) != 0 )
  {
    _RBX = DCONST_DVARFLT_radialSensorRange;
    if ( !DCONST_DVARFLT_radialSensorRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else if ( (v3 & 4) != 0 )
  {
    _RBX = DVARFLT_heartbeatSensorTabletRange;
    if ( !DVARFLT_heartbeatSensorTabletRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else if ( (v3 & 8) != 0 )
  {
    _RBX = DCONST_DVARFLT_heartbeatSensorEMPRange;
    if ( !DCONST_DVARFLT_heartbeatSensorEMPRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    HasPerk = BG_HasPerk(&LocalClientGlobals->predictedPlayerState.perks, 0x39u);
    m_isBigMapMinimap = this->m_isBigMapMinimap;
    if ( HasPerk )
    {
      if ( m_isBigMapMinimap )
        *(double *)&_XMM0 = CgCompassSystemMP::GetBigMapRange(this, 1);
      else
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassExpandedMaxRange, "compassExpandedMaxRange");
    }
    else if ( m_isBigMapMinimap )
    {
      *(double *)&_XMM0 = CgCompassSystemMP::GetBigMapRange(this, 0);
    }
    else
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMaxRange, "compassMaxRange");
    }
  }
  return *(double *)&_XMM0;
}

/*
==============
CgCompassSystemMP::GetTeamCompassColor
==============
*/
char CgCompassSystemMP::GetTeamCompassColor(CgCompassSystemMP *this, CgGlobalsMP *cgameGlob, const team_t team, vec4_t *color)
{
  if ( team == TEAM_TWO )
  {
    CgCompassSystemMP::GetFriendlyCompassColor(this, color, cgameGlob);
    return 1;
  }
  else if ( team == TEAM_ONE )
  {
    CgCompassSystemMP::GetEnemyCompassColor(this, color, cgameGlob);
    return 1;
  }
  else if ( team )
  {
    return 0;
  }
  else if ( this->m_isUsingCustomCodCasterColor && cgameGlob->m_isMLGSpectator )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorMdGrey@@3Tvec4_t@@B; vec4_t const colorMdGrey
      vmovss  dword ptr [r9], xmm0
      vmovss  xmm1, dword ptr cs:?colorMdGrey@@3Tvec4_t@@B+4; vec4_t const colorMdGrey
      vmovss  dword ptr [r9+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorMdGrey@@3Tvec4_t@@B+8; vec4_t const colorMdGrey
      vmovss  dword ptr [r9+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorMdGrey@@3Tvec4_t@@B+0Ch; vec4_t const colorMdGrey
      vmovss  dword ptr [r9+0Ch], xmm1
    }
    return 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [r9], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [r9+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [r9+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  dword ptr [r9+0Ch], xmm1
    }
    return 1;
  }
}

/*
==============
CgCompassSystemMP::GetTurretInfo
==============
*/
CompassTurretMP *CgCompassSystemMP::GetTurretInfo(CgCompassSystemMP *this, int entityNum)
{
  CompassTurretMP *m_compassTurrets; 
  RWLock *p_m_compassTurretLock; 
  CompassTurretMP *result; 
  CompassTurretMP *v7; 
  char v8; 
  int time; 
  unsigned int v10; 
  int lastUpdateTime; 

  m_compassTurrets = this->m_compassTurrets;
  p_m_compassTurretLock = &this->m_compassTurretLock;
  result = CgCompassSystem::FindItemInfo<CompassTurretMP>(this, entityNum, this->m_compassTurrets, 0x20u, &this->m_compassTurretLock);
  v7 = result;
  if ( result )
    return result;
  v8 = *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1664i64);
  if ( v8 )
  {
    if ( !p_m_compassTurretLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 730, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
      __debugbreak();
    Sys_AcquireWriteLock(p_m_compassTurretLock);
  }
  time = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
  v10 = 0;
  while ( m_compassTurrets->lastAccessTime == time )
  {
LABEL_13:
    ++v10;
    ++m_compassTurrets;
    if ( v10 >= 0x20 )
      goto LABEL_16;
  }
  lastUpdateTime = m_compassTurrets->lastUpdateTime;
  if ( lastUpdateTime )
  {
    if ( !v7 || lastUpdateTime < v7->lastUpdateTime )
      v7 = m_compassTurrets;
    goto LABEL_13;
  }
  v7 = m_compassTurrets;
LABEL_16:
  if ( v7 )
  {
    if ( time - v7->lastUpdateTime <= 500 )
      Com_PrintWarning(14, "CgCompassSystem::GetItemInfo: Recycling old compass items pretty quickly.  Need to raise max? (current max: %d)", 32i64);
    *(_QWORD *)&v7->entityNum = 0i64;
    *(_QWORD *)&v7->lastAccessTime = 0i64;
    *(_QWORD *)v7->positionCurrent.v = 0i64;
    *(_QWORD *)&v7->positionCurrent.z = 0i64;
    *(_QWORD *)&v7->positionLastKnown.y = 0i64;
    *(_QWORD *)&v7->yawCurrent = 0i64;
    *(_QWORD *)&v7->isFriendly = 0i64;
    v7->entityNum = entityNum;
    v7->lastAccessTime = time;
  }
  else
  {
    Com_PrintError(14, "CgCompassSystem::GetItemInfo: Failed to get item info, list is full (%d)\n", 32i64);
  }
  if ( v8 )
    Sys_ReleaseWriteLock(p_m_compassTurretLock);
  return v7;
}

/*
==============
CgCompassSystemMP::GetUAVPingIntervalTime
==============
*/
__int64 CgCompassSystemMP::GetUAVPingIntervalTime(CgCompassSystemMP *this, const cg_t *const cgameGlob)
{
  RadarMode radarMode; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1077, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) != DODGE || !cgameGlob->predictedPlayerState.radarEnabled )
    return (unsigned int)this->m_bigMapUAVPingIntervalTime;
  radarMode = cgameGlob->predictedPlayerState.radarMode;
  if ( radarMode == RADAR_MODE_SLOW )
    return (unsigned int)this->m_bigMapUAVPingIntervalTimeSlow;
  if ( radarMode )
    return (unsigned int)this->m_bigMapUAVPingIntervalTimeFast;
  else
    return (unsigned int)this->m_bigMapUAVPingIntervalTime;
}

/*
==============
CgCompassSystemMP::GetWorldToScreenScale
==============
*/
float CgCompassSystemMP::GetWorldToScreenScale(CgCompassSystemMP *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+0FB00h] }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::IncreaseRadarTime
==============
*/
void CgCompassSystemMP::IncreaseRadarTime(CgCompassSystemMP *this)
{
  _RBX = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2085, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CgCompassSystemMP::IsRadarSweepEnabled(this, _RBX) )
  {
    if ( !this->m_isBigMapMinimap )
    {
      __asm
      {
        vmovaps [rsp+48h+var_18], xmm6
        vmovss  xmm6, dword ptr [rbx+0B39B4h]
      }
      CG_CompassMP_GetRadarUpdateTime(_RBX);
      __asm
      {
        vmovd   xmm2, dword ptr [rbx+65E4h]
        vcvtdq2ps xmm2, xmm2
        vdivss  xmm0, xmm2, xmm0
        vaddss  xmm4, xmm0, dword ptr [rbx+0B39B4h]
        vxorps  xmm2, xmm2, xmm2
        vroundss xmm2, xmm2, xmm4, 1
        vsubss  xmm2, xmm4, xmm2; newRadarProgress
        vmovaps xmm1, xmm6; oldRadarProgress
        vmovss  dword ptr [rbx+0B39B4h], xmm2
      }
      CgCompassSystemMP::PingEnemyPlayers(this, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
    }
  }
  else
  {
    _RBX->radarProgress = 0.0;
  }
}

/*
==============
CgCompassSystemMP::InitCompass
==============
*/
void CgCompassSystemMP::InitCompass(CgCompassSystemMP *this)
{
  const char *v5; 
  char v8; 
  const char *v9; 
  StringTable *v10; 
  const char *v12; 
  StringTable *v14; 
  const char *v17; 
  StringTable *v18; 
  const char *v21; 
  StringTable *v22; 
  const char *v25; 
  StringTable *v26; 
  const char *v29; 
  bool v30; 
  const char *v31; 
  StringTable *v32; 
  const char *v34; 
  StringTable *v35; 
  const char *v37; 
  GfxImage *v38; 
  StringTable *v39; 
  const char *v40; 
  StringTable *v41; 
  const char *v43; 
  StringTable *v44; 
  const char *v46; 
  StringTable *v47; 
  const char *v49; 
  StringTable *v50; 
  const char *v52; 
  StringTable *v53; 
  const char *v55; 
  StringTable *v56; 
  const char *v58; 
  int v59; 
  StringTable *v60; 
  const char *v61; 
  const char *v62; 
  int v63; 
  StringTable *v64; 
  const char *v65; 
  StringTable *tablePtr; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  this->InitCompassColors(this);
  Sys_CreateReadWriteLock(&_RBX->m_compassPlaneLock);
  Sys_CreateReadWriteLock(&_RBX->m_compassTurretLock);
  Sys_CreateReadWriteLock(&_RBX->m_compassMissileLock);
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  StringTable_GetAsset("mp/mapInfo.csv", (const StringTable **)&tablePtr);
  v5 = StringTable_Lookup(tablePtr, 0, cls.m_activeGameMapName, 4);
  *(double *)&_XMM0 = atof(v5);
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm1, xmm7
    vmovss  dword ptr [rbx+0FABCh], xmm1
  }
  if ( v8 )
    _RBX->m_croppedMapZoom = 1.0;
  v9 = StringTable_Lookup(tablePtr, 0, cls.m_activeGameMapName, 7);
  *(double *)&_XMM0 = atof(v9);
  v10 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+0FAC0h], xmm1
  }
  v12 = StringTable_Lookup(v10, 0, cls.m_activeGameMapName, 8);
  *(double *)&_XMM0 = atof(v12);
  __asm { vmovss  xmm6, cs:__real@3f000000 }
  v14 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vaddss  xmm1, xmm1, xmm6
    vmovss  dword ptr [rbx+0FAC4h], xmm1
  }
  v17 = StringTable_Lookup(v14, 0, cls.m_activeGameMapName, 9);
  *(double *)&_XMM0 = atof(v17);
  v18 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rbx+0FAC8h], xmm2
  }
  v21 = StringTable_Lookup(v18, 0, cls.m_activeGameMapName, 34);
  *(double *)&_XMM0 = atof(v21);
  v22 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rbx+0FAB0h], xmm2
  }
  v25 = StringTable_Lookup(v22, 0, cls.m_activeGameMapName, 35);
  *(double *)&_XMM0 = atof(v25);
  v26 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rbx+0FAB4h], xmm2
  }
  v29 = StringTable_Lookup(v26, 0, cls.m_activeGameMapName, 17);
  v30 = atoi(v29) != 0;
  _RBX->m_isBigMapMinimap = v30;
  if ( v30 )
  {
    v31 = StringTable_Lookup(tablePtr, 0, cls.m_activeGameMapName, 19);
    *(double *)&_XMM0 = atof(v31);
    v32 = tablePtr;
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rbx+0FAD8h], xmm1
    }
    v34 = StringTable_Lookup(v32, 0, cls.m_activeGameMapName, 20);
    *(double *)&_XMM0 = atof(v34);
    v35 = tablePtr;
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rbx+0FADCh], xmm1
    }
    v37 = StringTable_Lookup(v35, 0, cls.m_activeGameMapName, 25);
    *(double *)&_XMM0 = atof(v37);
    __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
  }
  else
  {
    *(_QWORD *)&_RBX->m_bigMapRange = 0i64;
  }
  __asm { vmovss  dword ptr [rbx+0FAE0h], xmm7 }
  _RBX->m_scramblersUpdated = 0;
  _RBX->m_uiTravelLineMaterial = Image_Register("white", IMAGE_TRACK_HUD);
  v38 = Image_Register("ui_mp_br_mapmenu_ping_cursor", IMAGE_TRACK_HUD);
  v39 = tablePtr;
  _RBX->m_uiMapPingCrosshair = v38;
  v40 = StringTable_Lookup(v39, 0, cls.m_activeGameMapName, 36);
  *(double *)&_XMM0 = atof(v40);
  v41 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+0FB04h], xmm1
  }
  v43 = StringTable_Lookup(v41, 0, cls.m_activeGameMapName, 37);
  *(double *)&_XMM0 = atof(v43);
  v44 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+0FB08h], xmm1
  }
  v46 = StringTable_Lookup(v44, 0, cls.m_activeGameMapName, 38);
  *(double *)&_XMM0 = atof(v46);
  v47 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+0FB0Ch], xmm1
  }
  v49 = StringTable_Lookup(v47, 0, cls.m_activeGameMapName, 39);
  *(double *)&_XMM0 = atof(v49);
  v50 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+0FB10h], xmm1
  }
  v52 = StringTable_Lookup(v50, 0, cls.m_activeGameMapName, 40);
  *(double *)&_XMM0 = atof(v52);
  v53 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+0FB14h], xmm1
  }
  v55 = StringTable_Lookup(v53, 0, cls.m_activeGameMapName, 41);
  *(double *)&_XMM0 = atof(v55);
  v56 = tablePtr;
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+0FAE4h], xmm1
  }
  v58 = StringTable_Lookup(v56, 0, cls.m_activeGameMapName, 42);
  v59 = atoi(v58);
  v60 = tablePtr;
  _RBX->m_bigMapUAVPingDuration = v59;
  v61 = StringTable_Lookup(v60, 0, cls.m_activeGameMapName, 43);
  _RBX->m_bigMapUAVPingIntervalTime = atoi(v61);
  v62 = StringTable_Lookup(tablePtr, 0, cls.m_activeGameMapName, 44);
  v63 = atoi(v62);
  v64 = tablePtr;
  _RBX->m_bigMapUAVPingIntervalTimeSlow = v63;
  v65 = StringTable_Lookup(v64, 0, cls.m_activeGameMapName, 45);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  _RBX->m_bigMapUAVPingIntervalTimeFast = atoi(v65);
}

/*
==============
CgCompassSystemMP::InitCompassColors
==============
*/

void __fastcall CgCompassSystemMP::InitCompassColors(CgCompassSystemMP *this, double _XMM1_8)
{
  int ControllerFromClient; 
  LocalClientNum_t m_localClientNum; 
  DDLContext *DDLContext; 
  bool v12; 
  char v13; 
  int v93; 
  DDLState toState; 
  DDLState fromState; 
  DDLState result; 
  int v99; 
  int v100; 
  int v101; 

  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+fromState.member], xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+toState.member], xmm0 }
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  if ( !CL_AllLocalClientsInactive() && !Com_FrontEnd_IsInFrontEnd() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
    if ( GamerProfile_IsProfileLoggedIn(ControllerFromClient) )
    {
      m_localClientNum = this->m_localClientNum;
      __asm
      {
        vmovaps [rsp+0D0h+var_30], xmm6
        vmovaps [rsp+0D0h+var_40], xmm7
      }
      LUI_COD_GetSwatchRGBColor(m_localClientNum, "HUD.friendlyTeam", &friendlyColors);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "HUD.party", &rgbColor);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "HUD.enemyTeam", &enemyColors);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "HUD.contested", (vec3_t *)&contestColor_0);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "HUD.you", &playerColors);
      DDLContext = GamerProfile_GetDDLContext(ControllerFromClient, MLG_SETTINGS);
      _RAX = DDL_GetRootState(&result, DDLContext->def);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+57h+fromState.isValid], ymm0
      }
      DDL_MoveToName(&fromState, &toState, "shoutcaster_fe_team_identity");
      v12 = DDL_GetUInt(&toState, DDLContext) == 1;
      this->m_isUsingCustomCodCasterColor = v12;
      this->m_isUsingCustomCodCasterFriendlyColor = v12;
      this->m_isUsingCustomCodCasterEnemyColor = v12;
      DDL_MoveToName(&fromState, &toState, "shoutcaster_fe_team1_color");
      DDL_GetUInt(&toState, DDLContext);
      DDL_MoveToName(&fromState, &toState, "shoutcaster_fe_team1_secondary_color");
      DDL_GetUInt(&toState, DDLContext);
      DDL_MoveToName(&fromState, &toState, "shoutcaster_fe_team2_color");
      DDL_GetUInt(&toState, DDLContext);
      DDL_MoveToName(&fromState, &toState, "shoutcaster_fe_team2_secondary_color");
      DDL_GetUInt(&toState, DDLContext);
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vmovss  xmm6, cs:__real@3e4ccccd
        vaddss  xmm3, xmm6, dword ptr cs:friendlyColors+4
        vmovss  [rbp+57h+arg_10], xmm7
        vmovss  xmm5, cs:__real@3b808081
        vaddss  xmm4, xmm6, dword ptr cs:friendlyColors+8
        vaddss  xmm0, xmm6, dword ptr cs:friendlyColors
        vminss  xmm2, xmm0, xmm7
        vcomiss xmm3, xmm7
        vxorps  xmm1, xmm1, xmm1
        vmovss  cs:dword_147FA89F0, xmm2
        vmovss  [rbp+57h+arg_8], xmm3
        vmovss  [rbp+57h+arg_18], xmm4
      }
      _RAX = &v99;
      if ( !v13 )
        _RAX = &v100;
      __asm
      {
        vcomiss xmm4, xmm7
        vmovss  [rbp+57h+var_B0], xmm7
        vmovss  xmm0, dword ptr [rax]
        vmovss  cs:dword_147FA89F4, xmm0
      }
      _RAX = &v101;
      if ( !v13 )
        _RAX = &v93;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  cs:dword_147FA89F8, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm4, xmm0, xmm5
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr cs:xmmword_147FA89B0, xmm4
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm3, xmm0, xmm5
        vaddss  xmm0, xmm4, xmm6
        vminss  xmm4, xmm0, xmm7
        vmovss  dword ptr cs:xmmword_147FA89B0+4, xmm3
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm0, xmm2, xmm6
        vmovss  dword ptr cs:xmmword_147FA89B0+8, xmm2
        vminss  xmm2, xmm0, xmm7
        vxorps  xmm0, xmm0, xmm0
        vaddss  xmm1, xmm3, xmm6
        vminss  xmm3, xmm1, xmm7
        vxorps  xmm1, xmm1, xmm1
        vmovss  cs:dword_147FA89D8, xmm2
        vmovss  cs:dword_147FA89D0, xmm4
        vmovss  cs:dword_147FA89D4, xmm3
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm4, xmm0, xmm5
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm3, xmm0, xmm5
        vaddss  xmm0, xmm4, xmm6
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm2, xmm1, xmm5
        vmovss  cs:dword_147FA89C8, xmm2
        vaddss  xmm1, xmm3, xmm6
        vmovss  cs:dword_147FA89C0, xmm4
        vminss  xmm4, xmm0, xmm7
        vaddss  xmm0, xmm2, xmm6
        vminss  xmm2, xmm0, xmm7
        vmovss  cs:dword_147FA89E8, xmm2
        vmovss  cs:dword_147FA89C4, xmm3
        vminss  xmm3, xmm1, xmm7
        vaddss  xmm1, xmm6, dword ptr cs:enemyColors
        vminss  xmm2, xmm1, xmm7
        vaddss  xmm1, xmm6, dword ptr cs:enemyColors+4
        vmovss  cs:dword_147FA8A60, xmm2
        vminss  xmm2, xmm1, xmm7
        vmovss  cs:dword_147FA89E0, xmm4
        vmovss  cs:dword_147FA89E4, xmm3
        vaddss  xmm1, xmm6, dword ptr cs:enemyColors+8
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm4, xmm0, xmm5
        vxorps  xmm0, xmm0, xmm0
        vmovss  cs:dword_147FA8A64, xmm2
        vminss  xmm2, xmm1, xmm7
        vxorps  xmm1, xmm1, xmm1
        vmovss  cs:dword_147FA8A68, xmm2
        vmovss  dword ptr cs:xmmword_147FA8A20, xmm4
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm3, xmm0, xmm5
        vaddss  xmm0, xmm4, xmm6
        vminss  xmm4, xmm0, xmm7
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm0, xmm2, xmm6
        vaddss  xmm1, xmm3, xmm6
        vmovss  dword ptr cs:xmmword_147FA8A20+8, xmm2
        vminss  xmm2, xmm0, xmm7
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr cs:xmmword_147FA8A20+4, xmm3
        vminss  xmm3, xmm1, xmm7
        vmovss  cs:dword_147FA8A40, xmm4
        vxorps  xmm1, xmm1, xmm1
        vmovss  cs:dword_147FA8A44, xmm3
        vmovss  cs:dword_147FA8A48, xmm2
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm4, xmm0, xmm5
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm3, xmm0, xmm5
        vaddss  xmm0, xmm4, xmm6
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm1, xmm3, xmm6
        vmovss  cs:dword_147FA8A30, xmm4
        vminss  xmm4, xmm0, xmm7
        vaddss  xmm0, xmm2, xmm6
        vmovaps xmm6, [rsp+0D0h+var_30]
        vmovss  cs:dword_147FA8A34, xmm3
        vminss  xmm3, xmm1, xmm7
        vmovss  cs:dword_147FA8A38, xmm2
        vminss  xmm2, xmm0, xmm7
        vmovaps xmm7, [rsp+0D0h+var_40]
        vmovss  cs:dword_147FA8A58, xmm2
        vmovss  cs:dword_147FA8A50, xmm4
        vmovss  cs:dword_147FA8A54, xmm3
      }
    }
    else
    {
      Com_PrintError(13, "Attempting to InitCompassColors without a profile logged in.  Aborting.\n");
    }
  }
}

/*
==============
CgCompassSystemMP::InitLocks
==============
*/
void CgCompassSystemMP::InitLocks(CgCompassSystemMP *this)
{
  Sys_CreateReadWriteLock(&this->m_compassPlaneLock);
  Sys_CreateReadWriteLock(&this->m_compassTurretLock);
  Sys_CreateReadWriteLock(&this->m_compassMissileLock);
}

/*
==============
CgCompassSystemMP::IsActorWithinFadeTime
==============
*/

bool __fastcall CgCompassSystemMP::IsActorWithinFadeTime(CgCompassSystemMP *this, const int *beginFadeTime, __int64 a3, double _XMM3_8)
{
  char v10; 

  _RBX = DVARFLT_compassSoundPingFadeTime;
  if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6976, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassSoundPingFadeTime, \"compassSoundPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassSoundPingFadeTime ) > 0.0f") )
    __debugbreak();
  CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  _RBX = DVARFLT_compassSoundPingFadeTime;
  if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, dword ptr [rdi+65ECh]
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm3, xmm2
  }
  return v10 && *beginFadeTime;
}

/*
==============
CgCompassSystemMP::IsActorWithinPingTime
==============
*/

bool __fastcall CgCompassSystemMP::IsActorWithinPingTime(CgCompassSystemMP *this, const int *beginRadarFadeTime, __int64 a3, double _XMM3_8)
{
  char v10; 

  _RBX = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 7014, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
    __debugbreak();
  CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  _RBX = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, dword ptr [rdi+65ECh]
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm3, xmm2
  }
  return v10 && *beginRadarFadeTime;
}

/*
==============
CgCompassSystemMP::IsBigMapMinimap
==============
*/
_BOOL8 CgCompassSystemMP::IsBigMapMinimap(CgCompassSystemMP *this)
{
  return this->m_isBigMapMinimap;
}

/*
==============
CgCompassSystemMP::IsEnemyFullyVisible
==============
*/
bool CgCompassSystemMP::IsEnemyFullyVisible(CgCompassSystemMP *this, const CompassActorMP *actor)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v4; 
  CgGlobalsMP *v5; 
  bool HasPerk; 
  const ScriptableEventCompassIconDef *iconState; 
  bool result; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v4 = DVARBOOL_bg_compassShowEnemies;
  v5 = LocalClientGlobals;
  if ( !DVARBOOL_bg_compassShowEnemies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassShowEnemies") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  result = v4->current.enabled || v5->m_isMLGSpectator || (HasPerk = BG_HasPerk(&actor->perks, 0x2Eu), BG_HasPerk(&actor->perks, 0x2Fu)) || HasPerk || (iconState = actor->iconState) != NULL && iconState->enemyCompassIconAlwaysVisible || actor->wasPinged;
  return result;
}

/*
==============
CgCompassSystemMP::IsItemFiltered
==============
*/
bool CgCompassSystemMP::IsItemFiltered(CgCompassSystemMP *this, TacMapFilterFlags flag)
{
  return 0;
}

/*
==============
CgCompassSystemMP::IsObjectiveFiltered
==============
*/
bool CgCompassSystemMP::IsObjectiveFiltered(CgCompassSystemMP *this, CompassType type, ObjectiveBackground background)
{
  return 0;
}

/*
==============
CgCompassSystemMP::IsObjectiveMini
==============
*/
bool CgCompassSystemMP::IsObjectiveMini(CgCompassSystemMP *this, CompassType compassType, ObjectiveBackground background)
{
  return 0;
}

/*
==============
CgCompassSystemMP::IsRadarSweepEnabled
==============
*/
bool CgCompassSystemMP::IsRadarSweepEnabled(CgCompassSystemMP *this, const CgGlobalsMP *const cgameGlob)
{
  char v10; 
  char v11; 

  if ( cgameGlob->m_isMLGSpectator || !this->m_radarSweepEnabled )
    return 0;
  if ( cgameGlob->predictedPlayerState.radarEnabled )
    return 1;
  if ( cgameGlob->predictedPlayerState.radarOneOffSweepTime <= 0 )
    return 0;
  *(float *)&_XMM0 = CG_CompassMP_GetRadarUpdateTime(cgameGlob);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbx+30Ch]
    vaddss  xmm2, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65ECh]
    vcomiss xmm2, xmm0
  }
  return !(v10 | v11);
}

/*
==============
CgCompassSystemMP::IsVehicleFiltered
==============
*/
bool CgCompassSystemMP::IsVehicleFiltered(CgCompassSystemMP *this, CompassType compassType, const centity_t *cent)
{
  return 0;
}

/*
==============
CgCompassSystemMP::IsVehicleMini
==============
*/
bool CgCompassSystemMP::IsVehicleMini(CgCompassSystemMP *this, CompassType compassType)
{
  return 0;
}

/*
==============
CgCompassSystemMP::MapOffset
==============
*/
vec2_t CgCompassSystemMP::MapOffset(CgCompassSystemMP *this, vec2_t *a2)
{
  const dvar_t *v5; 
  char v14; 
  vec2_t m_mapOffset; 
  vec2_t result; 
  vec2_t v23; 

  v5 = DVARBOOL_compassEditSettingsEnabled;
  if ( !DVARBOOL_compassEditSettingsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsEnabled") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_58], xmm8
  }
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    goto LABEL_32;
  _RSI = DVARFLT_compassEditSettingsOffsetX;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !DVARFLT_compassEditSettingsOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vucomiss xmm6, dword ptr [rsi+28h] }
  if ( !v14 )
  {
    _RSI = DVARFLT_compassEditSettingsOffsetX;
    if ( !DVARFLT_compassEditSettingsOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm8, dword ptr [rsi+28h] }
  }
  _RSI = DVARFLT_compassEditSettingsOffsetY;
  if ( !DVARFLT_compassEditSettingsOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vucomiss xmm6, dword ptr [rsi+28h] }
  if ( !v14 )
  {
    _RSI = DVARFLT_compassEditSettingsOffsetY;
    if ( !DVARFLT_compassEditSettingsOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm7, dword ptr [rsi+28h] }
  }
  __asm { vucomiss xmm8, xmm6 }
  if ( !v14 )
    goto LABEL_23;
  __asm { vucomiss xmm7, xmm6 }
  if ( v14 )
  {
LABEL_32:
    if ( !CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->m_isMLGSpectator || this->m_isFullMap )
      m_mapOffset = this->m_mapOffset;
    else
      m_mapOffset = this->m_mapOffsetBorderless;
    *a2 = m_mapOffset;
  }
  else
  {
LABEL_23:
    __asm
    {
      vaddss  xmm0, xmm8, cs:__real@3f000000
      vaddss  xmm1, xmm7, cs:__real@3f000000
      vmovss  dword ptr [rsp+0A8h+var_68], xmm0
      vmovss  dword ptr [rsp+0A8h+var_68+4], xmm1
    }
    *a2 = v23;
  }
  __asm { vmovaps xmm8, [rsp+0A8h+var_58] }
  result = (vec2_t)a2;
  __asm
  {
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm6, [rsp+0A8h+var_38]
  }
  return result;
}

/*
==============
CgCompassSystemMP::MapRotationFactor
==============
*/
float CgCompassSystemMP::MapRotationFactor(CgCompassSystemMP *this)
{
  const dvar_t *v2; 
  char v6; 

  v2 = DVARBOOL_compassEditSettingsEnabled;
  _RDI = this;
  if ( !DVARBOOL_compassEditSettingsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    goto LABEL_13;
  _RBX = DVARFLT_compassEditSettingsRotation;
  if ( !DVARFLT_compassEditSettingsRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( v6 )
  {
    _RBX = DVARFLT_compassEditSettingsRotation;
    if ( !DVARFLT_compassEditSettingsRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsRotation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
LABEL_13:
    __asm { vmovss  xmm0, dword ptr [rdi+0FAC0h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemMP::MapShouldRotate
==============
*/

bool __fastcall CgCompassSystemMP::MapShouldRotate(CgCompassSystemMP *this, double _XMM1_8)
{
  char v4; 

  if ( this->m_isUsingTabletMode )
    return 0;
  *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystemMP *))this->MapRotationFactor)(this);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  return !v4;
}

/*
==============
CgCompassSystemMP::ModifyObjectiveScaleForPos
==============
*/
void CgCompassSystemMP::ModifyObjectiveScaleForPos(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *scaledRect, const vec2_t *xy, float *inOut_scale)
{
  CgCompassSystem *CompassSystem; 
  char v15; 
  char v16; 

  if ( compassType == COMPASS_TYPE_TACMAP )
  {
    _RBX = inOut_scale;
    _RSI = xy;
    if ( CG_GameInterface_PlayingBR() )
    {
      __asm
      {
        vmovaps [rsp+68h+var_18], xmm6
        vmovaps [rsp+68h+var_28], xmm7
        vmovaps [rsp+68h+var_38], xmm9
      }
      CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
      _RAX = CgCompassSystem::GetTacmapMapCenter(CompassSystem);
      __asm
      {
        vmovss  xmm6, dword ptr [rax]
        vmovss  xmm9, dword ptr [rax+4]
      }
      _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      __asm
      {
        vmovss  xmm0, cs:__real@40000000
        vdivss  xmm7, xmm0, dword ptr [rbp+20h]
        vmovss  xmm3, dword ptr [rsi]
        vmovss  xmm1, dword ptr [rax+4A084h]
        vmovss  xmm4, cs:__real@40c00000
        vsubss  xmm2, xmm1, xmm6
        vmovss  xmm6, cs:__real@3f000000
        vmulss  xmm0, xmm2, xmm7
        vaddss  xmm1, xmm0, cs:__real@3f800000
        vmulss  xmm0, xmm1, xmm6
        vmulss  xmm1, xmm0, dword ptr [rdi+8]
        vaddss  xmm2, xmm1, dword ptr [rdi]
        vsubss  xmm0, xmm3, xmm4
        vcomiss xmm2, xmm0
      }
      if ( !(v15 | v16) )
      {
        __asm
        {
          vaddss  xmm0, xmm3, xmm4
          vcomiss xmm2, xmm0
        }
        if ( v15 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax+4A088h]
            vmovss  xmm5, dword ptr [rsi+4]
            vsubss  xmm1, xmm0, xmm9
            vmulss  xmm2, xmm1, xmm7
            vaddss  xmm3, xmm2, cs:__real@3f800000
            vmulss  xmm0, xmm3, xmm6
            vmulss  xmm1, xmm0, dword ptr [rdi+0Ch]
            vaddss  xmm3, xmm1, dword ptr [rdi+4]
            vsubss  xmm2, xmm5, xmm4
            vcomiss xmm3, xmm2
          }
          if ( !(v15 | v16) )
          {
            __asm
            {
              vaddss  xmm0, xmm5, xmm4
              vcomiss xmm3, xmm0
            }
            if ( v15 )
            {
              __asm
              {
                vaddss  xmm1, xmm6, dword ptr [rbx]
                vmovss  dword ptr [rbx], xmm1
              }
            }
          }
        }
      }
      __asm
      {
        vmovaps xmm7, [rsp+68h+var_28]
        vmovaps xmm6, [rsp+68h+var_18]
        vmovaps xmm9, [rsp+68h+var_38]
      }
    }
  }
}

/*
==============
CgCompassSystemMP::PingEnemyPlayers
==============
*/

void __fastcall CgCompassSystemMP::PingEnemyPlayers(CgCompassSystemMP *this, double oldRadarProgress, double newRadarProgress)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  LocalClientNum_t m_localClientNum; 
  CompassActorMP *m_compassActors; 
  int v21; 
  cg_t *v29; 
  characterInfo_t *v30; 
  team_t team; 
  __int64 v40; 
  CompassTurretMP *m_compassTurrets; 
  __int64 v42; 
  int time; 
  int lastUpdateTime; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  CgCompassSystemMP *v66; 
  __int64 v67; 
  vec3_t outLine; 
  vec3_t pos; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  v67 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  v66 = this;
  __asm { vcomiss xmm1, xmm2 }
  if ( (unsigned __int64)&v61 == _security_cookie )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2015, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !LocalClientGlobals->inKillCam )
    {
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2024, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
        __debugbreak();
      __asm { vmovaps xmm1, xmm7; radarProgress }
      CgCompassSystemMP::GetRadarLine(this, *(float *)&_XMM1, &outLine);
      __asm { vmovaps xmm1, xmm6; radarProgress }
      CgCompassSystemMP::GetRadarLine(this, *(float *)&_XMM1, &pos);
      m_localClientNum = this->m_localClientNum;
      if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v63) = 2;
        LODWORD(v62) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2031, ASSERT_TYPE_ASSERT, "(unsigned)( m_localClientNum ) < (unsigned)( 2 )", "m_localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v62, v63) )
          __debugbreak();
      }
      m_compassActors = this->m_compassActors;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (int)ComCharacterLimits::ms_gameData.m_characterCount > 248 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v65) = 248;
        LODWORD(v64) = ComCharacterLimits::ms_gameData.m_characterCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2034, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetCharacterMaxCount() ) <= ( ((200 + 48)) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetCharacterMaxCount()", "MAX_COMPASS_ACTORS_MP", v64, v65) )
          __debugbreak();
      }
      v21 = 0;
      __asm
      {
        vmovss  xmm7, dword ptr [rsp+128h+outLine+8]
        vmovss  xmm8, dword ptr [rsp+128h+outLine+4]
        vmovss  xmm9, dword ptr [rsp+128h+outLine]
        vmovss  xmm10, dword ptr [rsp+128h+pos+8]
        vmovss  xmm11, dword ptr [rsp+128h+pos+4]
        vmovss  xmm12, dword ptr [rsp+128h+pos]
        vxorps  xmm6, xmm6, xmm6
      }
      while ( 1 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v21 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
          break;
        v29 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
        if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( v29->IsMP(v29) )
        {
          if ( v21 >= v29[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(v63) = v29[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(v62) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v62, v63) )
              __debugbreak();
          }
          v30 = (characterInfo_t *)(*(_QWORD *)&v29[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v21);
        }
        else
        {
          v30 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v29, v21);
        }
        if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2038, ASSERT_TYPE_ASSERT, "(entryInfo)", (const char *)&queryFormat, "entryInfo") )
          __debugbreak();
        if ( v30->infoValid )
        {
          team = CharacterInfo->team;
          if ( team && v30->team == team )
            m_compassActors->flags &= ~1u;
          else
            m_compassActors->flags |= 1u;
          m_compassActors->perks.array[0] = v30->perks.array[0];
          m_compassActors->perks.array[1] = v30->perks.array[1];
          if ( (m_compassActors->flags & 3) == 1 )
          {
            CompassActor_GetLastPosValue(m_compassActors, &pos);
            memset(&pos, 0, sizeof(pos));
            __asm
            {
              vmulss  xmm1, xmm9, dword ptr [rsp+128h+outLine]
              vmulss  xmm0, xmm8, dword ptr [rsp+128h+outLine+4]
              vaddss  xmm1, xmm1, xmm0
              vsubss  xmm4, xmm1, xmm7
              vmulss  xmm2, xmm12, dword ptr [rsp+128h+outLine]
              vmulss  xmm0, xmm11, dword ptr [rsp+128h+outLine+4]
              vaddss  xmm1, xmm2, xmm0
              vsubss  xmm3, xmm1, xmm10
              vcomiss xmm3, xmm6
              vcomiss xmm4, xmm6
            }
            memset(&outLine, 0, 8ui64);
          }
        }
        ++v21;
        ++m_compassActors;
      }
      v40 = (__int64)v66;
      m_compassTurrets = v66->m_compassTurrets;
      v42 = 32i64;
      do
      {
        time = LocalClientGlobals->time;
        lastUpdateTime = m_compassTurrets->lastUpdateTime;
        if ( lastUpdateTime <= time )
        {
          if ( lastUpdateTime && lastUpdateTime >= time - 500 && !CG_CompassMP_TurretIsAlwaysVisibleAndValid((LocalClientNum_t)*(_DWORD *)(v40 + 8), m_compassTurrets) )
          {
            __asm
            {
              vmulss  xmm1, xmm12, dword ptr [rdi+10h]
              vmulss  xmm0, xmm11, dword ptr [rdi+14h]
              vaddss  xmm1, xmm1, xmm0
              vsubss  xmm2, xmm1, xmm10
              vcomiss xmm2, xmm6
              vmulss  xmm1, xmm9, dword ptr [rdi+10h]
              vmulss  xmm0, xmm8, dword ptr [rdi+14h]
              vaddss  xmm1, xmm1, xmm0
              vsubss  xmm2, xmm1, xmm7
              vcomiss xmm2, xmm6
            }
          }
        }
        else
        {
          m_compassTurrets->lastUpdateTime = 0;
        }
        ++m_compassTurrets;
        --v42;
      }
      while ( v42 );
    }
  }
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
  }
}

/*
==============
StaticMlgCameras::ReadCSVs
==============
*/
void StaticMlgCameras::ReadCSVs(StaticMlgCameras *this)
{
  StaticMlgCameras *v5; 
  GfxImage *v6; 
  const char *Gametype; 
  __int64 v8; 
  StringTable **p_tablePtr; 
  _DWORD *v; 
  vec2_t *m_camAngles; 
  const StringTable *v13; 
  __int64 v14; 
  int v15; 
  const char *v16; 
  char *v17; 
  int v18; 
  const char *v21; 
  char *v22; 
  int v23; 
  bool v26; 
  __int64 v30; 
  __int64 v31; 
  StringTable **v32; 
  __int64 v33; 
  __int64 v34; 
  StringTable *table; 
  StringTable *tablePtr; 
  StringTable *v38; 
  char _Buffer[128]; 
  char dest[256]; 
  char v41; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v5 = this;
  if ( !this->m_mlgCamIcon )
  {
    v6 = Image_Register("compass_codcaster_cam", IMAGE_TRACK_HUD);
    v5->m_mlgCamIcon = v6;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6452, ASSERT_TYPE_ASSERT, "(m_mlgCamIcon != nullptr)", (const char *)&queryFormat, "m_mlgCamIcon != nullptr") )
      __debugbreak();
  }
  if ( !v5->m_mlgSelectedCamIcon )
    v5->m_mlgSelectedCamIcon = Image_Register("compass_codcaster_cam_selected", IMAGE_TRACK_HUD);
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  strncpy_s(v5->m_lastReadMapName, 0x40ui64, cls.m_activeGameMapName, 0x40ui64);
  StringTable_GetAsset("mp/CameraPositions.csv", (const StringTable **)&tablePtr);
  Gametype = Party_GetGametype();
  strncpy_s(v5->m_lastReadGametype, 0x40ui64, Gametype, 0x40ui64);
  memset_0(_Buffer, 0, sizeof(_Buffer));
  j_sprintf_s(_Buffer, 0x80ui64, "mp/CameraPositions_%s.csv", Gametype);
  StringTable_GetAsset(_Buffer, (const StringTable **)&v38);
  v8 = 0i64;
  v34 = 2i64;
  p_tablePtr = &tablePtr;
  v33 = 0i64;
  v32 = &tablePtr;
  v = (_DWORD *)v5->m_camOrigins[0].v;
  m_camAngles = v5->m_camAngles;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  do
  {
    v13 = *p_tablePtr;
    v14 = 0i64;
    table = *p_tablePtr;
    v15 = 2;
    do
    {
      v16 = StringTable_Lookup(v13, 0, cls.m_activeGameMapName, v15 - 1);
      if ( *v16 )
      {
        v5->m_newlyCreated[v8 + v14] = 0;
        memset_0(dest, 0, sizeof(dest));
        Core_strcpy(dest, 0x100ui64, v16);
        v17 = strtok(dest, " ");
        v18 = 0;
        _RDI = v;
        do
        {
          if ( v17 )
          {
            *(float *)&_XMM0 = strtof(v17, NULL);
            __asm { vmovaps xmm6, xmm0 }
            if ( (unsigned int)v18 >= 3 )
            {
              LODWORD(v31) = 3;
              LODWORD(v30) = v18;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v31) )
                __debugbreak();
            }
          }
          else
          {
            if ( (unsigned int)v18 >= 3 )
            {
              LODWORD(v31) = 3;
              LODWORD(v30) = v18;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v31) )
                __debugbreak();
            }
            __asm { vmovaps xmm6, xmm7 }
          }
          __asm { vmovss  dword ptr [rdi], xmm6 }
          v17 = strtok(NULL, " ");
          ++v18;
          ++_RDI;
        }
        while ( v18 < 3 );
        v13 = table;
        v21 = StringTable_Lookup(table, 0, cls.m_activeGameMapName, v15);
        Core_strcpy(dest, 0x100ui64, v21);
        v22 = strtok(dest, " ");
        v23 = 0;
        _RDI = m_camAngles;
        do
        {
          if ( v22 )
          {
            *(float *)&_XMM0 = strtof(v22, NULL);
            __asm { vmovaps xmm6, xmm0 }
            if ( (unsigned int)v23 >= 2 )
            {
              LODWORD(v31) = 2;
              LODWORD(v30) = v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v31) )
                __debugbreak();
            }
          }
          else
          {
            if ( (unsigned int)v23 >= 2 )
            {
              LODWORD(v31) = 2;
              LODWORD(v30) = v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v31) )
                __debugbreak();
            }
            __asm { vmovaps xmm6, xmm7 }
          }
          __asm { vmovss  dword ptr [rdi], xmm6 }
          v22 = strtok(NULL, " ");
          ++v23;
          _RDI = (vec2_t *)((char *)_RDI + 4);
        }
        while ( v23 < 2 );
        v5 = this;
        v8 = v33;
      }
      else
      {
        *v = 2139095039;
      }
      v15 += 2;
      ++v14;
      ++m_camAngles;
      v += 3;
    }
    while ( v14 < 4 );
    v8 += 4i64;
    p_tablePtr = v32 + 1;
    v33 = v8;
    v26 = v34-- == 1;
    ++v32;
  }
  while ( !v26 );
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
StaticMlgCameras::SetCameraToCurrentPosition
==============
*/
void StaticMlgCameras::SetCameraToCurrentPosition(StaticMlgCameras *this, int camIndex, const playerState_s *ps)
{
  __int64 v3; 
  __int64 v6; 

  v3 = camIndex;
  if ( (unsigned int)camIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6548, ASSERT_TYPE_ASSERT, "(camIndex < ( 4 + 4 ) && camIndex >= 0)", (const char *)&queryFormat, "camIndex < MAX_MLG_CAMERAS && camIndex >= 0") )
    __debugbreak();
  v6 = v3;
  this->m_camOrigins[v6].v[0] = ps->origin.v[0];
  this->m_camOrigins[v6].v[1] = ps->origin.v[1];
  this->m_camOrigins[v6].v[2] = ps->origin.v[2];
  this->m_camAngles[v3].v[0] = ps->viewangles.v[0];
  this->m_camAngles[v3].v[1] = ps->viewangles.v[1];
}

/*
==============
CgCompassSystemMP::SetCompassActorIcon
==============
*/
void CgCompassSystemMP::SetCompassActorIcon(CgCompassSystemMP *this, __int64 actorIndex, const ScriptableEventCompassIconDef *icon)
{
  *(_QWORD *)(this->GetCompassActor(this, actorIndex) + 128) = icon;
}

/*
==============
CgCompassSystemMP::SetCurrentFilters
==============
*/
void CgCompassSystemMP::SetCurrentFilters(CgCompassSystemMP *this, bitarray<32> filters)
{
  ;
}

/*
==============
CgCompassSystemMP::SetDebugCamSelectedIndex
==============
*/
void CgCompassSystemMP::SetDebugCamSelectedIndex(int debugCamSelectedIndex)
{
  staticMLGCameras.m_debugCamSelectedIndex = debugCamSelectedIndex;
}

/*
==============
CgCompassSystemMP::SetFullmap
==============
*/
void CgCompassSystemMP::SetFullmap(CgCompassSystemMP *this, bool isFullMap)
{
  this->m_isFullMap = isFullMap;
}

/*
==============
CgCompassSystemMP::SetLastStandEnabled
==============
*/
void CgCompassSystemMP::SetLastStandEnabled(CgCompassSystemMP *this, bool enabled)
{
  this->m_lastStandEnabled = enabled;
}

/*
==============
CgCompassSystemMP::SetRadarSweepEnabled
==============
*/
void CgCompassSystemMP::SetRadarSweepEnabled(CgCompassSystemMP *this, const bool radarSweepEnabled)
{
  this->m_radarSweepEnabled = radarSweepEnabled;
}

/*
==============
CgCompassSystemMP::ShutdownCompass
==============
*/
void CgCompassSystemMP::ShutdownCompass(CgCompassSystemMP *this)
{
  Sys_CloseReadWriteLock(&this->m_compassPlaneLock);
  Sys_CloseReadWriteLock(&this->m_compassTurretLock);
  Sys_CloseReadWriteLock(&this->m_compassMissileLock);
}

/*
==============
CgCompassSystemMP::ShutdownLocks
==============
*/
void CgCompassSystemMP::ShutdownLocks(CgCompassSystemMP *this)
{
  Sys_CloseReadWriteLock(&this->m_compassPlaneLock);
  Sys_CloseReadWriteLock(&this->m_compassTurretLock);
  Sys_CloseReadWriteLock(&this->m_compassMissileLock);
}

/*
==============
CgCompassSystemMP::TriggerPortableRadarPing
==============
*/
__int64 CgCompassSystemMP::TriggerPortableRadarPing(CgCompassSystemMP *this, const cg_t *const cgameGlob, const vec3_t *pos, const int duration, const float radius, unsigned int perkImmunityOverrideIndex)
{
  int v12; 
  unsigned int v13; 
  int v14; 
  int *p_startTime; 
  int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  bool v21; 
  bool v22; 
  unsigned int v27; 
  int v28; 

  _RDI = this;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  v12 = 0x7FFFFFFF;
  v13 = -1;
  v14 = 0;
  p_startTime = &_RDI->m_compassPortableRadarPingsList[0].startTime;
  do
  {
    v16 = *p_startTime;
    v17 = v14;
    v18 = v13;
    v19 = v12;
    if ( *p_startTime < v12 )
    {
      v13 = v14;
      if ( !v16 )
        break;
    }
    ++v14;
    p_startTime += 79;
    v12 = v16;
    v13 = v17;
    if ( v16 >= v19 )
      v12 = v19;
    if ( v16 >= v19 )
      v13 = v18;
  }
  while ( v14 < 10 );
  if ( _RDI->m_compassPortableRadarList[0].pingIdx == v13 )
    _RDI->m_compassPortableRadarList[0].pingIdx = -1;
  if ( _RDI->m_compassPortableRadarList[1].pingIdx == v13 )
    _RDI->m_compassPortableRadarList[1].pingIdx = -1;
  if ( _RDI->m_compassPortableRadarList[2].pingIdx == v13 )
    _RDI->m_compassPortableRadarList[2].pingIdx = -1;
  if ( _RDI->m_compassPortableRadarList[3].pingIdx == v13 )
    _RDI->m_compassPortableRadarList[3].pingIdx = -1;
  if ( v13 >= 0xA )
  {
    v28 = 10;
    v27 = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1596, ASSERT_TYPE_ASSERT, "(unsigned)( minTimePingIdx ) < (unsigned)( COMPASS_MAX_PORTABLE_RADAR_PINGS )", "minTimePingIdx doesn't index COMPASS_MAX_PORTABLE_RADAR_PINGS\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  _RSI = (int)v13;
  v21 = duration == 0;
  if ( duration <= 0 )
  {
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1599, ASSERT_TYPE_ASSERT, "(duration > 0)", (const char *)&queryFormat, "duration > 0");
    v21 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+68h+radius]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1600, ASSERT_TYPE_ASSERT, "(radius > 0)", (const char *)&queryFormat, "radius > 0") )
    __debugbreak();
  __asm { vmovss  dword ptr [rsi+rdi+0EE14h], xmm6 }
  _RDI->m_compassPortableRadarPingsList[_RSI].duration = duration;
  _RDI->m_compassPortableRadarPingsList[_RSI].startTime = cgameGlob->time;
  _RDI->m_compassPortableRadarPingsList[_RSI].perkImmunityOverrideIndex = perkImmunityOverrideIndex;
  _RDI->m_compassPortableRadarPingsList[_RSI].pos.v[0] = pos->v[0];
  _RDI->m_compassPortableRadarPingsList[_RSI].pos.v[1] = pos->v[1];
  _RDI->m_compassPortableRadarPingsList[_RSI].pos.v[2] = pos->v[2];
  memset_0(_RDI->m_compassPortableRadarPingsList[_RSI].actorPinged, 0, 0x120ui64);
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return v13;
}

/*
==============
CgCompassSystemMP::TurretSweep
==============
*/

void __fastcall CgCompassSystemMP::TurretSweep(CgCompassSystemMP *this, cg_t *const cgameGlob, CompassPortableRadarPing *const pingInfo, double maxDist)
{
  char v12; 
  int v14; 
  __int64 v15; 
  int time; 
  int v18; 

  _RBX = DCONST_DVARFLT_bg_compassPortableRadarMinVelocity;
  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !DCONST_DVARFLT_bg_compassPortableRadarMinVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarMinVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx+28h]
  }
  if ( v12 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_58], xmm7
      vmovss  xmm7, cs:__real@40000000
    }
    v14 = 0;
    v15 = 0i64;
    CgSoundSystemMP::GetSoundSystemMP((const LocalClientNum_t)cgameGlob->localClientNum);
    _RBX = &this->m_compassTurrets[0].lastUpdateTime;
    do
    {
      time = cgameGlob->time;
      v18 = *_RBX;
      if ( *_RBX <= time )
      {
        if ( v18 && v18 >= time - 500 && !CG_CompassMP_TurretIsAlwaysVisibleAndValid(this->m_localClientNum, (CompassTurretMP *)(_RBX - 1)) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+0Ch]
            vsubss  xmm2, xmm0, dword ptr [rbp+0]
            vmovss  xmm1, dword ptr [rbx+10h]
            vsubss  xmm0, xmm1, dword ptr [rbp+4]
            vmulss  xmm3, xmm0, xmm0
            vmulss  xmm2, xmm2, xmm2
            vaddss  xmm1, xmm3, xmm2
            vsqrtss xmm0, xmm1, xmm1
            vcomiss xmm0, xmm6
          }
        }
      }
      else
      {
        *_RBX = 0;
      }
      ++v14;
      ++v15;
      _RBX += 14;
    }
    while ( v14 < 32 );
    __asm { vmovaps xmm7, [rsp+0A8h+var_58] }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
}

/*
==============
CgCompassSystemMP::UpdateActors
==============
*/
void CgCompassSystemMP::UpdateActors(CgCompassSystemMP *this)
{
  CgCompassSystemMP *v4; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  unsigned int v8; 
  __int64 v9; 
  __int64 m_localClientNum; 
  CgEntitySystem *v14; 
  __int64 v15; 
  characterInfo_t *v16; 
  team_t v17; 
  unsigned int v18; 
  CgMLGSpectator *MLGSpectator; 
  team_t v20; 
  CompassActorMP *v21; 
  char HasPerk; 
  const dvar_t *v23; 
  char v24; 
  bool v25; 
  int flags; 
  unsigned int v27; 
  unsigned int v28; 
  const PartyData *GameParty; 
  int time; 
  int v46; 
  char *v47; 
  bool *i; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v50; 
  const char *PerkNameForCodeIndex; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  int pos; 
  CgStatic *v60; 
  team_t team; 
  char *v63; 
  __int64 v64; 
  vec3_t outOrigin; 
  __int64 v66[2]; 
  vec3_t v67; 
  __int64 v68; 
  char v69[256]; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  v68 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v4 = this;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2298, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v4->m_localClientNum);
  v60 = LocalClientStatics;
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2303, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  if ( CharacterInfo->infoValid )
  {
    team = CharacterInfo->team;
    if ( LocalClientGlobals->m_isMLGSpectator || CharacterInfo->team != TEAM_SPECTATOR )
    {
      memset_0(v69, 0, 0xF8ui64);
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_characterCount > 0xF8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2323, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetCharacterMaxCount() ) <= ( ( sizeof( *array_counter( clientInSnap ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetCharacterMaxCount()", "ARRAY_COUNT( clientInSnap )", ComCharacterLimits::ms_gameData.m_characterCount, 248) )
          __debugbreak();
      }
      v8 = 0;
      v63 = v69;
      v9 = 0i64;
      _RSI = (bitarray<64> *)&v4->m_compassActors[0].hadPerkRedBlip;
      __asm
      {
        vmovss  xmm6, [rsp+218h+var_180]
        vmovss  xmm7, cs:__real@447a0000
      }
      while ( 1 )
      {
        v64 = v9;
        pos = v8;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (int)v8 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        {
          v46 = 0;
          v47 = v69;
          for ( i = &v4->m_compassActors[0].wasSighted; ; i += 136 )
          {
            if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
              __debugbreak();
            if ( v46 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
              break;
            if ( !*v47 )
            {
              PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x2Eu);
              v50 = (unsigned int)PerkNetworkPriorityIndex;
              if ( PerkNetworkPriorityIndex >= 0 )
              {
                if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
                {
                  LODWORD(v58) = 64;
                  LODWORD(v57) = PerkNetworkPriorityIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v57, v58) )
                    __debugbreak();
                }
                *(_DWORD *)&i[4 * (v50 >> 5) - 41] &= ~(0x80000000 >> (v50 & 0x1F));
              }
              else
              {
                PerkNameForCodeIndex = BG_GetPerkNameForCodeIndex(0x2Eu);
                Com_PrintWarning(0, "WARNING: BG_UnsetPerk: Attempting to unset invalid perk '%s' - ensure perk is registered as valid networked perk\n", PerkNameForCodeIndex);
              }
              *(_WORD *)(i - 1) = 0;
              *(_QWORD *)(i - 21) = 0i64;
              *(_DWORD *)(i - 121) |= 2u;
            }
            ++v46;
            ++v47;
          }
          CgCompassSystemMP::UpdatePortableRadarPings(this);
          memset(&v64, 0, sizeof(v64));
          memset(v66, 0, 0xCui64);
          memset(&outOrigin, 0, sizeof(outOrigin));
          break;
        }
        m_localClientNum = v4->m_localClientNum;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v56) = v4->m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v56) )
            __debugbreak();
        }
        if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v56) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v55) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v55, v56) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
        {
          LODWORD(v56) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v56) )
            __debugbreak();
        }
        v14 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
        if ( v8 >= 0x800 )
        {
          LODWORD(v56) = 2048;
          LODWORD(v55) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v55, v56) )
            __debugbreak();
        }
        v15 = (__int64)v14->m_entities + v9;
        if ( (*(_BYTE *)(v15 + 648) & 1) == 0 )
          goto LABEL_105;
        v16 = CgStatic::GetCharacterInfo(LocalClientStatics, *(_DWORD *)(v15 + 544));
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2337, ASSERT_TYPE_ASSERT, "(playerInfo)", (const char *)&queryFormat, "playerInfo") )
          __debugbreak();
        if ( !v16->infoValid )
          goto LABEL_104;
        *v63 = 1;
        v17 = v16->team;
        if ( v4->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
        {
          LODWORD(v56) = 2;
          LODWORD(v55) = v4->m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2348, ASSERT_TYPE_ASSERT, "(unsigned)( m_localClientNum ) < (unsigned)( 2 )", "m_localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v55, v56) )
            __debugbreak();
        }
        if ( v8 >= 0x100 )
        {
          LODWORD(v56) = 256;
          LODWORD(v55) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2349, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( m_compassActors ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( m_compassActors )\n\t%i not in [0, %i)", v55, v56) )
            __debugbreak();
        }
        v18 = *(_DWORD *)(v15 + 544);
        _RSI[-1].array[0] = v18;
        if ( v18 == LocalClientGlobals->predictedPlayerState.clientNum )
          goto LABEL_51;
        if ( LocalClientGlobals->m_isMLGSpectator )
        {
          MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v4->m_localClientNum);
          v20 = team;
          if ( team == TEAM_SPECTATOR )
          {
            if ( v17 != CgMLGSpectator::GetTeam(MLGSpectator) )
              goto LABEL_71;
            goto LABEL_51;
          }
        }
        else
        {
          v25 = BG_IsAgentEntity((const entityState_t *)(v15 + 400)) && *(__int16 *)(v15 + 402) == LocalClientGlobals->predictedPlayerState.clientNum;
          v20 = team;
          if ( team == TEAM_ZERO )
          {
            if ( !v25 )
              goto LABEL_71;
            goto LABEL_51;
          }
        }
        if ( v17 != v20 )
        {
LABEL_71:
          v21 = (CompassActorMP *)&_RSI[-15];
          _RSI[-15].array[0] |= 1u;
          goto LABEL_52;
        }
LABEL_51:
        v21 = (CompassActorMP *)&_RSI[-15];
        _RSI[-15].array[0] &= ~1u;
LABEL_52:
        if ( (v21->flags & 1) != 0 )
        {
          HasPerk = BG_HasPerk(_RSI - 5, 0x2Eu);
          v23 = DCONST_DVARBOOL_compassEnemyRedBlipPerkFadeEnabled;
          if ( !DCONST_DVARBOOL_compassEnemyRedBlipPerkFadeEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnemyRedBlipPerkFadeEnabled") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v23);
          if ( v23->current.enabled && HasPerk != LOBYTE(_RSI->array[0]) )
          {
            LOBYTE(_RSI->array[0]) = HasPerk;
            if ( !HasPerk )
            {
              CompassActor_SetLastEnemyPosFromLastPos(v21);
              _RSI[-4].array[0] = _RSI[-14].array[0];
              _RSI[-2].array[0] = LocalClientGlobals->time;
            }
          }
          v8 = pos;
          v24 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, FIRING|0x20) && bitarray_base<bitarray<224>>::testBit(&LocalClientGlobals->predictedPlayerState.sightedEnemyPlayersMask, pos);
          if ( v24 != BYTE1(_RSI->array[0]) )
          {
            BYTE1(_RSI->array[0]) = v24;
            if ( !v24 )
            {
              CompassActor_SetLastEnemyPosFromLastPos(v21);
              _RSI[-4].array[0] = _RSI[-14].array[0];
              _RSI[-2].array[0] = LocalClientGlobals->time;
            }
          }
        }
        v21->flags |= 2u;
        _RSI[-5].array[0] = v16->perks.array[0];
        _RSI[-5].array[1] = v16->perks.array[1];
        if ( !BG_IsCharacterEntity((const entityState_t *)(v15 + 400)) )
          goto LABEL_103;
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v15 + 412), ACTIVE, 0x11u) )
        {
          v8 = pos;
LABEL_103:
          v4 = this;
LABEL_104:
          LocalClientStatics = v60;
          goto LABEL_105;
        }
        if ( *(_DWORD *)(v15 + 544) != pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2435, ASSERT_TYPE_ASSERT, "(cent->nextState.clientNum == index)", (const char *)&queryFormat, "cent->nextState.clientNum == index") )
          __debugbreak();
        if ( CG_Entity_IsNoDraw((const LocalClientNum_t)this->m_localClientNum, (const entityState_t *)(v15 + 400), NULL) )
        {
          v8 = pos;
          goto LABEL_103;
        }
        if ( BG_HasPerk(_RSI - 5, 0x1Bu) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v15 + 412), GameModeFlagValues::ms_mpValue, 0x1Au) )
          v21->flags |= 8u;
        else
          v21->flags &= ~8u;
        flags = v21->flags;
        if ( (*(_WORD *)(v15 + 496) & 0x4000) != 0 )
          v27 = flags | 0x10;
        else
          v27 = flags & 0xFFFFFFEF;
        v21->flags = v27;
        v21->flags = v27 & 0xFFFFFFFD;
        CG_GetPoseOrigin((const cpose_t *)v15, &outOrigin);
        v28 = _RSI[-15].array[1];
        if ( v28 && v28 != LocalClientGlobals->time )
        {
          if ( LOBYTE(_RSI[-14].array[1]) )
          {
            CompassActor_GetLastPosValue(v21, &v67);
            v66[0] = *(_QWORD *)v67.v;
            memset(&v67, 0, sizeof(v67));
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+218h+var_188]
              vsubss  xmm4, xmm0, dword ptr [rsp+218h+outOrigin]
              vmovss  xmm1, dword ptr [rsp+218h+var_188+4]
              vsubss  xmm2, xmm1, dword ptr [rsp+218h+outOrigin+4]
              vsubss  xmm5, xmm6, dword ptr [rsp+218h+outOrigin+8]
              vmulss  xmm3, xmm2, xmm2
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm4, xmm3, xmm0
              vmulss  xmm1, xmm5, xmm5
              vaddss  xmm2, xmm4, xmm1
              vsqrtss xmm3, xmm2, xmm2
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vdivss  xmm0, xmm7, xmm0
              vmulss  xmm1, xmm3, xmm0
              vmovss  dword ptr [rsi-1Ch], xmm1
            }
            HIBYTE(_RSI->array[0]) = 1;
          }
          else
          {
            HIBYTE(_RSI->array[0]) = 0;
          }
        }
        v4 = this;
        CgCompassSystemMP::ActorUpdatePos(this, v21, &outOrigin, (const centity_t *)v15);
        _RSI[-15].array[1] = LocalClientGlobals->time;
        _RSI[-14].array[0] = *(_DWORD *)(v15 + 76);
        if ( pos < cls.maxClients && !(unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)this->m_localClientNum) )
        {
          GameParty = Live_GetGameParty();
          if ( CL_IsPlayerTalking(GameParty, pos) )
            _RSI[-2].array[1] = LocalClientGlobals->time + 50;
        }
        v8 = pos;
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v15 + 412), LEGACY_MANTLE|LEGACY_MOUNT|0x10) )
          goto LABEL_104;
        time = LocalClientGlobals->time;
        LocalClientStatics = v60;
        if ( (signed int)_RSI[-3].array[0] <= time )
          _RSI[-3].array[0] = time + 3000;
LABEL_105:
        ++v8;
        v9 = v64 + 760;
        ++v63;
        _RSI += 17;
      }
    }
  }
  _R11 = &v70;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CgCompassSystemMP::UpdateMissileInfo
==============
*/
void CgCompassSystemMP::UpdateMissileInfo(CgCompassSystemMP *this, const centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  int otherEntityNum; 
  CompassMissile *Item; 
  char v13; 
  vec3_t outOrigin; 
  SecureVec3 out; 
  __int64 v27; 
  vec3_t forward; 

  v27 = -2i64;
  _RBX = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1504, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (_RBX->flags & 1) != 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1510, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1511, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    if ( !LocalClientGlobals->inKillCam && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&_RBX->nextState.lerp.eFlags, LEGACY_MANTLE|LEGACY_MOUNT|0x10) )
    {
      otherEntityNum = _RBX->nextState.otherEntityNum;
      if ( otherEntityNum != 2047 && otherEntityNum < ComCharacterLimits::GetCharacterMaxCount() )
      {
        if ( _RBX->nextState.eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1529, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_MISSILE)", (const char *)&queryFormat, "cent->nextState.eType == ET_MISSILE") )
          __debugbreak();
        Item = CgCompassSystem::GetItemInfo<CompassMissile>(this, _RBX->nextState.number, this->m_compassMissiles, 8u, &this->m_compassMissileLock);
        _RDI = (vec3_t *)Item;
        if ( Item )
        {
          Item->lastUpdateTime = LocalClientGlobals->time;
          Item->ownerNum = otherEntityNum;
          __asm { vmovss  xmm0, dword ptr [rbx+4Ch]; angle }
          *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
          __asm { vmovss  dword ptr [rdi+18h], xmm0 }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_compassHellfireTargetSpot, "bg_compassHellfireTargetSpot") )
          {
            AngleVectors(&_RBX->pose.angles, &forward, NULL, NULL);
            CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
            CG_CalcPlayerPos(&out, this->m_localClientNum);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+88h+out.___u0+8]
              vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
              vmovss  xmm5, dword ptr [rsp+88h+forward+8]
              vandps  xmm0, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
              vcomiss xmm0, cs:__real@3a83126f
            }
            if ( v13 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+88h+outOrigin]
                vmovss  dword ptr [rdi+0Ch], xmm0
                vmovss  xmm1, dword ptr [rsp+88h+outOrigin+4]
                vmovss  xmm0, dword ptr [rsp+88h+outOrigin+8]
              }
            }
            else
            {
              __asm
              {
                vaddss  xmm2, xmm1, dword ptr [rsp+88h+outOrigin+8]
                vmovss  xmm0, cs:__real@bf800000
                vdivss  xmm1, xmm0, xmm5
                vmulss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm3, dword ptr [rsp+88h+forward]
                vaddss  xmm1, xmm0, dword ptr [rsp+88h+outOrigin]
                vmovss  dword ptr [rdi+0Ch], xmm1
                vmulss  xmm0, xmm3, dword ptr [rsp+88h+forward+4]
                vaddss  xmm1, xmm0, dword ptr [rsp+88h+outOrigin+4]
                vmulss  xmm2, xmm5, xmm3
                vaddss  xmm0, xmm2, dword ptr [rsp+88h+outOrigin+8]
              }
            }
            __asm
            {
              vmovss  dword ptr [rdi+14h], xmm0
              vmovss  dword ptr [rdi+10h], xmm1
            }
            memset(&outOrigin, 0, sizeof(outOrigin));
          }
          else
          {
            CG_GetPoseOrigin(&_RBX->pose, _RDI + 1);
          }
        }
      }
    }
  }
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemMP::UpdatePingedActor
==============
*/
void CgCompassSystemMP::UpdatePingedActor(CgCompassSystemMP *this, int clientNum)
{
  bool *p_wasPinged; 
  int i; 
  __int64 v5; 
  __int64 v6; 

  p_wasPinged = &this->m_compassActors[0].wasPinged;
  for ( i = 0; i < 248; ++i )
  {
    if ( (unsigned int)i >= 0x100 )
    {
      LODWORD(v6) = 256;
      LODWORD(v5) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1619, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassActors ) ) + 0 ) )", "actorIndex doesn't index ARRAY_COUNT( m_compassActors )\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( *(_DWORD *)(p_wasPinged - 10) == clientNum )
      *p_wasPinged = 1;
    p_wasPinged += 136;
  }
}

/*
==============
CgCompassSystemMP::UpdatePlaneInfo
==============
*/
void CgCompassSystemMP::UpdatePlaneInfo(CgCompassSystemMP *this, int entityIndex)
{
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  CompassPlane *Item; 
  CompassPlane *v7; 
  unsigned int m_data; 
  unsigned int packedColorB_Fov; 
  __int64 v10; 
  unsigned int m_characterCount; 
  char *outName; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1437, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityIndex);
  if ( Entity->nextState.eType != ET_PLANE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1440, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLANE)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLANE") )
    __debugbreak();
  Item = CgCompassSystem::GetItemInfo<CompassPlane>(this, entityIndex, this->m_compassPlanes, 0x80u, &this->m_compassPlaneLock);
  v7 = Item;
  if ( Item )
  {
    Item->lastUpdateTime = LocalClientGlobals->time;
    CG_GetPoseOrigin(&Entity->pose, &Item->lastPos);
    v7->lastYaw = Entity->pose.angles.v[1];
    v7->ownerNum = Entity->nextState.lerp.u.anonymous.data[0];
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v7->ownerNum >= ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
      LODWORD(v10) = v7->ownerNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1452, ASSERT_TYPE_ASSERT, "(unsigned)( plane->ownerNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "plane->ownerNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v10, m_characterCount) )
        __debugbreak();
    }
    v7->planeMedia.friendly = NULL;
    v7->planeMedia.enemy = NULL;
    m_data = Entity->nextState.lerp.u.agentCorpse.attachModels[1].m_data;
    if ( m_data && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_MINIMAPICON, m_data, (const char **)&outName) )
      v7->planeMedia.friendly = Image_Register(outName, IMAGE_TRACK_HUD);
    packedColorB_Fov = Entity->nextState.lerp.u.primaryLight.packedColorB_Fov;
    if ( packedColorB_Fov )
    {
      if ( NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_MINIMAPICON, packedColorB_Fov, (const char **)&outName) )
        v7->planeMedia.enemy = Image_Register(outName, IMAGE_TRACK_HUD);
    }
  }
}

/*
==============
CgCompassSystemMP::UpdatePortableRadar
==============
*/
void CgCompassSystemMP::UpdatePortableRadar(CgCompassSystemMP *this, const int radarEntNum, const vec3_t *origin)
{
  const dvar_t *v6; 
  cg_t *LocalClientGlobals; 
  CompassPortableRadar *v8; 
  CompassPortableRadar *m_compassPortableRadarList; 
  __int64 v10; 
  const dvar_t *v11; 
  int integer; 
  unsigned int pingIdx; 
  __int64 v16; 
  float fmt; 
  __int64 perkImmunityOverrideIndex; 
  __int64 v19; 

  if ( this->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1899, ASSERT_TYPE_ASSERT, "(unsigned)( m_localClientNum ) < (unsigned)( 2 )", "m_localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  v6 = DCONST_DVARINT_bg_compassPortableRadarSweepTime;
  if ( !DCONST_DVARINT_bg_compassPortableRadarSweepTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarSweepTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1900, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_bg_compassPortableRadarSweepTime, \"bg_compassPortableRadarSweepTime\" ))", (const char *)&queryFormat, "Dconst_GetInt( bg_compassPortableRadarSweepTime )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1903, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->inKillCam )
  {
    v8 = NULL;
    m_compassPortableRadarList = this->m_compassPortableRadarList;
    v10 = 0i64;
    while ( m_compassPortableRadarList->entIndex != radarEntNum )
    {
      if ( !v8 && m_compassPortableRadarList->entIndex == 2047 )
        v8 = m_compassPortableRadarList;
      ++v10;
      ++m_compassPortableRadarList;
      if ( v10 >= 4 )
      {
        if ( v8 )
        {
          v8->entIndex = radarEntNum;
          v8->nextPing = 0;
          v8->pingIdx = -1;
          goto LABEL_23;
        }
        goto LABEL_24;
      }
    }
    v8 = m_compassPortableRadarList;
LABEL_23:
    if ( !v8 )
    {
LABEL_24:
      Com_PrintError(24, "Ran out of portable radar slots on the compass\n");
      return;
    }
    v8->isActive = 1;
    if ( v8->nextPing >= LocalClientGlobals->time )
    {
      pingIdx = v8->pingIdx;
      if ( pingIdx != -1 )
      {
        if ( pingIdx >= 0xA )
        {
          LODWORD(v19) = 10;
          LODWORD(perkImmunityOverrideIndex) = v8->pingIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1927, ASSERT_TYPE_ASSERT, "(unsigned)( portableRadar->pingIdx ) < (unsigned)( COMPASS_MAX_PORTABLE_RADAR_PINGS )", "portableRadar->pingIdx doesn't index COMPASS_MAX_PORTABLE_RADAR_PINGS\n\t%i not in [0, %i)", perkImmunityOverrideIndex, v19) )
            __debugbreak();
        }
        v16 = v8->pingIdx;
        this->m_compassPortableRadarPingsList[v16].pos.v[0] = origin->v[0];
        this->m_compassPortableRadarPingsList[v16].pos.v[1] = origin->v[1];
        this->m_compassPortableRadarPingsList[v16].pos.v[2] = origin->v[2];
      }
    }
    else
    {
      v11 = DCONST_DVARINT_bg_compassPortableRadarSweepTime;
      if ( !DCONST_DVARINT_bg_compassPortableRadarSweepTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarSweepTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      integer = v11->current.integer;
      _RDI = DCONST_DVARFLT_bg_compassPortableRadarRadius;
      if ( !DCONST_DVARFLT_bg_compassPortableRadarRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm0, dword ptr [rdi+28h] }
      v8->nextPing = integer + LocalClientGlobals->time;
      __asm { vmovss  dword ptr [rsp+68h+fmt], xmm0 }
      v8->pingIdx = CgCompassSystemMP::TriggerPortableRadarPing(this, LocalClientGlobals, origin, integer, fmt, 0x44u);
    }
  }
}

/*
==============
CgCompassSystemMP::UpdatePortableRadarPings
==============
*/

void __fastcall CgCompassSystemMP::UpdatePortableRadarPings(CgCompassSystemMP *this, double _XMM1_8)
{
  int *p_startTime; 
  __int64 v11; 
  int v16; 
  int time; 
  char v24; 
  int v25; 
  __int64 v26; 
  int v28; 
  int v29; 
  __int64 v41; 
  vec3_t localUsersPosition; 

  if ( this->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1810, ASSERT_TYPE_ASSERT, "(unsigned)( m_localClientNum ) < (unsigned)( 2 )", "m_localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  _R12 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1813, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_R12->inKillCam )
  {
    __asm { vmovss  xmm0, dword ptr [r12+40h] }
    p_startTime = &this->m_compassPortableRadarPingsList[0].startTime;
    v11 = 10i64;
    __asm
    {
      vmovaps [rsp+0E8h+var_38], xmm6
      vmovaps [rsp+0E8h+var_48], xmm7
      vmovss  xmm7, dword ptr [r12+38h]
      vmovaps [rsp+0E8h+var_58], xmm8
      vmovss  xmm8, dword ptr [r12+3Ch]
      vmovaps [rsp+0E8h+var_68], xmm9
      vmovss  xmm9, cs:__real@40000000
      vmovaps [rsp+0E8h+var_78], xmm10
      vmovss  dword ptr [rsp+0E8h+localUsersPosition+4], xmm8
      vxorps  xmm10, xmm10, xmm10
      vmovss  dword ptr [rsp+0E8h+localUsersPosition], xmm7
      vmovss  dword ptr [rsp+0E8h+localUsersPosition+8], xmm0
    }
    v41 = 10i64;
    do
    {
      v16 = p_startTime[1];
      time = _R12->time;
      if ( v16 + *p_startTime < time || time < *p_startTime )
      {
        *p_startTime = 0;
      }
      else
      {
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1841, ASSERT_TYPE_ASSERT, "(pingInfo->duration)", (const char *)&queryFormat, "pingInfo->duration") )
          __debugbreak();
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rsi+4]
          vcvtsi2ss xmm1, xmm1, eax
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm6, xmm1, dword ptr [rsi+8]
          vmovaps xmm3, xmm6; maxDist
        }
        CgCompassSystemMP::ActorSweep(this, _R12, (CompassPortableRadarPing *const)(p_startTime - 3), *(const float *)&_XMM3, &localUsersPosition);
        _RBX = DCONST_DVARFLT_bg_compassPortableRadarMinVelocity;
        if ( !DCONST_DVARFLT_bg_compassPortableRadarMinVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarMinVelocity") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vucomiss xmm10, dword ptr [rbx+28h] }
        if ( v24 )
        {
          v25 = 0;
          CgSoundSystemMP::GetSoundSystemMP((const LocalClientNum_t)_R12->localClientNum);
          v26 = 0i64;
          _RBX = &this->m_compassTurrets[0].lastUpdateTime;
          do
          {
            v28 = _R12->time;
            v29 = *_RBX;
            if ( *_RBX <= v28 )
            {
              if ( v29 && v29 >= v28 - 500 && !CG_CompassMP_TurretIsAlwaysVisibleAndValid(this->m_localClientNum, (CompassTurretMP *)(_RBX - 1)) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+0Ch]
                  vsubss  xmm2, xmm0, dword ptr [rsi-0Ch]
                  vmovss  xmm0, dword ptr [rbx+10h]
                  vsubss  xmm1, xmm0, dword ptr [rsi-8]
                  vmulss  xmm3, xmm1, xmm1
                  vmulss  xmm2, xmm2, xmm2
                  vaddss  xmm0, xmm3, xmm2
                  vsqrtss xmm1, xmm0, xmm0
                  vcomiss xmm1, xmm6
                }
              }
            }
            else
            {
              *_RBX = 0;
            }
            ++v25;
            ++v26;
            _RBX += 14;
          }
          while ( v25 < 32 );
          v11 = v41;
        }
      }
      p_startTime += 79;
      v41 = --v11;
    }
    while ( v11 );
    __asm
    {
      vmovaps xmm10, [rsp+0E8h+var_78]
      vmovaps xmm9, [rsp+0E8h+var_68]
      vmovaps xmm8, [rsp+0E8h+var_58]
      vmovaps xmm7, [rsp+0E8h+var_48]
      vmovaps xmm6, [rsp+0E8h+var_38]
    }
    if ( this->m_compassPortableRadarList[0].isActive )
      this->m_compassPortableRadarList[0].isActive = 0;
    else
      this->m_compassPortableRadarList[0].entIndex = 2047;
    if ( this->m_compassPortableRadarList[1].isActive )
      this->m_compassPortableRadarList[1].isActive = 0;
    else
      this->m_compassPortableRadarList[1].entIndex = 2047;
    if ( this->m_compassPortableRadarList[2].isActive )
      this->m_compassPortableRadarList[2].isActive = 0;
    else
      this->m_compassPortableRadarList[2].entIndex = 2047;
    if ( this->m_compassPortableRadarList[3].isActive )
      this->m_compassPortableRadarList[3].isActive = 0;
    else
      this->m_compassPortableRadarList[3].entIndex = 2047;
  }
}

/*
==============
CgCompassSystemMP::UpdateScrambler
==============
*/
void CgCompassSystemMP::UpdateScrambler(CgCompassSystemMP *this, const unsigned int _scramblerEntNum, const unsigned int ownerEntNum, const vec3_t *origin, const JammingType jammingType)
{
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  int v10; 
  int v11; 
  int *p_scramblerEntNum; 
  int v13; 
  __int64 v14; 
  __int64 v15; 

  v6 = ownerEntNum;
  if ( this->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1938, ASSERT_TYPE_ASSERT, "(unsigned)( m_localClientNum ) < (unsigned)( 2 )", "m_localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1941, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->inKillCam )
    return;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)v6 >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v15) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v14) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1949, ASSERT_TYPE_ASSERT, "(unsigned)( ownerEntNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "ownerEntNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v10 = 0;
  v11 = -1;
  p_scramblerEntNum = &this->m_compassScramblers[v6][0].scramblerEntNum;
  while ( 1 )
  {
    if ( *p_scramblerEntNum == 2047 )
    {
      v13 = v10;
      if ( v11 != -1 )
        v13 = v11;
      v11 = v13;
      goto LABEL_23;
    }
    if ( *p_scramblerEntNum == _scramblerEntNum )
      break;
LABEL_23:
    ++v10;
    p_scramblerEntNum += 4;
    if ( v10 >= 4 )
      goto LABEL_26;
  }
  v11 = v10;
LABEL_26:
  if ( v11 == -1 )
  {
    LODWORD(v15) = _scramblerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1973, ASSERT_TYPE_ASSERT, "(updateNdx != -1)", "%s\n\tCould not update scrambler, not enough available slots in CgCompassSystemMP. Increase COMPASS_MAX_SCRAMBLERS_PER_ENT. ScramblerEnt=%d, OwnerEnt=%d", "updateNdx != -1", v15, v6) )
      __debugbreak();
  }
  else
  {
    if ( !this->m_compassScramblers[v6][v11].isActive )
      ++this->m_scramblersUpdated;
    this->m_compassScramblers[v6][v11].jammingType = jammingType;
    this->m_compassScramblers[v6][v11].isActive = 1;
    this->m_compassScramblers[v6][v11].scramblerEntNum = _scramblerEntNum;
    this->m_compassScramblers[v6][v11].pos.v[0] = origin->v[0];
    this->m_compassScramblers[v6][v11].pos.v[1] = origin->v[1];
  }
}

/*
==============
CgCompassSystemMP::UpdateTurretInfo
==============
*/
void CgCompassSystemMP::UpdateTurretInfo(CgCompassSystemMP *this, const centity_t *cent)
{
  CgGlobalsMP *LocalClientGlobals; 
  CompassTurretMP *m_compassTurrets; 
  CompassTurretMP *Item; 
  char v7; 
  cg_t *v8; 
  unsigned int v9; 
  int time; 
  int lastUpdateTime; 
  int clientNum; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  team_t team; 
  const characterInfo_t *v16; 
  int number; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1344, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 )
    return;
  if ( cent->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1349, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1352, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1353, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  if ( LocalClientGlobals->inKillCam || !CgCompassSystemMP::CompassTurretIsPingType(cent) )
    return;
  m_compassTurrets = this->m_compassTurrets;
  number = cent->nextState.number;
  Item = CgCompassSystem::FindItemInfo<CompassTurretMP>(this, number, this->m_compassTurrets, 0x20u, &this->m_compassTurretLock);
  if ( Item )
    goto LABEL_39;
  v7 = *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1664i64);
  if ( v7 )
  {
    if ( this == (CgCompassSystemMP *)-64128i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 730, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
      __debugbreak();
    Sys_AcquireWriteLock(&this->m_compassTurretLock);
  }
  v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v9 = 0;
  time = v8->time;
  while ( m_compassTurrets->lastAccessTime == time )
  {
LABEL_28:
    ++v9;
    ++m_compassTurrets;
    if ( v9 >= 0x20 )
      goto LABEL_31;
  }
  lastUpdateTime = m_compassTurrets->lastUpdateTime;
  if ( lastUpdateTime )
  {
    if ( !Item || lastUpdateTime < Item->lastUpdateTime )
      Item = m_compassTurrets;
    goto LABEL_28;
  }
  Item = m_compassTurrets;
LABEL_31:
  if ( Item )
  {
    if ( time - Item->lastUpdateTime <= 500 )
      Com_PrintWarning(14, "CgCompassSystem::GetItemInfo: Recycling old compass items pretty quickly.  Need to raise max? (current max: %d)", 32i64);
    *(_QWORD *)&Item->entityNum = 0i64;
    *(_QWORD *)&Item->lastAccessTime = 0i64;
    *(_QWORD *)Item->positionCurrent.v = 0i64;
    *(_QWORD *)&Item->positionCurrent.z = 0i64;
    *(_QWORD *)&Item->positionLastKnown.y = 0i64;
    *(_QWORD *)&Item->yawCurrent = 0i64;
    *(_QWORD *)&Item->isFriendly = 0i64;
    Item->entityNum = number;
    Item->lastAccessTime = time;
  }
  else
  {
    Com_PrintError(14, "CgCompassSystem::GetItemInfo: Failed to get item info, list is full (%d)\n", 32i64);
  }
  if ( v7 )
    Sys_ReleaseWriteLock(&this->m_compassTurretLock);
  if ( Item )
  {
LABEL_39:
    CgCompassSystem::UpdateTurretInfoCommon(this, Item, this->m_localClientNum, cent);
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( cent->nextState.otherEntityNum == clientNum )
    {
      Item->isFriendly = 1;
    }
    else
    {
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.clientNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1389, ASSERT_TYPE_ASSERT, "(ownerCI)", (const char *)&queryFormat, "ownerCI") )
        __debugbreak();
      team = CharacterInfo->team;
      if ( team == TEAM_ZERO || team == TEAM_SPECTATOR )
      {
        Item->isFriendly = 0;
      }
      else
      {
        v16 = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1399, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
          __debugbreak();
        if ( LocalClientGlobals->m_isMLGSpectator )
          Item->isFriendly = team == TEAM_TWO;
        else
          Item->isFriendly = v16->team == team;
      }
    }
  }
}

/*
==============
StaticMlgCameras::WriteCamerasFile
==============
*/
void StaticMlgCameras::WriteCamerasFile(StaticMlgCameras *this, bool specificCameras)
{
  StaticMlgCameras *v3; 
  char *v5; 
  const char *m_lastReadMapName; 
  unsigned __int64 v7; 
  char *v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  bool v16; 
  unsigned __int64 v17; 
  unsigned __int64 v20; 
  __int64 v24; 
  __int64 v25; 
  int v27; 
  const char *v28; 
  char *fmt; 
  char *v32; 
  char *v33; 
  char v34[128]; 
  char v35[128]; 
  char dest[128]; 

  v3 = this;
  v33 = (char *)Mem_Virtual_Alloc(0x200ui64, "WriteCamerasFile", TRACK_DEBUG);
  v5 = v33;
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6558, ASSERT_TYPE_SANITY, "( fileBuffer )", (const char *)&queryFormat, "fileBuffer") )
    __debugbreak();
  m_lastReadMapName = v3->m_lastReadMapName;
  v7 = -1i64;
  v32 = v3->m_lastReadMapName;
  do
    ++v7;
  while ( m_lastReadMapName[v7] );
  if ( v7 >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6561, ASSERT_TYPE_SANITY, "( maxFileSize > mapNameSize )", (const char *)&queryFormat, "maxFileSize > mapNameSize") )
    __debugbreak();
  Core_strcpy(v33, v7 + 1, v3->m_lastReadMapName);
  v10 = &v33[v7];
  v11 = 512 - v7;
  v12 = 4 * (unsigned int)specificCameras;
  v13 = (unsigned int)(v12 + 4);
  if ( (unsigned int)v12 < v13 )
  {
    _R12 = (__int64)&v3->m_camAngles[v12];
    __asm
    {
      vmovaps [rsp+228h+var_48], xmm6
      vmovss  xmm6, cs:__real@7f7fffff
    }
    v17 = v13 - (unsigned int)v12;
    v16 = v17 == 0;
    _RBP = &this->m_camOrigins[v12].v[2];
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp-8]
        vucomiss xmm0, xmm6
      }
      if ( v16 )
      {
        Com_sprintf(v10, v11, ",,");
        if ( v11 < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6576, ASSERT_TYPE_ASSERT, "(sizeLeft >= commasOffset)", (const char *)&queryFormat, "sizeLeft >= commasOffset") )
          __debugbreak();
        v11 -= 2i64;
        v20 = 2i64;
      }
      else
      {
        __asm
        {
          vcvttss2si eax, dword ptr [rbp+0]
          vcvttss2si r9d, dword ptr [rbp-4]
          vcvttss2si r8d, xmm0
        }
        LODWORD(fmt) = _EAX;
        Com_sprintf<128>((char (*)[128])dest, "%d %d %d", _R8, _R9, fmt);
        v24 = -1i64;
        do
          v16 = dest[++v24] == 0;
        while ( !v16 );
        __asm
        {
          vcvttss2si r9d, dword ptr [r12+4]
          vcvttss2si r8d, dword ptr [r12]
        }
        Com_sprintf<128>((char (*)[128])v35, "%d %d %d", _R8, _R9, 0i64);
        v25 = -1i64;
        do
          v16 = v35[++v25] == 0;
        while ( !v16 );
        Com_sprintf(v10, v11, ",%s,%s", dest, v35);
        v20 = v25 + v24 + 2;
        if ( v11 < v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6593, ASSERT_TYPE_ASSERT, "(sizeLeft >= offset)", (const char *)&queryFormat, "sizeLeft >= offset") )
          __debugbreak();
        v11 -= v20;
      }
      v10 += v20;
      _RBP += 3;
      _R12 += 8i64;
      v16 = --v17 == 0;
    }
    while ( v17 );
    m_lastReadMapName = v32;
    v5 = v33;
    v3 = this;
    __asm { vmovaps xmm6, [rsp+228h+var_48] }
  }
  if ( specificCameras )
    Com_sprintf<128>((char (*)[128])v34, "mlgCameraEditor\\camerapositions_%s_%s.csv", m_lastReadMapName, v3->m_lastReadGametype);
  else
    Com_sprintf<128>((char (*)[128])v34, "mlgCameraEditor\\camerapositions_%s.csv", m_lastReadMapName);
  v27 = FS_WriteFile(v34, v5, 512 - v11);
  v28 = "Static cameras file %s saved";
  if ( !v27 )
    v28 = "Unable to save static cameras file %s. Read only ?";
  Com_PrintWarning(13, v28, v34);
  Mem_Virtual_Free(v5);
}

/*
==============
DrawText
==============
*/
void DrawText(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, const int fontHeight, const DrawTextPositionSettings *positionSettings, const GfxColor color, int maxLength, int renderFlags, int cursorPos, char cursorLetter, const Material *material, const Material *iconsMaterial, const FontDecodeStyle *decodeStyle, const FontGlowStyle *glowStyle)
{
  unsigned int v30; 
  int IsRightToLeft; 
  float v33; 
  FontCacheFXFlags v34; 
  int v35; 
  bool v37; 
  int v42; 
  unsigned int packed; 
  int v44; 
  int v45; 
  int v47; 
  char *v52; 
  bool v53; 
  unsigned int CharFromString; 
  unsigned int RandomLetter; 
  unsigned int v56; 
  unsigned __int8 v57; 
  char v58; 
  bool v59; 
  int v60; 
  GfxFont *FontHandleFromEnum; 
  int v62; 
  unsigned int v66; 
  unsigned __int8 v70; 
  const Material *v87; 
  int v89; 
  const Material *v108; 
  FontCacheFXFlags v109; 
  int v110; 
  char *v111; 
  const Material *v113; 
  unsigned __int8 v115; 
  char v116; 
  unsigned int v117; 
  __int64 v118; 
  GfxColor colorMyTeam; 
  bool Icon; 
  unsigned int v125; 
  DrawTextMode mode; 
  DrawTextMode v197; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  int *resultRandomCharCount; 
  float resultRandomCharCounta; 
  float resultRandomCharCountb; 
  float resultRandomCharCountc; 
  float resultRandomCharCountd; 
  float resultRandomCharCounte; 
  float resultRandomCharCountf; 
  float resultRandomCharCountg; 
  int *resultRandSeed; 
  float resultRandSeeda; 
  float resultRandSeedb; 
  float resultRandSeedc; 
  float resultRandSeedd; 
  float resultRandSeede; 
  float resultRandSeedf; 
  float resultRandSeedg; 
  float resultMaxLength; 
  float resultMaxLengtha; 
  float resultMaxLengthb; 
  float resultMaxLengthc; 
  float resultMaxLengthd; 
  float resultFirstRandCharFadePercent; 
  float resultFirstRandCharFadePercenta; 
  float resultFirstRandCharFadePercentb; 
  float resultFirstRandCharFadePercentc; 
  float resultFirstRandCharFadePercentd; 
  float v254; 
  float v255; 
  float v256; 
  float v257; 
  float v258; 
  float v259; 
  float v260; 
  float v261; 
  float v262; 
  int v263; 
  bool v264; 
  char v265; 
  unsigned int outColor; 
  int fontHeighta; 
  FontCacheFXFlags flags; 
  float outS0; 
  float outT0; 
  char *texta; 
  int v273; 
  int v274; 
  float v275[3]; 
  GfxImage *background[2]; 
  int v277; 
  float outT1; 
  float outS1; 
  char *v280; 
  GfxFont *fonta; 
  const Material *v282; 
  GfxCmdBufContext *v283; 
  int textHeight; 
  int v285; 
  GfxColor v286; 
  int seed; 
  GfxCmdBufContext v288; 
  const Material *v289; 
  FontGlowStyle *glowStylea; 
  int v291; 
  int v292; 
  int v293; 
  unsigned int v294; 
  unsigned int v295; 
  CachedGlyph outGlyph; 
  FontIconRenderInfo outIcon; 
  GfxFont *v298; 
  const Material *v299; 
  GfxCmdBufContext v300; 
  CachedGlyph v301; 

  __asm { vmovaps [rsp+2E0h+var_A0], xmm11 }
  _R12 = gfxContext;
  _R14 = positionSettings;
  v283 = gfxContext;
  glowStylea = (FontGlowStyle *)glowStyle;
  v299 = material;
  v282 = material;
  v289 = iconsMaterial;
  v285 = fontHeight;
  fonta = font;
  v286 = color;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3336, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3337, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3338, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !v289 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3340, ASSERT_TYPE_ASSERT, "(iconsMaterial)", (const char *)&queryFormat, "iconsMaterial") )
    __debugbreak();
  v30 = (unsigned int)renderFlags >> 12;
  LOBYTE(v30) = (renderFlags & 0x1000) != 0;
  v295 = v30;
  v294 = (unsigned int)renderFlags >> 13;
  IsRightToLeft = Language_IsRightToLeft();
  _RSI = _R12->source;
  v264 = IsRightToLeft != 0;
  v33 = 0.0;
  flags = FONT_CACHE_FX_NONE;
  v34 = FONT_CACHE_FX_NONE;
  v35 = 1;
  if ( glowStylea )
  {
    flags = FONT_CACHE_FX_DISTANCE_FIELD;
    v34 = FONT_CACHE_FX_DISTANCE_FIELD;
    RB_SetFontGlowStyleCodeConstants(_RSI, glowStylea);
  }
  v277 = LODWORD(v33);
  outS0 = v33;
  LODWORD(outT0) = v35;
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vmovss  [rbp+1E0h+var_23C], xmm11
  }
  if ( SetupPulseFXVars(_RSI, text, maxLength, renderFlags, decodeStyle, (int *)&outS0, (int *)&outT0, &v277, v275) )
  {
    v37 = positionSettings->mode == POSITION_2D;
    __asm
    {
      vmovaps [rsp+2E0h+var_70], xmm8
      vmovaps [rsp+2E0h+var_80], xmm9
      vmovaps [rsp+2E0h+var_C0], xmm13
      vmovss  xmm13, dword ptr [r14]
      vmovaps [rsp+2E0h+var_D0], xmm14
      vmovss  xmm14, dword ptr [r14+4]
      vmovaps [rsp+2E0h+var_E0], xmm15
    }
    if ( v37 )
      __asm { vxorps  xmm15, xmm15, xmm15 }
    else
      __asm { vmovss  xmm15, dword ptr [r14+8] }
    texta = (char *)text;
    __asm
    {
      vmovss  xmm8, dword ptr [rsi+2D9Ch]
      vmovss  [rbp+1E0h+var_23C], xmm8
    }
    v42 = SEH_PrintStrlen(text);
    packed = color.packed;
    v44 = v42 - v277;
    v45 = v277 - LODWORD(outS0);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( v264 )
      v45 = v44;
    v291 = v44;
    v292 = v45;
    v47 = 0;
    v293 = LODWORD(outS0) + v45;
    seed = LODWORD(outT0);
    v298 = fonta;
    v263 = 0;
    v274 = 0;
    v273 = 0;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, cs:__real@3a72b9d6
      vcvttss2si esi, xmm1
      vxorps  xmm9, xmm9, xmm9
    }
    textHeight = _ESI;
    __asm { vmovss  [rbp+1E0h+var_248], xmm9 }
    fontHeighta = v285;
    if ( CL_IsRenderingSplitScreen() )
      textHeight = 2 * _ESI;
    v52 = texta;
    if ( *texta )
    {
      __asm
      {
        vmovaps [rsp+2E0h+var_50], xmm6
        vmovaps [rsp+2E0h+var_60], xmm7
        vmovaps [rsp+2E0h+var_90], xmm10
        vmovaps [rsp+2E0h+var_B0], xmm12
      }
      while ( 1 )
      {
        if ( v273 >= v277 )
        {
LABEL_139:
          _R12 = v283;
          __asm
          {
            vmovaps xmm12, [rsp+2E0h+var_B0]
            vmovaps xmm10, [rsp+2E0h+var_90]
            vmovaps xmm7, [rsp+2E0h+var_60]
            vmovaps xmm6, [rsp+2E0h+var_50]
          }
          break;
        }
        if ( !v264 || (v265 = 0, v274 >= v291) )
          v265 = 1;
        v53 = v292 <= v274 && v274 < v293;
        v288.source = (GfxCmdBufSourceState *)v52;
        CharFromString = SEH_ReadCharFromString((const char **)&texta);
        v52 = texta;
        RandomLetter = CharFromString;
        v56 = CharFromString;
        if ( CharFromString != 94 || !texta || (v57 = *texta, (unsigned __int8)(*texta - 39) > 0x17u) )
        {
          LODWORD(background[0]) = 0;
          if ( v53 )
          {
            RandomLetter = R_FontGetRandomLetter(seed);
            v52 = texta;
            LODWORD(background[0]) = 64;
            seed = 1103515245 * seed + 12345;
          }
          if ( RandomLetter == 10 )
          {
            v47 = v263;
            if ( positionSettings->mode == POSITION_2D )
            {
              __asm
              {
                vmovss  xmm13, dword ptr [r14]
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, [rsp+2E0h+fontHeight]
                vmulss  xmm1, xmm0, dword ptr [r14+2Ch]
                vaddss  xmm14, xmm14, xmm1
              }
            }
            goto LABEL_138;
          }
          if ( RandomLetter == 13 )
          {
            v47 = v263;
            if ( positionSettings->mode == POSITION_2D )
              __asm { vmovss  xmm13, dword ptr [r14] }
            goto LABEL_138;
          }
          __asm { vmovss  xmm2, dword ptr [r14+2Ch]; fontScale }
          if ( RandomLetter == 9 )
            RandomLetter = 32;
          memset(&outGlyph, 0, sizeof(outGlyph));
          Icon = FontIcons_GetIcon(RandomLetter, fontHeighta, *(float *)&_XMM2, v294 & 1, &outIcon);
          if ( Icon )
          {
            __asm { vmovss  xmm12, [rbp+1E0h+outIcon.advance] }
          }
          else
          {
            R_GetCharacterGlyphWithFlags(fonta, fontHeighta, RandomLetter, &outGlyph, flags);
            if ( RandomLetter == v56 )
            {
              __asm
              {
                vxorps  xmm12, xmm12, xmm12
                vcvtsi2ss xmm12, xmm12, eax
              }
            }
            else
            {
              R_GetCharacterGlyphWithFlags(fonta, fontHeighta, v56, &v301, flags);
              __asm
              {
                vxorps  xmm12, xmm12, xmm12
                vcvtsi2ss xmm12, xmm12, eax
              }
            }
          }
          if ( (_BYTE)v295 || !Icon )
          {
            v125 = packed;
            outColor = packed;
          }
          else if ( R_TryProcessKBMLetterColor(packed, RandomLetter, &outColor) )
          {
            v125 = outColor;
          }
          else
          {
            v125 = R_ProcessGPadLetterColor(packed, RandomLetter);
            outColor = v125;
          }
          if ( v53 )
          {
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, eax
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, dword ptr [rbp+1E0h+background]
              vmulss  xmm1, xmm1, xmm0
              vmulss  xmm2, xmm1, cs:__real@3b808081
              vcvttss2si eax, xmm2
            }
            HIBYTE(outColor) = _EAX;
            v125 = outColor;
          }
          mode = positionSettings->mode;
          __asm
          {
            vmovss  xmm10, dword ptr [r14+28h]
            vmovss  xmm11, dword ptr [r14+2Ch]
          }
          if ( Icon )
          {
            __asm
            {
              vmulss  xmm3, xmm10, [rbp+1E0h+outIcon.xOffset]
              vmulss  xmm4, xmm11, [rbp+1E0h+outIcon.yOffset]
            }
            if ( mode )
              goto LABEL_117;
LABEL_123:
            __asm
            {
              vmovss  xmm9, dword ptr [r14+0Ch]
              vaddss  xmm0, xmm3, xmm13
              vaddss  xmm2, xmm4, xmm14
              vsubss  xmm5, xmm2, dword ptr [r14+4]
              vsubss  xmm4, xmm0, dword ptr [r14]
              vmulss  xmm0, xmm4, dword ptr [r14+8]
              vaddss  xmm3, xmm0, dword ptr [r14]
              vmulss  xmm1, xmm5, xmm9
              vdivss  xmm2, xmm1, xmm8
              vmulss  xmm1, xmm5, dword ptr [r14+8]
              vsubss  xmm8, xmm3, xmm2
              vaddss  xmm2, xmm1, dword ptr [r14+4]
              vmulss  xmm0, xmm4, xmm9
              vmulss  xmm3, xmm0, [rbp+1E0h+var_23C]
              vaddss  xmm6, xmm3, xmm2
            }
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, ecx
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, ecx
              vmulss  xmm4, xmm1, xmm11
              vmulss  xmm3, xmm0, xmm10
            }
            if ( mode == POSITION_2D )
              goto LABEL_123;
LABEL_117:
            __asm
            {
              vmulss  xmm1, xmm4, dword ptr [r14+18h]
              vmovss  xmm9, dword ptr [r14+0Ch]
              vmulss  xmm0, xmm3, xmm9
              vaddss  xmm2, xmm0, xmm13
              vmulss  xmm0, xmm3, dword ptr [r14+10h]
              vaddss  xmm8, xmm2, xmm1
              vmulss  xmm1, xmm4, dword ptr [r14+1Ch]
              vaddss  xmm2, xmm0, xmm14
              vmulss  xmm0, xmm3, dword ptr [r14+14h]
              vaddss  xmm6, xmm2, xmm1
              vmulss  xmm1, xmm4, dword ptr [r14+20h]
              vaddss  xmm2, xmm0, xmm15
              vaddss  xmm0, xmm2, xmm1
              vmovss  dword ptr [rbp+1E0h+var_130+8], xmm0
            }
          }
          __asm
          {
            vmovss  dword ptr [rbp+1E0h+var_130], xmm8
            vmovss  dword ptr [rbp+1E0h+var_130+4], xmm6
          }
          if ( v265 )
          {
            ++v273;
            if ( Icon )
            {
              _RSI = &v283->source;
              __asm
              {
                vmovups xmm0, xmmword ptr [rsi]
                vmovups xmmword ptr [rbp+1E0h+background], xmm0
              }
              RB_EndSurfaceIfNeeded((GfxCmdBufContext *)background);
              R_SetCodeImageTextureInternal(*_RSI, 4u, outIcon.image, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(3724)");
              __asm
              {
                vmovss  xmm0, cs:__real@3f800000
                vxorps  xmm11, xmm11, xmm11
                vmovss  [rbp+1E0h+outS1], xmm0
                vmovss  [rbp+1E0h+outT1], xmm0
                vmovss  [rbp+1E0h+outS0], xmm11
                vmovss  [rbp+1E0h+outT0], xmm11
              }
              Image_Process2DTextureCoordsForAtlasing(outIcon.image, &outS0, &outS1, &outT0, &outT1);
              if ( positionSettings->mode )
              {
                __asm
                {
                  vmovss  xmm3, [rbp+1E0h+outIcon.height]; glyphHeight
                  vmovss  xmm2, [rbp+1E0h+outIcon.width]; glyphWidth
                }
                DrawText_Generate3DCharVerts((const vec3_t *)&v300, positionSettings, *(float *)&_XMM2, *(float *)&_XMM3, (vec3_t (*)[4])&v301);
                __asm
                {
                  vmovups xmm0, xmmword ptr [rsi]
                  vmovss  xmm1, [rbp+1E0h+outS1]
                  vmovss  xmm3, [rbp+1E0h+outS0]
                  vmovups xmmword ptr [rbp+1E0h+background], xmm0
                  vmovss  xmm0, [rbp+1E0h+outT1]
                  vmovss  dword ptr [rsp+2E0h+resultRandSeed], xmm0
                  vmovss  xmm0, [rbp+1E0h+outT0]
                  vmovss  dword ptr [rsp+2E0h+resultRandomCharCount], xmm1
                  vmovss  dword ptr [rsp+2E0h+fmt], xmm0
                }
                RB_Draw3DQuadPicST((GfxCmdBufContext *)background, v289, (const vec3_t (*)[4])&v301, *(float *)&_XMM3, fmtd, resultRandomCharCounte, resultRandSeede, (GfxColor)outColor);
              }
              else
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [rsi]
                  vmovss  xmm1, [rbp+1E0h+outIcon.height]
                  vmulss  xmm4, xmm1, dword ptr [r14+2Ch]
                  vmovss  xmm1, dword ptr [r14+0Ch]
                  vmovups xmmword ptr [rbp+1E0h+background], xmm0
                  vmovss  xmm0, [rbp+1E0h+outIcon.width]
                  vmulss  xmm2, xmm0, dword ptr [r14+28h]
                  vmovss  xmm0, dword ptr [r14+8]
                  vmovss  [rsp+2E0h+var_288], xmm0
                  vmovss  xmm0, [rbp+1E0h+outT1]
                  vmovss  [rsp+2E0h+var_290], xmm1
                  vmovss  xmm1, [rbp+1E0h+outS1]
                  vmovss  [rsp+2E0h+var_298], xmm0
                  vmovss  xmm0, [rbp+1E0h+outT0]
                  vmovss  dword ptr [rsp+2E0h+resultFirstRandCharFadePercent], xmm1
                  vmovss  xmm1, [rbp+1E0h+outS0]
                  vmovss  dword ptr [rsp+2E0h+resultMaxLength], xmm0
                  vmovss  dword ptr [rsp+2E0h+resultRandSeed], xmm1
                  vmovss  dword ptr [rsp+2E0h+resultRandomCharCount], xmm4
                  vmovss  dword ptr [rsp+2E0h+fmt], xmm2
                  vmovaps xmm2, xmm8
                  vmovaps xmm3, xmm6
                }
                RB_DrawStretchPicRotate((GfxCmdBufContext *)background, v289, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, resultRandomCharCountd, resultRandSeedd, resultMaxLengthc, resultFirstRandCharFadePercentc, v257, v259, v261, outColor, GFX_PRIM_STATS_HUD);
              }
              goto LABEL_130;
            }
            if ( mode )
            {
              __asm
              {
                vxorps  xmm3, xmm3, xmm3
                vcvtsi2ss xmm3, xmm3, eax; glyphHeight
                vxorps  xmm2, xmm2, xmm2
                vcvtsi2ss xmm2, xmm2, eax; glyphWidth
              }
              DrawText_Generate3DCharVerts((const vec3_t *)&v300, positionSettings, *(float *)&_XMM2, *(float *)&_XMM3, (vec3_t (*)[4])&v301);
              __asm { vmovss  xmm1, [rbp+1E0h+outGlyph.s1] }
              _RSI = &v283->source;
              __asm
              {
                vmovss  xmm3, [rbp+1E0h+outGlyph.s0]
                vmovups xmm0, xmmword ptr [rsi]
                vmovups xmmword ptr [rbp+1E0h+background], xmm0
                vmovss  xmm0, [rbp+1E0h+outGlyph.t1]
                vmovss  dword ptr [rsp+2E0h+resultRandSeed], xmm0
                vmovss  xmm0, [rbp+1E0h+outGlyph.t0]
                vmovss  dword ptr [rsp+2E0h+resultRandomCharCount], xmm1
                vmovss  dword ptr [rsp+2E0h+fmt], xmm0
              }
              RB_Draw3DQuadPicST((GfxCmdBufContext *)background, v282, (const vec3_t (*)[4])&v301, *(float *)&_XMM3, fmtf, resultRandomCharCountg, resultRandSeedg, (GfxColor)outColor);
            }
            else
            {
              _RSI = &v283->source;
              __asm
              {
                vmovups xmm0, xmmword ptr [rsi]
                vmovups xmmword ptr [rbp+1E0h+background], xmm0
                vxorps  xmm0, xmm0, xmm0
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, ecx
                vcvtsi2ss xmm0, xmm0, ecx
                vmulss  xmm2, xmm0, xmm10
                vmovss  xmm0, dword ptr [r14+8]
                vmovss  [rsp+2E0h+var_288], xmm0
                vmovss  xmm0, [rbp+1E0h+outGlyph.s1]
                vmovss  [rsp+2E0h+var_290], xmm9
                vmulss  xmm3, xmm1, xmm11
                vmovss  xmm1, [rbp+1E0h+outGlyph.t1]
                vmovss  [rsp+2E0h+var_298], xmm1
                vmovss  xmm1, [rbp+1E0h+outGlyph.t0]
                vmovss  dword ptr [rsp+2E0h+resultFirstRandCharFadePercent], xmm0
                vmovss  xmm0, [rbp+1E0h+outGlyph.s0]
                vmovss  dword ptr [rsp+2E0h+resultMaxLength], xmm1
                vmovss  dword ptr [rsp+2E0h+resultRandSeed], xmm0
                vmovss  dword ptr [rsp+2E0h+resultRandomCharCount], xmm3
                vmovss  dword ptr [rsp+2E0h+fmt], xmm2
                vmovaps xmm2, xmm8
                vmovaps xmm3, xmm6
              }
              RB_DrawStretchPicRotate((GfxCmdBufContext *)background, v282, *(float *)&_XMM2, *(float *)&_XMM3, fmte, resultRandomCharCountf, resultRandSeedf, resultMaxLengthd, resultFirstRandCharFadePercentd, v258, v260, v262, v125, GFX_PRIM_STATS_HUD);
            }
          }
          else
          {
            _RSI = &v283->source;
          }
          __asm { vxorps  xmm11, xmm11, xmm11 }
LABEL_130:
          v197 = positionSettings->mode;
          if ( v197 == POSITION_2D && (renderFlags & 2) != 0 && v263 == cursorPos )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rsi]
              vxorps  xmm3, xmm3, xmm3
              vcvtsi2ss xmm3, xmm3, [rsp+2E0h+fontHeight]
              vmovaps xmm2, xmm14
              vmovaps xmm1, xmm8
              vmovups xmmword ptr [rbp+1E0h+background], xmm0
            }
            RB_DrawCursor((GfxCmdBufContext *)background, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, color, cursorLetter == 95, outGlyph.pixelWidth);
            v197 = positionSettings->mode;
          }
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vaddss  xmm1, xmm0, xmm12
            vmulss  xmm2, xmm1, dword ptr [r14+28h]
          }
          if ( v197 )
          {
            __asm
            {
              vmulss  xmm0, xmm2, dword ptr [r14+10h]
              vmulss  xmm1, xmm2, dword ptr [r14+14h]
              vmulss  xmm2, xmm2, dword ptr [r14+0Ch]
              vaddss  xmm14, xmm14, xmm0
              vaddss  xmm15, xmm15, xmm1
            }
          }
          v52 = texta;
          ++v274;
          __asm { vmovss  xmm9, [rbp+1E0h+var_248] }
          v47 = (_DWORD)texta - LODWORD(v288.source) + v263;
          __asm { vaddss  xmm13, xmm13, xmm2 }
          goto LABEL_137;
        }
        if ( v57 == 60 )
        {
          v280 = texta + 1;
          v58 = texta[1];
          v59 = v58 == 33;
          if ( v58 == 33 )
          {
            ++v263;
            ++texta;
            v280 = v52 + 2;
          }
          v60 = 0;
          FontHandleFromEnum = UI_GetFontHandleFromEnum(7);
          v37 = v58 == 33;
          fonta = FontHandleFromEnum;
          v62 = textHeight;
          packed = -1906461;
          fontHeighta = textHeight;
          if ( !v37 )
            packed = -16777216;
          if ( v273 > 2 )
          {
            R_TextWidth(" ", 1, FontHandleFromEnum, textHeight);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm2, xmm0, dword ptr [r14+28h]
            }
            if ( positionSettings->mode )
            {
              __asm
              {
                vmulss  xmm0, xmm2, dword ptr [r14+0Ch]
                vmulss  xmm1, xmm2, dword ptr [r14+10h]
                vaddss  xmm13, xmm13, xmm0
                vmulss  xmm0, xmm2, dword ptr [r14+14h]
                vaddss  xmm15, xmm15, xmm0
                vaddss  xmm14, xmm14, xmm1
              }
            }
            else
            {
              __asm { vaddss  xmm13, xmm13, xmm2 }
            }
          }
          if ( *v280 )
          {
            do
            {
              v66 = SEH_ReadCharFromString((const char **)&v280);
              if ( v66 == 94 )
              {
                if ( *v280 == 62 )
                {
                  if ( R_TextWidth(texta + 1, v60, fonta, v62) > 0 )
                  {
                    background[0] = NULL;
                    if ( FontIcons_GetPCKeyImages(background, v59) )
                    {
                      __asm
                      {
                        vxorps  xmm1, xmm1, xmm1
                        vxorps  xmm6, xmm6, xmm6
                        vcvtsi2ss xmm1, xmm1, esi
                        vcvtsi2ss xmm6, xmm6, r15d
                        vcomiss xmm1, xmm6
                      }
                      v70 = v286.array[3];
                      __asm
                      {
                        vmaxss  xmm10, xmm6, xmm1
                        vsubss  xmm9, xmm13, xmm9
                      }
                      _EAX = background[0]->width;
                      __asm { vmovd   xmm0, eax }
                      _EAX = background[0]->height;
                      __asm
                      {
                        vcvtdq2ps xmm0, xmm0
                        vmulss  xmm2, xmm0, cs:__real@3e000000
                        vmovd   xmm1, eax
                        vcvtdq2ps xmm1, xmm1
                        vdivss  xmm0, xmm2, xmm1
                        vmulss  xmm7, xmm0, xmm6
                        vmulss  xmm0, xmm6, dword ptr [r14+2Ch]
                        vsubss  xmm8, xmm14, xmm0
                      }
                      if ( v286.array[3] )
                      {
                        _R15 = &v283->source;
                        __asm
                        {
                          vmovups xmm0, xmmword ptr [r15]
                          vmovups [rbp+1E0h+var_1D0], xmm0
                        }
                        RB_EndSurfaceIfNeeded(&v288);
                        R_SetCodeImageTextureInternal(*_R15, 4u, background[0], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(3519)");
                        __asm
                        {
                          vmovss  xmm2, cs:__real@3e000000
                          vmovups xmm0, xmmword ptr [r15]
                          vmulss  xmm1, xmm6, dword ptr [r14+2Ch]
                          vmovss  xmm12, cs:__real@3f800000
                        }
                        v87 = v289;
                        __asm
                        {
                          vmovups [rbp+1E0h+var_1D0], xmm0
                          vmulss  xmm0, xmm7, dword ptr [r14+28h]
                        }
                        v89 = (v70 << 24) | 0xFFFFFF;
                        __asm
                        {
                          vmovss  [rsp+2E0h+var_298], xmm12
                          vmovss  dword ptr [rsp+2E0h+resultFirstRandCharFadePercent], xmm2
                          vmovss  dword ptr [rsp+2E0h+resultMaxLength], xmm11
                          vmovss  dword ptr [rsp+2E0h+resultRandSeed], xmm11
                          vmovss  dword ptr [rsp+2E0h+resultRandomCharCount], xmm1
                          vmovaps xmm3, xmm8
                          vmovaps xmm2, xmm9
                          vmovss  dword ptr [rsp+2E0h+fmt], xmm0
                        }
                        RB_DrawStretchPic(&v288, v289, *(float *)&_XMM2, *(float *)&_XMM3, fmt, resultRandomCharCounta, resultRandSeeda, resultMaxLength, resultFirstRandCharFadePercent, v254, v89, GFX_PRIM_STATS_HUD);
                        __asm
                        {
                          vmovups xmm0, xmmword ptr [r15]
                          vmulss  xmm3, xmm6, dword ptr [r14+2Ch]
                          vmulss  xmm4, xmm7, dword ptr [r14+28h]
                          vmovss  [rsp+2E0h+var_298], xmm12
                          vmovss  dword ptr [rsp+2E0h+resultFirstRandCharFadePercent], xmm12
                          vmovups [rbp+1E0h+var_1D0], xmm0
                          vsubss  xmm0, xmm10, xmm7
                          vmulss  xmm1, xmm0, dword ptr [r14+28h]
                          vmovss  xmm0, cs:__real@3f600000
                          vmovss  dword ptr [rsp+2E0h+resultMaxLength], xmm11
                          vmovss  dword ptr [rsp+2E0h+resultRandSeed], xmm0
                          vmovss  dword ptr [rsp+2E0h+resultRandomCharCount], xmm3
                          vmovaps xmm3, xmm8
                          vaddss  xmm2, xmm1, xmm9
                          vmovss  dword ptr [rsp+2E0h+fmt], xmm4
                        }
                        RB_DrawStretchPic(&v288, v87, *(float *)&_XMM2, *(float *)&_XMM3, fmta, resultRandomCharCountb, resultRandSeedb, resultMaxLengtha, resultFirstRandCharFadePercenta, v255, v89, GFX_PRIM_STATS_HUD);
                        __asm
                        {
                          vmovups xmm0, xmmword ptr [r15]
                          vmovups [rbp+1E0h+var_1D0], xmm0
                        }
                        RB_EndSurfaceIfNeeded(&v288);
                        __asm
                        {
                          vmovups xmm0, xmmword ptr [r15]
                          vmulss  xmm5, xmm6, dword ptr [r14+2Ch]
                          vmulss  xmm2, xmm7, dword ptr [r14+28h]
                          vmovss  [rsp+2E0h+var_298], xmm12
                          vmovups [rbp+1E0h+var_1D0], xmm0
                          vmulss  xmm0, xmm7, cs:__real@40000000
                          vsubss  xmm1, xmm10, xmm0
                          vmovss  xmm0, cs:__real@3f600000
                          vmulss  xmm4, xmm1, dword ptr [r14+28h]
                          vmovss  dword ptr [rsp+2E0h+resultFirstRandCharFadePercent], xmm0
                          vmovss  xmm0, cs:__real@3e000000
                          vmovss  dword ptr [rsp+2E0h+resultMaxLength], xmm11
                          vmovss  dword ptr [rsp+2E0h+resultRandSeed], xmm0
                          vmovss  dword ptr [rsp+2E0h+resultRandomCharCount], xmm5
                          vaddss  xmm2, xmm2, xmm9
                          vmovaps xmm3, xmm8
                          vmovss  dword ptr [rsp+2E0h+fmt], xmm4
                        }
                        RB_DrawStretchPic(&v288, v87, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, resultRandomCharCountc, resultRandSeedc, resultMaxLengthb, resultFirstRandCharFadePercentb, v256, v89, GFX_PRIM_STATS_HUD);
                      }
                      __asm { vmovss  xmm9, [rbp+1E0h+var_248] }
                    }
                  }
                  break;
                }
              }
              else if ( v66 > 0x1F || (v110 = -1073732608, !_bittest(&v110, v66)) )
              {
                v111 = v280;
                ++v60;
                continue;
              }
              v111 = ++v280;
            }
            while ( *v111 );
          }
          v108 = v282;
          if ( glowStylea )
            v108 = rgp.fontMaterial[0];
          v109 = FONT_CACHE_FX_NONE;
          v282 = v108;
          if ( !glowStylea )
            v109 = v34;
          flags = v109;
        }
        else
        {
          if ( v57 == 62 )
          {
            packed = color.packed;
            __asm { vmulss  xmm2, xmm9, dword ptr [r14+28h] }
            fonta = v298;
            fontHeighta = v285;
            if ( glowStylea )
              v34 = FONT_CACHE_FX_DISTANCE_FIELD;
            v113 = v299;
            if ( !glowStylea )
              v113 = v282;
            v37 = positionSettings->mode == POSITION_2D;
            v282 = v113;
            flags = v34;
            if ( !v37 )
            {
              __asm
              {
                vmulss  xmm0, xmm2, dword ptr [r14+10h]
                vmulss  xmm1, xmm2, dword ptr [r14+14h]
                vmulss  xmm2, xmm2, dword ptr [r14+0Ch]
                vaddss  xmm14, xmm14, xmm0
                vaddss  xmm15, xmm15, xmm1
              }
            }
            v52 = ++texta;
            v47 = v263 + 2;
            __asm
            {
              vmovss  [rbp+1E0h+var_248], xmm11
              vmovaps xmm9, xmm11
              vaddss  xmm13, xmm13, xmm2
            }
            goto LABEL_137;
          }
          v115 = ColorIndex(v57);
          if ( v115 == ColorIndex(0x37u) )
          {
            packed = color.packed;
          }
          else
          {
            v116 = *texta;
            v117 = ColorIndex(*texta);
            if ( v117 >= 0x11 )
            {
              switch ( v116 )
              {
                case '8':
                  colorMyTeam = rg.colorMyTeam;
                  break;
                case '9':
                  colorMyTeam = rg.colorEnemyTeam;
                  break;
                case ':':
                  colorMyTeam = rg.colorMyParty;
                  break;
                case ';':
                  colorMyTeam = *(GfxColor *)s_colorFacebookBlue;
                  break;
                case '<':
                  colorMyTeam = *(GfxColor *)s_colorPCKey;
                  break;
                default:
                  colorMyTeam.packed = -1;
                  break;
              }
            }
            else
            {
              v118 = v117 + 17 * r_colorTable->current.integer;
              if ( (unsigned int)v118 >= 0x22 )
              {
                LODWORD(resultRandSeed) = 34;
                LODWORD(resultRandomCharCount) = v117 + 17 * r_colorTable->current.integer;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3061, ASSERT_TYPE_ASSERT, "(unsigned)( tableIndex ) < (unsigned)( ( sizeof( *array_counter( color_table ) ) + 0 ) )", "tableIndex doesn't index ARRAY_COUNT( color_table )\n\t%i not in [0, %i)", resultRandomCharCount, resultRandSeed) )
                  __debugbreak();
              }
              colorMyTeam = color_table[v118];
            }
            packed = colorMyTeam.array[0] | ((colorMyTeam.array[1] | (((v286.array[3] << 8) | colorMyTeam.array[2]) << 8)) << 8);
          }
        }
        v52 = ++texta;
        v47 = v263 + 2;
LABEL_137:
        v263 = v47;
LABEL_138:
        __asm { vmovss  xmm8, [rbp+1E0h+var_23C] }
        v34 = flags;
        if ( !*v52 )
          goto LABEL_139;
      }
    }
    __asm
    {
      vmovaps xmm15, [rsp+2E0h+var_E0]
      vmovaps xmm9, [rsp+2E0h+var_80]
      vmovaps xmm8, [rsp+2E0h+var_70]
    }
    if ( positionSettings->mode == POSITION_2D && (renderFlags & 2) != 0 && v47 == cursorPos )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, [rsp+2E0h+fontHeight]
        vmovaps xmm2, xmm14
        vmovaps xmm1, xmm13
        vmovups [rbp+1E0h+var_130], xmm0
      }
      RB_DrawCursor(&v300, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, color, 0, 0);
    }
    __asm
    {
      vmovaps xmm14, [rsp+2E0h+var_D0]
      vmovaps xmm13, [rsp+2E0h+var_C0]
    }
    if ( glowStylea )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovups [rbp+1E0h+var_130], xmm0
      }
      RB_EndSurfaceIfNeeded(&v300);
    }
  }
  __asm { vmovaps xmm11, [rsp+2E0h+var_A0] }
}

