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
  char v16; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  int Integer; 
  centity_t *Entity; 
  float v26; 
  float v27; 
  vec3_t outOrigin; 
  __int64 v29; 
  vec2_t position; 
  vec4_t v31; 

  v29 = -2i64;
  if ( this->m_uiBRAdventureSearchAreaOmnvarIndex != -1 )
  {
    *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rax+0Ch]
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm1, xmm0
    }
    if ( !v16 )
    {
      Def = BG_Omnvar_GetDef(this->m_uiBRAdventureSearchAreaOmnvarIndex);
      Data = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRAdventureSearchAreaOmnvarIndex);
      Integer = Omnvar_GetInteger(Def, Data);
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, Integer);
      if ( (Entity->flags & 1) != 0 )
      {
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+108h+outOrigin]
          vmovss  dword ptr [rsp+108h+var_70], xmm0
          vmovss  xmm1, dword ptr [rsp+108h+outOrigin+4]
          vmovss  dword ptr [rsp+108h+var_70+4], xmm1
          vmovups xmm0, xmmword ptr cs:unk_151414150
          vmovups xmmword ptr [rsp+108h+var_68], xmm0
          vmovss  xmm0, dword ptr [rsp+108h+outOrigin+8]
          vmovss  [rsp+108h+var_B8], xmm0
          vmovss  xmm0, [rsp+108h+boundsRadius]
          vmovss  [rsp+108h+var_E0], xmm0
        }
        CgCompassSystemMP::DrawAreaMarker(this, compassType, cropPartialMap, parentRect, rect, v26, &v31, 1, 1, position, v27, cgMedia.compassping_portable_radar_sweep, 0, element, luaVM);
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
  LocalClientNum_t m_localClientNum; 
  const cg_t *LocalClientGlobals; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  CgCompassSystem *CompassSystem; 
  const char *v42; 
  const ScreenPlacement *v43; 
  GfxFont *FontHandle; 
  const dvar_t *v46; 
  const dvar_t *v70; 
  __int64 integer64; 
  const char *v73; 
  __int64 v74; 
  __int64 v75; 
  char v76; 
  __int64 v77; 
  char v78; 
  int v79; 
  StringTable *v80; 
  int v81; 
  const char *ColumnValueForRow; 
  const char *v85; 
  const char *v87; 
  StringTable *v88; 
  const char *v90; 
  const char *v91; 
  __int64 v92; 
  __int64 v93; 
  const char *v110; 
  int fontSize; 
  const char *v112; 
  float x; 
  float xa; 
  float xb; 
  float y; 
  float ya; 
  float w; 
  float wa; 
  float h; 
  float ha; 
  float material; 
  StringTable *tablePtr; 
  float vMax; 
  float v157; 
  float v158; 
  float v159[5]; 
  int result; 
  GfxFont *font; 
  vec4_t v162; 
  vec4_t v163; 
  vec4_t quadVerts[4]; 
  void *retaddr; 

  if ( compassType == COMPASS_TYPE_TACMAP )
  {
    _R11 = &retaddr;
    _R12 = element;
    _R14 = this;
    m_localClientNum = this->m_localClientNum;
    __asm
    {
      vmovss  xmm0, dword ptr [r12+0D8h]
      vmovss  xmm1, dword ptr [r12+0D0h]
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vxorps  xmm10, xmm10, xmm10
      vmaxss  xmm4, xmm0, xmm10
      vmovss  xmm0, dword ptr [r12+0D4h]
      vmovaps xmmword ptr [r11-98h], xmm11
      vmaxss  xmm3, xmm0, xmm10; right
      vmovss  xmm0, dword ptr [r12+0CCh]
      vmaxss  xmm2, xmm1, xmm10; top
      vmovaps xmmword ptr [r11-0C8h], xmm14
      vmaxss  xmm1, xmm0, xmm10; left
      vmovss  dword ptr [rsp+1F0h+x], xmm4
      vmovaps xmmword ptr [r11-0D8h], xmm15
    }
    LUI_Render_PushStencilRectangle(m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, x);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)_R14->m_localClientNum);
    CG_CompassCalcDimensions(COMPASS_TYPE_TACMAP, LocalClientGlobals, parentRect, rect, &v158, v159, &v157, &vMax);
    LODWORD(parentRect) = rect->vertAlign;
    horzAlign = rect->horzAlign;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)_R14->m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, &v158, v159, &v157, &vMax, horzAlign, (int)parentRect);
    CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)_R14->m_localClientNum);
    _RAX = CgCompassSystem::GetTacmapMapCenter(CompassSystem);
    __asm
    {
      vmovss  xmm11, cs:__real@3f800000
      vdivss  xmm9, xmm11, dword ptr [r14+20h]
      vmovss  xmm0, dword ptr [rax]
      vmovss  [rbp+0F0h+var_160], xmm0
      vmovss  xmm0, dword ptr [rax+4]
      vmovss  [rbp+0F0h+var_15C], xmm0
      vmovss  dword ptr [rsp+1F0h+var_180], xmm9
    }
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    v42 = j_va("mp/map_callouts/%s_callouts.csv", cls.m_activeGameMapName);
    StringTable_GetAsset(v42, (const StringTable **)&tablePtr);
    v43 = ScrPlace_GetActivePlacement((const LocalClientNum_t)_R14->m_localClientNum);
    __asm { vmovaps xmm2, xmm11; scale }
    FontHandle = UI_GetFontHandle(v43, 1, *(float *)&_XMM2);
    v46 = DCONST_DVARFLT_compassAreaCalloutsTextHeightScale;
    font = FontHandle;
    if ( !DCONST_DVARFLT_compassAreaCalloutsTextHeightScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsTextHeightScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    __asm
    {
      vmovss  xmm0, [rbp+0F0h+vMax]
      vmulss  xmm14, xmm0, dword ptr [rbx+28h]
    }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsBackgroundSidePadding;
    if ( !DCONST_DVARFLT_compassAreaCalloutsBackgroundSidePadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBackgroundSidePadding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsBackgroundTopPadding;
    __asm { vmovss  [rbp+0F0h+var_158], xmm0 }
    if ( !DCONST_DVARFLT_compassAreaCalloutsBackgroundTopPadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBackgroundTopPadding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsBackgroundBottomPadding;
    __asm { vmovss  [rbp+0F0h+var_154], xmm0 }
    if ( !DCONST_DVARFLT_compassAreaCalloutsBackgroundBottomPadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBackgroundBottomPadding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm15, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsTextColorR;
    if ( !DCONST_DVARFLT_compassAreaCalloutsTextColorR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsTextColorR") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsTextColorG;
    __asm { vmovss  dword ptr [rbp+0F0h+var_130], xmm0 }
    if ( !DCONST_DVARFLT_compassAreaCalloutsTextColorG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsTextColorG") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsTextColorB;
    __asm { vmovss  dword ptr [rbp+0F0h+var_130+4], xmm0 }
    if ( !DCONST_DVARFLT_compassAreaCalloutsTextColorB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsTextColorB") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsTextColorA;
    __asm { vmovss  dword ptr [rbp+0F0h+var_130+8], xmm0 }
    if ( !DCONST_DVARFLT_compassAreaCalloutsTextColorA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsTextColorA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsBGColorR;
    __asm { vmovss  dword ptr [rbp+0F0h+var_130+0Ch], xmm0 }
    if ( !DCONST_DVARFLT_compassAreaCalloutsBGColorR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBGColorR") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsBGColorG;
    __asm { vmovss  dword ptr [rbp+0F0h+var_140], xmm0 }
    if ( !DCONST_DVARFLT_compassAreaCalloutsBGColorG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBGColorG") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsBGColorB;
    __asm { vmovss  dword ptr [rbp+0F0h+var_140+4], xmm0 }
    if ( !DCONST_DVARFLT_compassAreaCalloutsBGColorB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBGColorB") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_compassAreaCalloutsBGColorA;
    __asm { vmovss  dword ptr [rbp+0F0h+var_140+8], xmm0 }
    if ( !DCONST_DVARFLT_compassAreaCalloutsBGColorA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassAreaCalloutsBGColorA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    v70 = DVARSTR_ui_br_variant;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [rbp+0F0h+var_140+0Ch], xmm0
    }
    if ( !DVARSTR_ui_br_variant && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_br_variant") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    integer64 = v70->current.integer64;
    v73 = "x1";
    v74 = 0x7FFFFFFFi64;
    if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v75 = integer64 - (_QWORD)"x1";
    while ( 1 )
    {
      v76 = v73[v75];
      v77 = v74;
      v78 = *v73++;
      --v74;
      if ( !v77 )
      {
LABEL_51:
        v79 = 0;
        goto LABEL_52;
      }
      if ( v76 != v78 )
        break;
      if ( !v76 )
        goto LABEL_51;
    }
    v79 = 1;
    if ( v76 < v78 )
      v79 = -1;
LABEL_52:
    v80 = tablePtr;
    v81 = 0;
    if ( tablePtr->rowCount > 0 )
    {
      __asm
      {
        vmovaps [rsp+1F0h+var_A8+8], xmm12
        vmovss  xmm12, cs:__real@3f000000
        vmovaps [rsp+1F0h+var_B8+8], xmm13
        vmovss  xmm13, cs:__real@40000000
        vmovaps [rsp+1F0h+var_48+8], xmm6
        vmovaps [rsp+1F0h+var_58+8], xmm7
        vmovaps [rsp+1F0h+var_68+8], xmm8
      }
      do
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(v80, v81, 5);
        if ( atoi(ColumnValueForRow) == 1 )
        {
          v85 = StringTable_GetColumnValueForRow(tablePtr, v81, 6);
          *(double *)&_XMM0 = atof(v85);
          __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
          v87 = StringTable_GetColumnValueForRow(tablePtr, v81, 7);
          *(double *)&_XMM0 = atof(v87);
          v88 = tablePtr;
          __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
          if ( tablePtr->columnCount > 10 )
          {
            v90 = StringTable_GetColumnValueForRow(tablePtr, v81, 9);
            v91 = StringTable_GetColumnValueForRow(tablePtr, v81, 10);
            v92 = -1i64;
            do
              ++v92;
            while ( v90[v92] );
            if ( v92 )
            {
              v93 = -1i64;
              do
                ++v93;
              while ( v91[v93] );
              if ( v93 )
              {
                *(double *)&_XMM0 = atof(v90);
                __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
                *(double *)&_XMM0 = atof(v91);
                __asm
                {
                  vmovss  xmm2, dword ptr [r14+20h]
                  vsubss  xmm3, xmm11, xmm2
                  vmulss  xmm1, xmm2, xmm6
                  vcvtsd2ss xmm4, xmm0, xmm0
                  vmulss  xmm0, xmm3, xmm7
                  vaddss  xmm7, xmm1, xmm0
                  vmulss  xmm1, xmm3, xmm8
                  vmulss  xmm2, xmm2, xmm4
                  vaddss  xmm8, xmm2, xmm1
                }
              }
            }
            v88 = tablePtr;
          }
          __asm
          {
            vsubss  xmm0, xmm7, [rbp+0F0h+var_160]
            vmulss  xmm1, xmm0, xmm9
            vsubss  xmm0, xmm8, [rbp+0F0h+var_15C]
            vaddss  xmm2, xmm1, xmm12
            vmulss  xmm7, xmm2, [rbp+0F0h+var_16C]
            vmulss  xmm1, xmm0, xmm9
            vaddss  xmm2, xmm1, xmm12
            vmulss  xmm6, xmm2, [rbp+0F0h+vMax]
          }
          v110 = StringTable_GetColumnValueForRow(v88, v81, 2);
          __asm { vcvttss2si esi, xmm14 }
          v112 = SEH_LocalizeTextMessage(v110, "ui string", LOCMSG_NOERR);
          _EAX = R_TextWidth(v112, 0, font, fontSize);
          __asm
          {
            vaddss  xmm1, xmm7, [rbp+0F0h+var_168]
            vaddss  xmm2, xmm6, [rbp+0F0h+var_164]
            vmovd   xmm3, eax
            vcvtdq2ps xmm3, xmm3
            vmulss  xmm0, xmm3, xmm12
            vsubss  xmm7, xmm1, xmm0
            vmulss  xmm1, xmm14, xmm12
            vsubss  xmm6, xmm2, xmm1
            vmulss  xmm1, xmm13, [rbp+0F0h+var_158]
            vaddss  xmm9, xmm7, xmm3
            vmulss  xmm0, xmm15, xmm13
            vaddss  xmm2, xmm1, xmm9; right
            vsubss  xmm1, xmm6, [rbp+0F0h+var_154]; top
            vaddss  xmm8, xmm6, xmm14
            vaddss  xmm3, xmm0, xmm8; bottom
            vsubss  xmm0, xmm7, [rbp+0F0h+var_158]; left
          }
          LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
          if ( v79 )
          {
            __asm
            {
              vmovss  dword ptr [rsp+1F0h+h], xmm11
              vmovss  dword ptr [rsp+1F0h+w], xmm11
              vmovss  dword ptr [rsp+1F0h+y], xmm10
              vmovss  dword ptr [rsp+1F0h+x], xmm10
            }
            LUI_Render_DrawImage((const LocalClientNum_t)_R14->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, xa, y, w, h, &v162, rgp.whiteImage);
          }
          __asm
          {
            vmovaps xmm3, xmm8; bottom
            vmovaps xmm2, xmm9; right
            vmovaps xmm1, xmm6; top
            vmovaps xmm0, xmm7; left
          }
          LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
          __asm { vmovss  dword ptr [rsp+1F0h+material], xmm10 }
          LUI_Render_DrawText((const LocalClientNum_t)_R14->m_localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, &v163, font, v112, 0, 0, material, fontSize, NULL, NULL);
          if ( !v79 && CG_GetOmnvar_IntegerByName(_R14->m_localClientNum, "ui_br_x1ops_unredact_area", &result, NULL, NULL) && result != v81 )
          {
            __asm
            {
              vmovss  dword ptr [rsp+1F0h+h], xmm11
              vmovss  dword ptr [rsp+1F0h+w], xmm11
              vmovss  dword ptr [rsp+1F0h+y], xmm10
              vmovss  dword ptr [rsp+1F0h+x], xmm10
            }
            LUI_Render_DrawImage((const LocalClientNum_t)_R14->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, xb, ya, wa, ha, &colorWhite, cgMedia.compass.x1_markers[v81 % 3]);
          }
          __asm { vmovss  xmm9, dword ptr [rsp+1F0h+var_180] }
        }
        v80 = tablePtr;
        ++v81;
      }
      while ( v81 < tablePtr->rowCount );
      __asm
      {
        vmovaps xmm13, [rsp+1F0h+var_B8+8]
        vmovaps xmm12, [rsp+1F0h+var_A8+8]
        vmovaps xmm8, [rsp+1F0h+var_68+8]
        vmovaps xmm7, [rsp+1F0h+var_58+8]
        vmovaps xmm6, [rsp+1F0h+var_48+8]
      }
    }
    LUI_Render_PopStencilRectangle((const LocalClientNum_t)_R14->m_localClientNum);
    __asm
    {
      vmovaps xmm15, [rsp+1F0h+var_D8+8]
      vmovaps xmm14, [rsp+1F0h+var_C8+8]
      vmovaps xmm11, [rsp+1F0h+var_98+8]
      vmovaps xmm10, [rsp+1F0h+var_88+8]
      vmovaps xmm9, [rsp+1F0h+var_78+8]
    }
  }
}

/*
==============
CgCompassSystemBR::DrawBRBoundingCircleTravelLine
==============
*/
void CgCompassSystemBR::DrawBRBoundingCircleTravelLine(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  CgGlobalsMP *LocalClientGlobals; 
  char v40; 
  const ScreenPlacement *ActivePlacement; 
  float outCurrentPosition; 
  float outCurrentPositiona; 
  float outCurrentPositionb; 
  float outCurrentRadius; 
  float w; 
  float h; 
  float v77; 
  float outClipped; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float width; 
  float quadLength; 
  float v86; 
  float quadAngle; 
  int outStartTime; 
  SecureVec3 out; 
  int outDuration; 
  float outAngle; 
  rectDef_s *parentRecta; 
  lua_State *v93; 
  LUIElement *v94; 
  __int64 v95; 
  vec2_t position2; 
  vec2_t position1; 
  float quadPositionX; 
  float quadPositionY; 
  rectDef_s x; 
  vec2_t v101; 
  vec2_t in; 
  vec2_t outVector; 
  char v104; 
  void *retaddr; 

  _RAX = &retaddr;
  v95 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  parentRecta = (rectDef_s *)parentRect;
  v94 = element;
  v93 = luaVM;
  if ( this->m_uiBRCircleStartEntityOmnvarIndex[0] != -1 )
  {
    _R14 = color;
    __asm
    {
      vmovss  xmm11, dword ptr [r14+0Ch]
      vxorps  xmm10, xmm10, xmm10
      vucomiss xmm11, xmm10
    }
    if ( this->m_uiBRCircleStartEntityOmnvarIndex[0] != -1 )
    {
      Def = BG_Omnvar_GetDef(this->m_uiBRInfilStartedOmnvarIndex);
      Data = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRInfilStartedOmnvarIndex);
      if ( Omnvar_GetInteger(Def, Data) > 0 && CgCompassSystemBR::GetBRBoundingCircleInfo(this, 0, &outStartTime, &outDuration, &v101, &v86) )
      {
        LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 473, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
          __debugbreak();
        CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &outVector);
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+0C0h+var_C0]
          vsubss  xmm4, xmm5, dword ptr [rsi]
          vmovss  xmm6, dword ptr [rbp+0C0h+var_C0+4]
          vsubss  xmm3, xmm6, dword ptr [rsi+4]
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcmpless xmm0, xmm2, cs:__real@80000000
          vmovss  xmm9, cs:__real@3f800000
          vblendvps xmm1, xmm2, xmm9, xmm0
          vdivss  xmm0, xmm9, xmm1
          vmulss  xmm4, xmm4, xmm0
          vmulss  xmm3, xmm3, xmm0
          vmovss  xmm1, [rbp+0C0h+var_138]
          vcomiss xmm2, xmm1
        }
        if ( !v40 )
        {
          __asm
          {
            vmulss  xmm0, xmm4, xmm1
            vmulss  xmm1, xmm3, xmm1
            vsubss  xmm0, xmm5, xmm0
            vmovss  dword ptr [rbp+0C0h+in], xmm0
            vsubss  xmm1, xmm6, xmm1
            vmovss  dword ptr [rbp+0C0h+in+4], xmm1
          }
          CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRecta, rect, &x.x, &x.y, &x.w, &x.h);
          __asm
          {
            vmovss  xmm3, cs:__real@3f000000
            vmulss  xmm1, xmm3, [rbp+0C0h+var_D0]
            vaddss  xmm7, xmm1, [rbp+0C0h+x]
            vmulss  xmm0, xmm3, [rbp+0C0h+var_CC]
            vaddss  xmm8, xmm0, [rbp+0C0h+y]
          }
          CG_CalcPlayerPos(&out, this->m_localClientNum);
          __asm
          {
            vmovss  xmm6, [rbp+0C0h+boundsRadius]
            vmovss  dword ptr [rsp+1D0h+outCurrentPosition], xmm6
          }
          CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &x, outCurrentPosition, &outVector, (const vec2_t *)&out, (const vec2_t *)&LocalClientGlobals->predictedPlayerState.origin, &position1, NULL);
          __asm
          {
            vaddss  xmm1, xmm7, dword ptr [rbp+0C0h+position1]
            vmovss  dword ptr [rbp+0C0h+position1], xmm1
            vaddss  xmm0, xmm8, dword ptr [rbp+0C0h+position1+4]
            vmovss  dword ptr [rbp+0C0h+position1+4], xmm0
            vmovss  dword ptr [rsp+1D0h+outCurrentPosition], xmm6
          }
          CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &x, outCurrentPositiona, &outVector, (const vec2_t *)&out, &in, &position2, NULL);
          __asm
          {
            vaddss  xmm1, xmm7, dword ptr [rbp+0C0h+position2]
            vmovss  dword ptr [rbp+0C0h+position2], xmm1
            vaddss  xmm0, xmm8, dword ptr [rbp+0C0h+position2+4]
            vmovss  dword ptr [rbp+0C0h+position2+4], xmm0
          }
          CgCompassSystemMP::GetQuadInfoForPoints(this, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassCircleTravelLineThickness, "compassCircleTravelLineThickness");
          __asm { vmovss  [rbp+0C0h+width], xmm0 }
          ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
          ScrPlace_ApplyRect(ActivePlacement, &quadPositionX, &quadPositionY, &quadLength, &width, rect->horzAlign, rect->vertAlign);
          __asm
          {
            vmovss  dword ptr [rsp+1D0h+var_160], xmm11
            vmovss  xmm0, dword ptr [r14+8]
            vmovss  [rsp+1D0h+var_168], xmm0
            vmovss  xmm1, dword ptr [r14+4]
            vmovss  [rsp+1D0h+var_170], xmm1
            vmovss  xmm0, dword ptr [r14]
            vmovss  [rsp+1D0h+var_178], xmm0
            vmovss  xmm1, [rbp+0C0h+quadAngle]
            vmovss  [rsp+1D0h+var_180], xmm1
            vmovss  dword ptr [rsp+1D0h+outClipped], xmm9
            vmovss  dword ptr [rsp+1D0h+var_190], xmm9
            vmovss  dword ptr [rsp+1D0h+h], xmm10
            vmovss  dword ptr [rsp+1D0h+w], xmm10
            vmovss  xmm0, [rbp+0C0h+width]
            vmovss  dword ptr [rsp+1D0h+outCurrentRadius], xmm0
            vmovss  xmm1, [rbp+0C0h+quadLength]
            vmovss  dword ptr [rsp+1D0h+outCurrentPosition], xmm1
            vmovss  xmm3, [rbp+0C0h+quadPositionY]; centerY
            vmovss  xmm2, [rbp+0C0h+quadPositionX]; centerX
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v94, *(float *)&_XMM2, *(float *)&_XMM3, outCurrentPositionb, outCurrentRadius, w, h, v77, outClipped, v79, v80, v81, v82, v83, this->m_uiBRTravelLineMaterial, v93);
          memset(&out, 0, sizeof(out));
        }
      }
    }
  }
  _R11 = &v104;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
CgCompassSystemBR::DrawBRBoundingCircles
==============
*/
void CgCompassSystemBR::DrawBRBoundingCircles(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  bool v20; 
  const cg_t *LocalClientGlobals; 
  int v27; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  int v54; 
  int v55; 
  const ScreenPlacement *v56; 
  float x; 
  float xa; 
  float xb; 
  float y; 
  float ya; 
  float yb; 
  float w; 
  float wa; 
  float h; 
  float ha; 
  float v85; 
  float outClipped; 
  float outClippeda; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float isPixelCircle; 
  float isPixelCirclea; 
  float viewportSize; 
  float image; 
  float maskHeight; 
  float v99; 
  float outCurrentRadius; 
  int outDuration; 
  int outStartTime; 
  lua_State *v103; 
  LUIElement *v104; 
  float outAngle; 
  rectDef_s *parentRecta; 
  SecureVec3 out; 
  __int64 v108; 
  vec2_t v109; 
  vec4_t v110; 
  rectDef_s mapRect; 
  vec2_t outCurrentPosition; 
  vec2_t outVector; 
  vec2_t outSize; 
  char v115; 
  void *retaddr; 

  _RAX = &retaddr;
  v108 = -2i64;
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
  }
  parentRecta = (rectDef_s *)parentRect;
  v20 = cropPartialMap;
  v104 = element;
  v103 = luaVM;
  if ( this->m_uiBRCircleStartEntityOmnvarIndex[0] != -1 )
  {
    _R15 = color;
    __asm
    {
      vmovss  xmm11, dword ptr [r15+0Ch]
      vxorps  xmm10, xmm10, xmm10
      vucomiss xmm11, xmm10
    }
    if ( this->m_uiBRCircleStartEntityOmnvarIndex[0] != -1 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
      CG_CalcPlayerPos(&out, this->m_localClientNum);
      CgCompassSystem::GetCompassYaw(this, compassType, v20, LocalClientGlobals, &outAngle, &outVector);
      v27 = 0;
      __asm
      {
        vmovss  xmm9, [rbp+0F0h+boundsRadius]
        vmovss  xmm13, cs:__real@3f000000
        vmovss  xmm14, cs:__real@40000000
        vmovss  xmm12, cs:__real@3f800000
      }
      do
      {
        if ( CgCompassSystemBR::GetBRBoundingCircleInfo(this, v27, &outStartTime, &outDuration, &outCurrentPosition, &outCurrentRadius) )
        {
          __asm
          {
            vmovaps xmm0, xmmword ptr cs:unk_151414090
            vmovups xmmword ptr [rbp+0F0h+var_118], xmm0
            vmovss  xmm8, [rbp+0F0h+outCurrentRadius]
          }
          if ( v27 == 1 )
          {
            __asm { vmovss  dword ptr [rsp+200h+x], xmm9 }
            CgCompassSystem::WorldPosToCompass(this, compassType, v20, &mapRect, x, &outVector, (const vec2_t *)&out, &outCurrentPosition, &v109, NULL);
            __asm
            {
              vmulss  xmm1, xmm13, [rbp+0F0h+mapRect.w]
              vaddss  xmm7, xmm1, [rbp+0F0h+mapRect.x]
              vmulss  xmm0, xmm13, [rbp+0F0h+mapRect.h]
              vaddss  xmm6, xmm0, [rbp+0F0h+mapRect.y]
              vaddss  xmm2, xmm7, dword ptr [rbp+0F0h+var_120]
              vmovss  dword ptr [rbp+0F0h+var_120], xmm2
              vaddss  xmm1, xmm6, dword ptr [rbp+0F0h+var_120+4]
              vmovss  dword ptr [rbp+0F0h+var_120+4], xmm1
            }
            *(double *)&_XMM0 = CgCompassSystemMP::GetWorldToScreenScale(this);
            __asm
            {
              vmulss  xmm1, xmm8, xmm14
              vmulss  xmm2, xmm0, xmm1
              vmovss  [rbp+0F0h+var_168], xmm2
              vmovss  [rbp+0F0h+maskHeight], xmm2
            }
            vertAlign = rect->vertAlign;
            horzAlign = rect->horzAlign;
            ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
            ScrPlace_ApplyRect(ActivePlacement, (float *)&v109, (float *)&v109 + 1, &v99, &maskHeight, horzAlign, vertAlign);
            LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
            __asm
            {
              vmovss  dword ptr [rsp+200h+isPixelCircle], xmm12
              vmovss  dword ptr [rsp+200h+var_1A8], xmm12
              vmovss  dword ptr [rsp+200h+var_1B0], xmm10
              vmovss  dword ptr [rsp+200h+outClipped], xmm10
              vmovss  dword ptr [rsp+200h+h], xmm10
              vmovss  dword ptr [rsp+200h+w], xmm12
              vmovss  dword ptr [rsp+200h+y], xmm10
              vmovss  xmm0, [rbp+0F0h+maskHeight]
              vmovss  dword ptr [rsp+200h+x], xmm0
              vmovss  xmm3, [rbp+0F0h+var_168]; maskWidth
              vmovss  xmm2, dword ptr [rbp+0F0h+var_120+4]; maskCenterY
              vmovss  xmm1, dword ptr [rbp+0F0h+var_120]; maskCenterX
            }
            LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, xa, y, w, h, 0, outClipped, v88, v91, isPixelCircle, &outSize, this->m_outerCircle);
            __asm
            {
              vmovss  dword ptr [rbp+0F0h+var_120], xmm7
              vmovss  dword ptr [rbp+0F0h+var_120+4], xmm6
              vmovss  xmm0, [rbp+0F0h+mapRect.w]
              vmovss  [rbp+0F0h+var_168], xmm0
              vmovss  xmm1, [rbp+0F0h+mapRect.h]
              vmovss  [rbp+0F0h+maskHeight], xmm1
            }
            v54 = rect->vertAlign;
            v55 = rect->horzAlign;
            v56 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
            ScrPlace_ApplyRect(v56, (float *)&v109, (float *)&v109 + 1, &v99, &maskHeight, v55, v54);
            __asm
            {
              vmulss  xmm0, xmm11, xmm13
              vmovss  dword ptr [rsp+200h+image], xmm0
              vmovss  xmm0, dword ptr [rbp+0F0h+var_118+8]
              vmovss  dword ptr [rsp+200h+viewportSize], xmm0
              vmovss  xmm1, dword ptr [rbp+0F0h+var_118+4]
              vmovss  dword ptr [rsp+200h+isPixelCircle], xmm1
              vmovss  xmm0, dword ptr [rbp+0F0h+var_118]
              vmovss  dword ptr [rsp+200h+var_1A8], xmm0
              vmovss  dword ptr [rsp+200h+var_1B0], xmm10
              vmovss  dword ptr [rsp+200h+outClipped], xmm12
              vmovss  dword ptr [rsp+200h+var_1C0], xmm12
              vmovss  dword ptr [rsp+200h+h], xmm10
              vmovss  dword ptr [rsp+200h+w], xmm10
              vmovss  xmm0, [rbp+0F0h+maskHeight]
              vmovss  dword ptr [rsp+200h+y], xmm0
              vmovss  xmm1, [rbp+0F0h+var_168]
              vmovss  dword ptr [rsp+200h+x], xmm1
              vmovss  xmm3, dword ptr [rbp+0F0h+var_120+4]; centerY
              vmovss  xmm2, dword ptr [rbp+0F0h+var_120]; centerX
            }
            LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v104, *(float *)&_XMM2, *(float *)&_XMM3, xb, ya, wa, ha, v85, outClippeda, v89, v92, isPixelCirclea, viewportSize, image, this->m_brGas, v103);
            LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
            v20 = cropPartialMap;
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r15]
              vmovss  dword ptr [rbp+0F0h+var_118], xmm0
              vmovss  xmm1, dword ptr [r15+4]
              vmovss  dword ptr [rbp+0F0h+var_118+4], xmm1
              vmovss  xmm0, dword ptr [r15+8]
              vmovss  dword ptr [rbp+0F0h+var_118+8], xmm0
            }
          }
          __asm
          {
            vmovss  dword ptr [rsp+200h+var_1B0], xmm8
            vmovss  dword ptr [rsp+200h+y], xmm9
          }
          CgCompassSystemMP::DrawAreaMarker(this, compassType, v20, parentRecta, rect, yb, &v110, outStartTime, outDuration, outCurrentPosition, v90, this->m_uiBRCircleMaterial, s_drawPixelShapeCircle, v104, v103);
        }
        ++v27;
      }
      while ( v27 < 2 );
      memset(&out, 0, sizeof(out));
    }
  }
  _R11 = &v115;
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
  }
}

