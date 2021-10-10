/*
==============
CgCompassSystemBR::DoBRCircleOmnvarsExist
==============
*/

bool __fastcall CgCompassSystemBR::DoBRCircleOmnvarsExist(CgCompassSystemBR *this)
{
  return ?DoBRCircleOmnvarsExist@CgCompassSystemBR@@IEBA_NXZ(this);
}

/*
==============
CgCompassSystemBR::InitCircleOmnvars
==============
*/

void __fastcall CgCompassSystemBR::InitCircleOmnvars(CgCompassSystemBR *this)
{
  ?InitCircleOmnvars@CgCompassSystemBR@@QEAAXXZ(this);
}

/*
==============
CgCompassSystemBR::DrawBRPlaneTravelLine
==============
*/

void __fastcall CgCompassSystemBR::DrawBRPlaneTravelLine(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawBRPlaneTravelLine@CgCompassSystemBR@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemBR::IsObjectiveFiltered
==============
*/

bool __fastcall CgCompassSystemBR::IsObjectiveFiltered(CgCompassSystemBR *this, CompassType compassType, ObjectiveBackground background)
{
  return ?IsObjectiveFiltered@CgCompassSystemBR@@UEBA_NW4CompassType@@W4ObjectiveBackground@@@Z(this, compassType, background);
}

/*
==============
CgCompassSystemBR::ComputeEnemyCompassColor
==============
*/

void __fastcall CgCompassSystemBR::ComputeEnemyCompassColor(CgCompassSystemBR *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *fadedColor)
{
  ?ComputeEnemyCompassColor@CgCompassSystemBR@@UEBAXPEBUclientInfo_t@@0AEATvec4_t@@@Z(this, myClientInfo, clientInfo, fadedColor);
}

/*
==============
CgCompassSystemBR::DrawBRBoundingCircles
==============
*/

void __fastcall CgCompassSystemBR::DrawBRBoundingCircles(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawBRBoundingCircles@CgCompassSystemBR@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemBR::PushStencilRectAndMapMask
==============
*/

void __fastcall CgCompassSystemBR::PushStencilRectAndMapMask(CgCompassSystemBR *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, GfxImage *mapMask, LUIElement *element)
{
  ?PushStencilRectAndMapMask@CgCompassSystemBR@@AEAAXW4CompassType@@PEBUrectDef_s@@1PEAUGfxImage@@PEAULUIElement@@@Z(this, compassType, parentRect, rect, mapMask, element);
}

/*
==============
CgCompassSystemBR::DoBRAdventureSearchAreaOmnvarsExist
==============
*/

bool __fastcall CgCompassSystemBR::DoBRAdventureSearchAreaOmnvarsExist(CgCompassSystemBR *this)
{
  return ?DoBRAdventureSearchAreaOmnvarsExist@CgCompassSystemBR@@IEBA_NXZ(this);
}

/*
==============
CgCompassSystemBR::CgCompassSystemBR
==============
*/

void __fastcall CgCompassSystemBR::CgCompassSystemBR(CgCompassSystemBR *this, const LocalClientNum_t localClientNum)
{
  ??0CgCompassSystemBR@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgCompassSystemBR::GetDangerCircleInfo
==============
*/

bool __fastcall CgCompassSystemBR::GetDangerCircleInfo(CgCompassSystemBR *this, vec2_t *outPosition, float *outRadius, bool *outIsMoving)
{
  return ?GetDangerCircleInfo@CgCompassSystemBR@@QEAA_NAEATvec2_t@@AEAMAEA_N@Z(this, outPosition, outRadius, outIsMoving);
}

/*
==============
CgCompassSystemBR::GetLocalClientTeam
==============
*/

team_t __fastcall CgCompassSystemBR::GetLocalClientTeam(CgCompassSystemBR *this)
{
  return ?GetLocalClientTeam@CgCompassSystemBR@@AEBA?AW4team_t@@XZ(this);
}

/*
==============
CgCompassSystemBR::GetRange
==============
*/

double __fastcall CgCompassSystemBR::GetRange(CgCompassSystemBR *this)
{
  double result; 

  *(float *)&result = ?GetRange@CgCompassSystemBR@@UEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystemBR::DrawAdventureSearchArea
==============
*/

void __fastcall CgCompassSystemBR::DrawAdventureSearchArea(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawAdventureSearchArea@CgCompassSystemBR@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemBR::InitCompass
==============
*/

void __fastcall CgCompassSystemBR::InitCompass(CgCompassSystemBR *this)
{
  ?InitCompass@CgCompassSystemBR@@QEAAXXZ(this);
}

/*
==============
CgCompassSystemBR::IsVehicleMini
==============
*/

bool __fastcall CgCompassSystemBR::IsVehicleMini(CgCompassSystemBR *this, CompassType compassType)
{
  return ?IsVehicleMini@CgCompassSystemBR@@UEBA_NW4CompassType@@@Z(this, compassType);
}

/*
==============
CgCompassSystemBR::DrawItemsLayer
==============
*/

void __fastcall CgCompassSystemBR::DrawItemsLayer(CgCompassSystemBR *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawItemsLayer@CgCompassSystemBR@@UEAAXPEBUMinimapOptions@@PEBUrectDef_s@@1AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, minimapOptions, parentRect, rect, color, element, luaVM);
}

/*
==============
CgCompassSystemBR::ComputeFriendlyCompassColor
==============
*/

void __fastcall CgCompassSystemBR::ComputeFriendlyCompassColor(CgCompassSystemBR *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *fadedColor)
{
  ?ComputeFriendlyCompassColor@CgCompassSystemBR@@UEBAXPEBUclientInfo_t@@0AEATvec4_t@@@Z(this, myClientInfo, clientInfo, fadedColor);
}

/*
==============
CgCompassSystemBR::SetCurrentFilters
==============
*/

void __fastcall CgCompassSystemBR::SetCurrentFilters(CgCompassSystemBR *this, bitarray<32> filters)
{
  ?SetCurrentFilters@CgCompassSystemBR@@UEAAXV?$bitarray@$0CA@@@@Z(this, filters);
}

/*
==============
CgCompassSystemBR::InitCompassColors
==============
*/

void __fastcall CgCompassSystemBR::InitCompassColors(CgCompassSystemBR *this)
{
  ?InitCompassColors@CgCompassSystemBR@@MEAAXXZ(this);
}

/*
==============
CgCompassSystemBR::DrawScramblers
==============
*/

void __fastcall CgCompassSystemBR::DrawScramblers(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  ?DrawScramblers@CgCompassSystemBR@@UEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAUGfxImage@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, mapMask, element, luaVM);
}

/*
==============
CgCompassSystemBR::DrawBRSelectionCursor
==============
*/

void __fastcall CgCompassSystemBR::DrawBRSelectionCursor(CgCompassSystemBR *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, TacMapCursorStyle cursorStyle, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawBRSelectionCursor@CgCompassSystemBR@@QEBAXW4CompassType@@PEBUrectDef_s@@1W4TacMapCursorStyle@@AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, parentRect, rect, cursorStyle, color, element, luaVM);
}

/*
==============
CgCompassSystemBR::DrawBRBoundingCircleTravelLine
==============
*/

void __fastcall CgCompassSystemBR::DrawBRBoundingCircleTravelLine(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawBRBoundingCircleTravelLine@CgCompassSystemBR@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemBR::IsItemFiltered
==============
*/

bool __fastcall CgCompassSystemBR::IsItemFiltered(CgCompassSystemBR *this, TacMapFilterFlags flag)
{
  return ?IsItemFiltered@CgCompassSystemBR@@UEBA_NW4TacMapFilterFlags@@@Z(this, flag);
}

/*
==============
CgCompassSystemBR::InitAdventureSearchAreaOmnvars
==============
*/

void __fastcall CgCompassSystemBR::InitAdventureSearchAreaOmnvars(CgCompassSystemBR *this)
{
  ?InitAdventureSearchAreaOmnvars@CgCompassSystemBR@@QEAAXXZ(this);
}

/*
==============
CgCompassSystemBR::GetPlayerCompassColor
==============
*/

void __fastcall CgCompassSystemBR::GetPlayerCompassColor(CgCompassSystemBR *this, vec4_t *color, const cg_t *cgameGlob)
{
  ?GetPlayerCompassColor@CgCompassSystemBR@@MEBAXAEATvec4_t@@PEBVcg_t@@@Z(this, color, cgameGlob);
}

/*
==============
CgCompassSystemBR::GetPlayerCompassMaterial
==============
*/

void __fastcall CgCompassSystemBR::GetPlayerCompassMaterial(CgCompassSystemBR *this, const cg_t *cgameGlob, const GfxImage **outMaterial)
{
  ?GetPlayerCompassMaterial@CgCompassSystemBR@@UEBAXPEBVcg_t@@PEAPEBUGfxImage@@@Z(this, cgameGlob, outMaterial);
}

/*
==============
CgCompassSystemBR::DrawBRMapCircles
==============
*/

void __fastcall CgCompassSystemBR::DrawBRMapCircles(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, GfxImage *mapMask, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawBRMapCircles@CgCompassSystemBR@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MPEAUGfxImage@@AEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, mapMask, color, element, luaVM);
}

/*
==============
CgCompassSystemBR::IsVehicleFiltered
==============
*/

bool __fastcall CgCompassSystemBR::IsVehicleFiltered(CgCompassSystemBR *this, CompassType compassType, const centity_t *cent)
{
  return ?IsVehicleFiltered@CgCompassSystemBR@@UEBA_NW4CompassType@@PEBUcentity_t@@@Z(this, compassType, cent);
}

/*
==============
CgCompassSystemBR::PopStencilRectAndMapMask
==============
*/

void __fastcall CgCompassSystemBR::PopStencilRectAndMapMask(CgCompassSystemBR *this, CompassType compassType, GfxImage *mapMask)
{
  ?PopStencilRectAndMapMask@CgCompassSystemBR@@AEAAXW4CompassType@@PEAUGfxImage@@@Z(this, compassType, mapMask);
}

/*
==============
CgCompassSystemBR::IsObjectiveMini
==============
*/

bool __fastcall CgCompassSystemBR::IsObjectiveMini(CgCompassSystemBR *this, CompassType compassType, ObjectiveBackground background)
{
  return ?IsObjectiveMini@CgCompassSystemBR@@UEBA_NW4CompassType@@W4ObjectiveBackground@@@Z(this, compassType, background);
}

/*
==============
CgCompassSystemBR::InitPlaneTravelLineOmnvars
==============
*/

void __fastcall CgCompassSystemBR::InitPlaneTravelLineOmnvars(CgCompassSystemBR *this)
{
  ?InitPlaneTravelLineOmnvars@CgCompassSystemBR@@QEAAXXZ(this);
}

/*
==============
CgCompassSystemBR::DoBRPlaneTravelLineOmnvarsExist
==============
*/

bool __fastcall CgCompassSystemBR::DoBRPlaneTravelLineOmnvarsExist(CgCompassSystemBR *this)
{
  return ?DoBRPlaneTravelLineOmnvarsExist@CgCompassSystemBR@@IEBA_NXZ(this);
}

/*
==============
CgCompassSystemBR::DrawCalloutMarkerPingPrompt
==============
*/

void __fastcall CgCompassSystemBR::DrawCalloutMarkerPingPrompt(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawCalloutMarkerPingPrompt@CgCompassSystemBR@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemBR::GetObjectiveCompassColor
==============
*/

void __fastcall CgCompassSystemBR::GetObjectiveCompassColor(CgCompassSystemBR *this, const vec3_t *origin, ObjectiveSide side, ObjectiveSide progressSide, ObjectiveBackground background, int entNum, vec4_t *newColor, vec4_t *backgroundColor, const vec4_t *color)
{
  ?GetObjectiveCompassColor@CgCompassSystemBR@@UEBAXAEBTvec3_t@@W4ObjectiveSide@@1W4ObjectiveBackground@@HAEATvec4_t@@3AEBT5@@Z(this, origin, side, progressSide, background, entNum, newColor, backgroundColor, color);
}

/*
==============
CgCompassSystemBR::GetDrawnItemScalerRadiusAndMultiplier
==============
*/

void __fastcall CgCompassSystemBR::GetDrawnItemScalerRadiusAndMultiplier(CgCompassSystemBR *this, LocationSelectorType locationSelectorType, float *outSelectorRadius, float *outLocationSelectorSizeMultiplier)
{
  ?GetDrawnItemScalerRadiusAndMultiplier@CgCompassSystemBR@@UEBAXW4LocationSelectorType@@AEAM1@Z(this, locationSelectorType, outSelectorRadius, outLocationSelectorSizeMultiplier);
}

/*
==============
CgCompassSystemBR::SetMapCircleColorOverrideFromOwnerInfluence
==============
*/

void __fastcall CgCompassSystemBR::SetMapCircleColorOverrideFromOwnerInfluence(CgCompassSystemBR *this, const LocalClientNum_t localClientNum, const characterInfo_t *const localPlayer, const __int16 ownerEntNum, vec4_t *out_circleColor)
{
  ?SetMapCircleColorOverrideFromOwnerInfluence@CgCompassSystemBR@@IEAAXW4LocalClientNum_t@@QEBUcharacterInfo_t@@FAEATvec4_t@@@Z(this, localClientNum, localPlayer, ownerEntNum, out_circleColor);
}

/*
==============
CgCompassSystemBR::GetBRBoundingCircleInfo
==============
*/

bool __fastcall CgCompassSystemBR::GetBRBoundingCircleInfo(CgCompassSystemBR *this, int circleIndex, int *outStartTime, int *outDuration, vec2_t *outCurrentPosition, float *outCurrentRadius)
{
  return ?GetBRBoundingCircleInfo@CgCompassSystemBR@@IEBA_NHAEAH0AEATvec2_t@@AEAM@Z(this, circleIndex, outStartTime, outDuration, outCurrentPosition, outCurrentRadius);
}

/*
==============
CgCompassSystemBR::GetObjectiveBackgroundImage
==============
*/

const GfxImage *__fastcall CgCompassSystemBR::GetObjectiveBackgroundImage(CgCompassSystemBR *this, ObjectiveBackground background, int elevation)
{
  return ?GetObjectiveBackgroundImage@CgCompassSystemBR@@UEBAPEBUGfxImage@@W4ObjectiveBackground@@H@Z(this, background, elevation);
}

/*
==============
CgCompassSystemBR::DrawAreaCallouts
==============
*/

void __fastcall CgCompassSystemBR::DrawAreaCallouts(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawAreaCallouts@CgCompassSystemBR@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemBR::CgCompassSystemBR
==============
*/
void CgCompassSystemBR::CgCompassSystemBR(CgCompassSystemBR *this, const LocalClientNum_t localClientNum)
{
  CgCompassSystemMP::CgCompassSystemMP(this, localClientNum);
  this->__vftable = (CgCompassSystemBR_vtbl *)&CgCompassSystemBR::`vftable';
}

/*
==============
CgCompassSystemBR::ComputeEnemyCompassColor
==============
*/
void CgCompassSystemBR::ComputeEnemyCompassColor(CgCompassSystemBR *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *fadedColor)
{
  CgGlobalsMP *LocalClientGlobals; 

  LocalClientGlobals = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CgCompassSystemMP::GetEnemyCompassColor(this, fadedColor, LocalClientGlobals);
  LUI_CoD_GameMP_GetBrEnemyColor(clientInfo->clientNum, fadedColor);
}

/*
==============
CgCompassSystemBR::ComputeFriendlyCompassColor
==============
*/
void CgCompassSystemBR::ComputeFriendlyCompassColor(CgCompassSystemBR *this, const clientInfo_t *myClientInfo, const clientInfo_t *clientInfo, vec4_t *fadedColor)
{
  CgGlobalsMP *LocalClientGlobals; 

  if ( CG_GameInterface_PlayingBRTDM() )
  {
    CgCompassSystemMP::ComputeFriendlyCompassColor(this, myClientInfo, clientInfo, fadedColor);
  }
  else if ( (clientInfo->game_extrainfo & 7) != 0 )
  {
    LUI_CoD_GameMP_GetBrColorForClientNum(clientInfo->clientNum, fadedColor);
  }
  else
  {
    LocalClientGlobals = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    CgCompassSystemMP::GetFriendlyCompassColor(this, fadedColor, LocalClientGlobals);
  }
}

/*
==============
CgCompassSystemBR::DoBRAdventureSearchAreaOmnvarsExist
==============
*/
bool CgCompassSystemBR::DoBRAdventureSearchAreaOmnvarsExist(CgCompassSystemBR *this)
{
  return this->m_uiBRAdventureSearchAreaOmnvarIndex != -1;
}

/*
==============
CgCompassSystemBR::DoBRCircleOmnvarsExist
==============
*/
bool CgCompassSystemBR::DoBRCircleOmnvarsExist(CgCompassSystemBR *this)
{
  return this->m_uiBRCircleStartEntityOmnvarIndex[0] != -1;
}

/*
==============
CgCompassSystemBR::DoBRPlaneTravelLineOmnvarsExist
==============
*/
bool CgCompassSystemBR::DoBRPlaneTravelLineOmnvarsExist(CgCompassSystemBR *this)
{
  return this->m_uiBRInfilledOmnvarIndex != -1 && this->m_uiBRPlanePathStartXOmnvarIndex != -1 && this->m_uiBRPlanePathStartYOmnvarIndex != -1 && this->m_uiBRPlanePathEndXOmnvarIndex != -1 && this->m_uiBRPlanePathEndYOmnvarIndex != -1;
}

/*
==============
CgCompassSystemBR::DrawAdventureSearchArea
==============
*/
void CgCompassSystemBR::DrawAdventureSearchArea(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  double IconFadeAlpha; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  int Integer; 
  centity_t *Entity; 
  vec3_t outOrigin; 
  __int64 v19; 
  vec2_t position; 
  vec4_t v21; 

  v19 = -2i64;
  if ( this->m_uiBRAdventureSearchAreaOmnvarIndex != -1 )
  {
    IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
    if ( (float)(*(float *)&IconFadeAlpha * color->v[3]) != 0.0 )
    {
      Def = BG_Omnvar_GetDef(this->m_uiBRAdventureSearchAreaOmnvarIndex);
      Data = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRAdventureSearchAreaOmnvarIndex);
      Integer = Omnvar_GetInteger(Def, Data);
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, Integer);
      if ( (Entity->flags & 1) != 0 )
      {
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        position.v[0] = outOrigin.v[0];
        position.v[1] = outOrigin.v[1];
        v21 = (vec4_t)unk_151414150;
        CgCompassSystemMP::DrawAreaMarker(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, &v21, 1, 1, position, outOrigin.v[2], cgMedia.compassping_portable_radar_sweep, 0, element, luaVM);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
  }
}

/*
==============
CgCompassSystemBR::DrawAreaCallouts
==============
*/
void CgCompassSystemBR::DrawAreaCallouts(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  const cg_t *LocalClientGlobals; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  CgCompassSystem *CompassSystem; 
  vec2_t TacmapMapCenter; 
  float v24; 
  const char *v25; 
  const ScreenPlacement *v26; 
  GfxFont *FontHandle; 
  const dvar_t *v28; 
  float v29; 
  const dvar_t *v30; 
  float value; 
  const dvar_t *v32; 
  float v33; 
  const dvar_t *v34; 
  float v35; 
  const dvar_t *v36; 
  float v37; 
  const dvar_t *v38; 
  float v39; 
  const dvar_t *v40; 
  float v41; 
  const dvar_t *v42; 
  float v43; 
  const dvar_t *v44; 
  float v45; 
  const dvar_t *v46; 
  float v47; 
  const dvar_t *v48; 
  float v49; 
  const dvar_t *v50; 
  const dvar_t *v51; 
  __int64 integer64; 
  const char *v54; 
  __int64 v55; 
  __int64 v56; 
  char v57; 
  __int64 v58; 
  char v59; 
  int v60; 
  StringTable *v61; 
  int i; 
  const char *ColumnValueForRow; 
  const char *v64; 
  const char *v66; 
  StringTable *v67; 
  const char *v69; 
  const char *v70; 
  __int64 v71; 
  __int64 v72; 
  float m_currentZoomLevel; 
  __int128 v75; 
  float v77; 
  float v78; 
  const char *v79; 
  const char *v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  StringTable *tablePtr; 
  float vMax; 
  float w; 
  float x; 
  float y; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  int result; 
  GfxFont *font; 
  vec4_t v96; 
  vec4_t v97; 
  vec4_t quadVerts[4]; 

  if ( compassType == COMPASS_TYPE_TACMAP )
  {
    _XMM0 = LODWORD(element->bottom);
    _XMM1 = LODWORD(element->top);
    __asm { vmaxss  xmm4, xmm0, xmm10 }
    _XMM0 = LODWORD(element->right);
    __asm { vmaxss  xmm3, xmm0, xmm10; right }
    _XMM0 = LODWORD(element->left);
    __asm
    {
      vmaxss  xmm2, xmm1, xmm10; top
      vmaxss  xmm1, xmm0, xmm10; left
    }
    LUI_Render_PushStencilRectangle((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&_XMM4);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    CG_CompassCalcDimensions(COMPASS_TYPE_TACMAP, LocalClientGlobals, parentRect, rect, &x, &y, &w, &vMax);
    LODWORD(parentRect) = rect->vertAlign;
    horzAlign = rect->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &vMax, horzAlign, (int)parentRect);
    CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
    TacmapMapCenter = CgCompassSystem::GetTacmapMapCenter(CompassSystem);
    v24 = 1.0 / this->m_currentZoomLevel;
    v90 = **(float **)TacmapMapCenter.v;
    v91 = *(float *)(*(_QWORD *)&TacmapMapCenter + 4i64);
    v84 = v24;
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    v25 = j_va("mp/map_callouts/%s_callouts.csv", cls.m_activeGameMapName);
    StringTable_GetAsset(v25, (const StringTable **)&tablePtr);
    v26 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    FontHandle = UI_GetFontHandle(v26, 1, 1.0);
    v28 = DCONST_DVARFLT_compassAreaCalloutsTextHeightScale;
    font = FontHandle;
    if ( !DCONST_DVARFLT_compassAreaCalloutsTextHeightScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsTextHeightScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    v29 = vMax * v28->current.value;
    v30 = DCONST_DVARFLT_compassAreaCalloutsBackgroundSidePadding;
    if ( !DCONST_DVARFLT_compassAreaCalloutsBackgroundSidePadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBackgroundSidePadding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    value = v30->current.value;
    v32 = DCONST_DVARFLT_compassAreaCalloutsBackgroundTopPadding;
    v92 = value;
    if ( !DCONST_DVARFLT_compassAreaCalloutsBackgroundTopPadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBackgroundTopPadding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    v33 = v32->current.value;
    v34 = DCONST_DVARFLT_compassAreaCalloutsBackgroundBottomPadding;
    v93 = v33;
    if ( !DCONST_DVARFLT_compassAreaCalloutsBackgroundBottomPadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBackgroundBottomPadding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    v35 = v34->current.value;
    v36 = DCONST_DVARFLT_compassAreaCalloutsTextColorR;
    if ( !DCONST_DVARFLT_compassAreaCalloutsTextColorR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsTextColorR") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    v37 = v36->current.value;
    v38 = DCONST_DVARFLT_compassAreaCalloutsTextColorG;
    v97.v[0] = v37;
    if ( !DCONST_DVARFLT_compassAreaCalloutsTextColorG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsTextColorG") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    v39 = v38->current.value;
    v40 = DCONST_DVARFLT_compassAreaCalloutsTextColorB;
    v97.v[1] = v39;
    if ( !DCONST_DVARFLT_compassAreaCalloutsTextColorB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsTextColorB") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    v41 = v40->current.value;
    v42 = DCONST_DVARFLT_compassAreaCalloutsTextColorA;
    v97.v[2] = v41;
    if ( !DCONST_DVARFLT_compassAreaCalloutsTextColorA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsTextColorA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    v43 = v42->current.value;
    v44 = DCONST_DVARFLT_compassAreaCalloutsBGColorR;
    v97.v[3] = v43;
    if ( !DCONST_DVARFLT_compassAreaCalloutsBGColorR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBGColorR") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    v45 = v44->current.value;
    v46 = DCONST_DVARFLT_compassAreaCalloutsBGColorG;
    v96.v[0] = v45;
    if ( !DCONST_DVARFLT_compassAreaCalloutsBGColorG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBGColorG") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    v47 = v46->current.value;
    v48 = DCONST_DVARFLT_compassAreaCalloutsBGColorB;
    v96.v[1] = v47;
    if ( !DCONST_DVARFLT_compassAreaCalloutsBGColorB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBGColorB") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    v49 = v48->current.value;
    v50 = DCONST_DVARFLT_compassAreaCalloutsBGColorA;
    v96.v[2] = v49;
    if ( !DCONST_DVARFLT_compassAreaCalloutsBGColorA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBGColorA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    v51 = DVARSTR_ui_br_variant;
    _XMM0 = v50->current.unsignedInt;
    LODWORD(v96.v[3]) = v50->current.integer;
    if ( !DVARSTR_ui_br_variant && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_br_variant") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    integer64 = v51->current.integer64;
    v54 = "x1";
    v55 = 0x7FFFFFFFi64;
    if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v56 = integer64 - (_QWORD)"x1";
    while ( 1 )
    {
      v57 = v54[v56];
      v58 = v55;
      v59 = *v54++;
      --v55;
      if ( !v58 )
      {
LABEL_51:
        v60 = 0;
        goto LABEL_52;
      }
      if ( v57 != v59 )
        break;
      if ( !v57 )
        goto LABEL_51;
    }
    v60 = 1;
    if ( v57 < v59 )
      v60 = -1;
LABEL_52:
    v61 = tablePtr;
    for ( i = 0; i < tablePtr->rowCount; ++i )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(v61, i, 5);
      if ( atoi(ColumnValueForRow) == 1 )
      {
        v64 = StringTable_GetColumnValueForRow(tablePtr, i, 6);
        *(double *)&_XMM0 = atof(v64);
        __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
        v66 = StringTable_GetColumnValueForRow(tablePtr, i, 7);
        *(double *)&_XMM0 = atof(v66);
        v67 = tablePtr;
        __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
        if ( tablePtr->columnCount > 10 )
        {
          v69 = StringTable_GetColumnValueForRow(tablePtr, i, 9);
          v70 = StringTable_GetColumnValueForRow(tablePtr, i, 10);
          v71 = -1i64;
          do
            ++v71;
          while ( v69[v71] );
          if ( v71 )
          {
            v72 = -1i64;
            do
              ++v72;
            while ( v70[v72] );
            if ( v72 )
            {
              *(double *)&_XMM0 = atof(v69);
              __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
              *(double *)&_XMM0 = atof(v70);
              m_currentZoomLevel = this->m_currentZoomLevel;
              v75 = LODWORD(m_currentZoomLevel);
              __asm { vcvtsd2ss xmm4, xmm0, xmm0 }
              *(float *)&v75 = (float)(m_currentZoomLevel * *(float *)&_XMM6) + (float)((float)(1.0 - m_currentZoomLevel) * *(float *)&_XMM7);
              _XMM7 = v75;
              *(float *)&_XMM8 = (float)(m_currentZoomLevel * *(float *)&_XMM4) + (float)((float)(1.0 - m_currentZoomLevel) * *(float *)&_XMM8);
            }
          }
          v67 = tablePtr;
        }
        v77 = (float)((float)((float)(*(float *)&_XMM7 - v90) * v24) + 0.5) * w;
        v78 = (float)((float)((float)(*(float *)&_XMM8 - v91) * v24) + 0.5) * vMax;
        v79 = StringTable_GetColumnValueForRow(v67, i, 2);
        v80 = SEH_LocalizeTextMessage(v79, "ui string", LOCMSG_NOERR);
        v81 = _mm_cvtepi32_ps((__m128i)(unsigned int)R_TextWidth(v80, 0, font, (int)v29)).m128_f32[0];
        v82 = (float)(v77 + x) - (float)(v81 * 0.5);
        v83 = (float)(v78 + y) - (float)(v29 * 0.5);
        LUI_CoD_GenerateQuadVerts(v82 - v92, v83 - v93, (float)(2.0 * v92) + (float)(v82 + v81), (float)(v35 * 2.0) + (float)(v83 + v29), (vec4_t (*)[4])quadVerts);
        if ( v60 )
          LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &v96, rgp.whiteImage);
        *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&_XMM7 + 1);
        LUI_CoD_GenerateQuadVerts(v82, v83, v82 + v81, v83 + v29, (vec4_t (*)[4])quadVerts);
        LUI_Render_DrawText((const LocalClientNum_t)this->m_localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, &v97, font, v80, 0, 0, 0.0, (int)v29, NULL, NULL);
        if ( !v60 && CG_GetOmnvar_IntegerByName(this->m_localClientNum, "ui_br_x1ops_unredact_area", &result, NULL, NULL) && result != i )
          LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &colorWhite, cgMedia.compass.x1_markers[i % 3]);
        v24 = v84;
      }
      v61 = tablePtr;
    }
    LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
  }
}

/*
==============
CgCompassSystemBR::DrawBRBoundingCircleTravelLine
==============
*/
void CgCompassSystemBR::DrawBRBoundingCircleTravelLine(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  float v12; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  CgGlobalsMP *LocalClientGlobals; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  double Float_Internal_DebugName; 
  const ScreenPlacement *ActivePlacement; 
  float width; 
  float quadLength; 
  float outCurrentRadius; 
  float quadAngle; 
  int outStartTime; 
  SecureVec3 out; 
  int outDuration; 
  float outAngle; 
  rectDef_s *parentRecta; 
  lua_State *v37; 
  LUIElement *v38; 
  __int64 v39; 
  vec2_t position2; 
  vec2_t position1; 
  float quadPositionX; 
  float quadPositionY; 
  rectDef_s x; 
  vec2_t outCurrentPosition; 
  vec2_t in; 
  vec2_t outVector; 

  v39 = -2i64;
  parentRecta = (rectDef_s *)parentRect;
  v38 = element;
  v37 = luaVM;
  if ( this->m_uiBRCircleStartEntityOmnvarIndex[0] != -1 )
  {
    v12 = color->v[3];
    if ( v12 != 0.0 )
    {
      Def = BG_Omnvar_GetDef(this->m_uiBRInfilStartedOmnvarIndex);
      Data = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRInfilStartedOmnvarIndex);
      if ( Omnvar_GetInteger(Def, Data) > 0 && CgCompassSystemBR::GetBRBoundingCircleInfo(this, 0, &outStartTime, &outDuration, &outCurrentPosition, &outCurrentRadius) )
      {
        LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 473, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
          __debugbreak();
        CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
        v16 = outCurrentPosition.v[0] - LocalClientGlobals->predictedPlayerState.origin.v[0];
        v18 = LODWORD(outCurrentPosition.v[1]);
        v17 = outCurrentPosition.v[1] - LocalClientGlobals->predictedPlayerState.origin.v[1];
        *(float *)&v18 = fsqrt((float)(v17 * v17) + (float)(v16 * v16));
        _XMM2 = v18;
        __asm
        {
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm1, xmm2, xmm9, xmm0
        }
        v22 = v16 * (float)(1.0 / *(float *)&_XMM1);
        v23 = v17 * (float)(1.0 / *(float *)&_XMM1);
        if ( *(float *)&v18 >= outCurrentRadius )
        {
          in.v[0] = outCurrentPosition.v[0] - (float)(v22 * outCurrentRadius);
          in.v[1] = outCurrentPosition.v[1] - (float)(v23 * outCurrentRadius);
          CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRecta, rect, &x.x, &x.y, &x.w, &x.h);
          v24 = (float)(0.5 * x.w) + x.x;
          v25 = (float)(0.5 * x.h) + x.y;
          CG_CalcPlayerPos(&out, this->m_localClientNum);
          CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &x, boundsRadius, &outVector, (const vec2_t *)&out, (const vec2_t *)&LocalClientGlobals->predictedPlayerState.origin, &position1, NULL);
          position1.v[0] = v24 + position1.v[0];
          position1.v[1] = v25 + position1.v[1];
          CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &x, boundsRadius, &outVector, (const vec2_t *)&out, &in, &position2, NULL);
          position2.v[0] = v24 + position2.v[0];
          position2.v[1] = v25 + position2.v[1];
          CgCompassSystemMP::GetQuadInfoForPoints(this, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassCircleTravelLineThickness, "compassCircleTravelLineThickness");
          width = *(float *)&Float_Internal_DebugName;
          ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
          ScrPlace_ApplyRect(ActivePlacement, &quadPositionX, &quadPositionY, &quadLength, &width, rect->horzAlign, rect->vertAlign);
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v38, quadPositionX, quadPositionY, quadLength, width, 0.0, 0.0, 1.0, 1.0, quadAngle, color->v[0], color->v[1], color->v[2], v12, this->m_uiBRTravelLineMaterial, v37);
          memset(&out, 0, sizeof(out));
        }
      }
    }
  }
}

/*
==============
CgCompassSystemBR::DrawBRBoundingCircles
==============
*/
void CgCompassSystemBR::DrawBRBoundingCircles(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  bool v10; 
  float v13; 
  const cg_t *LocalClientGlobals; 
  int i; 
  float v16; 
  float v17; 
  float v18; 
  double WorldToScreenScale; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  int v23; 
  int v24; 
  const ScreenPlacement *v25; 
  float maskHeight; 
  float w; 
  float outCurrentRadius; 
  int outDuration; 
  int outStartTime; 
  lua_State *v32; 
  LUIElement *v33; 
  float outAngle; 
  rectDef_s *parentRecta; 
  SecureVec3 out; 
  __int64 v37; 
  vec2_t v38; 
  vec4_t v39; 
  rectDef_s mapRect; 
  vec2_t outCurrentPosition; 
  vec2_t outVector; 
  vec2_t outSize; 

  v37 = -2i64;
  parentRecta = (rectDef_s *)parentRect;
  v10 = cropPartialMap;
  v33 = element;
  v32 = luaVM;
  if ( this->m_uiBRCircleStartEntityOmnvarIndex[0] != -1 )
  {
    v13 = color->v[3];
    if ( v13 != 0.0 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      CgCompassSystem::GetCompassYaw(this, compassType, v10, LocalClientGlobals, &outAngle, &outVector);
      for ( i = 0; i < 2; ++i )
      {
        if ( CgCompassSystemBR::GetBRBoundingCircleInfo(this, i, &outStartTime, &outDuration, &outCurrentPosition, &outCurrentRadius) )
        {
          v39 = (vec4_t)unk_151414090;
          v16 = outCurrentRadius;
          if ( i == 1 )
          {
            CgCompassSystem::WorldPosToCompass(this, compassType, v10, &mapRect, boundsRadius, &outVector, (const vec2_t *)&out, &outCurrentPosition, &v38, NULL);
            v17 = (float)(0.5 * mapRect.w) + mapRect.x;
            v18 = (float)(0.5 * mapRect.h) + mapRect.y;
            v38.v[0] = v17 + v38.v[0];
            v38.v[1] = v18 + v38.v[1];
            WorldToScreenScale = CgCompassSystemMP::GetWorldToScreenScale(this);
            w = *(float *)&WorldToScreenScale * (float)(v16 * 2.0);
            maskHeight = w;
            vertAlign = rect->vertAlign;
            horzAlign = rect->horzAlign;
            ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
            ScrPlace_ApplyRect(ActivePlacement, (float *)&v38, (float *)&v38 + 1, &w, &maskHeight, horzAlign, vertAlign);
            LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
            LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, v38.v[0], v38.v[1], w, maskHeight, 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, &outSize, this->m_outerCircle);
            v38.v[0] = v17;
            v38.v[1] = v18;
            w = mapRect.w;
            maskHeight = mapRect.h;
            v23 = rect->vertAlign;
            v24 = rect->horzAlign;
            v25 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
            ScrPlace_ApplyRect(v25, (float *)&v38, (float *)&v38 + 1, &w, &maskHeight, v24, v23);
            LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v33, v38.v[0], v38.v[1], w, maskHeight, 0.0, 0.0, 1.0, 1.0, 0.0, v39.v[0], v39.v[1], v39.v[2], v13 * 0.5, this->m_brGas, v32);
            LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
            v10 = cropPartialMap;
          }
          else
          {
            *(_QWORD *)v39.v = *(_QWORD *)color->v;
            v39.v[2] = color->v[2];
          }
          CgCompassSystemMP::DrawAreaMarker(this, compassType, v10, parentRecta, rect, boundsRadius, &v39, outStartTime, outDuration, outCurrentPosition, v16, this->m_uiBRCircleMaterial, s_drawPixelShapeCircle, v33, v32);
        }
      }
      memset(&out, 0, sizeof(out));
    }
  }
}

/*
==============
CgCompassSystemBR::DrawBRMapCircles
==============
*/
void CgCompassSystemBR::DrawBRMapCircles(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, GfxImage *mapMask, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  const rectDef_s *v10; 
  CompassType v12; 
  const rectDef_s *v14; 
  LUIElement *v15; 
  CgStatic *LocalClientStatics; 
  char v17; 
  entityState_t *entities; 
  float v19; 
  __int64 number; 
  __int64 m_localClientNum; 
  CgEntitySystem *v22; 
  __int64 v23; 
  float v24; 
  unsigned int v25; 
  __int16 otherEntityNum; 
  CgGlobalsMP *v27; 
  unsigned int v28; 
  LocalClientNum_t v29; 
  const characterInfo_t *v30; 
  const cg_t *LocalClientGlobals; 
  CgGlobalsMP *v32; 
  CgStatic *v33; 
  const characterInfo_t *v34; 
  team_t team; 
  int *v36; 
  float v37; 
  float v38; 
  bool v39; 
  double v40; 
  float v41; 
  __int64 v42; 
  const GfxImage *material; 
  float v44; 
  float v45; 
  LocalClientNum_t v46; 
  CgStatic *v47; 
  const characterInfo_t *v48; 
  team_t v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  int v54; 
  int v55; 
  double WorldToScreenScale; 
  float v57; 
  char v58; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float *y; 
  float *w; 
  char v64; 
  CgGlobalsMP *cgameGlob; 
  float width; 
  float v69; 
  LUIElement *v70; 
  int v71; 
  lua_State *v72; 
  rectDef_s *parentRecta; 
  const characterInfo_t *CharacterInfo; 
  GfxImage *v75; 
  vec3_t outOrigin; 
  entityState_t *v77; 
  const CgSnapshotMP *NextSnap; 
  float outAngle; 
  SecureVec3 out; 
  __int64 v81; 
  float v82; 
  float v83; 
  vec4_t v84; 
  vec2_t in; 
  vec2_t outClipped; 
  vec2_t v0; 
  rectDef_s x; 
  vec2_t outVector; 

  v81 = -2i64;
  v10 = parentRect;
  parentRecta = (rectDef_s *)parentRect;
  v12 = compassType;
  v14 = rect;
  v75 = mapMask;
  v15 = element;
  v70 = element;
  v72 = luaVM;
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 894, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 895, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  if ( color->v[3] != 0.0 )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    cgameGlob = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
    NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)this->m_localClientNum);
    if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 913, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
      __debugbreak();
    CG_CompassCalcDimensions(v12, cgameGlob, v10, rect, &x.x, &x.y, &x.w, &x.h);
    CgCompassSystem::GetCompassYaw(this, v12, cropPartialMap, cgameGlob, &outAngle, &outVector);
    v17 = 0;
    v64 = 0;
    v71 = 0;
    if ( NextSnap->numEntities > 0 )
    {
      entities = NextSnap->entities;
      v77 = NextSnap->entities;
      v19 = FLOAT_0_5;
      while ( 1 )
      {
        if ( !v17 )
        {
          CgCompassSystemBR::PushStencilRectAndMapMask(this, v12, v10, v14, v75, v15);
          v64 = 1;
        }
        number = entities->number;
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
        if ( (unsigned int)number >= 0x800 )
        {
          LODWORD(w) = 2048;
          LODWORD(y) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", y, w) )
            __debugbreak();
        }
        v23 = (__int64)&v22->m_entities[number];
        if ( (v22->m_entities[number].flags & 1) != 0 && v22->m_entities[number].nextState.eType == ET_SCRIPTMOVER && v22->m_entities[number].nextState.un.scriptMoverType == 10 )
          break;
        v58 = v64;
LABEL_104:
        ++v71;
        entities = ++v77;
        v10 = parentRecta;
        v15 = v70;
        if ( v71 >= NextSnap->numEntities )
        {
          if ( v58 == 1 )
          {
            if ( v12 == COMPASS_TYPE_PARTIAL )
            {
              if ( v75 )
                LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
            }
            LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
          }
          return;
        }
        v17 = v64;
      }
      CG_GetPoseOrigin(&v22->m_entities[number].pose, &outOrigin);
      in.v[0] = outOrigin.v[0];
      in.v[1] = outOrigin.v[1];
      v24 = outOrigin.v[2];
      v25 = v22->m_entities[number].nextState.staticState.player.stowedWeaponHandle.m_mapEntryId & 0x3F;
      otherEntityNum = v22->m_entities[number].nextState.otherEntityNum;
      v27 = cgameGlob;
      if ( (*(_DWORD *)(v23 + 528) & 0x3F) != 0 )
      {
        v28 = 0;
        if ( v25 < 0xE )
          v28 = v25;
        v84 = *(vec4_t *)&s_mapCircleColorList.v[4 * v28];
      }
      else
      {
        CgCompassSystemMP::GetEnemyCompassColor(this, &v84, cgameGlob);
        v84.v[3] = FLOAT_0_75;
        v29 = this->m_localClientNum;
        v30 = CharacterInfo;
        if ( CharacterInfo && CharacterInfo->infoValid && otherEntityNum != 2047 )
        {
          LocalClientGlobals = CG_GetLocalClientGlobals(v29);
          v32 = (CgGlobalsMP *)LocalClientGlobals;
          if ( otherEntityNum == v30->entityNum )
          {
            this->GetPlayerCompassColor(this, &v84, LocalClientGlobals);
          }
          else
          {
            v33 = CgStatic::GetLocalClientStatics(v29);
            v34 = CgStatic::GetCharacterInfo(v33, otherEntityNum);
            if ( v34 )
            {
              if ( v34->infoValid )
              {
                team = CharacterInfo->team;
                if ( team )
                {
                  if ( v34->team == team )
                  {
                    v36 = (int *)v33->GetClientInfo(v33, otherEntityNum);
                    if ( v36 )
                    {
                      if ( *v36 != 2047 )
                      {
                        CG_ScoreboardMP_GetClientScore(v29, *v36);
                        CgCompassSystemMP::GetFriendlyCompassColor(this, &v84, v32);
                      }
                    }
                  }
                }
              }
            }
          }
          v12 = compassType;
          v27 = cgameGlob;
        }
        v14 = rect;
      }
      if ( ((*(_DWORD *)(v23 + 528) >> 6) & 0x3F) != 0 )
      {
        if ( ((*(_DWORD *)(v23 + 528) >> 6) & 0x3F) == 1 )
        {
LABEL_54:
          CgCompassSystemMP::DrawAreaMarker(this, v12, cropPartialMap, parentRecta, v14, boundsRadius, &v84, 1, 1, in, v24, this->m_uiBRCircleMaterial, s_drawPixelShapeCircle, v70, v72);
          goto LABEL_57;
        }
        if ( ((*(_DWORD *)(v23 + 528) >> 6) & 0x3F) != 2 )
        {
          if ( ((*(_DWORD *)(v23 + 528) >> 6) & 0x3F) != 3 )
            goto LABEL_57;
          v84.v[3] = GetPulseCircleAlpha(*(_WORD *)(v23 + 400), v27->time);
          goto LABEL_54;
        }
        v84.v[3] = GetPulseCircleAlpha(*(_WORD *)(v23 + 400), v27->time);
      }
      CgCompassSystemMP::DrawAreaMarker(this, v12, cropPartialMap, parentRecta, v14, boundsRadius, &v84, 1, 1, in, v24, cgMedia.compassping_portable_radar_sweep, 0, v70, v72);
LABEL_57:
      v37 = (float)(v19 * x.w) + x.x;
      v38 = (float)(v19 * x.h) + x.y;
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      v39 = CgCompassSystem::WorldPosToCompass(this, v12, cropPartialMap, &x, boundsRadius, &outVector, (const vec2_t *)&out, &in, &v0, &outClipped);
      if ( v39 )
      {
        v40 = CalcCompassClippedDistanceScale(&v0, &outClipped, 0);
        v41 = *(float *)&v40;
      }
      else
      {
        v41 = FLOAT_1_0;
      }
      v42 = (*(_DWORD *)(v23 + 528) >> 12) & 0x3F;
      if ( v39 )
      {
        if ( (unsigned int)v42 >= 8 )
        {
          LODWORD(w) = 8;
          LODWORD(y) = (*(_DWORD *)(v23 + 528) >> 12) & 0x3F;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 760, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( CIRCLE_ICON_COUNT )", "index doesn't index CIRCLE_ICON_COUNT\n\t%i not in [0, %i)", y, w) )
            __debugbreak();
        }
        if ( !(_DWORD)v42 || (_DWORD)v42 != 3 && (_DWORD)v42 != 4 && (_DWORD)v42 != 5 && (_DWORD)v42 != 7 )
          goto LABEL_101;
        material = circleIconsClipped[v42];
        v44 = v37 + outClipped.v[0];
        outClipped.v[0] = v37 + outClipped.v[0];
        v45 = v38 + outClipped.v[1];
        outClipped.v[1] = v38 + outClipped.v[1];
      }
      else
      {
        v46 = this->m_localClientNum;
        if ( (unsigned int)v42 >= 8 )
        {
          LODWORD(w) = 8;
          LODWORD(y) = (*(_DWORD *)(v23 + 528) >> 12) & 0x3F;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 712, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( CIRCLE_ICON_COUNT )", "index doesn't index CIRCLE_ICON_COUNT\n\t%i not in [0, %i)", y, w) )
            __debugbreak();
        }
        if ( !(_DWORD)v42 )
          goto LABEL_101;
        switch ( (int)v42 )
        {
          case 1:
            if ( !CharacterInfo )
              goto LABEL_101;
            if ( !CharacterInfo->infoValid )
              goto LABEL_101;
            if ( otherEntityNum == 2047 )
              goto LABEL_101;
            if ( otherEntityNum != CharacterInfo->entityNum )
            {
              v47 = CgStatic::GetLocalClientStatics(v46);
              v48 = CgStatic::GetCharacterInfo(v47, otherEntityNum);
              if ( !v48 )
                goto LABEL_101;
              if ( !v48->infoValid )
                goto LABEL_101;
              v49 = CharacterInfo->team;
              if ( v49 == TEAM_ZERO || v48->team != v49 )
                goto LABEL_101;
            }
            break;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            break;
          default:
            goto LABEL_101;
        }
        material = circleIcons[v42];
        v44 = v37 + v0.v[0];
        v0.v[0] = v37 + v0.v[0];
        v45 = v38 + v0.v[1];
        v0.v[1] = v38 + v0.v[1];
      }
      v83 = v45;
      v82 = v44;
      if ( material )
      {
        v50 = v84.v[0];
        v51 = v84.v[1];
        v52 = v84.v[2];
        v53 = v84.v[3];
        if ( (unsigned int)v42 >= 8 )
        {
          LODWORD(w) = 8;
          LODWORD(y) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 799, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( CIRCLE_ICON_COUNT )", "index doesn't index CIRCLE_ICON_COUNT\n\t%i not in [0, %i)", y, w) )
            __debugbreak();
        }
        v54 = v42 - 3;
        if ( !v54 )
          goto LABEL_91;
        v55 = v54 - 3;
        if ( !v55 )
        {
LABEL_92:
          WorldToScreenScale = CgCompassSystemMP::GetWorldToScreenScale(this);
          v69 = (float)(*(float *)&WorldToScreenScale * (float)(v24 * 2.0)) * 0.75;
          width = v69;
          v57 = v53 * 0.25;
          v58 = v64;
LABEL_100:
          v14 = rect;
          vertAlign = rect->vertAlign;
          horzAlign = rect->horzAlign;
          ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
          ScrPlace_ApplyRect(ActivePlacement, &v82, &v83, &v69, &width, horzAlign, vertAlign);
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v70, v82, v83, v69, width, 0.0, 0.0, 1.0, 1.0, 0.0, v50, v51, v52, v57, material, v72);
LABEL_102:
          memset(&out, 0, sizeof(out));
          memset(&outOrigin, 0, sizeof(outOrigin));
          v19 = FLOAT_0_5;
          goto LABEL_104;
        }
        if ( v55 == 1 )
        {
LABEL_91:
          if ( !v39 )
            goto LABEL_92;
        }
        v58 = v64;
        if ( v64 == 1 )
        {
          if ( v12 == COMPASS_TYPE_PARTIAL && v75 )
            LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
          LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
          v64 = 0;
          v58 = 0;
        }
        CgCompassSystem::CalcCompassPointerSize(this, v12, OBJ_ICON_SIZE_REGULAR, &v69, &width);
        v57 = FLOAT_1_0;
        if ( v39 )
        {
          v69 = v41 * v69;
          width = v41 * width;
        }
        goto LABEL_100;
      }
LABEL_101:
      v14 = rect;
      v58 = v64;
      goto LABEL_102;
    }
  }
}

/*
==============
CgCompassSystemBR::DrawBRPlaneTravelLine
==============
*/
void CgCompassSystemBR::DrawBRPlaneTravelLine(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  double IconFadeAlpha; 
  float v13; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  const OmnvarDef *v16; 
  const OmnvarData *v17; 
  const OmnvarDef *v18; 
  const OmnvarData *v19; 
  const OmnvarDef *v20; 
  const OmnvarData *v21; 
  const OmnvarDef *v22; 
  const OmnvarData *v23; 
  CgGlobalsMP *LocalClientGlobals; 
  float v25; 
  float v26; 
  const ScreenPlacement *ActivePlacement; 
  float v28; 
  float v29; 
  float v30; 
  lua_State *v31; 
  float quadAngle; 
  float v33; 
  float v34; 
  float quadLength; 
  float width; 
  int Integer; 
  int v38; 
  int v39; 
  int v40; 
  SecureVec3 out; 
  float outAngle; 
  rectDef_s *parentRecta; 
  lua_State *v44; 
  __int64 v45; 
  float v46[2]; 
  vec2_t position1; 
  vec2_t position2; 
  float quadPositionX; 
  float quadPositionY; 
  rectDef_s x; 
  vec2_t in; 
  vec2_t v53; 
  vec2_t north; 

  v45 = -2i64;
  parentRecta = (rectDef_s *)parentRect;
  v44 = luaVM;
  if ( this->m_uiBRInfilledOmnvarIndex != -1 && this->m_uiBRPlanePathStartXOmnvarIndex != -1 && this->m_uiBRPlanePathStartYOmnvarIndex != -1 && this->m_uiBRPlanePathEndXOmnvarIndex != -1 && this->m_uiBRPlanePathEndYOmnvarIndex != -1 )
  {
    IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
    v13 = *(float *)&IconFadeAlpha * color->v[3];
    if ( v13 != 0.0 )
    {
      Def = BG_Omnvar_GetDef(this->m_uiBRInfilledOmnvarIndex);
      Data = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRInfilledOmnvarIndex);
      if ( Omnvar_GetInteger(Def, Data) != 1 )
      {
        v16 = BG_Omnvar_GetDef(this->m_uiBRPlanePathStartXOmnvarIndex);
        v17 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRPlanePathStartXOmnvarIndex);
        Integer = Omnvar_GetInteger(v16, v17);
        v18 = BG_Omnvar_GetDef(this->m_uiBRPlanePathStartYOmnvarIndex);
        v19 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRPlanePathStartYOmnvarIndex);
        v38 = Omnvar_GetInteger(v18, v19);
        v20 = BG_Omnvar_GetDef(this->m_uiBRPlanePathEndXOmnvarIndex);
        v21 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRPlanePathEndXOmnvarIndex);
        v39 = Omnvar_GetInteger(v20, v21);
        v22 = BG_Omnvar_GetDef(this->m_uiBRPlanePathEndYOmnvarIndex);
        v23 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRPlanePathEndYOmnvarIndex);
        v40 = Omnvar_GetInteger(v22, v23);
        LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1563, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
          __debugbreak();
        CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &north);
        CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRecta, rect, &x.x, &x.y, &x.w, &x.h);
        v25 = (float)(0.5 * x.w) + x.x;
        v26 = (float)(0.5 * x.h) + x.y;
        CG_CalcPlayerPos(&out, this->m_localClientNum);
        in.v[0] = (float)Integer;
        in.v[1] = (float)v38;
        CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &x, boundsRadius, &north, (const vec2_t *)&out, &in, &position1, NULL);
        position1.v[0] = v25 + position1.v[0];
        position1.v[1] = v26 + position1.v[1];
        v53.v[0] = (float)v39;
        v53.v[1] = (float)v40;
        CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &x, boundsRadius, &north, (const vec2_t *)&out, &v53, &position2, NULL);
        position2.v[0] = v25 + position2.v[0];
        position2.v[1] = v26 + position2.v[1];
        CgCompassSystemMP::GetQuadInfoForPoints(this, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
        width = FLOAT_0_5;
        quadLength = quadLength * 2.0;
        ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        ScrPlace_ApplyRect(ActivePlacement, &quadPositionX, &quadPositionY, &quadLength, &width, rect->horzAlign, rect->vertAlign);
        v28 = color->v[0];
        v29 = color->v[1];
        v30 = color->v[2];
        v31 = v44;
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, quadPositionX, quadPositionY, quadLength, width, 0.0, 0.0, 1.0, 1.0, quadAngle, color->v[0], v29, v30, v13, this->m_uiBRTravelLineMaterial, v44);
        quadAngle = quadAngle + 90.0;
        v34 = FLOAT_40_0;
        v33 = FLOAT_40_0;
        *(vec2_t *)v46 = position1;
        ScrPlace_ApplyRect(ActivePlacement, v46, &v46[1], &v34, &v33, rect->horzAlign, rect->vertAlign);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v46[0], v46[1], v34, v33, 0.0, 0.0, 1.0, 1.0, quadAngle, v28, v29, v30, v13, this->m_uiBRLineArrowMaterial, v31);
        v34 = FLOAT_40_0;
        v33 = FLOAT_40_0;
        *(vec2_t *)v46 = position2;
        ScrPlace_ApplyRect(ActivePlacement, v46, &v46[1], &v34, &v33, rect->horzAlign, rect->vertAlign);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, v46[0], v46[1], v34, v33, 0.0, 0.0, 1.0, 1.0, quadAngle, v28, v29, v30, v13, this->m_uiBRLineArrowMaterial, v31);
        memset(&out, 0, sizeof(out));
      }
    }
  }
}

/*
==============
CgCompassSystemBR::DrawBRSelectionCursor
==============
*/
void CgCompassSystemBR::DrawBRSelectionCursor(CgCompassSystemBR *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, TacMapCursorStyle cursorStyle, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  __int64 v13; 
  float v14; 
  float v15; 
  float m_currentZoomLevel; 
  CgCompassSystem *CompassSystem; 
  vec2_t TacmapMapCenter; 
  float v19; 
  float v20; 
  float v21; 
  LocalClientNum_t m_localClientNum; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  const ScreenPlacement *ActivePlacement; 
  float v28; 
  float v29; 
  float v30; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *v33; 
  int y; 
  int ya; 
  int yb; 
  int w; 
  int wa; 
  int wb; 
  float quadLength; 
  float width; 
  float quadAngle; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float quadPositionX; 
  float quadPositionY; 
  vec2_t position1; 
  vec2_t position2; 
  vec4_t cursorColor; 
  float x; 
  float v53; 
  float v54; 
  float vMin[3]; 
  vec4_t quadVerts[4]; 

  LODWORD(position1.v[0]) = cursorStyle;
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1351, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1352, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( CL_Keys_IsCatcherActive(this->m_localClientNum, 16) && CL_Input_IsGamepadEnabled(this->m_localClientNum) )
  {
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x, &v53, &v54, vMin);
    v13 = SLODWORD(position1.v[0]);
    cursorColor = this->m_uiCursorStyles[SLODWORD(position1.v[0])].cursorColor;
    v14 = FLOAT_32_0;
    v45 = FLOAT_32_0;
    v46 = FLOAT_32_0;
    v15 = FLOAT_32_0;
    if ( compassType == COMPASS_TYPE_TACMAP )
    {
      m_currentZoomLevel = this->m_currentZoomLevel;
      CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)this->m_localClientNum);
      TacmapMapCenter = CgCompassSystem::GetTacmapMapCenter(CompassSystem);
      v14 = v45;
      v19 = (float)((float)((float)(LocalClientGlobals->locationSelectorCursor.v[0] - **(float **)TacmapMapCenter.v) * (float)(2.0 / m_currentZoomLevel)) + 1.0) * 0.5;
      v20 = (float)((float)((float)(LocalClientGlobals->locationSelectorCursor.v[1] - *(float *)(*(_QWORD *)&TacmapMapCenter + 4i64)) * (float)(2.0 / m_currentZoomLevel)) + 1.0) * 0.5;
      v15 = v46;
    }
    else
    {
      v19 = LocalClientGlobals->locationSelectorCursor.v[0];
      v20 = LocalClientGlobals->locationSelectorCursor.v[1];
    }
    v21 = x;
    m_localClientNum = this->m_localClientNum;
    v23 = v14 * 0.5;
    v24 = (float)(v20 * vMin[0]) + v53;
    v25 = v15 * 0.5;
    v26 = (float)((float)((float)(v19 * v54) + x) - (float)(v14 * 0.5)) - 2.0;
    position2.v[1] = (float)(v24 - v25) + v25;
    position1.v[1] = position2.v[1];
    v44 = (float)((float)(v19 * v54) + x) - (float)(v14 * 0.5);
    v43 = v24 - (float)(v15 * 0.5);
    position2.v[0] = v26;
    position1.v[0] = x;
    width = FLOAT_2_0;
    ActivePlacement = ScrPlace_GetActivePlacement(m_localClientNum);
    if ( v26 > v21 )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(this, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      ScrPlace_ApplyRect(ActivePlacement, &quadPositionX, &quadPositionY, &quadLength, &width, rect->horzAlign, rect->vertAlign);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, quadPositionX, quadPositionY, quadLength, 2.0, 0.0, 0.0, 1.0, 1.0, quadAngle, cursorColor.v[0], cursorColor.v[1], cursorColor.v[2], cursorColor.v[3], this->m_uiBRTravelLineMaterial, luaVM);
    }
    v28 = v44;
    v29 = v43;
    position2.v[0] = (float)(v44 + v45) + 2.0;
    position2.v[1] = v25 + v43;
    position1.v[0] = v54 + x;
    position1.v[1] = v25 + v43;
    if ( position2.v[0] < (float)(v54 + x) )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(this, position2, position1, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      w = rect->vertAlign;
      y = rect->horzAlign;
      width = FLOAT_2_0;
      ScrPlace_ApplyRect(ActivePlacement, &quadPositionX, &quadPositionY, &quadLength, &width, y, w);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, quadPositionX, quadPositionY, quadLength, 2.0, 0.0, 0.0, 1.0, 1.0, quadAngle, cursorColor.v[0], cursorColor.v[1], cursorColor.v[2], cursorColor.v[3], this->m_uiBRTravelLineMaterial, luaVM);
      v28 = v44;
      v29 = v43;
    }
    v30 = v53;
    position2.v[0] = v23 + v28;
    position2.v[1] = v29 - 2.0;
    position1.v[0] = v23 + v28;
    position1.v[1] = v53;
    if ( (float)(v29 - 2.0) > v53 )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(this, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      wa = rect->vertAlign;
      ya = rect->horzAlign;
      width = FLOAT_2_0;
      ScrPlace_ApplyRect(ActivePlacement, &quadPositionX, &quadPositionY, &quadLength, &width, ya, wa);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, quadPositionX, quadPositionY, quadLength, 2.0, 0.0, 0.0, 1.0, 1.0, quadAngle, cursorColor.v[0], cursorColor.v[1], cursorColor.v[2], cursorColor.v[3], this->m_uiBRTravelLineMaterial, luaVM);
      v30 = v53;
      v28 = v44;
      v29 = v43;
    }
    position2.v[0] = v23 + v28;
    position1.v[0] = v23 + v28;
    position2.v[1] = (float)(v29 + v45) + 2.0;
    position1.v[1] = v30 + vMin[0];
    if ( position2.v[1] < (float)(v30 + vMin[0]) )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(this, position2, position1, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      wb = rect->vertAlign;
      yb = rect->horzAlign;
      width = FLOAT_2_0;
      ScrPlace_ApplyRect(ActivePlacement, &quadPositionX, &quadPositionY, &quadLength, &width, yb, wb);
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, quadPositionX, quadPositionY, quadLength, 2.0, 0.0, 0.0, 1.0, 1.0, quadAngle, cursorColor.v[0], cursorColor.v[1], cursorColor.v[2], cursorColor.v[3], this->m_uiBRTravelLineMaterial, luaVM);
    }
    vertAlign = rect->vertAlign;
    horzAlign = rect->horzAlign;
    v33 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    ScrPlace_ApplyRect(v33, &v44, &v43, &v45, &v46, horzAlign, vertAlign);
    LUI_CoD_GenerateQuadVerts(v44, v43, v44 + v45, v43 + v46, (vec4_t (*)[4])quadVerts);
    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &cursorColor, this->m_uiCursorStyles[v13].cursorReticleMaterial);
  }
}

/*
==============
CgCompassSystemBR::DrawCalloutMarkerPingPrompt
==============
*/
void CgCompassSystemBR::DrawCalloutMarkerPingPrompt(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  unsigned int LookingAtScriptable; 
  unsigned __int8 LookingAtPing; 
  cg_t *LocalClientGlobals; 
  float v13; 
  float v14; 
  centity_t *Entity; 
  __int64 v16; 
  CalloutMarkerPingPool v17; 
  const CalloutMarkerPingView *View; 
  CgStatic *LocalClientStatics; 
  CalloutMarkerPingPool v20; 
  const CalloutMarkerPingView *v21; 
  double v22; 
  float v23; 
  float v24; 
  double AspectRatio; 
  float v26; 
  double v27; 
  double v28; 
  unsigned __int8 owner; 
  int v30; 
  int clientNum; 
  double h; 
  const char *v33; 
  int TeammateIndex; 
  const rectDef_s *v35; 
  int v36; 
  double v37; 
  float v38; 
  double v39; 
  float v40; 
  float v41; 
  float v42; 
  int i; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float v47; 
  double Float_Internal_DebugName; 
  const char *v49; 
  const dvar_t *v50; 
  double v51; 
  float v52; 
  double v53; 
  CalloutMarkerPingPool v55; 
  float v56; 
  float v57[2]; 
  cg_t *v58; 
  const rectDef_s *v59; 
  const rectDef_s *v60; 
  SecureVec3 v61; 
  float v62; 
  const CalloutMarkerPingView *v63; 
  __int64 v64; 
  vec2_t out_xy; 
  vec3_t origin; 
  rectDef_s x; 
  vec2_t v68; 
  vec2_t out_xyClipped; 
  vec4_t v70; 
  vec3_t prevOrigin; 
  vec4_t v72[11]; 

  if ( compassType == COMPASS_TYPE_TACMAP )
  {
    v64 = -2i64;
    v59 = parentRect;
    v60 = rect;
    LOWORD(v56) = CG_CalloutMarkerPing_TacmapGetLookingAtEntity(this->m_localClientNum);
    LookingAtScriptable = CG_CalloutMarkerPing_TacmapGetLookingAtScriptable(this->m_localClientNum);
    LODWORD(v57[0]) = CG_CalloutMarkerPing_TacmapGetLookingAtObjective(this->m_localClientNum);
    LookingAtPing = CG_CalloutMarkerPing_TacmapGetLookingAtPing(this->m_localClientNum);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    v58 = LocalClientGlobals;
    CG_CompassCalcDimensions(COMPASS_TYPE_TACMAP, LocalClientGlobals, v59, rect, &x.x, &x.y, &x.w, &x.h);
    v13 = (float)(0.5 * x.w) + x.x;
    v14 = (float)(0.5 * x.h) + x.y;
    CgCompassSystem::GetCompassYaw(this, COMPASS_TYPE_TACMAP, cropPartialMap, LocalClientGlobals, &v62, &v68);
    CG_CalcPlayerPos(&v61, this->m_localClientNum);
    if ( LOWORD(v56) != 2047 )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, SLOWORD(v56));
      if ( (Entity->flags & 1) != 0 )
      {
        CG_GetPoseOrigin(&Entity->pose, &origin);
        goto LABEL_17;
      }
LABEL_46:
      memset(&v61, 0, sizeof(v61));
      return;
    }
    if ( LookingAtScriptable == -1 )
    {
      if ( LODWORD(v57[0]) != -1 )
      {
        v16 = SLODWORD(v57[0]);
        if ( LocalClientGlobals->predictedPlayerState.objectives[v16].entNum[0] != 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1819, ASSERT_TYPE_ASSERT, "(ps->objectives[lookAtObjective].entNum[0] == ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->objectives[lookAtObjective].entNum[0] == ENTITYNUM_NONE") )
          __debugbreak();
        origin = LocalClientGlobals->predictedPlayerState.objectives[v16].origin[0];
        goto LABEL_17;
      }
      if ( LookingAtPing == 53 )
        goto LABEL_46;
      v17 = CG_CalloutMarkerPing_ViewIndexToPool(this->m_localClientNum, LookingAtPing);
      if ( v17 == CONST_CALLOUT_POOL_SIZE )
        goto LABEL_46;
      View = CG_CalloutMarkerPing_GetView(this->m_localClientNum, LookingAtPing, &LocalClientGlobals->predictedPlayerState);
      if ( !View->origin.owner )
        goto LABEL_46;
      CG_CalloutMarkerPing_GetWorldOrigin(v17, View, this->m_localClientNum, &origin);
    }
    else
    {
      if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)this->m_localClientNum, LookingAtScriptable) )
        goto LABEL_46;
      ScriptableCl_GetInstanceOrigin((const LocalClientNum_t)this->m_localClientNum, LookingAtScriptable, &origin);
    }
LABEL_17:
    if ( !CgCompassSystemMP::GetObjectiveClippedPos(this, COMPASS_TYPE_TACMAP, 0, cropPartialMap, &x, boundsRadius, &v68, &v61, &origin, &prevOrigin, v13, v14, &out_xy, &out_xyClipped) )
    {
      if ( LookingAtPing == 53 )
      {
        v47 = out_xy.v[1];
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassEnemyHeightDelta, "compassEnemyHeightDelta");
        if ( (float)(v61.z - origin.v[2]) < *(float *)&Float_Internal_DebugName )
        {
          v49 = "scr_calloutmarkerping_tacmap_prompt_y";
          v50 = DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y;
        }
        else
        {
          v49 = "scr_calloutmarkerping_tacmap_prompt_y_elev";
          v50 = DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_elev;
        }
        v51 = Dvar_GetFloat_Internal_DebugName(v50, v49);
        v52 = v47 + *(float *)&v51;
        v53 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height, "scr_calloutmarkerping_tacmap_prompt_height");
        CgCompassSystemMP::DrawText(this, COMPASS_TYPE_TACMAP, rect, "MP_BR_INGAME/PING", 4, out_xy.v[0], v52, *(float *)&v53, &colorWhite, element, luaVM);
      }
      else
      {
        LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
        *(_QWORD *)v57 = CgStatic::GetCharacterInfo(LocalClientStatics, v58->clientNum);
        v20 = CG_CalloutMarkerPing_ViewIndexToPool(this->m_localClientNum, LookingAtPing);
        v55 = v20;
        if ( v20 != CONST_CALLOUT_POOL_SIZE )
        {
          v21 = CG_CalloutMarkerPing_GetView(this->m_localClientNum, LookingAtPing, &LocalClientGlobals->predictedPlayerState);
          v63 = v21;
          if ( v21->origin.owner )
          {
            v22 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_ping, "scr_calloutmarkerping_tacmap_prompt_y_ping");
            v24 = *(float *)&v22 + out_xy.v[1];
            v23 = *(float *)&v22 + out_xy.v[1];
            AspectRatio = CG_CalloutMarkerPing_GetAspectRatio(v20, v21, this->m_localClientNum);
            v26 = *(float *)&AspectRatio;
            if ( *(float *)&AspectRatio < 1.0 )
            {
              v27 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_ping, "scr_calloutmarkerping_tacmap_prompt_y_ping");
              v23 = v24 + *(float *)&v27;
            }
            if ( v20 == CONST_CALLOUT_POOL_ID_NAVIGATION )
            {
              v28 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_ping, "scr_calloutmarkerping_tacmap_prompt_y_ping");
              v23 = v23 + (float)(*(float *)&v28 * 0.60000002);
            }
            owner = v21->origin.owner;
            if ( owner )
              v30 = owner - 1;
            else
              v30 = -1;
            clientNum = v58->clientNum;
            if ( v30 == clientNum )
            {
              h = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height, "scr_calloutmarkerping_tacmap_prompt_height");
              v33 = "MP_BR_INGAME/CANCEL_PING";
            }
            else
            {
              TeammateIndex = CG_CalloutMarkerPing_GetTeammateIndex(this->m_localClientNum, clientNum);
              if ( CG_CalloutMarkerPing_GetTeammateConfirmed(v20, v21, TeammateIndex) )
              {
                h = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height, "scr_calloutmarkerping_tacmap_prompt_height");
                v33 = "MP_BR_INGAME/PING_DECLINE";
              }
              else
              {
                h = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height, "scr_calloutmarkerping_tacmap_prompt_height");
                v33 = "MP_BR_INGAME/ACKNOWLEDGE_PING";
              }
            }
            v35 = v60;
            CgCompassSystemMP::DrawText(this, COMPASS_TYPE_TACMAP, v60, v33, 4, out_xy.v[0], v23, *(float *)&h, &colorWhite, element, luaVM);
            v36 = v58->teamPlayers[*(int *)(*(_QWORD *)v57 + 12i64)];
            if ( (unsigned int)(v36 - 2) <= 2 && v26 >= 1.0 )
            {
              v37 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_d, "scr_calloutmarkerping_tacmap_prompt_pip_d");
              v38 = *(float *)&v37;
              v39 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_s, "scr_calloutmarkerping_tacmap_prompt_pip_s");
              v40 = _mm_cvtepi32_ps((__m128i)(unsigned int)v36).m128_f32[0];
              v41 = out_xy.v[0] - (float)((float)((float)((float)(v40 - 1.0) * *(float *)&v39) + (float)(v40 * v38)) * 0.5);
              v42 = *(float *)&v39 + out_xy.v[1];
              if ( v20 )
                v42 = (float)(*(float *)&v39 + out_xy.v[1]) + v38;
              for ( i = 0; i < v36; v35 = v60 )
              {
                *(float *)&v58 = (float)((float)i * (float)(*(float *)&v39 + v38)) + v41;
                v56 = v42;
                v57[0] = v38;
                *(float *)&v59 = v38;
                vertAlign = v35->vertAlign;
                horzAlign = v35->horzAlign;
                ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
                ScrPlace_ApplyRect(ActivePlacement, (float *)&v58, &v56, v57, (float *)&v59, horzAlign, vertAlign);
                LUI_CoD_GenerateQuadVerts(*(float *)&v58, v56, *(float *)&v58 + v57[0], v56 + *(float *)&v59, (vec4_t (*)[4])v72);
                if ( CG_CalloutMarkerPing_GetTeammateConfirmed(v55, v63, ++i) )
                {
                  LUI_CoD_GameMP_GetBrColorForIndex(i, &v70);
                  LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])v72, 0.0, 0.0, 1.0, 1.0, &v70, cgMedia.compass.calloutMarkerPing_PipFill);
                }
                LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])v72, 0.0, 0.0, 1.0, 1.0, &colorBlack, cgMedia.compass.calloutMarkerPing_PipBorder);
              }
            }
          }
        }
      }
    }
    goto LABEL_46;
  }
}

/*
==============
CgCompassSystemBR::DrawItemsLayer
==============
*/
void CgCompassSystemBR::DrawItemsLayer(CgCompassSystemBR *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  float value; 
  const dvar_t *v12; 
  float boundsRadius; 
  double IconFadeAlpha; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  int Integer; 
  centity_t *Entity; 
  bool cropPartialMap; 
  CompassType compassType; 
  vec3_t outOrigin; 
  __int64 v30; 
  vec4_t v31; 
  vec2_t position; 
  vec4_t v33; 

  v30 = -2i64;
  *(_QWORD *)v31.v = *(_QWORD *)color->v;
  v31.v[2] = color->v[2];
  value = color->v[3];
  if ( !this->m_isUsingTabletMode )
  {
    v12 = DCONST_DVARFLT_compassTacmapIconAlphaOverride;
    if ( !DCONST_DVARFLT_compassTacmapIconAlphaOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapIconAlphaOverride") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    value = v12->current.value;
  }
  v31.v[3] = value;
  CgCompassSystemMP::ComputeWorldToScreenScale(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, element, luaVM);
  CgCompassSystemMP::DrawPortableRadar(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, minimapOptions->mapMask, element, luaVM);
  CgCompassSystemBR::PushStencilRectAndMapMask(this, minimapOptions->compassType, parentRect, rect, minimapOptions->mapMask, element);
  CgCompassSystemBR::DrawBRBoundingCircles(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemBR::DrawBRBoundingCircleTravelLine(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  boundsRadius = minimapOptions->boundsRadius;
  cropPartialMap = minimapOptions->cropPartialMap;
  compassType = minimapOptions->compassType;
  if ( this->m_uiBRAdventureSearchAreaOmnvarIndex != -1 )
  {
    IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, minimapOptions->compassType);
    if ( (float)(*(float *)&IconFadeAlpha * color->v[3]) != 0.0 )
    {
      Def = BG_Omnvar_GetDef(this->m_uiBRAdventureSearchAreaOmnvarIndex);
      Data = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRAdventureSearchAreaOmnvarIndex);
      Integer = Omnvar_GetInteger(Def, Data);
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, Integer);
      if ( (Entity->flags & 1) != 0 )
      {
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        position.v[0] = outOrigin.v[0];
        position.v[1] = outOrigin.v[1];
        v33 = (vec4_t)unk_151414150;
        CgCompassSystemMP::DrawAreaMarker(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, &v33, 1, 1, position, outOrigin.v[2], cgMedia.compassping_portable_radar_sweep, 0, element, luaVM);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
  }
  CgCompassSystemBR::DrawBRPlaneTravelLine(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  if ( minimapOptions->compassType == COMPASS_TYPE_PARTIAL && minimapOptions->mapMask )
    LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
  LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
  CgCompassSystemMP::DrawPlayerCalloutMarkerPings(this, 1, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, &v31, element, luaVM);
  CG_VehicleHudMP_DrawCompass(this->m_localClientNum, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, &v31, minimapOptions->largeMap, minimapOptions->mapMask, element, luaVM);
  CgCompassSystemMP::DrawScriptableObjectives(this, minimapOptions->compassType, minimapOptions->cropPartialMap, minimapOptions->largeMap, parentRect, rect, minimapOptions->boundsRadius, &v31, element, luaVM);
  CgCompassSystemMP::DrawPlayerPointers(this, minimapOptions->compassType, minimapOptions->cropPartialMap, minimapOptions->largeMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawPlayerCalloutMarkerPings(this, 0, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, &v31, element, luaVM);
  CgCompassSystemMP::DrawTurrets(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawPlanes(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawHeadIcons(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemBR::DrawCalloutMarkerPingPrompt(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemBR::DrawBRMapCircles(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, minimapOptions->mapMask, color, element, luaVM);
  CgCompassSystemBR::DrawAreaCallouts(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawMLGCameras(this, minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, minimapOptions->boundsRadius, color, element, luaVM);
  CgCompassSystemMP::DrawGridLabels(this, minimapOptions->compassType, parentRect, rect, color, element, luaVM);
  ((void (__fastcall *)(CgCompassSystemBR *, _QWORD, bool, const rectDef_s *, const rectDef_s *, _DWORD, const vec4_t *, GfxImage *, LUIElement *, lua_State *))this->DrawScramblers)(this, (unsigned int)minimapOptions->compassType, minimapOptions->cropPartialMap, parentRect, rect, LODWORD(minimapOptions->boundsRadius), color, minimapOptions->mapMask, element, luaVM);
  _XMM0 = LODWORD(element->bottom);
  __asm { vmaxss  xmm4, xmm0, xmm6 }
  _XMM1 = LODWORD(element->right);
  __asm { vmaxss  xmm3, xmm1, xmm6; right }
  _XMM0 = LODWORD(element->top);
  __asm { vmaxss  xmm2, xmm0, xmm6; top }
  _XMM1 = LODWORD(element->left);
  __asm { vmaxss  xmm1, xmm1, xmm6; left }
  LUI_Render_PushStencilRectangle((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&_XMM4);
  CgCompassSystemBR::DrawBRSelectionCursor(this, minimapOptions->compassType, parentRect, rect, minimapOptions->cursorStyle, color, element, luaVM);
  LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
}

/*
==============
CgCompassSystemBR::DrawScramblers
==============
*/
void CgCompassSystemBR::DrawScramblers(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  CompassType v12; 
  const rectDef_s *v14; 
  unsigned int clientNum; 
  characterInfo_t *CharacterInfo; 
  float v17; 
  float v18; 
  double v19; 
  float v20; 
  float v21; 
  ScreenPlacement *v22; 
  int v23; 
  const vec2_t *p_pos; 
  __int64 v25; 
  __int64 m_localClientNum; 
  CgEntitySystem *v27; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *v29; 
  team_t team; 
  team_t v31; 
  char v32; 
  float v33; 
  const GfxImage *m_uiBRDottedCircleMaterial; 
  vec2_t *outVector; 
  vec2_t *outVectora; 
  float *w; 
  float *h; 
  bool Bool_Internal_DebugName; 
  bool v41; 
  bool v42; 
  float v43; 
  float y; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  CompassType compassTypea; 
  float v50; 
  cg_t *cgameGlob; 
  ScreenPlacement *scrPlace; 
  __int64 v53; 
  vec4_t *v54; 
  lua_State *v55; 
  LUIElement *v56; 
  rectDef_s *parentRecta; 
  const vec2_t *v58; 
  CgStatic *LocalClientStatics; 
  rectDef_s *v60; 
  float outAngle; 
  char v62[4]; 
  characterInfo_t *v63; 
  SecureVec3 out; 
  __int64 v65; 
  vec2_t v66; 
  rectDef_s x; 
  vec4_t v68; 
  vec2_t outSize; 
  vec2_t north; 
  vec4_t quadVerts[4]; 

  v65 = -2i64;
  parentRecta = (rectDef_s *)parentRect;
  v12 = compassType;
  compassTypea = compassType;
  v14 = rect;
  v60 = (rectDef_s *)rect;
  v54 = (vec4_t *)color;
  v56 = element;
  v55 = luaVM;
  cgameGlob = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  clientNum = cgameGlob->predictedPlayerState.clientNum;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(outVector) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1103, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", outVector, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( this->m_scramblersUpdated )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1112, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
      __debugbreak();
    if ( CharacterInfo->infoValid && (CharacterInfo->team != TEAM_SPECTATOR || cgameGlob->m_isMLGSpectator) )
    {
      CgCompassSystem::GetCompassYaw(this, v12, cropPartialMap, cgameGlob, &outAngle, &north);
      if ( v54->v[3] != 0.0 )
      {
        CG_CompassCalcDimensions(v12, cgameGlob, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
        v17 = (float)(0.5 * x.w) + x.x;
        v18 = (float)(0.5 * x.h) + x.y;
        scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        v63 = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
        CG_CalcPlayerPos(&out, this->m_localClientNum);
        this->GetDrawnItemScalerRadiusAndMultiplier(this, CUAV, &v50, (float *)v62);
        v19 = ((double (__fastcall *)(CgCompassSystemBR *, _QWORD, __int64))this->GetDrawnItemScaler)(this, (unsigned int)v12, 2i64);
        v20 = (float)(*(float *)&v19 * x.h) / this->m_currentZoomLevel;
        v21 = v20 * 0.5;
        v46 = x.x;
        y = x.y;
        v45 = x.w;
        v43 = x.h;
        v22 = scrPlace;
        ScrPlace_ApplyRect(scrPlace, &v46, &y, &v45, &v43, rect->horzAlign, rect->vertAlign);
        LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_compassScramblerDrawSquadColor, "compassScramblerDrawSquadColor");
        v42 = Dvar_GetBool_Internal_DebugName(DVARBOOL_compassScramblerDrawDottedBorder, "compassScramblerDrawDottedBorder");
        v41 = Dvar_GetBool_Internal_DebugName(DVARBOOL_compassScramblerDrawEnemyBorder, "compassScramblerDrawEnemyBorder");
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (int)ComCharacterLimits::ms_gameData.m_characterCount > 248 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(h) = ComCharacterLimits::ms_gameData.m_characterCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1171, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetCharacterMaxCount() ) <= ( ((200 + 48)) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetCharacterMaxCount()", "MAX_COMPASS_ACTORS_MP", h, 248) )
            __debugbreak();
        }
        v23 = 0;
        p_pos = &this->m_compassScramblers[0][0].pos;
        while ( 1 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( v23 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
            break;
          v58 = p_pos;
          v25 = 4i64;
          v53 = 4i64;
          do
          {
            if ( BYTE1(p_pos[1].y) )
            {
              BYTE1(p_pos[1].y) = 0;
              LODWORD(p_pos[1].v[0]) = 2047;
              CgCompassSystem::WorldPosToCompass(this, v12, cropPartialMap, &x, boundsRadius, &north, (const vec2_t *)&out, p_pos, &v66, NULL);
              v66.v[0] = (float)(v17 - v21) + v66.v[0];
              v66.v[1] = (float)(v18 - v21) + v66.v[1];
              v48 = v20;
              v47 = v20;
              ScrPlace_ApplyRect(v22, (float *)&v66, (float *)&v66 + 1, &v48, &v47, v14->horzAlign, v14->vertAlign);
              LUI_CoD_GenerateQuadVerts(v66.v[0], v66.v[1], v66.v[0] + v48, v66.v[1] + v47, (vec4_t (*)[4])quadVerts);
              LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, (float)(quadVerts[1].v[0] + quadVerts[0].v[0]) * 0.5, (float)(quadVerts[2].v[1] + quadVerts[0].v[1]) * 0.5, COERCE_FLOAT(COERCE_UNSIGNED_INT(quadVerts[1].v[0] - quadVerts[0].v[0]) & _xmm), COERCE_FLOAT(COERCE_UNSIGNED_INT(quadVerts[2].v[1] - quadVerts[0].v[1]) & _xmm), 0.0, 1.0, 0.0, 1, 0.0, 0.0, 1.0, 1.0, &outSize, (GfxImage *)cgMedia.compassping_scrambler_friendly);
              v68 = *v54;
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
              v27 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
              if ( (unsigned int)v23 >= 0x800 )
              {
                LODWORD(w) = 2048;
                LODWORD(outVectora) = v23;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", outVectora, w) )
                  __debugbreak();
              }
              LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
              if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                __debugbreak();
              if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
              {
                if ( v23 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
                {
                  LODWORD(w) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                  LODWORD(outVectora) = v23;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outVectora, w) )
                    __debugbreak();
                }
                v29 = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v23);
              }
              else
              {
                v29 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v23);
              }
              team = v29->team;
              v31 = v63->team;
              if ( cgameGlob == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
                __debugbreak();
              if ( (CgEntitySystem *)((char *)v27 + 760 * v23) == (CgEntitySystem *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
                __debugbreak();
              if ( v31 && v31 == team )
              {
                v32 = 1;
                if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
                  __debugbreak();
                if ( v23 < (int)ComCharacterLimits::ms_gameData.m_clientCount )
                {
                  v33 = v68.v[3];
                  if ( Bool_Internal_DebugName )
                    LUI_CoD_GameMP_GetBrColorForClientNum(v23, &v68);
                  else
                    CgCompassSystemMP::GetFriendlyCompassColor(this, &v68, (CgGlobalsMP *)cgameGlob);
                  v68.v[3] = v33;
                }
                if ( mapMask )
                  LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, (float)(0.5 * v45) + v46, (float)(0.5 * v43) + y, v45, v43, 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, &outSize, mapMask);
                p_pos = v58;
                v14 = v60;
                v12 = compassTypea;
                CgCompassSystemMP::DrawAreaMarker(this, compassTypea, cropPartialMap, parentRecta, v60, boundsRadius, &v68, 1, 1, *v58, v50, cgMedia.compassping_portable_radar_sweep, 0, v56, v55);
                if ( mapMask )
                  LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
              }
              else
              {
                v32 = 0;
                LUI_Render_PushGlitch(0.5);
                v14 = v60;
                v12 = compassTypea;
                CgCompassSystem::DrawPlayerMap(this, compassTypea, cropPartialMap, parentRecta, v60, NULL, v54, mapMask, NULL, NULL, v56, v55);
                LUI_Render_PopGlitch();
                p_pos = v58;
              }
              LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
              if ( v32 || v41 )
              {
                if ( mapMask )
                  LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, (float)(0.5 * v45) + v46, (float)(0.5 * v43) + y, v45, v43, 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, &outSize, mapMask);
                if ( v42 )
                  m_uiBRDottedCircleMaterial = this->m_uiBRDottedCircleMaterial;
                else
                  m_uiBRDottedCircleMaterial = this->m_uiBRCircleMaterial;
                CgCompassSystemMP::DrawAreaMarker(this, v12, cropPartialMap, parentRecta, v14, boundsRadius, &v68, 1, 1, *p_pos, v50, m_uiBRDottedCircleMaterial, s_drawPixelShapeCircle, v56, v55);
                if ( mapMask )
                  LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
              }
              v25 = v53;
              v22 = scrPlace;
            }
            p_pos += 2;
            v58 = p_pos;
            v53 = --v25;
          }
          while ( v25 );
          ++v23;
        }
        this->m_scramblersUpdated = 0;
      }
    }
  }
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemBR::GetBRBoundingCircleInfo
==============
*/
bool CgCompassSystemBR::GetBRBoundingCircleInfo(CgCompassSystemBR *this, int circleIndex, int *outStartTime, int *outDuration, vec2_t *outCurrentPosition, float *outCurrentRadius)
{
  __int64 v8; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  bool result; 
  __int64 v13; 
  const OmnvarDef *v14; 
  const OmnvarData *v15; 
  int Integer; 
  centity_t *Entity; 
  const OmnvarDef *v18; 
  const OmnvarData *v19; 
  int v20; 
  const OmnvarDef *v21; 
  const OmnvarData *v22; 
  const OmnvarDef *v23; 
  const OmnvarData *v24; 
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v26; 
  int v27; 
  float v28; 
  vec3_t outOrigin; 
  vec3_t v30; 
  centity_t *pose; 

  v8 = circleIndex;
  Def = BG_Omnvar_GetDef(this->m_uiPrematchPeriodOmnvarIndex);
  Data = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiPrematchPeriodOmnvarIndex);
  if ( Omnvar_GetInteger(Def, Data) > 0 && !CG_GameInterface_PlayingBRTDM() )
    return 0;
  v13 = v8;
  v14 = BG_Omnvar_GetDef(this->m_uiBRCircleStartEntityOmnvarIndex[v8]);
  v15 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRCircleStartEntityOmnvarIndex[v8]);
  Integer = Omnvar_GetInteger(v14, v15);
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, Integer);
  v18 = BG_Omnvar_GetDef(this->m_uiBRCircleEndEntityOmnvarIndex[v13]);
  v19 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRCircleEndEntityOmnvarIndex[v13]);
  v20 = Omnvar_GetInteger(v18, v19);
  pose = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v20);
  if ( Integer == 2047 )
    return 0;
  v21 = BG_Omnvar_GetDef(this->m_uiBRCircleStartTimeOmnvarIndex[v13]);
  v22 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRCircleStartTimeOmnvarIndex[v13]);
  *outStartTime = CG_Omnvar_GetTime(v21, v22, (const LocalClientNum_t)this->m_localClientNum);
  v23 = BG_Omnvar_GetDef(this->m_uiBRCircleDurationOmnvarIndex[v13]);
  v24 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRCircleDurationOmnvarIndex[v13]);
  *outDuration = Omnvar_GetInteger(v23, v24);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v26 = LocalClientGlobals;
  v27 = *outDuration + *outStartTime;
  if ( v27 > 0 && v27 < LocalClientGlobals->time )
    return 0;
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  if ( Integer == v20 )
  {
    *outCurrentRadius = outOrigin.v[2];
    outCurrentPosition->v[0] = outOrigin.v[0];
    outCurrentPosition->v[1] = outOrigin.v[1];
  }
  else
  {
    CG_GetPoseOrigin(&pose->pose, &v30);
    v28 = (float)(v26->time - *outStartTime) / (float)*outDuration;
    *outCurrentRadius = (float)((float)(1.0 - v28) * outOrigin.v[2]) + (float)(v28 * v30.v[2]);
    outCurrentPosition->v[0] = (float)((float)(v30.v[0] - outOrigin.v[0]) * v28) + outOrigin.v[0];
    outCurrentPosition->v[1] = (float)((float)(v30.v[1] - outOrigin.v[1]) * v28) + outOrigin.v[1];
    memset(&v30, 0, sizeof(v30));
  }
  result = 1;
  memset(&outOrigin, 0, sizeof(outOrigin));
  return result;
}

/*
==============
CgCompassSystemBR::GetDangerCircleInfo
==============
*/
char CgCompassSystemBR::GetDangerCircleInfo(CgCompassSystemBR *this, vec2_t *outPosition, float *outRadius, bool *outIsMoving)
{
  float v8; 
  CgGlobalsMP *LocalClientGlobals; 
  float outCurrentRadius; 
  int outStartTime; 
  int outDuration; 
  vec2_t outCurrentPosition; 

  if ( this->m_uiBRCircleStartEntityOmnvarIndex[0] == -1 || !CgCompassSystemBR::GetBRBoundingCircleInfo(this, 1, &outStartTime, &outDuration, &outCurrentPosition, &outCurrentRadius) )
    return 0;
  v8 = outCurrentPosition.v[0];
  *outRadius = outCurrentRadius;
  outPosition->v[1] = outCurrentPosition.v[1];
  outPosition->v[0] = v8;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *outIsMoving = LocalClientGlobals->time >= outStartTime;
  return 1;
}

/*
==============
CgCompassSystemBR::GetDrawnItemScalerRadiusAndMultiplier
==============
*/
void CgCompassSystemBR::GetDrawnItemScalerRadiusAndMultiplier(CgCompassSystemBR *this, LocationSelectorType locationSelectorType, float *outSelectorRadius, float *outLocationSelectorSizeMultiplier)
{
  const dvar_t *v6; 
  const dvar_t *v7; 

  if ( locationSelectorType == CUAV )
  {
    v6 = DVARFLT_brCompassCUAVScramblerRadius;
    if ( !DVARFLT_brCompassCUAVScramblerRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "brCompassCUAVScramblerRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    *outSelectorRadius = v6->current.value;
    v7 = DVARFLT_brCompassCUAVScramblerLocSelectSizeMultiplier;
    if ( !DVARFLT_brCompassCUAVScramblerLocSelectSizeMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "brCompassCUAVScramblerLocSelectSizeMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    *outLocationSelectorSizeMultiplier = v7->current.value;
  }
  else
  {
    CgCompassSystemMP::GetDrawnItemScalerRadiusAndMultiplier(this, locationSelectorType, outSelectorRadius, outLocationSelectorSizeMultiplier);
  }
}

/*
==============
CgCompassSystemBR::GetLocalClientTeam
==============
*/
__int64 CgCompassSystemBR::GetLocalClientTeam(CgCompassSystemBR *this)
{
  int clientNum; 
  CgStatic *LocalClientStatics; 

  clientNum = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState.clientNum;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  return (unsigned int)CgStatic::GetCharacterInfo(LocalClientStatics, clientNum)->team;
}

/*
==============
CgCompassSystemBR::GetObjectiveBackgroundImage
==============
*/
GfxImage *CgCompassSystemBR::GetObjectiveBackgroundImage(CgCompassSystemBR *this, ObjectiveBackground background, int elevation)
{
  GfxImage *result; 
  int v4; 
  int v5; 
  int v6; 

  switch ( background )
  {
    case LINEAR:
      if ( elevation )
      {
        if ( elevation == 1 )
        {
          result = cgMedia.objectiveBackgroundPentagonAbove->textureTable->image;
        }
        else
        {
          if ( elevation != 2 )
            goto $LN4_116;
          result = cgMedia.objectiveBackgroundPentagonBelow->textureTable->image;
        }
      }
      else
      {
        result = cgMedia.objectiveBackgroundPentagon->textureTable->image;
      }
      break;
    case EASE_IN_QUAD:
      if ( !elevation )
        goto LABEL_34;
      v6 = elevation - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          goto LABEL_34;
        result = cgMedia.objectiveBackgroundNoneBelow->textureTable->image;
      }
      else
      {
        result = cgMedia.objectiveBackgroundNoneAbove->textureTable->image;
      }
      break;
    case EASE_OUT_QUAD:
$LN4_116:
      if ( elevation )
      {
        if ( elevation == 1 )
        {
          result = cgMedia.objectiveBackgroundCircleAbove->textureTable->image;
        }
        else
        {
          if ( elevation != 2 )
            goto $LN6_141;
          result = cgMedia.objectiveBackgroundCircleBelow->textureTable->image;
        }
      }
      else
      {
        result = cgMedia.objectiveBackgroundCircle->textureTable->image;
      }
      break;
    case EASE_IN_OUT_QUAD:
$LN6_141:
      if ( elevation )
      {
        v4 = elevation - 1;
        if ( v4 )
        {
          if ( v4 != 1 )
            goto $LN8_155;
          result = cgMedia.objectiveBackgroundMissionBelow->textureTable->image;
        }
        else
        {
          result = cgMedia.objectiveBackgroundMissionAbove->textureTable->image;
        }
      }
      else
      {
        result = cgMedia.objectiveBackgroundMission->textureTable->image;
      }
      break;
    case EASE_IN_CUBIC:
$LN8_155:
      result = cgMedia.objectiveBackgroundMissionTracked->textureTable->image;
      break;
    case EASE_OUT_CUBIC:
      if ( elevation )
      {
        v5 = elevation - 1;
        if ( v5 )
        {
          if ( v5 != 1 )
            goto $LN10_148;
          result = cgMedia.objectiveBackgroundDiamondBelow->textureTable->image;
        }
        else
        {
          result = cgMedia.objectiveBackgroundDiamondAbove->textureTable->image;
        }
      }
      else
      {
        result = cgMedia.objectiveBackgroundDiamond->textureTable->image;
      }
      break;
    case EASE_IN_OUT_CUBIC:
$LN10_148:
      result = cgMedia.objectiveBackgroundCircleNew->textureTable->image;
      break;
    case EASE_IN_SINE:
      result = cgMedia.objectiveBackgroundDiamondNew->textureTable->image;
      break;
    default:
LABEL_34:
      result = NULL;
      break;
  }
  return result;
}

/*
==============
CgCompassSystemBR::GetObjectiveCompassColor
==============
*/
void CgCompassSystemBR::GetObjectiveCompassColor(CgCompassSystemBR *this, const vec3_t *origin, ObjectiveSide side, ObjectiveSide progressSide, ObjectiveBackground background, int entNum, vec4_t *newColor, vec4_t *backgroundColor, const vec4_t *color)
{
  CgGlobalsMP *LocalClientGlobals; 
  float v12; 
  float v13; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  float v18; 
  const dvar_t *v19; 
  float value; 
  float v21; 
  double Float_Internal_DebugName; 
  const dvar_t *v23; 
  centity_t *Entity; 
  team_t team; 
  team_t v26; 
  CgHandler *Handler; 
  CgStatic *v28; 
  const characterInfo_t *v29; 
  __int16 otherEntityNum; 
  CgGlobalsMP *v31; 
  vec4_t *v32; 
  CgCompassSystemBR *v33; 
  CgMLGSpectator *MLGSpectator; 
  team_t v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  SecureVec3 out; 
  __int64 v47; 

  v47 = -2i64;
  LocalClientGlobals = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_CalcPlayerPos(&out, this->m_localClientNum);
  v13 = fsqrt((float)((float)(origin->v[1] - out.y) * (float)(origin->v[1] - out.y)) + (float)((float)(origin->v[0] - out.x) * (float)(origin->v[0] - out.x)));
  v12 = v13;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 2058, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( CharacterInfo->infoValid )
  {
    *newColor = *color;
    if ( v13 > this->GetRange(this) )
    {
      v16 = DVARFLT_compassObjectiveMaxRange;
      if ( !DVARFLT_compassObjectiveMaxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMaxRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v13 < v16->current.value )
      {
        v18 = 0.0;
        v19 = DVARFLT_compassObjectiveMaxRange;
        if ( !DVARFLT_compassObjectiveMaxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMaxRange") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        value = v19->current.value;
        if ( (float)(value - this->GetRange(this)) != 0.0 )
        {
          v21 = v12 - this->GetRange(this);
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassObjectiveMaxRange, "compassObjectiveMaxRange");
          v18 = v21 / (float)(*(float *)&Float_Internal_DebugName - this->GetRange(this));
        }
        v23 = DVARFLT_compassObjectiveMinAlpha;
        if ( !DVARFLT_compassObjectiveMinAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMinAlpha") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        newColor->v[3] = 1.0 - (float)((float)(1.0 - v23->current.value) * v18);
      }
      else
      {
        v17 = DVARFLT_compassObjectiveMinAlpha;
        if ( !DVARFLT_compassObjectiveMinAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMinAlpha") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        LODWORD(newColor->v[3]) = v17->current.integer;
      }
    }
    else
    {
      newColor->v[3] = 1.0;
    }
    switch ( side )
    {
      case NEUTRAL:
        *backgroundColor = objectiveBackgroundColors[(unsigned __int8)background];
        *newColor = objectiveForegroundColors[(unsigned __int8)background];
        if ( background == EASE_IN_OUT_QUAD && HasActiveMission(this->m_localClientNum) )
        {
          v36 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          newColor->v[0] = *(float *)&v36;
          v37 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          newColor->v[1] = *(float *)&v37;
          v38 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          newColor->v[2] = *(float *)&v38;
          v39 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionAlpha, "compassObjectiveIconActiveMissionAlpha");
          newColor->v[3] = *(float *)&v39;
          v40 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          backgroundColor->v[0] = *(float *)&v40;
          v41 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          backgroundColor->v[1] = *(float *)&v41;
          v42 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          backgroundColor->v[2] = *(float *)&v42;
          v43 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionAlpha, "compassObjectiveIconActiveMissionAlpha");
          backgroundColor->v[3] = *(float *)&v43;
        }
        goto LABEL_61;
      case FRIENDLY:
        if ( !LocalClientGlobals->m_isMLGSpectator )
        {
          CgCompassSystemMP::GetFriendlyCompassColor(this, backgroundColor, LocalClientGlobals);
          goto LABEL_61;
        }
        break;
      case ENEMY:
        if ( !LocalClientGlobals->m_isMLGSpectator )
        {
          v31 = LocalClientGlobals;
          v32 = backgroundColor;
          v33 = this;
LABEL_55:
          CgCompassSystemMP::GetEnemyCompassColor(v33, v32, v31);
          goto LABEL_61;
        }
        break;
      case IN_FLUX:
        if ( progressSide == NEUTRAL )
        {
          if ( background == EASE_OUT_QUAD )
          {
            CgCompassSystem::GetMainHudColor(this, newColor);
            backgroundColor->v[0] = 0.06666667;
            backgroundColor->v[1] = 0.06666667;
            backgroundColor->v[2] = 0.06666667;
            backgroundColor->v[3] = 1.0;
          }
          else
          {
            *backgroundColor = contestColor;
            *newColor = colorBlack;
          }
        }
        goto LABEL_61;
      default:
        Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
        team = CharacterInfo->team;
        v26 = TEAM_ZERO;
        if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( ((Entity->nextState.eType - 1) & 0xFFEF) != 0 )
        {
          if ( (Entity->flags & 1) != 0 )
            v26 = CgEntitySystemMP::CG_EntityMP_GetTeam((const LocalClientNum_t)this->m_localClientNum, Entity);
        }
        else
        {
          Handler = CgHandler::getHandler(this->m_localClientNum);
          v28 = CgStatic::GetLocalClientStatics((const LocalClientNum_t)Handler->m_localClientNum);
          v29 = CgStatic::GetCharacterInfo(v28, entNum);
          if ( v29 )
            v26 = v29->team;
        }
        if ( (unsigned int)(v26 - 1) <= 1 )
        {
          v31 = LocalClientGlobals;
          v32 = newColor;
          v33 = this;
          if ( LocalClientGlobals->m_isMLGSpectator )
          {
            if ( v26 == TEAM_TWO )
            {
LABEL_44:
              CgCompassSystemMP::GetFriendlyCompassColor(v33, v32, v31);
              goto LABEL_61;
            }
          }
          else if ( team == v26 )
          {
            goto LABEL_44;
          }
          goto LABEL_55;
        }
        if ( (Entity->flags & 1) != 0 )
        {
          otherEntityNum = Entity->nextState.otherEntityNum;
          if ( otherEntityNum != 2047 && v26 == TEAM_ZERO )
          {
            v31 = LocalClientGlobals;
            v32 = newColor;
            v33 = this;
            if ( otherEntityNum == LocalClientGlobals->clientNum )
              goto LABEL_44;
            goto LABEL_55;
          }
        }
LABEL_61:
        if ( this->m_isUsingTabletMode )
          newColor->v[3] = color->v[3];
        goto LABEL_63;
    }
    MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)this->m_localClientNum);
    v35 = CgMLGSpectator::GetTeam(MLGSpectator);
    v31 = LocalClientGlobals;
    v32 = backgroundColor;
    v33 = this;
    if ( v35 == TEAM_TWO )
      goto LABEL_44;
    goto LABEL_55;
  }
LABEL_63:
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemBR::GetPlayerCompassColor
==============
*/
void CgCompassSystemBR::GetPlayerCompassColor(CgCompassSystemBR *this, vec4_t *color, const cg_t *cgameGlob)
{
  float v5; 

  v5 = color->v[3];
  LUI_CoD_GameMP_GetBrColorForClientNum(cgameGlob->predictedPlayerState.clientNum, color);
  if ( this->m_isUsingTabletMode )
    color->v[3] = v5;
}

/*
==============
CgCompassSystemBR::GetPlayerCompassMaterial
==============
*/
void CgCompassSystemBR::GetPlayerCompassMaterial(CgCompassSystemBR *this, const cg_t *cgameGlob, const GfxImage **outMaterial)
{
  int v6; 
  __int64 v7; 
  __int64 v8; 
  CgCompassSystemBR *v9; 
  const ScriptableEventCompassIconDef *iconState; 

  if ( outMaterial )
  {
    v6 = ((__int64 (__fastcall *)(CgCompassSystemBR *))this->GetCompassActorCount)(this) - 1;
    if ( v6 <= 0 )
    {
LABEL_6:
      CgCompassSystemMP::GetPlayerCompassMaterial(this, cgameGlob, outMaterial);
    }
    else
    {
      v7 = 0i64;
      v8 = v6;
      v9 = this;
      while ( v9->m_compassActors[0].ownerNum != cgameGlob->predictedPlayerState.clientNum )
      {
        ++v7;
        v9 = (CgCompassSystemBR *)((char *)v9 + 136);
        if ( v7 >= v8 )
          goto LABEL_6;
      }
      iconState = v9->m_compassActors[0].iconState;
      if ( iconState )
        *outMaterial = iconState->friendlyArrow->textureTable->image;
      else
        *outMaterial = cgMedia.compass.friendly_arrow;
    }
  }
}

/*
==============
GetPulseCircleAlpha
==============
*/
float GetPulseCircleAlpha(const __int16 entityNum, const int now)
{
  const dvar_t *v2; 
  __int64 v4; 
  int v5; 
  int integer; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v9; 
  int v10; 
  double v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  float value; 
  double v16; 
  const dvar_t *v17; 
  float v18; 
  int v19; 
  int v20; 
  int v21; 

  v2 = DVARINT_compassBRCircleTimeToMinPulse;
  v4 = entityNum;
  v5 = brCircleInitialPulseTime[entityNum];
  if ( !DVARINT_compassBRCircleTimeToMinPulse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBRCircleTimeToMinPulse") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  if ( now - v5 > integer )
    brCircleInitialPulseTime[v4] = now;
  v7 = DVARINT_compassBRCirclePulseDuration;
  if ( !DVARINT_compassBRCirclePulseDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBRCirclePulseDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = (float)v7->current.integer;
  v9 = DVARINT_compassBRCircleMinPulseDuration;
  if ( !DVARINT_compassBRCircleMinPulseDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBRCircleMinPulseDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.integer;
  v11 = I_fclamp((float)(now - brCircleInitialPulseTime[v4]) / (float)integer, 0.0, 1.0);
  v12 = (float)(now - brCirclePulseTime[v4]) / (float)((float)((float)v10 * *(float *)&v11) + (float)((float)(1.0 - *(float *)&v11) * v8));
  if ( v12 >= 1.0 )
  {
    brCirclePulseTime[v4] = now;
    return FLOAT_1_0;
  }
  else
  {
    v13 = DVARFLT_compassBRCirclePulseMinAlpha;
    v14 = (float)((float)(1.0 - v12) * 2.0) - 1.0;
    if ( !DVARFLT_compassBRCirclePulseMinAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBRCirclePulseMinAlpha") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    value = v13->current.value;
    v16 = I_fclamp(COERCE_FLOAT(LODWORD(v14) & _xmm), 0.0, 1.0);
    v17 = DVARINT_compassBRCirclePulseEaseType;
    v18 = (float)((float)(1.0 - *(float *)&v16) * value) + *(float *)&v16;
    if ( !DVARINT_compassBRCirclePulseEaseType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBRCirclePulseEaseType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v19 = v17->current.integer;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
        return v18 * v18;
      v21 = v20 - 1;
      if ( !v21 )
        return (float)(v18 * v18) * v18;
      if ( v21 == 1 )
        return (float)((float)(v18 * v18) * v18) * v18;
    }
    return 1.0 - cosf_0(v18 * 1.5707964);
  }
}

/*
==============
CgCompassSystemBR::GetRange
==============
*/
float CgCompassSystemBR::GetRange(CgCompassSystemBR *this)
{
  int v2; 
  const dvar_t *v3; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 

  v2 = *CgCompassSystem::GetCurrentCompassDisplayType(this);
  if ( (v2 & 2) != 0 )
  {
    v3 = DCONST_DVARFLT_radialSensorRange;
    if ( !DCONST_DVARFLT_radialSensorRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorRange") )
      __debugbreak();
LABEL_15:
    Dvar_CheckFrontendServerThread(v3);
    return v3->current.value;
  }
  if ( (v2 & 4) != 0 )
  {
    v3 = DVARFLT_heartbeatSensorTabletRange;
    if ( !DVARFLT_heartbeatSensorTabletRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorTabletRange") )
      __debugbreak();
    goto LABEL_15;
  }
  if ( (v2 & 8) != 0 )
  {
    v3 = DCONST_DVARFLT_heartbeatSensorEMPRange;
    if ( !DCONST_DVARFLT_heartbeatSensorEMPRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heartbeatSensorEMPRange") )
      __debugbreak();
    goto LABEL_15;
  }
  IndexByName = BG_Omnvar_GetIndexByName("ui_br_minimap_radius");
  Def = BG_Omnvar_GetDef(IndexByName);
  Data = CG_Omnvar_GetData(this->m_localClientNum, IndexByName);
  return (float)Omnvar_GetInteger(Def, Data);
}

/*
==============
HasActiveMission
==============
*/
bool HasActiveMission(LocalClientNum_t localClientNum)
{
  unsigned int IndexByName; 
  unsigned int v3; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 

  IndexByName = BG_Omnvar_GetIndexByName("ui_br_objective_index");
  v3 = IndexByName;
  if ( IndexByName == -1 )
    return 0;
  Def = BG_Omnvar_GetDef(IndexByName);
  Data = CG_Omnvar_GetData(localClientNum, v3);
  return Omnvar_GetInteger(Def, Data) > 0;
}

/*
==============
CgCompassSystemBR::InitAdventureSearchAreaOmnvars
==============
*/
void CgCompassSystemBR::InitAdventureSearchAreaOmnvars(CgCompassSystemBR *this)
{
  this->m_uiBRAdventureSearchAreaOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_adventure_search_area");
}

/*
==============
CgCompassSystemBR::InitCircleOmnvars
==============
*/
void CgCompassSystemBR::InitCircleOmnvars(CgCompassSystemBR *this)
{
  int v1; 
  unsigned int *m_uiBRCircleEndEntityOmnvarIndex; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  char dest[256]; 

  v1 = 0;
  m_uiBRCircleEndEntityOmnvarIndex = this->m_uiBRCircleEndEntityOmnvarIndex;
  do
  {
    LODWORD(v3) = v1;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v3, "_start_entity");
    *(m_uiBRCircleEndEntityOmnvarIndex - 2) = BG_Omnvar_GetIndexByName(dest);
    LODWORD(v4) = v1;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v4, "_end_entity");
    *m_uiBRCircleEndEntityOmnvarIndex = BG_Omnvar_GetIndexByName(dest);
    LODWORD(v5) = v1;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v5, "_start_time");
    m_uiBRCircleEndEntityOmnvarIndex[2] = BG_Omnvar_GetIndexByName(dest);
    LODWORD(v6) = v1;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v6, "_duration");
    ++v1;
    m_uiBRCircleEndEntityOmnvarIndex[4] = BG_Omnvar_GetIndexByName(dest);
    ++m_uiBRCircleEndEntityOmnvarIndex;
  }
  while ( v1 < 2 );
}

/*
==============
CgCompassSystemBR::InitCompass
==============
*/
void CgCompassSystemBR::InitCompass(CgCompassSystemBR *this)
{
  int v2; 
  unsigned int *m_uiBRCircleEndEntityOmnvarIndex; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  char dest[256]; 

  CgCompassSystemMP::InitCompass(this);
  v2 = 0;
  m_uiBRCircleEndEntityOmnvarIndex = this->m_uiBRCircleEndEntityOmnvarIndex;
  do
  {
    LODWORD(v4) = v2;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v4, "_start_entity");
    *(m_uiBRCircleEndEntityOmnvarIndex - 2) = BG_Omnvar_GetIndexByName(dest);
    LODWORD(v5) = v2;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v5, "_end_entity");
    *m_uiBRCircleEndEntityOmnvarIndex = BG_Omnvar_GetIndexByName(dest);
    LODWORD(v6) = v2;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v6, "_start_time");
    m_uiBRCircleEndEntityOmnvarIndex[2] = BG_Omnvar_GetIndexByName(dest);
    LODWORD(v7) = v2;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v7, "_duration");
    ++v2;
    m_uiBRCircleEndEntityOmnvarIndex[4] = BG_Omnvar_GetIndexByName(dest);
    ++m_uiBRCircleEndEntityOmnvarIndex;
  }
  while ( v2 < 2 );
  this->m_uiPrematchPeriodOmnvarIndex = BG_Omnvar_GetIndexByName("ui_prematch_period");
  this->m_uiBRInfilStartedOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_infil_started");
  this->m_uiBRInfilledOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_infiled");
  this->m_uiBRPlanePathStartXOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_c130_path_start_x");
  this->m_uiBRPlanePathStartYOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_c130_path_start_y");
  this->m_uiBRPlanePathEndXOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_c130_path_end_x");
  this->m_uiBRPlanePathEndYOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_c130_path_end_y");
  this->m_uiBRAdventureSearchAreaOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_adventure_search_area");
  CgCompassSystemMP::InitLocks(this);
  Dvar_SetFloat_Internal(DVARFLT_compassObjectiveIconBackgroundScalar, 1.0);
  Dvar_SetFloat_Internal(DVARFLT_minimapPlayerCirclePingRadius, -2.5);
  Dvar_SetInt_Internal(DVARINT_minimapPlayerCirclePingDuration, 375);
  Dvar_SetFloat_Internal(DVARFLT_compassVehicleHideEnemyDistance, 4000.0);
  this->m_uiBRTravelLineMaterial = Image_Register("white", IMAGE_TRACK_HUD);
  this->m_uiBRCircleMaterial = Image_Register("br_circle_sdf", IMAGE_TRACK_HUD);
  this->m_uiBRDottedCircleMaterial = Image_Register("br_circle_dotted_sdf", IMAGE_TRACK_HUD);
  this->m_brGas = Image_Register("white", IMAGE_TRACK_UI);
  this->m_outerCircle = Image_Register("minimap_circle_mask_inv", IMAGE_TRACK_UI);
  this->m_uiBRLineArrowMaterial = Image_Register("compass_arrow", IMAGE_TRACK_HUD);
  circleIcons[0] = NULL;
  circleIcons[1] = Image_Register("ui_mp_br_infil_squad_icon_base", IMAGE_TRACK_HUD);
  circleIcons[2] = Image_Register("ui_mp_br_splash_mission_obj_scavengerhunt_pro", IMAGE_TRACK_HUD);
  circleIcons[3] = Image_Register("ui_mp_br_ping_icon_assassin_tablet", IMAGE_TRACK_HUD);
  circleIcons[4] = Image_Register("ui_mp_br_ping_icon_cash", IMAGE_TRACK_HUD);
  circleIcons[5] = Image_Register("ui_mp_br_ping_icon_plunder_leader", IMAGE_TRACK_HUD);
  circleIcons[6] = Image_Register("ui_mp_br_ping_icon_juggernaut", IMAGE_TRACK_HUD);
  circleIcons[7] = Image_Register("ui_mp_br_pinned_minimap_icon_x1_04", IMAGE_TRACK_HUD);
  circleIconsClipped[0] = NULL;
  circleIconsClipped[1] = Image_Register("ui_mp_br_infil_squad_icon_base", IMAGE_TRACK_HUD);
  circleIconsClipped[2] = Image_Register("ui_mp_br_splash_mission_obj_scavengerhunt_pro", IMAGE_TRACK_HUD);
  circleIconsClipped[3] = Image_Register("ui_mp_br_splash_mission_obj_assassin_pro", IMAGE_TRACK_HUD);
  circleIconsClipped[4] = Image_Register("ui_mp_br_splash_mission_obj_cash_pro", IMAGE_TRACK_HUD);
  circleIconsClipped[5] = Image_Register("ui_mp_br_ping_icon_plunder_leader", IMAGE_TRACK_HUD);
  circleIconsClipped[6] = Image_Register("ui_mp_br_ping_icon_juggernaut", IMAGE_TRACK_HUD);
  circleIconsClipped[7] = Image_Register("ui_mp_br_pinned_minimap_icon_x1_04", IMAGE_TRACK_HUD);
}

/*
==============
CgCompassSystemBR::InitCompassColors
==============
*/
void CgCompassSystemBR::InitCompassColors(CgCompassSystemBR *this)
{
  int ControllerFromClient; 
  const char **v3; 
  __int64 v4; 
  int v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  float *v10; 
  const char **v11; 
  vec3_t *v12; 
  int v13; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 

  CgCompassSystemMP::InitCompassColors(this);
  if ( !CL_AllLocalClientsInactive() && !Com_FrontEnd_IsInFrontEnd() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
    if ( GamerProfile_IsProfileLoggedIn(ControllerFromClient) )
    {
      v3 = &v17;
      v18 = "None";
      v4 = 0i64;
      v19 = "Carry";
      v5 = 0;
      v20 = "Mission";
      v21 = "MissionTracked";
      v22 = "POI";
      v17 = "Default";
      v23 = "Default";
      v24 = "Default";
      do
      {
        v6 = j_va("Objective.objectiveBackground%s", *v3);
        LUI_COD_GetSwatchRGBColor(this->m_localClientNum, v6, (vec3_t *)&objectiveBackgroundColors[v5]);
        v7 = *v3;
        objectiveBackgroundColors[v4].v[3] = 1.0;
        v8 = j_va("Objective.objectiveForeground%s", v7);
        LUI_COD_GetSwatchRGBColor(this->m_localClientNum, v8, (vec3_t *)&objectiveForegroundColors[v5]);
        objectiveForegroundColors[v4].v[3] = 1.0;
        ++v3;
        ++v4;
        ++v5;
      }
      while ( v4 < 8 );
      this->m_uiCursorStyles[0].cursorReticleMaterial = Image_Register("ui_mp_br_mapmenu_ping_cursor", IMAGE_TRACK_HUD);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "BattleRoyale.CursorStyle1", (vec3_t *)&this->m_uiCursorStyles[0].cursorColor);
      this->m_uiCursorStyles[0].cursorColor.v[3] = 1.0;
      this->m_uiCursorStyles[1].cursorReticleMaterial = Image_Register("ui_mp_br_mapmenu_ping_cursor_killstreak", IMAGE_TRACK_HUD);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "BattleRoyale.CursorStyle2", (vec3_t *)&this->m_uiCursorStyles[1].cursorColor);
      _XMM7 = LODWORD(FLOAT_1_0);
      v17 = "BRMapItemColor.mapItemColor_0";
      v10 = (float *)&unk_15141408C;
      this->m_uiCursorStyles[1].cursorColor.v[3] = 1.0;
      v18 = "BRMapItemColor.mapItemColor_1_brCircle";
      v11 = &v17;
      v19 = "BRMapItemColor.mapItemColor_2";
      v12 = &s_mapCircleColorList;
      v13 = 0;
      v20 = "BRMapItemColor.mapItemColor_3";
      v21 = "BRMapItemColor.mapItemColor_4";
      v22 = "BRMapItemColor.mapItemColor_5";
      v23 = "BRMapItemColor.mapItemColor_6";
      v24 = "BRMapItemColor.mapItemColor_7";
      v25 = "BRMapItemColor.mapItemColor_8";
      v26 = "BRMapItemColor.mapItemColor_9";
      v27 = "BRMapItemColor.mapItemColor_10";
      v28 = "BRMapItemColor.mapItemColor_11";
      v29 = "BRMapItemColor.mapItemColor_12";
      v30 = "BRMapItemColor.mapItemColor_13_mission";
      do
      {
        LUI_COD_GetSwatchRGBColor(this->m_localClientNum, *v11, v12);
        _XMM0 = (unsigned int)v13;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm7, xmm6, xmm2
        }
        ++v13;
        v12 = (vec3_t *)((char *)v12 + 16);
        *v10 = *(float *)&_XMM0;
        v10 += 4;
        ++v11;
      }
      while ( v13 < 14 );
    }
    else
    {
      Com_PrintError(13, "Attempting to InitCompassColors without a profile logged in.  Aborting.\n");
    }
  }
}

/*
==============
CgCompassSystemBR::InitPlaneTravelLineOmnvars
==============
*/
void CgCompassSystemBR::InitPlaneTravelLineOmnvars(CgCompassSystemBR *this)
{
  this->m_uiPrematchPeriodOmnvarIndex = BG_Omnvar_GetIndexByName("ui_prematch_period");
  this->m_uiBRInfilStartedOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_infil_started");
  this->m_uiBRInfilledOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_infiled");
  this->m_uiBRPlanePathStartXOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_c130_path_start_x");
  this->m_uiBRPlanePathStartYOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_c130_path_start_y");
  this->m_uiBRPlanePathEndXOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_c130_path_end_x");
  this->m_uiBRPlanePathEndYOmnvarIndex = BG_Omnvar_GetIndexByName("ui_br_c130_path_end_y");
}

/*
==============
CgCompassSystemBR::IsItemFiltered
==============
*/
bool CgCompassSystemBR::IsItemFiltered(CgCompassSystemBR *this, TacMapFilterFlags flag)
{
  unsigned __int64 v2; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = (unsigned int)flag;
  if ( (unsigned int)flag >= TAC_MAP_FILTER_COUNT )
  {
    v8 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 2497, ASSERT_TYPE_ASSERT, "(unsigned)( pos ) < (unsigned)( TacMapFilterFlags::TAC_MAP_FILTER_COUNT )", "pos doesn't index TacMapFilterFlags::TAC_MAP_FILTER_COUNT\n\t%i not in [0, %i)", flag, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 0x20 )
  {
    LODWORD(v7) = 32;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v7) )
      __debugbreak();
  }
  return ((0x80000000 >> (v2 & 0x1F)) & this->m_uiTacMapFilters.array[v2 >> 5]) != 0;
}

/*
==============
CgCompassSystemBR::IsObjectiveFiltered
==============
*/
bool CgCompassSystemBR::IsObjectiveFiltered(CgCompassSystemBR *this, CompassType compassType, ObjectiveBackground background)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  const char *v6; 
  const dvar_t *v7; 
  double Float_Internal_DebugName; 

  if ( compassType != COMPASS_TYPE_TACMAP )
    return 0;
  if ( background == EASE_OUT_CUBIC )
  {
    v4 = DVARBOOL_compassTacmapFilterPOI;
    if ( !DVARBOOL_compassTacmapFilterPOI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapFilterPOI") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled || this->IsItemFiltered(this, TAC_MAP_FILTER_POI) )
      return 1;
    v5 = DVARFLT_compassTacmapFilterZoomPOI;
    v6 = "compassTacmapFilterZoomPOI";
  }
  else
  {
    if ( background != EASE_IN_OUT_QUAD )
      return 0;
    v7 = DVARBOOL_compassTacmapFilterObjective;
    if ( !DVARBOOL_compassTacmapFilterObjective && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapFilterObjective") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled || this->IsItemFiltered(this, TAC_MAP_FILTER_MISSIONS) || Dvar_GetBool_Internal_DebugName(DVARBOOL_compassTacmapFilterObjectiveIfActive, "compassTacmapFilterObjectiveIfActive") && HasActiveMission(this->m_localClientNum) )
      return 1;
    v5 = DVARFLT_compassTacmapFilterZoomMission;
    v6 = "compassTacmapFilterZoomMission";
  }
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v5, v6);
  return *(float *)&Float_Internal_DebugName < this->m_currentZoomLevel;
}

/*
==============
CgCompassSystemBR::IsObjectiveMini
==============
*/
bool CgCompassSystemBR::IsObjectiveMini(CgCompassSystemBR *this, CompassType compassType, ObjectiveBackground background)
{
  const dvar_t *v4; 
  const char *v5; 

  if ( compassType == COMPASS_TYPE_TACMAP )
  {
    if ( background == EASE_OUT_CUBIC )
    {
      v4 = DVARFLT_compassTacmapMiniIconZoomPOI;
      if ( !DVARFLT_compassTacmapMiniIconZoomPOI )
      {
        v5 = "compassTacmapMiniIconZoomPOI";
        goto LABEL_5;
      }
      goto LABEL_7;
    }
    if ( background == EASE_IN_OUT_QUAD )
    {
      v4 = DVARFLT_compassTacmapMiniIconZoomMission;
      if ( !DVARFLT_compassTacmapMiniIconZoomMission )
      {
        v5 = "compassTacmapMiniIconZoomMission";
LABEL_5:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
          __debugbreak();
      }
LABEL_7:
      Dvar_CheckFrontendServerThread(v4);
      return v4->current.value < this->m_currentZoomLevel;
    }
  }
  return 0;
}

/*
==============
CgCompassSystemBR::IsVehicleFiltered
==============
*/
char CgCompassSystemBR::IsVehicleFiltered(CgCompassSystemBR *this, CompassType compassType, const centity_t *cent)
{
  const dvar_t *v5; 
  const dvar_t *v7; 
  __int64 m_localClientNum; 
  team_t v9; 
  int clientNum; 
  CgStatic *LocalClientStatics; 
  double Float_Internal_DebugName; 
  float v13; 
  __int64 v14; 
  __int64 v15; 
  vec3_t outOrigin; 
  SecureVec3 out; 
  __int64 v18; 

  v18 = -2i64;
  if ( compassType != COMPASS_TYPE_TACMAP )
    return 0;
  v5 = DVARBOOL_compassTacmapFilterVehicle;
  if ( !DVARBOOL_compassTacmapFilterVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapFilterVehicle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    return 1;
  v7 = DVARFLT_compassTacmapFilterZoomVehicle;
  if ( !DVARFLT_compassTacmapFilterZoomVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapFilterZoomVehicle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.value < this->m_currentZoomLevel )
    return 1;
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(v15) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v15) )
      __debugbreak();
  }
  if ( (unsigned int)m_localClientNum >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v15) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v14) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum] )
  {
    LODWORD(v15) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v15) )
      __debugbreak();
  }
  v9 = CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum]->GetTeam(CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum], &cent->nextState);
  clientNum = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState.clientNum;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  if ( CgStatic::GetCharacterInfo(LocalClientStatics, clientNum)->team == v9 )
    return 0;
  if ( this->IsItemFiltered(this, TAC_MAP_FILTER_VEHICLE) )
    return 1;
  if ( v9 && (Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassVehicleHideEnemyDistance, "compassVehicleHideEnemyDistance"), *(float *)&Float_Internal_DebugName >= 0.0) && (CG_CalcPlayerPos(&out, this->m_localClientNum), CG_GetPoseOrigin(&cent->pose, &outOrigin), v13 = (float)((float)(outOrigin.v[1] - out.y) * (float)(outOrigin.v[1] - out.y)) + (float)((float)(outOrigin.v[0] - out.x) * (float)(outOrigin.v[0] - out.x)), memset(&outOrigin, 0, sizeof(outOrigin)), memset(&out, 0, sizeof(out)), v13 > (float)(*(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName)) )
    return 1;
  else
    return 0;
}

/*
==============
CgCompassSystemBR::IsVehicleMini
==============
*/
bool CgCompassSystemBR::IsVehicleMini(CgCompassSystemBR *this, CompassType compassType)
{
  const dvar_t *v3; 

  if ( compassType != COMPASS_TYPE_TACMAP )
    return 0;
  v3 = DVARFLT_compassTacmapMiniIconZoomVehicle;
  if ( !DVARFLT_compassTacmapMiniIconZoomVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapMiniIconZoomVehicle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.value < this->m_currentZoomLevel;
}

/*
==============
CgCompassSystemBR::PopStencilRectAndMapMask
==============
*/
void CgCompassSystemBR::PopStencilRectAndMapMask(CgCompassSystemBR *this, CompassType compassType, GfxImage *mapMask)
{
  if ( compassType == COMPASS_TYPE_PARTIAL && mapMask )
    LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
  LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
}

/*
==============
CgCompassSystemBR::PushStencilRectAndMapMask
==============
*/
void CgCompassSystemBR::PushStencilRectAndMapMask(CgCompassSystemBR *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, GfxImage *mapMask, LUIElement *element)
{
  const cg_t *LocalClientGlobals; 
  LocalClientNum_t m_localClientNum; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float maskHeight; 
  float v24; 
  float v25; 
  float v26; 
  float x; 
  float y; 
  float w; 
  float alphaOffset[3]; 
  vec2_t outSize; 

  _XMM0 = LODWORD(element->bottom);
  _XMM1 = LODWORD(element->top);
  __asm { vmaxss  xmm4, xmm0, xmm6 }
  _XMM0 = LODWORD(element->right);
  __asm { vmaxss  xmm3, xmm0, xmm6; right }
  _XMM0 = LODWORD(element->left);
  __asm
  {
    vmaxss  xmm2, xmm1, xmm6; top
    vmaxss  xmm1, xmm0, xmm6; left
  }
  LUI_Render_PushStencilRectangle((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&_XMM4);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &x, &y, &w, alphaOffset);
  if ( compassType == COMPASS_TYPE_PARTIAL )
  {
    if ( mapMask )
    {
      m_localClientNum = this->m_localClientNum;
      vertAlign = rect->vertAlign;
      horzAlign = rect->horzAlign;
      v26 = (float)(w * 0.5) + x;
      v25 = (float)(alphaOffset[0] * 0.5) + y;
      v24 = w;
      maskHeight = alphaOffset[0];
      ActivePlacement = ScrPlace_GetActivePlacement(m_localClientNum);
      ScrPlace_ApplyRect(ActivePlacement, &v26, &v25, &v24, &maskHeight, horzAlign, vertAlign);
      LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
      LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, v26, v25, v24, maskHeight, 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, &outSize, mapMask);
    }
  }
}

/*
==============
CgCompassSystemBR::SetCurrentFilters
==============
*/
void CgCompassSystemBR::SetCurrentFilters(CgCompassSystemBR *this, bitarray<32> filters)
{
  this->m_uiTacMapFilters = filters;
}

/*
==============
CgCompassSystemBR::SetMapCircleColorOverrideFromOwnerInfluence
==============
*/
void CgCompassSystemBR::SetMapCircleColorOverrideFromOwnerInfluence(CgCompassSystemBR *this, const LocalClientNum_t localClientNum, const characterInfo_t *const localPlayer, const __int16 ownerEntNum, vec4_t *out_circleColor)
{
  const cg_t *LocalClientGlobals; 
  CgGlobalsMP *v10; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  team_t team; 
  int *v14; 

  if ( localPlayer && localPlayer->infoValid && ownerEntNum != 2047 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v10 = (CgGlobalsMP *)LocalClientGlobals;
    if ( ownerEntNum == localPlayer->entityNum )
    {
      this->GetPlayerCompassColor(this, out_circleColor, LocalClientGlobals);
    }
    else
    {
      LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, ownerEntNum);
      if ( CharacterInfo )
      {
        if ( CharacterInfo->infoValid )
        {
          team = localPlayer->team;
          if ( team )
          {
            if ( CharacterInfo->team == team )
            {
              v14 = (int *)LocalClientStatics->GetClientInfo(LocalClientStatics, ownerEntNum);
              if ( v14 )
              {
                if ( *v14 != 2047 )
                {
                  CG_ScoreboardMP_GetClientScore(localClientNum, *v14);
                  CgCompassSystemMP::GetFriendlyCompassColor(this, out_circleColor, v10);
                }
              }
            }
          }
        }
      }
    }
  }
}

