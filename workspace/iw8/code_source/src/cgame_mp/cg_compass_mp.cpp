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
  this->pingTime = -1;
  *(double *)this->pos.v = 0i64;
  this->pos.v[2] = 0.0;
  *(_QWORD *)&this->beginFadeTime = 0i64;
}

/*
==============
CgCompassSystemMP::ActorSweep
==============
*/
void CgCompassSystemMP::ActorSweep(CgCompassSystemMP *this, cg_t *const cgameGlob, CompassPortableRadarPing *const pingInfo, const float maxDist, const vec3_t *localUsersPosition)
{
  int v8; 
  __int64 v9; 
  CompassActor::PosZData *p_lastPosZ; 
  const dvar_t *v11; 
  float value; 
  float v13; 
  float v14; 
  __int64 v15; 
  __int64 v16; 
  vec3_t pos; 
  CgSoundSystemMP *SoundSystemMP; 
  vec3_t v19; 
  __int64 v20; 

  v20 = -2i64;
  SoundSystemMP = CgSoundSystemMP::GetSoundSystemMP((const LocalClientNum_t)cgameGlob->localClientNum);
  v8 = 0;
  v9 = 0i64;
  p_lastPosZ = &this->m_compassActors[0].lastPosZ;
  do
  {
    if ( (unsigned int)v8 >= 0x100 )
    {
      LODWORD(v16) = 256;
      LODWORD(v15) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1713, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassActors ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_compassActors )\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( (*(_DWORD *)&p_lastPosZ[-6].zIsValid & 3) == 1 )
    {
      if ( p_lastPosZ->zIsValid )
      {
        CompassActor_GetLastPosValue((const CompassActor *)&p_lastPosZ[-6], &pos);
      }
      else
      {
        CompassActor_GetLastPosValue((const CompassActor *)&p_lastPosZ[-6], &v19);
        *(_QWORD *)pos.v = *(_QWORD *)v19.v;
        memset(&v19, 0, sizeof(v19));
      }
      if ( fsqrt((float)((float)(pos.v[1] - pingInfo->pos.v[1]) * (float)(pos.v[1] - pingInfo->pos.v[1])) + (float)((float)(pos.v[0] - pingInfo->pos.v[0]) * (float)(pos.v[0] - pingInfo->pos.v[0]))) < maxDist )
      {
        v11 = DCONST_DVARFLT_bg_compassPortableRadarMinVelocity;
        if ( !DCONST_DVARFLT_bg_compassPortableRadarMinVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarMinVelocity") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        value = v11->current.value;
        if ( value == 0.0 )
          goto LABEL_29;
        if ( p_lastPosZ[55].elevation == COMPASSENEMY_ELEVATION_LEVEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1735, ASSERT_TYPE_ASSERT, "(minVelo == 0.0f || actor->lastVelValid)", (const char *)&queryFormat, "minVelo == 0.0f || actor->lastVelValid") )
          __debugbreak();
        if ( value <= *(float *)&p_lastPosZ[40].zIsValid )
        {
LABEL_29:
          if ( !pingInfo->actorPinged[v9] )
          {
            pingInfo->actorPinged[v9] = 1;
            if ( CG_CompassMP_RadarPingEnemyPlayer((CompassActorMP *)&p_lastPosZ[-6], cgameGlob->time, pingInfo->perkImmunityOverrideIndex) )
            {
              if ( !p_lastPosZ->zIsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1745, ASSERT_TYPE_ASSERT, "(actor->lastPosZ.zIsValid)", (const char *)&queryFormat, "actor->lastPosZ.zIsValid") )
                __debugbreak();
              v13 = 2.0 * pingInfo->radius;
              v14 = fsqrt((float)((float)((float)(pos.v[1] - localUsersPosition->v[1]) * (float)(pos.v[1] - localUsersPosition->v[1])) + (float)((float)(pos.v[0] - localUsersPosition->v[0]) * (float)(pos.v[0] - localUsersPosition->v[0]))) + (float)((float)(pos.v[2] - localUsersPosition->v[2]) * (float)(pos.v[2] - localUsersPosition->v[2])));
              if ( v14 < v13 )
                CgSoundSystemMP::PlayEntitySoundAliasCompassPing(SoundSystemMP, v8, &pos, v14 / v13);
            }
          }
        }
      }
    }
    ++v8;
    ++v9;
    p_lastPosZ += 68;
  }
  while ( v8 < 248 );
  memset(&pos, 0, sizeof(pos));
}

/*
==============
CgCompassSystemMP::ActorUpdateEnemyPos
==============
*/
void CgCompassSystemMP::ActorUpdateEnemyPos(CgCompassSystemMP *this, CompassActorMP *const actor, const vec2_t *newPos)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v7; 
  float radarProgress; 
  cg_t *v9; 
  double RadarLineMargin; 
  float v11; 
  float v12; 
  float v13; 
  vec2_t outPos; 
  __int64 v15; 

  v15 = -2i64;
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1121, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v7 = LocalClientGlobals;
  if ( LocalClientGlobals->predictedPlayerState.radarMode == RADAR_MODE_CONSTANT )
  {
    CG_CompassMP_RadarPingEnemyPlayer(actor, LocalClientGlobals->time, 0x44u);
  }
  else if ( !this->m_isBigMapMinimap && CgCompassSystemMP::IsRadarSweepEnabled(this, LocalClientGlobals) && actor->lastUpdate > v7->time - 500 )
  {
    CompassActor_GetLastPos(actor, &outPos);
    radarProgress = v7->radarProgress;
    v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    RadarLineMargin = CgCompassSystemMP::GetRadarLineMargin(this);
    v11 = v9->compassNorth.v[1];
    LODWORD(v12) = LODWORD(v9->compassNorth.v[0]) ^ _xmm;
    v13 = (float)((float)((float)(v12 * v9->compassMapUpperLeft.v[1]) + (float)(v11 * v9->compassMapUpperLeft.v[0])) + (float)((float)((float)(*(float *)&RadarLineMargin * 2.0) + v9->compassMapWorldSize.v[0]) * radarProgress)) - *(float *)&RadarLineMargin;
    if ( (float)((float)((float)(v12 * outPos.v[1]) + (float)(v11 * outPos.v[0])) - v13) < 0.0 != (float)((float)((float)(v12 * newPos->v[1]) + (float)(v11 * newPos->v[0])) - v13) < 0.0 )
      CG_CompassMP_RadarPingEnemyPlayer(actor, v7->time, 0x44u);
    memset(&outPos, 0, sizeof(outPos));
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
  float UInt; 
  vec3_t pos; 
  float v12; 

  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1164, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor", -2i64) )
    __debugbreak();
  if ( (actor->flags & 1) != 0 )
    CgCompassSystemMP::ActorUpdateEnemyPos(this, actor, newPos);
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
  UInt = (float)bdRandom::nextUInt(&`CompassActor_SetLastPosAndElevation'::`2'::rand);
  _XMM0 = LODWORD(newPos->v[0]);
  v12 = UInt;
  __asm { vunpcklps xmm0, xmm0, xmm2 }
  *(double *)pos.v = *(double *)&_XMM0;
  pos.v[2] = UInt;
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
  const dvar_t *v9; 
  float value; 
  double JammingLevel; 
  __int64 v12; 

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
      v9 = DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowFriendlyOnly;
      if ( !DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowFriendlyOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_counterUAVRadarJamLevelShowFriendlyOnly") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      value = v9->current.value;
      JammingLevel = CG_Radar_GetJammingLevel((const LocalClientNum_t)this->m_localClientNum);
      if ( *(float *)&JammingLevel < value )
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
              LODWORD(v12) = cent->nextState.eType;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2279, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Compass weapon-ping unhandled for entity with eType '%i'.", v12) )
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
  const dvar_t *v3; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const bitarray<64> *v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  double Float_Internal_DebugName; 
  const snapshot_t *snap; 
  const snapshot_t *nextSnap; 
  float v18; 
  float v19; 
  float v20; 
  double v21; 
  CgTrajectory v23; 
  vec3_t v24; 
  vec3_t outPos; 

  v3 = DCONST_DVARBOOL_compassEnemyFootstepEnabled;
  if ( !DCONST_DVARBOOL_compassEnemyFootstepEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnemyFootstepEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.pm_type )
    return 0;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, actorEntity->nextState.clientNum);
  v10 = (const bitarray<64> *)CharacterInfo;
  if ( (!CharacterInfo || !CharacterInfo->infoValid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1025, ASSERT_TYPE_ASSERT, "(ci && ci->infoValid)", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  if ( BG_HasPerk(v10 + 347, 0x1Fu) )
    return 0;
  v11 = actorPos->v[1] - LocalClientGlobals->predictedPlayerState.origin.v[1];
  v12 = DVARFLT_compassEnemyFootstepMaxRange;
  v13 = actorPos->v[2] - LocalClientGlobals->predictedPlayerState.origin.v[2];
  v14 = (float)(v11 * v11) + (float)((float)(actorPos->v[0] - LocalClientGlobals->predictedPlayerState.origin.v[0]) * (float)(actorPos->v[0] - LocalClientGlobals->predictedPlayerState.origin.v[0]));
  if ( !DVARFLT_compassEnemyFootstepMaxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnemyFootstepMaxRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v14 > (float)(v12->current.value * v12->current.value) )
    return 0;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassEnemyFootstepMaxZ, "compassEnemyFootstepMaxZ");
  if ( COERCE_FLOAT(LODWORD(v13) & _xmm) > *(float *)&Float_Internal_DebugName )
    return 0;
  snap = LocalClientGlobals->snap;
  nextSnap = LocalClientGlobals->nextSnap;
  v18 = (float)(nextSnap->serverTime - snap->serverTime) * 0.001;
  if ( v18 <= 0.0 )
    return 0;
  CgTrajectory::CgTrajectory(&v23, localClientNum, actorEntity, &actorEntity->prevState);
  BgTrajectory::EvaluatePosTrajectory(&v23, snap->serverTime, &outPos);
  v23.m_es = &actorEntity->nextState.lerp;
  BgTrajectory::EvaluatePosTrajectory(&v23, nextSnap->serverTime, &v24);
  v19 = (float)(v24.v[0] - outPos.v[0]) / v18;
  v20 = (float)(v24.v[1] - outPos.v[1]) / v18;
  v21 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassEnemyFootstepMinSpeed, "compassEnemyFootstepMinSpeed");
  return (float)((float)(v20 * v20) + (float)(v19 * v19)) >= (float)(*(float *)&v21 * *(float *)&v21);
}

/*
==============
CG_CompassMP_ClipUVToViewRect
==============
*/
void CG_CompassMP_ClipUVToViewRect(const rectDef_s *pScaledRect, vec2_t *graphic_x1y1, float *outW, float *outH, vec2_t *s1t1, vec2_t *s2t2)
{
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
  float x; 
  float v21; 
  float v22; 
  float y; 
  float v24; 

  if ( !pScaledRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4208, ASSERT_TYPE_ASSERT, "(pScaledRect)", (const char *)&queryFormat, "pScaledRect") )
    __debugbreak();
  if ( !outW && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4209, ASSERT_TYPE_ASSERT, "(outW)", (const char *)&queryFormat, "outW") )
    __debugbreak();
  if ( !outH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4210, ASSERT_TYPE_ASSERT, "(outH)", (const char *)&queryFormat, "outH") )
    __debugbreak();
  v10 = *outW;
  v11 = *outH;
  *s1t1 = 0i64;
  s2t2->v[0] = 1.0;
  s2t2->v[1] = 1.0;
  v12 = *outW;
  v13 = *outH + graphic_x1y1->v[1];
  v14 = pScaledRect->w + pScaledRect->x;
  v15 = *outW + graphic_x1y1->v[0];
  if ( v15 > v14 )
  {
    v16 = v15 - v14;
    if ( v12 != 0.0 )
      s2t2->v[0] = (float)(v12 - v16) / v12;
    v10 = v10 - v16;
  }
  v17 = pScaledRect->h + pScaledRect->y;
  if ( v13 > v17 )
  {
    v18 = v13 - v17;
    if ( *outH != 0.0 )
      s2t2->v[1] = (float)(*outH - v18) / *outH;
    v11 = v11 - v18;
  }
  v19 = graphic_x1y1->v[0];
  x = pScaledRect->x;
  if ( graphic_x1y1->v[0] < pScaledRect->x )
  {
    graphic_x1y1->v[0] = x;
    v21 = x - v19;
    if ( *outW != 0.0 )
      s1t1->v[0] = 1.0 - (float)((float)(*outW - v21) / *outW);
    v10 = v10 - v21;
  }
  v22 = graphic_x1y1->v[1];
  y = pScaledRect->y;
  if ( v22 >= y )
  {
    *outW = v10;
    *outH = v11;
  }
  else
  {
    graphic_x1y1->v[1] = y;
    v24 = y - v22;
    if ( *outH != 0.0 )
      s1t1->v[1] = 1.0 - (float)((float)(*outH - v24) / *outH);
    *outW = v10;
    *outH = v11 - v24;
  }
}

/*
==============
CG_CompassMP_GetEnemyMaterial
==============
*/
const GfxImage *CG_CompassMP_GetEnemyMaterial(const CompassActorMP *actor, const bool alwaysShowActor, const float fadeTimeAmount)
{
  const dvar_t *v3; 
  int v6; 
  __int64 elevation; 
  const dvar_t *v8; 
  __int64 v9; 
  const ScriptableEventCompassIconDef *iconState; 

  v3 = DVARBOOL_compassPrototypeElevation;
  v6 = 1;
  if ( !DVARBOOL_compassPrototypeElevation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPrototypeElevation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  elevation = 0i64;
  if ( v3->current.enabled )
  {
    if ( alwaysShowActor )
      elevation = (unsigned __int8)actor->lastPosZ.elevation;
    else
      elevation = (unsigned __int8)actor->lastEnemyPosZ.elevation;
  }
  v8 = DVARBOOL_compassPrototypeFiring;
  if ( !DVARBOOL_compassPrototypeFiring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPrototypeFiring") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = 1i64;
  if ( v8->current.enabled && fadeTimeAmount <= 0.0 )
  {
    v6 = 0;
    v9 = 0i64;
  }
  iconState = actor->iconState;
  if ( v6 == 1 )
  {
    if ( iconState )
      return iconState->enemyCompassIconFiring[elevation]->textureTable->image;
    else
      return cgMedia.compass.enemy_blip[1][elevation];
  }
  else if ( iconState )
  {
    return iconState->enemyCompassIconQuiet[elevation]->textureTable->image;
  }
  else
  {
    return (const GfxImage *)*((_QWORD *)&cgMedia.compass.enemy_blip[0][2 * v9] + elevation + v9);
  }
}

/*
==============
CG_CompassMP_GetRadarUpdateTime
==============
*/
float CG_CompassMP_GetRadarUpdateTime(const cg_t *const cgameGlob)
{
  RadarMode radarMode; 
  const dvar_t *v2; 
  const char *v3; 

  if ( !cgameGlob->predictedPlayerState.radarEnabled )
  {
LABEL_8:
    v2 = DCONST_DVARFLT_compassRadarUpdateTime;
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
      v2 = DCONST_DVARFLT_compassFastRadarUpdateTime;
      if ( DCONST_DVARFLT_compassFastRadarUpdateTime )
        goto LABEL_12;
      v3 = "compassFastRadarUpdateTime";
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v2 = DCONST_DVARFLT_compassSlowRadarUpdateTime;
  if ( DCONST_DVARFLT_compassSlowRadarUpdateTime )
    goto LABEL_12;
  v3 = "compassSlowRadarUpdateTime";
LABEL_10:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v3) )
    __debugbreak();
LABEL_12:
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.value * 1000.0;
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
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  unsigned __int8 v24; 
  float outH; 
  float outW; 
  float outAngle[2]; 
  vec2_t *s2t2; 
  vec4_t (*quadVerts)[4]; 
  SecureVec3 out; 
  __int64 v32; 
  vec2_t graphic_x1y1; 
  rectDef_s x; 
  vec2_t in; 
  vec2_t north; 

  v32 = -2i64;
  in = position;
  s2t2 = out_s2t2;
  quadVerts = outVerts;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, outAngle, &north);
  CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
  v17 = (float)(0.5 * x.w) + x.x;
  v18 = (float)(0.5 * x.h) + x.y;
  CG_CalcPlayerPos(&out, this->m_localClientNum);
  CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &x, boundsRadius, &north, (const vec2_t *)&out, &in, &graphic_x1y1, NULL);
  v19 = radius;
  if ( isPixelShapeCircle )
    v19 = radius * 1.025641;
  outW = (float)(v19 * 2.0) * this->m_uiWorldToScreenScale;
  outH = outW;
  graphic_x1y1.v[0] = (float)(v17 - (float)(outW * 0.5)) + graphic_x1y1.v[0];
  v20 = (float)(v18 - (float)(outW * 0.5)) + graphic_x1y1.v[1];
  graphic_x1y1.v[1] = v20;
  if ( (float)(graphic_x1y1.v[0] + outW) < x.x || graphic_x1y1.v[0] > (float)(x.x + x.w) || (float)(v20 + outW) < x.y || v20 > (float)(x.y + x.h) )
  {
    v24 = 0;
  }
  else
  {
    CG_CompassMP_ClipUVToViewRect(&x, &graphic_x1y1, &outW, &outH, out_s1t1, s2t2);
    vertAlign = rect->vertAlign;
    horzAlign = rect->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, (float *)&graphic_x1y1, (float *)&graphic_x1y1 + 1, &outW, &outH, horzAlign, vertAlign);
    LUI_CoD_GenerateQuadVerts(graphic_x1y1.v[0], graphic_x1y1.v[1], graphic_x1y1.v[0] + outW, graphic_x1y1.v[1] + outH, quadVerts);
    v24 = 1;
  }
  memset(&out, 0, sizeof(out));
  return v24;
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

  if ( CG_GameInterface_PlayingArena() && (clientInfo->game_extrainfo & 7) != 0 )
  {
    LUI_CoD_GameMP_GetBrColorForClientNum(clientInfo->clientNum, fadedColor);
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
        *fadedColor = (vec4_t)xmmword_147FA89B0;
      }
      else
      {
        fadedColor->xyz = rgbColor;
        fadedColor->v[3] = *(float *)&dword_147FA8A0C;
      }
    }
    else
    {
      CgCompassSystemMP::GetFriendlyCompassColor(this, fadedColor, LocalClientGlobals);
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
  float outAngle; 
  vec2_t playerWorldPos; 
  float v13; 
  vec2_t outVector; 
  vec2_t v15; 
  vec2_t out; 
  vec2_t in; 
  float v18; 
  rectDef_s mapRect; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
  CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
  playerWorldPos.v[0] = 0.0;
  playerWorldPos.v[1] = 0.0;
  v13 = 0.0;
  in.v[1] = 0.0;
  v18 = 0.0;
  in.v[0] = FLOAT_10000_0;
  CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &mapRect, boundsRadius, &outVector, &playerWorldPos, &playerWorldPos, &out, NULL);
  CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &mapRect, boundsRadius, &outVector, &playerWorldPos, &in, &v15, NULL);
  this->m_uiWorldToScreenScale = fsqrt((float)((float)(v15.v[1] - out.v[1]) * (float)(v15.v[1] - out.v[1])) + (float)((float)(v15.v[0] - out.v[0]) * (float)(v15.v[0] - out.v[0]))) * 0.000099999997;
}

/*
==============
CgCompassSystemMP::CreateDecoyActor
==============
*/
void CgCompassSystemMP::CreateDecoyActor(CgCompassSystemMP *this, const cg_t *const cgameGlob, const vec3_t *pos, const __int16 *entityNum, const int *numDecoys, const float *magnitude)
{
  __int128 v6; 
  __int128 v7; 
  int time; 
  CgCompassSystemMP *v9; 
  __int16 v12; 
  int v14; 
  __int64 m_compassDecoyActors; 
  double v16; 
  float v17; 
  int v18; 
  bool v19; 
  const dvar_t *v20; 
  double v21; 
  int v22; 
  int v23; 
  bool *p_wasJustUpdated; 
  bool v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int pHoldrand; 
  float c; 
  float s; 
  CompassDecoyActorMP *v31; 
  CgCompassSystemMP *v32; 
  double v33; 
  int v34; 
  __int128 v35; 
  __int128 v36; 

  time = cgameGlob->time;
  v9 = this;
  v12 = *entityNum;
  v32 = this;
  pHoldrand = time;
  BG_srand(&pHoldrand);
  v14 = 0;
  if ( *numDecoys > 0 )
  {
    v36 = v6;
    m_compassDecoyActors = (__int64)v9->m_compassDecoyActors;
    v35 = v7;
    v31 = v9->m_compassDecoyActors;
    do
    {
      v16 = BG_random(&pHoldrand);
      v17 = *(float *)&v16 * *magnitude;
      FastSinCos(*(float *)&v16 * 6.2831855, &s, &c);
      *(float *)&v16 = pos->v[2];
      *(float *)&v33 = (float)(v17 * c) + pos->v[0];
      v18 = 0;
      *((float *)&v33 + 1) = (float)(v17 * s) + pos->v[1];
      v34 = SLODWORD(v16);
      v19 = 1;
      while ( 1 )
      {
        if ( !v19 )
        {
          LODWORD(v27) = 15;
          LODWORD(v26) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1656, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassDecoyActors ) ) + 0 ) )", "actorIndex doesn't index ARRAY_COUNT( m_compassDecoyActors )\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        if ( cgameGlob->time >= *(_DWORD *)m_compassDecoyActors )
          break;
        ++v18;
        m_compassDecoyActors += 28i64;
        v19 = (unsigned int)v18 < 0xF;
        if ( v18 >= 15 )
          goto LABEL_16;
      }
      v20 = DCONST_DVARINT_bg_compassDecoyPingBeginFadeTime;
      if ( !DCONST_DVARINT_bg_compassDecoyPingBeginFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassDecoyPingBeginFadeTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      v21 = v33;
      *(_DWORD *)(m_compassDecoyActors + 4) = cgameGlob->time + v20->current.integer;
      *(_DWORD *)m_compassDecoyActors = cgameGlob->time + 3000;
      v22 = v34;
      *(double *)(m_compassDecoyActors + 12) = v21;
      *(_DWORD *)(m_compassDecoyActors + 20) = v22;
      if ( v12 == 2047 )
      {
        *(_BYTE *)(m_compassDecoyActors + 26) = 0;
        *(_WORD *)(m_compassDecoyActors + 24) = 2047;
      }
      else
      {
        *(_BYTE *)(m_compassDecoyActors + 26) = 1;
        *(_WORD *)(m_compassDecoyActors + 24) = *entityNum;
      }
LABEL_16:
      m_compassDecoyActors = (__int64)v31;
      ++v14;
    }
    while ( v14 < *numDecoys );
    v9 = v32;
  }
  if ( v12 != 2047 )
  {
    v23 = 0;
    p_wasJustUpdated = &v9->m_compassDecoyActors[0].wasJustUpdated;
    v25 = 1;
    do
    {
      if ( !v25 )
      {
        LODWORD(v27) = 15;
        LODWORD(v26) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1684, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassDecoyActors ) ) + 0 ) )", "actorIndex doesn't index ARRAY_COUNT( m_compassDecoyActors )\n\t%i not in [0, %i)", v26, v27) )
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
      ++v23;
      p_wasJustUpdated += 28;
      v25 = (unsigned int)v23 < 0xF;
    }
    while ( v23 < 15 );
  }
}

/*
==============
CgCompassSystemMP::DoesMovementCrossRadar
==============
*/
bool CgCompassSystemMP::DoesMovementCrossRadar(CgCompassSystemMP *this, float radarProgress, const vec2_t *p1, const vec2_t *p2)
{
  cg_t *LocalClientGlobals; 
  double RadarLineMargin; 
  float v9; 
  float v10; 
  float v11; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  RadarLineMargin = CgCompassSystemMP::GetRadarLineMargin(this);
  v9 = LocalClientGlobals->compassNorth.v[1];
  LODWORD(v10) = LODWORD(LocalClientGlobals->compassNorth.v[0]) ^ _xmm;
  v11 = (float)((float)((float)(v10 * LocalClientGlobals->compassMapUpperLeft.v[1]) + (float)(v9 * LocalClientGlobals->compassMapUpperLeft.v[0])) + (float)((float)((float)(*(float *)&RadarLineMargin * 2.0) + LocalClientGlobals->compassMapWorldSize.v[0]) * radarProgress)) - *(float *)&RadarLineMargin;
  return ((float)((float)((float)(v10 * p1->v[1]) + (float)(v9 * p1->v[0])) - v11) < 0.0) ^ ((float)((float)((float)(v10 * p2->v[1]) + (float)(v9 * p2->v[0])) - v11) < 0.0);
}

/*
==============
CgCompassSystemMP::DrawAreaMarker
==============
*/
void CgCompassSystemMP::DrawAreaMarker(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, const int startTime, const int duration, const vec2_t position, const float radius, const GfxImage *image, bool isPixelCircle, LUIElement *element, lua_State *luaVM)
{
  LocalClientNum_t m_localClientNum; 
  const dvar_t *v17; 
  vec2_t out_s2t2; 
  vec2_t out_s1t1; 
  vec2_t outSize; 
  vec4_t verts[4]; 

  if ( CgCompassSystemMP::CalculateAreaMarker(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, position, radius, isPixelCircle, &out_s1t1, &out_s2t2, (vec4_t (*)[4])verts) )
  {
    m_localClientNum = this->m_localClientNum;
    if ( isPixelCircle )
    {
      LUI_Render_GetViewportSize(m_localClientNum, &outSize);
      v17 = DVARFLT_compassCircleOutlineThickness;
      if ( !DVARFLT_compassCircleOutlineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCircleOutlineThickness") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      LUI_Render_DrawImage_PixelShape((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])verts, out_s1t1.v[0], out_s1t1.v[1], out_s2t2.v[0], out_s2t2.v[1], color, image, GFX_PIXEL_SHAPE_TYPE_CIRCLE, (float)(outSize.v[1] * v17->current.value) * 0.0013888889);
    }
    else
    {
      LUI_Render_DrawImage(m_localClientNum, element, luaVM, (const vec4_t (*)[4])verts, out_s1t1.v[0], out_s1t1.v[1], out_s2t2.v[0], out_s2t2.v[1], color, image);
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
  const dvar_t *v15; 
  float m_bigMapUAVRadius; 
  RadarMode radarMode; 
  int m_bigMapUAVPingIntervalTimeSlow; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5030, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CgCompassSystemMP::IsRadarSweepEnabled(this, LocalClientGlobals) )
  {
    startTime = this->m_bigMapUAVPingDuration;
    v15 = DVARBOOL_compassUAVDrawOuterCircle;
    m_bigMapUAVRadius = this->m_bigMapUAVRadius;
    if ( !DVARBOOL_compassUAVDrawOuterCircle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassUAVDrawOuterCircle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
      CgCompassSystemMP::DrawAreaMarker(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, &colorWhite, startTime, startTime, *(const vec2_t *)LocalClientGlobals->predictedPlayerState.origin.v, m_bigMapUAVRadius, cgMedia.compass_bounding_circle, 0, element, luaVM);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1077, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) != DODGE || !LocalClientGlobals->predictedPlayerState.radarEnabled )
      goto LABEL_19;
    radarMode = LocalClientGlobals->predictedPlayerState.radarMode;
    if ( radarMode == RADAR_MODE_SLOW )
    {
      m_bigMapUAVPingIntervalTimeSlow = this->m_bigMapUAVPingIntervalTimeSlow;
      goto LABEL_20;
    }
    if ( radarMode )
      m_bigMapUAVPingIntervalTimeSlow = this->m_bigMapUAVPingIntervalTimeFast;
    else
LABEL_19:
      m_bigMapUAVPingIntervalTimeSlow = this->m_bigMapUAVPingIntervalTime;
LABEL_20:
    if ( LocalClientGlobals->time - this->m_radarPingTime >= m_bigMapUAVPingIntervalTimeSlow )
    {
      CgCompassSystemMP::TriggerPortableRadarPing(this, LocalClientGlobals, &LocalClientGlobals->predictedPlayerState.origin, startTime, m_bigMapUAVRadius, 0x44u);
      this->m_radarPingTime = LocalClientGlobals->time;
    }
  }
}

/*
==============
CgCompassSystemMP::DrawCursorLayer
==============
*/
void CgCompassSystemMP::DrawCursorLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  _XMM0 = LODWORD(element->bottom);
  _XMM1 = LODWORD(element->top);
  __asm { vmaxss  xmm4, xmm0, xmm5 }
  _XMM0 = LODWORD(element->right);
  __asm { vmaxss  xmm3, xmm0, xmm5; right }
  _XMM0 = LODWORD(element->left);
  __asm
  {
    vmaxss  xmm2, xmm1, xmm5; top
    vmaxss  xmm1, xmm0, xmm5; left
  }
  LUI_Render_PushStencilRectangle((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&_XMM4);
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
  __int64 v14; 
  int v15; 
  int v16; 
  characterInfo_t *CharacterInfo; 
  CompassType v18; 
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
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  const GfxImage *material; 
  const GfxImage *codcaster_death_skull; 
  const dvar_t *v40; 
  const GfxImage *codcaster_objective_circle_bg; 
  const GfxImage *codcaster_objective_revive_cross; 
  const dvar_t *v43; 
  int team; 
  float v51; 
  float v52; 
  lua_State *v53; 
  CompassType compassTypea; 
  float v55; 
  float v56; 
  vec2_t in; 
  __int64 v58; 
  const rectDef_s *v59; 
  CgStatic *v60; 
  vec3_t pos; 
  SecureVec3 out; 
  __int64 v63; 
  vec2_t outClipped; 
  rectDef_s x; 
  vec4_t color; 
  vec4_t v67; 
  vec2_t north; 

  v63 = -2i64;
  compassTypea = compassType;
  v59 = rect;
  v53 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3078, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  v60 = LocalClientStatics;
  if ( CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum)->infoValid )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
    v55 = (float)(0.5 * x.w) + x.x;
    v56 = (float)(0.5 * x.h) + x.y;
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    p_ownerNum = &this->m_compassActors[0].ownerNum;
    v14 = 248i64;
    v58 = 248i64;
    while ( 1 )
    {
      v15 = LocalClientGlobals->time - 500;
      v16 = *(p_ownerNum - 27);
      if ( v16 < v15 && ((float)v16 >= (float)((float)v15 - 7000.0) || this->m_lastStandEnabled) )
      {
        CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, *p_ownerNum);
        if ( (unsigned int)(CharacterInfo->team - 1) <= 1 )
          break;
      }
LABEL_54:
      p_ownerNum += 34;
      v58 = --v14;
      if ( !v14 )
        goto LABEL_55;
    }
    CompassActor_GetLastPosValue((const CompassActor *)(p_ownerNum - 28), &pos);
    in = *(vec2_t *)pos.v;
    memset(&pos, 0, sizeof(pos));
    v18 = compassTypea;
    CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, boundsRadius, &north, (const vec2_t *)&out, &in, &outClipped, &outClipped);
    if ( CharacterInfo->team == TEAM_TWO )
    {
      if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        v19 = *(float *)&xmmword_147FA89B0;
        v20 = *((float *)&xmmword_147FA89B0 + 1);
        v21 = *((float *)&xmmword_147FA89B0 + 2);
        v22 = *((float *)&xmmword_147FA89B0 + 3);
      }
      else
      {
        v19 = friendlyColors.v[0];
        v20 = friendlyColors.v[1];
        v21 = friendlyColors.v[2];
        v22 = unk_147FA89AC;
      }
      CgCompassSystemMP::GetFriendlyCompassLightColor(this, &color, LocalClientGlobals);
      if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        v23 = *(float *)&dword_147FA89C0;
        v24 = *(float *)&dword_147FA89C4;
        v25 = *(float *)&dword_147FA89C8;
        v26 = *(float *)&dword_147FA89CC;
        goto LABEL_26;
      }
    }
    else
    {
      if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        v19 = *(float *)&xmmword_147FA8A20;
        v20 = *((float *)&xmmword_147FA8A20 + 1);
        v21 = *((float *)&xmmword_147FA8A20 + 2);
        v22 = *((float *)&xmmword_147FA8A20 + 3);
      }
      else
      {
        v19 = enemyColors.v[0];
        v20 = enemyColors.v[1];
        v21 = enemyColors.v[2];
        v22 = unk_147FA8A1C;
      }
      CgCompassSystemMP::GetEnemyCompassLightColor(this, &color, LocalClientGlobals);
      if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        v23 = *(float *)&dword_147FA8A30;
        v24 = *(float *)&dword_147FA8A34;
        v25 = *(float *)&dword_147FA8A38;
        v26 = *(float *)&dword_147FA8A3C;
        goto LABEL_26;
      }
    }
    v26 = colorWhite.v[3];
    v25 = colorWhite.v[2];
    v24 = colorWhite.v[1];
    v23 = colorWhite.v[0];
LABEL_26:
    v27 = (float)*(p_ownerNum - 27);
    v28 = (float)(LocalClientGlobals->time - 500) - 5000.0;
    if ( v27 > v28 || this->m_lastStandEnabled )
      v29 = FLOAT_1_0;
    else
      v29 = 1.0 - (float)((float)(v28 - v27) * 0.00050000002);
    v30 = v22 * v29;
    v31 = v29 * color.v[3];
    color.v[3] = v29 * color.v[3];
    CalcCompassFriendlySize(v18, &v52, &v51);
    outClipped.v[0] = outClipped.v[0] + v55;
    outClipped.v[1] = outClipped.v[1] + v56;
    vertAlign = v59->vertAlign;
    horzAlign = v59->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, (float *)&outClipped, (float *)&outClipped + 1, &v52, &v51, horzAlign, vertAlign);
    if ( largeMap )
    {
      v35 = DVARFLT_compassIconMLGSpectatorScale;
      if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      v52 = v52 * v35->current.value;
      v36 = DVARFLT_compassIconMLGSpectatorScale;
      if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      v51 = v51 * v36->current.value;
    }
    v37 = DVARFLT_compassMLGLargeMapInnerArrowOpacity;
    if ( this->m_lastStandEnabled )
    {
      codcaster_objective_circle_bg = cgMedia.compass.codcaster_objective_circle_bg;
      if ( !DVARFLT_compassMLGLargeMapInnerArrowOpacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGLargeMapInnerArrowOpacity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, outClipped.v[0], outClipped.v[1], 0.66666669 * v52, 0.66666669 * v51, 0.0, 0.0, 1.0, 1.0, 0.0, v19, v20, v21, v30 * v37->current.value, codcaster_objective_circle_bg, v53);
      codcaster_objective_revive_cross = cgMedia.compass.codcaster_objective_revive_cross;
      v43 = DVARFLT_compassMLGLargeMapInnerArrowOpacity;
      if ( !DVARFLT_compassMLGLargeMapInnerArrowOpacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGLargeMapInnerArrowOpacity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, outClipped.v[0], outClipped.v[1], 0.5 * v52, 0.5 * v51, 0.0, 0.0, 1.0, 1.0, 0.0, v23, v24, v25, (float)((float)(v26 * v29) * v43->current.value) * v29, codcaster_objective_revive_cross, v53);
    }
    else
    {
      material = cgMedia.compass.codcaster_death_skull_outline;
      if ( !DVARFLT_compassMLGLargeMapInnerArrowOpacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGLargeMapInnerArrowOpacity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, outClipped.v[0], outClipped.v[1], 0.66666669 * v52, 0.66666669 * v51, 0.0, 0.0, 1.0, 1.0, 0.0, color.v[0], color.v[1], color.v[2], v31 * v37->current.value, material, v53);
      codcaster_death_skull = cgMedia.compass.codcaster_death_skull;
      v40 = DVARFLT_compassMLGLargeMapInnerArrowOpacity;
      if ( !DVARFLT_compassMLGLargeMapInnerArrowOpacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMLGLargeMapInnerArrowOpacity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, outClipped.v[0], outClipped.v[1], 0.66666669 * v52, 0.66666669 * v51, 0.0, 0.0, 1.0, 1.0, 0.0, v19, v20, v21, v30 * v40->current.value, codcaster_death_skull, v53);
    }
    _XMM4 = LODWORD(colorWhite.v[0]);
    team = CharacterInfo->team;
    __asm
    {
      vinsertps xmm4, xmm4, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4, 10h; vec4_t const colorWhite
      vinsertps xmm4, xmm4, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8, 20h ; ' '; vec4_t const colorWhite
      vinsertps xmm4, xmm4, xmm3, 30h ; '0'
    }
    v67 = _XMM4;
    LocalClientStatics = v60;
    CgCompassSystem::DrawPlayerNumber(this, *p_ownerNum, outClipped.v[0], outClipped.v[1], 220.0, team, 0, largeMap, &v67, v60, element, v53);
    memset(&in, 0, sizeof(in));
    v14 = v58;
    goto LABEL_54;
  }
LABEL_55:
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemMP::DrawDecoys
==============
*/
void CgCompassSystemMP::DrawDecoys(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  const rectDef_s *v13; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  unsigned int m_omnvarCompassHideWeaponPings; 
  OmnvarData *Data; 
  double IconFadeAlpha; 
  float v20; 
  float v21; 
  int v22; 
  int *p_beginRadarFadeTime; 
  __int64 v24; 
  float v25; 
  float v26; 
  float v27; 
  bool IsActorWithinFadeTime; 
  bool IsActorWithinPingTime; 
  CompassType v30; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  double ActorPingFadeAmount; 
  float v35; 
  double ActorFadeAmount; 
  lua_State *v37; 
  GfxImage *v38; 
  LUIElement *v39; 
  float width; 
  float v42; 
  OmnvarValue current; 
  int v44; 
  CompassType compassTypea; 
  rectDef_s *v46; 
  GfxImage *material; 
  LUIElement *v48; 
  lua_State *v49; 
  float outAngle; 
  SecureVec3 out; 
  __int64 v52; 
  vec4_t outClipped; 
  rectDef_s x; 
  vec2_t north; 

  v52 = -2i64;
  compassTypea = compassType;
  v13 = rect;
  v46 = (rectDef_s *)rect;
  v48 = element;
  v49 = luaVM;
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
      return;
    v13 = v46;
  }
  CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &north);
  IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  v20 = *(float *)&IconFadeAlpha * color->v[3];
  if ( v20 != 0.0 && CharacterInfo->infoValid && (LocalClientGlobals->m_isMLGSpectator || CharacterInfo->team != TEAM_SPECTATOR) )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, v13, &x.x, &x.y, &x.w, &x.h);
    v21 = (float)(0.5 * x.w) + x.x;
    *(float *)&v22 = (float)(0.5 * x.h) + x.y;
    v44 = v22;
    outClipped.v[0] = color->v[0];
    *(_QWORD *)&outClipped.xyz.y = *(_QWORD *)&color->xyz.y;
    CgCompassSystemMP::GetEnemyCompassColor(this, &outClipped, LocalClientGlobals);
    material = Image_Register("icon_minimap_enemy", IMAGE_TRACK_HUD);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    p_beginRadarFadeTime = &this->m_compassDecoyActors[0].beginRadarFadeTime;
    v24 = 15i64;
    v25 = outClipped.v[2];
    v26 = outClipped.v[1];
    v27 = outClipped.v[0];
    do
    {
      if ( LocalClientGlobals->time < *(p_beginRadarFadeTime - 2) )
      {
        IsActorWithinFadeTime = CgCompassSystemMP::IsActorWithinFadeTime(this, p_beginRadarFadeTime - 1);
        IsActorWithinPingTime = CgCompassSystemMP::IsActorWithinPingTime(this, p_beginRadarFadeTime);
        if ( (IsActorWithinFadeTime || IsActorWithinPingTime) && (current.integer != 2 || LocalClientGlobals->predictedPlayerState.radarEnabled || IsActorWithinPingTime) )
        {
          v30 = compassTypea;
          if ( !CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, boundsRadius, &north, (const vec2_t *)&out, (const vec2_t *)(p_beginRadarFadeTime + 1), NULL, (vec2_t *)&outClipped) || Dvar_GetBool_Internal_DebugName(DVARBOOL_compassClampIcons, "compassClampIcons") )
          {
            CalcCompassFriendlySize(v30, &v42, &width);
            outClipped.v[0] = v21 + outClipped.v[0];
            outClipped.v[1] = *(float *)&v22 + outClipped.v[1];
            vertAlign = v46->vertAlign;
            horzAlign = v46->horzAlign;
            ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
            ScrPlace_ApplyRect(ActivePlacement, outClipped.v, &outClipped.v[1], &v42, &width, horzAlign, vertAlign);
            ActorPingFadeAmount = CgCompassSystemMP::GetActorPingFadeAmount(this, p_beginRadarFadeTime);
            v35 = *(float *)&ActorPingFadeAmount;
            ActorFadeAmount = CgCompassSystemMP::GetActorFadeAmount(this, p_beginRadarFadeTime - 1);
            v37 = v49;
            v38 = material;
            v39 = v48;
            if ( v35 >= 0.0 )
              LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v48, outClipped.v[0], outClipped.v[1], v42, width, 0.0, 0.0, 1.0, 1.0, 0.0, v27, v26, v25, v35 * v20, material, v49);
            if ( *(float *)&ActorFadeAmount >= 0.0 )
              LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v39, outClipped.v[0], outClipped.v[1], v42, width, 0.0, 0.0, 1.0, 1.0, 0.0, v27, v26, v25, *(float *)&ActorFadeAmount * v20, v38, v37);
            v22 = v44;
          }
        }
      }
      p_beginRadarFadeTime += 7;
      --v24;
    }
    while ( v24 );
    memset(&out, 0, sizeof(out));
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
  double IconFadeAlpha; 
  float v20; 
  __int64 BombCarrierEntityNum; 
  int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  signed int v26; 
  __int128 v27; 
  CompassActorMP *v28; 
  characterInfo_t *v29; 
  int FlagCarrierEntityNum; 
  bool v31; 
  bool v32; 
  cg_t *v33; 
  const clientInfo_t *v34; 
  const clientInfo_t *v35; 
  CgGlobalsMP *v36; 
  const dvar_t *v37; 
  bool HasPerk; 
  const ScriptableEventCompassIconDef *iconState; 
  int v40; 
  bool v41; 
  int lastUpdate; 
  int time; 
  bool IsActorWithinFadeTime; 
  bool IsActorWithinPingTime; 
  vec2_t *p_outPos; 
  CompassType v47; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float v51; 
  double ActorPingFadeAmount; 
  double ActorFadeAmount; 
  float v54; 
  float v55; 
  double v56; 
  CompassType v57; 
  float v58; 
  double Float_Internal_DebugName; 
  double v60; 
  CgMLGSpectator *MLGSpectator; 
  int SelectedClientNum; 
  int v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  LUIElement *v69; 
  const GfxImage *material; 
  double v71; 
  int v72; 
  lua_State *v73; 
  const GfxImage *minimap_codcaster_player_arrow_fullmap_border_bold_shooting; 
  const GfxImage *enemy_juggernaut; 
  char v76; 
  const ScriptableEventCompassIconDef *v77; 
  const ScriptableEventCompassIconDef *v78; 
  const ScriptableEventCompassIconDef *v79; 
  int v80; 
  LUIElement *v81; 
  float width; 
  char v84; 
  bool v85; 
  float v86; 
  float v87; 
  int v88; 
  CompassType compassTypea; 
  lua_State *v90; 
  int v91; 
  cg_t *cgameGlob; 
  LUIElement *v93; 
  CgStatic *v94; 
  __int64 v95; 
  int v96; 
  float outAngle; 
  int v98; 
  __int64 v99; 
  rectDef_s *v100; 
  __int64 v101; 
  vec2_t outPos; 
  SecureVec3 out; 
  vec4_t v104; 
  __int64 v105[3]; 
  vec2_t outClipped; 
  __int128 v107; 
  vec4_t v108; 
  rectDef_s x; 
  vec2_t north; 

  v105[2] = -2i64;
  v85 = largeMap;
  compassTypea = compassType;
  v100 = (rectDef_s *)rect;
  v93 = element;
  v90 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  cgameGlob = LocalClientGlobals;
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3364, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  v94 = LocalClientStatics;
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3368, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  m_omnvarCompassHideWeaponPings = LocalClientGlobals->m_omnvarCompassHideWeaponPings;
  if ( m_omnvarCompassHideWeaponPings == -1 || (Data = CG_Omnvar_GetData(this->m_localClientNum, m_omnvarCompassHideWeaponPings)) == NULL )
    integer = 0;
  else
    integer = Data->current.integer;
  v96 = integer;
  if ( integer != 1 )
  {
    CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &north);
    IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
    v20 = *(float *)&IconFadeAlpha * color->v[3];
    if ( v20 != 0.0 && CharacterInfo->infoValid && (LocalClientGlobals->m_isMLGSpectator || CharacterInfo->team != TEAM_SPECTATOR) )
    {
      BombCarrierEntityNum = GetBombCarrierEntityNum(LocalClientGlobals);
      CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, v100, &x.x, &x.y, &x.w, &x.h);
      *(float *)&v22 = (float)(0.5 * x.w) + x.x;
      v98 = v22;
      *(float *)&v23 = (float)(0.5 * x.h) + x.y;
      v91 = v23;
      *(_QWORD *)&v107 = *(_QWORD *)color->v;
      DWORD2(v107) = LODWORD(color->v[2]);
      ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_compassShowEnemies, "bg_compassShowEnemies");
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v88 = 0;
      v24 = BombCarrierEntityNum;
      v95 = BombCarrierEntityNum;
      v25 = 0i64;
      v99 = 0i64;
      v26 = 0;
      while ( 1 )
      {
        v27 = this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator ? xmmword_147FA8A20 : *(_OWORD *)enemyColors.v;
        v107 = v27;
        CgCompassSystemMP::GetEnemyCompassLightColor(this, &v108, LocalClientGlobals);
        v28 = &this->m_compassActors[v25];
        v29 = CgStatic::GetCharacterInfo(LocalClientStatics, this->m_compassActors[v25].ownerNum);
        *(_QWORD *)v104.v = v29;
        FlagCarrierEntityNum = GetFlagCarrierEntityNum(LocalClientGlobals, (const team_t)v29->team);
        if ( LocalClientGlobals->m_isMLGSpectator )
        {
          if ( v29->team != TEAM_ONE || LocalClientGlobals->predictedPlayerState.clientNum == v26 || v24 == v99 )
            goto LABEL_130;
          v31 = FlagCarrierEntityNum == v26;
        }
        else
        {
          v31 = (v28->flags & 1) == 0;
        }
        if ( !v31 && !CG_Players_ShouldHidePlayerFromLocalPlayer((const LocalClientNum_t)this->m_localClientNum, v28->ownerNum) )
          break;
LABEL_130:
        v88 = ++v26;
        v25 = ++v99;
        if ( v26 >= 248 )
          goto LABEL_131;
      }
      v32 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, FIRING|0x20) && bitarray_base<bitarray<224>>::testBit(&LocalClientGlobals->predictedPlayerState.sightedEnemyPlayersMask, v26);
      v33 = cgameGlob;
      if ( cgameGlob->time >= v28->pingTime )
        v28->wasPinged = 0;
      v34 = LocalClientStatics->GetClientInfo(LocalClientStatics, v33->predictedPlayerState.clientNum);
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3474, ASSERT_TYPE_ASSERT, "(myClientInfo)", (const char *)&queryFormat, "myClientInfo") )
        __debugbreak();
      v35 = LocalClientStatics->GetClientInfo(LocalClientStatics, v26);
      if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3476, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
        __debugbreak();
      this->ComputeEnemyCompassColor(this, v34, v35, (vec4_t *)&v107);
      v36 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      v37 = DVARBOOL_bg_compassShowEnemies;
      if ( !DVARBOOL_bg_compassShowEnemies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassShowEnemies") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      if ( v37->current.enabled || v36->m_isMLGSpectator || (HasPerk = BG_HasPerk(&v28->perks, 0x2Eu), BG_HasPerk(&v28->perks, 0x2Fu)) || HasPerk || (iconState = v28->iconState) != NULL && iconState->enemyCompassIconAlwaysVisible || v28->wasPinged || v32 )
      {
        v40 = 1;
        v84 = 1;
      }
      else
      {
        v40 = 0;
        v84 = 0;
      }
      v41 = (v28->flags & 0x10) != 0;
      if ( v40 )
      {
        lastUpdate = v28->lastUpdate;
        LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
        time = cgameGlob->time;
        if ( lastUpdate > time )
        {
          v28->lastUpdate = 0;
          time = LocalClientGlobals->time;
          lastUpdate = 0;
        }
        if ( lastUpdate < time - 500 )
          goto LABEL_128;
      }
      IsActorWithinFadeTime = CgCompassSystemMP::IsActorWithinFadeTime(this, &v28->beginFadeTime);
      if ( v40 )
        IsActorWithinPingTime = 1;
      else
        IsActorWithinPingTime = CgCompassSystemMP::IsActorWithinPingTime(this, &v28->beginRadarFadeTime);
      if ( !IsActorWithinFadeTime && !IsActorWithinPingTime )
        goto LABEL_127;
      if ( v96 == 2 && !cgameGlob->predictedPlayerState.radarEnabled && !IsActorWithinPingTime )
      {
        LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
        goto LABEL_128;
      }
      if ( v40 )
      {
        CompassActor_GetLastPos(v28, &outPos);
        p_outPos = &outPos;
      }
      else
      {
        if ( !v28->lastEnemyPos.Get_lastEnemyPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 233, ASSERT_TYPE_ASSERT, "(actor->lastEnemyPos.Get_lastEnemyPos)", (const char *)&queryFormat, "actor->lastEnemyPos.Get_lastEnemyPos") )
          __debugbreak();
        ((void (__fastcall *)(vec4_t *, __int64 *))((unsigned __int64)v28->lastEnemyPos.Get_lastEnemyPos ^ (unsigned __int64)&v28->lastEnemyPos ^ s_aab_get_pointer_lastenemypos))(&v28->lastEnemyPos.lastEnemyPos, v105);
        v101 = v105[0];
        memset(v105, 0, 0xCui64);
        p_outPos = (vec2_t *)&v101;
      }
      v47 = compassTypea;
      if ( CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, boundsRadius, &north, (const vec2_t *)&out, p_outPos, NULL, &outClipped) && !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassClampIcons, "compassClampIcons") )
      {
LABEL_127:
        LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
        goto LABEL_128;
      }
      CalcCompassFriendlySize(v47, &v87, &v86);
      outClipped.v[0] = *(float *)&v22 + outClipped.v[0];
      outClipped.v[1] = *(float *)&v23 + outClipped.v[1];
      vertAlign = v100->vertAlign;
      horzAlign = v100->horzAlign;
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      ScrPlace_ApplyRect(ActivePlacement, (float *)&outClipped, (float *)&outClipped + 1, &v87, &v86, horzAlign, vertAlign);
      if ( v40 )
      {
        v51 = FLOAT_1_0;
      }
      else
      {
        ActorPingFadeAmount = CgCompassSystemMP::GetActorPingFadeAmount(this, &v28->beginRadarFadeTime);
        v51 = *(float *)&ActorPingFadeAmount;
      }
      ActorFadeAmount = CgCompassSystemMP::GetActorFadeAmount(this, &v28->beginFadeTime);
      v54 = *(float *)&ActorFadeAmount;
      LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
      if ( cgameGlob->predictedPlayerState.radarShowEnemyDirection && !v41 || cgameGlob->m_isMLGSpectator )
      {
        if ( v40 )
          v55 = outAngle - v28->lastYaw;
        else
          v55 = outAngle - v28->lastEnemyYaw;
        v56 = AngleNormalize360(v55);
        width = *(float *)&v56;
        v57 = compassTypea;
        if ( (cropPartialMap || compassTypea || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation")) && LocalClientGlobals->m_isMLGSpectator && this->MapShouldRotate(this) )
        {
          v58 = this->MapRotationFactor(this);
          width = width - v58;
        }
      }
      else
      {
        width = 0.0;
        v57 = compassTypea;
      }
      CgCompassSystem::WorldYawToCompass(this, v57, LocalClientGlobals, width, &width);
      if ( LocalClientGlobals->m_isMLGSpectator )
      {
        if ( v85 )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
          v87 = *(float *)&Float_Internal_DebugName * v87;
          v60 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
          v86 = *(float *)&v60 * v86;
        }
        MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
        *((float *)&v107 + 3) = FLOAT_1_0;
        SelectedClientNum = CgMLGSpectator::GetSelectedClientNum(MLGSpectator);
        v63 = v88;
        v64 = 0.80000001 * v86;
        v65 = 0.80000001 * v87;
        v66 = v108.v[2];
        v67 = v108.v[1];
        v68 = v108.v[0];
        v69 = v93;
        if ( v88 == SelectedClientNum )
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v93, outClipped.v[0], outClipped.v[1], v65, v64, 0.0, 0.0, 1.0, 1.0, width, v108.v[0], v108.v[1], v108.v[2], v108.v[3], cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_bold, v90);
        else
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v93, outClipped.v[0], outClipped.v[1], v65, v64, 0.0, 0.0, 1.0, 1.0, width, v108.v[0], v108.v[1], v108.v[2], v108.v[3], cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border, v90);
        material = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_bg;
        v71 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGLargeMapInnerArrowOpacity, "compassMLGLargeMapInnerArrowOpacity");
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v69, outClipped.v[0], outClipped.v[1], 0.80000001 * v87, 0.80000001 * v86, 0.0, 0.0, 1.0, 1.0, width, *(float *)&v107, *((float *)&v107 + 1), *((float *)&v107 + 2), *(float *)&v71 * *((float *)&v107 + 3), material, v90);
        if ( v54 > 0.0 )
        {
          v108.v[3] = v54 * v20;
          v72 = CgMLGSpectator::GetSelectedClientNum(MLGSpectator);
          v73 = v90;
          v31 = v63 == v72;
          minimap_codcaster_player_arrow_fullmap_border_bold_shooting = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_bold_shooting;
          if ( !v31 )
            minimap_codcaster_player_arrow_fullmap_border_bold_shooting = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_shooting;
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v69, outClipped.v[0], outClipped.v[1], 0.80000001 * v87, 0.80000001 * v86, 0.0, 0.0, 1.0, 1.0, width, v68, v67, v66, v54 * v20, minimap_codcaster_player_arrow_fullmap_border_bold_shooting, v90);
          v23 = v91;
          goto LABEL_123;
        }
        v23 = v91;
LABEL_122:
        v73 = v90;
LABEL_123:
        if ( LocalClientGlobals->m_isMLGSpectator )
        {
          v80 = *(_DWORD *)(*(_QWORD *)v104.v + 12i64);
          v104 = colorWhite;
          v81 = v69;
          LocalClientStatics = v94;
          CgCompassSystem::DrawPlayerNumber(this, v28->ownerNum, outClipped.v[0], outClipped.v[1], width, v80, 0, v85, &v104, v94, v81, v73);
          v22 = v98;
LABEL_129:
          v24 = v95;
          v26 = v88;
          goto LABEL_130;
        }
        v22 = v98;
LABEL_128:
        LocalClientStatics = v94;
        goto LABEL_129;
      }
      if ( BG_HasPerk(&v28->perks, 0x2Fu) )
      {
        width = 0.0;
        enemy_juggernaut = cgMedia.compass.enemy_juggernaut;
      }
      else
      {
        if ( LocalClientGlobals->predictedPlayerState.radarShowEnemyDirection )
        {
          if ( !v41 )
          {
            v77 = v28->iconState;
            if ( v77 )
              enemy_juggernaut = v77->enemyCompassIconDirectional->textureTable->image;
            else
              enemy_juggernaut = cgMedia.compass.enemy_arrow;
            goto LABEL_111;
          }
          v76 = v40;
        }
        else
        {
          v76 = v84;
        }
        enemy_juggernaut = CG_CompassMP_GetEnemyMaterial(v28, v76, v54);
      }
LABEL_111:
      if ( enemy_juggernaut )
      {
        if ( v51 >= 0.0 || (v78 = v28->iconState) != NULL && v78->enemyCompassIconAlwaysVisible )
        {
          *((float *)&v107 + 3) = v51 * v20;
          v73 = v90;
          v69 = v93;
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v93, outClipped.v[0], outClipped.v[1], v87, v86, 0.0, 0.0, 1.0, 1.0, width, *(float *)&v107, *((float *)&v107 + 1), *((float *)&v107 + 2), v51 * v20, enemy_juggernaut, v90);
        }
        else
        {
          v73 = v90;
          v69 = v93;
        }
        if ( v54 >= 0.0 || (v79 = v28->iconState) != NULL && v79->enemyCompassIconAlwaysVisible )
        {
          *((float *)&v107 + 3) = v54 * v20;
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v69, outClipped.v[0], outClipped.v[1], v87, v86, 0.0, 0.0, 1.0, 1.0, width, *(float *)&v107, *((float *)&v107 + 1), *((float *)&v107 + 2), v54 * v20, enemy_juggernaut, v73);
        }
        goto LABEL_123;
      }
      v69 = v93;
      goto LABEL_122;
    }
  }
LABEL_131:
  memset(&out, 0, sizeof(out));
  memset(&v101, 0, sizeof(v101));
  memset(&outPos, 0, sizeof(outPos));
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
  const dvar_t *v15; 
  float value; 
  double JammingLevel; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  double IconFadeAlpha; 
  float v21; 
  int team; 
  int v23; 
  int v24; 
  int v25; 
  __int64 v26; 
  float v27; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  CompassActorMP *v30; 
  int lastUpdate; 
  int time; 
  vec4_t v33; 
  characterInfo_t *v34; 
  int FlagCarrierEntityNum; 
  bool v36; 
  characterInfo_t *v37; 
  int v38; 
  clientInfo_t *v39; 
  clientInfo_t *v40; 
  bool m_useSquads; 
  bool v42; 
  double v43; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  double v47; 
  double Float_Internal_DebugName; 
  double v49; 
  CompassType v50; 
  float v51; 
  int v52; 
  int pingTime; 
  bool wasPinged; 
  const GfxImage *friendly_chatting; 
  const ScriptableEventCompassIconDef *iconState; 
  const GfxImage *image; 
  float v58; 
  double v59; 
  double v60; 
  int beginFadeTime; 
  int v62; 
  float v63; 
  double v64; 
  const ScriptableEventCompassIconDef *v65; 
  const GfxImage *friendly_yelling; 
  float v67; 
  double v68; 
  int beginVoiceFadeTime; 
  int v70; 
  float v71; 
  double v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  int v77; 
  const ScriptableEventCompassIconDef *v78; 
  CgMLGSpectator *MLGSpectator; 
  int SelectedClientNum; 
  bool v81; 
  const GfxImage *minimap_codcaster_player_arrow_fullmap_border_bold; 
  const GfxImage *minimap_codcaster_player_arrow_fullmap_bg; 
  double v84; 
  LUIElement *v85; 
  float v86; 
  lua_State *v87; 
  LocalClientNum_t m_localClientNum; 
  CgMLGSpectator *v89; 
  const GfxImage *v90; 
  double v91; 
  int v92; 
  const GfxImage *minimap_codcaster_player_arrow_fullmap_border_bold_shooting; 
  int v94; 
  float fmt; 
  float outVector; 
  float v97; 
  float outClipped; 
  vec2_t *outClippeda; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  GfxImage *material; 
  GfxImage *materiala; 
  lua_State *v107; 
  unsigned int v108; 
  float v109; 
  float v110; 
  float v111; 
  bool v112; 
  bool v113; 
  char v114; 
  char v115; 
  bool v116; 
  int v117; 
  CompassType compassTypea; 
  LUIElement *v119; 
  int v120; 
  float v121; 
  lua_State *v122; 
  CgStatic *v123; 
  vec2_t outPos; 
  int ownerNum; 
  int v126; 
  int v127; 
  __int64 v128; 
  float outAngle; 
  int v130; 
  rectDef_s *v131; 
  __int64 BombCarrierEntityNum; 
  vec4_t v133; 
  SecureVec3 out; 
  __int64 v135; 
  vec2_t v1; 
  vec4_t v137; 
  vec2_t v0; 
  rectDef_s x; 
  vec4_t v140; 
  vec2_t north; 
  vec4_t quadVerts[4]; 

  v135 = -2i64;
  v116 = largeMap;
  v112 = cropPartialMap;
  compassTypea = compassType;
  v131 = (rectDef_s *)rect;
  v119 = element;
  v122 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2689, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v108 = clientNum;
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 || (v114 = 0, GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u)) )
    v114 = 1;
  Handler = CgHandler::getHandler(this->m_localClientNum);
  IsGameTypeQuick_BR = BG_IsGameTypeQuick_BR(Handler);
  v113 = IsGameTypeQuick_BR;
  if ( LocalClientGlobals->m_isMLGSpectator || IsGameTypeQuick_BR || BG_HasPerk(&LocalClientGlobals->predictedPlayerState.perks, 0x2Cu) )
    goto LABEL_20;
  v15 = DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowMapOnly;
  if ( !DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowMapOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_counterUAVRadarJamLevelShowMapOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  value = v15->current.value;
  JammingLevel = CG_Radar_GetJammingLevel((const LocalClientNum_t)this->m_localClientNum);
  if ( *(float *)&JammingLevel < value )
  {
LABEL_20:
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    v123 = LocalClientStatics;
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
    CgCompassSystem::GetCompassYaw(this, compassTypea, v112, LocalClientGlobals, &outAngle, &north);
    if ( v113 )
      *(float *)&IconFadeAlpha = FLOAT_1_0;
    else
      IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassTypea);
    v21 = *(float *)&IconFadeAlpha * color->v[3];
    v121 = v21;
    if ( v21 != 0.0 )
    {
      if ( CharacterInfo->infoValid )
      {
        team = CharacterInfo->team;
        v130 = team;
        if ( LocalClientGlobals->m_isMLGSpectator || team != 201 )
        {
          CG_CompassCalcDimensions(compassTypea, LocalClientGlobals, parentRect, v131, &x.x, &x.y, &x.w, &x.h);
          *(float *)&v23 = (float)(0.5 * x.w) + x.x;
          v126 = v23;
          *(float *)&v24 = (float)(0.5 * x.h) + x.y;
          v127 = v24;
          *(_QWORD *)v137.v = *(_QWORD *)color->v;
          v137.v[2] = color->v[2];
          ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
          v25 = 0;
          v117 = 0;
          BombCarrierEntityNum = GetBombCarrierEntityNum(LocalClientGlobals);
          v26 = 0i64;
          v128 = 0i64;
          v27 = FLOAT_1000_0;
          do
          {
            if ( !LocalClientGlobals->m_isMLGSpectator )
            {
              Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v25);
              p_nextState = &Entity->nextState;
              if ( !v130 && (!BG_IsAgentEntity(&Entity->nextState) || p_nextState->otherEntityNum != clientNum) || v113 && BG_IsAgentEntity(p_nextState) )
                goto LABEL_173;
              v26 = v128;
            }
            v30 = &this->m_compassActors[v26];
            lastUpdate = this->m_compassActors[v26].lastUpdate;
            time = LocalClientGlobals->time;
            if ( lastUpdate > time )
            {
              v30->lastUpdate = 0;
              time = LocalClientGlobals->time;
              lastUpdate = 0;
            }
            if ( time > 500 && lastUpdate >= time - 500 )
            {
              if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
                v33 = (vec4_t)xmmword_147FA89B0;
              else
                v33 = *(vec4_t *)friendlyColors.v;
              v137 = v33;
              CgCompassSystemMP::GetFriendlyCompassLightColor(this, &v140, LocalClientGlobals);
              v34 = CgStatic::GetCharacterInfo(LocalClientStatics, v30->ownerNum);
              *(_QWORD *)v133.v = v34;
              FlagCarrierEntityNum = GetFlagCarrierEntityNum(LocalClientGlobals, (const team_t)v34->team);
              if ( LocalClientGlobals->m_isMLGSpectator )
              {
                if ( v34->team != TEAM_TWO || LocalClientGlobals->predictedPlayerState.clientNum == v25 )
                  goto LABEL_172;
LABEL_42:
                if ( v108 == v25 && !v114 || CG_Players_IsPlayerIconHidden((const LocalClientNum_t)this->m_localClientNum, v30->ownerNum) || BombCarrierEntityNum != -1 && BombCarrierEntityNum == v128 || FlagCarrierEntityNum == v25 && LocalClientGlobals->m_isMLGSpectator )
                  goto LABEL_172;
                CG_CalcPlayerPos(&out, this->m_localClientNum);
                CompassActor_GetLastPos(v30, &outPos);
                v1.v[0] = 0.0;
                v1.v[1] = 0.0;
                v36 = CgCompassSystem::WorldPosToCompass(this, compassTypea, v112, &x, boundsRadius, &north, (const vec2_t *)&out, &outPos, &v0, &v1);
                if ( v36 && !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassClampIcons, "compassClampIcons") )
                {
LABEL_171:
                  memset(&outPos, 0, sizeof(outPos));
                  goto LABEL_172;
                }
                if ( !LocalClientStatics->HasCharacterInfo(LocalClientStatics, v25) )
                  goto LABEL_59;
                v37 = CgStatic::GetCharacterInfo(LocalClientStatics, v25);
                if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2834, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
                  __debugbreak();
                if ( v25 < cls.maxClients && v37->infoValid && Party_ClientIsInMyParty(v25) )
                  v38 = 1;
                else
LABEL_59:
                  v38 = 0;
                if ( v36 && !v38 && Dvar_GetBool_Internal_DebugName(DVARBOOL_compassHideClippedFriendlies, "compassHideClippedFriendlies") )
                {
                  LocalClientStatics = v123;
                  goto LABEL_171;
                }
                ownerNum = v30->ownerNum;
                v39 = v123->GetClientInfo(v123, v108);
                if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2853, ASSERT_TYPE_ASSERT, "(myClientInfo)", (const char *)&queryFormat, "myClientInfo") )
                  __debugbreak();
                v40 = v123->GetClientInfo(v123, (unsigned int)v25);
                if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2855, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
                  __debugbreak();
                this->ComputeFriendlyCompassColor(this, v39, v40, &v137);
                m_useSquads = LocalClientGlobals->m_useSquads;
                v42 = m_useSquads && v39->squadIndex == v40->squadIndex;
                if ( v36 && m_useSquads && !v42 && Dvar_GetBool_Internal_DebugName(DVARBOOL_compassHideClippedNonSquad, "compassHideClippedNonSquad") )
                {
                  v25 = v117;
                  LocalClientStatics = v123;
                  goto LABEL_171;
                }
                CalcCompassFriendlySize(compassTypea, &v110, &v109);
                v0.v[0] = *(float *)&v23 + v0.v[0];
                v0.v[1] = *(float *)&v24 + v0.v[1];
                v1.v[0] = *(float *)&v23 + v1.v[0];
                v1.v[1] = *(float *)&v24 + v1.v[1];
                if ( v36 )
                {
                  v43 = CalcCompassClippedDistanceScale(&v0, &v1, 0);
                  v110 = *(float *)&v43 * v110;
                  v109 = *(float *)&v43 * v109;
                }
                vertAlign = v131->vertAlign;
                horzAlign = v131->horzAlign;
                ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
                ScrPlace_ApplyRect(ActivePlacement, (float *)&v1, (float *)&v1 + 1, &v110, &v109, horzAlign, vertAlign);
                v47 = AngleNormalize360(outAngle - v30->lastYaw);
                v111 = *(float *)&v47;
                if ( LocalClientGlobals->m_isMLGSpectator && v116 )
                {
                  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
                  v110 = *(float *)&Float_Internal_DebugName * v110;
                  v49 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorScale, "compassIconMLGSpectatorScale");
                  v109 = *(float *)&v49 * v109;
                }
                v50 = compassTypea;
                if ( (v112 || compassTypea || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation")) && LocalClientGlobals->m_isMLGSpectator && this->MapShouldRotate(this) )
                {
                  v51 = this->MapRotationFactor(this);
                  v111 = v111 - v51;
                }
                CgCompassSystem::WorldYawToCompass(this, v50, LocalClientGlobals, v111, &v111);
                v52 = LocalClientGlobals->time;
                pingTime = v30->pingTime;
                if ( v52 < pingTime )
                {
                  wasPinged = v30->wasPinged;
                }
                else
                {
                  v30->wasPinged = 0;
                  wasPinged = 0;
                  v52 = LocalClientGlobals->time;
                }
                v115 = 1;
                if ( wasPinged && (pingTime - v52) % 500 >= 250 )
                {
                  v120 = 1;
                  v111 = 0.0;
                  friendly_chatting = cgMedia.compass.friendly_chatting;
                  if ( v38 )
                    friendly_chatting = cgMedia.compass.party_chatting;
                }
                else
                {
                  v120 = 0;
                  iconState = v30->iconState;
                  if ( v108 == ownerNum )
                  {
                    if ( iconState )
                      friendly_chatting = iconState->squadArrow->textureTable->image;
                    else
                      friendly_chatting = cgMedia.compass.squad_arrow;
                  }
                  else if ( v38 )
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
                  if ( v113 && (GetBRPlayerFlags(v40) & 8) != 0 )
                  {
                    friendly_chatting = cgMedia.compass.last_stand;
                    v115 = 0;
                  }
                }
                image = NULL;
                v58 = 0.0;
                v59 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSoundPingFadeTime, "compassSoundPingFadeTime");
                if ( *(float *)&v59 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2946, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassSoundPingFadeTime, \"compassSoundPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassSoundPingFadeTime ) > 0.0f") )
                  __debugbreak();
                v60 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSoundPingFadeTime, "compassSoundPingFadeTime");
                beginFadeTime = v30->beginFadeTime;
                v62 = LocalClientGlobals->time;
                if ( (float)((float)beginFadeTime + (float)(*(float *)&v60 * v27)) >= (float)v62 )
                {
                  if ( beginFadeTime < v62 )
                  {
                    v63 = (float)(v62 - beginFadeTime);
                    v64 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSoundPingFadeTime, "compassSoundPingFadeTime");
                    v58 = 1.0 - (float)(v63 / (float)(*(float *)&v64 * v27));
                  }
                  else
                  {
                    v58 = FLOAT_1_0;
                  }
                  v65 = v30->iconState;
                  if ( v108 == ownerNum )
                  {
                    if ( v65 )
                      image = v65->squadFiring->textureTable->image;
                    else
                      image = cgMedia.compass.squad_firing;
                  }
                  else if ( v38 )
                  {
                    if ( v65 )
                      image = v65->partyFiring->textureTable->image;
                    else
                      image = cgMedia.compass.party_firing;
                  }
                  else if ( v65 )
                  {
                    image = v65->friendlyFiring->textureTable->image;
                  }
                  else
                  {
                    image = cgMedia.compass.friendly_firing;
                  }
                }
                friendly_yelling = NULL;
                v67 = 0.0;
                v68 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSoundPingFadeTime, "compassSoundPingFadeTime");
                beginVoiceFadeTime = v30->beginVoiceFadeTime;
                v70 = LocalClientGlobals->time;
                if ( (float)((float)beginVoiceFadeTime + (float)(*(float *)&v68 * v27)) >= (float)v70 )
                {
                  if ( beginVoiceFadeTime < v70 )
                  {
                    v71 = (float)(v70 - beginVoiceFadeTime);
                    v72 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSoundPingFadeTime, "compassSoundPingFadeTime");
                    v67 = 1.0 - (float)(v71 / (float)(*(float *)&v72 * v27));
                  }
                  else
                  {
                    v67 = FLOAT_1_0;
                  }
                  friendly_yelling = cgMedia.compass.friendly_yelling;
                  if ( v38 )
                    friendly_yelling = cgMedia.compass.party_yelling;
                }
                if ( BG_HasPerk(&v30->perks, 0x2Fu) )
                {
                  v111 = 0.0;
                  v137.v[3] = v21;
                  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v119, v1.v[0], v1.v[1], v110, v109, 0.0, 0.0, 1.0, 1.0, 0.0, v137.v[0], v137.v[1], v137.v[2], v21, cgMedia.compass.friendly_juggernaut, v122);
                  v25 = v117;
                  LocalClientStatics = v123;
LABEL_170:
                  v24 = v127;
                  v23 = v126;
                  goto LABEL_171;
                }
                v73 = v140.v[3];
                v74 = v140.v[2];
                v75 = v140.v[1];
                v76 = v140.v[0];
                if ( (!image || v58 != 1.0) && (!friendly_yelling || v67 != 1.0) )
                {
                  v77 = v120;
                  goto LABEL_147;
                }
                v77 = v120;
                if ( !v120 )
                {
                  v78 = v30->iconState;
                  if ( !v78 || !v78->friendlyCompassIconAlwaysVisible )
                    goto LABEL_158;
                }
LABEL_147:
                if ( LocalClientGlobals->m_isMLGSpectator )
                {
                  MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
                  SelectedClientNum = CgMLGSpectator::GetSelectedClientNum(MLGSpectator);
                  v81 = v117 == SelectedClientNum;
                  minimap_codcaster_player_arrow_fullmap_border_bold = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_bold;
                  if ( !v81 )
                    minimap_codcaster_player_arrow_fullmap_border_bold = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border;
                  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v119, v1.v[0], v1.v[1], 0.80000001 * v110, 0.80000001 * v109, 0.0, 0.0, 1.0, 1.0, v111, v76, v75, v74, v73, minimap_codcaster_player_arrow_fullmap_border_bold, v122);
                  minimap_codcaster_player_arrow_fullmap_bg = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_bg;
                  v84 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGLargeMapInnerArrowOpacity, "compassMLGLargeMapInnerArrowOpacity");
                  v107 = v122;
                  material = (GfxImage *)minimap_codcaster_player_arrow_fullmap_bg;
                  v104 = *(float *)&v84 * v137.v[3];
                  v103 = v137.v[2];
                  v102 = v137.v[1];
                  v101 = v137.v[0];
                  v100 = v111;
                  outClipped = FLOAT_1_0;
                  v97 = FLOAT_1_0;
                  outVector = 0.80000001 * v109;
                  fmt = 0.80000001 * v110;
LABEL_154:
                  v85 = v119;
                  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v119, v1.v[0], v1.v[1], fmt, outVector, 0.0, 0.0, v97, outClipped, v100, v101, v102, v103, v104, material, v107);
                }
                else if ( friendly_chatting )
                {
                  v137.v[3] = v121;
                  if ( v115 )
                  {
                    v107 = v122;
                    material = (GfxImage *)friendly_chatting;
                    v104 = v121;
                    v103 = v137.v[2];
                    v102 = v137.v[1];
                    v101 = v137.v[0];
                    v100 = v111;
                    outClipped = FLOAT_1_0;
                    v97 = FLOAT_1_0;
                    outVector = v109;
                    fmt = v110;
                    goto LABEL_154;
                  }
                  LUI_CoD_GenerateQuadVerts(v1.v[0] - (float)(0.5 * v110), v1.v[1] - (float)(0.5 * v109), (float)(0.5 * v110) + v1.v[0], (float)(0.5 * v109) + v1.v[1], (vec4_t (*)[4])quadVerts);
                  outClippeda = (vec2_t *)friendly_chatting;
                  v85 = v119;
                  LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, v119, v122, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &v137, (const GfxImage *)outClippeda);
                }
                else
                {
                  v85 = v119;
                }
                if ( !v77 )
                {
LABEL_158:
                  v86 = v121;
                  v87 = v122;
                  v85 = v119;
                  if ( friendly_yelling )
                  {
                    v137.v[3] = v67 * v121;
                    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v119, v1.v[0], v1.v[1], v110, v109, 0.0, 0.0, 1.0, 1.0, v111, v137.v[0], v137.v[1], v137.v[2], v67 * v121, friendly_yelling, v122);
                  }
                  if ( image )
                  {
                    m_localClientNum = this->m_localClientNum;
                    if ( LocalClientGlobals->m_isMLGSpectator )
                    {
                      v89 = CgMLGSpectator::GetMLGSpectator(m_localClientNum);
                      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v85, v1.v[0], v1.v[1], 0.80000001 * v110, 0.80000001 * v109, 0.0, 0.0, 1.0, 1.0, v111, v76, v75, v74, v73, cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border, v87);
                      v90 = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_bg;
                      v91 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGLargeMapInnerArrowOpacity, "compassMLGLargeMapInnerArrowOpacity");
                      materiala = (GfxImage *)v90;
                      v85 = v119;
                      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v119, v1.v[0], v1.v[1], 0.80000001 * v110, 0.80000001 * v109, 0.0, 0.0, 1.0, 1.0, v111, v137.v[0], v137.v[1], v137.v[2], *(float *)&v91 * v137.v[3], materiala, v87);
                      v92 = CgMLGSpectator::GetSelectedClientNum(v89);
                      v25 = v117;
                      v81 = v117 == v92;
                      minimap_codcaster_player_arrow_fullmap_border_bold_shooting = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_bold_shooting;
                      if ( !v81 )
                        minimap_codcaster_player_arrow_fullmap_border_bold_shooting = cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_shooting;
                      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v85, v1.v[0], v1.v[1], 0.80000001 * v110, 0.80000001 * v109, 0.0, 0.0, 1.0, 1.0, v111, v76, v75, v74, v58 * v86, minimap_codcaster_player_arrow_fullmap_border_bold_shooting, v87);
                      goto LABEL_167;
                    }
                    v137.v[3] = v58 * v86;
                    LUI_Render_DrawQuadRotated(m_localClientNum, v85, v1.v[0], v1.v[1], v110, v109, 0.0, 0.0, 1.0, 1.0, v111, v137.v[0], v137.v[1], v137.v[2], v58 * v86, image, v87);
                  }
                }
                v25 = v117;
LABEL_167:
                LocalClientStatics = v123;
                if ( LocalClientGlobals->m_isMLGSpectator )
                {
                  v94 = *(_DWORD *)(*(_QWORD *)v133.v + 12i64);
                  v133 = colorWhite;
                  CgCompassSystem::DrawPlayerNumber(this, v30->ownerNum, v1.v[0], v1.v[1], v111, v94, 0, v116, &v133, v123, v85, v122);
                }
                v21 = v121;
                v27 = FLOAT_1000_0;
                goto LABEL_170;
              }
              if ( (v30->flags & 1) == 0 )
                goto LABEL_42;
            }
LABEL_172:
            clientNum = v108;
LABEL_173:
            v117 = ++v25;
            v26 = ++v128;
          }
          while ( v25 < 248 );
        }
      }
    }
  }
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemMP::DrawGlitchOnMinimap
==============
*/
void CgCompassSystemMP::DrawGlitchOnMinimap(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  const rectDef_s *v9; 
  const rectDef_s *v10; 
  bool v11; 
  CgGlobalsMP *LocalClientGlobals; 
  LocalClientNum_t m_localClientNum; 
  CgGlobalsMP *v15; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  const characterInfo_t *CharacterInfo; 
  CgCompassSystemMP_vtbl *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  float value; 
  int v23; 
  float *v24; 
  __int64 v25; 
  __int64 v26; 
  CgEntitySystem *v27; 
  cg_t *v28; 
  const characterInfo_t *v29; 
  team_t team; 
  team_t v31; 
  __int128 v32; 
  double v35; 
  const dvar_t *v36; 
  Material *material; 
  vec4_t *v38; 
  float v40; 
  CgGlobalsMP *v41; 
  char v42; 
  CgStatic *v43; 
  const characterInfo_t *v44; 
  const rectDef_s *v45; 
  const rectDef_s *v46; 
  lua_State *v47; 
  LUIElement *v48; 
  GfxImage *v49; 
  vec4_t *v50; 

  v9 = parentRect;
  v10 = rect;
  v11 = cropPartialMap;
  v50 = (vec4_t *)color;
  v49 = mapMask;
  v48 = element;
  v47 = luaVM;
  v45 = parentRect;
  v46 = rect;
  if ( compassType == COMPASS_TYPE_PARTIAL )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    m_localClientNum = this->m_localClientNum;
    v15 = LocalClientGlobals;
    v41 = LocalClientGlobals;
    LocalClientStatics = CgStatic::GetLocalClientStatics(m_localClientNum);
    clientNum = v15->predictedPlayerState.clientNum;
    v43 = LocalClientStatics;
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
    v19 = this->__vftable;
    v44 = CharacterInfo;
    v19->GetDrawnItemScalerRadiusAndMultiplier(this, CUAV, &v40, (float *)&v42);
    v20 = DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed;
    if ( !DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_counterUAVStrengthLevelFullyJammed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v15->predictedPlayerState.radarStrength == v20->current.integer )
    {
      v21 = DCONST_DVARFLT_compassCUAVGlitchAmount;
      if ( !DCONST_DVARFLT_compassCUAVGlitchAmount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCUAVGlitchAmount") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      value = v21->current.value;
      if ( this->m_isBigMapMinimap )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (int)ComCharacterLimits::ms_gameData.m_characterCount > 248 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4984, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetCharacterMaxCount() ) <= ( ((200 + 48)) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetCharacterMaxCount()", "MAX_COMPASS_ACTORS_MP", ComCharacterLimits::ms_gameData.m_characterCount, 248) )
            __debugbreak();
        }
        v23 = 0;
        v24 = (float *)&this->m_compassScramblers[0][0].pos + 1;
        while ( 1 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( v23 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
            break;
          v25 = 4i64;
          do
          {
            if ( *((_DWORD *)v24 + 1) != 2047 )
            {
              v26 = this->m_localClientNum;
              if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
              {
                LODWORD(v38) = this->m_localClientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v38) )
                  __debugbreak();
              }
              if ( (unsigned int)v26 >= CgEntitySystem::ms_allocatedCount )
              {
                LODWORD(v38) = CgEntitySystem::ms_allocatedCount;
                LODWORD(material) = v26;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", material, v38) )
                  __debugbreak();
              }
              if ( !CgEntitySystem::ms_entitySystemArray[v26] )
              {
                LODWORD(v38) = v26;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v38) )
                  __debugbreak();
              }
              v27 = CgEntitySystem::ms_entitySystemArray[v26];
              if ( (unsigned int)v23 >= 0x800 )
              {
                LODWORD(v38) = 2048;
                LODWORD(material) = v23;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", material, v38) )
                  __debugbreak();
              }
              v28 = CG_GetLocalClientGlobals((const LocalClientNum_t)v43->m_localClientNum);
              if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                __debugbreak();
              if ( v28->IsMP(v28) )
              {
                if ( v23 >= v28[1].predictedPlayerState.rxvOmnvars[64].timeModified )
                {
                  LODWORD(v38) = v28[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                  LODWORD(material) = v23;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", material, v38) )
                    __debugbreak();
                }
                v29 = (const characterInfo_t *)(*(_QWORD *)&v28[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v23);
              }
              else
              {
                v29 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v28, v23);
              }
              team = v29->team;
              v31 = v44->team;
              if ( v41 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
                __debugbreak();
              if ( (CgEntitySystem *)((char *)v27 + 760 * v23) == (CgEntitySystem *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
                __debugbreak();
              if ( v31 == TEAM_ZERO || v31 != team )
              {
                v32 = *((unsigned int *)v24 - 1);
                *(float *)&v32 = *(v24 - 1) - v41->predictedPlayerState.origin.v[0];
                *(float *)&v32 = fsqrt((float)(*(float *)&v32 * *(float *)&v32) + (float)((float)(*v24 - v41->predictedPlayerState.origin.v[1]) * (float)(*v24 - v41->predictedPlayerState.origin.v[1])));
                _XMM2 = v32;
                __asm { vminss  xmm8, xmm2, xmm8 }
                if ( v40 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5013, ASSERT_TYPE_ASSERT, "(compassCUAVRadius > 0.0f)", (const char *)&queryFormat, "compassCUAVRadius > 0.0f") )
                  __debugbreak();
                v35 = I_fclamp(*(float *)&_XMM8 / v40, 0.0, 1.0);
                v36 = DCONST_DVARFLT_compassCUAVGlitchAmount;
                if ( !DCONST_DVARFLT_compassCUAVGlitchAmount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCUAVGlitchAmount") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v36);
                value = (float)(1.0 - *(float *)&v35) * v36->current.value;
              }
            }
            v24 += 4;
            --v25;
          }
          while ( v25 );
          ++v23;
        }
        v11 = cropPartialMap;
        v9 = v45;
        v10 = v46;
      }
      LUI_Render_PushGlitch(value);
      CgCompassSystem::DrawPlayerMap(this, COMPASS_TYPE_PARTIAL, v11, v9, v10, NULL, v50, v49, NULL, NULL, v48, v47);
      LUI_Render_PopGlitch();
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
  const cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  float v12; 
  float v13; 
  CgCompassSystem *CompassSystem; 
  float *TacmapMapCenter; 
  LocalClientNum_t m_localClientNum; 
  float v17; 
  int v18; 
  const ScreenPlacement *v19; 
  GfxFont *FontHandle; 
  float v21; 
  int v22; 
  __int64 v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  const char *v33; 
  int v34; 
  float v35; 
  const char *v36; 
  float v37; 
  float y; 
  float x; 
  float w; 
  float vMax; 
  float v42; 
  int textHeight; 
  float v44; 
  vec4_t v45; 
  int v46; 
  vec4_t quadVerts[4]; 
  char *text[10]; 
  char *v49[10]; 

  if ( compassType == COMPASS_TYPE_TACMAP )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    CG_CompassCalcDimensions(COMPASS_TYPE_TACMAP, LocalClientGlobals, parentRect, rect, &x, &y, &w, &vMax);
    LODWORD(parentRect) = rect->vertAlign;
    LODWORD(rect) = rect->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &vMax, (int)rect, (int)parentRect);
    v12 = w * 0.029999999;
    v45.v[0] = colorWhite.v[0];
    v45.v[2] = colorWhite.v[2];
    v45.v[1] = colorWhite.v[1];
    v42 = w * 0.029999999;
    v45.v[3] = FLOAT_0_5;
    LUI_CoD_GenerateQuadVerts(x, y - (float)(w * 0.029999999), w + x, y, (vec4_t (*)[4])quadVerts);
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &v45, rgp.blackImage);
    LUI_CoD_GenerateQuadVerts(x, y + vMax, x + w, (float)(y + vMax) + v12, (vec4_t (*)[4])quadVerts);
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &v45, rgp.blackImage);
    LUI_CoD_GenerateQuadVerts(x - v12, y - v12, x, (float)(y + vMax) + v12, (vec4_t (*)[4])quadVerts);
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &v45, rgp.blackImage);
    LUI_CoD_GenerateQuadVerts(x + w, y - v12, (float)(x + w) + v12, (float)(y + vMax) + v12, (vec4_t (*)[4])quadVerts);
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &v45, rgp.blackImage);
    v13 = 1.0 / this->m_currentZoomLevel;
    CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
    TacmapMapCenter = (float *)CgCompassSystem::GetTacmapMapCenter(CompassSystem);
    m_localClientNum = this->m_localClientNum;
    v17 = *TacmapMapCenter;
    v18 = *((int *)TacmapMapCenter + 1);
    v44 = *TacmapMapCenter;
    v46 = v18;
    v19 = ScrPlace_GetActivePlacement(m_localClientNum);
    FontHandle = UI_GetFontHandle(v19, 1, 1.0);
    v21 = v12 * 0.33333334;
    textHeight = (int)v12;
    v22 = 0;
    text[0] = "A";
    v23 = 0i64;
    text[1] = "B";
    text[2] = "C";
    text[3] = "D";
    text[4] = "E";
    text[5] = "F";
    text[6] = "G";
    text[7] = "H";
    text[8] = "I";
    text[9] = "J";
    v49[0] = "0";
    v49[1] = "1";
    v49[2] = "2";
    v49[3] = "3";
    v49[4] = "4";
    v49[5] = "5";
    v49[6] = "6";
    v49[7] = "7";
    v49[8] = "8";
    v49[9] = "9";
    do
    {
      v24 = _mm_cvtepi32_ps((__m128i)(unsigned int)v22).m128_f32[0];
      v25 = (float)((float)((float)(v24 * 0.1) - v17) * v13) + 0.5;
      v26 = v25 * w;
      v27 = (float)((float)((float)(v24 * 0.1) - *(float *)&v18) * v13) + 0.5;
      v28 = v27 * w;
      if ( v25 >= 0.0 && v25 <= 1.0 )
      {
        LUI_CoD_GenerateQuadVerts(v26 + x, y - v21, (float)(v26 + x) + 2.0, y, (vec4_t (*)[4])quadVerts);
        LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &colorDkGrey, rgp.whiteImage);
        LUI_CoD_GenerateQuadVerts(v26 + x, y + vMax, (float)(v26 + x) + 2.0, (float)(y + vMax) + v21, (vec4_t (*)[4])quadVerts);
        LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &colorDkGrey, rgp.whiteImage);
      }
      if ( v27 >= 0.0 && v27 <= 1.0 )
      {
        LUI_CoD_GenerateQuadVerts(x - v21, v28 + y, x, (float)(v28 + y) + 2.0, (vec4_t (*)[4])quadVerts);
        LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &colorDkGrey, rgp.whiteImage);
        LUI_CoD_GenerateQuadVerts(x + w, v28 + y, (float)(x + w) + v21, (float)(v28 + y) + 2.0, (vec4_t (*)[4])quadVerts);
        LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &colorDkGrey, rgp.whiteImage);
      }
      if ( v22 < 10 )
      {
        v29 = v25 + (float)(v13 * 0.050000001);
        v30 = v29 * w;
        v31 = (float)(v13 * 0.050000001) + v27;
        v32 = v31 * w;
        if ( v29 < 0.0 || v29 > 1.0 )
        {
          v35 = v42;
        }
        else
        {
          v33 = text[v23];
          v34 = R_TextWidth(v33, 0, FontHandle, textHeight);
          v35 = v42;
          LUI_CoD_GenerateQuadVerts((float)(v30 + x) - (float)((float)v34 * 0.5), y - v42, (float)(v30 + x) + (float)((float)v34 * 0.5), y, (vec4_t (*)[4])quadVerts);
          LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, &colorWhite, FontHandle, v33, 0, 0, 0.0, (int)v35, NULL, NULL);
        }
        if ( v31 >= 0.0 && v31 <= 1.0 )
        {
          v36 = v49[v23];
          v37 = (float)(v35 - (float)R_TextWidth(v36, 0, FontHandle, (int)v35)) * 0.5;
          LUI_CoD_GenerateQuadVerts((float)(x - v35) + v37, (float)(v32 + y) - (float)(v35 * 0.5), x - v37, (float)(v32 + y) + (float)(v35 * 0.5), (vec4_t (*)[4])quadVerts);
          LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, &colorWhite, FontHandle, v36, 0, 0, 0.0, (int)v35, NULL, NULL);
        }
      }
      v17 = v44;
      v18 = v46;
      ++v22;
      ++v23;
    }
    while ( v22 <= 10 );
  }
}

/*
==============
CgCompassSystemMP::DrawHeadIcons
==============
*/
void CgCompassSystemMP::DrawHeadIcons(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  double IconFadeAlpha; 
  CgGlobalsMP *LocalClientGlobals; 
  float v15; 
  float v16; 
  unsigned int v17; 
  const GfxImage **p_cachedImage; 
  unsigned int *p_icon; 
  bool v20; 
  ObjectiveFlags w; 
  float outAngle; 
  char *outName; 
  lua_State *v25; 
  LUIElement *v26; 
  rectDef_s *v27; 
  SecureVec3 out; 
  __int64 v29; 
  vec2_t xyClipped; 
  vec2_t xy; 
  rectDef_s mapRect; 
  vec2_t outVector; 
  vec3_t outWorldPosition; 

  v29 = -2i64;
  v27 = (rectDef_s *)rect;
  v26 = element;
  v25 = luaVM;
  IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  if ( (float)(*(float *)&IconFadeAlpha * color->v[3]) > 0.0 )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    v15 = (float)(0.5 * mapRect.w) + mapRect.x;
    v16 = (float)(0.5 * mapRect.h) + mapRect.y;
    CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    v17 = 0;
    p_cachedImage = &LocalClientGlobals->headIconCompassImageCache[0].cachedImage;
    p_icon = &LocalClientGlobals->predictedPlayerState.headIcons[0].icon;
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
              xy.v[0] = 0.0;
              xy.v[1] = 0.0;
              xyClipped.v[0] = 0.0;
              xyClipped.v[1] = 0.0;
              v20 = CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &mapRect, boundsRadius, &outVector, (const vec2_t *)&out, (const vec2_t *)&outWorldPosition, &xy, &xyClipped);
              xy.v[0] = v15 + xy.v[0];
              xy.v[1] = v16 + xy.v[1];
              xyClipped.v[0] = v15 + xyClipped.v[0];
              xyClipped.v[1] = v16 + xyClipped.v[1];
              LOWORD(w) = 0;
              CgCompassSystemMP::DrawObjective(this, compassType, v27, &xy, &xyClipped, v20, w, OBJ_ICON_SIZE_HEADICON, NULL, 0.0, 0.0, 0.0, *p_cachedImage, &colorWhite, &colorWhite, v26, v25);
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
      ++v17;
      p_icon += 6;
      p_cachedImage += 2;
    }
    while ( v17 < 0x20 );
  }
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemMP::DrawItemsLayer
==============
*/
void CgCompassSystemMP::DrawItemsLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  LocalClientNum_t m_localClientNum; 
  float boundsRadius; 
  bool cropPartialMap; 
  CompassType compassType; 
  const cg_t *LocalClientGlobals; 
  const MinimapOptions *v13; 
  CgCompassSystemMP_vtbl *v14; 
  float outAngle; 
  const MinimapOptions *v18; 
  vec2_t playerWorldPos; 
  float v20; 
  vec2_t outVector; 
  vec2_t v22; 
  vec2_t out; 
  vec2_t in; 
  float v25; 
  rectDef_s mapRect; 

  m_localClientNum = this->m_localClientNum;
  boundsRadius = minimapOptions->boundsRadius;
  cropPartialMap = minimapOptions->cropPartialMap;
  compassType = minimapOptions->compassType;
  v18 = minimapOptions;
  LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
  CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
  CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
  playerWorldPos.v[0] = 0.0;
  playerWorldPos.v[1] = 0.0;
  v20 = 0.0;
  in.v[1] = 0.0;
  v25 = 0.0;
  in.v[0] = FLOAT_10000_0;
  CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &mapRect, boundsRadius, &outVector, &playerWorldPos, &playerWorldPos, &out, NULL);
  CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &mapRect, boundsRadius, &outVector, &playerWorldPos, &in, &v22, NULL);
  v13 = v18;
  v14 = this->__vftable;
  this->m_uiWorldToScreenScale = fsqrt((float)((float)(v22.v[1] - out.v[1]) * (float)(v22.v[1] - out.v[1])) + (float)((float)(v22.v[0] - out.v[0]) * (float)(v22.v[0] - out.v[0]))) * 0.000099999997;
  ((void (__fastcall *)(CgCompassSystemMP *, _QWORD, bool, const rectDef_s *, const rectDef_s *, _DWORD, const vec4_t *, GfxImage *, LUIElement *, lua_State *))v14->DrawScramblers)(this, (unsigned int)v13->compassType, v13->cropPartialMap, parentRect, rect, LODWORD(v13->boundsRadius), color, v13->mapMask, element, luaVM);
  CgCompassSystemMP::DrawPortableRadar(this, v13->compassType, v13->cropPartialMap, parentRect, rect, v13->boundsRadius, color, v13->mapMask, element, luaVM);
  CgCompassSystemMP::DrawScriptableObjectives(this, v13->compassType, v13->cropPartialMap, v13->largeMap, parentRect, rect, v13->boundsRadius, color, element, luaVM);
  CG_VehicleHudMP_DrawCompass(this->m_localClientNum, v13->compassType, v13->cropPartialMap, parentRect, rect, v13->boundsRadius, color, v13->largeMap, v13->mapMask, element, luaVM);
  CgCompassSystemMP::DrawPlayerPointers(this, v13->compassType, v13->cropPartialMap, v13->largeMap, parentRect, rect, v13->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawTurrets(this, v13->compassType, v13->cropPartialMap, parentRect, rect, v13->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawPlanes(this, v13->compassType, v13->cropPartialMap, parentRect, rect, v13->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawHeadIcons(this, v13->compassType, v13->cropPartialMap, parentRect, rect, v13->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawPlayerCalloutMarkerPings(this, 0, v13->compassType, v13->cropPartialMap, parentRect, rect, v13->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawMLGCameras(this, v13->compassType, v13->cropPartialMap, parentRect, rect, v13->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawGridLabels(this, v13->compassType, parentRect, rect, color, element, luaVM);
}

/*
==============
CgCompassSystemMP::DrawMLGCameraIcon
==============
*/
void CgCompassSystemMP::DrawMLGCameraIcon(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *rect, const rectDef_s *scaledRect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM, float centerX, float centerY, const cg_t *cgameGlob, const vec3_t *camOrigin, const vec2_t *camAngles, const GfxImage *icon, int cameraNumber)
{
  double v19; 
  const dvar_t *v20; 
  float v21; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  lua_State *v29; 
  LUIElement *v30; 
  float displayWidth; 
  float displayHeight; 
  float v33; 
  float v34; 
  __int64 v35; 
  const ScreenPlacement *v36; 
  GfxFont *FontHandle; 
  float out; 
  char dest[4]; 
  float w; 
  float h; 
  float outAngle; 
  rectDef_s *mapRect; 
  const rectDef_s *v44; 
  GfxImage *material; 
  lua_State *v46; 
  LUIElement *v47; 
  SecureVec3 playerWorldPos; 
  __int64 v49; 
  vec2_t outClipped; 
  vec2_t v51; 
  vec4_t v52; 
  vec2_t north; 
  vec4_t quadVerts[4]; 

  v49 = -2i64;
  v44 = rect;
  mapRect = (rectDef_s *)scaledRect;
  v47 = element;
  v46 = luaVM;
  material = (GfxImage *)icon;
  if ( 3.4028235e38 != camOrigin->v[0] )
  {
    CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, cgameGlob, &outAngle, &north);
    v19 = AngleNormalize360(outAngle - camAngles->v[1]);
    out = *(float *)&v19;
    if ( !cropPartialMap && compassType == COMPASS_TYPE_PARTIAL )
    {
      v20 = DVARBOOL_compassRotation;
      if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.enabled )
        goto LABEL_10;
    }
    if ( this->MapShouldRotate(this) )
    {
      v21 = out - this->MapRotationFactor(this);
      out = v21;
    }
    else
    {
LABEL_10:
      v21 = out;
    }
    CgCompassSystem::WorldYawToCompass(this, compassType, cgameGlob, v21, &out);
    outClipped.v[0] = 0.0;
    outClipped.v[1] = 0.0;
    CG_CalcPlayerPos(&playerWorldPos, this->m_localClientNum);
    CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, mapRect, boundsRadius, &north, (const vec2_t *)&playerWorldPos, (const vec2_t *)camOrigin, &v51, &outClipped);
    v51.v[0] = centerX + v51.v[0];
    v51.v[1] = centerY + v51.v[1];
    outClipped.v[0] = centerX + outClipped.v[0];
    outClipped.v[1] = centerY + outClipped.v[1];
    CgCompassSystem::CalcCompassPointerSize(this, compassType, OBJ_ICON_SIZE_REGULAR, &w, &h);
    vertAlign = v44->vertAlign;
    horzAlign = v44->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, (float *)&outClipped, (float *)&outClipped + 1, &w, &h, horzAlign, vertAlign);
    v25 = w;
    v26 = w;
    v27 = h;
    v28 = h;
    if ( material == staticMLGCameras.m_mlgSelectedCamIcon )
    {
      v25 = w * 2.7777777;
      w = w * 2.7777777;
      v27 = h * 2.7777777;
      h = h * 2.7777777;
    }
    v29 = v46;
    v30 = v47;
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v47, outClipped.v[0], outClipped.v[1], v25, v27, 0.0, 0.0, 1.0, 1.0, out, color->v[0], color->v[1], color->v[2], color->v[3], material, v46);
    displayWidth = (float)vidConfig.displayWidth;
    displayHeight = (float)vidConfig.displayHeight;
    v33 = (float)(v26 * 0.5) + outClipped.v[0];
    v34 = (float)(v28 * 0.5) + outClipped.v[1];
    v35 = tls_index;
    if ( dword_151419078 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_151419078);
      if ( dword_151419078 == -1 )
      {
        compassMLGCameraTextXOffset = displayWidth * -0.0052083335;
        j__Init_thread_footer(&dword_151419078);
      }
    }
    if ( dword_151419080 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v35) + 1772i64) )
    {
      j__Init_thread_header(&dword_151419080);
      if ( dword_151419080 == -1 )
      {
        compassMLGCameraTextYOffset = displayHeight * -0.00092592591;
        j__Init_thread_footer(&dword_151419080);
      }
    }
    LUI_CoD_GenerateQuadVerts((float)(v33 + compassMLGCameraTextXOffset) - (float)(displayWidth * 0.0065104165), (float)(v34 + compassMLGCameraTextYOffset) + (float)(displayHeight * 0.0078703705), (float)(displayWidth * 0.0065104165) + (float)(v33 + compassMLGCameraTextXOffset), (float)(v34 + compassMLGCameraTextYOffset) - (float)(displayHeight * 0.0078703705), (vec4_t (*)[4])quadVerts);
    v52.v[0] = 0.0;
    v52.v[1] = 0.0;
    v52.v[2] = 0.0;
    v52.v[3] = color->v[3];
    Com_sprintf(dest, 2ui64, "%d", (unsigned int)cameraNumber);
    v36 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    FontHandle = UI_GetFontHandle(v36, 1, 1.0);
    LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, v29, v30, (const vec4_t (*)[4])quadVerts, &v52, FontHandle, dest, 0, 0, 0.0, 20, NULL, NULL);
    memset(&playerWorldPos, 0, sizeof(playerWorldPos));
  }
}

/*
==============
CgCompassSystemMP::DrawMLGCameras
==============
*/
void CgCompassSystemMP::DrawMLGCameras(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  const dvar_t *v21; 
  const cg_t *LocalClientGlobals; 
  LocalClientNum_t m_localClientNum; 
  int cameraNumber; 
  DDLContext *DDLContext; 
  bool *m_newlyCreated; 
  float v30; 
  float v31; 
  vec3_t *camOrigin; 
  float *v; 
  char v34; 
  vec2_t *camAngles; 
  float *v36; 
  float v37; 
  const GfxImage *icon; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  bool v43; 
  unsigned __int64 v44; 
  int m_debugCamSelectedIndex; 
  __int64 v46; 
  int v47; 
  int cmdsize; 
  int v49; 
  __int64 i; 
  unsigned __int8 *v51; 
  float v52; 
  float *v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  LocalClientNum_t ClientFromController; 
  __int64 v59; 
  __int64 v60; 
  int controllerIndex; 
  vec3_t *p_origin; 
  cg_t *cgameGlob; 
  DDLState fromState; 
  DDLState toState; 
  vec2_t v69; 
  rectDef_s x; 
  DDLState result; 
  float v1[4]; 
  float v0[4]; 
  char dest[256]; 
  __int128 v75; 
  __int128 v76; 
  __int128 v77; 
  __int128 v78; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v84; 

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
      *(_OWORD *)&fromState.member = _XMM0;
      toState.arrayIndex = -1;
      *(_OWORD *)&toState.member = _XMM0;
      controllerIndex = CL_Mgr_GetControllerFromClient(m_localClientNum);
      DDLContext = GamerProfile_GetDDLContext(controllerIndex, MLG_SETTINGS);
      fromState = *DDL_GetRootState(&result, DDLContext->def);
      DDL_MoveToName(&fromState, &toState, "shoutcaster_cameraicon");
      if ( DDL_GetUInt(&toState, DDLContext) )
      {
        v84 = v10;
        v83 = v11;
        v82 = v12;
        v81 = v13;
        v80 = v14;
        v79 = v15;
        v78 = v16;
        v77 = v17;
        v76 = v18;
        v75 = v19;
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
        m_newlyCreated = staticMLGCameras.m_newlyCreated;
        v30 = (float)(0.5 * x.w) + x.x;
        v31 = (float)(0.5 * x.h) + x.y;
        LODWORD(v69.v[0]) = staticMLGCameras.m_lastSelectCamIndex;
        camOrigin = staticMLGCameras.m_camOrigins;
        v = LocalClientGlobals->predictedPlayerState.origin.v;
        v34 = 0;
        p_origin = &LocalClientGlobals->predictedPlayerState.origin;
        camAngles = staticMLGCameras.m_camAngles;
        v36 = &staticMLGCameras.m_camOrigins[0].v[2];
        do
        {
          v37 = v[1] - *(v36 - 1);
          icon = staticMLGCameras.m_mlgCamIcon;
          v0[0] = *v - *(v36 - 2);
          v39 = v[2] - *v36;
          v0[1] = v37;
          v0[2] = v39;
          v40 = color->v[1];
          v41 = color->v[2];
          v42 = color->v[3];
          *(float *)&result.isValid = color->v[0];
          *(float *)&result.offset = v40;
          *(float *)&result.arrayIndex = v41;
          *((float *)&result.arrayIndex + 1) = v42;
          v1[0] = 0.0;
          v1[1] = 0.0;
          v1[2] = 0.0;
          if ( VecNCompareCustomEpsilon(v0, v1, 0.001, 3) )
          {
            icon = staticMLGCameras.m_mlgSelectedCamIcon;
            staticMLGCameras.m_lastSelectCamIndex = cameraNumber;
          }
          else if ( staticMLGCameras.m_debugCamSelectedIndex == cameraNumber && (staticMLGCameras.m_lastSelectCamIndex == cameraNumber || *m_newlyCreated) )
          {
            *(float *)&result.offset = v40 * 0.30000001;
            *((float *)&result.arrayIndex + 1) = v42 * 0.80000001;
            *(float *)&result.arrayIndex = v41 * 0.050000001;
            v34 = 1;
          }
          CgCompassSystemMP::DrawMLGCameraIcon(this, compassType, cropPartialMap, rect, &x, boundsRadius, (const vec4_t *)&result, element, luaVM, v30, v31, cgameGlob, camOrigin, camAngles, icon, ++cameraNumber);
          v = (float *)p_origin;
          ++camAngles;
          ++camOrigin;
          v36 += 3;
          ++m_newlyCreated;
        }
        while ( cameraNumber < 8 );
        v43 = v34 == 0;
        v44 = -1i64;
        if ( v43 )
        {
          v53 = (float *)p_origin;
        }
        else
        {
          m_debugCamSelectedIndex = staticMLGCameras.m_debugCamSelectedIndex;
          if ( staticMLGCameras.m_newlyCreated[staticMLGCameras.m_debugCamSelectedIndex] && LODWORD(v69.v[0]) != staticMLGCameras.m_debugCamSelectedIndex && 3.4028235e38 != staticMLGCameras.m_camOrigins[staticMLGCameras.m_debugCamSelectedIndex].v[0] )
          {
            staticMLGCameras.m_lastSelectCamIndex = staticMLGCameras.m_debugCamSelectedIndex;
            Com_sprintf(dest, 0x100ui64, "setspectatorviewpos %f %f %f %f %f\n", staticMLGCameras.m_camOrigins[staticMLGCameras.m_debugCamSelectedIndex].v[0], staticMLGCameras.m_camOrigins[staticMLGCameras.m_debugCamSelectedIndex].v[1], staticMLGCameras.m_camOrigins[staticMLGCameras.m_debugCamSelectedIndex].v[2], staticMLGCameras.m_camAngles[staticMLGCameras.m_debugCamSelectedIndex].v[1], staticMLGCameras.m_camAngles[staticMLGCameras.m_debugCamSelectedIndex].v[0]);
            v46 = this->m_localClientNum;
            Sys_EnterCriticalSection(CRITSECT_CBUF);
            do
              ++v44;
            while ( dest[v44] );
            v47 = truncate_cast<int,unsigned __int64>(v44);
            cmdsize = s_cmd_textArray[v46].cmdsize;
            v49 = v47 + 1;
            if ( v47 + 1 + cmdsize <= s_cmd_textArray[v46].maxsize )
            {
              for ( i = cmdsize - 1; i >= 0; v51[v49] = *v51 )
                v51 = &s_cmd_textArray[v46].data[i--];
              memcpy_0(s_cmd_textArray[v46].data, dest, v47);
              s_cmd_textArray[v46].data[v49 - 1] = 10;
              s_cmd_textArray[v46].cmdsize += v49;
            }
            else
            {
              Com_PrintError(1, "Cbuf_InsertText overflowed\n");
            }
            Sys_LeaveCriticalSection(CRITSECT_CBUF);
            m_debugCamSelectedIndex = staticMLGCameras.m_debugCamSelectedIndex;
          }
          v52 = cgameGlob->predictedPlayerState.viewangles.v[1];
          v53 = (float *)p_origin;
          v69.v[0] = cgameGlob->predictedPlayerState.viewangles.v[0];
          v54 = color->v[1];
          v69.v[1] = v52;
          v55 = color->v[3];
          *(float *)&result.offset = v54;
          v56 = color->v[0] * 0.25;
          *((float *)&result.arrayIndex + 1) = v55;
          v57 = color->v[2];
          *(float *)&result.isValid = v56;
          *(float *)&result.arrayIndex = v57 * 0.5;
          CgCompassSystemMP::DrawMLGCameraIcon(this, compassType, cropPartialMap, rect, &x, boundsRadius, (const vec4_t *)&result, element, luaVM, v30, v31, cgameGlob, p_origin, &v69, staticMLGCameras.m_mlgSelectedCamIcon, m_debugCamSelectedIndex + 1);
        }
        ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
        if ( CL_Keys_IsKeyPressed(ClientFromController, "END") )
        {
          if ( !staticMLGCameras.m_saveKeyPressed )
          {
            v59 = staticMLGCameras.m_debugCamSelectedIndex;
            if ( staticMLGCameras.m_debugCamSelectedIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6548, ASSERT_TYPE_ASSERT, "(camIndex < ( 4 + 4 ) && camIndex >= 0)", (const char *)&queryFormat, "camIndex < MAX_MLG_CAMERAS && camIndex >= 0") )
              __debugbreak();
            v60 = v59;
            staticMLGCameras.m_camOrigins[v60].v[0] = *v53;
            staticMLGCameras.m_camOrigins[v60].v[1] = v53[1];
            staticMLGCameras.m_camOrigins[v60].v[2] = v53[2];
            staticMLGCameras.m_camAngles[v59].v[0] = cgameGlob->predictedPlayerState.viewangles.v[0];
            staticMLGCameras.m_camAngles[v59].v[1] = cgameGlob->predictedPlayerState.viewangles.v[1];
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
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  vec2_t *v26; 
  double v27; 
  const dvar_t *v28; 
  float value; 
  const dvar_t *v30; 
  float v31; 
  lua_State *v32; 
  float v33; 
  LUIElement *v34; 
  float v35; 
  float v36; 
  float w; 

  material = icon;
  if ( !icon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5914, ASSERT_TYPE_ASSERT, "(icon)", (const char *)&queryFormat, "icon") )
    __debugbreak();
  CgCompassSystem::CalcCompassPointerSize(this, compassType, OBJ_ICON_SIZE_REGULAR, &w, (float *)&icon);
  vertAlign = rect->vertAlign;
  horzAlign = rect->horzAlign;
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
  v26 = xyClipped;
  ScrPlace_ApplyRect(ActivePlacement, (float *)xyClipped, (float *)xyClipped + 1, &w, (float *)&icon, horzAlign, vertAlign);
  w = (float)(scale + 1.0) * w;
  *(float *)&icon = (float)(scale + 1.0) * *(float *)&icon;
  if ( clipped )
  {
    v27 = CalcCompassClippedDistanceScale(xy, v26, 0);
    *(float *)&icon = *(float *)&v27 * *(float *)&icon;
    w = *(float *)&v27 * w;
  }
  v28 = DCONST_DVARFLT_compassObjectiveIconHeightAdjust;
  if ( !DCONST_DVARFLT_compassObjectiveIconHeightAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconHeightAdjust") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  value = v28->current.value;
  v30 = DVARFLT_compassObjectiveIconBackgroundScalar;
  if ( !DVARFLT_compassObjectiveIconBackgroundScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconBackgroundScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  v31 = v30->current.value;
  v32 = luaVM;
  v33 = yawTo;
  v34 = element;
  v35 = (float)(v31 * *(float *)&icon) * (float)(bgScale + 1.0);
  v36 = (float)(v31 * w) * (float)(bgScale + 1.0);
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v26->v[0], value + v26->v[1], v36 * 1.15, v35 * 1.15, 0.0, 0.0, 1.0, 1.0, yawTo, bgColorLeftLight->v[0], bgColorLeftLight->v[1], bgColorLeftLight->v[2], bgColorLeftLight->v[3], cgMedia.compass.codcaster_objective_background_left, luaVM);
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v34, v26->v[0], value + v26->v[1], v36 * 1.15, v35 * 1.15, 1.0, 0.0, 0.0, 1.0, v33, bgColorRightLight->v[0], bgColorRightLight->v[1], bgColorRightLight->v[2], bgColorRightLight->v[3], cgMedia.compass.codcaster_objective_background_left, v32);
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v34, v26->v[0], value + v26->v[1], v36, v35, 0.0, 0.0, 1.0, 1.0, v33, bgColorLeft->v[0], bgColorLeft->v[1], bgColorLeft->v[2], bgColorLeft->v[3], cgMedia.compass.codcaster_objective_background_left, v32);
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v34, v26->v[0], value + v26->v[1], v36, v35, 1.0, 0.0, 0.0, 1.0, v33, bgColorRight->v[0], bgColorRight->v[1], bgColorRight->v[2], bgColorRight->v[3], cgMedia.compass.codcaster_objective_background_left, v32);
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v34, v26->v[0], v26->v[1], w, *(float *)&icon, 0.0, 0.0, 1.0, 1.0, v33, color->v[0], color->v[1], color->v[2], color->v[3], material, v32);
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

  CgCompassSystem::DrawPlayerMap(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, NULL, mapColor, minimapOptions->mapMask, minimapOptions->mapOverlay, minimapOptions->mapRotOverlay, element, luaVM);
  CgCompassSystemMP::DrawGlitchOnMinimap(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, mapColor, minimapOptions->mapMask, element, luaVM);
  cropPartialMap = minimapOptions->cropPartialMap;
  compassType = minimapOptions->compassType;
  if ( this->m_isBigMapMinimap )
    CgCompassSystemMP::DrawBigMapUAV(this, compassType, cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  else
    CgCompassSystemMP::DrawRadarEffects(this, compassType, cropPartialMap, parentRect, rect, mapColor, minimapOptions->mapMask, element, luaVM);
}

/*
==============
CgCompassSystemMP::DrawMinimapPlayerPing
==============
*/
void CgCompassSystemMP::DrawMinimapPlayerPing(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v11; 
  int integer; 
  const dvar_t *v13; 
  int m_playerPingRepeatCount; 
  const dvar_t *v15; 
  const dvar_t *v19; 
  int v20; 
  float v21; 
  const GfxImage *compassping_portable_radar_sweep; 
  float outWidth; 
  float outHeight; 
  rectDef_s *recta; 
  SecureVec3 out; 
  __int64 v27; 
  vec2_t out_s2t2; 
  vec2_t out_s1t1; 
  vec4_t verts[4]; 

  v27 = -2i64;
  recta = (rectDef_s *)rect;
  if ( minimapOptions->drawPlayerPingCircle )
  {
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    v11 = DVARINT_minimapPlayerCirclePingDuration;
    if ( !DVARINT_minimapPlayerCirclePingDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "minimapPlayerCirclePingDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = v11->current.integer;
    if ( minimapOptions->isMapInitialized )
    {
      v13 = DCONST_DVARINT_minimapPlayerCirclePinRepeatCount;
      if ( !DCONST_DVARINT_minimapPlayerCirclePinRepeatCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "minimapPlayerCirclePinRepeatCount") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      this->m_playerPingRepeatCount = v13->current.integer;
      this->m_playerPingStartTime = integer - LocalClientGlobals->time;
      minimapOptions->isMapInitialized = 0;
    }
    if ( LocalClientGlobals->time - this->m_playerPingStartTime > integer )
    {
      this->m_playerPingStartTime = LocalClientGlobals->time;
      m_playerPingRepeatCount = this->m_playerPingRepeatCount;
      if ( m_playerPingRepeatCount >= 0 )
        this->m_playerPingRepeatCount = m_playerPingRepeatCount - 1;
    }
    v15 = DCONST_DVARINT_minimapPlayerCirclePinRepeatCount;
    if ( !DCONST_DVARINT_minimapPlayerCirclePinRepeatCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "minimapPlayerCirclePinRepeatCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.integer == -1 || this->m_playerPingRepeatCount >= 0 )
    {
      outWidth = 0.0;
      outHeight = 0.0;
      CgCompassSystem::GetPlayerDrawSize(this, minimapOptions->compassType, minimapOptions->largeMap, &outHeight, &outWidth);
      _XMM2 = LODWORD(outWidth);
      __asm
      {
        vcmpltss xmm0, xmm2, xmm1
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      out_s2t2.v[0] = *(float *)&_XMM0;
      v19 = DVARFLT_minimapPlayerCirclePingRadius;
      if ( !DVARFLT_minimapPlayerCirclePingRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "minimapPlayerCirclePingRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v20 = LocalClientGlobals->time - this->m_playerPingStartTime;
      v21 = (float)(v19->current.value + out_s2t2.v[0]) / this->m_uiWorldToScreenScale;
      compassping_portable_radar_sweep = cgMedia.compassping_portable_radar_sweep;
      if ( CgCompassSystemMP::CalculateAreaMarker(this, (const CompassType)minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, recta, minimapOptions->boundsRadius, *(const vec2_t *)&out.x, (float)(1.0 - (float)((float)((float)((float)v20 / (float)integer) * (float)((float)v20 / (float)integer)) * (float)((float)v20 / (float)integer))) * v21, 0, &out_s1t1, &out_s2t2, (vec4_t (*)[4])verts) )
        LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])verts, out_s1t1.v[0], out_s1t1.v[1], out_s2t2.v[0], out_s2t2.v[1], &colorWhite, compassping_portable_radar_sweep);
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
  __int128 v9; 
  CgGlobalsMP *LocalClientGlobals; 
  int clientNum; 
  float v17; 
  float v18; 
  int *p_lastUpdateTime; 
  __int64 v20; 
  __int64 m_localClientNum; 
  CgEntitySystem *v22; 
  int v23; 
  int time; 
  bool v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  CgMLGSpectator *MLGSpectator; 
  team_t Team; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v31; 
  float v32; 
  float v33; 
  float v34; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  double v38; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float v42; 
  double v43; 
  float *y; 
  float *w; 
  float v49; 
  float v50; 
  CompassType compassTypea; 
  float width; 
  float outAngle; 
  CgStatic *LocalClientStatics; 
  __int64 v55; 
  const rectDef_s *v56; 
  lua_State *v57; 
  LUIElement *v58; 
  SecureVec3 out; 
  __int64 v60; 
  vec2_t v1; 
  vec2_t v0; 
  rectDef_s x; 
  vec2_t outVector; 

  v60 = -2i64;
  compassTypea = compassType;
  v56 = rect;
  v58 = element;
  v57 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5083, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  *(double *)&v9 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  _XMM12 = v9;
  if ( *(float *)&v9 != 0.0 )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
    v17 = (float)(0.5 * x.w) + x.x;
    v18 = (float)(0.5 * x.h) + x.y;
    CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    p_lastUpdateTime = &this->m_compassMissiles[0].lastUpdateTime;
    v55 = 8i64;
    while ( 1 )
    {
      v20 = *(p_lastUpdateTime - 1);
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
      v22 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
      if ( (unsigned int)v20 >= 0x800 )
      {
        LODWORD(w) = 2048;
        LODWORD(y) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", y, w) )
          __debugbreak();
      }
      if ( v22->m_entities[v20].nextState.eType != ET_MISSILE )
        goto LABEL_62;
      v23 = *p_lastUpdateTime;
      time = LocalClientGlobals->time;
      if ( *p_lastUpdateTime > time )
      {
        *p_lastUpdateTime = 0;
        time = LocalClientGlobals->time;
        v23 = 0;
      }
      if ( v23 < time - 500 )
        goto LABEL_62;
      v25 = CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, boundsRadius, &outVector, (const vec2_t *)&out, (const vec2_t *)p_lastUpdateTime + 1, &v0, &v1);
      v26 = DCONST_DVARBOOL_bg_compassHellfireTargetSpot;
      if ( !DCONST_DVARBOOL_bg_compassHellfireTargetSpot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassHellfireTargetSpot") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( !v26->current.enabled )
        break;
      if ( !v25 )
        goto LABEL_33;
LABEL_62:
      p_lastUpdateTime += 8;
      if ( !--v55 )
        goto LABEL_63;
    }
    if ( v25 )
    {
      v27 = DVARBOOL_compassClampIcons;
      if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      if ( !v27->current.enabled )
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
    v31 = CgStatic::GetCharacterInfo(LocalClientStatics, p_lastUpdateTime[6]);
    if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5146, ASSERT_TYPE_ASSERT, "(ownerCI)", (const char *)&queryFormat, "ownerCI") )
      __debugbreak();
    if ( (Team || clientNum == p_lastUpdateTime[6]) && Team == v31->team )
    {
      if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        v32 = *(float *)&xmmword_147FA89B0;
        v33 = *((float *)&xmmword_147FA89B0 + 1);
        v34 = *((float *)&xmmword_147FA89B0 + 2);
        _XMM6 = HIDWORD(xmmword_147FA89B0);
      }
      else
      {
        v32 = friendlyColors.v[0];
        v33 = friendlyColors.v[1];
        v34 = friendlyColors.v[2];
        _XMM6 = unk_147FA89AC;
      }
    }
    else if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
    {
      v32 = *(float *)&xmmword_147FA8A20;
      v33 = *((float *)&xmmword_147FA8A20 + 1);
      v34 = *((float *)&xmmword_147FA8A20 + 2);
      _XMM6 = HIDWORD(xmmword_147FA8A20);
    }
    else
    {
      v32 = enemyColors.v[0];
      v33 = enemyColors.v[1];
      v34 = enemyColors.v[2];
      _XMM6 = unk_147FA8A1C;
    }
    v36 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    v50 = v36->current.value * MY_ICON_WIDTH;
    v37 = DVARFLT_compassSize;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v49 = v37->current.value * MY_ICON_HEIGHT;
    v0.v[0] = v17 + v0.v[0];
    v0.v[1] = v18 + v0.v[1];
    v1.v[0] = v17 + v1.v[0];
    v1.v[1] = v18 + v1.v[1];
    if ( v25 )
    {
      v38 = CalcCompassClippedDistanceScale(&v0, &v1, 0);
      v50 = *(float *)&v38 * v50;
      v49 = *(float *)&v38 * v49;
    }
    vertAlign = v56->vertAlign;
    horzAlign = v56->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, (float *)&v1, (float *)&v1 + 1, &v50, &v49, horzAlign, vertAlign);
    v42 = outAngle - *((float *)p_lastUpdateTime + 5);
    v43 = AngleNormalize360(v42);
    width = *(float *)&v43;
    CgCompassSystem::WorldYawToCompass(this, compassTypea, LocalClientGlobals, v42, &width);
    __asm
    {
      vcmpltss xmm0, xmm12, xmm6
      vblendvps xmm1, xmm6, xmm12, xmm0
    }
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v58, v1.v[0], v1.v[1], v50, v49, 0.0, 0.0, 1.0, 1.0, width, v32, v33, v34, *(float *)&_XMM1, cgMedia.compass.missile, v57);
    goto LABEL_62;
  }
LABEL_63:
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemMP::DrawObjective
==============
*/
void CgCompassSystemMP::DrawObjective(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *rect, vec2_t *xy, vec2_t *xyClipped, bool clipped, ObjectiveFlags flags, ObjectiveIconSize size, const GfxImage *background, float yawTo, float scale, float bgScale, const GfxImage *icon, const vec4_t *color, const vec4_t *bgColor, LUIElement *element, lua_State *luaVM)
{
  const GfxImage *v20; 
  unsigned __int16 height; 
  float v22; 
  float v23; 
  float v24; 
  bool v25; 
  vec2_t *v26; 
  double v27; 
  float v28; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float v32; 
  float v33; 
  float v34; 
  const GfxImage *material; 
  const dvar_t *v36; 
  float value; 
  const dvar_t *v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  const vec4_t *v43; 
  lua_State *v44; 
  float v45; 
  float width; 
  float w; 

  CgCompassSystem::CalcCompassPointerSize(this, compassType, size, &w, &width);
  v20 = icon;
  if ( !icon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5858, ASSERT_TYPE_ASSERT, "(icon)", (const char *)&queryFormat, "icon") )
    __debugbreak();
  height = v20->height;
  if ( height )
  {
    v22 = (float)v20->width / (float)height;
    if ( v22 != 1.0 )
    {
      if ( v22 <= 1.0 )
      {
        if ( v22 < 1.0 && v22 > 0.0 )
        {
          v23 = w;
          v24 = width / v22;
LABEL_13:
          w = v23 * 0.75;
          width = v24 * 0.75;
          goto LABEL_14;
        }
        v23 = w;
      }
      else
      {
        v23 = w * v22;
      }
      v24 = width;
      goto LABEL_13;
    }
  }
LABEL_14:
  v25 = clipped;
  v26 = xyClipped;
  if ( clipped )
  {
    v27 = CalcCompassClippedDistanceScale(xy, xyClipped, 0);
    v28 = *(float *)&v27;
  }
  else
  {
    v28 = FLOAT_1_0;
  }
  vertAlign = rect->vertAlign;
  horzAlign = rect->horzAlign;
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
  ScrPlace_ApplyRect(ActivePlacement, (float *)v26, (float *)v26 + 1, &w, &width, horzAlign, vertAlign);
  v32 = (float)((float)(0.5 * w) * scale) + w;
  v34 = (float)((float)(0.5 * width) * scale) + width;
  v33 = v34;
  width = v34;
  w = v32;
  if ( v25 )
  {
    v32 = v32 * v28;
    v33 = v34 * v28;
    w = v32;
    width = v34 * v28;
  }
  material = background;
  if ( background )
  {
    v36 = DCONST_DVARFLT_compassObjectiveIconHeightAdjust;
    if ( !DCONST_DVARFLT_compassObjectiveIconHeightAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconHeightAdjust") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    value = v36->current.value;
    v38 = DVARFLT_compassObjectiveIconBackgroundScalar;
    if ( !DVARFLT_compassObjectiveIconBackgroundScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveIconBackgroundScalar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    v39 = v38->current.value;
    v40 = v39 * w;
    v41 = v39 * width;
    v42 = value + v26->v[1];
    v43 = color;
    v44 = luaVM;
    v45 = yawTo;
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v26->v[0], v42, v40 * (float)(bgScale + 1.0), v41 * (float)(bgScale + 1.0), 0.0, 0.0, 1.0, 1.0, yawTo, bgColor->v[0], bgColor->v[1], bgColor->v[2], color->v[3], material, luaVM);
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v26->v[0], v26->v[1], w, width, 0.0, 0.0, 1.0, 1.0, v45, v43->v[0], v43->v[1], v43->v[2], v43->v[3], v20, v44);
  }
  else
  {
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v26->v[0], v26->v[1], v32, v33, 0.0, 0.0, 1.0, 1.0, yawTo, bgColor->v[0], bgColor->v[1], bgColor->v[2], bgColor->v[3], v20, luaVM);
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
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  int *p_lastUpdate; 
  __int64 v20; 
  cg_t *v21; 
  characterInfo_t *v22; 
  int time; 
  int v24; 
  CompassType v25; 
  const dvar_t *v26; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  double v30; 
  CompassType v31; 
  float v32; 
  float v33; 
  const dvar_t *v34; 
  float value; 
  const dvar_t *v36; 
  float v37; 
  float v38; 
  const dvar_t *v39; 
  float v40; 
  const dvar_t *v41; 
  float v42; 
  char v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  const dvar_t *v46; 
  float displayHeight; 
  float v48; 
  float v49; 
  __int64 v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  CgGlobalsMP *v55; 
  CgCompassSystemMP *v56; 
  LUIElement *v57; 
  const GfxImage *material; 
  int v59; 
  vec2_t *outVector; 
  float *w; 
  float v63; 
  float v64; 
  bool v65; 
  float v66; 
  CompassType compassTypea; 
  int v68; 
  lua_State *v69; 
  float outAngle; 
  float s; 
  float c; 
  int v73; 
  int v74; 
  rectDef_s *v75; 
  __int64 v76; 
  __int64 v77; 
  CgStatic *LocalClientStatics; 
  vec2_t in; 
  __int64 v80; 
  vec4_t v81; 
  LUIElement *v82; 
  vec3_t pos; 
  SecureVec3 out; 
  __int64 v85; 
  vec2_t outClipped; 
  vec2_t v87; 
  vec4_t v88; 
  rectDef_s x; 
  vec4_t v90; 
  vec4_t color; 
  vec2_t north; 

  v85 = -2i64;
  v65 = largeMap;
  compassTypea = compassType;
  v75 = (rectDef_s *)rect;
  v82 = element;
  v69 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3688, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3692, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  BombCarrierEntityNum = GetBombCarrierEntityNum(LocalClientGlobals);
  FlagCarrierEntityNum = GetFlagCarrierEntityNum(LocalClientGlobals, TEAM_ONE);
  v14 = GetFlagCarrierEntityNum(LocalClientGlobals, TEAM_TWO);
  CgCompassSystem::GetCompassYaw(this, compassTypea, cropPartialMap, LocalClientGlobals, &outAngle, &north);
  if ( CharacterInfo->infoValid )
  {
    CG_CompassCalcDimensions(compassTypea, LocalClientGlobals, parentRect, v75, &x.x, &x.y, &x.w, &x.h);
    *(float *)&v15 = (float)(0.5 * x.w) + x.x;
    v73 = v15;
    *(float *)&v16 = (float)(0.5 * x.h) + x.y;
    v74 = v16;
    CgCompassSystemMP::GetEnemyCompassLightColor(this, &color, LocalClientGlobals);
    ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    v17 = 0;
    v68 = 0;
    v80 = BombCarrierEntityNum;
    v76 = FlagCarrierEntityNum;
    v77 = v14;
    v18 = 0i64;
    p_lastUpdate = &this->m_compassActors[0].lastUpdate;
    while ( 1 )
    {
      v20 = p_lastUpdate[27];
      v21 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v21->IsMP(v21) )
      {
        if ( (unsigned int)v20 >= v21[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(w) = v21[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(outVector) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outVector, w) )
            __debugbreak();
        }
        v22 = (characterInfo_t *)(*(_QWORD *)&v21[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v20);
      }
      else
      {
        v22 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v21, v20);
      }
      *(_QWORD *)v81.v = v22;
      if ( v80 != v18 && v76 != v18 && v77 != v18 || (unsigned int)(v22->team - 1) > 1 || LocalClientGlobals->predictedPlayerState.clientNum == v17 )
        goto LABEL_77;
      time = LocalClientGlobals->time;
      if ( time >= p_lastUpdate[23] )
      {
        *((_BYTE *)p_lastUpdate + 118) = 0;
        time = LocalClientGlobals->time;
      }
      v24 = *p_lastUpdate;
      if ( *p_lastUpdate > time )
      {
        *p_lastUpdate = 0;
        time = LocalClientGlobals->time;
        v24 = 0;
      }
      if ( v24 < time - 500 )
        goto LABEL_77;
      CgCompassSystemMP::IsActorWithinFadeTime(this, p_lastUpdate + 24);
      CompassActor_GetLastPosValue((const CompassActor *)(p_lastUpdate - 1), &pos);
      in = *(vec2_t *)pos.v;
      memset(&pos, 0, sizeof(pos));
      v25 = compassTypea;
      if ( !CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, boundsRadius, &north, (const vec2_t *)&out, &in, NULL, &outClipped) )
        break;
      v26 = DVARBOOL_compassClampIcons;
      if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( v26->current.enabled )
        break;
LABEL_76:
      v17 = v68;
LABEL_77:
      v68 = ++v17;
      ++v18;
      p_lastUpdate += 34;
      if ( v18 >= 248 )
        goto LABEL_78;
    }
    CalcCompassFriendlySize(v25, &v64, &v63);
    outClipped.v[0] = *(float *)&v15 + outClipped.v[0];
    outClipped.v[1] = *(float *)&v16 + outClipped.v[1];
    vertAlign = v75->vertAlign;
    horzAlign = v75->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, (float *)&outClipped, (float *)&outClipped + 1, &v64, &v63, horzAlign, vertAlign);
    CgCompassSystemMP::GetActorFadeAmount(this, p_lastUpdate + 24);
    v30 = AngleNormalize360(outAngle - *((float *)p_lastUpdate + 1));
    v66 = *(float *)&v30;
    v31 = compassTypea;
    if ( (cropPartialMap || compassTypea || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation")) && this->MapShouldRotate(this) )
    {
      v32 = this->MapRotationFactor(this);
      v33 = v66 - v32;
      v66 = v66 - v32;
    }
    else
    {
      v33 = v66;
    }
    CgCompassSystem::WorldYawToCompass(this, v31, LocalClientGlobals, v33, &v66);
    v87 = outClipped;
    v34 = DVARFLT_compassPlayerObjectiveHolderOverallSize;
    if ( !DVARFLT_compassPlayerObjectiveHolderOverallSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerObjectiveHolderOverallSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    value = v34->current.value;
    v36 = DVARFLT_compassPlayerObjectiveArrowRadius;
    if ( !DVARFLT_compassPlayerObjectiveArrowRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerObjectiveArrowRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    v38 = v36->current.value * value;
    v37 = v38;
    v39 = DVARFLT_compassPlayerObjectiveHolderCicleSize;
    if ( !DVARFLT_compassPlayerObjectiveHolderCicleSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerObjectiveHolderCicleSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v40 = v39->current.value;
    v41 = DVARFLT_compassPlayerObjectiveHolderArrowSize;
    if ( !DVARFLT_compassPlayerObjectiveHolderArrowSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerObjectiveHolderArrowSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v42 = v41->current.value;
    v43 = v65;
    if ( v65 )
    {
      v44 = DVARFLT_compassIconMLGSpectatorScale;
      if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v44);
      v37 = v38 * v44->current.value;
      v45 = DVARFLT_compassIconMLGSpectatorScale;
      if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v45);
      v64 = v64 * v45->current.value;
      v46 = DVARFLT_compassIconMLGSpectatorScale;
      if ( !DVARFLT_compassIconMLGSpectatorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassIconMLGSpectatorScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v46);
      v63 = v63 * v46->current.value;
    }
    FastSinCos(v66 * 0.017453292, &s, &c);
    displayHeight = (float)vidConfig.displayHeight;
    v48 = (float)((float)((float)(v37 * s) * displayHeight) * 0.00092592591) + v87.v[0];
    v87.v[0] = v48;
    v49 = (float)((float)((float)(v37 * c) * displayHeight) * -0.00092592591) + v87.v[1];
    v87.v[1] = v49;
    v50 = *(_QWORD *)v81.v;
    if ( *(_DWORD *)(*(_QWORD *)v81.v + 12i64) == 1 )
    {
      if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        v51 = *((float *)&xmmword_147FA8A20 + 3);
        v52 = *((float *)&xmmword_147FA8A20 + 2);
        v53 = *(float *)&xmmword_147FA8A20;
        v54 = *((float *)&xmmword_147FA8A20 + 1);
      }
      else
      {
        v51 = unk_147FA8A1C;
        v52 = enemyColors.v[2];
        v53 = enemyColors.v[0];
        v54 = enemyColors.v[1];
      }
      CgCompassSystemMP::GetEnemyCompassLightColor(this, &color, LocalClientGlobals);
      v55 = LocalClientGlobals;
      v56 = this;
      if ( v76 != v18 )
      {
LABEL_68:
        CgCompassSystemMP::GetEnemyCompassColor(v56, &v88, v55);
        CgCompassSystemMP::GetEnemyCompassSecondaryColor(this, &v90, LocalClientGlobals);
LABEL_75:
        v57 = v82;
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v82, outClipped.v[0], outClipped.v[1], (float)(value * v64) * v40, (float)(value * v63) * v40, 0.0, 0.0, 1.0, 1.0, 0.0, v88.v[0], v88.v[1], v88.v[2], v88.v[3], cgMedia.compass.minimap_codcaster_objective_circle_bg, v69);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v57, outClipped.v[0], outClipped.v[1], (float)(value * v64) * v40, (float)(value * v63) * v40, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, cgMedia.compass.minimap_codcaster_objective_circle_outline, v69);
        material = CgCompassSystemMP::GetObjectiveImage(this);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v57, outClipped.v[0], outClipped.v[1], (float)(value * v64) * v40, (float)(value * v63) * v40, 0.0, 0.0, 1.0, 1.0, 0.0, v90.v[0], v90.v[1], v90.v[2], 1.0, material, v69);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v57, v48, v49, (float)(value * v64) * v42, (float)(value * v63) * v42, 0.0, 0.0, 1.0, 1.0, v66, v53, v54, v52, v51, cgMedia.compass.minimap_codcaster_objective_arrow_bg, v69);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v57, v48, v49, (float)(value * v64) * v42, (float)(value * v63) * v42, 0.0, 0.0, 1.0, 1.0, v66, color.v[0], color.v[1], color.v[2], color.v[3], cgMedia.compass.minimap_codcaster_objective_arrow_outline, v69);
        v59 = *(_DWORD *)(v50 + 12);
        v81 = colorWhite;
        CgCompassSystem::DrawPlayerNumber(this, p_lastUpdate[27], outClipped.v[0], outClipped.v[1], 0.0, v59, 1, v43, &v81, LocalClientStatics, v57, v69);
        v15 = v73;
        v16 = v74;
        goto LABEL_76;
      }
    }
    else
    {
      if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
      {
        v53 = *(float *)&xmmword_147FA89B0;
        v51 = *((float *)&xmmword_147FA89B0 + 3);
        v52 = *((float *)&xmmword_147FA89B0 + 2);
        v54 = *((float *)&xmmword_147FA89B0 + 1);
      }
      else
      {
        v53 = friendlyColors.v[0];
        v51 = unk_147FA89AC;
        v52 = friendlyColors.v[2];
        v54 = friendlyColors.v[1];
      }
      CgCompassSystemMP::GetFriendlyCompassLightColor(this, &color, LocalClientGlobals);
      v55 = LocalClientGlobals;
      v56 = this;
      if ( v77 == v18 )
        goto LABEL_68;
    }
    CgCompassSystemMP::GetFriendlyCompassColor(v56, &v88, v55);
    CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, &v90, LocalClientGlobals);
    goto LABEL_75;
  }
LABEL_78:
  memset(&out, 0, sizeof(out));
  memset(&v80, 0, sizeof(v80));
  memset(&in, 0, sizeof(in));
}

/*
==============
CgCompassSystemMP::DrawOthersLayer
==============
*/
void CgCompassSystemMP::DrawOthersLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgGlobalsMP *LocalClientGlobals; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->m_isMLGSpectator )
    CgCompassSystemMP::DrawDead(this, minimapOptions->compassType, minimapOptions->cropPartialMap, minimapOptions->largeMap, parentRect, rect, minimapOptions->boundsRadius, element, luaVM);
  CgCompassSystemMP::DrawFriendlies(this, minimapOptions->compassType, minimapOptions->cropPartialMap, minimapOptions->largeMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawEnemies(this, minimapOptions->compassType, minimapOptions->cropPartialMap, minimapOptions->largeMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawDecoys(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  if ( LocalClientGlobals->m_isMLGSpectator )
    CgCompassSystemMP::DrawObjectiveHolders(this, minimapOptions->compassType, minimapOptions->cropPartialMap, minimapOptions->largeMap, parentRect, rect, minimapOptions->boundsRadius, element, luaVM);
}

/*
==============
CgCompassSystemMP::DrawPlanes
==============
*/
void CgCompassSystemMP::DrawPlanes(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  __int128 v9; 
  CompassType v12; 
  CgGlobalsMP *LocalClientGlobals; 
  float v16; 
  float v17; 
  int *p_ownerNum; 
  __int64 v19; 
  __int64 m_localClientNum; 
  CgEntitySystem *v21; 
  int v22; 
  int time; 
  bool v24; 
  bool v25; 
  const dvar_t *v26; 
  int v27; 
  characterInfo_t *CharacterInfo; 
  team_t team; 
  characterInfo_t *v30; 
  team_t v31; 
  const GfxImage *material; 
  double v34; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float v38; 
  double v39; 
  LUIElement *v42; 
  float *y; 
  float *w; 
  float v46; 
  float v47; 
  CompassType compassTypea; 
  float width; 
  LUIElement *v50; 
  int characterIndex; 
  float outAngle; 
  CgStatic *LocalClientStatics; 
  __int64 v54; 
  lua_State *v55; 
  rectDef_s *v56; 
  rectDef_s *parentRecta; 
  SecureVec3 out; 
  __int64 v59; 
  vec4_t v60; 
  vec2_t v1; 
  rectDef_s x; 
  vec2_t outVector; 
  vec2_t v0; 

  v59 = -2i64;
  parentRecta = (rectDef_s *)parentRect;
  v12 = compassType;
  compassTypea = compassType;
  v56 = (rectDef_s *)rect;
  v50 = element;
  v55 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5212, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  *(double *)&v9 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, v12);
  _XMM8 = v9;
  if ( *(float *)&v9 != 0.0 )
  {
    characterIndex = LocalClientGlobals->predictedPlayerState.clientNum;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CG_CompassCalcDimensions(v12, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
    v16 = (float)(0.5 * x.w) + x.x;
    v17 = (float)(0.5 * x.h) + x.y;
    v60 = *color;
    CgCompassSystem::GetCompassYaw(this, v12, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    p_ownerNum = &this->m_compassPlanes[0].ownerNum;
    v54 = 128i64;
    while ( 1 )
    {
      v19 = *(p_ownerNum - 7);
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
      v21 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
      if ( (unsigned int)v19 >= 0x800 )
      {
        LODWORD(w) = 2048;
        LODWORD(y) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", y, w) )
          __debugbreak();
      }
      if ( v21->m_entities[v19].nextState.eType != ET_PLANE )
        goto LABEL_52;
      v22 = *(p_ownerNum - 6);
      time = LocalClientGlobals->time;
      if ( v22 > time )
      {
        *(p_ownerNum - 6) = 0;
        time = LocalClientGlobals->time;
        v22 = 0;
      }
      v24 = cropPartialMap;
      if ( v22 >= time - 500 )
      {
        v25 = CgCompassSystem::WorldPosToCompass(this, v12, cropPartialMap, &x, boundsRadius, &outVector, (const vec2_t *)&out, (const vec2_t *)p_ownerNum - 2, &v0, &v1);
        if ( !v25 )
          goto LABEL_27;
        v26 = DVARBOOL_compassClampIcons;
        if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( v26->current.enabled )
        {
LABEL_27:
          v27 = characterIndex;
          CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, characterIndex);
          if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5252, ASSERT_TYPE_ASSERT, "(clientCI)", (const char *)&queryFormat, "clientCI") )
            __debugbreak();
          team = CharacterInfo->team;
          v30 = CgStatic::GetCharacterInfo(LocalClientStatics, *p_ownerNum);
          if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5257, ASSERT_TYPE_ASSERT, "(ownerCI)", (const char *)&queryFormat, "ownerCI") )
            __debugbreak();
          v31 = v30->team;
          if ( LocalClientGlobals->m_isMLGSpectator )
          {
            if ( v31 == TEAM_ZERO )
            {
              if ( v27 == *p_ownerNum )
                goto LABEL_36;
LABEL_42:
              material = *(const GfxImage **)(p_ownerNum + 3);
              if ( this->m_isUsingCustomCodCasterEnemyColor )
              {
                v60 = (vec4_t)xmmword_147FA8A20;
                _XMM6 = HIDWORD(xmmword_147FA8A20);
                goto LABEL_37;
              }
LABEL_48:
              v60.xyz = enemyColors;
              _XMM6 = dword_147FA8A1C;
              v60.v[3] = *(float *)&dword_147FA8A1C;
LABEL_37:
              if ( material )
              {
                CalcCompassFriendlySize(compassTypea, &v47, &v46);
                v1.v[0] = v16 + v1.v[0];
                v1.v[1] = v17 + v1.v[1];
                if ( v25 )
                {
                  v34 = CalcCompassClippedDistanceScale(&v0, &v1, 0);
                  v47 = *(float *)&v34 * v47;
                  v46 = *(float *)&v34 * v46;
                }
                vertAlign = v56->vertAlign;
                horzAlign = v56->horzAlign;
                ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
                ScrPlace_ApplyRect(ActivePlacement, (float *)&v1, (float *)&v1 + 1, &v47, &v46, horzAlign, vertAlign);
                v38 = outAngle - *((float *)p_ownerNum - 1);
                v39 = AngleNormalize360(v38);
                width = *(float *)&v39;
                v12 = compassTypea;
                CgCompassSystem::WorldYawToCompass(this, compassTypea, LocalClientGlobals, v38, &width);
                __asm
                {
                  vcmpltss xmm0, xmm8, xmm6
                  vblendvps xmm1, xmm6, xmm8, xmm0
                }
                v60.v[3] = *(float *)&_XMM1;
                v42 = v50;
                LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v50, v1.v[0], v1.v[1], v47, v46, 0.0, 0.0, 1.0, 1.0, width, v60.v[0], v60.v[1], v60.v[2], *(float *)&_XMM1, material, v55);
              }
              else
              {
                v12 = compassTypea;
LABEL_52:
                v42 = v50;
              }
              v24 = cropPartialMap;
              goto LABEL_54;
            }
            if ( v31 == TEAM_ONE )
              goto LABEL_42;
          }
          else if ( team == TEAM_ZERO && v27 != *p_ownerNum || team != v31 )
          {
            material = *(const GfxImage **)(p_ownerNum + 3);
            goto LABEL_48;
          }
LABEL_36:
          material = *(const GfxImage **)(p_ownerNum + 1);
          CgCompassSystemMP::GetFriendlyCompassColor(this, &v60, LocalClientGlobals);
          _XMM6 = LODWORD(v60.v[3]);
          goto LABEL_37;
        }
        v12 = compassTypea;
      }
      v42 = v50;
LABEL_54:
      p_ownerNum += 12;
      if ( !--v54 )
      {
        CgCompassSystemMP::DrawMissiles(this, v12, v24, parentRecta, v56, boundsRadius, color, v42, v55);
        break;
      }
    }
  }
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemMP::DrawPlayerCalloutMarkerPings
==============
*/
void CgCompassSystemMP::DrawPlayerCalloutMarkerPings(CgCompassSystemMP *this, bool bracketPass, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  __int128 v10; 
  bool v12; 
  cg_t *LocalClientGlobals; 
  __int128 v16; 
  float v17; 
  float v18; 
  const playerState_s *p_predictedPlayerState; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const cg_t *v22; 
  bool v23; 
  unsigned __int8 v24; 
  __int16 v25; 
  const CalloutMarkerPingView *View; 
  CalloutMarkerPingPool v27; 
  CalloutMarkerPingPool v28; 
  unsigned __int8 owner; 
  unsigned int index; 
  int v31; 
  bool HasOvalBackgroundOnMap; 
  char v33; 
  unsigned __int8 v34; 
  __int16 *v35; 
  CompassType v36; 
  bool v37; 
  bool v38; 
  bool v39; 
  ObjectiveIconSize TacmapIconSize; 
  double AspectRatio; 
  float v42; 
  double v43; 
  float v44; 
  float v45; 
  double TacmapLookAtScale; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  LocalClientNum_t m_localClientNum; 
  const GfxImage *material; 
  const GfxImage *Icon; 
  unsigned int x; 
  ObjectiveFlags y; 
  unsigned __int8 v62; 
  float width; 
  float v65; 
  bool v66; 
  bool v67; 
  __int16 v68; 
  float v69; 
  float v70; 
  playerState_s *v71; 
  float angle; 
  float outAngle; 
  CompassType compassTypea; 
  lua_State *v75; 
  LUIElement *v76; 
  SecureVec3 out; 
  SecureVec3 in; 
  const rectDef_s *v79; 
  vec3_t v80; 
  vec3_t out_origin; 
  vec2_t prev[3]; 
  vec2_t v1; 
  vec2_t v0; 
  vec4_t out_color; 
  rectDef_s mapRect; 
  vec2_t outVector; 
  vec3_t outWorldOrigin; 

  prev[2] = (vec2_t)-2i64;
  compassTypea = compassType;
  v12 = bracketPass;
  v79 = rect;
  v76 = element;
  v75 = luaVM;
  v68 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *(double *)&v10 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  v16 = v10;
  *(float *)&v16 = *(float *)&v10 * color->v[3];
  _XMM10 = v16;
  if ( *(float *)&v16 != 0.0 && !this->IsItemFiltered(this, TAC_MAP_FILTER_PLAYER_PINGS) )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    v17 = (float)(0.5 * mapRect.w) + mapRect.x;
    v18 = (float)(0.5 * mapRect.h) + mapRect.y;
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    v71 = &LocalClientGlobals->predictedPlayerState;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 7084, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
    {
      v22 = LocalClientGlobals;
      v23 = cropPartialMap;
      CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, v22, &outAngle, &outVector);
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v24 = 0;
      v62 = 0;
      v25 = -1;
      while ( 1 )
      {
        View = CG_CalloutMarkerPing_GetView(this->m_localClientNum, v24, p_predictedPlayerState);
        if ( View->origin.owner )
          break;
LABEL_79:
        v24 = v62 + 1;
        v62 = v24;
        if ( v24 >= 0x35u )
          goto LABEL_80;
      }
      v27 = CG_CalloutMarkerPing_ViewIndexToPool(this->m_localClientNum, v62);
      v28 = v27;
      if ( v27 == CONST_CALLOUT_POOL_ID_REQUEST )
      {
        owner = View->origin.owner;
        if ( owner )
          v25 = owner - 1;
      }
      else
      {
        if ( v27 == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(v27 - 4) <= 2u )
          v25 = View->origin.x;
        else
          v25 = 2047;
        if ( (unsigned __int8)(v27 - 9) <= 2u )
        {
          index = View->scriptable.index;
          goto LABEL_13;
        }
      }
      index = -1;
LABEL_13:
      if ( (unsigned __int8)v27 <= CONST_CALLOUT_POOL_ID_REQUEST )
      {
        v31 = 4464;
        if ( _bittest(&v31, (unsigned __int8)v27) )
        {
          if ( v25 == v71->clientNum )
          {
            p_predictedPlayerState = v71;
            goto LABEL_78;
          }
        }
      }
      HasOvalBackgroundOnMap = CG_CalloutMarkerPing_HasOvalBackgroundOnMap(v27, View, this->m_localClientNum);
      v67 = HasOvalBackgroundOnMap;
      if ( v12 && !HasOvalBackgroundOnMap )
        goto LABEL_69;
      if ( (unsigned __int8)(v28 - 9) <= 2u && ScriptableCl_ObjectiveActiveForInstance((const LocalClientNum_t)this->m_localClientNum, index) )
      {
        v33 = 1;
        v34 = ScriptableCl_ObjectiveGetForInstance((const LocalClientNum_t)this->m_localClientNum, index);
        v35 = (__int16 *)ScriptableCl_ObjectiveGet((const LocalClientNum_t)this->m_localClientNum, v34, &out_origin);
        if ( v35 )
          v68 = *v35;
        memset(&out_origin, 0, sizeof(out_origin));
        v23 = cropPartialMap;
      }
      else
      {
        v33 = 0;
      }
      CG_CalloutMarkerPing_GetWorldOrigin(v28, View, this->m_localClientNum, &outWorldOrigin);
      v80 = outWorldOrigin;
      LOWORD(y) = v68;
      x = index;
      v36 = compassTypea;
      CgCompassSystemMP::GetObjectiveCompassOrigin(this, compassTypea, v23, v25, x, y, &v80, outAngle, &in, &v66, &angle);
      v0.v[0] = 0.0;
      v0.v[1] = 0.0;
      v1.v[0] = 0.0;
      v1.v[1] = 0.0;
      if ( !v66 || v23 )
        v37 = CgCompassSystem::WorldPosToCompass(this, v36, v23, &mapRect, boundsRadius, &outVector, (const vec2_t *)&out, (const vec2_t *)&in, &v0, &v1);
      else
        v37 = CgCompassSystem::WorldPosToCompassPredict(this, v36, &mapRect, boundsRadius, &outVector, (const vec2_t *)&out, (const vec2_t *)&in, prev, &v0, &v1);
      v38 = v37;
      v0.v[0] = v17 + v0.v[0];
      v0.v[1] = v18 + v0.v[1];
      v1.v[0] = v17 + v1.v[0];
      v1.v[1] = v18 + v1.v[1];
      v39 = 1;
      if ( v36 == COMPASS_TYPE_PARTIAL )
      {
        if ( v28 )
          v39 = v33 == 0;
        else
          v39 = 0;
      }
      if ( v38 && v39 || (TacmapIconSize = CG_CalloutMarkerPing_GetTacmapIconSize(this->m_localClientNum, v28, View), CgCompassSystem::CalcCompassPointerSize(this, v36, TacmapIconSize, &v65, &width), AspectRatio = CG_CalloutMarkerPing_GetAspectRatio(v28, View, this->m_localClientNum), v42 = *(float *)&AspectRatio, *(float *)&AspectRatio <= 0.0) )
      {
        v12 = bracketPass;
        v23 = cropPartialMap;
        p_predictedPlayerState = v71;
        goto LABEL_78;
      }
      if ( v38 )
      {
        v43 = CalcCompassClippedDistanceScale(&v0, &v1, 0);
        v44 = v65 * *(float *)&v43;
        v65 = v65 * *(float *)&v43;
        v45 = width * *(float *)&v43;
        width = width * *(float *)&v43;
      }
      else
      {
        v45 = width;
        v44 = v65;
      }
      v12 = bracketPass;
      if ( bracketPass )
      {
        if ( v42 == 1.0 )
        {
          v65 = (float)(v44 * 1.75) * 1.1;
          v45 = v45 * 1.1;
        }
        else if ( v42 <= 1.0 )
        {
          if ( v42 < 1.0 )
            v45 = v45 / v42;
          v65 = v44 * 1.1;
          v45 = v45 * 1.1;
        }
        else
        {
          v65 = (float)(v44 * (float)(v42 * 1.2)) * 1.1;
          v45 = v45 * 1.1;
        }
        goto LABEL_56;
      }
      if ( v42 <= 1.0 )
      {
        if ( v42 < 1.0 )
        {
          v45 = v45 / v42;
LABEL_56:
          width = v45;
        }
      }
      else
      {
        v65 = v44 * v42;
      }
      if ( v36 == COMPASS_TYPE_TACMAP )
      {
        if ( CG_CalloutMarkerPing_TacmapIsLookingAtPing(this->m_localClientNum, v62) && (TacmapLookAtScale = CG_CalloutMarkerPing_GetTacmapLookAtScale(this->m_localClientNum), *(float *)&TacmapLookAtScale > 0.0) )
        {
          v65 = (float)((float)(0.5 * v65) * *(float *)&TacmapLookAtScale) + v65;
          v45 = width + (float)((float)(0.5 * width) * *(float *)&TacmapLookAtScale);
          width = v45;
        }
        else
        {
          v45 = width;
        }
      }
      v70 = v1.v[0];
      v69 = v1.v[1];
      if ( v28 == CONST_CALLOUT_POOL_ID_NAVIGATION )
        v69 = v1.v[1] - (float)(v45 * 0.5);
      vertAlign = v79->vertAlign;
      horzAlign = v79->horzAlign;
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      ScrPlace_ApplyRect(ActivePlacement, &v70, &v69, &v65, &width, horzAlign, vertAlign);
      m_localClientNum = this->m_localClientNum;
      if ( bracketPass )
      {
        CG_CalloutMarkerPing_GetColor(v28, View, m_localClientNum, &out_color);
        _XMM1 = LODWORD(out_color.v[3]);
        __asm
        {
          vcmpltss xmm0, xmm10, xmm1
          vblendvps xmm0, xmm1, xmm10, xmm0
        }
        out_color.v[3] = *(float *)&_XMM0;
        if ( v42 >= 1.0 )
          material = cgMedia.compass.calloutMarkerPing_OvalBackground;
        else
          material = cgMedia.compass.calloutMarkerPing_OvalBackgroundVertical;
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v76, v70, v69, v65, width, 0.0, 0.0, 1.0, 1.0, angle, out_color.v[0], out_color.v[1], out_color.v[2], *(float *)&_XMM0, material, v75);
      }
      else
      {
        Icon = CG_CalloutMarkerPing_GetIcon(v28, View, m_localClientNum, v36);
        if ( Icon )
        {
          if ( v67 )
            out_color = colorWhite;
          else
            CG_CalloutMarkerPing_GetColor(v28, View, this->m_localClientNum, &out_color);
          _XMM1 = LODWORD(out_color.v[3]);
          __asm
          {
            vcmpltss xmm0, xmm10, xmm1
            vblendvps xmm2, xmm1, xmm10, xmm0
          }
          out_color.v[3] = *(float *)&_XMM2;
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v76, v70, v69, v65, width, 0.0, 0.0, 1.0, 1.0, angle, out_color.v[0], out_color.v[1], out_color.v[2], *(float *)&_XMM2, Icon, v75);
        }
      }
      v23 = cropPartialMap;
LABEL_69:
      p_predictedPlayerState = v71;
LABEL_78:
      v25 = -1;
      goto LABEL_79;
    }
  }
LABEL_80:
  memset(&out, 0, sizeof(out));
  memset(prev, 0, 0xCui64);
  memset(&in, 0, sizeof(in));
}

/*
==============
CgCompassSystemMP::DrawPlayerLayer
==============
*/
void CgCompassSystemMP::DrawPlayerLayer(CgCompassSystemMP *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgCompassSystemMP::DrawPlayerMP(this, minimapOptions->compassType, minimapOptions->cropPartialMap, minimapOptions->largeMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawMinimapPlayerPing(this, minimapOptions, parentRect, rect, color, element, luaVM);
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
  CgGlobalsMP *v14; 
  CgHandler *Handler; 
  double IconFadeAlpha; 
  CgCompassSystemMP_vtbl *v17; 
  LocalClientNum_t m_localClientNum; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  int BombCarrierEntityNum; 
  int FlagCarrierEntityNum; 
  CgStatic *v23; 
  characterInfo_t *v24; 
  __int64 clientNum; 
  double ActorFadeAmount; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  bool v32; 
  vec4_t secondaryColor; 
  vec4_t objectiveSecondaryColor; 
  vec4_t v38; 
  vec4_t objectiveColor; 
  vec4_t playerNumberColor; 

  objectiveIcon = NULL;
  v32 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
    v14 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  else
    v14 = NULL;
  Handler = CgHandler::getHandler(this->m_localClientNum);
  if ( BG_IsGameTypeQuick_BR(Handler) )
    *(float *)&IconFadeAlpha = FLOAT_1_0;
  else
    IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  if ( (float)(*(float *)&IconFadeAlpha * color->v[3]) != 0.0 && !CG_Players_IsPlayerIconHidden((const LocalClientNum_t)this->m_localClientNum, LocalClientGlobals->predictedPlayerState.clientNum) )
  {
    v17 = this->__vftable;
    v38 = *color;
    v17->GetPlayerCompassColor(this, &v38, LocalClientGlobals);
    m_localClientNum = this->m_localClientNum;
    secondaryColor = v38;
    LocalClientStatics = CgStatic::GetLocalClientStatics(m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    BombCarrierEntityNum = GetBombCarrierEntityNum(v14);
    FlagCarrierEntityNum = GetFlagCarrierEntityNum(LocalClientGlobals, (const team_t)CharacterInfo->team);
    if ( v14->m_isMLGSpectator && BombCarrierEntityNum != -1 && BombCarrierEntityNum == LocalClientGlobals->predictedPlayerState.clientNum || FlagCarrierEntityNum == LocalClientGlobals->predictedPlayerState.clientNum )
      v32 = 1;
    v23 = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    v24 = CgStatic::GetCharacterInfo(v23, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 3907, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
      __debugbreak();
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    ActorFadeAmount = CgCompassSystemMP::GetActorFadeAmount(this, &this->m_compassActors[clientNum].beginFadeTime);
    v27 = *(float *)&ActorFadeAmount;
    if ( v14->m_isMLGSpectator )
    {
      if ( this->m_compassActors[clientNum].lastUpdate < LocalClientGlobals->time - 500 )
        return;
      playerNumberColor = colorWhite;
      if ( v24->team == TEAM_TWO )
      {
        CgCompassSystemMP::GetFriendlyCompassColor(this, &v38, v14);
        objectiveColor.v[0] = v38.v[0];
        objectiveColor.v[2] = v38.v[2];
        objectiveColor.v[1] = v38.v[1];
        if ( this->m_isUsingCustomCodCasterFriendlyColor )
        {
          CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, &secondaryColor, v14);
          v28 = secondaryColor.v[1];
          objectiveSecondaryColor.v[0] = secondaryColor.v[0];
          v29 = secondaryColor.v[2];
        }
        else
        {
          v28 = colorWhite.v[1];
          v29 = colorWhite.v[2];
          secondaryColor.v[0] = colorWhite.v[0];
          secondaryColor.v[1] = colorWhite.v[1];
          secondaryColor.v[2] = colorWhite.v[2];
          objectiveSecondaryColor.v[0] = colorWhite.v[0];
        }
        objectiveSecondaryColor.v[2] = v29;
        objectiveSecondaryColor.v[1] = v28;
        if ( FlagCarrierEntityNum == LocalClientGlobals->predictedPlayerState.clientNum )
        {
          CgCompassSystemMP::GetEnemyCompassColor(this, &objectiveColor, v14);
          CgCompassSystemMP::GetEnemyCompassSecondaryColor(this, &objectiveSecondaryColor, v14);
        }
      }
      else
      {
        CgCompassSystemMP::GetEnemyCompassColor(this, &v38, v14);
        objectiveColor.v[0] = v38.v[0];
        objectiveColor.v[2] = v38.v[2];
        objectiveColor.v[1] = v38.v[1];
        if ( this->m_isUsingCustomCodCasterEnemyColor )
        {
          CgCompassSystemMP::GetEnemyCompassSecondaryColor(this, &secondaryColor, v14);
          v30 = secondaryColor.v[1];
          objectiveSecondaryColor.v[0] = secondaryColor.v[0];
          v31 = secondaryColor.v[2];
        }
        else
        {
          v30 = colorWhite.v[1];
          v31 = colorWhite.v[2];
          secondaryColor.v[0] = colorWhite.v[0];
          secondaryColor.v[1] = colorWhite.v[1];
          secondaryColor.v[2] = colorWhite.v[2];
          objectiveSecondaryColor.v[0] = colorWhite.v[0];
        }
        objectiveSecondaryColor.v[2] = v31;
        objectiveSecondaryColor.v[1] = v30;
        if ( FlagCarrierEntityNum == LocalClientGlobals->predictedPlayerState.clientNum )
        {
          CgCompassSystemMP::GetFriendlyCompassColor(this, &objectiveColor, v14);
          CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, &objectiveSecondaryColor, v14);
        }
      }
      objectiveIcon = CgCompassSystemMP::GetObjectiveImage(this);
    }
    CgCompassSystem::DrawPlayer(this, compassType, cropPartialMap, largeMap, v32, objectiveIcon, parentRect, rect, boundsRadius, &v38, &secondaryColor, &objectiveColor, &objectiveSecondaryColor, &playerNumberColor, v27, element, luaVM);
  }
}

/*
==============
CgCompassSystemMP::DrawPlayerPointers
==============
*/
void CgCompassSystemMP::DrawPlayerPointers(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  __int128 v10; 
  cg_t *LocalClientGlobals; 
  __int128 v16; 
  float v17; 
  float v18; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  CgGlobalsMP *v21; 
  __int64 m_localClientNum; 
  ClActiveClient *v23; 
  int BombCarrierEntityNum; 
  __int64 v25; 
  int v26; 
  CompassType v27; 
  __int64 v28; 
  unsigned int v29; 
  char v30; 
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v32; 
  GfxImage *v33; 
  char v34; 
  unsigned int v35; 
  char v36; 
  LocalClientNum_t v37; 
  __int64 v38; 
  unsigned __int8 v39; 
  CompassType v40; 
  bool v41; 
  bool v42; 
  cg_t *v46; 
  double v47; 
  float v48; 
  float v49; 
  int clientNum; 
  unsigned int v51; 
  const dvar_t *v52; 
  float v53; 
  double Float_Internal_DebugName; 
  double TacmapLookAtScale; 
  float v56; 
  __int64 v57; 
  const GfxImage *v58; 
  bool m_isMLGSpectator; 
  double v60; 
  ObjectiveSide v61; 
  vec4_t v62; 
  vec4_t v63; 
  ObjectiveIconSize v64; 
  int x; 
  float *y; 
  float *w; 
  int v70; 
  bool v71; 
  bool v72; 
  float v73; 
  ClActiveClient *v74; 
  int objectiveIndex; 
  float scale; 
  float outAngle; 
  float pingAlpha; 
  int FlagCarrierEntityNum; 
  GfxImage *icon; 
  SecureVec3 in; 
  LUIElement *v82; 
  rectDef_s *v83; 
  cg_t *cgameGlob; 
  lua_State *v85; 
  SecureVec3 out; 
  playerState_s *p_predictedPlayerState; 
  char *outName; 
  char *imageName; 
  float v90[2]; 
  vec3_t v91; 
  vec2_t prev[3]; 
  vec2_t xyClipped; 
  vec2_t xy; 
  vec4_t bgColorRight; 
  vec4_t outColor; 
  rectDef_s mapRect; 
  vec4_t v98; 
  vec2_t outVector; 
  vec4_t v100; 
  vec4_t bgColorRightLight; 
  vec4_t outLightColor; 
  float yawTo[4]; 

  prev[2] = (vec2_t)-2i64;
  v72 = largeMap;
  v83 = (rectDef_s *)rect;
  *(_QWORD *)v90 = color;
  v82 = element;
  v85 = luaVM;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  cgameGlob = LocalClientGlobals;
  *(double *)&v10 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  v16 = v10;
  *(float *)&v16 = *(float *)&v10 * color->v[3];
  _XMM12 = v16;
  if ( *(float *)&v16 != 0.0 )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    v17 = (float)(0.5 * mapRect.w) + mapRect.x;
    v18 = (float)(0.5 * mapRect.h) + mapRect.y;
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6064, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
    {
      CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v21 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
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
      v23 = ClActiveClient::ms_activeClients[m_localClientNum];
      v74 = v23;
      BombCarrierEntityNum = GetBombCarrierEntityNum(LocalClientGlobals);
      v70 = BombCarrierEntityNum;
      FlagCarrierEntityNum = GetFlagCarrierEntityNum(LocalClientGlobals, (const team_t)CharacterInfo->team);
      objectiveIndex = 0;
      v26 = 0;
      v27 = compassType;
      while ( 1 )
      {
        v25 = v21 && v21->m_isMLGSpectator && v23 ? ((__int64 (__fastcall *)(ClActiveClient *, __int64, const char *))v23->GetPlayerState)(v23, v25, "%s\n\tRequested gametype before it was set") + 172i64 * v26 : (__int64)p_predictedPlayerState + 172 * v26;
        v28 = v25 + 4720;
        if ( !v21->m_isMLGSpectator )
          goto LABEL_38;
        if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
          __debugbreak();
        if ( *(int *)(v28 + 132) > 0 && (BombCarrierEntityNum != -1 || !I_strcmp(cls.m_activeGameTypeName, "ctf")) )
          goto LABEL_111;
        v29 = *(_DWORD *)(v28 + 164);
        v30 = *(_BYTE *)(v28 + 159);
        if ( v30 != 1 && v30 != 4 )
          goto LABEL_38;
        CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
        v32 = CurrentValidLocalClient;
        if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(w) = 2;
          LODWORD(y) = CurrentValidLocalClient;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, w) )
            __debugbreak();
        }
        if ( clientUIActives[v32].connectionState == CA_ACTIVE && v29 && NetConstStrings_AreStringsLoaded() && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, v29, (const char **)&outName) )
        {
          v33 = Image_Register(outName, IMAGE_TRACK_HUD);
          v34 = 1;
        }
        else
        {
LABEL_38:
          v35 = *(_DWORD *)(v28 + 144);
          v36 = *(_BYTE *)(v28 + 159);
          if ( v36 != 1 && v36 != 4 )
            goto LABEL_110;
          v37 = LUI_CoD_GetCurrentValidLocalClient();
          v38 = v37;
          if ( (unsigned int)v37 >= LOCAL_CLIENT_COUNT )
          {
            LODWORD(w) = 2;
            LODWORD(y) = v37;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, w) )
              __debugbreak();
          }
          if ( clientUIActives[v38].connectionState != CA_ACTIVE || !v35 || !NetConstStrings_AreStringsLoaded() || !NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, v35, (const char **)&imageName) )
            goto LABEL_110;
          v33 = Image_Register(imageName, IMAGE_TRACK_HUD);
          v34 = 0;
        }
        icon = v33;
        v39 = CG_CalloutMarkerPing_CheckSquadPingsForTarget(this->m_localClientNum, *(_DWORD *)v28, 0xFFFFFFFF, -1);
        if ( !this->IsObjectiveFiltered(this, v27, *(ObjectiveBackground *)(v28 + 158)) || v39 != 53 )
          break;
LABEL_109:
        BombCarrierEntityNum = v70;
LABEL_110:
        v23 = v74;
LABEL_111:
        v26 = ++objectiveIndex;
        if ( objectiveIndex >= 32 )
          goto LABEL_112;
      }
      v91 = *(vec3_t *)(v28 + 32);
      LOWORD(y) = *(_WORD *)(v28 + 156);
      v40 = compassType;
      CgCompassSystemMP::GetObjectiveCompassOrigin(this, compassType, cropPartialMap, *(_DWORD *)v28, 0xFFFFFFFF, (const ObjectiveFlags)y, &v91, outAngle, &in, &v71, &v73);
      xy.v[0] = 0.0;
      xy.v[1] = 0.0;
      xyClipped.v[0] = 0.0;
      xyClipped.v[1] = 0.0;
      if ( !v71 || cropPartialMap )
        v41 = CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &mapRect, boundsRadius, &outVector, (const vec2_t *)&out, (const vec2_t *)&in, &xy, &xyClipped);
      else
        v41 = CgCompassSystem::WorldPosToCompassPredict(this, compassType, &mapRect, boundsRadius, &outVector, (const vec2_t *)&out, (const vec2_t *)&in, prev, &xy, &xyClipped);
      v42 = v41;
      xy.v[0] = v17 + xy.v[0];
      xy.v[1] = v18 + xy.v[1];
      xyClipped.v[0] = v17 + xyClipped.v[0];
      xyClipped.v[1] = v18 + xyClipped.v[1];
      if ( !v41 || (*(_WORD *)(v28 + 156) & 0x800) == 0 )
      {
        LOBYTE(x) = *(_BYTE *)(v28 + 158);
        this->GetObjectiveCompassColor(this, (const vec3_t *)&in, *(ObjectiveSide *)(v28 + 161), *(ObjectiveSide *)(v28 + 162), (ObjectiveBackground)x, *(_DWORD *)v28, &v98, (vec4_t *)yawTo, *(const vec4_t **)v90);
        _XMM1 = LODWORD(v98.v[3]);
        __asm
        {
          vcmpltss xmm0, xmm12, xmm1
          vblendvps xmm0, xmm1, xmm12, xmm0
        }
        v98.v[3] = *(float *)&_XMM0;
        v46 = cgameGlob;
        CG_CompassGetObjectivePingAlpha((const ObjectiveView *)v28, cgameGlob->time, &pingAlpha);
        v98.v[3] = v98.v[3] * pingAlpha;
        scale = 0.0;
        CgCompassSystemMP::GetObjectiveScale(this, (const ObjectiveView *)v28, &objectiveIndex, &scale);
        v25 = v70;
        if ( v70 == -1i64 || (*(_WORD *)(v28 + 156) & 0x2000) == 0 )
          goto LABEL_66;
        if ( !v21->m_isMLGSpectator )
        {
          v47 = AngleNormalize360(outAngle - this->m_compassActors[v70].lastYaw);
          v73 = *(float *)&v47;
          if ( (cropPartialMap || compassType || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation")) && this->MapShouldRotate(this) )
          {
            v48 = this->MapRotationFactor(this);
            v49 = v73 - v48;
            v73 = v73 - v48;
          }
          else
          {
            v49 = v73;
          }
          CgCompassSystem::WorldYawToCompass(this, compassType, v46, v49, &v73);
          v25 = (unsigned int)v70;
LABEL_66:
          if ( *(int *)(v28 + 132) > 0 )
          {
            clientNum = v46->predictedPlayerState.clientNum;
            if ( FlagCarrierEntityNum == clientNum || (_DWORD)v25 == clientNum )
              goto LABEL_108;
          }
          v51 = 0;
          v52 = DVARBOOL_compassPrototypeElevation;
          if ( !DVARBOOL_compassPrototypeElevation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPrototypeElevation") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v52);
          if ( v52->current.enabled && (*(_WORD *)(v28 + 156) & 0x1000) == 0 )
          {
            v53 = in.z - cgameGlob->predictedPlayerState.origin.v[2];
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassEnemyHeightDelta, "compassEnemyHeightDelta");
            if ( COERCE_FLOAT(LODWORD(v53) & _xmm) >= *(float *)&Float_Internal_DebugName )
            {
              LOBYTE(v51) = v53 <= 0.0;
              ++v51;
            }
          }
          v40 = compassType;
          if ( compassType == COMPASS_TYPE_TACMAP && CG_CalloutMarkerPing_TacmapIsLookingAtObjective(this->m_localClientNum, objectiveIndex) )
          {
            TacmapLookAtScale = CG_CalloutMarkerPing_GetTacmapLookAtScale(this->m_localClientNum);
            v56 = scale + *(float *)&TacmapLookAtScale;
          }
          else
          {
            v56 = scale;
          }
          if ( v21->m_isMLGSpectator && v34 )
            v57 = *(unsigned __int8 *)(v28 + 168);
          else
            v57 = *(unsigned __int8 *)(v28 + 158);
          v58 = this->GetObjectiveBackgroundImage(this, v57, v51);
          if ( *(_BYTE *)(v28 + 158) == 1 )
            v98 = *(vec4_t *)yawTo;
          m_isMLGSpectator = v21->m_isMLGSpectator;
          if ( !m_isMLGSpectator )
            goto LABEL_105;
          if ( v72 )
          {
            v60 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorLargeMapObjectiveSize, "compassIconMLGSpectatorLargeMapObjectiveSize");
            v56 = v56 + *(float *)&v60;
            m_isMLGSpectator = v21->m_isMLGSpectator;
          }
          if ( !m_isMLGSpectator )
          {
LABEL_105:
            v64 = OBJ_ICON_SIZE_LARGE;
            if ( (*(_WORD *)(v28 + 156) & 2) == 0 )
              v64 = *(_BYTE *)(v28 + 160);
            LOWORD(w) = *(_WORD *)(v28 + 156);
            CgCompassSystemMP::DrawObjective(this, compassType, v83, &xy, &xyClipped, v42, (ObjectiveFlags)w, v64, v58, v73, v56, 0.0, icon, &v98, (const vec4_t *)yawTo, v82, v85);
            goto LABEL_108;
          }
          v61 = *(_BYTE *)(v28 + 161);
          if ( v61 == IN_FLUX )
          {
            if ( this->m_isUsingCustomCodCasterFriendlyColor )
              v62 = (vec4_t)xmmword_147FA89B0;
            else
              v62 = *(vec4_t *)friendlyColors.v;
            outColor = v62;
            CgCompassSystemMP::GetFriendlyCompassLightColor(this, &outLightColor, v21);
            if ( this->m_isUsingCustomCodCasterEnemyColor && v21->m_isMLGSpectator )
              v63 = (vec4_t)xmmword_147FA8A20;
            else
              v63 = *(vec4_t *)enemyColors.v;
            bgColorRight = v63;
            CgCompassSystemMP::GetEnemyCompassLightColor(this, &bgColorRightLight, v21);
          }
          else
          {
            CgCompassSystemMP::GetMLGSpectatorObjectiveColors(this, v61, &outColor, &outLightColor, v21);
            CgCompassSystemMP::GetMLGSpectatorObjectiveColors(this, v61, &bgColorRight, &bgColorRightLight, v21);
            if ( v61 == FRIENDLY )
            {
              CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, &v100, v21);
              goto LABEL_100;
            }
            if ( v61 == ENEMY )
            {
              CgCompassSystemMP::GetEnemyCompassSecondaryColor(this, &v100, v21);
              goto LABEL_100;
            }
          }
          v100 = colorWhite;
LABEL_100:
          LOWORD(w) = *(_WORD *)(v28 + 156);
          CgCompassSystemMP::DrawMLGSpectatorObjective(this, compassType, v83, &xy, &xyClipped, v42, (ObjectiveFlags)w, v73, v56, v56, icon, &v100, &outColor, &bgColorRight, &outLightColor, &bgColorRightLight, v82, v85);
        }
      }
LABEL_108:
      v27 = v40;
      goto LABEL_109;
    }
  }
LABEL_112:
  memset(&out, 0, sizeof(out));
  memset(prev, 0, 0xCui64);
  memset(&in, 0, sizeof(in));
}

/*
==============
CgCompassSystemMP::DrawPortableRadar
==============
*/
void CgCompassSystemMP::DrawPortableRadar(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  const dvar_t *v11; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int clientNum; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  double IconFadeAlpha; 
  float v19; 
  float v20; 
  float v21; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  rectDef_s *v25; 
  int *p_duration; 
  __int64 v27; 
  int v28; 
  int time; 
  int v30; 
  int v31; 
  vec2_t position; 
  float v33; 
  float *y; 
  float *w; 
  char v36; 
  float alphaOffset; 
  float v39; 
  rectDef_s *parentRecta; 
  lua_State *v41; 
  LUIElement *v42; 
  float x; 
  float v44; 
  vec4_t v45; 
  vec2_t outSize; 
  vec4_t quadVerts[4]; 

  v11 = DCONST_DVARINT_bg_compassPortableRadarSweepTime;
  v42 = element;
  v41 = luaVM;
  parentRecta = (rectDef_s *)parentRect;
  if ( !DCONST_DVARINT_bg_compassPortableRadarSweepTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarSweepTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4379, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_bg_compassPortableRadarSweepTime, \"bg_compassPortableRadarSweepTime\" ))", (const char *)&queryFormat, "Dconst_GetInt( bg_compassPortableRadarSweepTime )") )
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
  if ( CharacterInfo->infoValid )
  {
    if ( CharacterInfo->team != TEAM_SPECTATOR )
    {
      IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
      v19 = *(float *)&IconFadeAlpha * color->v[3];
      if ( v19 != 0.0 )
      {
        v20 = color->v[1];
        v45.v[0] = color->v[0];
        v21 = color->v[2];
        v45.v[1] = v20;
        v45.v[2] = v21;
        CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x, &v44, &v39, &alphaOffset);
        if ( v39 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4415, ASSERT_TYPE_SANITY, "( w > 0.0f )", (const char *)&queryFormat, "w > 0.0f") )
          __debugbreak();
        if ( alphaOffset <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4416, ASSERT_TYPE_SANITY, "( h > 0.0f )", (const char *)&queryFormat, "h > 0.0f") )
          __debugbreak();
        if ( compassType || !mapMask )
        {
          v36 = 0;
        }
        else
        {
          v36 = 1;
          LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
          vertAlign = rect->vertAlign;
          horzAlign = rect->horzAlign;
          ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
          ScrPlace_ApplyRect(ActivePlacement, &x, &v44, &v39, &alphaOffset, horzAlign, vertAlign);
          LUI_CoD_GenerateQuadVerts(x, v44, x + v39, v44 + alphaOffset, (vec4_t (*)[4])quadVerts);
          LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, (float)(quadVerts[1].v[0] + quadVerts[0].v[0]) * 0.5, (float)(quadVerts[2].v[1] + quadVerts[0].v[1]) * 0.5, COERCE_FLOAT(COERCE_UNSIGNED_INT(quadVerts[1].v[0] - quadVerts[0].v[0]) & _xmm), COERCE_FLOAT(COERCE_UNSIGNED_INT(quadVerts[2].v[1] - quadVerts[0].v[1]) & _xmm), 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, &outSize, mapMask);
        }
        v25 = parentRecta;
        p_duration = &this->m_compassPortableRadarPingsList[0].duration;
        v27 = 10i64;
        do
        {
          v28 = *(p_duration - 1);
          time = LocalClientGlobals->time;
          if ( v28 + *p_duration >= time && time >= v28 )
          {
            if ( !*p_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4447, ASSERT_TYPE_ASSERT, "(pingInfo->duration)", (const char *)&queryFormat, "pingInfo->duration") )
              __debugbreak();
            v30 = *(p_duration - 1);
            v31 = *p_duration;
            position = *(vec2_t *)(p_duration - 4);
            v33 = (float)(LocalClientGlobals->time - v30) / (float)*p_duration;
            v45.v[3] = (float)(1.0 - v33) * v19;
            CgCompassSystemMP::DrawAreaMarker(this, compassType, cropPartialMap, v25, rect, boundsRadius, &v45, v30, v31, position, v33 * *((float *)p_duration + 1), cgMedia.compassping_portable_radar_sweep, 0, v42, v41);
          }
          p_duration += 79;
          --v27;
        }
        while ( v27 );
        if ( v36 )
          LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
      }
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
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  int v18; 
  int v19; 
  const ScreenPlacement *v20; 
  float radarProgress; 
  cg_t *v22; 
  double RadarLineMargin; 
  float v24; 
  const dvar_t *v25; 
  float value; 
  float v27; 
  float v28; 
  float v29; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float alphaOffset; 
  float w; 
  float outAngle; 
  SecureVec3 out; 
  lua_State *v38; 
  LUIElement *v39; 
  __int64 v40; 
  float x; 
  float y; 
  vec3_t outLine; 
  vec2_t outVector; 
  vec4_t quadVerts[4]; 

  v40 = -2i64;
  v39 = element;
  v38 = luaVM;
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4861, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4862, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4865, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CgCompassSystemMP::IsRadarSweepEnabled(this, LocalClientGlobals) )
  {
    ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x, &y, &w, &alphaOffset);
    if ( w <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4881, ASSERT_TYPE_SANITY, "( w > 0.0f )", (const char *)&queryFormat, "w > 0.0f") )
      __debugbreak();
    if ( alphaOffset <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4882, ASSERT_TYPE_SANITY, "( h > 0.0f )", (const char *)&queryFormat, "h > 0.0f") )
      __debugbreak();
    if ( compassType )
    {
      if ( (unsigned int)(compassType - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4923, ASSERT_TYPE_ASSERT, "(compassType == CompassType::COMPASS_TYPE_FULL || compassType == CompassType::COMPASS_TYPE_TACMAP)", (const char *)&queryFormat, "compassType == CompassType::COMPASS_TYPE_FULL || compassType == CompassType::COMPASS_TYPE_TACMAP") )
        __debugbreak();
      radarProgress = LocalClientGlobals->radarProgress;
      v22 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      RadarLineMargin = CgCompassSystemMP::GetRadarLineMargin(this);
      v24 = (float)((float)((float)((float)(*(float *)&RadarLineMargin / v22->compassMapWorldSize.v[0]) * 2.0) + 1.0) * radarProgress) - (float)(*(float *)&RadarLineMargin / v22->compassMapWorldSize.v[0]);
      v25 = DVARFLT_cg_hudMapRadarLineThickness;
      if ( !DVARFLT_cg_hudMapRadarLineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapRadarLineThickness") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      value = v25->current.value;
      if ( value > 0.0 )
      {
        v27 = 0.5 - (float)((float)(1.0 / value) * v24);
        v28 = (float)((float)(1.0 - v24) * (float)(1.0 / value)) + 0.5;
        if ( alphaOffset == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4937, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
          __debugbreak();
        v29 = 1.0 / (float)((float)(value * w) / alphaOffset);
        vertAlign = rect->vertAlign;
        horzAlign = rect->horzAlign;
        ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &alphaOffset, horzAlign, vertAlign);
        LUI_CoD_GenerateQuadVerts(x, y, x + w, y + alphaOffset, (vec4_t (*)[4])quadVerts);
        LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)this->m_localClientNum, v39, v38, (const vec4_t (*)[4])quadVerts, (float)(v28 + v27) * 0.5, v29 * 0.5, COERCE_FLOAT(COERCE_UNSIGNED_INT(v28 - v27) & _xmm) * 0.5, COERCE_FLOAT(LODWORD(v29) & _xmm) * 0.5, 0.0, color, cgMedia.compass_radarline);
      }
    }
    else
    {
      CgCompassSystemMP::GetRadarLine(this, LocalClientGlobals->radarProgress, &outLine);
      v13 = DVARFLT_compassRadarLineThickness;
      if ( !DVARFLT_compassRadarLineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarLineThickness") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v14 = v13->current.value;
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v15 = (float)((float)(out.x * outLine.v[0]) + (float)(outLine.v[1] * out.y)) - outLine.v[2];
      v16 = (float)((float)(1.0 / v14) * (float)(v15 / this->GetRange(this))) + 0.5;
      CgCompassSystem::GetCompassYaw(this, COMPASS_TYPE_PARTIAL, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
      v17 = LocalClientGlobals->compassNorthYaw - outAngle;
      v18 = rect->vertAlign;
      v19 = rect->horzAlign;
      v20 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      ScrPlace_ApplyRect(v20, &x, &y, &w, &alphaOffset, v19, v18);
      LUI_CoD_GenerateQuadVerts(x, y, x + w, y + alphaOffset, (vec4_t (*)[4])quadVerts);
      if ( mapMask )
      {
        LUI_Render_GetViewportSize(this->m_localClientNum, (vec2_t *)&outLine);
        LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, (float)(quadVerts[1].v[0] + quadVerts[0].v[0]) * 0.5, (float)(quadVerts[2].v[1] + quadVerts[0].v[1]) * 0.5, COERCE_FLOAT(COERCE_UNSIGNED_INT(quadVerts[1].v[0] - quadVerts[0].v[0]) & _xmm), COERCE_FLOAT(COERCE_UNSIGNED_INT(quadVerts[2].v[1] - quadVerts[0].v[1]) & _xmm), 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, (const vec2_t *)&outLine, mapMask);
      }
      LUI_Render_DrawImageRotatedUV((const LocalClientNum_t)this->m_localClientNum, v39, v38, (const vec4_t (*)[4])quadVerts, v16, 0.5, (float)(1.0 / v14) * 0.5, 0.5, v17, color, cgMedia.compass_radarline);
      if ( mapMask )
        LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
    }
    memset(&out, 0, sizeof(out));
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
  double IconFadeAlpha; 
  float v18; 
  float v19; 
  int v20; 
  bool *p_isActive; 
  __int64 v22; 
  __int64 m_localClientNum; 
  CgEntitySystem *v24; 
  cg_t *v25; 
  characterInfo_t *v26; 
  team_t team; 
  team_t v28; 
  CompassType v29; 
  float v30; 
  float v31; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  rectDef_s *v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  vec2_t *outVector; 
  vec2_t *outVectora; 
  float *w; 
  float *h; 
  __int64 v43; 
  float v44; 
  float v45; 
  CompassType compassTypea; 
  CgStatic *LocalClientStatics; 
  vec4_t *v48; 
  rectDef_s *v49; 
  lua_State *v50; 
  LUIElement *v51; 
  rectDef_s *parentRecta; 
  float outAngle; 
  characterInfo_t *v54; 
  CgGlobalsMP *v55; 
  GfxImage *v56; 
  SecureVec3 out; 
  __int64 v58; 
  vec2_t v59; 
  rectDef_s x; 
  vec2_t north; 
  vec2_t outSize; 
  vec4_t quadVerts[4]; 

  v58 = -2i64;
  parentRecta = (rectDef_s *)parentRect;
  compassTypea = compassType;
  v49 = (rectDef_s *)rect;
  v48 = (vec4_t *)color;
  v56 = mapMask;
  v51 = element;
  v50 = luaVM;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v55 = LocalClientGlobals;
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
      IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
      if ( (float)(*(float *)&IconFadeAlpha * v48->v[3]) != 0.0 )
      {
        CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
        v18 = (float)(0.5 * x.w) + x.x;
        v19 = (float)(0.5 * x.h) + x.y;
        ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        v54 = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
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
        v20 = 0;
        p_isActive = &this->m_compassScramblers[0][0].isActive;
        while ( 1 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( v20 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
            break;
          v22 = 4i64;
          v43 = 4i64;
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
              v24 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
              if ( (unsigned int)v20 >= 0x800 )
              {
                LODWORD(w) = 2048;
                LODWORD(outVectora) = v20;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", outVectora, w) )
                  __debugbreak();
              }
              v25 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
              if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                __debugbreak();
              if ( v25->IsMP(v25) )
              {
                if ( v20 >= v25[1].predictedPlayerState.rxvOmnvars[64].timeModified )
                {
                  LODWORD(w) = v25[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                  LODWORD(outVectora) = v20;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outVectora, w) )
                    __debugbreak();
                }
                v26 = (characterInfo_t *)(*(_QWORD *)&v25[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v20);
              }
              else
              {
                v26 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v25, v20);
              }
              team = v26->team;
              v28 = v54->team;
              if ( v55 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
                __debugbreak();
              if ( (CgEntitySystem *)((char *)v24 + 760 * v20) == (CgEntitySystem *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
                __debugbreak();
              if ( v28 && v28 == team )
              {
                v29 = compassTypea;
                CgCompassSystem::WorldPosToCompass(this, compassTypea, cropPartialMap, &x, boundsRadius, &north, (const vec2_t *)&out, (const vec2_t *)(p_isActive - 13), &v59, NULL);
                v30 = ((float (__fastcall *)(CgCompassSystemMP *, _QWORD, __int64))this->GetDrawnItemScaler)(this, (unsigned int)v29, 1i64);
                v45 = v30 * x.h;
                v44 = v30 * x.h;
                v31 = (float)(v30 * x.h) * 0.5;
                v59.v[0] = (float)(v18 - v31) + v59.v[0];
                v59.v[1] = (float)(v19 - v31) + v59.v[1];
                vertAlign = v49->vertAlign;
                horzAlign = v49->horzAlign;
                ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
                ScrPlace_ApplyRect(ActivePlacement, (float *)&v59, (float *)&v59 + 1, &v45, &v44, horzAlign, vertAlign);
                LUI_CoD_GenerateQuadVerts(v59.v[0], v59.v[1], v59.v[0] + v45, v59.v[1] + v44, (vec4_t (*)[4])quadVerts);
                LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
                LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, (float)(quadVerts[1].v[0] + quadVerts[0].v[0]) * 0.5, (float)(quadVerts[2].v[1] + quadVerts[0].v[1]) * 0.5, COERCE_FLOAT(COERCE_UNSIGNED_INT(quadVerts[1].v[0] - quadVerts[0].v[0]) & _xmm), COERCE_FLOAT(COERCE_UNSIGNED_INT(quadVerts[2].v[1] - quadVerts[0].v[1]) & _xmm), 0.0, 1.0, 0.0, 1, 0.0, 0.0, 1.0, 1.0, &outSize, (GfxImage *)cgMedia.compassping_scrambler_friendly);
                LUI_Render_PushGlitch(0.5);
                v35 = v49;
                CgCompassSystem::DrawPlayerMap(this, v29, cropPartialMap, parentRecta, v49, NULL, v48, v56, NULL, NULL, v51, v50);
                LUI_Render_PopGlitch();
                LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
                v36 = DVARBOOL_compassCUAVDrawOuterCircle;
                if ( !DVARBOOL_compassCUAVDrawOuterCircle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCUAVDrawOuterCircle") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v36);
                if ( v36->current.enabled && this->m_isBigMapMinimap )
                {
                  v37 = DCONST_DVARFLT_compassCUAVRadius;
                  if ( !DCONST_DVARFLT_compassCUAVRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCUAVRadius") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v37);
                  CgCompassSystemMP::DrawAreaMarker(this, v29, cropPartialMap, parentRecta, v35, boundsRadius, &colorWhite, 1, 1, *(const vec2_t *)(p_isActive - 13), v37->current.value, cgMedia.compass_bounding_circle, 0, v51, v50);
                }
              }
              v22 = v43;
            }
            p_isActive += 16;
            v43 = --v22;
          }
          while ( v22 );
          ++v20;
        }
        this->m_scramblersUpdated = 0;
      }
    }
  }
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemMP::DrawScriptableObjectives
==============
*/
void CgCompassSystemMP::DrawScriptableObjectives(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, bool largeMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  __int128 v10; 
  cg_t *LocalClientGlobals; 
  __int128 v16; 
  float v17; 
  float v18; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  unsigned __int8 v21; 
  const ObjectiveSettings *v22; 
  const ObjectiveSettings *v23; 
  objectiveState_t state; 
  unsigned int v25; 
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v27; 
  GfxImage *icon; 
  unsigned int InstanceIndex; 
  bool v30; 
  bool v31; 
  bool v32; 
  bool v33; 
  const vec3_t *InstanceAngles; 
  double v35; 
  cg_t *v36; 
  float v37; 
  unsigned int v41; 
  float v42; 
  double Float_Internal_DebugName; 
  const GfxImage *v44; 
  Material *objectiveMiniIconMission; 
  float v46; 
  double TacmapLookAtScale; 
  ObjectiveIconSize size; 
  int x; 
  float *y; 
  float *w; 
  ObjectiveFlags wa; 
  unsigned __int8 i; 
  bool v55; 
  unsigned __int8 v56; 
  float v57; 
  vec3_t out_origin; 
  float outAngle; 
  unsigned int scriptableIndex; 
  cg_t *cgameGlob; 
  char *outName; 
  const vec4_t *v63; 
  lua_State *v64; 
  LUIElement *v65; 
  rectDef_s *v66; 
  SecureVec3 out; 
  __int64 v68; 
  char v69[12]; 
  vec2_t xyClipped; 
  vec2_t xy; 
  rectDef_s mapRect; 
  vec2_t outVector; 
  vec4_t v74; 
  vec4_t bgColor; 

  v68 = -2i64;
  v66 = (rectDef_s *)rect;
  v63 = color;
  v65 = element;
  v64 = luaVM;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  cgameGlob = LocalClientGlobals;
  *(double *)&v10 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  v16 = v10;
  *(float *)&v16 = *(float *)&v10 * color->v[3];
  _XMM8 = v16;
  if ( *(float *)&v16 != 0.0 )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    v17 = (float)(0.5 * mapRect.w) + mapRect.x;
    v18 = (float)(0.5 * mapRect.h) + mapRect.y;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6305, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
    {
      CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v56 = ScriptableCl_ObjectiveCount((const LocalClientNum_t)this->m_localClientNum);
      v21 = 0;
      for ( i = 0; v21 < v56; i = v21 )
      {
        v22 = ScriptableCl_ObjectiveGet((const LocalClientNum_t)this->m_localClientNum, v21, &out_origin);
        v23 = v22;
        if ( v22 )
        {
          state = v22->state;
          if ( state == OBJST_ACTIVE || state == OBJST_CURRENT )
          {
            v25 = v23->icon;
            CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
            v27 = CurrentValidLocalClient;
            if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT )
            {
              LODWORD(w) = 2;
              LODWORD(y) = CurrentValidLocalClient;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, w) )
                __debugbreak();
            }
            if ( clientUIActives[v27].connectionState == CA_ACTIVE )
            {
              if ( v25 )
              {
                if ( NetConstStrings_AreStringsLoaded() && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, v25, (const char **)&outName) )
                {
                  icon = Image_Register(outName, IMAGE_TRACK_HUD);
                  InstanceIndex = ScriptableCl_ObjectiveGetInstanceIndex((const LocalClientNum_t)this->m_localClientNum, i);
                  scriptableIndex = InstanceIndex;
                  v30 = CG_CalloutMarkerPing_CheckSquadPingsForTarget(this->m_localClientNum, 2047, InstanceIndex, -1) != 53;
                  if ( !this->IsObjectiveFiltered(this, compassType, v23->background) || v30 )
                  {
                    out_origin.v[2] = (float)v23->zOffset + out_origin.v[2];
                    xy.v[0] = 0.0;
                    xy.v[1] = 0.0;
                    xyClipped.v[0] = 0.0;
                    xyClipped.v[1] = 0.0;
                    v31 = CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &mapRect, boundsRadius, &outVector, (const vec2_t *)&out, (const vec2_t *)&out_origin, &xy, &xyClipped);
                    v55 = v31;
                    xy.v[0] = v17 + xy.v[0];
                    xy.v[1] = v18 + xy.v[1];
                    xyClipped.v[0] = v17 + xyClipped.v[0];
                    xyClipped.v[1] = v18 + xyClipped.v[1];
                    v32 = (*(_WORD *)v23->flags & 0x800) != 0;
                    if ( compassType == COMPASS_TYPE_PARTIAL )
                    {
                      v33 = (*(_WORD *)v23->flags & 0x800) != 0;
                      if ( v30 )
                        v33 = 0;
                      v32 = v33;
                    }
                    if ( !v31 || !v32 )
                    {
                      v57 = 0.0;
                      if ( (v23->flags[0] & 1) != 0 )
                      {
                        InstanceAngles = ScriptableCl_GetInstanceAngles((const LocalClientNum_t)this->m_localClientNum, InstanceIndex);
                        if ( compassType || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation") || cropPartialMap )
                        {
                          v36 = cgameGlob;
                          v35 = AngleNormalize360(cgameGlob->compassNorthYaw - InstanceAngles->v[1]);
                          v57 = *(float *)&v35;
                          if ( v36->m_isMLGSpectator )
                          {
                            if ( this->MapShouldRotate(this) )
                            {
                              v37 = this->MapRotationFactor(this);
                              *(float *)&v35 = v57 - v37;
                              v57 = *(float *)&v35;
                            }
                            else
                            {
                              *(float *)&v35 = v57;
                            }
                          }
                        }
                        else
                        {
                          v35 = AngleNormalize360(outAngle - InstanceAngles->v[1]);
                          v57 = *(float *)&v35;
                          v36 = cgameGlob;
                        }
                        CgCompassSystem::WorldYawToCompass(this, compassType, v36, *(const float *)&v35, &v57);
                      }
                      else
                      {
                        v36 = cgameGlob;
                      }
                      LOBYTE(x) = v23->background;
                      this->GetObjectiveCompassColor(this, &out_origin, NEUTRAL, NEUTRAL, (ObjectiveBackground)x, 2047, &v74, &bgColor, v63);
                      _XMM1 = LODWORD(v74.v[3]);
                      __asm
                      {
                        vcmpltss xmm0, xmm8, xmm1
                        vblendvps xmm0, xmm1, xmm8, xmm0
                      }
                      v74.v[3] = *(float *)&_XMM0;
                      v41 = 0;
                      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_compassPrototypeElevation, "compassPrototypeElevation") && (*(_WORD *)v23->flags & 0x1000) == 0 )
                      {
                        v42 = (float)(out_origin.v[2] - (float)v23->zOffset) - v36->predictedPlayerState.origin.v[2];
                        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassEnemyHeightDelta, "compassEnemyHeightDelta");
                        if ( COERCE_FLOAT(LODWORD(v42) & _xmm) >= *(float *)&Float_Internal_DebugName )
                        {
                          LOBYTE(v41) = v42 <= 0.0;
                          ++v41;
                        }
                      }
                      v44 = this->GetObjectiveBackgroundImage(this, (unsigned __int8)v23->background, v41);
                      if ( this->IsObjectiveMini(this, compassType, v23->background) && !v30 )
                      {
                        v44 = NULL;
                        objectiveMiniIconMission = cgMedia.objectiveMiniIconMission;
                        if ( v23->background != EASE_IN_OUT_QUAD )
                          objectiveMiniIconMission = cgMedia.objectiveMiniIconPOI;
                        icon = objectiveMiniIconMission->textureTable->image;
                      }
                      if ( (*(_WORD *)v23->flags & 0x2000) != 0 && this->IsVehicleMini(this, compassType) )
                        icon = (GfxImage *)cgMedia.objectiveMiniIconVehicle;
                      v46 = 0.0;
                      if ( compassType == COMPASS_TYPE_TACMAP && CG_CalloutMarkerPing_TacmapIsLookingAtScriptable(this->m_localClientNum, scriptableIndex) )
                      {
                        TacmapLookAtScale = CG_CalloutMarkerPing_GetTacmapLookAtScale(this->m_localClientNum);
                        v46 = *(float *)&TacmapLookAtScale;
                      }
                      size = OBJ_ICON_SIZE_LARGE;
                      if ( (*(_WORD *)v23->flags & 2) == 0 )
                        size = v23->size;
                      LOWORD(wa) = *(_WORD *)v23->flags;
                      CgCompassSystemMP::DrawObjective(this, compassType, v66, &xy, &xyClipped, v55, wa, size, v44, v57, v46, 0.0, icon, &v74, &bgColor, v65, v64);
                    }
                  }
                }
              }
            }
          }
        }
        v21 = i + 1;
      }
    }
  }
  memset(&out, 0, sizeof(out));
  memset(v69, 0, sizeof(v69));
  memset(&out_origin, 0, sizeof(out_origin));
}

/*
==============
CgCompassSystemMP::DrawSelectionCursor
==============
*/
void CgCompassSystemMP::DrawSelectionCursor(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, Material *material, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  float v13; 
  float v14; 
  float m_currentZoomLevel; 
  CgCompassSystem *CompassSystem; 
  vec2_t TacmapMapCenter; 
  float v18; 
  float v19; 
  float v20; 
  LocalClientNum_t m_localClientNum; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  const ScreenPlacement *ActivePlacement; 
  float v27; 
  float v28; 
  float v29; 
  const ScreenPlacement *v30; 
  float v31; 
  float v32; 
  float v33; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *v36; 
  int y; 
  int ya; 
  int yb; 
  int w; 
  int wa; 
  int wb; 
  float quadLength; 
  float width; 
  float quadAngle; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float quadPositionX; 
  float quadPositionY; 
  vec2_t position2; 
  vec2_t position1; 
  float x; 
  float v55; 
  float v56; 
  float vMin[3]; 
  vec4_t v58; 
  vec4_t quadVerts[4]; 

  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4651, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4652, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( CL_Keys_IsCatcherActive(this->m_localClientNum, 16) )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x, &v55, &v56, vMin);
    v58 = *color;
    v13 = FLOAT_32_0;
    v48 = FLOAT_32_0;
    v49 = FLOAT_32_0;
    v14 = FLOAT_32_0;
    if ( compassType == COMPASS_TYPE_TACMAP )
    {
      m_currentZoomLevel = this->m_currentZoomLevel;
      CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
      TacmapMapCenter = CgCompassSystem::GetTacmapMapCenter(CompassSystem);
      v13 = v48;
      v18 = (float)((float)((float)(LocalClientGlobals->locationSelectorCursor.v[0] - **(float **)TacmapMapCenter.v) * (float)(2.0 / m_currentZoomLevel)) + 1.0) * 0.5;
      v19 = (float)((float)((float)(LocalClientGlobals->locationSelectorCursor.v[1] - *(float *)(*(_QWORD *)&TacmapMapCenter + 4i64)) * (float)(2.0 / m_currentZoomLevel)) + 1.0) * 0.5;
      v14 = v49;
    }
    else
    {
      v18 = LocalClientGlobals->locationSelectorCursor.v[0];
      v19 = LocalClientGlobals->locationSelectorCursor.v[1];
    }
    v20 = x;
    m_localClientNum = this->m_localClientNum;
    v22 = v13 * 0.5;
    v23 = (float)(v19 * vMin[0]) + v55;
    v24 = v14 * 0.5;
    v25 = (float)((float)((float)(v18 * v56) + x) - (float)(v13 * 0.5)) - 2.0;
    position2.v[1] = (float)(v23 - v24) + v24;
    position1.v[1] = position2.v[1];
    v47 = (float)((float)(v18 * v56) + x) - (float)(v13 * 0.5);
    v46 = v23 - (float)(v14 * 0.5);
    position2.v[0] = v25;
    position1.v[0] = x;
    width = FLOAT_2_0;
    ActivePlacement = ScrPlace_GetActivePlacement(m_localClientNum);
    v27 = color->v[0];
    v28 = color->v[1];
    v29 = color->v[2];
    v30 = ActivePlacement;
    if ( v25 > v20 )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(this, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      ScrPlace_ApplyRect(v30, &quadPositionX, &quadPositionY, &quadLength, &width, rect->horzAlign, rect->vertAlign);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, quadPositionX, quadPositionY, quadLength, 2.0, 0.0, 0.0, 1.0, 1.0, quadAngle, v27, v28, v29, 1.0, this->m_uiTravelLineMaterial, luaVM);
    }
    v31 = v47;
    v32 = v46;
    position2.v[0] = (float)(v47 + v48) + 2.0;
    position2.v[1] = v24 + v46;
    position1.v[0] = v56 + x;
    position1.v[1] = v24 + v46;
    if ( position2.v[0] < (float)(v56 + x) )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(this, position2, position1, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      w = rect->vertAlign;
      y = rect->horzAlign;
      width = FLOAT_2_0;
      ScrPlace_ApplyRect(v30, &quadPositionX, &quadPositionY, &quadLength, &width, y, w);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, quadPositionX, quadPositionY, quadLength, 2.0, 0.0, 0.0, 1.0, 1.0, quadAngle, v27, v28, v29, 1.0, this->m_uiTravelLineMaterial, luaVM);
      v31 = v47;
      v32 = v46;
    }
    v33 = v55;
    position2.v[0] = v22 + v31;
    position2.v[1] = v32 - 2.0;
    position1.v[0] = v22 + v31;
    position1.v[1] = v55;
    if ( (float)(v32 - 2.0) > v55 )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(this, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      wa = rect->vertAlign;
      ya = rect->horzAlign;
      width = FLOAT_2_0;
      ScrPlace_ApplyRect(v30, &quadPositionX, &quadPositionY, &quadLength, &width, ya, wa);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, quadPositionX, quadPositionY, quadLength, 2.0, 0.0, 0.0, 1.0, 1.0, quadAngle, v27, v28, v29, 1.0, this->m_uiTravelLineMaterial, luaVM);
      v33 = v55;
      v31 = v47;
      v32 = v46;
    }
    position2.v[0] = v22 + v31;
    position1.v[0] = v22 + v31;
    position2.v[1] = (float)(v32 + v48) + 2.0;
    position1.v[1] = v33 + vMin[0];
    if ( position2.v[1] < (float)(v33 + vMin[0]) )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(this, position2, position1, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      wb = rect->vertAlign;
      yb = rect->horzAlign;
      width = FLOAT_2_0;
      ScrPlace_ApplyRect(v30, &quadPositionX, &quadPositionY, &quadLength, &width, yb, wb);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, quadPositionX, quadPositionY, quadLength, 2.0, 0.0, 0.0, 1.0, 1.0, quadAngle, v27, v28, v29, 1.0, this->m_uiTravelLineMaterial, luaVM);
    }
    vertAlign = rect->vertAlign;
    horzAlign = rect->horzAlign;
    v36 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(v36, &v47, &v46, &v48, &v49, horzAlign, vertAlign);
    LUI_CoD_GenerateQuadVerts(v47, v46, v47 + v48, v46 + v49, (vec4_t (*)[4])quadVerts);
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &v58, this->m_uiMapPingCrosshair);
  }
}

/*
==============
CgCompassSystemMP::DrawText
==============
*/
void CgCompassSystemMP::DrawText(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *rect, const char *locString, int fontIndex, float x, float y, float h, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  LUIElement *v12; 
  lua_State *v13; 
  const char *String; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  int v18; 
  int vertAlign; 
  LocalClientNum_t m_localClientNum; 
  const ScreenPlacement *v21; 
  float w[4]; 
  vec4_t verts[4]; 

  v12 = element;
  v13 = luaVM;
  String = SEH_StringEd_GetString(locString);
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, fontIndex, 1.0);
  v18 = R_TextWidth(String, 0, FontHandle, (int)h);
  vertAlign = rect->vertAlign;
  m_localClientNum = this->m_localClientNum;
  LODWORD(rect) = rect->horzAlign;
  w[0] = (float)v18;
  v21 = ScrPlace_GetActivePlacement(m_localClientNum);
  ScrPlace_ApplyRect(v21, &x, &y, w, &h, (int)rect, vertAlign);
  LUI_CoD_GenerateQuadVerts(x - (float)(w[0] * 0.5), y, (float)(w[0] * 0.5) + x, y + h, (vec4_t (*)[4])verts);
  LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, v13, v12, (const vec4_t (*)[4])verts, &colorWhite, FontHandle, String, 0, 0, 0.0, (int)h, NULL, NULL);
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
  double IconFadeAlpha; 
  float v17; 
  float v18; 
  int v19; 
  __int64 v20; 
  CompassTurretMP *v21; 
  int time; 
  int lastUpdateTime; 
  unsigned int v24; 
  centity_t *Entity; 
  int v26; 
  const GfxImage **p_enemy_firing; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  int firePingTime; 
  const dvar_t *v31; 
  int v32; 
  int radarPingTime; 
  const dvar_t *v34; 
  int v35; 
  __int64 v36; 
  __int64 v37; 
  bool v38; 
  BOOL v39; 
  const dvar_t *v40; 
  double v41; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  double v45; 
  float v46; 
  const dvar_t *v47; 
  float v48; 
  const dvar_t *v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  lua_State *v54; 
  LUIElement *v55; 
  const GfxImage **v56; 
  float v57; 
  float width; 
  bool v59; 
  int v60; 
  CompassType compassTypea; 
  unsigned int v62; 
  LUIElement *v63; 
  lua_State *v64; 
  float outAngle; 
  const GfxImage **p_friendly; 
  const GfxImage **p_friendly_firing; 
  CompassTurretMedia *turretMedia; 
  const GfxImage **v69; 
  cg_t *cgameGlob; 
  __int64 v71; 
  __int64 v72; 
  const rectDef_s *v73; 
  SecureVec3 out; 
  __int64 v75; 
  float v76; 
  float v77; 
  vec2_t v1; 
  rectDef_s x; 
  vec2_t north; 
  vec2_t v0; 

  v75 = -2i64;
  v59 = cropPartialMap;
  compassTypea = compassType;
  v73 = rect;
  v63 = element;
  v64 = luaVM;
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
    IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
    v17 = *(float *)&IconFadeAlpha * color->v[3];
    if ( v17 > 0.0 )
    {
      CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &north);
      CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
      v18 = (float)(0.5 * x.w) + x.x;
      *(float *)&v19 = (float)(0.5 * x.h) + x.y;
      v60 = v19;
      ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v20 = 0i64;
      v71 = 0i64;
      v72 = 32i64;
      do
      {
        v21 = &this->m_compassTurrets[v20];
        if ( CG_CompassMP_TurretIsAlwaysVisibleAndValid(this->m_localClientNum, v21) )
        {
          time = LocalClientGlobals->time;
          lastUpdateTime = v21->lastUpdateTime;
          if ( lastUpdateTime <= time )
          {
            if ( lastUpdateTime && lastUpdateTime >= time - 500 )
            {
              v24 = 1;
              goto LABEL_25;
            }
          }
          else
          {
            v21->lastUpdateTime = 0;
          }
        }
        v24 = 0;
LABEL_25:
        v62 = v24;
        Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v21->entityNum);
        if ( (Entity->flags & 1) == 0 )
          goto LABEL_116;
        v26 = Entity->nextState.lerp.u.anonymous.data[5];
        if ( (v26 & 8) != 0 )
        {
          p_friendly = &cgMedia.compass.turretMedia[1].friendly;
          p_friendly_firing = &cgMedia.compass.turretMedia[1].friendly_firing;
          turretMedia = &cgMedia.compass.turretMedia[1];
          p_enemy_firing = &cgMedia.compass.turretMedia[1].enemy_firing;
        }
        else if ( (v26 & 0x10) != 0 )
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
        v69 = p_enemy_firing;
        v28 = DVARFLT_compassSoundPingFadeTime;
        if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        if ( v28->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4099, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassSoundPingFadeTime, \"compassSoundPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassSoundPingFadeTime ) > 0.0f") )
          __debugbreak();
        v29 = DVARFLT_compassRadarPingFadeTime;
        if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        if ( v29->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 4100, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
          __debugbreak();
        firePingTime = v21->firePingTime;
        if ( firePingTime <= 0 || firePingTime > LocalClientGlobals->time )
          goto LABEL_53;
        v31 = DVARFLT_compassSoundPingFadeTime;
        if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v31);
        if ( (float)((float)(1000.0 * v31->current.value) + (float)v21->firePingTime) < (float)LocalClientGlobals->time )
LABEL_53:
          v32 = 0;
        else
          v32 = 1;
        radarPingTime = v21->radarPingTime;
        if ( radarPingTime <= 0 || radarPingTime > LocalClientGlobals->time )
          goto LABEL_61;
        v34 = DVARFLT_compassRadarPingFadeTime;
        if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v34);
        if ( (float)((float)(1000.0 * v34->current.value) + (float)v21->radarPingTime) < (float)LocalClientGlobals->time )
LABEL_61:
          v35 = 0;
        else
          v35 = 1;
        if ( !v32 && !v35 && !v24 )
          goto LABEL_116;
        v36 = v24 ^ 1i64;
        v37 = 16i64;
        if ( !v24 )
          v37 = 28i64;
        v38 = CgCompassSystem::WorldPosToCompass(this, compassTypea, v59, &x, boundsRadius, &north, (const vec2_t *)&out, (const vec2_t *)((char *)v21 + v37), &v0, &v1);
        v39 = v38;
        if ( v38 )
        {
          v40 = DVARBOOL_compassClampIcons;
          if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v40);
          if ( !v40->current.enabled )
          {
            LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
            goto LABEL_116;
          }
        }
        CalcCompassFriendlySize(compassTypea, &v76, &v77);
        v1.v[0] = v18 + v1.v[0];
        v1.v[1] = *(float *)&v19 + v1.v[1];
        if ( v39 )
        {
          v41 = CalcCompassClippedDistanceScale(&v0, &v1, 0);
          v76 = *(float *)&v41 * v76;
          v77 = *(float *)&v41 * v77;
        }
        vertAlign = v73->vertAlign;
        horzAlign = v73->horzAlign;
        ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        ScrPlace_ApplyRect(ActivePlacement, (float *)&v1, (float *)&v1 + 1, &v76, &v77, horzAlign, vertAlign);
        v45 = AngleNormalize360(outAngle - *(&v21->yawCurrent + v36));
        width = *(float *)&v45;
        LocalClientGlobals = (CgGlobalsMP *)cgameGlob;
        if ( cgameGlob->m_isMLGSpectator )
        {
          if ( this->MapShouldRotate(this) )
          {
            v46 = this->MapRotationFactor(this);
            *(float *)&v45 = width - v46;
            width = *(float *)&v45;
          }
          else
          {
            *(float *)&v45 = width;
          }
        }
        CgCompassSystem::WorldYawToCompass(this, compassTypea, LocalClientGlobals, *(const float *)&v45, &width);
        if ( v32 )
        {
          v47 = DVARFLT_compassSoundPingFadeTime;
          if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v47);
          v48 = 1.0 - (float)((float)(LocalClientGlobals->time - v21->firePingTime) * (float)(0.001 / v47->current.value));
        }
        else
        {
          v48 = 0.0;
        }
        if ( v35 )
        {
          v49 = DVARFLT_compassRadarPingFadeTime;
          if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v49);
          v50 = 1.0 - (float)((float)(LocalClientGlobals->time - v21->radarPingTime) * (float)(0.001 / v49->current.value));
        }
        else
        {
          v50 = 0.0;
        }
        if ( v21->isFriendly )
        {
          if ( this->m_isUsingCustomCodCasterFriendlyColor && LocalClientGlobals->m_isMLGSpectator )
          {
            v51 = *(float *)&xmmword_147FA89B0;
            v52 = *((float *)&xmmword_147FA89B0 + 1);
            v53 = *((float *)&xmmword_147FA89B0 + 2);
          }
          else
          {
            v51 = friendlyColors.v[0];
            v52 = friendlyColors.v[1];
            v53 = friendlyColors.v[2];
          }
          v54 = v64;
          v55 = v63;
          if ( v48 < 1.0 )
            LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v63, v1.v[0], v1.v[1], v76, v77, 0.0, 0.0, 1.0, 1.0, width, v51, v52, v53, v17, *p_friendly, v64);
          if ( v48 <= 0.0 )
            goto LABEL_100;
          v56 = p_friendly_firing;
        }
        else
        {
          if ( this->m_isUsingCustomCodCasterEnemyColor && LocalClientGlobals->m_isMLGSpectator )
          {
            v51 = *(float *)&xmmword_147FA8A20;
            v52 = *((float *)&xmmword_147FA8A20 + 1);
            v53 = *((float *)&xmmword_147FA8A20 + 2);
          }
          else
          {
            v51 = enemyColors.v[0];
            v52 = enemyColors.v[1];
            v53 = enemyColors.v[2];
          }
          if ( (v62 || v35) && v48 < 1.0 )
          {
            if ( v62 )
              v57 = v17;
            else
              v57 = v50 * v17;
            v54 = v64;
            v55 = v63;
            LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v63, v1.v[0], v1.v[1], v76, v77, 0.0, 0.0, 1.0, 1.0, width, v51, v52, v53, v57, turretMedia->enemy, v64);
          }
          else
          {
            v54 = v64;
            v55 = v63;
          }
          if ( v48 <= 0.0 )
            goto LABEL_100;
          v56 = v69;
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v55, v1.v[0], v1.v[1], v76, v77, 0.0, 0.0, 1.0, 1.0, width, v51, v52, v53, v48 * v17, *v56, v54);
LABEL_100:
        v19 = v60;
LABEL_116:
        v20 = ++v71;
        --v72;
      }
      while ( v72 );
    }
  }
  memset(&out, 0, sizeof(out));
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
  const dvar_t *v2; 
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v7; 

  v2 = DVARFLT_compassSoundPingFadeTime;
  if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6984, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassSoundPingFadeTime, \"compassSoundPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassSoundPingFadeTime ) > 0.0f") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( *beginFadeTime >= LocalClientGlobals->time )
    return FLOAT_1_0;
  v7 = DVARFLT_compassSoundPingFadeTime;
  if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return 1.0 - (float)((float)(0.001 / v7->current.value) * (float)(LocalClientGlobals->time - *beginFadeTime));
}

/*
==============
CgCompassSystemMP::GetActorPingFadeAmount
==============
*/
float CgCompassSystemMP::GetActorPingFadeAmount(CgCompassSystemMP *this, const int *beginRadarFadeTime)
{
  const dvar_t *v2; 
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v7; 

  v2 = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 7022, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( *beginRadarFadeTime >= LocalClientGlobals->time )
    return FLOAT_1_0;
  v7 = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return 1.0 - (float)((float)(0.001 / v7->current.value) * (float)(LocalClientGlobals->time - *beginRadarFadeTime));
}

/*
==============
CgCompassSystemMP::GetBigMapRange
==============
*/
float CgCompassSystemMP::GetBigMapRange(CgCompassSystemMP *this, bool useExtendedRange)
{
  float result; 
  const dvar_t *v3; 
  const char *v4; 

  if ( !this->m_isUsingTabletMode || (result = this->m_bigMapTabletRange, result == 0.0) )
  {
    if ( useExtendedRange )
    {
      result = this->m_bigMapExtendedRange;
      if ( result != 0.0 )
        return result;
      v3 = DVARFLT_compassExpandedMaxRangeBR;
      if ( DVARFLT_compassExpandedMaxRangeBR )
        goto LABEL_12;
      v4 = "compassExpandedMaxRangeBR";
    }
    else
    {
      result = this->m_bigMapRange;
      if ( result != 0.0 )
        return result;
      v3 = DVARFLT_compassMaxRange;
      if ( DVARFLT_compassMaxRange )
        goto LABEL_12;
      v4 = "compassMaxRange";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v4) )
      __debugbreak();
LABEL_12:
    Dvar_CheckFrontendServerThread(v3);
    return v3->current.value;
  }
  return result;
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
  return (float)(outSize.v[1] * v1->current.value) * 0.0013888889;
}

/*
==============
CgCompassSystemMP::GetCompassScaler
==============
*/
float CgCompassSystemMP::GetCompassScaler(CgCompassSystemMP *this, CompassType compassType)
{
  CgGlobalsMP *LocalClientGlobals; 

  if ( compassType )
    return FLOAT_1_0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  return (float)(1.0 / this->GetRange(this)) * LocalClientGlobals->compassMapWorldSize.v[1];
}

/*
==============
CgCompassSystemMP::GetCroppedMapZoom
==============
*/
float CgCompassSystemMP::GetCroppedMapZoom(CgCompassSystemMP *this)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 

  if ( this->m_isUsingTabletMode )
    return FLOAT_1_0;
  v3 = DVARBOOL_compassEditSettingsEnabled;
  if ( !DVARBOOL_compassEditSettingsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return this->m_croppedMapZoom;
  v4 = DVARFLT_compassEditSettingsZoom;
  if ( !DVARFLT_compassEditSettingsZoom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsZoom") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.value <= 0.0 )
    return this->m_croppedMapZoom;
  v5 = DVARFLT_compassEditSettingsZoom;
  if ( !DVARFLT_compassEditSettingsZoom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsZoom") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.value;
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
  color->xyz = enemyColors;
  color->v[3] = *(float *)&dword_147FA8A1C;
}

/*
==============
CgCompassSystemMP::GetDefaultFriendlyCompassColor
==============
*/
void CgCompassSystemMP::GetDefaultFriendlyCompassColor(CgCompassSystemMP *this, vec4_t *color)
{
  color->xyz = friendlyColors;
  color->v[3] = unk_147FA89AC;
}

/*
==============
CgCompassSystemMP::GetDrawnItemScaler
==============
*/
float CgCompassSystemMP::GetDrawnItemScaler(CgCompassSystemMP *this, CompassType compassType, LocationSelectorType locationSelectorType, bool useDirection)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  float m_locSelSizeMulDirectional; 
  const dvar_t *v12; 
  const dvar_t *v14; 
  float v15; 
  double v16; 
  const dvar_t *v17; 
  float v18; 
  float v19; 
  float value; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  value = 0.0;
  v19 = FLOAT_1_0;
  if ( !useDirection )
  {
    this->GetDrawnItemScalerRadiusAndMultiplier(this, locationSelectorType, &value, &v19);
LABEL_15:
    v14 = DVARBOOL_compassDynamicSelectorSizeEnabled;
    if ( !DVARBOOL_compassDynamicSelectorSizeEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassDynamicSelectorSizeEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      value = value * v19;
    v15 = LocalClientGlobals->compassMapWorldSize.v[1] * 0.5;
    if ( compassType == COMPASS_TYPE_PARTIAL )
    {
      v16 = ((double (__fastcall *)(CgCompassSystemMP *))this->GetRange)(this);
      v15 = *(float *)&v16 * 0.5;
    }
    v17 = DVARFLT_compassSize;
    v18 = value / v15;
    if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    return v18 * v17->current.value;
  }
  v9 = DVARBOOL_compassDynamicSelectorSizeEnabled;
  if ( !DVARBOOL_compassDynamicSelectorSizeEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassDynamicSelectorSizeEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v10 = DVARFLT_compassSelectorSizeBase;
    if ( !DVARFLT_compassSelectorSizeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSelectorSizeBase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    m_locSelSizeMulDirectional = this->m_locSelSizeMulDirectional;
    value = v10->current.value;
    v19 = m_locSelSizeMulDirectional;
    goto LABEL_15;
  }
  v12 = DVARFLT_compassSize;
  if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  return v12->current.value * 0.25;
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
  const dvar_t *v9; 
  float m_locSelSizeMulEMPDrone; 
  const dvar_t *v11; 
  const dvar_t *v12; 

  v7 = locationSelectorType - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        *outSelectorRadius = 1000.0;
        *outLocationSelectorSizeMultiplier = this->m_locSelSizeMulDefault;
        return;
      }
      v9 = DCONST_DVARFLT_compassEMPDroneRadius;
      if ( !DCONST_DVARFLT_compassEMPDroneRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEMPDroneRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      *outSelectorRadius = v9->current.value;
      m_locSelSizeMulEMPDrone = this->m_locSelSizeMulEMPDrone;
    }
    else
    {
      v11 = DCONST_DVARFLT_compassCUAVRadius;
      if ( !DCONST_DVARFLT_compassCUAVRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCUAVRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      *outSelectorRadius = v11->current.value;
      m_locSelSizeMulEMPDrone = this->m_locSelSizeMulCUAV;
    }
  }
  else
  {
    v12 = DCONST_DVARFLT_compassScramblerRadius;
    if ( !DCONST_DVARFLT_compassScramblerRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassScramblerRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    *outSelectorRadius = v12->current.value;
    m_locSelSizeMulEMPDrone = this->m_locSelSizeMulScrambler;
  }
  *outLocationSelectorSizeMultiplier = m_locSelSizeMulEMPDrone;
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
    *color = (vec4_t)xmmword_147FA8A20;
  }
  else
  {
    color->xyz = enemyColors;
    color->v[3] = *(float *)&dword_147FA8A1C;
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
      *color = (vec4_t)xmmword_147FA8A40;
    else
      *color = (vec4_t)xmmword_147FA8A60;
  }
  else
  {
    color->xyz = enemyColors;
    color->v[3] = *(float *)&dword_147FA8A1C;
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
    *color = (vec4_t)xmmword_147FA8A30;
  else
    *color = colorWhite;
}

/*
==============
CgCompassSystemMP::GetEnemyCompassSecondaryLightColor
==============
*/
void CgCompassSystemMP::GetEnemyCompassSecondaryLightColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterEnemyColor && cgameGlob->m_isMLGSpectator )
    *color = (vec4_t)xmmword_147FA8A50;
  else
    *color = colorWhite;
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
    *color = (vec4_t)xmmword_147FA89B0;
  }
  else
  {
    color->xyz = friendlyColors;
    color->v[3] = unk_147FA89AC;
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
      *color = (vec4_t)xmmword_147FA89D0;
    else
      *color = (vec4_t)xmmword_147FA89F0;
  }
  else
  {
    color->xyz = friendlyColors;
    color->v[3] = unk_147FA89AC;
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
    *color = (vec4_t)xmmword_147FA89C0;
  else
    *color = colorWhite;
}

/*
==============
CgCompassSystemMP::GetFriendlyCompassSecondaryLightColor
==============
*/
void CgCompassSystemMP::GetFriendlyCompassSecondaryLightColor(CgCompassSystemMP *this, vec4_t *color, CgGlobalsMP *cgameGlob)
{
  if ( this->m_isUsingCustomCodCasterFriendlyColor && cgameGlob->m_isMLGSpectator )
    *color = (vec4_t)xmmword_147FA89E0;
  else
    *color = colorWhite;
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
  const dvar_t *v1; 

  v1 = DCONST_DVARFLT_compassPlayerGhostFade;
  if ( !DCONST_DVARFLT_compassPlayerGhostFade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassPlayerGhostFade") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.value;
}

/*
==============
CgCompassSystemMP::GetLastShotFireAmount
==============
*/
float CgCompassSystemMP::GetLastShotFireAmount(CgCompassSystemMP *this, const int *lastShotTime)
{
  const dvar_t *v2; 
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v7; 

  v2 = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6999, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( *lastShotTime >= LocalClientGlobals->time )
    return FLOAT_1_0;
  v7 = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return 1.0 - (float)((float)(0.001 / v7->current.value) * (float)(LocalClientGlobals->time - *lastShotTime));
}

/*
==============
CgCompassSystemMP::GetMLGSpectatorObjectiveColors
==============
*/
void CgCompassSystemMP::GetMLGSpectatorObjectiveColors(CgCompassSystemMP *this, ObjectiveSide side, vec4_t *outColor, vec4_t *outLightColor, CgGlobalsMP *cgameGlobMP)
{
  switch ( side )
  {
    case IN_FLUX:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5991, ASSERT_TYPE_ASSERT, "(side != ObjectiveSide::IN_FLUX)", (const char *)&queryFormat, "side != ObjectiveSide::IN_FLUX") )
        __debugbreak();
      goto LABEL_4;
    case FRIENDLY:
      CgCompassSystemMP::GetFriendlyCompassColor(this, outColor, cgameGlobMP);
      CgCompassSystemMP::GetFriendlyCompassLightColor(this, outLightColor, cgameGlobMP);
      break;
    case ENEMY:
      CgCompassSystemMP::GetEnemyCompassColor(this, outColor, cgameGlobMP);
      CgCompassSystemMP::GetEnemyCompassLightColor(this, outLightColor, cgameGlobMP);
      break;
    default:
LABEL_4:
      *outColor = colorDkGrey;
      *outLightColor = colorWhite;
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
    *outIconColor = colorWhite;
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
    *color = colorMdGrey;
  else
    *color = colorWhite;
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

  *out_xy = 0i64;
  *out_xyClipped = 0i64;
  if ( !useAlternate || cropPartialMap )
    result = CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, scaledRect, boundsRadius, yawVector, (const vec2_t *)playerPos, (const vec2_t *)origin, out_xy, out_xyClipped);
  else
    result = CgCompassSystem::WorldPosToCompassPredict(this, compassType, scaledRect, boundsRadius, yawVector, (const vec2_t *)playerPos, (const vec2_t *)origin, (const vec2_t *)prevOrigin, out_xy, out_xyClipped);
  out_xy->v[0] = centerX + out_xy->v[0];
  out_xy->v[1] = centerY + out_xy->v[1];
  out_xyClipped->v[0] = centerX + out_xyClipped->v[0];
  out_xyClipped->v[1] = centerY + out_xyClipped->v[1];
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
  float v13; 
  float v14; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  float v19; 
  const dvar_t *v20; 
  float value; 
  float v22; 
  double Float_Internal_DebugName; 
  const dvar_t *v24; 
  centity_t *Entity; 
  team_t team; 
  team_t v27; 
  CgHandler *Handler; 
  CgStatic *v29; 
  const characterInfo_t *v30; 
  __int16 otherEntityNum; 
  CgGlobalsMP *v32; 
  vec4_t *v33; 
  CgCompassSystemMP *v34; 
  SecureVec3 out; 
  __int64 v36; 

  v36 = -2i64;
  LocalClientGlobals = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_CalcPlayerPos(&out, this->m_localClientNum);
  v14 = fsqrt((float)((float)(origin->v[1] - out.y) * (float)(origin->v[1] - out.y)) + (float)((float)(origin->v[0] - out.x) * (float)(origin->v[0] - out.x)));
  v13 = v14;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5533, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !CharacterInfo->infoValid )
    goto LABEL_59;
  *newColor = *color;
  if ( v14 > this->GetRange(this) )
  {
    v17 = DVARFLT_compassObjectiveMaxRange;
    if ( !DVARFLT_compassObjectiveMaxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMaxRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v14 < v17->current.value )
    {
      v19 = 0.0;
      v20 = DVARFLT_compassObjectiveMaxRange;
      if ( !DVARFLT_compassObjectiveMaxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMaxRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      value = v20->current.value;
      if ( (float)(value - this->GetRange(this)) != 0.0 )
      {
        v22 = v13 - this->GetRange(this);
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveMaxRange, "compassObjectiveMaxRange");
        v19 = v22 / (float)(*(float *)&Float_Internal_DebugName - this->GetRange(this));
      }
      v24 = DVARFLT_compassObjectiveMinAlpha;
      if ( !DVARFLT_compassObjectiveMinAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMinAlpha") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      newColor->v[3] = 1.0 - (float)((float)(1.0 - v24->current.value) * v19);
    }
    else
    {
      v18 = DVARFLT_compassObjectiveMinAlpha;
      if ( !DVARFLT_compassObjectiveMinAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMinAlpha") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      LODWORD(newColor->v[3]) = v18->current.integer;
    }
  }
  else
  {
    newColor->v[3] = 1.0;
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
      v32 = LocalClientGlobals;
      v33 = newColor;
      v34 = this;
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
      *backgroundColor = contestColor_0;
LABEL_58:
      *newColor = colorBlack;
      goto LABEL_59;
  }
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  team = CharacterInfo->team;
  v27 = TEAM_ZERO;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((Entity->nextState.eType - 1) & 0xFFEF) != 0 )
  {
    if ( (Entity->flags & 1) != 0 )
      v27 = CgEntitySystemMP::CG_EntityMP_GetTeam((const LocalClientNum_t)this->m_localClientNum, Entity);
  }
  else
  {
    Handler = CgHandler::getHandler(this->m_localClientNum);
    v29 = CgStatic::GetLocalClientStatics((const LocalClientNum_t)Handler->m_localClientNum);
    v30 = CgStatic::GetCharacterInfo(v29, entNum);
    if ( v30 )
      v27 = v30->team;
  }
  if ( (unsigned int)(v27 - 1) <= 1 )
  {
    v32 = LocalClientGlobals;
    v33 = newColor;
    v34 = this;
    if ( !LocalClientGlobals->m_isMLGSpectator )
    {
      if ( team == v27 )
        goto LABEL_41;
      goto LABEL_42;
    }
    if ( v27 == TEAM_TWO )
    {
LABEL_45:
      CgCompassSystemMP::GetFriendlyCompassSecondaryColor(this, newColor, LocalClientGlobals);
      goto LABEL_59;
    }
LABEL_53:
    CgCompassSystemMP::GetEnemyCompassSecondaryColor(v34, v33, v32);
    goto LABEL_59;
  }
  if ( (Entity->flags & 1) != 0 )
  {
    otherEntityNum = Entity->nextState.otherEntityNum;
    if ( otherEntityNum != 2047 && v27 == TEAM_ZERO )
    {
      v32 = LocalClientGlobals;
      v33 = newColor;
      v34 = this;
      if ( otherEntityNum == LocalClientGlobals->clientNum )
      {
LABEL_41:
        CgCompassSystemMP::GetFriendlyCompassColor(v34, v33, v32);
        goto LABEL_59;
      }
LABEL_42:
      CgCompassSystemMP::GetEnemyCompassColor(v34, v33, v32);
    }
  }
LABEL_59:
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemMP::GetObjectiveCompassOrigin
==============
*/
void CgCompassSystemMP::GetObjectiveCompassOrigin(CgCompassSystemMP *this, CompassType compassType, bool cropPartialMap, const unsigned int entNum, const unsigned int scriptableIndex, const ObjectiveFlags flags, const vec3_t *objOrigin, float yawAngle, SecureVec3 *outOrigin, bool *useAlternate, float *yawTo)
{
  float v13; 
  cg_t *LocalClientGlobals; 
  const cpose_t *Entity; 
  float v16; 
  float v17; 
  float v18; 
  const dvar_t *v19; 
  double v20; 
  double v21; 

  *yawTo = 0.0;
  v13 = 0.0;
  *useAlternate = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( entNum == 2047 )
  {
    v16 = objOrigin->v[2];
    v17 = objOrigin->v[0];
    v18 = objOrigin->v[1];
    if ( scriptableIndex != -1 )
      v13 = ScriptableCl_GetInstanceAngles((const LocalClientNum_t)this->m_localClientNum, scriptableIndex)->v[1];
    outOrigin->z = v16;
    outOrigin->y = v18;
    outOrigin->x = v17;
  }
  else
  {
    Entity = (const cpose_t *)CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
    CG_GetPoseOrigin(Entity, (vec3_t *)outOrigin);
    v13 = Entity->angles.v[1];
    *useAlternate = (Entity[1].vehicle.wheelBoneIndex[0] & 0x20) != 0 && compassType == COMPASS_TYPE_PARTIAL;
  }
  if ( (flags & 1) != 0 )
  {
    if ( compassType )
      goto LABEL_17;
    v19 = DVARBOOL_compassRotation;
    if ( !DVARBOOL_compassRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRotation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( !v19->current.enabled || cropPartialMap )
    {
LABEL_17:
      v21 = AngleNormalize360(LocalClientGlobals->compassNorthYaw - v13);
      *yawTo = *(float *)&v21;
      if ( !LocalClientGlobals->m_isMLGSpectator || !this->MapShouldRotate(this) )
        goto LABEL_21;
      *(float *)&v20 = *yawTo - this->MapRotationFactor(this);
    }
    else
    {
      v20 = AngleNormalize360(yawAngle - v13);
    }
    *yawTo = *(float *)&v20;
LABEL_21:
    CgCompassSystem::WorldYawToCompass(this, compassType, LocalClientGlobals, *yawTo, yawTo);
  }
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
  const dvar_t *v8; 
  cg_t *v9; 
  __int64 v10; 
  ObjectiveSide side; 
  int time; 
  int v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  __int128 v16; 
  __int128 v18; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v8 = DCONST_DVARINT_compassObjectivePopTime;
  v9 = LocalClientGlobals;
  if ( !DCONST_DVARINT_compassObjectivePopTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectivePopTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v10 = *objectiveIndex;
  side = obj->side;
  time = v9->time;
  v13 = objectivePopStartTimes[v10] + v8->current.integer;
  if ( side == objectiveSides[v10] )
  {
    if ( time > 2 * v13 )
      objectivePopStartTimes[v10] = -1;
  }
  else
  {
    objectivePopStartTimes[v10] = time;
    objectiveSides[v10] = side;
  }
  v14 = DCONST_DVARINT_compassObjectivePopTime;
  if ( !DCONST_DVARINT_compassObjectivePopTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectivePopTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 5697, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_compassObjectivePopTime, \"compassObjectivePopTime\" ) > 0)", (const char *)&queryFormat, "Dconst_GetInt( compassObjectivePopTime ) > 0") )
    __debugbreak();
  v15 = DCONST_DVARINT_compassObjectivePopTime;
  if ( v9->time >= v13 )
  {
    if ( !DCONST_DVARINT_compassObjectivePopTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectivePopTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v18 = LODWORD(FLOAT_1_0);
    *(float *)&v18 = 1.0 - (float)((float)(v9->time - v13) / (float)v15->current.integer);
    _XMM3 = v18;
  }
  else
  {
    if ( !DCONST_DVARINT_compassObjectivePopTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectivePopTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = 0i64;
    *(float *)&v16 = (float)(v9->time - objectivePopStartTimes[*objectiveIndex]) / (float)v15->current.integer;
    _XMM3 = v16;
  }
  __asm { vcmpless xmm1, xmm3, xmm2 }
  _XMM0 = _XMM3;
  __asm { vblendvps xmm1, xmm0, xmm2, xmm1 }
  *scale = *(float *)&_XMM1;
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
    *color = (vec4_t)xmmword_147FA89B0;
  }
  else
  {
    color->xyz = rgbColor;
    color->v[3] = *(float *)&dword_147FA8A0C;
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
    *color = (vec4_t)xmmword_147FA8A90;
  }
  else
  {
    color->xyz = playerColors;
    color->v[3] = unk_147FA8A8C;
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
  float v9; 
  float v14; 
  __int128 v15; 
  float v19; 
  float v20; 
  float v21; 

  _XMM1 = LODWORD(position1.v[0]);
  _XMM8 = LODWORD(position1.v[1]);
  v9 = position2.v[1];
  __asm
  {
    vminss  xmm2, xmm1, xmm0
    vmaxss  xmm0, xmm1, xmm0
  }
  *quadPositionX = (float)((float)(*(float *)&_XMM0 - *(float *)&_XMM2) * 0.5) + *(float *)&_XMM2;
  __asm
  {
    vmaxss  xmm2, xmm8, xmm7
    vminss  xmm4, xmm8, xmm7
  }
  v14 = (float)((float)(*(float *)&_XMM2 - *(float *)&_XMM4) * 0.5) + *(float *)&_XMM4;
  v15 = LODWORD(position2.v[1]);
  *(float *)&v15 = fsqrt((float)((float)(position2.v[1] - position1.v[1]) * (float)(position2.v[1] - position1.v[1])) + (float)((float)(position2.v[0] - position1.v[0]) * (float)(position2.v[0] - position1.v[0])));
  _XMM2 = v15;
  __asm
  {
    vcmpless xmm1, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm0, xmm1
  }
  *quadPositionY = v14;
  *quadLength = *(float *)&v15;
  v20 = acosf_0((float)(position2.v[0] - position1.v[0]) / *(float *)&_XMM0) * 57.295776;
  v19 = v20;
  *quadAngle = v20;
  if ( v9 < *(float *)&_XMM8 )
  {
    LODWORD(v19) = LODWORD(v20) ^ _xmm;
    *quadAngle = COERCE_FLOAT(LODWORD(v20) ^ _xmm);
  }
  if ( v19 < 0.0 )
  {
    do
    {
      v21 = *quadAngle + 360.0;
      *quadAngle = v21;
    }
    while ( v21 < 0.0 );
  }
}

/*
==============
CgCompassSystemMP::GetRadarLine
==============
*/
void CgCompassSystemMP::GetRadarLine(CgCompassSystemMP *this, float radarProgress, vec3_t *outLine)
{
  cg_t *LocalClientGlobals; 
  double RadarLineMargin; 
  float v7; 
  float v8; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  RadarLineMargin = CgCompassSystemMP::GetRadarLineMargin(this);
  v7 = LocalClientGlobals->compassNorth.v[1];
  outLine->v[0] = v7;
  LODWORD(v8) = LODWORD(LocalClientGlobals->compassNorth.v[0]) ^ _xmm;
  outLine->v[1] = v8;
  outLine->v[2] = (float)((float)((float)(v8 * LocalClientGlobals->compassMapUpperLeft.v[1]) + (float)(v7 * LocalClientGlobals->compassMapUpperLeft.v[0])) + (float)((float)((float)(*(float *)&RadarLineMargin * 2.0) + LocalClientGlobals->compassMapWorldSize.v[0]) * radarProgress)) - *(float *)&RadarLineMargin;
}

/*
==============
CgCompassSystemMP::GetRadarLineEastWestPercentage
==============
*/
float CgCompassSystemMP::GetRadarLineEastWestPercentage(CgCompassSystemMP *this, float radarProgress)
{
  cg_t *LocalClientGlobals; 
  double RadarLineMargin; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  RadarLineMargin = CgCompassSystemMP::GetRadarLineMargin(this);
  return (float)((float)((float)((float)(*(float *)&RadarLineMargin / LocalClientGlobals->compassMapWorldSize.v[0]) * 2.0) + 1.0) * radarProgress) - (float)(*(float *)&RadarLineMargin / LocalClientGlobals->compassMapWorldSize.v[0]);
}

/*
==============
CgCompassSystemMP::GetRadarLineMargin
==============
*/
float CgCompassSystemMP::GetRadarLineMargin(CgCompassSystemMP *this)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  __int128 unsignedInt; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->compassMapWorldSize.v[0] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 722, ASSERT_TYPE_ASSERT, "(cgameGlob->compassMapWorldSize[0])", (const char *)&queryFormat, "cgameGlob->compassMapWorldSize[0]") )
    __debugbreak();
  v3 = DVARFLT_compassRadarLineThickness;
  if ( !DVARFLT_compassRadarLineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarLineThickness") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  this->GetRange(this);
  this->GetRange(this);
  v4 = DVARFLT_cg_hudMapRadarLineThickness;
  if ( !DVARFLT_cg_hudMapRadarLineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudMapRadarLineThickness") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  unsignedInt = v4->current.unsignedInt;
  *(float *)&unsignedInt = v4->current.value * LocalClientGlobals->compassMapWorldSize.v[0];
  _XMM1 = unsignedInt;
  __asm { vmaxss  xmm2, xmm1, xmm6 }
  return *(float *)&_XMM2 * 0.5;
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
  const dvar_t *v4; 
  double result; 
  bool HasPerk; 
  bool m_isBigMapMinimap; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v3 = *CgCompassSystem::GetCurrentCompassDisplayType(this);
  if ( (v3 & 2) != 0 )
  {
    v4 = DCONST_DVARFLT_radialSensorRange;
    if ( !DCONST_DVARFLT_radialSensorRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorRange") )
      __debugbreak();
LABEL_15:
    Dvar_CheckFrontendServerThread(v4);
    *(_QWORD *)&result = v4->current.unsignedInt;
    return result;
  }
  if ( (v3 & 4) != 0 )
  {
    v4 = DVARFLT_heartbeatSensorTabletRange;
    if ( !DVARFLT_heartbeatSensorTabletRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletRange") )
      __debugbreak();
    goto LABEL_15;
  }
  if ( (v3 & 8) != 0 )
  {
    v4 = DCONST_DVARFLT_heartbeatSensorEMPRange;
    if ( !DCONST_DVARFLT_heartbeatSensorEMPRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPRange") )
      __debugbreak();
    goto LABEL_15;
  }
  HasPerk = BG_HasPerk(&LocalClientGlobals->predictedPlayerState.perks, 0x39u);
  m_isBigMapMinimap = this->m_isBigMapMinimap;
  if ( HasPerk )
  {
    if ( m_isBigMapMinimap )
      return CgCompassSystemMP::GetBigMapRange(this, 1);
    else
      return Dvar_GetFloat_Internal_DebugName(DVARFLT_compassExpandedMaxRange, "compassExpandedMaxRange");
  }
  else if ( m_isBigMapMinimap )
  {
    return CgCompassSystemMP::GetBigMapRange(this, 0);
  }
  else
  {
    return Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMaxRange, "compassMaxRange");
  }
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
    *color = colorMdGrey;
    return 1;
  }
  else
  {
    *color = colorWhite;
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
  return this->m_uiWorldToScreenScale;
}

/*
==============
CgCompassSystemMP::IncreaseRadarTime
==============
*/
void CgCompassSystemMP::IncreaseRadarTime(CgCompassSystemMP *this)
{
  CgGlobalsMP *LocalClientGlobals; 
  float radarProgress; 
  float v6; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2085, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CgCompassSystemMP::IsRadarSweepEnabled(this, LocalClientGlobals) )
  {
    if ( !this->m_isBigMapMinimap )
    {
      radarProgress = LocalClientGlobals->radarProgress;
      _XMM2 = 0i64;
      __asm { vroundss xmm2, xmm2, xmm4, 1 }
      v6 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->frametime).m128_f32[0] / CG_CompassMP_GetRadarUpdateTime(LocalClientGlobals)) + radarProgress) - *(float *)&_XMM2;
      LocalClientGlobals->radarProgress = v6;
      CgCompassSystemMP::PingEnemyPlayers(this, radarProgress, v6);
    }
  }
  else
  {
    LocalClientGlobals->radarProgress = 0.0;
  }
}

/*
==============
CgCompassSystemMP::InitCompass
==============
*/
void CgCompassSystemMP::InitCompass(CgCompassSystemMP *this)
{
  const char *v3; 
  const char *v6; 
  StringTable *v7; 
  const char *v9; 
  StringTable *v10; 
  const char *v12; 
  StringTable *v13; 
  const char *v15; 
  StringTable *v16; 
  const char *v18; 
  StringTable *v19; 
  const char *v21; 
  bool v22; 
  const char *v23; 
  StringTable *v24; 
  const char *v26; 
  StringTable *v27; 
  const char *v29; 
  const GfxImage *v30; 
  StringTable *v31; 
  const char *v32; 
  StringTable *v33; 
  const char *v35; 
  StringTable *v36; 
  const char *v38; 
  StringTable *v39; 
  const char *v41; 
  StringTable *v42; 
  const char *v44; 
  StringTable *v45; 
  const char *v47; 
  StringTable *v48; 
  const char *v50; 
  int v51; 
  StringTable *v52; 
  const char *v53; 
  const char *v54; 
  int v55; 
  StringTable *v56; 
  const char *v57; 
  StringTable *tablePtr; 

  this->InitCompassColors(this);
  Sys_CreateReadWriteLock(&this->m_compassPlaneLock);
  Sys_CreateReadWriteLock(&this->m_compassTurretLock);
  Sys_CreateReadWriteLock(&this->m_compassMissileLock);
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  StringTable_GetAsset("mp/mapInfo.csv", (const StringTable **)&tablePtr);
  v3 = StringTable_Lookup(tablePtr, 0, cls.m_activeGameMapName, 4);
  *(double *)&_XMM0 = atof(v3);
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  LODWORD(_XMM7) = 0;
  this->m_croppedMapZoom = *(float *)&_XMM1;
  if ( *(float *)&_XMM1 == 0.0 )
    this->m_croppedMapZoom = 1.0;
  v6 = StringTable_Lookup(tablePtr, 0, cls.m_activeGameMapName, 7);
  *(double *)&_XMM0 = atof(v6);
  v7 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_mapRotationFactor = *(float *)&_XMM1;
  v9 = StringTable_Lookup(v7, 0, cls.m_activeGameMapName, 8);
  *(double *)&_XMM0 = atof(v9);
  v10 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_mapOffset.v[0] = *(float *)&_XMM1 + 0.5;
  v12 = StringTable_Lookup(v10, 0, cls.m_activeGameMapName, 9);
  *(double *)&_XMM0 = atof(v12);
  v13 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_mapOffset.v[1] = *(float *)&_XMM1 + 0.5;
  v15 = StringTable_Lookup(v13, 0, cls.m_activeGameMapName, 34);
  *(double *)&_XMM0 = atof(v15);
  v16 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_mapOffsetBorderless.v[0] = *(float *)&_XMM1 + 0.5;
  v18 = StringTable_Lookup(v16, 0, cls.m_activeGameMapName, 35);
  *(double *)&_XMM0 = atof(v18);
  v19 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_mapOffsetBorderless.v[1] = *(float *)&_XMM1 + 0.5;
  v21 = StringTable_Lookup(v19, 0, cls.m_activeGameMapName, 17);
  v22 = atoi(v21) != 0;
  this->m_isBigMapMinimap = v22;
  if ( v22 )
  {
    v23 = StringTable_Lookup(tablePtr, 0, cls.m_activeGameMapName, 19);
    *(double *)&_XMM0 = atof(v23);
    v24 = tablePtr;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    this->m_bigMapRange = *(float *)&_XMM1;
    v26 = StringTable_Lookup(v24, 0, cls.m_activeGameMapName, 20);
    *(double *)&_XMM0 = atof(v26);
    v27 = tablePtr;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    this->m_bigMapExtendedRange = *(float *)&_XMM1;
    v29 = StringTable_Lookup(v27, 0, cls.m_activeGameMapName, 25);
    *(double *)&_XMM0 = atof(v29);
    __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
  }
  else
  {
    *(_QWORD *)&this->m_bigMapRange = 0i64;
  }
  this->m_bigMapTabletRange = *(float *)&_XMM7;
  this->m_scramblersUpdated = 0;
  this->m_uiTravelLineMaterial = Image_Register("white", IMAGE_TRACK_HUD);
  v30 = Image_Register("ui_mp_br_mapmenu_ping_cursor", IMAGE_TRACK_HUD);
  v31 = tablePtr;
  this->m_uiMapPingCrosshair = v30;
  v32 = StringTable_Lookup(v31, 0, cls.m_activeGameMapName, 36);
  *(double *)&_XMM0 = atof(v32);
  v33 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_locSelSizeMulDirectional = *(float *)&_XMM1;
  v35 = StringTable_Lookup(v33, 0, cls.m_activeGameMapName, 37);
  *(double *)&_XMM0 = atof(v35);
  v36 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_locSelSizeMulScrambler = *(float *)&_XMM1;
  v38 = StringTable_Lookup(v36, 0, cls.m_activeGameMapName, 38);
  *(double *)&_XMM0 = atof(v38);
  v39 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_locSelSizeMulCUAV = *(float *)&_XMM1;
  v41 = StringTable_Lookup(v39, 0, cls.m_activeGameMapName, 39);
  *(double *)&_XMM0 = atof(v41);
  v42 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_locSelSizeMulEMPDrone = *(float *)&_XMM1;
  v44 = StringTable_Lookup(v42, 0, cls.m_activeGameMapName, 40);
  *(double *)&_XMM0 = atof(v44);
  v45 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_locSelSizeMulDefault = *(float *)&_XMM1;
  v47 = StringTable_Lookup(v45, 0, cls.m_activeGameMapName, 41);
  *(double *)&_XMM0 = atof(v47);
  v48 = tablePtr;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  this->m_bigMapUAVRadius = *(float *)&_XMM1;
  v50 = StringTable_Lookup(v48, 0, cls.m_activeGameMapName, 42);
  v51 = atoi(v50);
  v52 = tablePtr;
  this->m_bigMapUAVPingDuration = v51;
  v53 = StringTable_Lookup(v52, 0, cls.m_activeGameMapName, 43);
  this->m_bigMapUAVPingIntervalTime = atoi(v53);
  v54 = StringTable_Lookup(tablePtr, 0, cls.m_activeGameMapName, 44);
  v55 = atoi(v54);
  v56 = tablePtr;
  this->m_bigMapUAVPingIntervalTimeSlow = v55;
  v57 = StringTable_Lookup(v56, 0, cls.m_activeGameMapName, 45);
  this->m_bigMapUAVPingIntervalTimeFast = atoi(v57);
}

/*
==============
CgCompassSystemMP::InitCompassColors
==============
*/
void CgCompassSystemMP::InitCompassColors(CgCompassSystemMP *this)
{
  int ControllerFromClient; 
  DDLContext *DDLContext; 
  bool v6; 
  unsigned int UInt; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int128 v13; 
  float *v15; 
  float *v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v22; 
  __int128 v24; 
  __int128 v28; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v39; 
  __int128 v42; 
  __int128 v46; 
  __int128 v49; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v56; 
  __int128 v57; 
  __int128 v59; 
  __int128 v61; 
  __int128 v64; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v76; 
  __int128 v79; 
  float v82; 
  DDLState toState; 
  DDLState fromState; 
  DDLState result; 
  float v86; 
  float v87; 
  float v88; 

  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  *(_OWORD *)&fromState.member = _XMM0;
  toState.isValid = 0;
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  if ( !CL_AllLocalClientsInactive() && !Com_FrontEnd_IsInFrontEnd() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
    if ( GamerProfile_IsProfileLoggedIn(ControllerFromClient) )
    {
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "HUD.friendlyTeam", &friendlyColors);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "HUD.party", &rgbColor);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "HUD.enemyTeam", &enemyColors);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "HUD.contested", (vec3_t *)&contestColor_0);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "HUD.you", &playerColors);
      DDLContext = GamerProfile_GetDDLContext(ControllerFromClient, MLG_SETTINGS);
      fromState = *DDL_GetRootState(&result, DDLContext->def);
      DDL_MoveToName(&fromState, &toState, "shoutcaster_fe_team_identity");
      v6 = DDL_GetUInt(&toState, DDLContext) == 1;
      this->m_isUsingCustomCodCasterColor = v6;
      this->m_isUsingCustomCodCasterFriendlyColor = v6;
      this->m_isUsingCustomCodCasterEnemyColor = v6;
      DDL_MoveToName(&fromState, &toState, "shoutcaster_fe_team1_color");
      UInt = DDL_GetUInt(&toState, DDLContext);
      DDL_MoveToName(&fromState, &toState, "shoutcaster_fe_team1_secondary_color");
      v8 = DDL_GetUInt(&toState, DDLContext);
      DDL_MoveToName(&fromState, &toState, "shoutcaster_fe_team2_color");
      v9 = DDL_GetUInt(&toState, DDLContext);
      DDL_MoveToName(&fromState, &toState, "shoutcaster_fe_team2_secondary_color");
      v10 = DDL_GetUInt(&toState, DDLContext);
      v87 = FLOAT_1_0;
      v11 = v10;
      v13 = LODWORD(FLOAT_0_2);
      *(float *)&v13 = friendlyColors.v[0] + 0.2;
      _XMM0 = v13;
      __asm { vminss  xmm2, xmm0, xmm7 }
      *(float *)&xmmword_147FA89F0 = *(float *)&_XMM2;
      v86 = friendlyColors.v[1] + 0.2;
      v88 = friendlyColors.v[2] + 0.2;
      v15 = &v86;
      if ( (float)(friendlyColors.v[1] + 0.2) >= 1.0 )
        v15 = &v87;
      v82 = FLOAT_1_0;
      *((float *)&xmmword_147FA89F0 + 1) = *v15;
      v16 = &v88;
      if ( (float)(friendlyColors.v[2] + 0.2) >= 1.0 )
        v16 = &v82;
      *((float *)&xmmword_147FA89F0 + 2) = *v16;
      v17 = 0i64;
      *(float *)&v17 = (float)BYTE2(UInt) * 0.0039215689;
      v18 = v17;
      *(float *)&xmmword_147FA89B0 = *(float *)&v17;
      v19 = 0i64;
      *(float *)&v19 = (float)BYTE1(UInt) * 0.0039215689;
      v20 = v19;
      v22 = v18;
      *(float *)&v22 = *(float *)&v18 + 0.2;
      _XMM0 = v22;
      __asm { vminss  xmm4, xmm0, xmm7 }
      *((float *)&xmmword_147FA89B0 + 1) = *(float *)&v20;
      v24 = 0i64;
      *(float *)&v24 = (float)((float)(unsigned __int8)UInt * 0.0039215689) + 0.2;
      _XMM0 = v24;
      *((float *)&xmmword_147FA89B0 + 2) = (float)(unsigned __int8)UInt * 0.0039215689;
      __asm { vminss  xmm2, xmm0, xmm7 }
      v28 = v20;
      *(float *)&v28 = *(float *)&v20 + 0.2;
      _XMM1 = v28;
      __asm { vminss  xmm3, xmm1, xmm7 }
      *((float *)&xmmword_147FA89D0 + 2) = *(float *)&_XMM2;
      *(float *)&xmmword_147FA89D0 = *(float *)&_XMM4;
      *((float *)&xmmword_147FA89D0 + 1) = *(float *)&_XMM3;
      v30 = 0i64;
      *(float *)&v30 = (float)BYTE2(v8) * 0.0039215689;
      v31 = v30;
      v32 = 0i64;
      *(float *)&v32 = (float)BYTE1(v8) * 0.0039215689;
      v33 = v32;
      v35 = v31;
      *(float *)&v35 = *(float *)&v31 + 0.2;
      _XMM0 = v35;
      v36 = 0i64;
      *(float *)&v36 = (float)(unsigned __int8)v8 * 0.0039215689;
      v37 = v36;
      *((float *)&xmmword_147FA89C0 + 2) = *(float *)&v36;
      v39 = v33;
      *(float *)&v39 = *(float *)&v33 + 0.2;
      _XMM1 = v39;
      *(float *)&xmmword_147FA89C0 = *(float *)&v31;
      __asm { vminss  xmm4, xmm0, xmm7 }
      v42 = v37;
      *(float *)&v42 = *(float *)&v37 + 0.2;
      _XMM0 = v42;
      __asm { vminss  xmm2, xmm0, xmm7 }
      *((float *)&xmmword_147FA89E0 + 2) = *(float *)&_XMM2;
      *((float *)&xmmword_147FA89C0 + 1) = *(float *)&v33;
      __asm { vminss  xmm3, xmm1, xmm7 }
      v46 = LODWORD(FLOAT_0_2);
      *(float *)&v46 = enemyColors.v[0] + 0.2;
      _XMM1 = v46;
      __asm { vminss  xmm2, xmm1, xmm7 }
      v49 = LODWORD(FLOAT_0_2);
      *(float *)&v49 = enemyColors.v[1] + 0.2;
      _XMM1 = v49;
      *(float *)&xmmword_147FA8A60 = *(float *)&_XMM2;
      __asm { vminss  xmm2, xmm1, xmm7 }
      *(float *)&xmmword_147FA89E0 = *(float *)&_XMM4;
      *((float *)&xmmword_147FA89E0 + 1) = *(float *)&_XMM3;
      v52 = LODWORD(FLOAT_0_2);
      *(float *)&v52 = enemyColors.v[2] + 0.2;
      _XMM1 = v52;
      v53 = 0i64;
      *(float *)&v53 = (float)BYTE2(v9) * 0.0039215689;
      v54 = v53;
      *((float *)&xmmword_147FA8A60 + 1) = *(float *)&_XMM2;
      __asm { vminss  xmm2, xmm1, xmm7 }
      *((float *)&xmmword_147FA8A60 + 2) = *(float *)&_XMM2;
      *(float *)&xmmword_147FA8A20 = *(float *)&v53;
      v56 = 0i64;
      *(float *)&v56 = (float)BYTE1(v9) * 0.0039215689;
      v57 = v56;
      v59 = v54;
      *(float *)&v59 = *(float *)&v54 + 0.2;
      _XMM0 = v59;
      __asm { vminss  xmm4, xmm0, xmm7 }
      v61 = 0i64;
      *(float *)&v61 = (float)((float)(unsigned __int8)v9 * 0.0039215689) + 0.2;
      _XMM0 = v61;
      v64 = v57;
      *(float *)&v64 = *(float *)&v57 + 0.2;
      _XMM1 = v64;
      *((float *)&xmmword_147FA8A20 + 2) = (float)(unsigned __int8)v9 * 0.0039215689;
      __asm { vminss  xmm2, xmm0, xmm7 }
      *((float *)&xmmword_147FA8A20 + 1) = *(float *)&v57;
      __asm { vminss  xmm3, xmm1, xmm7 }
      *(float *)&xmmword_147FA8A40 = *(float *)&_XMM4;
      *((float *)&xmmword_147FA8A40 + 1) = *(float *)&_XMM3;
      *((float *)&xmmword_147FA8A40 + 2) = *(float *)&_XMM2;
      v67 = 0i64;
      *(float *)&v67 = (float)BYTE2(v11) * 0.0039215689;
      v68 = v67;
      v69 = 0i64;
      *(float *)&v69 = (float)BYTE1(v11) * 0.0039215689;
      v70 = v69;
      v72 = v68;
      *(float *)&v72 = *(float *)&v68 + 0.2;
      _XMM0 = v72;
      v73 = 0i64;
      *(float *)&v73 = (float)(unsigned __int8)v11 * 0.0039215689;
      v74 = v73;
      v76 = v70;
      *(float *)&v76 = *(float *)&v70 + 0.2;
      _XMM1 = v76;
      *(float *)&xmmword_147FA8A30 = *(float *)&v68;
      __asm { vminss  xmm4, xmm0, xmm7 }
      v79 = v74;
      *(float *)&v79 = *(float *)&v74 + 0.2;
      _XMM0 = v79;
      *((float *)&xmmword_147FA8A30 + 1) = *(float *)&v70;
      __asm { vminss  xmm3, xmm1, xmm7 }
      *((float *)&xmmword_147FA8A30 + 2) = *(float *)&v74;
      __asm { vminss  xmm2, xmm0, xmm7 }
      *((float *)&xmmword_147FA8A50 + 2) = *(float *)&_XMM2;
      *(float *)&xmmword_147FA8A50 = *(float *)&_XMM4;
      *((float *)&xmmword_147FA8A50 + 1) = *(float *)&_XMM3;
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
bool CgCompassSystemMP::IsActorWithinFadeTime(CgCompassSystemMP *this, const int *beginFadeTime)
{
  const dvar_t *v2; 
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v6; 
  CgGlobalsMP *v7; 

  v2 = DVARFLT_compassSoundPingFadeTime;
  if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6976, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassSoundPingFadeTime, \"compassSoundPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassSoundPingFadeTime ) > 0.0f") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v6 = DVARFLT_compassSoundPingFadeTime;
  v7 = LocalClientGlobals;
  if ( !DVARFLT_compassSoundPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSoundPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  return (float)v7->time < (float)((float)(v6->current.value * 1000.0) + (float)*beginFadeTime) && *beginFadeTime;
}

/*
==============
CgCompassSystemMP::IsActorWithinPingTime
==============
*/
bool CgCompassSystemMP::IsActorWithinPingTime(CgCompassSystemMP *this, const int *beginRadarFadeTime)
{
  const dvar_t *v2; 
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v6; 
  CgGlobalsMP *v7; 

  v2 = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 7014, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v6 = DVARFLT_compassRadarPingFadeTime;
  v7 = LocalClientGlobals;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  return (float)v7->time < (float)((float)(v6->current.value * 1000.0) + (float)*beginRadarFadeTime) && *beginRadarFadeTime;
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
  if ( cgameGlob->m_isMLGSpectator || !this->m_radarSweepEnabled )
    return 0;
  if ( cgameGlob->predictedPlayerState.radarEnabled )
    return 1;
  return cgameGlob->predictedPlayerState.radarOneOffSweepTime > 0 && (float)(CG_CompassMP_GetRadarUpdateTime(cgameGlob) + (float)cgameGlob->predictedPlayerState.radarOneOffSweepTime) > (float)cgameGlob->time;
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
  const dvar_t *v2; 
  const dvar_t *v5; 
  float value; 
  float v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  vec2_t m_mapOffset; 
  vec2_t v13; 

  v2 = DVARBOOL_compassEditSettingsEnabled;
  if ( !DVARBOOL_compassEditSettingsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    goto LABEL_32;
  v5 = DVARFLT_compassEditSettingsOffsetX;
  value = 0.0;
  v7 = 0.0;
  if ( !DVARFLT_compassEditSettingsOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.value != 0.0 )
  {
    v8 = DVARFLT_compassEditSettingsOffsetX;
    if ( !DVARFLT_compassEditSettingsOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    value = v8->current.value;
  }
  v9 = DVARFLT_compassEditSettingsOffsetY;
  if ( !DVARFLT_compassEditSettingsOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.value != 0.0 )
  {
    v10 = DVARFLT_compassEditSettingsOffsetY;
    if ( !DVARFLT_compassEditSettingsOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v7 = v10->current.value;
  }
  if ( value == 0.0 && v7 == 0.0 )
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
    v13.v[0] = value + 0.5;
    v13.v[1] = v7 + 0.5;
    *a2 = v13;
  }
  return (vec2_t)a2;
}

/*
==============
CgCompassSystemMP::MapRotationFactor
==============
*/
float CgCompassSystemMP::MapRotationFactor(CgCompassSystemMP *this)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  const dvar_t *v4; 

  v1 = DVARBOOL_compassEditSettingsEnabled;
  if ( !DVARBOOL_compassEditSettingsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return this->m_mapRotationFactor;
  v3 = DVARFLT_compassEditSettingsRotation;
  if ( !DVARFLT_compassEditSettingsRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.value <= 0.0 )
    return this->m_mapRotationFactor;
  v4 = DVARFLT_compassEditSettingsRotation;
  if ( !DVARFLT_compassEditSettingsRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEditSettingsRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return v4->current.value;
}

/*
==============
CgCompassSystemMP::MapShouldRotate
==============
*/
bool CgCompassSystemMP::MapShouldRotate(CgCompassSystemMP *this)
{
  return !this->m_isUsingTabletMode && this->MapRotationFactor(this) != 0.0;
}

/*
==============
CgCompassSystemMP::ModifyObjectiveScaleForPos
==============
*/
void CgCompassSystemMP::ModifyObjectiveScaleForPos(CgCompassSystemMP *this, CompassType compassType, const rectDef_s *scaledRect, const vec2_t *xy, float *inOut_scale)
{
  CgCompassSystem *CompassSystem; 
  vec2_t TacmapMapCenter; 
  float v10; 
  float v11; 
  cg_t *LocalClientGlobals; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 

  if ( compassType == COMPASS_TYPE_TACMAP && CG_GameInterface_PlayingBR() )
  {
    CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
    TacmapMapCenter = CgCompassSystem::GetTacmapMapCenter(CompassSystem);
    v10 = **(float **)TacmapMapCenter.v;
    v11 = *(float *)(*(_QWORD *)&TacmapMapCenter + 4i64);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    v13 = 2.0 / this->m_currentZoomLevel;
    v14 = (float)((float)((float)((float)((float)(LocalClientGlobals->locationSelectorCursor.v[0] - v10) * v13) + 1.0) * 0.5) * scaledRect->w) + scaledRect->x;
    if ( v14 > (float)(xy->v[0] - 6.0) && v14 < (float)(xy->v[0] + 6.0) )
    {
      v15 = xy->v[1];
      v16 = (float)((float)((float)((float)((float)(LocalClientGlobals->locationSelectorCursor.v[1] - v11) * v13) + 1.0) * 0.5) * scaledRect->h) + scaledRect->y;
      if ( v16 > (float)(v15 - 6.0) && v16 < (float)(v15 + 6.0) )
        *inOut_scale = *inOut_scale + 0.5;
    }
  }
}

/*
==============
CgCompassSystemMP::PingEnemyPlayers
==============
*/
void CgCompassSystemMP::PingEnemyPlayers(CgCompassSystemMP *this, float oldRadarProgress, float newRadarProgress)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  CompassActorMP *m_compassActors; 
  int v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  cg_t *v15; 
  characterInfo_t *v16; 
  team_t team; 
  CompassTurretMP *m_compassTurrets; 
  __int64 v19; 
  int time; 
  int lastUpdateTime; 
  __int64 v22; 
  __int64 v23; 
  vec3_t outLine; 
  vec3_t pos; 

  if ( oldRadarProgress <= newRadarProgress )
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
      CgCompassSystemMP::GetRadarLine(this, oldRadarProgress, &outLine);
      CgCompassSystemMP::GetRadarLine(this, newRadarProgress, &pos);
      if ( this->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
      {
        LODWORD(v22) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2031, ASSERT_TYPE_ASSERT, "(unsigned)( m_localClientNum ) < (unsigned)( 2 )", "m_localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v22, 2) )
          __debugbreak();
      }
      m_compassActors = this->m_compassActors;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (int)ComCharacterLimits::ms_gameData.m_characterCount > 248 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2034, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetCharacterMaxCount() ) <= ( ((200 + 48)) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetCharacterMaxCount()", "MAX_COMPASS_ACTORS_MP", ComCharacterLimits::ms_gameData.m_characterCount, 248) )
          __debugbreak();
      }
      v8 = 0;
      v9 = outLine.v[2];
      v10 = outLine.v[1];
      v11 = outLine.v[0];
      v12 = pos.v[2];
      v13 = pos.v[1];
      v14 = pos.v[0];
      while ( 1 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v8 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
          break;
        v15 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( v15->IsMP(v15) )
        {
          if ( v8 >= v15[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(v23) = v15[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(v22) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v16 = (characterInfo_t *)(*(_QWORD *)&v15[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v8);
        }
        else
        {
          v16 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v15, v8);
        }
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2038, ASSERT_TYPE_ASSERT, "(entryInfo)", (const char *)&queryFormat, "entryInfo") )
          __debugbreak();
        if ( v16->infoValid )
        {
          team = CharacterInfo->team;
          if ( team && v16->team == team )
            m_compassActors->flags &= ~1u;
          else
            m_compassActors->flags |= 1u;
          m_compassActors->perks.array[0] = v16->perks.array[0];
          m_compassActors->perks.array[1] = v16->perks.array[1];
          if ( (m_compassActors->flags & 3) == 1 )
          {
            CompassActor_GetLastPosValue(m_compassActors, &pos);
            *(_QWORD *)outLine.v = *(_QWORD *)pos.v;
            memset(&pos, 0, sizeof(pos));
            if ( (float)((float)((float)(v11 * outLine.v[0]) + (float)(v10 * outLine.v[1])) - v9) < 0.0 != (float)((float)((float)(v14 * outLine.v[0]) + (float)(v13 * outLine.v[1])) - v12) < 0.0 )
              CG_CompassMP_RadarPingEnemyPlayer(m_compassActors, LocalClientGlobals->time, 0x44u);
            memset(&outLine, 0, 8ui64);
          }
        }
        ++v8;
        ++m_compassActors;
      }
      m_compassTurrets = this->m_compassTurrets;
      v19 = 32i64;
      do
      {
        time = LocalClientGlobals->time;
        lastUpdateTime = m_compassTurrets->lastUpdateTime;
        if ( lastUpdateTime <= time )
        {
          if ( lastUpdateTime && lastUpdateTime >= time - 500 && !CG_CompassMP_TurretIsAlwaysVisibleAndValid(this->m_localClientNum, m_compassTurrets) && (float)((float)((float)(v11 * m_compassTurrets->positionCurrent.v[0]) + (float)(v10 * m_compassTurrets->positionCurrent.v[1])) - v9) < 0.0 != (float)((float)((float)(v14 * m_compassTurrets->positionCurrent.v[0]) + (float)(v13 * m_compassTurrets->positionCurrent.v[1])) - v12) < 0.0 )
            CG_CompassMP_TurretRadarPingEnemy(m_compassTurrets, LocalClientGlobals->time);
        }
        else
        {
          m_compassTurrets->lastUpdateTime = 0;
        }
        ++m_compassTurrets;
        --v19;
      }
      while ( v19 );
    }
  }
}

/*
==============
StaticMlgCameras::ReadCSVs
==============
*/
void StaticMlgCameras::ReadCSVs(StaticMlgCameras *this)
{
  StaticMlgCameras *v1; 
  GfxImage *v2; 
  const char *Gametype; 
  __int64 v4; 
  StringTable **p_tablePtr; 
  float *v; 
  vec2_t *m_camAngles; 
  const StringTable *v8; 
  __int64 v9; 
  int v10; 
  const char *v11; 
  char *v12; 
  int v13; 
  float *v14; 
  float v15; 
  const char *v16; 
  char *v17; 
  int v18; 
  float *v19; 
  float v20; 
  bool v21; 
  __int64 v22; 
  __int64 v23; 
  StringTable **v24; 
  __int64 v25; 
  __int64 v26; 
  StringTable *table; 
  StringTable *tablePtr; 
  StringTable *v30; 
  char _Buffer[128]; 
  char dest[256]; 

  v1 = this;
  if ( !this->m_mlgCamIcon )
  {
    v2 = Image_Register("compass_codcaster_cam", IMAGE_TRACK_HUD);
    v1->m_mlgCamIcon = v2;
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6452, ASSERT_TYPE_ASSERT, "(m_mlgCamIcon != nullptr)", (const char *)&queryFormat, "m_mlgCamIcon != nullptr") )
      __debugbreak();
  }
  if ( !v1->m_mlgSelectedCamIcon )
    v1->m_mlgSelectedCamIcon = Image_Register("compass_codcaster_cam_selected", IMAGE_TRACK_HUD);
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  strncpy_s(v1->m_lastReadMapName, 0x40ui64, cls.m_activeGameMapName, 0x40ui64);
  StringTable_GetAsset("mp/CameraPositions.csv", (const StringTable **)&tablePtr);
  Gametype = Party_GetGametype();
  strncpy_s(v1->m_lastReadGametype, 0x40ui64, Gametype, 0x40ui64);
  memset_0(_Buffer, 0, sizeof(_Buffer));
  j_sprintf_s(_Buffer, 0x80ui64, "mp/CameraPositions_%s.csv", Gametype);
  StringTable_GetAsset(_Buffer, (const StringTable **)&v30);
  v4 = 0i64;
  v26 = 2i64;
  p_tablePtr = &tablePtr;
  v25 = 0i64;
  v24 = &tablePtr;
  v = v1->m_camOrigins[0].v;
  m_camAngles = v1->m_camAngles;
  do
  {
    v8 = *p_tablePtr;
    v9 = 0i64;
    table = *p_tablePtr;
    v10 = 2;
    do
    {
      v11 = StringTable_Lookup(v8, 0, cls.m_activeGameMapName, v10 - 1);
      if ( *v11 )
      {
        v1->m_newlyCreated[v4 + v9] = 0;
        memset_0(dest, 0, sizeof(dest));
        Core_strcpy(dest, 0x100ui64, v11);
        v12 = strtok(dest, " ");
        v13 = 0;
        v14 = v;
        do
        {
          if ( v12 )
          {
            v15 = strtof(v12, NULL);
            if ( (unsigned int)v13 >= 3 )
            {
              LODWORD(v23) = 3;
              LODWORD(v22) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
                __debugbreak();
            }
          }
          else
          {
            if ( (unsigned int)v13 >= 3 )
            {
              LODWORD(v23) = 3;
              LODWORD(v22) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
                __debugbreak();
            }
            v15 = 0.0;
          }
          *v14 = v15;
          v12 = strtok(NULL, " ");
          ++v13;
          ++v14;
        }
        while ( v13 < 3 );
        v8 = table;
        v16 = StringTable_Lookup(table, 0, cls.m_activeGameMapName, v10);
        Core_strcpy(dest, 0x100ui64, v16);
        v17 = strtok(dest, " ");
        v18 = 0;
        v19 = (float *)m_camAngles;
        do
        {
          if ( v17 )
          {
            v20 = strtof(v17, NULL);
            if ( (unsigned int)v18 >= 2 )
            {
              LODWORD(v23) = 2;
              LODWORD(v22) = v18;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
                __debugbreak();
            }
          }
          else
          {
            if ( (unsigned int)v18 >= 2 )
            {
              LODWORD(v23) = 2;
              LODWORD(v22) = v18;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
                __debugbreak();
            }
            v20 = 0.0;
          }
          *v19 = v20;
          v17 = strtok(NULL, " ");
          ++v18;
          ++v19;
        }
        while ( v18 < 2 );
        v1 = this;
        v4 = v25;
      }
      else
      {
        *v = 3.4028235e38;
      }
      v10 += 2;
      ++v9;
      ++m_camAngles;
      v += 3;
    }
    while ( v9 < 4 );
    v4 += 4i64;
    p_tablePtr = v24 + 1;
    v25 = v4;
    v21 = v26-- == 1;
    ++v24;
  }
  while ( !v21 );
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
  int v10; 
  unsigned int v11; 
  int v12; 
  int *p_startTime; 
  int v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  __int64 v18; 
  unsigned int v20; 
  int v21; 

  v10 = 0x7FFFFFFF;
  v11 = -1;
  v12 = 0;
  p_startTime = &this->m_compassPortableRadarPingsList[0].startTime;
  do
  {
    v14 = *p_startTime;
    v15 = v12;
    v16 = v11;
    v17 = v10;
    if ( *p_startTime < v10 )
    {
      v11 = v12;
      if ( !v14 )
        break;
    }
    ++v12;
    p_startTime += 79;
    v10 = v14;
    v11 = v15;
    if ( v14 >= v17 )
      v10 = v17;
    if ( v14 >= v17 )
      v11 = v16;
  }
  while ( v12 < 10 );
  if ( this->m_compassPortableRadarList[0].pingIdx == v11 )
    this->m_compassPortableRadarList[0].pingIdx = -1;
  if ( this->m_compassPortableRadarList[1].pingIdx == v11 )
    this->m_compassPortableRadarList[1].pingIdx = -1;
  if ( this->m_compassPortableRadarList[2].pingIdx == v11 )
    this->m_compassPortableRadarList[2].pingIdx = -1;
  if ( this->m_compassPortableRadarList[3].pingIdx == v11 )
    this->m_compassPortableRadarList[3].pingIdx = -1;
  if ( v11 >= 0xA )
  {
    v21 = 10;
    v20 = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1596, ASSERT_TYPE_ASSERT, "(unsigned)( minTimePingIdx ) < (unsigned)( COMPASS_MAX_PORTABLE_RADAR_PINGS )", "minTimePingIdx doesn't index COMPASS_MAX_PORTABLE_RADAR_PINGS\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  v18 = (int)v11;
  if ( duration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1599, ASSERT_TYPE_ASSERT, "(duration > 0)", (const char *)&queryFormat, "duration > 0") )
    __debugbreak();
  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1600, ASSERT_TYPE_ASSERT, "(radius > 0)", (const char *)&queryFormat, "radius > 0") )
    __debugbreak();
  this->m_compassPortableRadarPingsList[v18].radius = radius;
  this->m_compassPortableRadarPingsList[v18].duration = duration;
  this->m_compassPortableRadarPingsList[v18].startTime = cgameGlob->time;
  this->m_compassPortableRadarPingsList[v18].perkImmunityOverrideIndex = perkImmunityOverrideIndex;
  this->m_compassPortableRadarPingsList[v18].pos.v[0] = pos->v[0];
  this->m_compassPortableRadarPingsList[v18].pos.v[1] = pos->v[1];
  this->m_compassPortableRadarPingsList[v18].pos.v[2] = pos->v[2];
  memset_0(this->m_compassPortableRadarPingsList[v18].actorPinged, 0, 0x120ui64);
  return v11;
}

/*
==============
CgCompassSystemMP::TurretSweep
==============
*/
void CgCompassSystemMP::TurretSweep(CgCompassSystemMP *this, cg_t *const cgameGlob, CompassPortableRadarPing *const pingInfo, const float maxDist, const vec3_t *localUsersPosition)
{
  const dvar_t *v5; 
  int v9; 
  __int64 v10; 
  int *p_lastUpdateTime; 
  int time; 
  int v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  CgSoundSystemMP *SoundSystemMP; 

  v5 = DCONST_DVARFLT_bg_compassPortableRadarMinVelocity;
  if ( !DCONST_DVARFLT_bg_compassPortableRadarMinVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarMinVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.value == 0.0 )
  {
    v9 = 0;
    v10 = 0i64;
    SoundSystemMP = CgSoundSystemMP::GetSoundSystemMP((const LocalClientNum_t)cgameGlob->localClientNum);
    p_lastUpdateTime = &this->m_compassTurrets[0].lastUpdateTime;
    do
    {
      time = cgameGlob->time;
      v13 = *p_lastUpdateTime;
      if ( *p_lastUpdateTime <= time )
      {
        if ( v13 )
        {
          if ( v13 >= time - 500 && !CG_CompassMP_TurretIsAlwaysVisibleAndValid(this->m_localClientNum, (CompassTurretMP *)(p_lastUpdateTime - 1)) )
          {
            v14 = *((float *)p_lastUpdateTime + 4) - pingInfo->pos.v[1];
            if ( fsqrt((float)(v14 * v14) + (float)((float)(*((float *)p_lastUpdateTime + 3) - pingInfo->pos.v[0]) * (float)(*((float *)p_lastUpdateTime + 3) - pingInfo->pos.v[0]))) < maxDist && !pingInfo->turretPinged[v10] )
            {
              pingInfo->turretPinged[v10] = 1;
              CG_CompassMP_TurretRadarPingEnemy((CompassTurretMP *)(p_lastUpdateTime - 1), cgameGlob->time);
              v15 = 2.0 * pingInfo->radius;
              v16 = *((float *)p_lastUpdateTime + 4) - localUsersPosition->v[1];
              v17 = fsqrt((float)(v16 * v16) + (float)((float)(*((float *)p_lastUpdateTime + 3) - localUsersPosition->v[0]) * (float)(*((float *)p_lastUpdateTime + 3) - localUsersPosition->v[0])));
              if ( v17 < v15 )
                CgSoundSystemMP::PlayEntitySoundAliasCompassPing(SoundSystemMP, v9, (const vec3_t *)p_lastUpdateTime + 1, v17 / v15);
            }
          }
        }
      }
      else
      {
        *p_lastUpdateTime = 0;
      }
      ++v9;
      ++v10;
      p_lastUpdateTime += 14;
    }
    while ( v9 < 32 );
  }
}

/*
==============
CgCompassSystemMP::UpdateActors
==============
*/
void CgCompassSystemMP::UpdateActors(CgCompassSystemMP *this)
{
  CgCompassSystemMP *v1; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  unsigned int v5; 
  __int64 v6; 
  bitarray<64> *p_hadPerkRedBlip; 
  float v8; 
  __int64 m_localClientNum; 
  CgEntitySystem *v10; 
  __int64 v11; 
  characterInfo_t *v12; 
  team_t v13; 
  unsigned int v14; 
  CgMLGSpectator *MLGSpectator; 
  team_t v16; 
  CompassActorMP *v17; 
  char HasPerk; 
  const dvar_t *v19; 
  char v20; 
  bool v21; 
  int flags; 
  unsigned int v23; 
  unsigned int v24; 
  const PartyData *GameParty; 
  int time; 
  int v27; 
  char *v28; 
  bool *i; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v31; 
  const char *PerkNameForCodeIndex; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  int pos; 
  CgStatic *v38; 
  team_t team; 
  char *v41; 
  __int64 v42; 
  vec3_t outOrigin; 
  __int64 v44[2]; 
  vec3_t v45; 
  __int64 v46; 
  char v47[256]; 

  v46 = -2i64;
  v1 = this;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2298, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v1->m_localClientNum);
  v38 = LocalClientStatics;
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2303, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  if ( CharacterInfo->infoValid )
  {
    team = CharacterInfo->team;
    if ( LocalClientGlobals->m_isMLGSpectator || CharacterInfo->team != TEAM_SPECTATOR )
    {
      memset_0(v47, 0, 0xF8ui64);
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_characterCount > 0xF8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2323, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetCharacterMaxCount() ) <= ( ( sizeof( *array_counter( clientInSnap ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetCharacterMaxCount()", "ARRAY_COUNT( clientInSnap )", ComCharacterLimits::ms_gameData.m_characterCount, 248) )
          __debugbreak();
      }
      v5 = 0;
      v41 = v47;
      v6 = 0i64;
      p_hadPerkRedBlip = (bitarray<64> *)&v1->m_compassActors[0].hadPerkRedBlip;
      v8 = *(float *)&v44[1];
      while ( 1 )
      {
        v42 = v6;
        pos = v5;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (int)v5 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        {
          v27 = 0;
          v28 = v47;
          for ( i = &v1->m_compassActors[0].wasSighted; ; i += 136 )
          {
            if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
              __debugbreak();
            if ( v27 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
              break;
            if ( !*v28 )
            {
              PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x2Eu);
              v31 = (unsigned int)PerkNetworkPriorityIndex;
              if ( PerkNetworkPriorityIndex >= 0 )
              {
                if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
                {
                  LODWORD(v36) = 64;
                  LODWORD(v35) = PerkNetworkPriorityIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v35, v36) )
                    __debugbreak();
                }
                *(_DWORD *)&i[4 * (v31 >> 5) - 41] &= ~(0x80000000 >> (v31 & 0x1F));
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
            ++v27;
            ++v28;
          }
          CgCompassSystemMP::UpdatePortableRadarPings(this);
          memset(&v42, 0, sizeof(v42));
          memset(v44, 0, 0xCui64);
          memset(&outOrigin, 0, sizeof(outOrigin));
          return;
        }
        m_localClientNum = v1->m_localClientNum;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v34) = v1->m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v34) )
            __debugbreak();
        }
        if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v34) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v33) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
        {
          LODWORD(v34) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v34) )
            __debugbreak();
        }
        v10 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
        if ( v5 >= 0x800 )
        {
          LODWORD(v34) = 2048;
          LODWORD(v33) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        v11 = (__int64)v10->m_entities + v6;
        if ( (*(_BYTE *)(v11 + 648) & 1) == 0 )
          goto LABEL_105;
        v12 = CgStatic::GetCharacterInfo(LocalClientStatics, *(_DWORD *)(v11 + 544));
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2337, ASSERT_TYPE_ASSERT, "(playerInfo)", (const char *)&queryFormat, "playerInfo") )
          __debugbreak();
        if ( !v12->infoValid )
          goto LABEL_104;
        *v41 = 1;
        v13 = v12->team;
        if ( v1->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
        {
          LODWORD(v34) = 2;
          LODWORD(v33) = v1->m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2348, ASSERT_TYPE_ASSERT, "(unsigned)( m_localClientNum ) < (unsigned)( 2 )", "m_localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        if ( v5 >= 0x100 )
        {
          LODWORD(v34) = 256;
          LODWORD(v33) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2349, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( m_compassActors ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( m_compassActors )\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        v14 = *(_DWORD *)(v11 + 544);
        p_hadPerkRedBlip[-1].array[0] = v14;
        if ( v14 == LocalClientGlobals->predictedPlayerState.clientNum )
          goto LABEL_51;
        if ( LocalClientGlobals->m_isMLGSpectator )
        {
          MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v1->m_localClientNum);
          v16 = team;
          if ( team == TEAM_SPECTATOR )
          {
            if ( v13 != CgMLGSpectator::GetTeam(MLGSpectator) )
              goto LABEL_71;
            goto LABEL_51;
          }
        }
        else
        {
          v21 = BG_IsAgentEntity((const entityState_t *)(v11 + 400)) && *(__int16 *)(v11 + 402) == LocalClientGlobals->predictedPlayerState.clientNum;
          v16 = team;
          if ( team == TEAM_ZERO )
          {
            if ( !v21 )
              goto LABEL_71;
            goto LABEL_51;
          }
        }
        if ( v13 != v16 )
        {
LABEL_71:
          v17 = (CompassActorMP *)&p_hadPerkRedBlip[-15];
          p_hadPerkRedBlip[-15].array[0] |= 1u;
          goto LABEL_52;
        }
LABEL_51:
        v17 = (CompassActorMP *)&p_hadPerkRedBlip[-15];
        p_hadPerkRedBlip[-15].array[0] &= ~1u;
LABEL_52:
        if ( (v17->flags & 1) != 0 )
        {
          HasPerk = BG_HasPerk(p_hadPerkRedBlip - 5, 0x2Eu);
          v19 = DCONST_DVARBOOL_compassEnemyRedBlipPerkFadeEnabled;
          if ( !DCONST_DVARBOOL_compassEnemyRedBlipPerkFadeEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnemyRedBlipPerkFadeEnabled") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v19);
          if ( v19->current.enabled && HasPerk != LOBYTE(p_hadPerkRedBlip->array[0]) )
          {
            LOBYTE(p_hadPerkRedBlip->array[0]) = HasPerk;
            if ( !HasPerk )
            {
              CompassActor_SetLastEnemyPosFromLastPos(v17);
              p_hadPerkRedBlip[-4].array[0] = p_hadPerkRedBlip[-14].array[0];
              p_hadPerkRedBlip[-2].array[0] = LocalClientGlobals->time;
            }
          }
          v5 = pos;
          v20 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, FIRING|0x20) && bitarray_base<bitarray<224>>::testBit(&LocalClientGlobals->predictedPlayerState.sightedEnemyPlayersMask, pos);
          if ( v20 != BYTE1(p_hadPerkRedBlip->array[0]) )
          {
            BYTE1(p_hadPerkRedBlip->array[0]) = v20;
            if ( !v20 )
            {
              CompassActor_SetLastEnemyPosFromLastPos(v17);
              p_hadPerkRedBlip[-4].array[0] = p_hadPerkRedBlip[-14].array[0];
              p_hadPerkRedBlip[-2].array[0] = LocalClientGlobals->time;
            }
          }
        }
        v17->flags |= 2u;
        p_hadPerkRedBlip[-5].array[0] = v12->perks.array[0];
        p_hadPerkRedBlip[-5].array[1] = v12->perks.array[1];
        if ( !BG_IsCharacterEntity((const entityState_t *)(v11 + 400)) )
          goto LABEL_103;
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v11 + 412), ACTIVE, 0x11u) )
        {
          v5 = pos;
LABEL_103:
          v1 = this;
LABEL_104:
          LocalClientStatics = v38;
          goto LABEL_105;
        }
        if ( *(_DWORD *)(v11 + 544) != pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 2435, ASSERT_TYPE_ASSERT, "(cent->nextState.clientNum == index)", (const char *)&queryFormat, "cent->nextState.clientNum == index") )
          __debugbreak();
        if ( CG_Entity_IsNoDraw((const LocalClientNum_t)this->m_localClientNum, (const entityState_t *)(v11 + 400), NULL) )
        {
          v5 = pos;
          goto LABEL_103;
        }
        if ( BG_HasPerk(p_hadPerkRedBlip - 5, 0x1Bu) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v11 + 412), GameModeFlagValues::ms_mpValue, 0x1Au) )
          v17->flags |= 8u;
        else
          v17->flags &= ~8u;
        flags = v17->flags;
        if ( (*(_WORD *)(v11 + 496) & 0x4000) != 0 )
          v23 = flags | 0x10;
        else
          v23 = flags & 0xFFFFFFEF;
        v17->flags = v23;
        v17->flags = v23 & 0xFFFFFFFD;
        CG_GetPoseOrigin((const cpose_t *)v11, &outOrigin);
        v24 = p_hadPerkRedBlip[-15].array[1];
        if ( v24 && v24 != LocalClientGlobals->time )
        {
          if ( LOBYTE(p_hadPerkRedBlip[-14].array[1]) )
          {
            CompassActor_GetLastPosValue(v17, &v45);
            v44[0] = *(_QWORD *)v45.v;
            memset(&v45, 0, sizeof(v45));
            *(float *)&p_hadPerkRedBlip[-4].array[1] = fsqrt((float)((float)((float)(*((float *)v44 + 1) - outOrigin.v[1]) * (float)(*((float *)v44 + 1) - outOrigin.v[1])) + (float)((float)(*(float *)v44 - outOrigin.v[0]) * (float)(*(float *)v44 - outOrigin.v[0]))) + (float)((float)(v8 - outOrigin.v[2]) * (float)(v8 - outOrigin.v[2]))) * (float)(1000.0 / (float)(LocalClientGlobals->time - p_hadPerkRedBlip[-15].array[1]));
            HIBYTE(p_hadPerkRedBlip->array[0]) = 1;
          }
          else
          {
            HIBYTE(p_hadPerkRedBlip->array[0]) = 0;
          }
        }
        v1 = this;
        CgCompassSystemMP::ActorUpdatePos(this, v17, &outOrigin, (const centity_t *)v11);
        p_hadPerkRedBlip[-15].array[1] = LocalClientGlobals->time;
        p_hadPerkRedBlip[-14].array[0] = *(_DWORD *)(v11 + 76);
        if ( pos < cls.maxClients && !(unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)this->m_localClientNum) )
        {
          GameParty = Live_GetGameParty();
          if ( CL_IsPlayerTalking(GameParty, pos) )
            p_hadPerkRedBlip[-2].array[1] = LocalClientGlobals->time + 50;
        }
        v5 = pos;
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v11 + 412), LEGACY_MANTLE|LEGACY_MOUNT|0x10) )
          goto LABEL_104;
        time = LocalClientGlobals->time;
        LocalClientStatics = v38;
        if ( (signed int)p_hadPerkRedBlip[-3].array[0] <= time )
          p_hadPerkRedBlip[-3].array[0] = time + 3000;
LABEL_105:
        ++v5;
        v6 = v42 + 760;
        ++v41;
        p_hadPerkRedBlip += 17;
      }
    }
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
  vec3_t *v7; 
  double v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  vec3_t outOrigin; 
  SecureVec3 out; 
  __int64 v15; 
  vec3_t forward; 

  v15 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1504, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) != 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1510, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1511, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    if ( !LocalClientGlobals->inKillCam && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&cent->nextState.lerp.eFlags, LEGACY_MANTLE|LEGACY_MOUNT|0x10) )
    {
      otherEntityNum = cent->nextState.otherEntityNum;
      if ( otherEntityNum != 2047 && otherEntityNum < ComCharacterLimits::GetCharacterMaxCount() )
      {
        if ( cent->nextState.eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1529, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_MISSILE)", (const char *)&queryFormat, "cent->nextState.eType == ET_MISSILE") )
          __debugbreak();
        Item = CgCompassSystem::GetItemInfo<CompassMissile>(this, cent->nextState.number, this->m_compassMissiles, 8u, &this->m_compassMissileLock);
        v7 = (vec3_t *)Item;
        if ( Item )
        {
          Item->lastUpdateTime = LocalClientGlobals->time;
          Item->ownerNum = otherEntityNum;
          v8 = AngleNormalize360(cent->pose.angles.v[1]);
          v7[2].v[0] = *(float *)&v8;
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_compassHellfireTargetSpot, "bg_compassHellfireTargetSpot") )
          {
            AngleVectors(&cent->pose.angles, &forward, NULL, NULL);
            CG_GetPoseOrigin(&cent->pose, &outOrigin);
            CG_CalcPlayerPos(&out, this->m_localClientNum);
            v9 = forward.v[2];
            if ( COERCE_FLOAT(LODWORD(forward.v[2]) & _xmm) < 0.001 )
            {
              v7[1].v[0] = outOrigin.v[0];
              v11 = outOrigin.v[1];
              v12 = outOrigin.v[2];
            }
            else
            {
              v10 = (float)(COERCE_FLOAT(LODWORD(out.z) ^ _xmm) + outOrigin.v[2]) * (float)(-1.0 / forward.v[2]);
              v7[1].v[0] = (float)(v10 * forward.v[0]) + outOrigin.v[0];
              v11 = (float)(v10 * forward.v[1]) + outOrigin.v[1];
              v12 = (float)(v9 * v10) + outOrigin.v[2];
            }
            v7[1].v[2] = v12;
            v7[1].v[1] = v11;
            memset(&outOrigin, 0, sizeof(outOrigin));
          }
          else
          {
            CG_GetPoseOrigin(&cent->pose, v7 + 1);
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
  const dvar_t *v13; 
  float value; 
  unsigned int pingIdx; 
  __int64 v16; 
  __int64 perkImmunityOverrideIndex; 
  __int64 v18; 

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
          LODWORD(v18) = 10;
          LODWORD(perkImmunityOverrideIndex) = v8->pingIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1927, ASSERT_TYPE_ASSERT, "(unsigned)( portableRadar->pingIdx ) < (unsigned)( COMPASS_MAX_PORTABLE_RADAR_PINGS )", "portableRadar->pingIdx doesn't index COMPASS_MAX_PORTABLE_RADAR_PINGS\n\t%i not in [0, %i)", perkImmunityOverrideIndex, v18) )
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
      v13 = DCONST_DVARFLT_bg_compassPortableRadarRadius;
      if ( !DCONST_DVARFLT_bg_compassPortableRadarRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      value = v13->current.value;
      v8->nextPing = integer + LocalClientGlobals->time;
      v8->pingIdx = CgCompassSystemMP::TriggerPortableRadarPing(this, LocalClientGlobals, origin, integer, value, 0x44u);
    }
  }
}

/*
==============
CgCompassSystemMP::UpdatePortableRadarPings
==============
*/
void CgCompassSystemMP::UpdatePortableRadarPings(CgCompassSystemMP *this)
{
  cg_t *LocalClientGlobals; 
  float v3; 
  int *p_startTime; 
  __int64 v5; 
  float v6; 
  float v7; 
  int v8; 
  int time; 
  float v10; 
  const dvar_t *v11; 
  int v12; 
  __int64 v13; 
  int *p_lastUpdateTime; 
  int v15; 
  int v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  CgSoundSystemMP *SoundSystemMP; 
  vec3_t localUsersPosition; 

  if ( this->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1810, ASSERT_TYPE_ASSERT, "(unsigned)( m_localClientNum ) < (unsigned)( 2 )", "m_localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1813, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->inKillCam )
  {
    v3 = LocalClientGlobals->predictedPlayerState.origin.v[2];
    p_startTime = &this->m_compassPortableRadarPingsList[0].startTime;
    v5 = 10i64;
    v6 = LocalClientGlobals->predictedPlayerState.origin.v[0];
    v7 = LocalClientGlobals->predictedPlayerState.origin.v[1];
    localUsersPosition.v[1] = v7;
    localUsersPosition.v[0] = v6;
    localUsersPosition.v[2] = v3;
    v21 = 10i64;
    do
    {
      v8 = p_startTime[1];
      time = LocalClientGlobals->time;
      if ( v8 + *p_startTime < time || time < *p_startTime )
      {
        *p_startTime = 0;
      }
      else
      {
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 1841, ASSERT_TYPE_ASSERT, "(pingInfo->duration)", (const char *)&queryFormat, "pingInfo->duration") )
          __debugbreak();
        v10 = (float)((float)(LocalClientGlobals->time - *p_startTime) / (float)p_startTime[1]) * *((float *)p_startTime + 2);
        CgCompassSystemMP::ActorSweep(this, LocalClientGlobals, (CompassPortableRadarPing *const)(p_startTime - 3), v10, &localUsersPosition);
        v11 = DCONST_DVARFLT_bg_compassPortableRadarMinVelocity;
        if ( !DCONST_DVARFLT_bg_compassPortableRadarMinVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassPortableRadarMinVelocity") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        if ( v11->current.value == 0.0 )
        {
          v12 = 0;
          SoundSystemMP = CgSoundSystemMP::GetSoundSystemMP((const LocalClientNum_t)LocalClientGlobals->localClientNum);
          v13 = 0i64;
          p_lastUpdateTime = &this->m_compassTurrets[0].lastUpdateTime;
          do
          {
            v15 = LocalClientGlobals->time;
            v16 = *p_lastUpdateTime;
            if ( *p_lastUpdateTime <= v15 )
            {
              if ( v16 )
              {
                if ( v16 >= v15 - 500 && !CG_CompassMP_TurretIsAlwaysVisibleAndValid(this->m_localClientNum, (CompassTurretMP *)(p_lastUpdateTime - 1)) )
                {
                  v17 = *((float *)p_lastUpdateTime + 3) - *((float *)p_startTime - 3);
                  v18 = *((float *)p_lastUpdateTime + 4) - *((float *)p_startTime - 2);
                  if ( fsqrt((float)(v18 * v18) + (float)(v17 * v17)) < v10 && !*((_BYTE *)p_startTime + v13 + 272) )
                  {
                    *((_BYTE *)p_startTime + v13 + 272) = 1;
                    CG_CompassMP_TurretRadarPingEnemy((CompassTurretMP *)(p_lastUpdateTime - 1), LocalClientGlobals->time);
                    v19 = 2.0 * *((float *)p_startTime + 2);
                    v20 = fsqrt((float)((float)(*((float *)p_lastUpdateTime + 4) - v7) * (float)(*((float *)p_lastUpdateTime + 4) - v7)) + (float)((float)(*((float *)p_lastUpdateTime + 3) - v6) * (float)(*((float *)p_lastUpdateTime + 3) - v6)));
                    if ( v20 < v19 )
                      CgSoundSystemMP::PlayEntitySoundAliasCompassPing(SoundSystemMP, v12, (const vec3_t *)p_lastUpdateTime + 1, v20 / v19);
                  }
                }
              }
            }
            else
            {
              *p_lastUpdateTime = 0;
            }
            ++v12;
            ++v13;
            p_lastUpdateTime += 14;
          }
          while ( v12 < 32 );
          v5 = v21;
        }
      }
      p_startTime += 79;
      v21 = --v5;
    }
    while ( v5 );
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
  __int128 v2; 
  StaticMlgCameras *v3; 
  char *v5; 
  const char *m_lastReadMapName; 
  unsigned __int64 v7; 
  char *v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  float *v12; 
  unsigned __int64 v13; 
  float *v14; 
  float v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  bool v18; 
  __int64 v19; 
  int v20; 
  const char *v21; 
  char *fmt; 
  char *v25; 
  char *v26; 
  char v27[128]; 
  char v28[128]; 
  char dest[128]; 
  __int128 v30; 

  v3 = this;
  v26 = (char *)Mem_Virtual_Alloc(0x200ui64, "WriteCamerasFile", TRACK_DEBUG);
  v5 = v26;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6558, ASSERT_TYPE_SANITY, "( fileBuffer )", (const char *)&queryFormat, "fileBuffer") )
    __debugbreak();
  m_lastReadMapName = v3->m_lastReadMapName;
  v7 = -1i64;
  v25 = v3->m_lastReadMapName;
  do
    ++v7;
  while ( m_lastReadMapName[v7] );
  if ( v7 >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6561, ASSERT_TYPE_SANITY, "( maxFileSize > mapNameSize )", (const char *)&queryFormat, "maxFileSize > mapNameSize") )
    __debugbreak();
  Core_strcpy(v26, v7 + 1, v3->m_lastReadMapName);
  v8 = &v26[v7];
  v9 = 512 - v7;
  v10 = 4 * (unsigned int)specificCameras;
  v11 = (unsigned int)(v10 + 4);
  if ( (unsigned int)v10 < v11 )
  {
    v12 = (float *)&v3->m_camAngles[v10];
    v30 = v2;
    v13 = v11 - (unsigned int)v10;
    v14 = &this->m_camOrigins[v10].v[2];
    do
    {
      v15 = *(v14 - 2);
      if ( v15 == 3.4028235e38 )
      {
        Com_sprintf(v8, v9, ",,");
        if ( v9 < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6576, ASSERT_TYPE_ASSERT, "(sizeLeft >= commasOffset)", (const char *)&queryFormat, "sizeLeft >= commasOffset") )
          __debugbreak();
        v9 -= 2i64;
        v16 = 2i64;
      }
      else
      {
        LODWORD(fmt) = (int)*v14;
        Com_sprintf<128>((char (*)[128])dest, "%d %d %d", (unsigned int)(int)v15, (unsigned int)(int)*(v14 - 1), fmt);
        v17 = -1i64;
        do
          v18 = dest[++v17] == 0;
        while ( !v18 );
        Com_sprintf<128>((char (*)[128])v28, "%d %d %d", (unsigned int)(int)*v12, (unsigned int)(int)v12[1], 0i64);
        v19 = -1i64;
        do
          v18 = v28[++v19] == 0;
        while ( !v18 );
        Com_sprintf(v8, v9, ",%s,%s", dest, v28);
        v16 = v19 + v17 + 2;
        if ( v9 < v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_mp.cpp", 6593, ASSERT_TYPE_ASSERT, "(sizeLeft >= offset)", (const char *)&queryFormat, "sizeLeft >= offset") )
          __debugbreak();
        v9 -= v16;
      }
      v8 += v16;
      v14 += 3;
      v12 += 2;
      --v13;
    }
    while ( v13 );
    m_lastReadMapName = v25;
    v5 = v26;
    v3 = this;
  }
  if ( specificCameras )
    Com_sprintf<128>((char (*)[128])v27, "mlgCameraEditor\\camerapositions_%s_%s.csv", m_lastReadMapName, v3->m_lastReadGametype);
  else
    Com_sprintf<128>((char (*)[128])v27, "mlgCameraEditor\\camerapositions_%s.csv", m_lastReadMapName);
  v20 = FS_WriteFile(v27, v5, 512 - v9);
  v21 = "Static cameras file %s saved";
  if ( !v20 )
    v21 = "Unable to save static cameras file %s. Read only ?";
  Com_PrintWarning(13, v21, v27);
  Mem_Virtual_Free(v5);
}

/*
==============
DrawText
==============
*/
void DrawText(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, const int fontHeight, const DrawTextPositionSettings *positionSettings, const GfxColor color, int maxLength, int renderFlags, int cursorPos, char cursorLetter, const Material *material, const Material *iconsMaterial, const FontDecodeStyle *decodeStyle, const FontGlowStyle *glowStyle)
{
  GfxCmdBufContext *v14; 
  unsigned int v17; 
  int IsRightToLeft; 
  GfxCmdBufSourceState *source; 
  float v20; 
  FontCacheFXFlags v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  float pixelAspect; 
  int v27; 
  unsigned int packed; 
  int v29; 
  int v30; 
  int v31; 
  unsigned int height; 
  float v33; 
  float v34; 
  char *v35; 
  bool v36; 
  unsigned int CharFromString; 
  unsigned int RandomLetter; 
  unsigned int v39; 
  unsigned __int8 v40; 
  char v41; 
  bool v42; 
  int v43; 
  GfxFont *FontHandleFromEnum; 
  bool v45; 
  int v46; 
  float v47; 
  float v48; 
  __int128 v49; 
  float v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  unsigned int v54; 
  int v55; 
  __int128 v57; 
  unsigned __int8 v58; 
  float v60; 
  float v61; 
  float v62; 
  GfxCmdBufSourceState **v63; 
  float v64; 
  const Material *v65; 
  int v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  const Material *v71; 
  FontCacheFXFlags v72; 
  int v73; 
  char *v74; 
  float v75; 
  float v76; 
  const Material *v77; 
  float v78; 
  float v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  unsigned __int8 v83; 
  char v84; 
  unsigned int v85; 
  __int64 v86; 
  GfxColor colorMyTeam; 
  __int128 v88; 
  float yScale; 
  bool Icon; 
  float advance; 
  unsigned int v92; 
  DrawTextMode mode; 
  float xScale; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  GfxCmdBufSourceState **p_source; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  DrawTextMode v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  __int128 v111; 
  __int128 v112; 
  __int128 v113; 
  int *resultRandomCharCount; 
  int *resultRandSeed; 
  int v116; 
  bool v117; 
  char v118; 
  unsigned int outColor; 
  int fontHeighta; 
  FontCacheFXFlags flags; 
  float outS0; 
  float outT0; 
  char *texta; 
  float v125; 
  int v126; 
  int v127; 
  float resultFirstRandCharFadePercent[3]; 
  GfxImage *background[2]; 
  int resultMaxLength; 
  float outT1; 
  float outS1; 
  char *v133; 
  GfxFont *fonta; 
  const Material *v135; 
  GfxCmdBufContext *v136; 
  int textHeight; 
  int v138; 
  GfxColor v139; 
  int seed; 
  GfxCmdBufContext v141; 
  const Material *v142; 
  FontGlowStyle *glowStylea; 
  int v144; 
  int v145; 
  int v146; 
  unsigned int v147; 
  unsigned int v148; 
  CachedGlyph outGlyph; 
  FontIconRenderInfo outIcon; 
  GfxFont *v151; 
  const Material *v152; 
  GfxCmdBufContext v153; 
  CachedGlyph v154; 

  v14 = gfxContext;
  v136 = gfxContext;
  glowStylea = (FontGlowStyle *)glowStyle;
  v152 = material;
  v135 = material;
  v142 = iconsMaterial;
  v138 = fontHeight;
  fonta = font;
  v139 = color;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3336, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3337, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3338, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !v142 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3340, ASSERT_TYPE_ASSERT, "(iconsMaterial)", (const char *)&queryFormat, "iconsMaterial") )
    __debugbreak();
  v17 = (unsigned int)renderFlags >> 12;
  LOBYTE(v17) = (renderFlags & 0x1000) != 0;
  v148 = v17;
  v147 = (unsigned int)renderFlags >> 13;
  IsRightToLeft = Language_IsRightToLeft();
  source = v14->source;
  v117 = IsRightToLeft != 0;
  v20 = 0.0;
  flags = FONT_CACHE_FX_NONE;
  v21 = FONT_CACHE_FX_NONE;
  LODWORD(v22) = 1;
  if ( glowStylea )
  {
    flags = FONT_CACHE_FX_DISTANCE_FIELD;
    v21 = FONT_CACHE_FX_DISTANCE_FIELD;
    RB_SetFontGlowStyleCodeConstants(source, glowStylea);
  }
  resultMaxLength = LODWORD(v20);
  outS0 = v20;
  outT0 = v22;
  resultFirstRandCharFadePercent[0] = 0.0;
  if ( SetupPulseFXVars(source, text, maxLength, renderFlags, decodeStyle, (int *)&outS0, (int *)&outT0, &resultMaxLength, resultFirstRandCharFadePercent) )
  {
    v23 = LODWORD(positionSettings->position3D.startPosition.v[0]);
    v24 = LODWORD(positionSettings->position3D.startPosition.v[1]);
    if ( positionSettings->mode )
      v25 = LODWORD(positionSettings->position3D.startPosition.v[2]);
    else
      v25 = 0i64;
    texta = (char *)text;
    pixelAspect = source->pixelAspect;
    resultFirstRandCharFadePercent[0] = pixelAspect;
    v27 = SEH_PrintStrlen(text);
    packed = color.packed;
    v29 = v27 - resultMaxLength;
    v30 = resultMaxLength - LODWORD(outS0);
    if ( v117 )
      v30 = v29;
    v144 = v29;
    v145 = v30;
    v31 = 0;
    v146 = LODWORD(outS0) + v30;
    seed = LODWORD(outT0);
    v151 = fonta;
    height = source->sceneViewport.height;
    v116 = 0;
    v127 = 0;
    v126 = 0;
    v33 = (float)(24 * height);
    v34 = 0.0;
    textHeight = (int)(float)(v33 * 0.00092592591);
    v125 = 0.0;
    fontHeighta = v138;
    if ( CL_IsRenderingSplitScreen() )
      textHeight = 2 * (int)(float)(v33 * 0.00092592591);
    v35 = texta;
    if ( *texta )
    {
      while ( 1 )
      {
        if ( v126 >= resultMaxLength )
        {
LABEL_139:
          v14 = v136;
          break;
        }
        if ( !v117 || (v118 = 0, v127 >= v144) )
          v118 = 1;
        v36 = v145 <= v127 && v127 < v146;
        v141.source = (GfxCmdBufSourceState *)v35;
        CharFromString = SEH_ReadCharFromString((const char **)&texta);
        v35 = texta;
        RandomLetter = CharFromString;
        v39 = CharFromString;
        if ( CharFromString != 94 || !texta || (v40 = *texta, (unsigned __int8)(*texta - 39) > 0x17u) )
        {
          LODWORD(background[0]) = 0;
          if ( v36 )
          {
            RandomLetter = R_FontGetRandomLetter(seed);
            v35 = texta;
            LODWORD(background[0]) = 64;
            seed = 1103515245 * seed + 12345;
          }
          if ( RandomLetter == 10 )
          {
            v31 = v116;
            if ( positionSettings->mode == POSITION_2D )
            {
              v23 = LODWORD(positionSettings->position3D.startPosition.v[0]);
              v88 = v24;
              *(float *)&v88 = *(float *)&v24 + (float)((float)fontHeighta * positionSettings->yScale);
              v24 = v88;
            }
            goto LABEL_138;
          }
          if ( RandomLetter == 13 )
          {
            v31 = v116;
            if ( positionSettings->mode == POSITION_2D )
              v23 = LODWORD(positionSettings->position3D.startPosition.v[0]);
            goto LABEL_138;
          }
          yScale = positionSettings->yScale;
          if ( RandomLetter == 9 )
            RandomLetter = 32;
          memset(&outGlyph, 0, sizeof(outGlyph));
          Icon = FontIcons_GetIcon(RandomLetter, fontHeighta, yScale, v147 & 1, &outIcon);
          if ( Icon )
          {
            advance = outIcon.advance;
          }
          else
          {
            R_GetCharacterGlyphWithFlags(fonta, fontHeighta, RandomLetter, &outGlyph, flags);
            if ( RandomLetter == v39 )
            {
              advance = (float)outGlyph.dx;
            }
            else
            {
              R_GetCharacterGlyphWithFlags(fonta, fontHeighta, v39, &v154, flags);
              advance = (float)v154.dx;
            }
          }
          if ( (_BYTE)v148 || !Icon )
          {
            v92 = packed;
            outColor = packed;
          }
          else if ( R_TryProcessKBMLetterColor(packed, RandomLetter, &outColor) )
          {
            v92 = outColor;
          }
          else
          {
            v92 = R_ProcessGPadLetterColor(packed, RandomLetter);
            outColor = v92;
          }
          if ( v36 )
          {
            HIBYTE(outColor) = (int)(float)((float)((float)HIBYTE(v92) * (float)SLODWORD(background[0])) * 0.0039215689);
            v92 = outColor;
          }
          mode = positionSettings->mode;
          xScale = positionSettings->xScale;
          v95 = positionSettings->yScale;
          if ( Icon )
          {
            v96 = xScale * outIcon.xOffset;
            v97 = v95 * outIcon.yOffset;
            if ( mode )
              goto LABEL_118;
LABEL_124:
            v98 = positionSettings->position3D.xDirection.v[0];
            v104 = (float)(v97 + *(float *)&v24) - positionSettings->position3D.startPosition.v[1];
            v105 = (float)(v96 + *(float *)&v23) - positionSettings->position3D.startPosition.v[0];
            v99 = (float)((float)(v105 * positionSettings->position3D.startPosition.v[2]) + positionSettings->position3D.startPosition.v[0]) - (float)((float)(v104 * v98) / pixelAspect);
            v100 = (float)((float)(v105 * v98) * resultFirstRandCharFadePercent[0]) + (float)((float)(v104 * positionSettings->position3D.startPosition.v[2]) + positionSettings->position3D.startPosition.v[1]);
          }
          else
          {
            v97 = (float)outGlyph.y0 * v95;
            v96 = (float)outGlyph.x0 * xScale;
            if ( mode == POSITION_2D )
              goto LABEL_124;
LABEL_118:
            v98 = positionSettings->position3D.xDirection.v[0];
            v99 = (float)((float)(v96 * v98) + *(float *)&v23) + (float)(v97 * positionSettings->position3D.yDirection.v[0]);
            v100 = (float)((float)(v96 * positionSettings->position3D.xDirection.v[1]) + *(float *)&v24) + (float)(v97 * positionSettings->position3D.yDirection.v[1]);
            *(float *)&v153.state = (float)((float)(v96 * positionSettings->position3D.xDirection.v[2]) + *(float *)&v25) + (float)(v97 * positionSettings->position3D.yDirection.v[2]);
          }
          *(float *)&v153.source = v99;
          *((float *)&v153.source + 1) = v100;
          if ( v118 )
          {
            ++v126;
            if ( Icon )
            {
              p_source = &v136->source;
              *(GfxCmdBufContext *)background = *v136;
              RB_EndSurfaceIfNeeded((GfxCmdBufContext *)background);
              R_SetCodeImageTextureInternal(*p_source, 4u, outIcon.image, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(3724)");
              outS1 = FLOAT_1_0;
              outT1 = FLOAT_1_0;
              outS0 = 0.0;
              outT0 = 0.0;
              Image_Process2DTextureCoordsForAtlasing(outIcon.image, &outS0, &outS1, &outT0, &outT1);
              if ( positionSettings->mode )
              {
                DrawText_Generate3DCharVerts((const vec3_t *)&v153, positionSettings, outIcon.width, outIcon.height, (vec3_t (*)[4])&v154);
                *(_OWORD *)background = *(_OWORD *)p_source;
                RB_Draw3DQuadPicST((GfxCmdBufContext *)background, v142, (const vec3_t (*)[4])&v154, outS0, outT0, outS1, outT1, (GfxColor)outColor);
              }
              else
              {
                v102 = outIcon.height * positionSettings->yScale;
                v103 = positionSettings->position3D.xDirection.v[0];
                *(_OWORD *)background = *(_OWORD *)p_source;
                RB_DrawStretchPicRotate((GfxCmdBufContext *)background, v142, v99, v100, outIcon.width * positionSettings->xScale, v102, outS0, outT0, outS1, outT1, v103, positionSettings->position3D.startPosition.v[2], outColor, GFX_PRIM_STATS_HUD);
              }
            }
            else if ( mode )
            {
              DrawText_Generate3DCharVerts((const vec3_t *)&v153, positionSettings, (float)outGlyph.pixelWidth, (float)outGlyph.pixelHeight, (vec3_t (*)[4])&v154);
              p_source = &v136->source;
              *(GfxCmdBufContext *)background = *v136;
              RB_Draw3DQuadPicST((GfxCmdBufContext *)background, v135, (const vec3_t (*)[4])&v154, outGlyph.s0, outGlyph.t0, outGlyph.s1, outGlyph.t1, (GfxColor)outColor);
            }
            else
            {
              p_source = &v136->source;
              *(GfxCmdBufContext *)background = *v136;
              RB_DrawStretchPicRotate((GfxCmdBufContext *)background, v135, v99, v100, (float)outGlyph.pixelWidth * xScale, (float)outGlyph.pixelHeight * v95, outGlyph.s0, outGlyph.t0, outGlyph.s1, outGlyph.t1, v98, positionSettings->position3D.startPosition.v[2], v92, GFX_PRIM_STATS_HUD);
            }
          }
          else
          {
            p_source = &v136->source;
          }
          v106 = positionSettings->mode;
          if ( v106 == POSITION_2D && (renderFlags & 2) != 0 && v116 == cursorPos )
          {
            *(_OWORD *)background = *(_OWORD *)p_source;
            RB_DrawCursor((GfxCmdBufContext *)background, v99, *(float *)&v24, (float)fontHeighta, color, cursorLetter == 95, outGlyph.pixelWidth);
            v106 = positionSettings->mode;
          }
          v108 = (float)((float)positionSettings->tracking + advance) * positionSettings->xScale;
          v107 = v108;
          if ( v106 )
          {
            v109 = v108 * positionSettings->position3D.xDirection.v[1];
            v110 = v108 * positionSettings->position3D.xDirection.v[2];
            v107 = v108 * positionSettings->position3D.xDirection.v[0];
            v111 = v24;
            *(float *)&v111 = *(float *)&v24 + v109;
            v24 = v111;
            v112 = v25;
            *(float *)&v112 = *(float *)&v25 + v110;
            v25 = v112;
          }
          v35 = texta;
          ++v127;
          v34 = v125;
          v31 = (_DWORD)texta - LODWORD(v141.source) + v116;
          v113 = v23;
          *(float *)&v113 = *(float *)&v23 + v107;
          v23 = v113;
          goto LABEL_137;
        }
        if ( v40 == 60 )
        {
          v133 = texta + 1;
          v41 = texta[1];
          v42 = v41 == 33;
          if ( v41 == 33 )
          {
            ++v116;
            ++texta;
            v133 = v35 + 2;
          }
          v43 = 0;
          FontHandleFromEnum = UI_GetFontHandleFromEnum(7);
          v45 = v41 == 33;
          fonta = FontHandleFromEnum;
          v46 = textHeight;
          packed = -1906461;
          fontHeighta = textHeight;
          if ( !v45 )
            packed = -16777216;
          if ( v126 > 2 )
          {
            v48 = (float)R_TextWidth(" ", 1, FontHandleFromEnum, textHeight) * positionSettings->xScale;
            v47 = v48;
            if ( positionSettings->mode )
            {
              v50 = v48 * positionSettings->position3D.xDirection.v[1];
              v51 = v23;
              *(float *)&v51 = *(float *)&v23 + (float)(v47 * positionSettings->position3D.xDirection.v[0]);
              v23 = v51;
              v52 = v25;
              *(float *)&v52 = *(float *)&v25 + (float)(v47 * positionSettings->position3D.xDirection.v[2]);
              v25 = v52;
              v53 = v24;
              *(float *)&v53 = *(float *)&v24 + v50;
              v24 = v53;
            }
            else
            {
              v49 = v23;
              *(float *)&v49 = *(float *)&v23 + v47;
              v23 = v49;
            }
          }
          if ( *v133 )
          {
            do
            {
              v54 = SEH_ReadCharFromString((const char **)&v133);
              if ( v54 == 94 )
              {
                if ( *v133 == 62 )
                {
                  v55 = R_TextWidth(texta + 1, v43, fonta, v46);
                  if ( v55 > 0 )
                  {
                    background[0] = NULL;
                    if ( FontIcons_GetPCKeyImages(background, v42) )
                    {
                      v57 = 0i64;
                      *(float *)&v57 = (float)v46;
                      _XMM6 = v57;
                      if ( (float)v55 < *(float *)&v57 )
                      {
                        v34 = (float)(*(float *)&v57 - (float)v55) * 0.5;
                        v125 = v34;
                      }
                      v58 = v139.array[3];
                      __asm { vmaxss  xmm10, xmm6, xmm1 }
                      v60 = *(float *)&v23 - v34;
                      v61 = (float)((float)(_mm_cvtepi32_ps((__m128i)background[0]->width).m128_f32[0] * 0.125) / _mm_cvtepi32_ps((__m128i)background[0]->height).m128_f32[0]) * *(float *)&v57;
                      v62 = *(float *)&v24 - (float)(*(float *)&v57 * positionSettings->yScale);
                      if ( v139.array[3] )
                      {
                        v63 = &v136->source;
                        v141 = *v136;
                        RB_EndSurfaceIfNeeded(&v141);
                        R_SetCodeImageTextureInternal(*v63, 4u, background[0], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(3519)");
                        v64 = *(float *)&_XMM6 * positionSettings->yScale;
                        v65 = v142;
                        v141 = *(GfxCmdBufContext *)v63;
                        v66 = (v58 << 24) | 0xFFFFFF;
                        RB_DrawStretchPic(&v141, v142, v60, v62, v61 * positionSettings->xScale, v64, 0.0, 0.0, 0.125, 1.0, v66, GFX_PRIM_STATS_HUD);
                        v67 = *(float *)&_XMM6 * positionSettings->yScale;
                        v68 = v61 * positionSettings->xScale;
                        v141 = *(GfxCmdBufContext *)v63;
                        RB_DrawStretchPic(&v141, v65, (float)((float)(*(float *)&_XMM10 - v61) * positionSettings->xScale) + v60, v62, v68, v67, 0.875, 0.0, 1.0, 1.0, v66, GFX_PRIM_STATS_HUD);
                        v141 = *(GfxCmdBufContext *)v63;
                        RB_EndSurfaceIfNeeded(&v141);
                        v69 = *(float *)&_XMM6 * positionSettings->yScale;
                        v70 = v61 * positionSettings->xScale;
                        v141 = *(GfxCmdBufContext *)v63;
                        RB_DrawStretchPic(&v141, v65, v70 + v60, v62, (float)(*(float *)&_XMM10 - (float)(v61 * 2.0)) * positionSettings->xScale, v69, 0.125, 0.0, 0.875, 1.0, v66, GFX_PRIM_STATS_HUD);
                      }
                      v34 = v125;
                    }
                  }
                  break;
                }
              }
              else if ( v54 > 0x1F || (v73 = -1073732608, !_bittest(&v73, v54)) )
              {
                v74 = v133;
                ++v43;
                continue;
              }
              v74 = ++v133;
            }
            while ( *v74 );
          }
          v71 = v135;
          if ( glowStylea )
            v71 = rgp.fontMaterial[0];
          v72 = FONT_CACHE_FX_NONE;
          v135 = v71;
          if ( !glowStylea )
            v72 = v21;
          flags = v72;
        }
        else
        {
          if ( v40 == 62 )
          {
            packed = color.packed;
            v76 = v34 * positionSettings->xScale;
            v75 = v76;
            fonta = v151;
            fontHeighta = v138;
            if ( glowStylea )
              v21 = FONT_CACHE_FX_DISTANCE_FIELD;
            v77 = v152;
            if ( !glowStylea )
              v77 = v135;
            v45 = positionSettings->mode == POSITION_2D;
            v135 = v77;
            flags = v21;
            if ( !v45 )
            {
              v78 = v76 * positionSettings->position3D.xDirection.v[1];
              v79 = v76 * positionSettings->position3D.xDirection.v[2];
              v75 = v76 * positionSettings->position3D.xDirection.v[0];
              v80 = v24;
              *(float *)&v80 = *(float *)&v24 + v78;
              v24 = v80;
              v81 = v25;
              *(float *)&v81 = *(float *)&v25 + v79;
              v25 = v81;
            }
            v35 = ++texta;
            v31 = v116 + 2;
            v125 = 0.0;
            v34 = 0.0;
            v82 = v23;
            *(float *)&v82 = *(float *)&v23 + v75;
            v23 = v82;
            goto LABEL_137;
          }
          v83 = ColorIndex(v40);
          if ( v83 == ColorIndex(0x37u) )
          {
            packed = color.packed;
          }
          else
          {
            v84 = *texta;
            v85 = ColorIndex(*texta);
            if ( v85 >= 0x11 )
            {
              switch ( v84 )
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
              v86 = v85 + 17 * r_colorTable->current.integer;
              if ( (unsigned int)v86 >= 0x22 )
              {
                LODWORD(resultRandSeed) = 34;
                LODWORD(resultRandomCharCount) = v85 + 17 * r_colorTable->current.integer;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3061, ASSERT_TYPE_ASSERT, "(unsigned)( tableIndex ) < (unsigned)( ( sizeof( *array_counter( color_table ) ) + 0 ) )", "tableIndex doesn't index ARRAY_COUNT( color_table )\n\t%i not in [0, %i)", resultRandomCharCount, resultRandSeed) )
                  __debugbreak();
              }
              colorMyTeam = color_table[v86];
            }
            packed = colorMyTeam.array[0] | ((colorMyTeam.array[1] | (((v139.array[3] << 8) | colorMyTeam.array[2]) << 8)) << 8);
          }
        }
        v35 = ++texta;
        v31 = v116 + 2;
LABEL_137:
        v116 = v31;
LABEL_138:
        pixelAspect = resultFirstRandCharFadePercent[0];
        v21 = flags;
        if ( !*v35 )
          goto LABEL_139;
      }
    }
    if ( positionSettings->mode == POSITION_2D && (renderFlags & 2) != 0 && v31 == cursorPos )
    {
      v153 = *v14;
      RB_DrawCursor(&v153, *(float *)&v23, *(float *)&v24, (float)fontHeighta, color, 0, 0);
    }
    if ( glowStylea )
    {
      v153 = *v14;
      RB_EndSurfaceIfNeeded(&v153);
    }
  }
}