/*
==============
CgCompassSystemBR::DrawBRMapCircles
==============
*/
void CgCompassSystemBR::DrawBRMapCircles(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, GfxImage *mapMask, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  const rectDef_s *v21; 
  CompassType v23; 
  const rectDef_s *v25; 
  LUIElement *v26; 
  bool v27; 
  bool v28; 
  CgStatic *LocalClientStatics; 
  char v33; 
  entityState_t *entities; 
  __int64 number; 
  __int64 m_localClientNum; 
  CgEntitySystem *v41; 
  __int64 v42; 
  unsigned int v46; 
  __int16 otherEntityNum; 
  CgGlobalsMP *v48; 
  unsigned int v49; 
  LocalClientNum_t v52; 
  const characterInfo_t *v53; 
  const cg_t *LocalClientGlobals; 
  CgGlobalsMP *v55; 
  CgStatic *v56; 
  const characterInfo_t *v57; 
  team_t team; 
  int *v59; 
  const GfxImage *m_uiBRCircleMaterial; 
  bool v65; 
  __int64 v67; 
  const GfxImage *material; 
  LocalClientNum_t v71; 
  CgStatic *v72; 
  const characterInfo_t *v73; 
  team_t v74; 
  int v79; 
  int v80; 
  char v85; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float fmta; 
  float *y; 
  float ya; 
  float yb; 
  float *w; 
  float wa; 
  float h; 
  int duration; 
  float position; 
  float v116; 
  float v117; 
  float image; 
  bool isPixelCircle; 
  float isPixelCirclea; 
  LUIElement *v121; 
  float v122; 
  lua_State *v123; 
  float v124; 
  char v125; 
  CgGlobalsMP *cgameGlob; 
  float width; 
  float v130; 
  LUIElement *v131; 
  int v132; 
  lua_State *v133; 
  rectDef_s *parentRecta; 
  const characterInfo_t *CharacterInfo; 
  GfxImage *v136; 
  vec3_t outOrigin; 
  entityState_t *v138; 
  const CgSnapshotMP *NextSnap; 
  float outAngle; 
  SecureVec3 out; 
  __int64 v142; 
  float v143; 
  float v144; 
  vec4_t v145; 
  vec2_t in; 
  vec2_t outClipped; 
  vec2_t v0; 
  rectDef_s x; 
  vec2_t outVector; 
  char v151; 
  void *retaddr; 

  _RAX = &retaddr;
  v142 = -2i64;
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
  v21 = parentRect;
  parentRecta = (rectDef_s *)parentRect;
  v23 = compassType;
  v25 = rect;
  v136 = mapMask;
  v26 = element;
  v131 = element;
  v133 = luaVM;
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 894, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  v27 = rect == NULL;
  if ( !rect )
  {
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 895, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect");
    v27 = !v28;
    if ( v28 )
      __debugbreak();
  }
  _RAX = color;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0Ch]
    vxorps  xmm15, xmm15, xmm15
    vucomiss xmm0, xmm15
  }
  if ( !v27 )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    cgameGlob = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
    NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)this->m_localClientNum);
    if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 913, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
      __debugbreak();
    CG_CompassCalcDimensions(v23, cgameGlob, v21, rect, &x.x, &x.y, &x.w, &x.h);
    CgCompassSystem::GetCompassYaw(this, v23, cropPartialMap, cgameGlob, &outAngle, &outVector);
    v33 = 0;
    v125 = 0;
    v132 = 0;
    if ( NextSnap->numEntities > 0 )
    {
      entities = NextSnap->entities;
      v138 = NextSnap->entities;
      __asm
      {
        vmovss  xmm12, [rbp+150h+boundsRadius]
        vmovss  xmm14, cs:__real@3f400000
        vmovss  xmm7, cs:__real@3f000000
        vmovss  xmm13, cs:__real@3f800000
      }
      while ( 1 )
      {
        if ( !v33 )
        {
          CgCompassSystemBR::PushStencilRectAndMapMask(this, v23, v21, v25, v136, v26);
          v125 = 1;
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
        v41 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
        if ( (unsigned int)number >= 0x800 )
        {
          LODWORD(w) = 2048;
          LODWORD(y) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", y, w) )
            __debugbreak();
        }
        v42 = (__int64)&v41->m_entities[number];
        if ( (v41->m_entities[number].flags & 1) != 0 && v41->m_entities[number].nextState.eType == ET_SCRIPTMOVER && v41->m_entities[number].nextState.un.scriptMoverType == 10 )
          break;
        v85 = v125;
LABEL_105:
        ++v132;
        entities = ++v138;
        v21 = parentRecta;
        v26 = v131;
        if ( v132 >= NextSnap->numEntities )
        {
          if ( v85 == 1 )
          {
            if ( v23 == COMPASS_TYPE_PARTIAL && v136 )
              LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
            LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
          }
          goto LABEL_111;
        }
        v33 = v125;
      }
      CG_GetPoseOrigin(&v41->m_entities[number].pose, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+150h+outOrigin]
        vmovss  dword ptr [rbp+150h+in], xmm0
        vmovss  xmm1, dword ptr [rbp+150h+outOrigin+4]
        vmovss  dword ptr [rbp+150h+in+4], xmm1
        vmovss  xmm11, dword ptr [rbp+150h+outOrigin+8]
      }
      v46 = v41->m_entities[number].nextState.staticState.player.stowedWeaponHandle.m_mapEntryId & 0x3F;
      otherEntityNum = v41->m_entities[number].nextState.otherEntityNum;
      v48 = cgameGlob;
      if ( (*(_DWORD *)(v42 + 528) & 0x3F) != 0 )
      {
        v49 = 0;
        if ( v46 < 0xE )
          v49 = v46;
        _RCX = 2i64 * v49;
        _RSI = 0x140000000ui64;
        __asm
        {
          vmovups xmm0, xmmword ptr rva s_mapCircleColorList[rsi+rcx*8]
          vmovups xmmword ptr [rbp+150h+var_130], xmm0
        }
      }
      else
      {
        CgCompassSystemMP::GetEnemyCompassColor(this, &v145, cgameGlob);
        __asm { vmovss  dword ptr [rbp+150h+var_130+0Ch], xmm14 }
        v52 = this->m_localClientNum;
        v53 = CharacterInfo;
        if ( CharacterInfo && CharacterInfo->infoValid && otherEntityNum != 2047 )
        {
          LocalClientGlobals = CG_GetLocalClientGlobals(v52);
          v55 = (CgGlobalsMP *)LocalClientGlobals;
          if ( otherEntityNum == v53->entityNum )
          {
            this->GetPlayerCompassColor(this, &v145, LocalClientGlobals);
          }
          else
          {
            v56 = CgStatic::GetLocalClientStatics(v52);
            v57 = CgStatic::GetCharacterInfo(v56, otherEntityNum);
            if ( v57 )
            {
              if ( v57->infoValid )
              {
                team = CharacterInfo->team;
                if ( team )
                {
                  if ( v57->team == team )
                  {
                    v59 = (int *)v56->GetClientInfo(v56, otherEntityNum);
                    if ( v59 )
                    {
                      if ( *v59 != 2047 )
                      {
                        CG_ScoreboardMP_GetClientScore(v52, *v59);
                        CgCompassSystemMP::GetFriendlyCompassColor(this, &v145, v55);
                      }
                    }
                  }
                }
              }
            }
          }
          v23 = compassType;
          v48 = cgameGlob;
        }
        v25 = rect;
      }
      if ( ((*(_DWORD *)(v42 + 528) >> 6) & 0x3F) != 0 )
      {
        if ( ((*(_DWORD *)(v42 + 528) >> 6) & 0x3F) == 1 )
        {
LABEL_54:
          v123 = v133;
          v121 = v131;
          isPixelCircle = s_drawPixelShapeCircle;
          m_uiBRCircleMaterial = this->m_uiBRCircleMaterial;
LABEL_57:
          __asm
          {
            vmovss  dword ptr [rsp+260h+var_210], xmm11
            vmovss  dword ptr [rsp+260h+y], xmm12
          }
          CgCompassSystemMP::DrawAreaMarker(this, v23, cropPartialMap, parentRecta, v25, ya, &v145, 1, 1, in, v116, m_uiBRCircleMaterial, isPixelCircle, v121, v123);
LABEL_58:
          __asm
          {
            vmulss  xmm1, xmm7, [rbp+150h+var_100]
            vaddss  xmm6, xmm1, [rbp+150h+x]
            vmulss  xmm0, xmm7, [rbp+150h+var_FC]
            vaddss  xmm7, xmm0, [rbp+150h+var_104]
          }
          CG_CalcPlayerPos(&out, this->m_localClientNum);
          __asm { vmovss  dword ptr [rsp+260h+fmt], xmm12 }
          v65 = CgCompassSystem::WorldPosToCompass(this, v23, cropPartialMap, &x, fmt, &outVector, (const vec2_t *)&out, &in, &v0, &outClipped);
          if ( v65 )
          {
            *(double *)&_XMM0 = CalcCompassClippedDistanceScale(&v0, &outClipped, 0);
            __asm { vmovaps xmm10, xmm0 }
          }
          else
          {
            __asm { vmovaps xmm10, xmm13 }
          }
          v67 = (*(_DWORD *)(v42 + 528) >> 12) & 0x3F;
          if ( v65 )
          {
            if ( (unsigned int)v67 >= 8 )
            {
              LODWORD(w) = 8;
              LODWORD(y) = (*(_DWORD *)(v42 + 528) >> 12) & 0x3F;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 760, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( CIRCLE_ICON_COUNT )", "index doesn't index CIRCLE_ICON_COUNT\n\t%i not in [0, %i)", y, w) )
                __debugbreak();
            }
            if ( !(_DWORD)v67 || (_DWORD)v67 != 3 && (_DWORD)v67 != 4 && (_DWORD)v67 != 5 && (_DWORD)v67 != 7 )
              goto LABEL_102;
            material = circleIconsClipped[v67];
            __asm
            {
              vaddss  xmm2, xmm6, dword ptr [rbp+150h+outClipped]
              vmovss  dword ptr [rbp+150h+outClipped], xmm2
              vaddss  xmm1, xmm7, dword ptr [rbp+150h+outClipped+4]
              vmovss  dword ptr [rbp+150h+outClipped+4], xmm1
            }
          }
          else
          {
            v71 = this->m_localClientNum;
            if ( (unsigned int)v67 >= 8 )
            {
              LODWORD(w) = 8;
              LODWORD(y) = (*(_DWORD *)(v42 + 528) >> 12) & 0x3F;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 712, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( CIRCLE_ICON_COUNT )", "index doesn't index CIRCLE_ICON_COUNT\n\t%i not in [0, %i)", y, w) )
                __debugbreak();
            }
            if ( !(_DWORD)v67 )
              goto LABEL_102;
            switch ( (int)v67 )
            {
              case 1:
                if ( !CharacterInfo )
                  goto LABEL_102;
                if ( !CharacterInfo->infoValid )
                  goto LABEL_102;
                if ( otherEntityNum == 2047 )
                  goto LABEL_102;
                if ( otherEntityNum != CharacterInfo->entityNum )
                {
                  v72 = CgStatic::GetLocalClientStatics(v71);
                  v73 = CgStatic::GetCharacterInfo(v72, otherEntityNum);
                  if ( !v73 )
                    goto LABEL_102;
                  if ( !v73->infoValid )
                    goto LABEL_102;
                  v74 = CharacterInfo->team;
                  if ( v74 == TEAM_ZERO || v73->team != v74 )
                    goto LABEL_102;
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
                goto LABEL_102;
            }
            material = circleIcons[v67];
            __asm
            {
              vaddss  xmm2, xmm6, dword ptr [rbp+150h+v0]
              vmovss  dword ptr [rbp+150h+v0], xmm2
              vaddss  xmm1, xmm7, dword ptr [rbp+150h+v0+4]
              vmovss  dword ptr [rbp+150h+v0+4], xmm1
            }
          }
          __asm
          {
            vmovss  [rbp+150h+var_134], xmm1
            vmovss  [rbp+150h+var_138], xmm2
          }
          if ( material )
          {
            __asm
            {
              vmovss  xmm7, dword ptr [rbp+150h+var_130]
              vmovss  xmm8, dword ptr [rbp+150h+var_130+4]
              vmovss  xmm9, dword ptr [rbp+150h+var_130+8]
              vmovss  xmm6, dword ptr [rbp+150h+var_130+0Ch]
            }
            if ( (unsigned int)v67 >= 8 )
            {
              LODWORD(w) = 8;
              LODWORD(y) = v67;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 799, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( CIRCLE_ICON_COUNT )", "index doesn't index CIRCLE_ICON_COUNT\n\t%i not in [0, %i)", y, w) )
                __debugbreak();
            }
            v79 = v67 - 3;
            if ( !v79 )
              goto LABEL_92;
            v80 = v79 - 3;
            if ( !v80 )
            {
LABEL_93:
              *(double *)&_XMM0 = CgCompassSystemMP::GetWorldToScreenScale(this);
              __asm
              {
                vmulss  xmm1, xmm11, cs:__real@40000000
                vmulss  xmm0, xmm0, xmm1
                vmulss  xmm2, xmm0, xmm14
                vmovss  [rbp+150h+var_1AC], xmm2
                vmovss  [rbp+150h+width], xmm2
                vmulss  xmm6, xmm6, cs:__real@3e800000
              }
              v85 = v125;
LABEL_101:
              v25 = rect;
              vertAlign = rect->vertAlign;
              horzAlign = rect->horzAlign;
              ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
              ScrPlace_ApplyRect(ActivePlacement, &v143, &v144, &v130, &width, horzAlign, vertAlign);
              __asm
              {
                vmovss  dword ptr [rsp+260h+var_1F0], xmm6
                vmovss  dword ptr [rsp+260h+var_1F8], xmm9
                vmovss  dword ptr [rsp+260h+isPixelCircle], xmm8
                vmovss  dword ptr [rsp+260h+image], xmm7
                vmovss  dword ptr [rsp+260h+var_210], xmm15
                vmovss  dword ptr [rsp+260h+position], xmm13
                vmovss  [rsp+260h+duration], xmm13
                vmovss  dword ptr [rsp+260h+h], xmm15
                vmovss  dword ptr [rsp+260h+w], xmm15
                vmovss  xmm0, [rbp+150h+width]
                vmovss  dword ptr [rsp+260h+y], xmm0
                vmovss  xmm1, [rbp+150h+var_1AC]
                vmovss  dword ptr [rsp+260h+fmt], xmm1
                vmovss  xmm3, [rbp+150h+var_134]; centerY
                vmovss  xmm2, [rbp+150h+var_138]; centerX
              }
              LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v131, *(float *)&_XMM2, *(float *)&_XMM3, fmta, yb, wa, h, *(float *)&duration, position, v117, image, isPixelCirclea, v122, v124, material, v133);
LABEL_103:
              memset(&out, 0, sizeof(out));
              memset(&outOrigin, 0, sizeof(outOrigin));
              __asm { vmovss  xmm7, cs:__real@3f000000 }
              goto LABEL_105;
            }
            if ( v80 == 1 )
            {
LABEL_92:
              if ( !v65 )
                goto LABEL_93;
            }
            v85 = v125;
            if ( v125 == 1 )
            {
              if ( v23 == COMPASS_TYPE_PARTIAL && v136 )
                LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
              LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
              v125 = 0;
              v85 = 0;
            }
            CgCompassSystem::CalcCompassPointerSize(this, v23, OBJ_ICON_SIZE_REGULAR, &v130, &width);
            __asm { vmovaps xmm6, xmm13 }
            if ( v65 )
            {
              __asm
              {
                vmulss  xmm1, xmm10, [rbp+150h+var_1AC]
                vmovss  [rbp+150h+var_1AC], xmm1
                vmulss  xmm0, xmm10, [rbp+150h+width]
                vmovss  [rbp+150h+width], xmm0
              }
            }
            goto LABEL_101;
          }
LABEL_102:
          v25 = rect;
          v85 = v125;
          goto LABEL_103;
        }
        if ( ((*(_DWORD *)(v42 + 528) >> 6) & 0x3F) != 2 )
        {
          if ( ((*(_DWORD *)(v42 + 528) >> 6) & 0x3F) != 3 )
            goto LABEL_58;
          *(float *)&_XMM0 = GetPulseCircleAlpha(*(_WORD *)(v42 + 400), v48->time);
          __asm { vmovss  dword ptr [rbp+150h+var_130+0Ch], xmm0 }
          goto LABEL_54;
        }
        *(float *)&_XMM0 = GetPulseCircleAlpha(*(_WORD *)(v42 + 400), v48->time);
        __asm { vmovss  dword ptr [rbp+150h+var_130+0Ch], xmm0 }
      }
      v123 = v133;
      v121 = v131;
      m_uiBRCircleMaterial = cgMedia.compassping_portable_radar_sweep;
      isPixelCircle = 0;
      goto LABEL_57;
    }
  }
LABEL_111:
  _R11 = &v151;
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
CgCompassSystemBR::DrawBRPlaneTravelLine
==============
*/
void CgCompassSystemBR::DrawBRPlaneTravelLine(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  char v24; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  const OmnvarDef *v27; 
  const OmnvarData *v28; 
  const OmnvarDef *v29; 
  const OmnvarData *v30; 
  const OmnvarDef *v31; 
  const OmnvarData *v32; 
  const OmnvarDef *v33; 
  const OmnvarData *v34; 
  CgGlobalsMP *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  lua_State *v60; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float outVector; 
  float outVectora; 
  float outVectorb; 
  float w; 
  float wa; 
  float wb; 
  float h; 
  float ha; 
  float hb; 
  float v102; 
  float v103; 
  float v104; 
  float outClipped; 
  float outClippeda; 
  float outClippedb; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float quadAngle; 
  float v124; 
  float v125; 
  float quadLength; 
  float width[6]; 
  SecureVec3 out; 
  float outAngle; 
  rectDef_s *parentRecta; 
  lua_State *v131; 
  __int64 v132; 
  float v133[2]; 
  vec2_t position1; 
  vec2_t position2; 
  float quadPositionX; 
  float quadPositionY; 
  rectDef_s x; 
  vec2_t in; 
  vec2_t v140; 
  vec2_t north; 
  char v142; 
  void *retaddr; 

  _RAX = &retaddr;
  v132 = -2i64;
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
  v131 = luaVM;
  if ( this->m_uiBRInfilledOmnvarIndex != -1 && this->m_uiBRPlanePathStartXOmnvarIndex != -1 && this->m_uiBRPlanePathStartYOmnvarIndex != -1 && this->m_uiBRPlanePathEndXOmnvarIndex != -1 && this->m_uiBRPlanePathEndYOmnvarIndex != -1 )
  {
    *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
    _R14 = color;
    __asm
    {
      vmulss  xmm12, xmm0, dword ptr [r14+0Ch]
      vxorps  xmm11, xmm11, xmm11
      vucomiss xmm12, xmm11
    }
    if ( !v24 )
    {
      Def = BG_Omnvar_GetDef(this->m_uiBRInfilledOmnvarIndex);
      Data = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRInfilledOmnvarIndex);
      if ( Omnvar_GetInteger(Def, Data) != 1 )
      {
        v27 = BG_Omnvar_GetDef(this->m_uiBRPlanePathStartXOmnvarIndex);
        v28 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRPlanePathStartXOmnvarIndex);
        LODWORD(width[1]) = Omnvar_GetInteger(v27, v28);
        v29 = BG_Omnvar_GetDef(this->m_uiBRPlanePathStartYOmnvarIndex);
        v30 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRPlanePathStartYOmnvarIndex);
        LODWORD(width[2]) = Omnvar_GetInteger(v29, v30);
        v31 = BG_Omnvar_GetDef(this->m_uiBRPlanePathEndXOmnvarIndex);
        v32 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRPlanePathEndXOmnvarIndex);
        LODWORD(width[3]) = Omnvar_GetInteger(v31, v32);
        v33 = BG_Omnvar_GetDef(this->m_uiBRPlanePathEndYOmnvarIndex);
        v34 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRPlanePathEndYOmnvarIndex);
        LODWORD(width[4]) = Omnvar_GetInteger(v33, v34);
        LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1563, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
          __debugbreak();
        CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &north);
        CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRecta, rect, &x.x, &x.y, &x.w, &x.h);
        __asm
        {
          vmovss  xmm9, cs:__real@3f000000
          vmulss  xmm1, xmm9, [rbp+0E0h+var_E0]
          vaddss  xmm7, xmm1, [rbp+0E0h+x]
          vmulss  xmm0, xmm9, [rbp+0E0h+var_DC]
          vaddss  xmm8, xmm0, [rbp+0E0h+y]
        }
        CG_CalcPlayerPos(&out, this->m_localClientNum);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, [rbp+0E0h+var_14C]
          vmovss  dword ptr [rbp+0E0h+in], xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, [rbp+0E0h+var_148]
          vmovss  dword ptr [rbp+0E0h+in+4], xmm1
          vmovss  xmm6, [rbp+0E0h+boundsRadius]
          vmovss  dword ptr [rsp+1F0h+fmt], xmm6
        }
        CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &x, fmt, &north, (const vec2_t *)&out, &in, &position1, NULL);
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rbp+0E0h+position1]
          vmovss  dword ptr [rbp+0E0h+position1], xmm1
          vaddss  xmm0, xmm8, dword ptr [rbp+0E0h+position1+4]
          vmovss  dword ptr [rbp+0E0h+position1+4], xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, [rbp+0E0h+var_144]
          vmovss  dword ptr [rbp+0E0h+var_C8], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, [rbp+0E0h+var_140]
          vmovss  dword ptr [rbp+0E0h+var_C8+4], xmm0
          vmovss  dword ptr [rsp+1F0h+fmt], xmm6
        }
        CgCompassSystem::WorldPosToCompass(this, compassType, cropPartialMap, &x, fmta, &north, (const vec2_t *)&out, &v140, &position2, NULL);
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rbp+0E0h+position2]
          vmovss  dword ptr [rbp+0E0h+position2], xmm1
          vaddss  xmm0, xmm8, dword ptr [rbp+0E0h+position2+4]
          vmovss  dword ptr [rbp+0E0h+position2+4], xmm0
        }
        CgCompassSystemMP::GetQuadInfoForPoints(this, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
        __asm
        {
          vmovss  [rbp+0E0h+width], xmm9
          vmovss  xmm0, [rbp+0E0h+quadLength]
          vmulss  xmm1, xmm0, cs:__real@40000000
          vmovss  [rbp+0E0h+quadLength], xmm1
        }
        ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        ScrPlace_ApplyRect(ActivePlacement, &quadPositionX, &quadPositionY, &quadLength, width, rect->horzAlign, rect->vertAlign);
        __asm
        {
          vmovss  xmm10, dword ptr [r14]
          vmovss  xmm9, dword ptr [r14+4]
          vmovss  xmm8, dword ptr [r14+8]
        }
        v60 = v131;
        __asm
        {
          vmovss  dword ptr [rsp+1F0h+var_180], xmm12
          vmovss  [rsp+1F0h+var_188], xmm8
          vmovss  [rsp+1F0h+var_190], xmm9
          vmovss  [rsp+1F0h+var_198], xmm10
          vmovss  xmm0, [rbp+0E0h+quadAngle]
          vmovss  [rsp+1F0h+var_1A0], xmm0
          vmovss  xmm7, cs:__real@3f800000
          vmovss  dword ptr [rsp+1F0h+outClipped], xmm7
          vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
          vmovss  dword ptr [rsp+1F0h+h], xmm11
          vmovss  dword ptr [rsp+1F0h+w], xmm11
          vmovss  xmm0, [rbp+0E0h+width]
          vmovss  dword ptr [rsp+1F0h+outVector], xmm0
          vmovss  xmm1, [rbp+0E0h+quadLength]
          vmovss  dword ptr [rsp+1F0h+fmt], xmm1
          vmovss  xmm3, [rbp+0E0h+quadPositionY]; centerY
          vmovss  xmm2, [rbp+0E0h+quadPositionX]; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, outVector, w, h, v102, outClipped, v108, v111, v114, v117, v120, this->m_uiBRTravelLineMaterial, v131);
        __asm
        {
          vmovss  xmm0, [rbp+0E0h+quadAngle]
          vaddss  xmm1, xmm0, cs:__real@42b40000
          vmovss  [rbp+0E0h+quadAngle], xmm1
          vmovss  xmm6, cs:__real@42200000
          vmovss  [rbp+0E0h+var_158], xmm6
          vmovss  [rbp+0E0h+var_15C], xmm6
        }
        *(vec2_t *)v133 = position1;
        ScrPlace_ApplyRect(ActivePlacement, v133, &v133[1], &v125, &v124, rect->horzAlign, rect->vertAlign);
        __asm
        {
          vmovss  dword ptr [rsp+1F0h+var_180], xmm12
          vmovss  [rsp+1F0h+var_188], xmm8
          vmovss  [rsp+1F0h+var_190], xmm9
          vmovss  [rsp+1F0h+var_198], xmm10
          vmovss  xmm0, [rbp+0E0h+quadAngle]
          vmovss  [rsp+1F0h+var_1A0], xmm0
          vmovss  dword ptr [rsp+1F0h+outClipped], xmm7
          vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
          vmovss  dword ptr [rsp+1F0h+h], xmm11
          vmovss  dword ptr [rsp+1F0h+w], xmm11
          vmovss  xmm0, [rbp+0E0h+var_15C]
          vmovss  dword ptr [rsp+1F0h+outVector], xmm0
          vmovss  xmm1, [rbp+0E0h+var_158]
          vmovss  dword ptr [rsp+1F0h+fmt], xmm1
          vmovss  xmm3, [rbp+0E0h+var_108+4]; centerY
          vmovss  xmm2, [rbp+0E0h+var_108]; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, outVectora, wa, ha, v103, outClippeda, v109, v112, v115, v118, v121, this->m_uiBRLineArrowMaterial, v60);
        __asm
        {
          vmovss  [rbp+0E0h+var_158], xmm6
          vmovss  [rbp+0E0h+var_15C], xmm6
        }
        *(vec2_t *)v133 = position2;
        ScrPlace_ApplyRect(ActivePlacement, v133, &v133[1], &v125, &v124, rect->horzAlign, rect->vertAlign);
        __asm
        {
          vmovss  dword ptr [rsp+1F0h+var_180], xmm12
          vmovss  [rsp+1F0h+var_188], xmm8
          vmovss  [rsp+1F0h+var_190], xmm9
          vmovss  [rsp+1F0h+var_198], xmm10
          vmovss  xmm0, [rbp+0E0h+quadAngle]
          vmovss  [rsp+1F0h+var_1A0], xmm0
          vmovss  dword ptr [rsp+1F0h+outClipped], xmm7
          vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
          vmovss  dword ptr [rsp+1F0h+h], xmm11
          vmovss  dword ptr [rsp+1F0h+w], xmm11
          vmovss  xmm0, [rbp+0E0h+var_15C]
          vmovss  dword ptr [rsp+1F0h+outVector], xmm0
          vmovss  xmm1, [rbp+0E0h+var_158]
          vmovss  dword ptr [rsp+1F0h+fmt], xmm1
          vmovss  xmm3, [rbp+0E0h+var_108+4]; centerY
          vmovss  xmm2, [rbp+0E0h+var_108]; centerX
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, outVectorb, wb, hb, v104, outClippedb, v110, v113, v116, v119, v122, this->m_uiBRLineArrowMaterial, v60);
        memset(&out, 0, sizeof(out));
      }
    }
  }
  _R11 = &v142;
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
CgCompassSystemBR::DrawBRSelectionCursor
==============
*/
void CgCompassSystemBR::DrawBRSelectionCursor(CgCompassSystemBR *this, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, TacMapCursorStyle cursorStyle, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  CgCompassSystem *CompassSystem; 
  LocalClientNum_t m_localClientNum; 
  char v52; 
  char v53; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v56; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *v111; 
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
  float v166; 
  float v167; 
  float v168; 
  float v169; 
  float v170; 
  float v171; 
  float v172; 
  float quadLength; 
  float width; 
  float quadAngle; 
  float v176; 
  float v177; 
  float v178; 
  float v179; 
  float quadPositionX; 
  float quadPositionY; 
  vec2_t position1; 
  vec2_t position2; 
  vec4_t v184; 
  float x; 
  float v186; 
  float v187; 
  float vMin[3]; 
  vec4_t quadVerts[4]; 

  LODWORD(position1.v[0]) = cursorStyle;
  _RSI = this;
  if ( !parentRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1351, ASSERT_TYPE_ASSERT, "(parentRect)", (const char *)&queryFormat, "parentRect") )
    __debugbreak();
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1352, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)_RSI->m_localClientNum);
  if ( CL_Keys_IsCatcherActive(_RSI->m_localClientNum, 16) && CL_Input_IsGamepadEnabled(_RSI->m_localClientNum) )
  {
    __asm
    {
      vmovaps [rsp+1F0h+var_50], xmm6
      vmovaps [rsp+1F0h+var_60], xmm7
      vmovaps [rsp+1F0h+var_70], xmm8
      vmovaps [rsp+1F0h+var_80], xmm9
      vmovaps [rsp+1F0h+var_90], xmm10
      vmovaps [rsp+1F0h+var_A0], xmm11
      vmovaps [rsp+1F0h+var_B0], xmm12
    }
    CG_CompassCalcDimensions(compassType, _RBX, parentRect, rect, &x, &v186, &v187, vMin);
    __asm
    {
      vmovss  xmm8, cs:__real@40000000
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm10, cs:__real@3f000000
    }
    _R14 = SLODWORD(position1.v[0]);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+r14*8+0FB98h]
      vmovups xmmword ptr [rbp+0E0h+var_128], xmm0
      vmovss  xmm0, cs:__real@42000000
      vmovss  [rbp+0E0h+var_14C], xmm0
      vmovss  [rbp+0E0h+var_148], xmm0
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
        vmovss  xmm0, [rbp+0E0h+var_14C]
        vaddss  xmm3, xmm2, xmm9
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm5, xmm3, xmm10
        vaddss  xmm3, xmm2, xmm9
        vmulss  xmm2, xmm3, xmm10
        vmovss  xmm3, [rbp+0E0h+var_148]
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
      vmulss  xmm1, xmm5, [rbp+0E0h+var_110]
      vmovss  xmm7, [rbp+0E0h+x]
    }
    m_localClientNum = _RSI->m_localClientNum;
    __asm
    {
      vaddss  xmm1, xmm1, xmm7
      vmulss  xmm11, xmm0, xmm10
      vsubss  xmm4, xmm1, xmm11
      vmulss  xmm1, xmm2, [rbp+0E0h+vMin]
      vaddss  xmm2, xmm1, [rbp+0E0h+var_114]
      vmulss  xmm12, xmm3, xmm10
      vsubss  xmm3, xmm2, xmm12
      vaddss  xmm0, xmm3, xmm12
      vsubss  xmm6, xmm4, xmm8
      vmovss  dword ptr [rbp+0E0h+position2+4], xmm0
      vmovss  dword ptr [rbp+0E0h+position1+4], xmm0
      vmovss  [rbp+0E0h+var_150], xmm4
      vmovss  [rbp+0E0h+var_154], xmm3
      vmovss  dword ptr [rbp+0E0h+position2], xmm6
      vmovss  dword ptr [rbp+0E0h+position1], xmm7
      vmovss  [rbp+0E0h+width], xmm8
    }
    ActivePlacement = ScrPlace_GetActivePlacement(m_localClientNum);
    __asm
    {
      vcomiss xmm6, xmm7
      vmovaps xmm7, [rsp+1F0h+var_60]
    }
    v56 = ActivePlacement;
    __asm
    {
      vmovaps xmm6, [rsp+1F0h+var_50]
      vxorps  xmm10, xmm10, xmm10
    }
    if ( !(v52 | v53) )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(_RSI, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      ScrPlace_ApplyRect(v56, &quadPositionX, &quadPositionY, &quadLength, &width, rect->horzAlign, rect->vertAlign);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0E0h+var_128+0Ch]
        vmovss  xmm1, dword ptr [rbp+0E0h+var_128+8]
        vmovss  xmm3, [rbp+0E0h+quadPositionY]; centerY
        vmovss  xmm2, [rbp+0E0h+quadPositionX]; centerX
        vmovss  [rsp+1F0h+var_180], xmm0
        vmovss  xmm0, dword ptr [rbp+0E0h+var_128+4]
        vmovss  [rsp+1F0h+var_188], xmm1
        vmovss  xmm1, dword ptr [rbp+0E0h+var_128]
        vmovss  [rsp+1F0h+var_190], xmm0
        vmovss  xmm0, [rbp+0E0h+quadAngle]
        vmovss  [rsp+1F0h+var_198], xmm1
        vmovss  [rsp+1F0h+var_1A0], xmm0
        vmovss  xmm0, [rbp+0E0h+quadLength]
        vmovss  dword ptr [rsp+1F0h+var_1A8], xmm9
        vmovss  dword ptr [rsp+1F0h+var_1B0], xmm9
        vmovss  dword ptr [rsp+1F0h+h], xmm10
        vmovss  dword ptr [rsp+1F0h+w], xmm10
        vmovss  dword ptr [rsp+1F0h+y], xmm8
        vmovss  dword ptr [rsp+1F0h+fmt], xmm0
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)_RSI->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmt, y, w, h, v145, v149, v153, v157, v161, v165, v169, _RSI->m_uiBRTravelLineMaterial, luaVM);
    }
    __asm
    {
      vmovss  xmm4, [rbp+0E0h+var_150]
      vaddss  xmm0, xmm4, [rbp+0E0h+var_14C]
      vmovss  xmm5, [rbp+0E0h+var_154]
      vaddss  xmm3, xmm0, xmm8
      vmovss  xmm0, [rbp+0E0h+var_110]
      vaddss  xmm1, xmm0, [rbp+0E0h+x]
      vcomiss xmm3, xmm1
      vaddss  xmm2, xmm12, xmm5
      vmovaps xmm12, [rsp+1F0h+var_B0]
      vmovss  dword ptr [rbp+0E0h+position2], xmm3
      vmovss  dword ptr [rbp+0E0h+position2+4], xmm2
      vmovss  dword ptr [rbp+0E0h+position1], xmm1
      vmovss  dword ptr [rbp+0E0h+position1+4], xmm2
    }
    if ( v52 )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(_RSI, position2, position1, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      wa = rect->vertAlign;
      ya = rect->horzAlign;
      __asm { vmovss  [rbp+0E0h+width], xmm8 }
      ScrPlace_ApplyRect(v56, &quadPositionX, &quadPositionY, &quadLength, &width, ya, wa);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0E0h+var_128+0Ch]
        vmovss  xmm1, dword ptr [rbp+0E0h+var_128+8]
        vmovss  xmm3, [rbp+0E0h+quadPositionY]; centerY
        vmovss  xmm2, [rbp+0E0h+quadPositionX]; centerX
        vmovss  [rsp+1F0h+var_180], xmm0
        vmovss  xmm0, dword ptr [rbp+0E0h+var_128+4]
        vmovss  [rsp+1F0h+var_188], xmm1
        vmovss  xmm1, dword ptr [rbp+0E0h+var_128]
        vmovss  [rsp+1F0h+var_190], xmm0
        vmovss  xmm0, [rbp+0E0h+quadAngle]
        vmovss  [rsp+1F0h+var_198], xmm1
        vmovss  [rsp+1F0h+var_1A0], xmm0
        vmovss  xmm0, [rbp+0E0h+quadLength]
        vmovss  dword ptr [rsp+1F0h+var_1A8], xmm9
        vmovss  dword ptr [rsp+1F0h+var_1B0], xmm9
        vmovss  dword ptr [rsp+1F0h+h], xmm10
        vmovss  dword ptr [rsp+1F0h+w], xmm10
        vmovss  dword ptr [rsp+1F0h+y], xmm8
        vmovss  dword ptr [rsp+1F0h+fmt], xmm0
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)_RSI->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmta, yb, wb, ha, v146, v150, v154, v158, v162, v166, v170, _RSI->m_uiBRTravelLineMaterial, luaVM);
      __asm
      {
        vmovss  xmm4, [rbp+0E0h+var_150]
        vmovss  xmm5, [rbp+0E0h+var_154]
      }
    }
    __asm
    {
      vmovss  xmm3, [rbp+0E0h+var_114]
      vsubss  xmm1, xmm5, xmm8
      vcomiss xmm1, xmm3
      vaddss  xmm0, xmm11, xmm4
      vmovss  dword ptr [rbp+0E0h+position2], xmm0
      vmovss  dword ptr [rbp+0E0h+position2+4], xmm1
      vmovss  dword ptr [rbp+0E0h+position1], xmm0
      vmovss  dword ptr [rbp+0E0h+position1+4], xmm3
    }
    if ( !(v52 | v53) )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(_RSI, position1, position2, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      wc = rect->vertAlign;
      yc = rect->horzAlign;
      __asm { vmovss  [rbp+0E0h+width], xmm8 }
      ScrPlace_ApplyRect(v56, &quadPositionX, &quadPositionY, &quadLength, &width, yc, wc);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0E0h+var_128+0Ch]
        vmovss  xmm1, dword ptr [rbp+0E0h+var_128+8]
        vmovss  xmm3, [rbp+0E0h+quadPositionY]; centerY
        vmovss  xmm2, [rbp+0E0h+quadPositionX]; centerX
        vmovss  [rsp+1F0h+var_180], xmm0
        vmovss  xmm0, dword ptr [rbp+0E0h+var_128+4]
        vmovss  [rsp+1F0h+var_188], xmm1
        vmovss  xmm1, dword ptr [rbp+0E0h+var_128]
        vmovss  [rsp+1F0h+var_190], xmm0
        vmovss  xmm0, [rbp+0E0h+quadAngle]
        vmovss  [rsp+1F0h+var_198], xmm1
        vmovss  [rsp+1F0h+var_1A0], xmm0
        vmovss  xmm0, [rbp+0E0h+quadLength]
        vmovss  dword ptr [rsp+1F0h+var_1A8], xmm9
        vmovss  dword ptr [rsp+1F0h+var_1B0], xmm9
        vmovss  dword ptr [rsp+1F0h+h], xmm10
        vmovss  dword ptr [rsp+1F0h+w], xmm10
        vmovss  dword ptr [rsp+1F0h+y], xmm8
        vmovss  dword ptr [rsp+1F0h+fmt], xmm0
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)_RSI->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, yd, wd, hb, v147, v151, v155, v159, v163, v167, v171, _RSI->m_uiBRTravelLineMaterial, luaVM);
      __asm
      {
        vmovss  xmm3, [rbp+0E0h+var_114]
        vmovss  xmm4, [rbp+0E0h+var_150]
        vmovss  xmm5, [rbp+0E0h+var_154]
      }
    }
    __asm
    {
      vaddss  xmm0, xmm5, [rbp+0E0h+var_14C]
      vaddss  xmm1, xmm11, xmm4
      vmovaps xmm11, [rsp+1F0h+var_A0]
      vaddss  xmm2, xmm0, xmm8
      vmovss  dword ptr [rbp+0E0h+position2], xmm1
      vmovss  dword ptr [rbp+0E0h+position1], xmm1
      vaddss  xmm1, xmm3, [rbp+0E0h+vMin]
      vcomiss xmm2, xmm1
      vmovss  dword ptr [rbp+0E0h+position2+4], xmm2
      vmovss  dword ptr [rbp+0E0h+position1+4], xmm1
    }
    if ( v52 )
    {
      CgCompassSystemMP::GetQuadInfoForPoints(_RSI, position2, position1, &quadPositionX, &quadPositionY, &quadLength, &quadAngle);
      we = rect->vertAlign;
      ye = rect->horzAlign;
      __asm { vmovss  [rbp+0E0h+width], xmm8 }
      ScrPlace_ApplyRect(v56, &quadPositionX, &quadPositionY, &quadLength, &width, ye, we);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0E0h+var_128+0Ch]
        vmovss  xmm1, dword ptr [rbp+0E0h+var_128+8]
        vmovss  xmm3, [rbp+0E0h+quadPositionY]; centerY
        vmovss  xmm2, [rbp+0E0h+quadPositionX]; centerX
        vmovss  [rsp+1F0h+var_180], xmm0
        vmovss  xmm0, dword ptr [rbp+0E0h+var_128+4]
        vmovss  [rsp+1F0h+var_188], xmm1
        vmovss  xmm1, dword ptr [rbp+0E0h+var_128]
        vmovss  [rsp+1F0h+var_190], xmm0
        vmovss  xmm0, [rbp+0E0h+quadAngle]
        vmovss  [rsp+1F0h+var_198], xmm1
        vmovss  [rsp+1F0h+var_1A0], xmm0
        vmovss  xmm0, [rbp+0E0h+quadLength]
        vmovss  dword ptr [rsp+1F0h+var_1A8], xmm9
        vmovss  dword ptr [rsp+1F0h+var_1B0], xmm9
        vmovss  dword ptr [rsp+1F0h+h], xmm10
        vmovss  dword ptr [rsp+1F0h+w], xmm10
        vmovss  dword ptr [rsp+1F0h+y], xmm8
        vmovss  dword ptr [rsp+1F0h+fmt], xmm0
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)_RSI->m_localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, yf, wf, hc, v148, v152, v156, v160, v164, v168, v172, _RSI->m_uiBRTravelLineMaterial, luaVM);
    }
    vertAlign = rect->vertAlign;
    horzAlign = rect->horzAlign;
    v111 = ScrPlace_GetActivePlacement((const LocalClientNum_t)_RSI->m_localClientNum);
    ScrPlace_ApplyRect(v111, &v177, &v176, &v178, &v179, horzAlign, vertAlign);
    __asm
    {
      vmovss  xmm1, [rbp+0E0h+var_154]; top
      vmovss  xmm0, [rbp+0E0h+var_150]; left
      vaddss  xmm3, xmm1, [rbp+0E0h+var_148]; bottom
      vaddss  xmm2, xmm0, [rbp+0E0h+var_14C]; right
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  dword ptr [rsp+1F0h+h], xmm9
      vmovss  dword ptr [rsp+1F0h+w], xmm9
      vmovss  dword ptr [rsp+1F0h+y], xmm10
      vmovss  dword ptr [rsp+1F0h+fmt], xmm10
    }
    LUI_Render_DrawImage((const LocalClientNum_t)_RSI->m_localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, fmtd, yg, wg, hd, &v184, _RSI->m_uiCursorStyles[_R14].cursorReticleMaterial);
    __asm
    {
      vmovaps xmm10, [rsp+1F0h+var_90]
      vmovaps xmm9, [rsp+1F0h+var_80]
      vmovaps xmm8, [rsp+1F0h+var_70]
    }
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
  centity_t *Entity; 
  CalloutMarkerPingPool v31; 
  const CalloutMarkerPingView *View; 
  CgStatic *LocalClientStatics; 
  CalloutMarkerPingPool v35; 
  const CalloutMarkerPingView *v36; 
  char v40; 
  unsigned __int8 owner; 
  int v43; 
  int clientNum; 
  const char *v45; 
  int TeammateIndex; 
  const rectDef_s *v48; 
  int v62; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  const char *v77; 
  const dvar_t *v78; 
  float x; 
  float xa; 
  float y; 
  float ya; 
  float yb; 
  float yc; 
  float yd; 
  float w; 
  float wa; 
  float wb; 
  float wc; 
  float h; 
  float ha; 
  float hb; 
  float hc; 
  float luaVMa; 
  float v104; 
  CalloutMarkerPingPool v106; 
  float v107; 
  float v108[2]; 
  cg_t *v109; 
  const rectDef_s *v110; 
  const rectDef_s *v111; 
  SecureVec3 v112; 
  float v113; 
  const CalloutMarkerPingView *v114; 
  __int64 v115; 
  vec2_t out_xy; 
  vec3_t origin; 
  rectDef_s v118; 
  vec2_t v119; 
  vec2_t out_xyClipped; 
  vec4_t v121; 
  vec3_t prevOrigin; 
  vec4_t v123[11]; 
  char v124; 
  void *retaddr; 

  if ( compassType == COMPASS_TYPE_TACMAP )
  {
    _RAX = &retaddr;
    _RBP = &v121;
    v115 = -2i64;
    __asm
    {
      vmovaps xmmword ptr [rax-58h], xmm6
      vmovaps xmmword ptr [rax-68h], xmm7
      vmovaps xmmword ptr [rax-78h], xmm8
      vmovaps xmmword ptr [rax-88h], xmm9
      vmovaps xmmword ptr [rax-98h], xmm10
      vmovaps xmmword ptr [rax-0A8h], xmm11
    }
    v110 = parentRect;
    v111 = rect;
    LOWORD(v107) = CG_CalloutMarkerPing_TacmapGetLookingAtEntity(this->m_localClientNum);
    LookingAtScriptable = CG_CalloutMarkerPing_TacmapGetLookingAtScriptable(this->m_localClientNum);
    LODWORD(v108[0]) = CG_CalloutMarkerPing_TacmapGetLookingAtObjective(this->m_localClientNum);
    LookingAtPing = CG_CalloutMarkerPing_TacmapGetLookingAtPing(this->m_localClientNum);
    _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    v109 = _RBX;
    CG_CompassCalcDimensions(COMPASS_TYPE_TACMAP, _RBX, v110, rect, &v118.x, &v118.y, &v118.w, &v118.h);
    __asm
    {
      vmovss  xmm9, cs:__real@3f000000
      vmulss  xmm1, xmm9, dword ptr [rbp-20h]
      vaddss  xmm6, xmm1, dword ptr [rbp-28h]
      vmulss  xmm0, xmm9, dword ptr [rbp-1Ch]
      vaddss  xmm7, xmm0, dword ptr [rbp-24h]
    }
    CgCompassSystem::GetCompassYaw(this, COMPASS_TYPE_TACMAP, cropPartialMap, _RBX, &v113, &v119);
    CG_CalcPlayerPos(&v112, this->m_localClientNum);
    if ( LOWORD(v107) != 2047 )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, SLOWORD(v107));
      if ( (Entity->flags & 1) != 0 )
      {
        CG_GetPoseOrigin(&Entity->pose, &origin);
        goto LABEL_17;
      }
LABEL_47:
      memset(&v112, 0, sizeof(v112));
      _R11 = &v124;
      __asm
      {
        vmovaps xmm6, xmmword ptr [r11-18h]
        vmovaps xmm7, xmmword ptr [r11-28h]
        vmovaps xmm8, xmmword ptr [r11-38h]
        vmovaps xmm9, xmmword ptr [r11-48h]
        vmovaps xmm10, xmmword ptr [r11-58h]
        vmovaps xmm11, xmmword ptr [r11-68h]
      }
      return;
    }
    if ( LookingAtScriptable == -1 )
    {
      if ( LODWORD(v108[0]) != -1 )
      {
        _R14 = SLODWORD(v108[0]);
        if ( _RBX->predictedPlayerState.objectives[_R14].entNum[0] != 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 1819, ASSERT_TYPE_ASSERT, "(ps->objectives[lookAtObjective].entNum[0] == ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->objectives[lookAtObjective].entNum[0] == ENTITYNUM_NONE") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [r14+rbx+1298h]
          vmovss  dword ptr [rbp-38h], xmm0
          vmovss  xmm1, dword ptr [r14+rbx+129Ch]
          vmovss  dword ptr [rbp-34h], xmm1
          vmovss  xmm0, dword ptr [r14+rbx+12A0h]
          vmovss  dword ptr [rbp-30h], xmm0
        }
        goto LABEL_17;
      }
      if ( LookingAtPing == 53 )
        goto LABEL_47;
      v31 = CG_CalloutMarkerPing_ViewIndexToPool(this->m_localClientNum, LookingAtPing);
      if ( v31 == CONST_CALLOUT_POOL_SIZE )
        goto LABEL_47;
      View = CG_CalloutMarkerPing_GetView(this->m_localClientNum, LookingAtPing, &_RBX->predictedPlayerState);
      if ( !View->origin.owner )
        goto LABEL_47;
      CG_CalloutMarkerPing_GetWorldOrigin(v31, View, this->m_localClientNum, &origin);
    }
    else
    {
      if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)this->m_localClientNum, LookingAtScriptable) )
        goto LABEL_47;
      ScriptableCl_GetInstanceOrigin((const LocalClientNum_t)this->m_localClientNum, LookingAtScriptable, &origin);
    }
LABEL_17:
    __asm
    {
      vmovss  [rsp+218h+var_1C0], xmm7
      vmovss  dword ptr [rsp+218h+luaVM], xmm6
      vmovss  xmm0, dword ptr [rbp+148h]
      vmovss  dword ptr [rsp+218h+y], xmm0
    }
    if ( !CgCompassSystemMP::GetObjectiveClippedPos(this, COMPASS_TYPE_TACMAP, 0, cropPartialMap, &v118, y, &v119, &v112, &origin, &prevOrigin, luaVMa, v104, &out_xy, &out_xyClipped) )
    {
      if ( LookingAtPing == 53 )
      {
        __asm { vmovss  xmm6, dword ptr [rbp-3Ch] }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassEnemyHeightDelta, "compassEnemyHeightDelta");
        __asm
        {
          vmovss  xmm1, dword ptr [rbp-60h]
          vsubss  xmm2, xmm1, dword ptr [rbp-30h]
          vcomiss xmm2, xmm0
        }
        if ( v40 )
        {
          v77 = "scr_calloutmarkerping_tacmap_prompt_y";
          v78 = DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y;
        }
        else
        {
          v77 = "scr_calloutmarkerping_tacmap_prompt_y_elev";
          v78 = DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_elev;
        }
        Dvar_GetFloat_Internal_DebugName(v78, v77);
        __asm { vaddss  xmm6, xmm6, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height, "scr_calloutmarkerping_tacmap_prompt_height");
        __asm
        {
          vmovss  dword ptr [rsp+218h+h], xmm0
          vmovss  dword ptr [rsp+218h+w], xmm6
          vmovss  xmm0, dword ptr [rbp-40h]
          vmovss  dword ptr [rsp+218h+y], xmm0
        }
        CgCompassSystemMP::DrawText(this, COMPASS_TYPE_TACMAP, rect, "MP_BR_INGAME/PING", 4, yd, wc, hc, &colorWhite, element, luaVM);
      }
      else
      {
        LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
        *(_QWORD *)v108 = CgStatic::GetCharacterInfo(LocalClientStatics, v109->clientNum);
        v35 = CG_CalloutMarkerPing_ViewIndexToPool(this->m_localClientNum, LookingAtPing);
        v106 = v35;
        if ( v35 != CONST_CALLOUT_POOL_SIZE )
        {
          v36 = CG_CalloutMarkerPing_GetView(this->m_localClientNum, LookingAtPing, &_RBX->predictedPlayerState);
          v114 = v36;
          if ( v36->origin.owner )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_ping, "scr_calloutmarkerping_tacmap_prompt_y_ping");
            __asm { vaddss  xmm7, xmm0, dword ptr [rbp-3Ch] }
            *(double *)&_XMM0 = CG_CalloutMarkerPing_GetAspectRatio(v35, v36, this->m_localClientNum);
            __asm
            {
              vmovaps xmm8, xmm0
              vmovss  xmm6, cs:__real@3f800000
              vcomiss xmm0, xmm6
            }
            if ( v40 )
            {
              Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_ping, "scr_calloutmarkerping_tacmap_prompt_y_ping");
              __asm { vaddss  xmm7, xmm7, xmm0 }
            }
            if ( v35 == CONST_CALLOUT_POOL_ID_NAVIGATION )
            {
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_ping, "scr_calloutmarkerping_tacmap_prompt_y_ping");
              __asm
              {
                vmulss  xmm1, xmm0, cs:__real@3f19999a
                vaddss  xmm7, xmm7, xmm1
              }
            }
            owner = v36->origin.owner;
            if ( owner )
              v43 = owner - 1;
            else
              v43 = -1;
            clientNum = v109->clientNum;
            if ( v43 == clientNum )
            {
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height, "scr_calloutmarkerping_tacmap_prompt_height");
              v45 = "MP_BR_INGAME/CANCEL_PING";
            }
            else
            {
              TeammateIndex = CG_CalloutMarkerPing_GetTeammateIndex(this->m_localClientNum, clientNum);
              if ( CG_CalloutMarkerPing_GetTeammateConfirmed(v35, v36, TeammateIndex) )
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height, "scr_calloutmarkerping_tacmap_prompt_height");
                v45 = "MP_BR_INGAME/PING_DECLINE";
              }
              else
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height, "scr_calloutmarkerping_tacmap_prompt_height");
                v45 = "MP_BR_INGAME/ACKNOWLEDGE_PING";
              }
            }
            __asm
            {
              vmovss  dword ptr [rsp+218h+h], xmm0
              vmovss  dword ptr [rsp+218h+w], xmm7
              vmovss  xmm0, dword ptr [rbp-40h]
              vmovss  dword ptr [rsp+218h+y], xmm0
            }
            v48 = v111;
            CgCompassSystemMP::DrawText(this, COMPASS_TYPE_TACMAP, v111, v45, 4, ya, w, h, &colorWhite, element, luaVM);
            _ER13 = v109->teamPlayers[*(int *)(*(_QWORD *)v108 + 12i64)];
            if ( (unsigned int)(_ER13 - 2) <= 2 )
            {
              __asm { vcomiss xmm8, xmm6 }
              if ( (unsigned int)(_ER13 - 2) >= 2 )
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_d, "scr_calloutmarkerping_tacmap_prompt_pip_d");
                __asm { vmovaps xmm8, xmm0 }
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_s, "scr_calloutmarkerping_tacmap_prompt_pip_s");
                __asm
                {
                  vaddss  xmm10, xmm0, xmm8
                  vmovd   xmm2, r13d
                  vcvtdq2ps xmm2, xmm2
                  vsubss  xmm1, xmm2, xmm6
                  vmulss  xmm3, xmm1, xmm0
                  vmulss  xmm2, xmm2, xmm8
                  vaddss  xmm3, xmm3, xmm2
                  vmulss  xmm4, xmm3, xmm9
                  vmovss  xmm1, dword ptr [rbp-40h]
                  vsubss  xmm11, xmm1, xmm4
                  vaddss  xmm9, xmm0, dword ptr [rbp-3Ch]
                }
                if ( v35 )
                  __asm { vaddss  xmm9, xmm9, xmm8 }
                v62 = 0;
                if ( _ER13 > 0 )
                {
                  __asm { vxorps  xmm7, xmm7, xmm7 }
                  do
                  {
                    __asm
                    {
                      vxorps  xmm0, xmm0, xmm0
                      vcvtsi2ss xmm0, xmm0, r14d
                      vmulss  xmm1, xmm0, xmm10
                      vaddss  xmm2, xmm1, xmm11
                      vmovss  dword ptr [rbp-80h], xmm2
                      vmovss  [rsp+218h+var_1A4], xmm9
                      vmovss  [rsp+218h+var_1A0], xmm8
                      vmovss  dword ptr [rbp-78h], xmm8
                    }
                    vertAlign = v48->vertAlign;
                    horzAlign = v48->horzAlign;
                    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
                    ScrPlace_ApplyRect(ActivePlacement, (float *)&v109, &v107, v108, (float *)&v110, horzAlign, vertAlign);
                    __asm
                    {
                      vmovss  xmm1, [rsp+218h+var_1A4]; top
                      vaddss  xmm3, xmm1, dword ptr [rbp-78h]; bottom
                      vmovss  xmm0, dword ptr [rbp-80h]; left
                      vaddss  xmm2, xmm0, [rsp+218h+var_1A0]; right
                    }
                    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])v123);
                    if ( CG_CalloutMarkerPing_GetTeammateConfirmed(v106, v114, ++v62) )
                    {
                      LUI_CoD_GameMP_GetBrColorForIndex(v62, &v121);
                      __asm
                      {
                        vmovss  dword ptr [rsp+218h+h], xmm6
                        vmovss  dword ptr [rsp+218h+w], xmm6
                        vmovss  dword ptr [rsp+218h+y], xmm7
                        vmovss  dword ptr [rsp+218h+x], xmm7
                      }
                      LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])v123, x, yb, wa, ha, &v121, cgMedia.compass.calloutMarkerPing_PipFill);
                    }
                    __asm
                    {
                      vmovss  dword ptr [rsp+218h+h], xmm6
                      vmovss  dword ptr [rsp+218h+w], xmm6
                      vmovss  dword ptr [rsp+218h+y], xmm7
                      vmovss  dword ptr [rsp+218h+x], xmm7
                    }
                    LUI_Render_DrawImage((const LocalClientNum_t)this->m_localClientNum, element, luaVM, (const vec4_t (*)[4])v123, xa, yc, wb, hb, &colorBlack, cgMedia.compass.calloutMarkerPing_PipBorder);
                    v48 = v111;
                  }
                  while ( v62 < _ER13 );
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_47;
  }
}

/*
==============
CgCompassSystemBR::DrawItemsLayer
==============
*/
void CgCompassSystemBR::DrawItemsLayer(CgCompassSystemBR *this, const MinimapOptions *minimapOptions, const rectDef_s *parentRect, const rectDef_s *rect, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  char v28; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  int Integer; 
  centity_t *Entity; 
  float fmt; 
  float boundsRadius; 
  float boundsRadiusa; 
  float boundsRadiusb; 
  float boundsRadiusc; 
  float boundsRadiusd; 
  float boundsRadiuse; 
  float boundsRadiusf; 
  float boundsRadiusg; 
  float boundsRadiush; 
  float boundsRadiusi; 
  float boundsRadiusj; 
  float boundsRadiusk; 
  float boundsRadiusl; 
  float boundsRadiusm; 
  int boundsRadiusn; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  bool cropPartialMap; 
  CompassType compassType; 
  vec3_t outOrigin; 
  __int64 v85; 
  vec4_t v86; 
  vec2_t position; 
  vec4_t v88; 
  void *retaddr; 

  _RAX = &retaddr;
  v85 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _RBX = minimapOptions;
  _RBP = color;
  _R14 = element;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  dword ptr [rsp+138h+var_98], xmm0
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  dword ptr [rsp+138h+var_98+4], xmm1
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+138h+var_98+8], xmm0
    vmovss  xmm1, dword ptr [rbp+0Ch]
  }
  if ( !this->m_isUsingTabletMode )
  {
    _RDI = DCONST_DVARFLT_compassTacmapIconAlphaOverride;
    if ( !DCONST_DVARFLT_compassTacmapIconAlphaOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapIconAlphaOverride") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm1, dword ptr [rdi+28h] }
  }
  __asm
  {
    vmovss  dword ptr [rsp+138h+var_98+0Ch], xmm1
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemMP::ComputeWorldToScreenScale(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadius, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemMP::DrawPortableRadar(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusa, color, _RBX->mapMask, element, luaVM);
  CgCompassSystemBR::PushStencilRectAndMapMask(this, _RBX->compassType, parentRect, rect, _RBX->mapMask, element);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemBR::DrawBRBoundingCircles(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusb, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemBR::DrawBRBoundingCircleTravelLine(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusc, color, element, luaVM);
  __asm { vmovss  xmm7, dword ptr [rbx+38h] }
  cropPartialMap = _RBX->cropPartialMap;
  compassType = _RBX->compassType;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( this->m_uiBRAdventureSearchAreaOmnvarIndex != -1 )
  {
    *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, _RBX->compassType);
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rbp+0Ch]
      vucomiss xmm1, xmm6
    }
    if ( !v28 )
    {
      Def = BG_Omnvar_GetDef(this->m_uiBRAdventureSearchAreaOmnvarIndex);
      Data = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRAdventureSearchAreaOmnvarIndex);
      Integer = Omnvar_GetInteger(Def, Data);
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, Integer);
      if ( (Entity->flags & 1) != 0 )
      {
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+138h+outOrigin]
          vmovss  dword ptr [rsp+138h+var_88], xmm0
          vmovss  xmm1, dword ptr [rsp+138h+outOrigin+4]
          vmovss  dword ptr [rsp+138h+var_88+4], xmm1
          vmovups xmm0, xmmword ptr cs:unk_151414150
          vmovups xmmword ptr [rsp+138h+var_80], xmm0
          vmovss  xmm0, dword ptr [rsp+138h+outOrigin+8]
          vmovss  dword ptr [rsp+138h+var_E8], xmm0
          vmovss  [rsp+138h+boundsRadius], xmm7
        }
        CgCompassSystemMP::DrawAreaMarker(this, compassType, cropPartialMap, parentRect, rect, boundsRadiusd, &v88, 1, 1, position, v81, cgMedia.compassping_portable_radar_sweep, 0, element, luaVM);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemBR::DrawBRPlaneTravelLine(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiuse, color, element, luaVM);
  if ( _RBX->compassType == COMPASS_TYPE_PARTIAL && _RBX->mapMask )
    LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
  LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+138h+var_108], xmm0
  }
  CgCompassSystemMP::DrawPlayerCalloutMarkerPings(this, 1, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, v77, &v86, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CG_VehicleHudMP_DrawCompass(this->m_localClientNum, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusf, &v86, _RBX->largeMap, _RBX->mapMask, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+138h+var_108], xmm0
  }
  CgCompassSystemMP::DrawScriptableObjectives(this, _RBX->compassType, _RBX->cropPartialMap, _RBX->largeMap, parentRect, rect, v78, &v86, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+138h+var_108], xmm0
  }
  CgCompassSystemMP::DrawPlayerPointers(this, _RBX->compassType, _RBX->cropPartialMap, _RBX->largeMap, parentRect, rect, v79, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+138h+var_108], xmm0
  }
  CgCompassSystemMP::DrawPlayerCalloutMarkerPings(this, 0, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, v80, &v86, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemMP::DrawTurrets(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusg, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemMP::DrawPlanes(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiush, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemMP::DrawHeadIcons(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusi, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemBR::DrawCalloutMarkerPingPrompt(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusj, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemBR::DrawBRMapCircles(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusk, _RBX->mapMask, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemBR::DrawAreaCallouts(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusl, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  CgCompassSystemMP::DrawMLGCameras(this, _RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusm, color, element, luaVM);
  CgCompassSystemMP::DrawGridLabels(this, _RBX->compassType, parentRect, rect, color, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+138h+boundsRadius], xmm0
  }
  ((void (__fastcall *)(CgCompassSystemBR *, _QWORD, bool, const rectDef_s *, const rectDef_s *, int, const vec4_t *, GfxImage *, LUIElement *, lua_State *))this->DrawScramblers)(this, (unsigned int)_RBX->compassType, _RBX->cropPartialMap, parentRect, rect, boundsRadiusn, color, _RBX->mapMask, element, luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+0D8h]
    vmaxss  xmm4, xmm0, xmm6
    vmovss  xmm1, dword ptr [r14+0D4h]
    vmaxss  xmm3, xmm1, xmm6; right
    vmovss  xmm0, dword ptr [r14+0D0h]
    vmaxss  xmm2, xmm0, xmm6; top
    vmovss  xmm1, dword ptr [r14+0CCh]
    vmaxss  xmm1, xmm1, xmm6; left
    vmovss  dword ptr [rsp+138h+fmt], xmm4
  }
  LUI_Render_PushStencilRectangle((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
  CgCompassSystemBR::DrawBRSelectionCursor(this, _RBX->compassType, parentRect, rect, _RBX->cursorStyle, color, element, luaVM);
  LUI_Render_PopStencilRectangle((const LocalClientNum_t)this->m_localClientNum);
  __asm
  {
    vmovaps xmm6, [rsp+138h+var_58]
    vmovaps xmm7, [rsp+138h+var_68]
  }
}

/*
==============
CgCompassSystemBR::DrawScramblers
==============
*/
void CgCompassSystemBR::DrawScramblers(CgCompassSystemBR *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  CompassType v23; 
  const rectDef_s *v25; 
  unsigned int clientNum; 
  characterInfo_t *CharacterInfo; 
  char v31; 
  ScreenPlacement *v44; 
  int v45; 
  const vec2_t *p_pos; 
  __int64 v50; 
  __int64 m_localClientNum; 
  CgEntitySystem *v73; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *v75; 
  team_t team; 
  team_t v77; 
  char v78; 
  const GfxImage *m_uiBRDottedCircleMaterial; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  vec2_t *outVector; 
  float outVectorb; 
  vec2_t *outVectora; 
  float outVectorc; 
  float outVectord; 
  float outVectore; 
  float outVectorf; 
  float wa; 
  float *w; 
  float wb; 
  float wc; 
  float *h; 
  float ha; 
  float hb; 
  float hc; 
  float outClipped; 
  float outClippeda; 
  float outClippedb; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float isPixelCircle; 
  float isPixelCirclea; 
  float isPixelCircleb; 
  bool Bool_Internal_DebugName; 
  bool v142; 
  bool v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  CompassType compassTypea; 
  int v151; 
  cg_t *cgameGlob; 
  ScreenPlacement *scrPlace; 
  __int64 v154; 
  vec4_t *v155; 
  lua_State *v156; 
  LUIElement *v157; 
  rectDef_s *parentRecta; 
  const vec2_t *v159; 
  CgStatic *LocalClientStatics; 
  rectDef_s *v161; 
  float outAngle; 
  char v163[4]; 
  characterInfo_t *v164; 
  SecureVec3 out; 
  __int64 v166; 
  vec2_t v167; 
  rectDef_s x; 
  vec4_t v169; 
  vec2_t outSize; 
  vec2_t north; 
  vec4_t quadVerts[4]; 
  char v173; 
  void *retaddr; 

  _RAX = &retaddr;
  v166 = -2i64;
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
  parentRecta = (rectDef_s *)parentRect;
  v23 = compassType;
  compassTypea = compassType;
  v25 = rect;
  v161 = (rectDef_s *)rect;
  v155 = (vec4_t *)color;
  v157 = element;
  v156 = luaVM;
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
      CgCompassSystem::GetCompassYaw(this, v23, cropPartialMap, cgameGlob, &outAngle, &north);
      _RAX = v155;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+0Ch]
        vxorps  xmm7, xmm7, xmm7
        vucomiss xmm0, xmm7
      }
      if ( !v31 )
      {
        CG_CompassCalcDimensions(v23, cgameGlob, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
        __asm
        {
          vmovss  xmm9, cs:__real@3f000000
          vmulss  xmm1, xmm9, [rbp+190h+var_160]
          vaddss  xmm14, xmm1, [rbp+190h+x]
          vmulss  xmm0, xmm9, [rbp+190h+var_15C]
          vaddss  xmm15, xmm0, [rbp+190h+y]
        }
        scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
        v164 = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
        CG_CalcPlayerPos(&out, this->m_localClientNum);
        this->GetDrawnItemScalerRadiusAndMultiplier(this, CUAV, (float *)&v151, (float *)v163);
        *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystemBR *, _QWORD, __int64))this->GetDrawnItemScaler)(this, (unsigned int)v23, 2i64);
        __asm
        {
          vmovss  xmm2, [rbp+190h+var_15C]
          vmulss  xmm0, xmm0, xmm2
          vdivss  xmm12, xmm0, dword ptr [rbx+20h]
          vmulss  xmm13, xmm12, xmm9
          vmovss  xmm1, [rbp+190h+x]
          vmovss  [rbp+190h+var_200], xmm1
          vmovss  xmm0, [rbp+190h+y]
          vmovss  [rbp+190h+var_208], xmm0
          vmovss  xmm1, [rbp+190h+var_160]
          vmovss  [rbp+190h+var_204], xmm1
          vmovss  [rbp+190h+var_20C], xmm2
        }
        v44 = scrPlace;
        ScrPlace_ApplyRect(scrPlace, &v147, &v145, &v146, &v144, rect->horzAlign, rect->vertAlign);
        LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_compassScramblerDrawSquadColor, "compassScramblerDrawSquadColor");
        v143 = Dvar_GetBool_Internal_DebugName(DVARBOOL_compassScramblerDrawDottedBorder, "compassScramblerDrawDottedBorder");
        v142 = Dvar_GetBool_Internal_DebugName(DVARBOOL_compassScramblerDrawEnemyBorder, "compassScramblerDrawEnemyBorder");
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
        v45 = 0;
        p_pos = &this->m_compassScramblers[0][0].pos;
        __asm
        {
          vmovss  xmm10, [rbp+190h+boundsRadius]
          vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm8, cs:__real@3f800000
        }
        while ( 1 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( v45 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
            break;
          v159 = p_pos;
          v50 = 4i64;
          v154 = 4i64;
          do
          {
            if ( BYTE1(p_pos[1].y) )
            {
              BYTE1(p_pos[1].y) = 0;
              LODWORD(p_pos[1].v[0]) = 2047;
              __asm { vmovss  dword ptr [rsp+290h+fmt], xmm10 }
              CgCompassSystem::WorldPosToCompass(this, v23, cropPartialMap, &x, fmt, &north, (const vec2_t *)&out, p_pos, &v167, NULL);
              __asm
              {
                vsubss  xmm1, xmm14, xmm13
                vaddss  xmm1, xmm1, dword ptr [rbp+190h+var_170]
                vmovss  dword ptr [rbp+190h+var_170], xmm1
                vsubss  xmm2, xmm15, xmm13
                vaddss  xmm1, xmm2, dword ptr [rbp+190h+var_170+4]
                vmovss  dword ptr [rbp+190h+var_170+4], xmm1
                vmovss  [rbp+190h+var_1F8], xmm12
                vmovss  [rbp+190h+var_1FC], xmm12
              }
              ScrPlace_ApplyRect(v44, (float *)&v167, (float *)&v167 + 1, &v149, &v148, v25->horzAlign, v25->vertAlign);
              __asm
              {
                vmovss  xmm1, dword ptr [rbp+190h+var_170+4]; top
                vaddss  xmm3, xmm1, [rbp+190h+var_1FC]; bottom
                vmovss  xmm0, dword ptr [rbp+190h+var_170]; left
                vaddss  xmm2, xmm0, [rbp+190h+var_1F8]; right
              }
              LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
              __asm
              {
                vmovss  xmm2, dword ptr [rbp+190h+quadVerts+24h]
                vsubss  xmm5, xmm2, dword ptr [rbp+190h+quadVerts+4]
                vandps  xmm5, xmm5, xmm11
                vmovss  xmm3, dword ptr [rbp+190h+quadVerts+10h]
                vsubss  xmm4, xmm3, dword ptr [rbp+190h+quadVerts]
                vandps  xmm4, xmm4, xmm11
                vaddss  xmm0, xmm2, dword ptr [rbp+190h+quadVerts+4]
                vmulss  xmm2, xmm0, xmm9; maskCenterY
                vaddss  xmm1, xmm3, dword ptr [rbp+190h+quadVerts]
                vmulss  xmm1, xmm1, xmm9; maskCenterX
                vmovss  dword ptr [rsp+290h+isPixelCircle], xmm8
                vmovss  dword ptr [rsp+290h+var_238], xmm8
                vmovss  dword ptr [rsp+290h+var_240], xmm7
                vmovss  dword ptr [rsp+290h+outClipped], xmm7
                vmovss  dword ptr [rsp+290h+h], xmm7
                vmovss  dword ptr [rsp+290h+w], xmm8
                vmovss  dword ptr [rsp+290h+outVector], xmm7
                vmovss  dword ptr [rsp+290h+fmt], xmm5
                vmovaps xmm3, xmm4; maskWidth
              }
              LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, outVectorb, wa, ha, 1, outClipped, v129, v134, isPixelCircle, &outSize, (GfxImage *)cgMedia.compassping_scrambler_friendly);
              _RAX = v155;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax]
                vmovups xmmword ptr [rbp+190h+var_150], xmm0
              }
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
              v73 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
              if ( (unsigned int)v45 >= 0x800 )
              {
                LODWORD(w) = 2048;
                LODWORD(outVectora) = v45;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", outVectora, w) )
                  __debugbreak();
              }
              LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
              if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                __debugbreak();
              if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
              {
                if ( v45 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
                {
                  LODWORD(w) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                  LODWORD(outVectora) = v45;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outVectora, w) )
                    __debugbreak();
                }
                v75 = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v45);
              }
              else
              {
                v75 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v45);
              }
              team = v75->team;
              v77 = v164->team;
              if ( cgameGlob == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
                __debugbreak();
              if ( (CgEntitySystem *)((char *)v73 + 760 * v45) == (CgEntitySystem *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
                __debugbreak();
              if ( v77 && v77 == team )
              {
                v78 = 1;
                if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
                  __debugbreak();
                if ( v45 < (int)ComCharacterLimits::ms_gameData.m_clientCount )
                {
                  __asm { vmovss  xmm6, dword ptr [rbp+190h+var_150+0Ch] }
                  if ( Bool_Internal_DebugName )
                    LUI_CoD_GameMP_GetBrColorForClientNum(v45, &v169);
                  else
                    CgCompassSystemMP::GetFriendlyCompassColor(this, &v169, (CgGlobalsMP *)cgameGlob);
                  __asm { vmovss  dword ptr [rbp+190h+var_150+0Ch], xmm6 }
                }
                if ( mapMask )
                {
                  __asm
                  {
                    vmovss  xmm4, [rbp+190h+var_20C]
                    vmulss  xmm0, xmm9, xmm4
                    vaddss  xmm2, xmm0, [rbp+190h+var_208]; maskCenterY
                    vmovss  xmm3, [rbp+190h+var_204]; maskWidth
                    vmulss  xmm1, xmm9, xmm3
                    vaddss  xmm1, xmm1, [rbp+190h+var_200]; maskCenterX
                    vmovss  dword ptr [rsp+290h+isPixelCircle], xmm8
                    vmovss  dword ptr [rsp+290h+var_238], xmm8
                    vmovss  dword ptr [rsp+290h+var_240], xmm7
                    vmovss  dword ptr [rsp+290h+outClipped], xmm7
                    vmovss  dword ptr [rsp+290h+h], xmm7
                    vmovss  dword ptr [rsp+290h+w], xmm8
                    vmovss  dword ptr [rsp+290h+outVector], xmm7
                    vmovss  dword ptr [rsp+290h+fmt], xmm4
                  }
                  LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, outVectorc, wb, hb, 0, outClippeda, v130, v135, isPixelCirclea, &outSize, mapMask);
                }
                __asm
                {
                  vmovss  xmm0, [rbp+190h+var_1F0]
                  vmovss  dword ptr [rsp+290h+var_240], xmm0
                }
                p_pos = v159;
                __asm { vmovss  dword ptr [rsp+290h+outVector], xmm10 }
                v25 = v161;
                v23 = compassTypea;
                CgCompassSystemMP::DrawAreaMarker(this, compassTypea, cropPartialMap, parentRecta, v161, outVectord, &v169, 1, 1, *v159, v131, cgMedia.compassping_portable_radar_sweep, 0, v157, v156);
                if ( mapMask )
                  LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
              }
              else
              {
                v78 = 0;
                __asm { vmovaps xmm0, xmm9; glitchAmount }
                LUI_Render_PushGlitch(*(float *)&_XMM0);
                v25 = v161;
                v23 = compassTypea;
                CgCompassSystem::DrawPlayerMap(this, compassTypea, cropPartialMap, parentRecta, v161, NULL, v155, mapMask, NULL, NULL, v157, v156);
                LUI_Render_PopGlitch();
                p_pos = v159;
              }
              LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
              if ( v78 || v142 )
              {
                if ( mapMask )
                {
                  __asm
                  {
                    vmovss  xmm4, [rbp+190h+var_20C]
                    vmulss  xmm0, xmm9, xmm4
                    vaddss  xmm2, xmm0, [rbp+190h+var_208]; maskCenterY
                    vmovss  xmm3, [rbp+190h+var_204]; maskWidth
                    vmulss  xmm1, xmm9, xmm3
                    vaddss  xmm1, xmm1, [rbp+190h+var_200]; maskCenterX
                    vmovss  dword ptr [rsp+290h+isPixelCircle], xmm8
                    vmovss  dword ptr [rsp+290h+var_238], xmm8
                    vmovss  dword ptr [rsp+290h+var_240], xmm7
                    vmovss  dword ptr [rsp+290h+outClipped], xmm7
                    vmovss  dword ptr [rsp+290h+h], xmm7
                    vmovss  dword ptr [rsp+290h+w], xmm8
                    vmovss  dword ptr [rsp+290h+outVector], xmm7
                    vmovss  dword ptr [rsp+290h+fmt], xmm4
                  }
                  LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, outVectore, wc, hc, 0, outClippedb, v132, v136, isPixelCircleb, &outSize, mapMask);
                }
                if ( v143 )
                  m_uiBRDottedCircleMaterial = this->m_uiBRDottedCircleMaterial;
                else
                  m_uiBRDottedCircleMaterial = this->m_uiBRCircleMaterial;
                __asm
                {
                  vmovss  xmm0, [rbp+190h+var_1F0]
                  vmovss  dword ptr [rsp+290h+var_240], xmm0
                  vmovss  dword ptr [rsp+290h+outVector], xmm10
                }
                CgCompassSystemMP::DrawAreaMarker(this, v23, cropPartialMap, parentRecta, v25, outVectorf, &v169, 1, 1, *p_pos, v133, m_uiBRDottedCircleMaterial, s_drawPixelShapeCircle, v157, v156);
                if ( mapMask )
                  LUI_Render_PopMask((const LocalClientNum_t)this->m_localClientNum);
              }
              v50 = v154;
              v44 = scrPlace;
            }
            p_pos += 2;
            v159 = p_pos;
            v154 = --v50;
          }
          while ( v50 );
          ++v45;
        }
        this->m_scramblersUpdated = 0;
      }
    }
  }
  memset(&out, 0, sizeof(out));
  _R11 = &v173;
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
CgCompassSystemBR::GetBRBoundingCircleInfo
==============
*/
bool CgCompassSystemBR::GetBRBoundingCircleInfo(CgCompassSystemBR *this, int circleIndex, int *outStartTime, int *outDuration, vec2_t *outCurrentPosition, float *outCurrentRadius)
{
  __int64 v10; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  bool result; 
  __int64 v15; 
  const OmnvarDef *v16; 
  const OmnvarData *v17; 
  int Integer; 
  centity_t *Entity; 
  const OmnvarDef *v20; 
  const OmnvarData *v21; 
  int v22; 
  const OmnvarDef *v23; 
  const OmnvarData *v24; 
  const OmnvarDef *v25; 
  const OmnvarData *v26; 
  CgGlobalsMP *LocalClientGlobals; 
  int v28; 
  vec3_t outOrigin; 
  vec3_t v55; 
  centity_t *pose; 

  v10 = circleIndex;
  Def = BG_Omnvar_GetDef(this->m_uiPrematchPeriodOmnvarIndex);
  Data = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiPrematchPeriodOmnvarIndex);
  if ( Omnvar_GetInteger(Def, Data) > 0 && !CG_GameInterface_PlayingBRTDM() )
    return 0;
  v15 = v10;
  v16 = BG_Omnvar_GetDef(this->m_uiBRCircleStartEntityOmnvarIndex[v10]);
  v17 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRCircleStartEntityOmnvarIndex[v10]);
  Integer = Omnvar_GetInteger(v16, v17);
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, Integer);
  v20 = BG_Omnvar_GetDef(this->m_uiBRCircleEndEntityOmnvarIndex[v15]);
  v21 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRCircleEndEntityOmnvarIndex[v15]);
  v22 = Omnvar_GetInteger(v20, v21);
  pose = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v22);
  if ( Integer == 2047 )
    return 0;
  v23 = BG_Omnvar_GetDef(this->m_uiBRCircleStartTimeOmnvarIndex[v15]);
  v24 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRCircleStartTimeOmnvarIndex[v15]);
  *outStartTime = CG_Omnvar_GetTime(v23, v24, (const LocalClientNum_t)this->m_localClientNum);
  v25 = BG_Omnvar_GetDef(this->m_uiBRCircleDurationOmnvarIndex[v15]);
  v26 = CG_Omnvar_GetData(this->m_localClientNum, this->m_uiBRCircleDurationOmnvarIndex[v15]);
  *outDuration = Omnvar_GetInteger(v25, v26);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v28 = *outDuration + *outStartTime;
  if ( v28 > 0 && v28 < LocalClientGlobals->time )
    return 0;
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  if ( Integer == v22 )
  {
    _RAX = outCurrentRadius;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+outOrigin+8]
      vmovss  dword ptr [rax], xmm0
    }
    _RAX = outCurrentPosition;
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+78h+outOrigin]
      vmovss  dword ptr [rax], xmm1
      vmovss  xmm0, dword ptr [rsp+78h+outOrigin+4]
      vmovss  dword ptr [rax+4], xmm0
    }
  }
  else
  {
    CG_GetPoseOrigin(&pose->pose, &v55);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r15]
      vdivss  xmm5, xmm1, xmm0
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm2, xmm1, xmm5
      vmulss  xmm3, xmm2, dword ptr [rsp+78h+outOrigin+8]
      vmulss  xmm1, xmm5, dword ptr [rsp+78h+var_40+8]
      vaddss  xmm2, xmm3, xmm1
    }
    _RAX = outCurrentRadius;
    __asm
    {
      vmovss  dword ptr [rax], xmm2
      vmovss  xmm0, dword ptr [rsp+78h+var_40]
      vsubss  xmm1, xmm0, dword ptr [rsp+78h+outOrigin]
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+78h+outOrigin]
    }
    _RAX = outCurrentPosition;
    __asm
    {
      vmovss  dword ptr [rax], xmm3
      vmovss  xmm0, dword ptr [rsp+78h+var_40+4]
      vsubss  xmm1, xmm0, dword ptr [rsp+78h+outOrigin+4]
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+78h+outOrigin+4]
      vmovss  dword ptr [rax+4], xmm3
    }
    memset(&v55, 0, sizeof(v55));
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
  CgGlobalsMP *LocalClientGlobals; 
  float outCurrentRadius; 
  int outStartTime; 
  int outDuration; 
  vec2_t outCurrentPosition; 

  _RSI = outRadius;
  _RDI = outPosition;
  if ( this->m_uiBRCircleStartEntityOmnvarIndex[0] == -1 || !CgCompassSystemBR::GetBRBoundingCircleInfo(this, 1, &outStartTime, &outDuration, &outCurrentPosition, &outCurrentRadius) )
    return 0;
  __asm
  {
    vmovss  xmm0, [rsp+78h+var_48]
    vmovss  xmm1, dword ptr [rsp+78h+var_38]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rsp+78h+var_38+4]
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  dword ptr [rdi], xmm1
  }
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
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  char v32; 
  char v33; 
  const dvar_t *v35; 
  const dvar_t *v44; 
  centity_t *Entity; 
  team_t team; 
  team_t v51; 
  CgHandler *Handler; 
  CgStatic *v53; 
  const characterInfo_t *v54; 
  __int16 otherEntityNum; 
  CgGlobalsMP *v56; 
  vec4_t *v57; 
  CgCompassSystemBR *v58; 
  CgMLGSpectator *MLGSpectator; 
  team_t v65; 
  SecureVec3 out; 
  __int64 v77; 
  char v79; 
  void *retaddr; 

  _RAX = &retaddr;
  v77 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RDI = origin;
  _R15 = newColor;
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
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_compass_br.cpp", 2058, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( CharacterInfo->infoValid )
  {
    _R13 = color;
    newColor->v[0] = color->v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [r13+4]
      vmovss  dword ptr [r15+4], xmm0
      vmovss  xmm1, dword ptr [r13+8]
      vmovss  dword ptr [r15+8], xmm1
      vmovss  xmm0, dword ptr [r13+0Ch]
      vmovss  dword ptr [r15+0Ch], xmm0
    }
    *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystemBR *))this->GetRange)(this);
    __asm { vcomiss xmm8, xmm0 }
    if ( v32 | v33 )
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
      if ( v32 )
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
        if ( !v33 )
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
        v44 = DVARFLT_compassObjectiveMinAlpha;
        if ( !DVARFLT_compassObjectiveMinAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMinAlpha") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v44);
        __asm
        {
          vmovss  xmm2, cs:__real@3f800000
          vsubss  xmm0, xmm2, dword ptr [rdi+28h]
          vmulss  xmm1, xmm0, xmm7
          vsubss  xmm1, xmm2, xmm1
          vmovss  dword ptr [r15+0Ch], xmm1
        }
      }
      else
      {
        v35 = DVARFLT_compassObjectiveMinAlpha;
        if ( !DVARFLT_compassObjectiveMinAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassObjectiveMinAlpha") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v35);
        LODWORD(newColor->v[3]) = v35->current.integer;
      }
    }
    switch ( side )
    {
      case NEUTRAL:
        _RAX = 2i64 * (unsigned __int8)background;
        _RDX = 0x140000000ui64;
        __asm
        {
          vmovups xmm0, xmmword ptr rva objectiveBackgroundColors[rdx+rax*8]
          vmovups xmmword ptr [r14], xmm0
          vmovups xmm0, xmmword ptr rva objectiveForegroundColors[rdx+rax*8]
          vmovups xmmword ptr [r15], xmm0
        }
        if ( background == EASE_IN_OUT_QUAD && HasActiveMission(this->m_localClientNum) )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          __asm { vmovss  dword ptr [r15], xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          __asm { vmovss  dword ptr [r15+4], xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          __asm { vmovss  dword ptr [r15+8], xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionAlpha, "compassObjectiveIconActiveMissionAlpha");
          __asm { vmovss  dword ptr [r15+0Ch], xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          __asm { vmovss  dword ptr [r14], xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          __asm { vmovss  dword ptr [r14+4], xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB, "compassObjectiveIconActiveMissionRGB");
          __asm { vmovss  dword ptr [r14+8], xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_compassObjectiveIconActiveMissionAlpha, "compassObjectiveIconActiveMissionAlpha");
          __asm { vmovss  dword ptr [r14+0Ch], xmm0 }
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
          v56 = LocalClientGlobals;
          v57 = backgroundColor;
          v58 = this;
LABEL_55:
          CgCompassSystemMP::GetEnemyCompassColor(v58, v57, v56);
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
            __asm
            {
              vmovss  xmm0, dword ptr cs:contestColor
              vmovss  dword ptr [r14], xmm0
              vmovss  xmm1, dword ptr cs:contestColor+4
              vmovss  dword ptr [r14+4], xmm1
              vmovss  xmm0, dword ptr cs:contestColor+8
              vmovss  dword ptr [r14+8], xmm0
              vmovss  xmm1, dword ptr cs:contestColor+0Ch
              vmovss  dword ptr [r14+0Ch], xmm1
              vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
              vmovups xmmword ptr [r15], xmm0
            }
          }
        }
        goto LABEL_61;
      default:
        Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
        team = CharacterInfo->team;
        v51 = TEAM_ZERO;
        if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( ((Entity->nextState.eType - 1) & 0xFFEF) != 0 )
        {
          if ( (Entity->flags & 1) != 0 )
            v51 = CgEntitySystemMP::CG_EntityMP_GetTeam((const LocalClientNum_t)this->m_localClientNum, Entity);
        }
        else
        {
          Handler = CgHandler::getHandler(this->m_localClientNum);
          v53 = CgStatic::GetLocalClientStatics((const LocalClientNum_t)Handler->m_localClientNum);
          v54 = CgStatic::GetCharacterInfo(v53, entNum);
          if ( v54 )
            v51 = v54->team;
        }
        if ( (unsigned int)(v51 - 1) <= 1 )
        {
          v56 = LocalClientGlobals;
          v57 = newColor;
          v58 = this;
          if ( LocalClientGlobals->m_isMLGSpectator )
          {
            if ( v51 == TEAM_TWO )
            {
LABEL_44:
              CgCompassSystemMP::GetFriendlyCompassColor(v58, v57, v56);
              goto LABEL_61;
            }
          }
          else if ( team == v51 )
          {
            goto LABEL_44;
          }
          goto LABEL_55;
        }
        if ( (Entity->flags & 1) != 0 )
        {
          otherEntityNum = Entity->nextState.otherEntityNum;
          if ( otherEntityNum != 2047 && v51 == TEAM_ZERO )
          {
            v56 = LocalClientGlobals;
            v57 = newColor;
            v58 = this;
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
    v65 = CgMLGSpectator::GetTeam(MLGSpectator);
    v56 = LocalClientGlobals;
    v57 = backgroundColor;
    v58 = this;
    if ( v65 == TEAM_TWO )
      goto LABEL_44;
    goto LABEL_55;
  }
LABEL_63:
  memset(&out, 0, sizeof(out));
  _R11 = &v79;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CgCompassSystemBR::GetPlayerCompassColor
==============
*/
void CgCompassSystemBR::GetPlayerCompassColor(CgCompassSystemBR *this, vec4_t *color, const cg_t *cgameGlob)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RDI = color;
  __asm { vmovss  xmm6, dword ptr [rdx+0Ch] }
  LUI_CoD_GameMP_GetBrColorForClientNum(cgameGlob->predictedPlayerState.clientNum, color);
  if ( this->m_isUsingTabletMode )
    __asm { vmovss  dword ptr [rdi+0Ch], xmm6 }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
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

float __fastcall GetPulseCircleAlpha(const __int16 entityNum, const int now, __int64 a3, double _XMM3_8)
{
  const dvar_t *v9; 
  __int64 v11; 
  int v12; 
  const dvar_t *v13; 
  const dvar_t *v16; 
  const dvar_t *v43; 
  int integer; 
  int v49; 
  int v50; 

  v9 = DVARINT_compassBRCircleTimeToMinPulse;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
  }
  v11 = entityNum;
  v12 = brCircleInitialPulseTime[entityNum];
  if ( !DVARINT_compassBRCircleTimeToMinPulse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBRCircleTimeToMinPulse") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( now - v12 > v9->current.integer )
    brCircleInitialPulseTime[v11] = now;
  v13 = DVARINT_compassBRCirclePulseDuration;
  if ( !DVARINT_compassBRCirclePulseDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBRCirclePulseDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, dword ptr [rbx+28h]
  }
  v16 = DVARINT_compassBRCircleMinPulseDuration;
  if ( !DVARINT_compassBRCircleMinPulseDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBRCircleMinPulseDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, eax
    vcvtsi2ss xmm0, xmm0, r14d
    vdivss  xmm0, xmm1, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm7; max
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebx
    vmulss  xmm2, xmm1, xmm0
    vsubss  xmm0, xmm7, xmm0
    vmulss  xmm1, xmm0, xmm6
    vxorps  xmm3, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcvtsi2ss xmm3, xmm3, eax
    vdivss  xmm4, xmm3, xmm2
    vcomiss xmm4, xmm7
  }
  if ( now >= (unsigned int)brCirclePulseTime[v11] )
  {
    brCirclePulseTime[v11] = now;
    __asm { vmovaps xmm0, xmm7 }
    goto LABEL_28;
  }
  _RBX = DVARFLT_compassBRCirclePulseMinAlpha;
  __asm
  {
    vmovaps [rsp+98h+var_58], xmm8
    vsubss  xmm0, xmm7, xmm4
    vmulss  xmm1, xmm0, cs:__real@40000000
    vsubss  xmm8, xmm1, xmm7
    vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( !DVARFLT_compassBRCirclePulseMinAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBRCirclePulseMinAlpha") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+28h]
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm8; val
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v43 = DVARINT_compassBRCirclePulseEaseType;
  __asm
  {
    vmovaps xmm8, [rsp+98h+var_58]
    vsubss  xmm1, xmm7, xmm0
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm6, xmm2, xmm0
  }
  if ( !DVARINT_compassBRCirclePulseEaseType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBRCirclePulseEaseType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  integer = v43->current.integer;
  if ( !integer )
    goto LABEL_26;
  v49 = integer - 1;
  if ( !v49 )
  {
    __asm { vmulss  xmm0, xmm6, xmm6 }
    goto LABEL_28;
  }
  v50 = v49 - 1;
  if ( !v50 )
  {
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm0, xmm0, xmm6
    }
    goto LABEL_28;
  }
  if ( v50 != 1 )
  {
LABEL_26:
    __asm { vmulss  xmm0, xmm6, cs:__real@3fc90fdb; X }
    cosf_0(*(float *)&_XMM0);
    __asm { vsubss  xmm0, xmm7, xmm0 }
    goto LABEL_28;
  }
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm1, xmm6
  }
LABEL_28:
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_38]
    vmovaps xmm7, [rsp+98h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgCompassSystemBR::GetRange
==============
*/
float CgCompassSystemBR::GetRange(CgCompassSystemBR *this)
{
  int v3; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 

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
    IndexByName = BG_Omnvar_GetIndexByName("ui_br_minimap_radius");
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData(this->m_localClientNum, IndexByName);
    Omnvar_GetInteger(Def, Data);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
  }
  return *(float *)&_XMM0;
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
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  char dest[256]; 

  CgCompassSystemMP::InitCompass(this);
  v2 = 0;
  m_uiBRCircleEndEntityOmnvarIndex = this->m_uiBRCircleEndEntityOmnvarIndex;
  do
  {
    LODWORD(v7) = v2;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v7, "_start_entity");
    *(m_uiBRCircleEndEntityOmnvarIndex - 2) = BG_Omnvar_GetIndexByName(dest);
    LODWORD(v8) = v2;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v8, "_end_entity");
    *m_uiBRCircleEndEntityOmnvarIndex = BG_Omnvar_GetIndexByName(dest);
    LODWORD(v9) = v2;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v9, "_start_time");
    m_uiBRCircleEndEntityOmnvarIndex[2] = BG_Omnvar_GetIndexByName(dest);
    LODWORD(v10) = v2;
    Com_sprintf(dest, 0x100ui64, "%s%d%s", "ui_br_circle", v10, "_duration");
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
  __asm { vmovss  xmm1, cs:__real@3f800000; value }
  Dvar_SetFloat_Internal(DVARFLT_compassObjectiveIconBackgroundScalar, *(float *)&_XMM1);
  __asm { vmovss  xmm1, cs:__real@c0200000; value }
  Dvar_SetFloat_Internal(DVARFLT_minimapPlayerCirclePingRadius, *(float *)&_XMM1);
  Dvar_SetInt_Internal(DVARINT_minimapPlayerCirclePingDuration, 375);
  __asm { vmovss  xmm1, cs:__real@457a0000; value }
  Dvar_SetFloat_Internal(DVARFLT_compassVehicleHideEnemyDistance, *(float *)&_XMM1);
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
  const char **v5; 
  __int64 v6; 
  int v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char **v13; 
  vec3_t *v15; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 

  CgCompassSystemMP::InitCompassColors(this);
  if ( !CL_AllLocalClientsInactive() && !Com_FrontEnd_IsInFrontEnd() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
    if ( GamerProfile_IsProfileLoggedIn(ControllerFromClient) )
    {
      v5 = &v24;
      v25 = "None";
      v6 = 0i64;
      v26 = "Carry";
      v7 = 0;
      __asm { vmovaps [rsp+0E0h+var_30], xmm6 }
      v27 = "Mission";
      __asm { vmovaps [rsp+0E0h+var_40], xmm7 }
      v28 = "MissionTracked";
      v29 = "POI";
      v24 = "Default";
      v30 = "Default";
      v31 = "Default";
      do
      {
        v8 = j_va("Objective.objectiveBackground%s", *v5);
        LUI_COD_GetSwatchRGBColor(this->m_localClientNum, v8, (vec3_t *)&objectiveBackgroundColors[v7]);
        v9 = *v5;
        objectiveBackgroundColors[v6].v[3] = 1.0;
        v10 = j_va("Objective.objectiveForeground%s", v9);
        LUI_COD_GetSwatchRGBColor(this->m_localClientNum, v10, (vec3_t *)&objectiveForegroundColors[v7]);
        objectiveForegroundColors[v6].v[3] = 1.0;
        ++v5;
        ++v6;
        ++v7;
      }
      while ( v6 < 8 );
      this->m_uiCursorStyles[0].cursorReticleMaterial = Image_Register("ui_mp_br_mapmenu_ping_cursor", IMAGE_TRACK_HUD);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "BattleRoyale.CursorStyle1", (vec3_t *)&this->m_uiCursorStyles[0].cursorColor);
      this->m_uiCursorStyles[0].cursorColor.v[3] = 1.0;
      this->m_uiCursorStyles[1].cursorReticleMaterial = Image_Register("ui_mp_br_mapmenu_ping_cursor_killstreak", IMAGE_TRACK_HUD);
      LUI_COD_GetSwatchRGBColor(this->m_localClientNum, "BattleRoyale.CursorStyle2", (vec3_t *)&this->m_uiCursorStyles[1].cursorColor);
      __asm { vmovss  xmm7, cs:__real@3f800000 }
      v24 = "BRMapItemColor.mapItemColor_0";
      _RDI = (char *)&unk_15141408C;
      this->m_uiCursorStyles[1].cursorColor.v[3] = 1.0;
      v25 = "BRMapItemColor.mapItemColor_1_brCircle";
      v13 = &v24;
      _ER13 = 0;
      v26 = "BRMapItemColor.mapItemColor_2";
      v15 = &s_mapCircleColorList;
      _EBX = 0;
      v27 = "BRMapItemColor.mapItemColor_3";
      v28 = "BRMapItemColor.mapItemColor_4";
      v29 = "BRMapItemColor.mapItemColor_5";
      v30 = "BRMapItemColor.mapItemColor_6";
      v31 = "BRMapItemColor.mapItemColor_7";
      v32 = "BRMapItemColor.mapItemColor_8";
      v33 = "BRMapItemColor.mapItemColor_9";
      v34 = "BRMapItemColor.mapItemColor_10";
      v35 = "BRMapItemColor.mapItemColor_11";
      v36 = "BRMapItemColor.mapItemColor_12";
      v37 = "BRMapItemColor.mapItemColor_13_mission";
      __asm { vxorps  xmm6, xmm6, xmm6 }
      do
      {
        LUI_COD_GetSwatchRGBColor(this->m_localClientNum, *v13, v15);
        __asm
        {
          vmovd   xmm0, ebx
          vmovd   xmm1, r13d
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm7, xmm6, xmm2
        }
        ++_EBX;
        v15 = (vec3_t *)((char *)v15 + 16);
        __asm { vmovss  dword ptr [rdi], xmm0 }
        _RDI += 16;
        ++v13;
      }
      while ( _EBX < 14 );
      __asm
      {
        vmovaps xmm7, [rsp+0E0h+var_40]
        vmovaps xmm6, [rsp+0E0h+var_30]
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
char CgCompassSystemBR::IsObjectiveFiltered(CgCompassSystemBR *this, CompassType compassType, ObjectiveBackground background)
{
  const dvar_t *v5; 
  const dvar_t *v6; 
  const char *v7; 
  const dvar_t *v8; 
  char v9; 

  _RBX = this;
  if ( compassType != COMPASS_TYPE_TACMAP )
    return 0;
  if ( background == EASE_OUT_CUBIC )
  {
    v5 = DVARBOOL_compassTacmapFilterPOI;
    if ( !DVARBOOL_compassTacmapFilterPOI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapFilterPOI") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled || _RBX->IsItemFiltered(_RBX, TAC_MAP_FILTER_POI) )
      return 1;
    v6 = DVARFLT_compassTacmapFilterZoomPOI;
    v7 = "compassTacmapFilterZoomPOI";
  }
  else
  {
    if ( background != EASE_IN_OUT_QUAD )
      return 0;
    v8 = DVARBOOL_compassTacmapFilterObjective;
    if ( !DVARBOOL_compassTacmapFilterObjective && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapFilterObjective") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled || _RBX->IsItemFiltered(_RBX, TAC_MAP_FILTER_MISSIONS) || Dvar_GetBool_Internal_DebugName(DVARBOOL_compassTacmapFilterObjectiveIfActive, "compassTacmapFilterObjectiveIfActive") && HasActiveMission(_RBX->m_localClientNum) )
      return 1;
    v6 = DVARFLT_compassTacmapFilterZoomMission;
    v7 = "compassTacmapFilterZoomMission";
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v6, v7);
  __asm { vcomiss xmm0, dword ptr [rbx+20h] }
  return v9;
}

/*
==============
CgCompassSystemBR::IsObjectiveMini
==============
*/
char CgCompassSystemBR::IsObjectiveMini(CgCompassSystemBR *this, CompassType compassType, ObjectiveBackground background)
{
  const char *v5; 
  char v7; 

  _RDI = this;
  if ( compassType == COMPASS_TYPE_TACMAP )
  {
    if ( background == EASE_OUT_CUBIC )
    {
      _RBX = DVARFLT_compassTacmapMiniIconZoomPOI;
      if ( !DVARFLT_compassTacmapMiniIconZoomPOI )
      {
        v5 = "compassTacmapMiniIconZoomPOI";
        goto LABEL_5;
      }
      goto LABEL_7;
    }
    if ( background == EASE_IN_OUT_QUAD )
    {
      _RBX = DVARFLT_compassTacmapMiniIconZoomMission;
      if ( !DVARFLT_compassTacmapMiniIconZoomMission )
      {
        v5 = "compassTacmapMiniIconZoomMission";
LABEL_5:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
          __debugbreak();
      }
LABEL_7:
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vcomiss xmm0, dword ptr [rdi+20h]
      }
      return v7;
    }
  }
  return 0;
}

/*
==============
CgCompassSystemBR::IsVehicleFiltered
==============
*/
bool CgCompassSystemBR::IsVehicleFiltered(CgCompassSystemBR *this, CompassType compassType, const centity_t *cent)
{
  const dvar_t *v7; 
  bool result; 
  char v11; 
  __int64 m_localClientNum; 
  team_t v13; 
  int clientNum; 
  CgStatic *LocalClientStatics; 
  __int64 v27; 
  __int64 v28; 
  vec3_t outOrigin; 
  SecureVec3 out; 
  __int64 v31; 

  v31 = -2i64;
  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _RBX = this;
  if ( compassType != COMPASS_TYPE_TACMAP )
  {
LABEL_25:
    result = 0;
    goto LABEL_26;
  }
  v7 = DVARBOOL_compassTacmapFilterVehicle;
  if ( !DVARBOOL_compassTacmapFilterVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapFilterVehicle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
  {
    _RDI = DVARFLT_compassTacmapFilterZoomVehicle;
    if ( !DVARFLT_compassTacmapFilterZoomVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapFilterZoomVehicle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vcomiss xmm0, dword ptr [rbx+20h]
    }
    if ( !v11 )
    {
      m_localClientNum = _RBX->m_localClientNum;
      if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
      {
        LODWORD(v28) = _RBX->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v28) )
          __debugbreak();
      }
      if ( (unsigned int)m_localClientNum >= CgVehicleSystem::ms_allocatedCount )
      {
        LODWORD(v28) = CgVehicleSystem::ms_allocatedCount;
        LODWORD(v27) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      if ( !CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum] )
      {
        LODWORD(v28) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v28) )
          __debugbreak();
      }
      v13 = CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum]->GetTeam(CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum], &cent->nextState);
      clientNum = CG_GetLocalClientGlobals((const LocalClientNum_t)_RBX->m_localClientNum)->predictedPlayerState.clientNum;
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)_RBX->m_localClientNum);
      if ( CgStatic::GetCharacterInfo(LocalClientStatics, clientNum)->team == v13 )
        goto LABEL_25;
      if ( !_RBX->IsItemFiltered(_RBX, TAC_MAP_FILTER_VEHICLE) )
      {
        if ( v13 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassVehicleHideEnemyDistance, "compassVehicleHideEnemyDistance");
          __asm
          {
            vmovaps xmm6, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcomiss xmm0, xmm1
          }
          if ( !v11 )
          {
            CG_CalcPlayerPos(&out, _RBX->m_localClientNum);
            CG_GetPoseOrigin(&cent->pose, &outOrigin);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+98h+outOrigin]
              vsubss  xmm4, xmm0, dword ptr [rsp+98h+out.___u0]
              vmovss  xmm1, dword ptr [rsp+98h+outOrigin+4]
              vsubss  xmm2, xmm1, dword ptr [rsp+98h+out.___u0+4]
              vmulss  xmm3, xmm2, xmm2
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm4, xmm3, xmm0
              vmulss  xmm1, xmm6, xmm6
            }
            memset(&outOrigin, 0, sizeof(outOrigin));
            memset(&out, 0, sizeof(out));
            __asm { vcomiss xmm4, xmm1 }
          }
        }
        goto LABEL_25;
      }
    }
  }
  result = 1;
LABEL_26:
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  return result;
}

/*
==============
CgCompassSystemBR::IsVehicleMini
==============
*/
char CgCompassSystemBR::IsVehicleMini(CgCompassSystemBR *this, CompassType compassType)
{
  char v5; 

  _RDI = this;
  if ( compassType != COMPASS_TYPE_TACMAP )
    return 0;
  _RBX = DVARFLT_compassTacmapMiniIconZoomVehicle;
  if ( !DVARFLT_compassTacmapMiniIconZoomVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTacmapMiniIconZoomVehicle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcomiss xmm0, dword ptr [rdi+20h]
  }
  return v5;
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
  float x; 
  float xa; 
  float y; 
  float w; 
  float h; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float maskHeight; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float alphaOffset[3]; 
  vec2_t outSize; 

  __asm { vmovaps [rsp+0F8h+var_38], xmm6 }
  _RAX = element;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm0, dword ptr [rax+0D8h]
    vmovss  xmm1, dword ptr [rax+0D0h]
    vmaxss  xmm4, xmm0, xmm6
    vmovss  xmm0, dword ptr [rax+0D4h]
    vmaxss  xmm3, xmm0, xmm6; right
    vmovss  xmm0, dword ptr [rax+0CCh]
    vmaxss  xmm2, xmm1, xmm6; top
    vmaxss  xmm1, xmm0, xmm6; left
    vmovss  dword ptr [rsp+0F8h+x], xmm4
  }
  LUI_Render_PushStencilRectangle((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, x);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, rect, &v51, &v52, &v53, alphaOffset);
  if ( compassType == COMPASS_TYPE_PARTIAL && mapMask )
  {
    __asm
    {
      vmovss  xmm4, [rsp+0F8h+var_60]
      vmulss  xmm0, xmm4, cs:__real@3f000000
      vaddss  xmm1, xmm0, [rsp+0F8h+var_68]
      vmovss  xmm3, [rsp+0F8h+alphaOffset]
      vmulss  xmm0, xmm3, cs:__real@3f000000
    }
    m_localClientNum = this->m_localClientNum;
    vertAlign = rect->vertAlign;
    horzAlign = rect->horzAlign;
    __asm
    {
      vmovss  [rsp+0F8h+var_6C], xmm1
      vaddss  xmm1, xmm0, [rsp+0F8h+var_64]
      vmovss  [rsp+0F8h+var_70], xmm1
      vmovss  [rsp+0F8h+var_74], xmm4
      vmovss  [rsp+0F8h+maskHeight], xmm3
    }
    ActivePlacement = ScrPlace_GetActivePlacement(m_localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, &v50, &v49, &v48, &maskHeight, horzAlign, vertAlign);
    LUI_Render_GetViewportSize(this->m_localClientNum, &outSize);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  xmm3, [rsp+0F8h+var_74]; maskWidth
      vmovss  xmm2, [rsp+0F8h+var_70]; maskCenterY
      vmovss  xmm1, [rsp+0F8h+var_6C]; maskCenterX
      vmovss  [rsp+0F8h+var_98], xmm0
      vmovss  [rsp+0F8h+var_A0], xmm0
      vmovss  [rsp+0F8h+var_A8], xmm6
      vmovss  [rsp+0F8h+var_B0], xmm6
      vmovss  dword ptr [rsp+0F8h+h], xmm6
      vmovss  dword ptr [rsp+0F8h+w], xmm0
      vmovss  xmm0, [rsp+0F8h+maskHeight]
      vmovss  dword ptr [rsp+0F8h+y], xmm6
      vmovss  dword ptr [rsp+0F8h+x], xmm0
    }
    LUI_Render_PushMask((const LocalClientNum_t)this->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, xa, y, w, h, 0, v43, v44, v45, v46, &outSize, mapMask);
  }
  __asm { vmovaps xmm6, [rsp+0F8h+var_38] }
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

