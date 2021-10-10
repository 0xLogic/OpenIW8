/*
==============
LUIElement_Setup3SliceHorizontalMirror
==============
*/

void __fastcall LUIElement_Setup3SliceHorizontalMirror(lua_State *luaVM, LUIElement *element)
{
  ?LUIElement_Setup3SliceHorizontalMirror@@YAXPEAUlua_State@@PEAULUIElement@@@Z(luaVM, element);
}

/*
==============
LUIElement_Setup3SliceHorizontal
==============
*/

void __fastcall LUIElement_Setup3SliceHorizontal(lua_State *luaVM, LUIElement *element)
{
  ?LUIElement_Setup3SliceHorizontal@@YAXPEAUlua_State@@PEAULUIElement@@@Z(luaVM, element);
}

/*
==============
LUI_GetPlayerHandIndexToUseForWidget
==============
*/

PlayerHandIndex __fastcall LUI_GetPlayerHandIndexToUseForWidget(const LocalClientNum_t localClientNum, const bool useLeftHandIfAkimbo)
{
  return ?LUI_GetPlayerHandIndexToUseForWidget@@YA?AW4PlayerHandIndex@@W4LocalClientNum_t@@_N@Z(localClientNum, useLeftHandIfAkimbo);
}

/*
==============
LUI_GetViewModelTransform
==============
*/

bool __fastcall LUI_GetViewModelTransform(const LocalClientNum_t localClientNum, const PlayerHandIndex handIndex, const char *tagName, tmat33_t<vec3_t> *outLocalAxis, dvec3_t *outWorldPosition)
{
  return ?LUI_GetViewModelTransform@@YA_NW4LocalClientNum_t@@W4PlayerHandIndex@@PEBDAEAT?$tmat33_t@Tvec3_t@@@@AEATdvec3_t@@@Z(localClientNum, handIndex, tagName, outLocalAxis, outWorldPosition);
}

/*
==============
LUIElement_Setup3SliceVertical
==============
*/

void __fastcall LUIElement_Setup3SliceVertical(lua_State *luaVM, LUIElement *element)
{
  ?LUIElement_Setup3SliceVertical@@YAXPEAUlua_State@@PEAULUIElement@@@Z(luaVM, element);
}

/*
==============
LUI_GetEntityTagPositionAndAxis
==============
*/

bool __fastcall LUI_GetEntityTagPositionAndAxis(const LocalClientNum_t localClientNum, int entityNum, const char *tagName, tmat33_t<vec3_t> *outLocalAxis, vec3_t *outWorldPosition)
{
  return ?LUI_GetEntityTagPositionAndAxis@@YA_NW4LocalClientNum_t@@HPEBDAEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(localClientNum, entityNum, tagName, outLocalAxis, outWorldPosition);
}

/*
==============
LUIElement_GetCommonParams
==============
*/

void __fastcall LUIElement_GetCommonParams(LocalClientNum_t localClientNum, const LUIElement *const element, rectDef_s *const rect, vec4_t *color)
{
  ?LUIElement_GetCommonParams@@YAXW4LocalClientNum_t@@QEBULUIElement@@QEAUrectDef_s@@AEATvec4_t@@@Z(localClientNum, element, rect, color);
}

/*
==============
LUI_LUIElement_SetupUIBaseImage
==============
*/

void __fastcall LUI_LUIElement_SetupUIBaseImage(LUIElement *element, void (__fastcall *renderFunction)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))
{
  ?LUI_LUIElement_SetupUIBaseImage@@YAXPEAULUIElement@@P6AXW4LocalClientNum_t@@00MMMMPEAUlua_State@@@Z@Z(element, renderFunction);
}

/*
==============
LUI_GetViewModelReticleTransform
==============
*/

bool __fastcall LUI_GetViewModelReticleTransform(const LocalClientNum_t localClientNum, const PlayerHandIndex handIndex, const char *tagName, const bool isLockedToTag, tmat33_t<vec3_t> *outLocalAxis, dvec3_t *outWorldPosition)
{
  return ?LUI_GetViewModelReticleTransform@@YA_NW4LocalClientNum_t@@W4PlayerHandIndex@@PEBD_NAEAT?$tmat33_t@Tvec3_t@@@@AEATdvec3_t@@@Z(localClientNum, handIndex, tagName, isLockedToTag, outLocalAxis, outWorldPosition);
}

/*
==============
LUI_ComputeWorldOffset
==============
*/

void __fastcall LUI_ComputeWorldOffset(const LocalClientNum_t localClientNum, int entityNum, const tmat33_t<vec3_t> *tagTransform, const vec3_t *tagOffset, const vec3_t *entityOffset, const vec3_t *worldOffset, vec3_t *outOffset)
{
  ?LUI_ComputeWorldOffset@@YAXW4LocalClientNum_t@@HAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@22AEAT3@@Z(localClientNum, entityNum, tagTransform, tagOffset, entityOffset, worldOffset, outOffset);
}

/*
==============
LUIElement_Setup9Slice
==============
*/

void __fastcall LUIElement_Setup9Slice(lua_State *luaVM, LUIElement *element)
{
  ?LUIElement_Setup9Slice@@YAXPEAUlua_State@@PEAULUIElement@@@Z(luaVM, element);
}

/*
==============
LUI_LUIElement_RegisterMethods
==============
*/

void __fastcall LUI_LUIElement_RegisterMethods(LUIElement *element, lua_State *luaVM, const luaL_Reg *methods)
{
  ?LUI_LUIElement_RegisterMethods@@YAXPEAULUIElement@@PEAUlua_State@@PEBUluaL_Reg@@@Z(element, luaVM, methods);
}

/*
==============
LUI_GetViewModelBoneTransformData
==============
*/

bool __fastcall LUI_GetViewModelBoneTransformData(const LocalClientNum_t localClientNum, const PlayerHandIndex handIndex, scr_string_t tagName, tmat33_t<vec3_t> *outLocalAxis, dvec3_t *outWorldPosition)
{
  return ?LUI_GetViewModelBoneTransformData@@YA_NW4LocalClientNum_t@@W4PlayerHandIndex@@W4scr_string_t@@AEAT?$tmat33_t@Tvec3_t@@@@AEATdvec3_t@@@Z(localClientNum, handIndex, tagName, outLocalAxis, outWorldPosition);
}

/*
==============
LUI_LuaCall_LUIElement_SetupScreenshotViewer
==============
*/

int __fastcall LUI_LuaCall_LUIElement_SetupScreenshotViewer(lua_State *luaVM)
{
  return ?LUI_LuaCall_LUIElement_SetupScreenshotViewer@@YAHPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUIElement_InitTextLikeElement
==============
*/

void __fastcall LUIElement_InitTextLikeElement(LUIElement *element)
{
  ?LUIElement_InitTextLikeElement@@YAXPEAULUIElement@@@Z(element);
}

/*
==============
LUIElement_ChatBoxRender
==============
*/
void LUIElement_ChatBoxRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha)
{
  LocalClientNum_t data; 

  data = localClientNum;
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUIElement_ChatBoxRenderImmediate, &data, 4ui64, 4ui64);
}

/*
==============
LUIElement_ChatBoxRenderImmediate
==============
*/
void LUIElement_ChatBoxRenderImmediate(const LocalClientNum_t *localClientNum)
{
  CG_DrawMP_DrawChatMessages(*localClientNum);
}

/*
==============
LUIElement_CinematicSubtitlesRender
==============
*/
void LUIElement_CinematicSubtitlesRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha)
{
  LocalClientNum_t data; 

  data = localClientNum;
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUIElement_CinematicSubtitlesRenderImmediate, &data, 4ui64, 4ui64);
}

/*
==============
LUIElement_CinematicSubtitlesRenderImmediate
==============
*/
void LUIElement_CinematicSubtitlesRenderImmediate(const LocalClientNum_t *localClientNum)
{
  UI_DrawCinematicSubtitles(*localClientNum);
}

/*
==============
LUIElement_DirectionalImageRender
==============
*/
void LUIElement_DirectionalImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  cg_t *LocalClientGlobals; 
  float compassNorthYaw; 
  float v15; 
  float v16; 
  float userData; 
  tmat33_t<vec3_t> axis; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->nextSnap )
  {
    compassNorthYaw = LocalClientGlobals->compassNorthYaw;
    v23 = v8;
    v22 = v9;
    v16 = compassNorthYaw - LocalClientGlobals->refdefViewAngles.v[1];
    v15 = v16;
    v21 = v10;
    userData = element->currentAnimationState.userData;
    AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &axis);
    if ( axis.m[2].v[2] < 0.0 )
    {
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v15 = (float)((float)((float)(v16 * 0.0027777778) + 0.5) - *(float *)&_XMM4) * 360.0;
    }
    if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1105, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    element->imageData.uMin = (float)(v15 * 0.0027777778) - (float)(userData * 0.5);
    element->imageData.uMax = (float)(userData * 0.5) + (float)(v15 * 0.0027777778);
    if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1109, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    LUI_Render_ImageFill(localClientNum, element, red, green, blue, alpha, element->imageData.image, luaVM);
  }
}

/*
==============
LUIElement_DynamicCrosshair_Layout
==============
*/
void LUIElement_DynamicCrosshair_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  const dvar_t *v8; 
  float v9; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  float v12; 
  float v13; 
  LUIElement *i; 
  float x; 
  float y; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v21; 

  if ( (element->currentAnimationState.flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2722, ASSERT_TYPE_ASSERT, "(element->currentAnimationState.flags & ( 1 << 0 ))", (const char *)&queryFormat, "element->currentAnimationState.flags & LUI_ANIMSTATE_INITIALIZED") )
    __debugbreak();
  v8 = DVARBOOL_cg_crosshairDynamic;
  v9 = 0.0;
  x = 0.0;
  y = 0.0;
  if ( !DVARBOOL_cg_crosshairDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairDynamic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    CG_CalcCrosshairPosition(LocalClientGlobals, ActivePlacement->realViewportSize.v[0], ActivePlacement->realViewportSize.v[1], &x, &y);
    AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &axis);
    MatrixTranspose(&axis, &out);
    AnglesToAxis(&LocalClientGlobals->gunAnglesExtrapolated, &in1);
    MatrixMultiply(&in1, &out, &v21);
    AxisToAngles(&v21, &angles);
    LODWORD(v9) = LODWORD(angles.v[2]) ^ _xmm;
    if ( ((LODWORD(angles.v[2]) ^ (unsigned int)_xmm) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2749, ASSERT_TYPE_ASSERT, "(!IS_NAN( roll ))", (const char *)&queryFormat, "!IS_NAN( roll )") )
      __debugbreak();
  }
  v12 = (float)(1.0 / unitScale) * x;
  v13 = (float)(1.0 / unitScale) * y;
  element->currentAnimationState.position.x.offsets[0] = v12;
  element->currentAnimationState.position.x.offsets[1] = v12;
  element->currentAnimationState.position.y.offsets[0] = v13;
  element->currentAnimationState.position.y.offsets[1] = v13;
  element->currentAnimationState.position.x.anchors[0] = 0.5;
  element->currentAnimationState.position.x.anchors[1] = 0.5;
  element->currentAnimationState.position.y.anchors[0] = 0.5;
  element->currentAnimationState.position.y.anchors[1] = 0.5;
  element->currentAnimationState.zRot = v9;
  element->layoutCached = 0;
  LUIElement_UpdateLayout(element, unitScale, deltaTime, luaVM);
  for ( i = element->firstChild; i; i = i->nextSibling )
    LUIElement_Layout(localClientNum, i, unitScale, deltaTime, luaVM);
}

/*
==============
LUIElement_FlashFadeRender
==============
*/
void LUIElement_FlashFadeRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) && LUIElement_IsCGameInitialized(localClientNum) )
    CG_DrawSP_FlashFade(localClientNum);
}

/*
==============
LUIElement_GetCommonParams
==============
*/
void LUIElement_GetCommonParams(LocalClientNum_t localClientNum, const LUIElement *const element, rectDef_s *const rect, vec4_t *color)
{
  float *h; 
  const ScreenPlacement *ActivePlacement; 

  if ( rect )
  {
    rect->x = element->left;
    rect->y = element->top;
    rect->w = element->right - element->left;
    h = &rect->h;
    rect->h = element->bottom - element->top;
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, &rect->x, &rect->y, &rect->w, h, 6, 6);
    *(_WORD *)&rect->horzAlign = 3340;
  }
  color->v[0] = element->currentAnimationState.red;
  color->v[1] = element->currentAnimationState.green;
  color->v[2] = element->currentAnimationState.blue;
  color->v[3] = element->currentAnimationState.alpha;
}

/*
==============
LUIElement_HudElemLayerRender
==============
*/
void LUIElement_HudElemLayerRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha)
{
  LocalClientNum_t data; 

  data = localClientNum;
  if ( LUIElement_IsCGameInitialized(localClientNum) )
    LUI_QuadCache_AddDrawListCommandInternal(data, (void (__fastcall *)(const void *))LUIElement_HudElemLayerRenderImmediate, &data, 4ui64, 4ui64);
}

/*
==============
LUIElement_HudElemLayerRenderImmediate
==============
*/
void LUIElement_HudElemLayerRenderImmediate(const LocalClientNum_t *localClientNum)
{
  CG_Draw2dHudElems(*localClientNum, 3);
}

/*
==============
LUIElement_IconImage_Render
==============
*/
void LUIElement_IconImage_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  const char *String; 
  char outIconName[64]; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  String = SEH_StringEd_GetString(*(const char **)element->customElementData);
  if ( FontIcons_GetIconNameForDirective(localClientNum, String, 0x40ui64, outIconName) )
  {
    element->imageData.image = Image_Register(outIconName, IMAGE_TRACK_UI);
    if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1161, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    LUI_Render_ImageFill(localClientNum, element, red, green, blue, alpha, element->imageData.image, luaVM);
  }
}

/*
==============
LUIElement_InitTextLikeElement
==============
*/
void LUIElement_InitTextLikeElement(LUIElement *element)
{
  if ( SLOBYTE(element->usageFlags) >= 0 )
  {
    element->usageFlags |= 0x80u;
    *(_OWORD *)&element->imageData.image = 0ui64;
    *(_QWORD *)&element->textData.tracking = 0i64;
    *(_WORD *)element->textData.textRef = -1;
    element->imageData.image = (const GfxImage *)LUI_DefaultFont;
  }
}

/*
==============
LUIElement_IsCGameInitialized
==============
*/
bool LUIElement_IsCGameInitialized(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    LODWORD(v4) = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return !clientUIActives[v1].frontEndSceneState[0] && CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v1) == CA_ACTIVE && CG_IsFullyInitialized((const LocalClientNum_t)v1);
}

/*
==============
LUIElement_LayoutUpdateEvent
==============
*/
void LUIElement_LayoutUpdateEvent(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *firstChild; 
  bool v9; 

  LUIElement_UpdateLayout(element, unitScale, deltaTime, luaVM);
  if ( LUI_BeginEventWithElement(localClientNum, element, "self_layout_updated", luaVM) )
    LUI_EndEventWithElement(luaVM);
  firstChild = element->firstChild;
  element->layoutDeeplyCached = element->canCacheLayout;
  v9 = element->layoutDeeplyCached & LUIElement_LayoutChildren(localClientNum, firstChild, unitScale, deltaTime, luaVM) & ~(unsigned __int8)((unsigned int)element->usageFlags >> 1);
  element->layoutCached = element->canCacheLayout;
  element->layoutDeeplyCached = v9;
}

/*
==============
LUIElement_ObjectiveDistance_Render
==============
*/
void LUIElement_ObjectiveDistance_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  playerState_s *p_predictedPlayerState; 
  __int64 v12; 
  __int16 v13; 
  unsigned __int8 v14; 
  int v15; 
  unsigned __int8 v16; 
  CalloutMarkerPingPool v17; 
  const CalloutMarkerPingView *View; 
  unsigned __int8 v19; 
  const ObjectiveSettings *v20; 
  __int64 entNum; 
  int v22; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  __int128 v25; 
  float v28; 
  vec3_t out_origin; 
  vec3_t outWorldOrigin; 
  FontGlowStyle fontGlowStyle; 
  char result[128]; 

  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  v12 = element->currentAnimationState.userDataShorts[0];
  v13 = element->currentAnimationState.userDataShorts[1];
  if ( (int)v12 < 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2088, "objectiveIndex >= 0") )
    __debugbreak();
  if ( v13 < 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2089, "locationIndex >= 0") )
    __debugbreak();
  if ( v13 >= 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2090, "locationIndex < 8") )
    __debugbreak();
  v14 = ScriptableCl_ObjectivePeak(localClientNum);
  v15 = v14 + 32;
  if ( (int)v12 >= v14 + 85 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2095, "objectiveIndex < ( numObjectivesAndScriptableObjectives + CG_CALLOUTMARKERPING_VIEW_INDEX_MAX )") )
    __debugbreak();
  if ( (int)v12 < v15 )
  {
    if ( (int)v12 < 32 )
    {
      entNum = (__int64)p_predictedPlayerState->objectives[v12].entNum;
      if ( (*(_BYTE *)(entNum + 156) & 4) == 0 )
        return;
      v22 = *(_DWORD *)(entNum + 4i64 * v13);
      if ( v22 == 2047 )
      {
        outWorldOrigin = *(vec3_t *)(entNum + 12i64 * v13 + 32);
      }
      else
      {
        Entity = CG_GetEntity(localClientNum, v22);
        if ( !Entity || (Entity->flags & 1) == 0 )
        {
LABEL_33:
          memset(&out_origin, 0, sizeof(out_origin));
          return;
        }
        CG_GetPoseOrigin(&Entity->pose, &out_origin);
        outWorldOrigin.v[0] = out_origin.v[0];
        outWorldOrigin.v[1] = out_origin.v[1];
        outWorldOrigin.v[2] = (float)*(int *)(entNum + 132) + out_origin.v[2];
        memset(&out_origin, 0, sizeof(out_origin));
      }
    }
    else
    {
      v19 = v12 - 32;
      if ( v19 >= ScriptableCl_ObjectiveCount(localClientNum) )
        return;
      v20 = ScriptableCl_ObjectiveGet(localClientNum, v19, &out_origin);
      if ( !v20 || (v20->flags[0] & 4) == 0 )
        return;
      outWorldOrigin.v[0] = out_origin.v[0];
      outWorldOrigin.v[1] = out_origin.v[1];
      outWorldOrigin.v[2] = (float)v20->zOffset + out_origin.v[2];
    }
LABEL_29:
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &out_origin);
    v25 = LODWORD(out_origin.v[1]);
    *(float *)&v25 = fsqrt((float)((float)((float)(out_origin.v[1] - outWorldOrigin.v[1]) * (float)(out_origin.v[1] - outWorldOrigin.v[1])) + (float)((float)(out_origin.v[0] - outWorldOrigin.v[0]) * (float)(out_origin.v[0] - outWorldOrigin.v[0]))) + (float)((float)(out_origin.v[2] - outWorldOrigin.v[2]) * (float)(out_origin.v[2] - outWorldOrigin.v[2]))) * 0.0254;
    _XMM0 = v25;
    CG_BuildCompassDistanceString(*(float *)&v25, result, 128);
    *(_QWORD *)&fontGlowStyle.glowMaxDistance = 0i64;
    fontGlowStyle.glowUVOffset.v[1] = 0.0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&fontGlowStyle.outlineGlowMinDistance = _XMM0;
    *(_QWORD *)&fontGlowStyle.outlineGlowColor.xyz.z = 0i64;
    fontGlowStyle.glowMinDistance = FLOAT_N0_30000001;
    fontGlowStyle.glowColor = (vec4_t)_xmm;
    v28 = element->right - element->left;
    if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2183, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
      __debugbreak();
    LUI_Interface_DrawText(localClientNum, root, element, element->left, element->bottom, red, green, blue, alpha, result, element->textData.font, element->bottom - element->top, v28, 0, 0, element->currentAnimationState.alignment, NULL, &fontGlowStyle, NULL, luaVM);
    goto LABEL_33;
  }
  v16 = v12 - v15;
  v17 = CG_CalloutMarkerPing_ViewIndexToPool(localClientNum, v16);
  View = CG_CalloutMarkerPing_GetView(localClientNum, v16, p_predictedPlayerState);
  if ( View->origin.owner && CG_CalloutMarkerPing_GetWorldOrigin(v17, View, localClientNum, &outWorldOrigin) )
    goto LABEL_29;
}

/*
==============
LUIElement_OwnerdrawRender
==============
*/
void LUIElement_OwnerdrawRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  char alignment; 
  bool v11; 
  double v12; 
  float v13; 
  GfxFont *font; 
  double v15; 
  bool v16; 
  signed __int16 v17; 
  float v18; 
  __int64 data; 
  float rect_4; 
  float rect_8; 
  float rect_12; 
  unsigned __int8 rect_16; 
  unsigned __int8 rect_17; 
  float v25; 
  float v26; 
  int v27; 
  const GfxImage *image; 
  float v29; 
  vec4_t color; 
  int v31; 
  int v32; 

  LODWORD(data) = localClientNum;
  if ( (!Sys_IsRenderThread() || !R_IsInRemoteScreenUpdate()) && (LUIElement_IsCGameInitialized(localClientNum) || LUI_CoD_InFrontend()) )
  {
    if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1741, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )", data) )
      __debugbreak();
    LUIElement_GetCommonParams(localClientNum, element, (rectDef_s *const)((char *)&data + 4), &color);
    alignment = element->currentAnimationState.alignment;
    if ( alignment )
    {
      v32 = alignment;
      if ( alignment == 2 )
      {
        *((float *)&data + 1) = (float)(0.5 * rect_8) + *((float *)&data + 1);
        rect_4 = (float)(0.5 * rect_12) + rect_4;
      }
    }
    else
    {
      v32 = 0;
    }
    v11 = element->currentAnimationState.userDataBytes[2] == 1;
    v29 = (float)(element->bottom - element->top) * 0.020833334;
    if ( v11 )
    {
      if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1762, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
        __debugbreak();
      LUI_PutElementOnTopOfStack(element, luaVM);
      j_lua_getfield(luaVM, -1, "m_ownerDrawTextScale");
      if ( j_lua_isnumber(luaVM, -1) )
      {
        v12 = lui_tonumber32(luaVM, -1);
        v29 = *(float *)&v12;
        if ( LUI_CoD_UsingSplitscreenUpscaling() )
          v13 = v29 * 1.1111112;
        else
          v13 = v29 * 0.66666669;
        font = element->textData.font;
        v29 = v13;
        v15 = R_NormalizedTextScale(font, 1.0);
        v29 = v29 / *(float *)&v15;
      }
      j_lua_settop(luaVM, -3);
    }
    v16 = LUI_CoD_InFrontend();
    v17 = element->currentAnimationState.userDataShorts[0];
    if ( v16 || v17 == 365 )
    {
      v18 = 0.0;
      v26 = 0.0;
    }
    else
    {
      v18 = (float)rect_16;
      v26 = (float)rect_17;
    }
    v27 = v17;
    image = element->imageData.image;
    v31 = element->currentAnimationState.userDataBytes[3];
    v25 = v18;
    LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUIElement_OwnerdrawRenderImmediate, &data, 0x50ui64, 8ui64);
  }
}

/*
==============
LUIElement_OwnerdrawRenderImmediate
==============
*/
void LUIElement_OwnerdrawRenderImmediate(const LUIOwnerDrawRenderData *data)
{
  __int128 v1; 
  float textX; 
  int vertAlign; 
  float w; 
  float y; 
  int v6; 
  GfxFont *font; 
  int textStyle; 
  int textAlign; 
  rectDef_s v10; 

  v1 = *(_OWORD *)&data->rect.x;
  textX = data->textX;
  vertAlign = data->rect.vertAlign;
  w = data->rect.w;
  y = data->rect.y;
  v6 = (unsigned __int8)*(_DWORD *)&data->rect.horzAlign;
  *(_DWORD *)&v10.horzAlign = *(_DWORD *)&data->rect.horzAlign;
  textAlign = data->textAlign;
  textStyle = data->textStyle;
  font = data->font;
  *(_OWORD *)&v10.x = v1;
  UI_OwnerDraw(data->localClientNum, data->rect.x, y, w, data->rect.h, v6, vertAlign, textX, data->textY, data->ownerDraw, 0, 0, 0.0, font, data->fontScale, &data->color, textStyle, &v10, textAlign, NULL);
}

/*
==============
LUIElement_RenderMinimizedInteractiveObjects
==============
*/
void LUIElement_RenderMinimizedInteractiveObjects(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v9; 
  ScreenPlacement *ActivePlacement; 
  float v11; 
  float v12; 
  cg_t *LocalClientGlobals; 
  __int64 v14; 
  __int64 p_predictedPlayerState; 
  float v16; 
  float v17; 
  float v18; 
  int v19; 
  __int64 v20; 
  unsigned __int8 *p_usableData; 
  unsigned __int8 v22; 
  int v23; 
  centity_t *Entity; 
  centity_t *v25; 
  int v26; 
  const char *BoneName; 
  const DObj *ClientDObj; 
  centity_t *v29; 
  const DObj *v30; 
  const DObj *v31; 
  scr_string_t String; 
  int WorldTagMatrix; 
  float v34; 
  float v35; 
  float v36; 
  const dvar_t *v37; 
  float value; 
  double v39; 
  int v40; 
  int v41; 
  const dvar_t *v42; 
  int integer; 
  const dvar_t *v44; 
  float v45; 
  int v46; 
  vec3_t *worldOffset; 
  vec3_t *outOffset; 
  int v49; 
  vec3_t worldPos; 
  vec3_t out_usePosition; 
  int outCount; 
  cg_t *v53; 
  playerState_s *v54; 
  ScreenPlacement *scrPlace; 
  LUIElement *elementa; 
  lua_State *v57; 
  __int64 v58; 
  vec2_t outScreenPos; 
  vec4_t color; 
  vec3_t v61; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 
  vec4_t quadVerts[4]; 
  MinimizedUseTarget outTargets; 

  v58 = -2i64;
  elementa = element;
  v9 = localClientNum;
  v57 = luaVM;
  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2439, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS )") )
    __debugbreak();
  if ( !Sys_IsRenderThread() || !R_IsInRemoteScreenUpdate() )
  {
    if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2449, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    ActivePlacement = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)v9);
    scrPlace = ActivePlacement;
    v12 = element->currentAnimationState.userData * 0.5;
    v11 = v12;
    color.v[0] = red;
    color.v[1] = green;
    color.v[2] = blue;
    color.v[3] = alpha;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
    v14 = (__int64)LocalClientGlobals;
    v53 = LocalClientGlobals;
    if ( LocalClientGlobals->nextSnap )
    {
      p_predictedPlayerState = (__int64)&LocalClientGlobals->predictedPlayerState;
      v54 = &LocalClientGlobals->predictedPlayerState;
      CG_GetPlayerViewOrigin((LocalClientNum_t)v9, &LocalClientGlobals->predictedPlayerState, &outOrigin);
      outCount = 0;
      CG_GetMinimizedUseTargets((LocalClientNum_t)v9, &outCount, &outTargets);
      LODWORD(v16) = LODWORD(v12) ^ _xmm;
      v17 = v12 + ActivePlacement->realViewportSize.v[0];
      v18 = v12 + ActivePlacement->realViewportSize.v[1];
      v19 = 0;
      v49 = 0;
      if ( outCount > 0 )
      {
        v20 = v9;
        p_usableData = &outTargets.usableData;
        while ( 1 )
        {
          v22 = *(p_usableData - 8);
          if ( *(_BYTE *)(p_predictedPlayerState + 721) == v22 && *(_DWORD *)(p_predictedPlayerState + 716) == *((_DWORD *)p_usableData - 1) && *(_BYTE *)(p_predictedPlayerState + 720) == *p_usableData )
            goto LABEL_88;
          if ( !v22 )
            break;
          if ( v22 == 1 )
          {
            if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v9, *((_DWORD *)p_usableData - 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2528, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, r_useTarget.usableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, r_useTarget.usableIndex )") )
              __debugbreak();
            if ( !ScriptableCl_GetPartIsUsable((const LocalClientNum_t)v9, *((_DWORD *)p_usableData - 1), *p_usableData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2529, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetPartIsUsable( localClientNum, r_useTarget.usableIndex, r_useTarget.usableData ))", (const char *)&queryFormat, "ScriptableCl_GetPartIsUsable( localClientNum, r_useTarget.usableIndex, r_useTarget.usableData )") )
              __debugbreak();
            ScriptableCl_GetPartUsePosition((const LocalClientNum_t)v9, *((_DWORD *)p_usableData - 1), *p_usableData, &out_usePosition);
            worldPos = out_usePosition;
LABEL_53:
            if ( CG_WorldPosToScreenPosReal((LocalClientNum_t)v9, scrPlace, &worldPos, &outScreenPos) && outScreenPos.v[0] >= v16 && outScreenPos.v[1] >= v16 && outScreenPos.v[0] <= v17 && outScreenPos.v[1] <= v18 )
            {
              v34 = fsqrt((float)((float)((float)(out_usePosition.v[1] - outOrigin.v[1]) * (float)(out_usePosition.v[1] - outOrigin.v[1])) + (float)((float)(out_usePosition.v[0] - outOrigin.v[0]) * (float)(out_usePosition.v[0] - outOrigin.v[0]))) + (float)((float)(out_usePosition.v[2] - outOrigin.v[2]) * (float)(out_usePosition.v[2] - outOrigin.v[2])));
              if ( *((float *)p_usableData + 2) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2564, ASSERT_TYPE_ASSERT, "(r_useTarget.displayDistance >= 0.0f)", (const char *)&queryFormat, "r_useTarget.displayDistance >= 0.0f") )
                __debugbreak();
              v35 = *((float *)p_usableData + 2);
              if ( v35 <= 0.0 )
                v36 = FLOAT_3_4028235e38;
              else
                v36 = v34 / v35;
              v37 = DCONST_DVARMPFLT_bg_minimizedPromptFadeInDistanceMult;
              if ( !DCONST_DVARMPFLT_bg_minimizedPromptFadeInDistanceMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_minimizedPromptFadeInDistanceMult") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v37);
              value = v37->current.value;
              if ( value < 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2567, ASSERT_TYPE_ASSERT, "(fadeInDistFrac >= 1.0f)", (const char *)&queryFormat, "fadeInDistFrac >= 1.0f") )
                __debugbreak();
              v39 = I_fclamp((float)(v36 - 1.0) / (float)(value - 1.0), 0.0, 1.0);
              v40 = *(_DWORD *)(v14 + 26092);
              v41 = *((_DWORD *)p_usableData - 1);
              if ( v40 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2419, ASSERT_TYPE_ASSERT, "(timeMs >= 0)", (const char *)&queryFormat, "timeMs >= 0") )
                __debugbreak();
              v42 = DCONST_DVARMPINT_lui_minimizedPromptPulsePeriod;
              if ( !DCONST_DVARMPINT_lui_minimizedPromptPulsePeriod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_minimizedPromptPulsePeriod") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v42);
              integer = v42->current.integer;
              v44 = DCONST_DVARMPFLT_lui_minimizedPromptPulseAlphaScale;
              if ( !DCONST_DVARMPFLT_lui_minimizedPromptPulseAlphaScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_minimizedPromptPulseAlphaScale") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v44);
              v45 = v44->current.value;
              if ( integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2424, ASSERT_TYPE_ASSERT, "(pulsePeriodMs > 0)", (const char *)&queryFormat, "pulsePeriodMs > 0") )
                __debugbreak();
              v46 = modulo;
              if ( modulo <= 0 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2425, ASSERT_TYPE_ASSERT, "(modulo > 0)", (const char *)&queryFormat, "modulo > 0") )
                  __debugbreak();
                v46 = modulo;
              }
              color.v[3] = (float)(alpha * (float)(1.0 - *(float *)&v39)) * (float)(1.0 - (float)(sinf_0((float)((float)((v41 % v46 * (integer / v46) + v40) % integer) / (float)integer) * 6.2831855) * (float)(1.0 - v45)));
              LUI_CoD_GenerateQuadVerts(outScreenPos.v[0] - v11, outScreenPos.v[1] - v11, v11 + outScreenPos.v[0], v11 + outScreenPos.v[1], (vec4_t (*)[4])quadVerts);
              LUI_Render_DrawImage((const LocalClientNum_t)v9, elementa, v57, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &color, elementa->imageData.image);
            }
            goto LABEL_87;
          }
          LODWORD(worldOffset) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2539, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected usable class %i", worldOffset) )
            __debugbreak();
LABEL_87:
          memset(&worldPos, 0, sizeof(worldPos));
          memset(&out_usePosition, 0, sizeof(out_usePosition));
          p_predictedPlayerState = (__int64)v54;
LABEL_88:
          v49 = ++v19;
          p_usableData += 20;
          v14 = (__int64)v53;
          v20 = v9;
          if ( v19 >= outCount )
            return;
        }
        v23 = *((_DWORD *)p_usableData - 1);
        Entity = CG_GetEntity((const LocalClientNum_t)v9, v23);
        v25 = Entity;
        if ( (!Entity || (Entity->flags & 1) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2498, ASSERT_TYPE_ASSERT, "(cent != 0 && CENextValid( cent ))", (const char *)&queryFormat, "cent != NULL && CENextValid( cent )") )
          __debugbreak();
        CG_GetPoseOrigin(&v25->pose, &out_usePosition);
        worldPos = out_usePosition;
        v26 = *((_DWORD *)p_usableData + 1);
        if ( v26 != 255 && v26 != 254 )
        {
          BoneName = NULL;
          ClientDObj = Com_GetClientDObj(v25->nextState.number, (LocalClientNum_t)v9);
          if ( ClientDObj )
          {
            BoneName = DObjGetBoneName(ClientDObj, *((_DWORD *)p_usableData + 1));
            if ( !BoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2513, ASSERT_TYPE_ASSERT, "(tagName)", (const char *)&queryFormat, "tagName") )
              __debugbreak();
          }
          if ( (unsigned int)v9 >= 2 )
          {
            LODWORD(outOffset) = 2;
            LODWORD(worldOffset) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", worldOffset, outOffset) )
              __debugbreak();
          }
          if ( clientUIActives[v20].connectionState == CA_ACTIVE && v23 != 2047 )
          {
            v29 = CG_GetEntity((const LocalClientNum_t)v9, v23);
            if ( (v29->flags & 1) != 0 )
            {
              if ( !CG_Entity_CanUseDObj((LocalClientNum_t)v9, v23) || (v30 = Com_GetClientDObj(v29->nextState.number, (LocalClientNum_t)v9), (v31 = v30) == NULL) || !DObjVerifyNumBones(v30) || (!BoneName || !*BoneName || (String = SL_GetString(BoneName, 0), WorldTagMatrix = CG_DObjGetWorldTagMatrix(&v29->pose, v31, String, &outTagMat, &worldPos), SL_RemoveRefToString(String), !WorldTagMatrix)) && !CG_DObjGetWorldTagMatrix(&v29->pose, v31, scr_const.tag_origin, &outTagMat, &worldPos) )
              {
                CG_GetPoseOrigin(&v29->pose, &worldPos);
                MatrixIdentity33(&outTagMat);
              }
              LUI_ComputeWorldOffset((const LocalClientNum_t)v9, v23, &outTagMat, &vec3_origin, &vec3_origin, &vec3_origin, &v61);
              worldPos.v[0] = worldPos.v[0] + v61.v[0];
              worldPos.v[1] = worldPos.v[1] + v61.v[1];
              worldPos.v[2] = worldPos.v[2] + v61.v[2];
            }
          }
          v14 = (__int64)v53;
        }
        v19 = v49;
        goto LABEL_53;
      }
    }
  }
}

/*
==============
LUIElement_RenderMountHint
==============
*/
void LUIElement_RenderMountHint(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int128 v8; 
  const dvar_t *v11; 
  const ScreenPlacement *ActivePlacement; 
  double CurrentUnitScale; 
  float height; 
  float v15; 
  cg_t *LocalClientGlobals; 
  cg_t *v17; 
  float v18; 
  float v19; 
  float v20; 
  double Float_Internal_DebugName; 
  float v23; 
  double v24; 
  double v25; 
  float v26; 
  float v27; 
  double v28; 
  ContextMountType type; 
  float v30; 
  vec2_t outScreenPos; 
  vec3_t outOrigin; 
  __int128 v36; 

  if ( !Sys_IsRenderThread() || !R_IsInRemoteScreenUpdate() )
  {
    if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2619, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    v11 = DCONST_DVARMPBOOL_mount_indicator_inworld;
    if ( !DCONST_DVARMPBOOL_mount_indicator_inworld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_inworld") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
      height = *(float *)&CurrentUnitScale * element->currentAnimationState.userData;
      v15 = height * 0.5;
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v17 = LocalClientGlobals;
      if ( LocalClientGlobals->mountHint.type )
      {
        if ( CG_WorldPosToScreenPosReal(localClientNum, ActivePlacement, &LocalClientGlobals->mountHint.refinedOrigin, &outScreenPos) && outScreenPos.v[0] >= COERCE_FLOAT(LODWORD(v15) ^ _xmm) && outScreenPos.v[1] >= COERCE_FLOAT(LODWORD(v15) ^ _xmm) && outScreenPos.v[0] <= (float)(v15 + ActivePlacement->realViewportSize.v[0]) && outScreenPos.v[1] <= (float)(v15 + ActivePlacement->realViewportSize.v[1]) )
        {
          v36 = v8;
          CG_GetPlayerViewOrigin(localClientNum, &v17->predictedPlayerState, &outOrigin);
          v18 = v17->mountHint.origin.v[0] - outOrigin.v[0];
          v19 = v17->mountHint.origin.v[2] - outOrigin.v[2];
          v20 = v17->mountHint.origin.v[1] - outOrigin.v[1];
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_mount_tuning_query_distance, "mount_tuning_query_distance");
          _XMM8 = 0i64;
          if ( *(float *)&Float_Internal_DebugName <= 0.0 )
            v23 = 0.0;
          else
            v23 = fsqrt((float)((float)(v20 * v20) + (float)(v18 * v18)) + (float)(v19 * v19)) * (float)(1.0 / *(float *)&Float_Internal_DebugName);
          v24 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_indicator_inworld_fadein_dist_frac, "mount_indicator_inworld_fadein_dist_frac");
          if ( *(float *)&v24 >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2673, ASSERT_TYPE_ASSERT, "(fadeInDistFrac < 1.0f)", (const char *)&queryFormat, "fadeInDistFrac < 1.0f") )
            __debugbreak();
          v25 = I_fclamp((float)(v23 - *(float *)&v24) / (float)(1.0 - *(float *)&v24), 0.0, 1.0);
          v26 = 1.0 - v17->predictedPlayerState.mountState.mountFraction;
          v27 = 1.0 - *(float *)&v25;
          v28 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_indicator_alphascale, "mount_indicator_alphascale");
          type = v17->mountHint.type;
          v30 = *(float *)&v28 * (float)((float)(alpha * v27) * v26);
          if ( type == MOUNT_TYPE_LEFT )
          {
            *(float *)&_XMM2 = FLOAT_N90_0;
          }
          else
          {
            _XMM0 = (unsigned int)type;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm2, xmm8, xmm1, xmm2
            }
          }
          LUI_Render_DrawQuadRotated(localClientNum, element, outScreenPos.v[0], outScreenPos.v[1], height, height, 0.0, 0.0, 1.0, 1.0, *(float *)&_XMM2, red, green, blue, v30, element->imageData.image, luaVM);
        }
      }
    }
  }
}

/*
==============
LUIElement_ScaleFullscreenLayout
==============
*/
void LUIElement_ScaleFullscreenLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *CurrentRoot; 
  LUIElement *firstChild; 

  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  *(_QWORD *)element->currentAnimationState.position.x.global = *(_QWORD *)CurrentRoot->currentAnimationState.position.x.global;
  *(_QWORD *)element->currentAnimationState.position.y.global = *(_QWORD *)CurrentRoot->currentAnimationState.position.y.global;
  LUIElement_SetDimensions(element, unitScale);
  firstChild = element->firstChild;
  element->layoutDeeplyCached = element->canCacheLayout;
  element->layoutDeeplyCached &= LUIElement_LayoutChildren(localClientNum, firstChild, unitScale, deltaTime, luaVM);
  element->layoutCached = element->canCacheLayout;
}

/*
==============
LUIElement_ScaleFullscreenStretchAnchorToRoot
==============
*/
void LUIElement_ScaleFullscreenStretchAnchorToRoot(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *CurrentRoot; 
  LUIElement *v9; 
  LUIElement *firstChild; 
  bool v11; 

  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  v9 = CurrentRoot;
  if ( element->currentAnimationState.position.x.anchors[0] == 0.0 && element->currentAnimationState.position.x.anchors[1] == 0.0 )
  {
    element->currentAnimationState.position.x.global[0] = CurrentRoot->currentAnimationState.position.x.global[0];
    element->currentAnimationState.position.x.global[1] = CurrentRoot->currentAnimationState.position.x.global[1];
  }
  else
  {
    LUI_CalculateGlobalPosition(&element->parent->currentAnimationState.position.x, &element->currentAnimationState.position.x);
  }
  if ( element->currentAnimationState.position.y.anchors[0] == 0.0 && element->currentAnimationState.position.y.anchors[1] == 0.0 )
  {
    element->currentAnimationState.position.y.global[0] = v9->currentAnimationState.position.y.global[0];
    element->currentAnimationState.position.y.global[1] = v9->currentAnimationState.position.y.global[1];
  }
  else
  {
    LUI_CalculateGlobalPosition(&element->parent->currentAnimationState.position.y, &element->currentAnimationState.position.y);
  }
  LUIElement_SetDimensions(element, unitScale);
  firstChild = element->firstChild;
  element->layoutDeeplyCached = element->canCacheLayout;
  v11 = element->layoutDeeplyCached & LUIElement_LayoutChildren(localClientNum, firstChild, unitScale, deltaTime, luaVM) & ~(unsigned __int8)((unsigned int)element->usageFlags >> 1);
  element->layoutCached = element->canCacheLayout;
  element->layoutDeeplyCached = v11;
}

/*
==============
LUIElement_ScreenshotRender
==============
*/
void LUIElement_ScreenshotRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha)
{
  ;
}

/*
==============
LUIElement_Setup3SliceHorizontal
==============
*/
void LUIElement_Setup3SliceHorizontal(lua_State *luaVM, LUIElement *element)
{
  __int128 v7; 

  element->renderFunction = LUIElement_UI3SliceHorizontalImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si eax, xmm0 }
    element->currentAnimationState.userDataBytes[0] = _EAX;
    *((_QWORD *)&v7 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v7 = j_lua_tonumber(luaVM, 3) * 255.0;
    _XMM1 = v7;
    __asm { vcvttsd2si eax, xmm1 }
    element->currentAnimationState.userDataBytes[1] = _EAX;
  }
}

/*
==============
LUIElement_Setup3SliceHorizontalMirror
==============
*/
void LUIElement_Setup3SliceHorizontalMirror(lua_State *luaVM, LUIElement *element)
{
  __int128 v7; 

  element->renderFunction = LUIElement_UI3SliceHorizontalMirrorImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si eax, xmm0 }
    element->currentAnimationState.userDataBytes[0] = _EAX;
    *((_QWORD *)&v7 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v7 = j_lua_tonumber(luaVM, 3) * 255.0;
    _XMM1 = v7;
    __asm { vcvttsd2si eax, xmm1 }
    element->currentAnimationState.userDataBytes[1] = _EAX;
  }
}

/*
==============
LUIElement_Setup3SliceVertical
==============
*/
void LUIElement_Setup3SliceVertical(lua_State *luaVM, LUIElement *element)
{
  __int128 v7; 

  element->renderFunction = LUIElement_UI3SliceVerticalImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si eax, xmm0 }
    element->currentAnimationState.userDataBytes[0] = _EAX;
    *((_QWORD *)&v7 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v7 = j_lua_tonumber(luaVM, 3) * 255.0;
    _XMM1 = v7;
    __asm { vcvttsd2si eax, xmm1 }
    element->currentAnimationState.userDataBytes[1] = _EAX;
  }
}

/*
==============
LUIElement_Setup9Slice
==============
*/
void LUIElement_Setup9Slice(lua_State *luaVM, LUIElement *element)
{
  double v7; 
  __int128 v9; 

  element->renderFunction = LUIElement_UI9SliceImageRender;
  if ( j_lua_gettop(luaVM) == 5 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
    if ( *(float *)&_XMM8 > 255.0 || *(float *)&_XMM7 > 255.0 )
    {
      v7 = I_fclamp(*(float *)&_XMM8, 0.0, 255.0);
      LODWORD(_XMM8) = LODWORD(v7);
      *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&_XMM7 + 1);
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM7, 0.0, 255.0);
      LODWORD(_XMM7) = _XMM0;
      Com_PrintWarning(13, "WARNING: 9slicing is used with a value greater than 382 pixels and will be clamped! Things might not look as desired!\n");
    }
    element->currentAnimationState.userDataBytes[0] = (int)*(float *)&_XMM8;
    element->currentAnimationState.userDataBytes[1] = (int)*(float *)&_XMM7;
    *((_QWORD *)&v9 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v9 = j_lua_tonumber(luaVM, 4) * 255.0;
    _XMM0 = v9;
    __asm { vcvttsd2si eax, xmm0 }
    element->currentAnimationState.userDataBytes[2] = _EAX;
    *(double *)&v9 = j_lua_tonumber(luaVM, 5) * 255.0;
    _XMM1 = v9;
    __asm { vcvttsd2si eax, xmm1 }
    element->currentAnimationState.userDataBytes[3] = _EAX;
  }
}

/*
==============
LUIElement_SubtitlesRender
==============
*/
void LUIElement_SubtitlesRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha)
{
  __int64 v4; 
  float right; 
  float top; 
  float bottom; 
  const ScreenPlacement *ActivePlacement; 
  __int128 v10; 
  float scale; 
  int vertAlign; 
  LocalClientNum_t data; 
  float x; 
  float y; 
  float w; 
  float h; 
  __int16 v19; 
  __int128 v20; 
  const GfxImage *image; 
  float v22; 
  int alignment; 

  v4 = localClientNum;
  data = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    vertAlign = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, vertAlign) )
      __debugbreak();
  }
  if ( !clientUIActives[v4].frontEndSceneState[0] && clientUIActives[v4].cgameInitialized && !UI_AnyCinematicSubtitlesVisible((LocalClientNum_t)v4) )
  {
    right = element->right;
    top = element->top;
    bottom = element->bottom;
    x = element->left;
    h = bottom - top;
    y = top;
    w = right - x;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v4);
    ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &h, 6, 6);
    v10 = *(_OWORD *)&element->currentAnimationState.red;
    v19 = 3340;
    v20 = v10;
    if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2324, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
      __debugbreak();
    scale = element->currentAnimationState.scale;
    image = element->imageData.image;
    alignment = element->currentAnimationState.alignment;
    v22 = scale;
    LUI_QuadCache_AddDrawListCommandInternal((const LocalClientNum_t)v4, (void (__fastcall *)(const void *))LUIElement_SubtitlesRenderImmediate, &data, 0x38ui64, 8ui64);
  }
}

/*
==============
LUIElement_SubtitlesRenderImmediate
==============
*/
void LUIElement_SubtitlesRenderImmediate(const LUISubtitlesRenderData *data)
{
  Con_DrawGameMessageWindow(data->localClientNum, 2, (int)data->rect.x, (int)data->rect.y, data->rect.horzAlign, data->rect.vertAlign, data->font, data->scale, &data->color, 3, data->textAlign, MWM_BOTTOMUP_ALIGN_BOTTOM);
}

/*
==============
LUIElement_UI3SliceHorizontalImageRender
==============
*/
void LUIElement_UI3SliceHorizontalImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  float v9; 
  double CurrentUnitScale; 
  unsigned __int8 v13; 
  __int128 right_low; 
  float v17; 
  float v18; 
  vec4_t v19; 

  v9 = FLOAT_0_33333334;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v13 = element->currentAnimationState.userDataBytes[0];
  if ( v13 )
  {
    *(float *)&_XMM3 = (float)v13 * *(float *)&CurrentUnitScale;
    v9 = (float)element->currentAnimationState.userDataBytes[1] * 0.0039215689;
  }
  else
  {
    right_low = LODWORD(element->right);
    *(float *)&right_low = (float)(element->right - element->left) * 0.33333334;
    _XMM3 = right_low;
    __asm { vminss  xmm3, xmm3, xmm1 }
  }
  v17 = element->currentAnimationState.green;
  v18 = element->currentAnimationState.blue;
  v19.v[0] = element->currentAnimationState.red;
  v19.v[1] = v17;
  v19.v[2] = v18;
  v19.v[3] = alpha;
  LUIElement_UI3SliceHorizontalImageRender_Internal(localClientNum, element, &v19, *(float *)&_XMM3, 0.0, v9, 1.0 - v9, 1.0, luaVM);
}

/*
==============
LUIElement_UI3SliceHorizontalImageRender_Internal
==============
*/
void LUIElement_UI3SliceHorizontalImageRender_Internal(const LocalClientNum_t localClientNum, LUIElement *element, const vec4_t *colorLinearSrgb, float edgeWidth, float uMin, float firstSlice, float secondSlice, float uMax, lua_State *luaVM)
{
  float top; 
  vec4_t color; 
  vec4_t verts[4]; 

  top = element->top;
  color = *colorLinearSrgb;
  LUI_CoD_GenerateQuadVerts(element->left, top, element->left + edgeWidth, element->bottom, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, uMin, 0.0, firstSlice, 1.0, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(edgeWidth + element->left, element->top, element->right - edgeWidth, element->bottom, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, firstSlice, 0.0, secondSlice, 1.0, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(element->right - edgeWidth, element->top, element->right, element->bottom, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, secondSlice, 0.0, uMax, 1.0, &color, element->imageData.image);
}

/*
==============
LUIElement_UI3SliceHorizontalMirrorImageRender
==============
*/
void LUIElement_UI3SliceHorizontalMirrorImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  float v9; 
  double CurrentUnitScale; 
  unsigned __int8 v13; 
  __int128 right_low; 
  float v17; 
  float v18; 
  vec4_t v19; 

  v9 = FLOAT_0_33333334;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v13 = element->currentAnimationState.userDataBytes[0];
  if ( v13 )
  {
    *(float *)&_XMM3 = (float)v13 * *(float *)&CurrentUnitScale;
    v9 = (float)element->currentAnimationState.userDataBytes[1] * 0.0039215689;
  }
  else
  {
    right_low = LODWORD(element->right);
    *(float *)&right_low = (float)(element->right - element->left) * 0.33333334;
    _XMM3 = right_low;
    __asm { vminss  xmm3, xmm3, xmm1 }
  }
  v17 = element->currentAnimationState.green;
  v18 = element->currentAnimationState.blue;
  v19.v[0] = element->currentAnimationState.red;
  v19.v[1] = v17;
  v19.v[2] = v18;
  v19.v[3] = alpha;
  LUIElement_UI3SliceHorizontalImageRender_Internal(localClientNum, element, &v19, *(float *)&_XMM3, 1.0, 1.0 - v9, v9, 0.0, luaVM);
}

/*
==============
LUIElement_UI3SliceVerticalImageRender
==============
*/
void LUIElement_UI3SliceVerticalImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  float v9; 
  int height; 
  double CurrentUnitScale; 
  unsigned __int8 v14; 
  float right; 
  float left; 
  const GfxImage *image; 
  __int128 v19; 
  float v21; 
  float top; 
  vec4_t color; 
  vec4_t verts[4]; 

  v9 = FLOAT_0_33333334;
  height = 0;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v14 = element->currentAnimationState.userDataBytes[0];
  if ( v14 )
  {
    right = element->right;
    left = element->left;
    *(float *)&_XMM10 = (float)v14 * *(float *)&CurrentUnitScale;
    v9 = (float)element->currentAnimationState.userDataBytes[1] * 0.0039215689;
  }
  else
  {
    image = element->imageData.image;
    if ( image )
      height = image->height;
    right = element->right;
    left = element->left;
    v19 = 0i64;
    *(float *)&v19 = (float)((float)height * *(float *)&CurrentUnitScale) * 0.33333334;
    _XMM3 = v19;
    __asm { vminss  xmm10, xmm3, xmm0 }
  }
  v21 = element->currentAnimationState.green;
  color.v[0] = element->currentAnimationState.red;
  color.v[2] = element->currentAnimationState.blue;
  top = element->top;
  color.v[1] = v21;
  color.v[3] = alpha;
  LUI_CoD_GenerateQuadVerts(left, top, right, top + *(float *)&_XMM10, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, v9, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(element->left, *(float *)&_XMM10 + element->top, element->right, element->bottom - *(float *)&_XMM10, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, v9, 1.0, 1.0 - v9, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(element->left, element->bottom - *(float *)&_XMM10, element->right, element->bottom, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 1.0 - v9, 1.0, 1.0, &color, element->imageData.image);
}

/*
==============
LUIElement_UI9SliceImageRender
==============
*/
void LUIElement_UI9SliceImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  float v8; 
  unsigned int width; 
  float v10; 
  unsigned int height; 
  double CurrentUnitScale; 
  unsigned __int8 v16; 
  float top; 
  float left; 
  const GfxImage *image; 
  __int128 right_low; 
  __int128 bottom_low; 
  float v26; 
  vec4_t color; 
  vec4_t verts[4]; 

  v8 = FLOAT_0_33333334;
  width = 0;
  v10 = FLOAT_0_33333334;
  height = 0;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v16 = element->currentAnimationState.userDataBytes[0];
  if ( v16 )
  {
    top = element->top;
    left = element->left;
    *(float *)&_XMM11 = (float)v16 * *(float *)&CurrentUnitScale;
    *(float *)&_XMM12 = (float)element->currentAnimationState.userDataBytes[1] * *(float *)&CurrentUnitScale;
    v8 = (float)element->currentAnimationState.userDataBytes[2] * 0.0039215689;
    v10 = (float)element->currentAnimationState.userDataBytes[3] * 0.0039215689;
  }
  else
  {
    image = element->imageData.image;
    if ( image )
    {
      height = image->height;
      width = image->width;
    }
    left = element->left;
    top = element->top;
    right_low = LODWORD(element->right);
    *(float *)&right_low = (float)(element->right - left) * 0.33333334;
    _XMM3 = right_low;
    _mm_cvtepi32_ps((__m128i)width);
    __asm { vminss  xmm11, xmm3, xmm1 }
    bottom_low = LODWORD(element->bottom);
    *(float *)&bottom_low = (float)(element->bottom - top) * 0.33333334;
    _XMM3 = bottom_low;
    _mm_cvtepi32_ps((__m128i)height);
    __asm { vminss  xmm12, xmm3, xmm1 }
  }
  v26 = element->currentAnimationState.green;
  color.v[0] = element->currentAnimationState.red;
  color.v[2] = element->currentAnimationState.blue;
  color.v[1] = v26;
  color.v[3] = alpha;
  LUI_CoD_GenerateQuadVerts(left, top, left + *(float *)&_XMM11, top + *(float *)&_XMM12, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, v8, v10, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM11 + element->left, element->top, element->right - *(float *)&_XMM11, element->top + *(float *)&_XMM12, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, v8, 0.0, 1.0 - v8, v10, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(element->right - *(float *)&_XMM11, element->top, element->right, element->top + *(float *)&_XMM12, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 1.0 - v8, 0.0, 1.0, v10, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(element->left, *(float *)&_XMM12 + element->top, element->left + *(float *)&_XMM11, element->bottom - *(float *)&_XMM12, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, v10, v8, 1.0 - v10, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM11 + element->left, *(float *)&_XMM12 + element->top, element->right - *(float *)&_XMM11, element->bottom - *(float *)&_XMM12, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, v8, v10, 1.0 - v8, 1.0 - v10, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(element->right - *(float *)&_XMM11, *(float *)&_XMM12 + element->top, element->right, element->bottom - *(float *)&_XMM12, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 1.0 - v8, v10, 1.0, 1.0 - v10, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(element->left, element->bottom - *(float *)&_XMM12, element->left + *(float *)&_XMM11, element->bottom, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 1.0 - v10, v8, 1.0, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM11 + element->left, element->bottom - *(float *)&_XMM12, element->right - *(float *)&_XMM11, element->bottom, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, v8, 1.0 - v10, 1.0 - v8, 1.0, &color, element->imageData.image);
  LUI_CoD_GenerateQuadVerts(element->right - *(float *)&_XMM11, element->bottom - *(float *)&_XMM12, element->right, element->bottom, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 1.0 - v8, 1.0 - v10, 1.0, 1.0, &color, element->imageData.image);
}

/*
==============
LUIElement_UICountdownLayout
==============
*/
void LUIElement_UICountdownLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  int *customElementData; 
  int v8; 
  int v9; 
  int v10; 
  const char *customFormat; 
  bool v12; 
  int userDataInt; 
  int ServerTime; 
  int v15; 
  int timeValue; 
  const char *v17; 
  int v18; 
  const char *v19; 
  const char *v20; 
  LUIElement *firstChild; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  bool v28; 
  bool v29; 
  LUICountdownCustomFormatType customFormatType; 
  int replaceInts[2]; 
  int v33; 
  char outBuffer[1024]; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (int *)element->customElementData;
  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1349, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_getfield(luaVM, -1, "m_frozen");
  v8 = j_lua_toboolean(luaVM, -1);
  v29 = v8 != 0;
  j_lua_settop(luaVM, -2);
  v9 = 0;
  if ( v8 )
  {
    j_lua_getfield(luaVM, -1, "m_timeWhenFrozen");
    if ( j_lua_type(luaVM, -1) && j_lua_isnumber(luaVM, -1) )
      v9 = j_lua_tointeger(luaVM, -1);
    j_lua_settop(luaVM, -2);
  }
  j_lua_getfield(luaVM, -1, "m_useLocalizedCountdownFormat");
  v28 = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_timeToStart1SecEvents");
  *(_QWORD *)replaceInts = j_lua_tointeger(luaVM, -1);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_customEventThreshold");
  v10 = j_lua_tointeger(luaVM, -1);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_customFormatType");
  customFormatType = (unsigned int)j_lua_tointeger(luaVM, -1);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_customFormat");
  customFormat = j_lua_tolstring(luaVM, -1, NULL);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_endTimeWasSet");
  v12 = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  j_lua_pushboolean(luaVM, 0);
  j_lua_setfield(luaVM, -2, "m_endTimeWasSet");
  j_lua_settop(luaVM, -2);
  if ( !element->firstChild || v29 && !v12 )
    goto LABEL_63;
  userDataInt = element->currentAnimationState.userDataInt;
  if ( !userDataInt )
    userDataInt = Game_GetGameEndTime(localClientNum);
  if ( LUI_CoD_InFrontend() )
  {
    ServerTime = Sys_Milliseconds();
  }
  else
  {
    if ( v9 )
      goto LABEL_22;
    ServerTime = Game_GetServerTime(localClientNum);
  }
  v9 = ServerTime;
LABEL_22:
  v15 = userDataInt - v9;
  if ( v15 <= 0 )
  {
    if ( element->timeValue && LUI_BeginEventWithElement(localClientNum, element, "timeout", luaVM) )
      LUI_EndEventWithElement(luaVM);
    if ( v28 )
    {
      *(_QWORD *)replaceInts = 0i64;
      v33 = 0;
      if ( customFormatType )
      {
        switch ( customFormatType )
        {
          case LUI_COUNTDOWN_FORMAT_HRMINSEC:
          case LUI_COUNTDOWN_FORMAT_DAYHRMIN:
            v19 = UI_SafeTranslateString(customFormat);
            v20 = UI_ReplaceConversionInts(v19, 3, replaceInts);
            firstChild = element->firstChild;
            v22 = v20;
            goto LABEL_61;
          case LUI_COUNTDOWN_FORMAT_MINSEC:
          case LUI_COUNTDOWN_FORMAT_SECMSEC:
            v23 = customFormat;
            goto LABEL_56;
          case LUI_COUNTDOWN_FORMAT_SEC:
          case LUI_COUNTDOWN_FORMAT_MSEC:
            v26 = UI_SafeTranslateString(customFormat);
            v27 = UI_ReplaceConversionInts(v26, 1, replaceInts);
            firstChild = element->firstChild;
            v22 = v27;
            goto LABEL_61;
          default:
            goto LABEL_62;
        }
        goto LABEL_62;
      }
      v23 = "LUA_MENU_MP/COUNTDOWN";
LABEL_56:
      v24 = UI_SafeTranslateString(v23);
      v25 = UI_ReplaceConversionInts(v24, 2, replaceInts);
      firstChild = element->firstChild;
      v22 = v25;
    }
    else
    {
      v22 = "0:00.0";
      firstChild = element->firstChild;
      if ( customElementData[1] <= 0 )
        v22 = "0:00";
    }
LABEL_61:
    LUI_LUIElement_SetText(firstChild, v22, luaVM);
LABEL_62:
    element->timeValue = 0;
    *customElementData = 0;
LABEL_63:
    v18 = deltaTime;
    goto LABEL_64;
  }
  if ( v10 > -1 && element->timeValue >= v10 && v15 <= v10 && LUI_BeginEventWithElement(localClientNum, element, "customThresholdReached", luaVM) )
    LUI_EndEventWithElement(luaVM);
  timeValue = element->timeValue;
  if ( timeValue < 30000 || v15 > 30000 )
  {
    if ( timeValue < 10000 || v15 > 10000 )
    {
      if ( timeValue >= v15 || !LUI_BeginEventWithElement(localClientNum, element, "timeReset", luaVM) )
        goto LABEL_40;
      LUI_SetTableInt("timeValue", v15, LUI_luaVM);
      goto LABEL_39;
    }
    v17 = "time10sec";
  }
  else
  {
    v17 = "time30sec";
  }
  if ( LUI_BeginEventWithElement(localClientNum, element, v17, luaVM) )
LABEL_39:
    LUI_EndEventWithElement(luaVM);
LABEL_40:
  if ( *customElementData > 1000 )
  {
    if ( (element->timeValue <= replaceInts[0] || replaceInts[0] == -1) && LUI_BeginEventWithElement(localClientNum, element, "time1secElapsed", luaVM) )
    {
      LUI_SetTableInt("timeValue", v15, LUI_luaVM);
      LUI_EndEventWithElement(luaVM);
    }
    for ( ; *customElementData > 1000; *customElementData -= 1000 )
      ;
  }
  LUI_CoD_FormatDuration(v15, 0x400ui64, outBuffer, v28, customElementData[1], customFormatType, customFormat);
  LUI_LUIElement_SetText(element->firstChild, outBuffer, luaVM);
  v18 = deltaTime;
  element->timeValue = v15;
  *customElementData += deltaTime;
LABEL_64:
  LUIElement_DefaultLayout(localClientNum, element, unitScale, v18, luaVM);
}

/*
==============
LUIElement_UIImageRender
==============
*/
void LUIElement_UIImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 107, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  LUI_Render_ImageFill(localClientNum, element, red, green, blue, alpha, element->imageData.image, luaVM);
}

/*
==============
LUIElement_UILetterboxLayout
==============
*/
void LUIElement_UILetterboxLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 

  if ( !element->layoutCached )
  {
    if ( LUI_CoD_UsingSplitscreenUpscaling() )
    {
      v9 = FLOAT_N216_0;
      v10 = FLOAT_216_0;
      v11 = FLOAT_N384_0;
      v12 = FLOAT_384_0;
    }
    else
    {
      v9 = FLOAT_N360_0;
      v10 = FLOAT_360_0;
      v11 = FLOAT_N640_0;
      v12 = FLOAT_640_0;
    }
    if ( vidConfig.windowAspectRatio <= 1.7777778 )
      v13 = (float)(vidConfig.windowAspectRatio * 0.5625) - 1.0;
    else
      v13 = 0.0;
    element->currentAnimationState.scale = v13;
    element->currentAnimationState.position.x.offsets[0] = v11;
    element->currentAnimationState.position.x.offsets[1] = v12;
    element->currentAnimationState.position.y.offsets[0] = v9;
    element->currentAnimationState.position.y.offsets[1] = v10;
    element->currentAnimationState.position.y.anchors[0] = 0.5;
    element->currentAnimationState.position.y.anchors[1] = 0.5;
    element->currentAnimationState.position.x.anchors[0] = 0.5;
    element->currentAnimationState.position.x.anchors[1] = 0.5;
  }
  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUIElement_UILetterboxRender
==============
*/
void LUIElement_UILetterboxRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  float v10; 
  float displayWidth; 
  float displayHeight; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  vec4_t color; 
  vec4_t verts[4]; 

  if ( (element->usageFlags & 0x400) == 0 )
  {
    v10 = 1.0 / (float)(element->currentAnimationState.scale + 1.0);
    displayWidth = (float)vidConfig.displayWidth;
    displayHeight = (float)vidConfig.displayHeight;
    color = (vec4_t)_xmm;
    v13 = (float)(v10 * displayHeight) - displayHeight;
    v14 = v10 * displayWidth;
    if ( vidConfig.windowAspectRatio <= 1.7777778 )
    {
      v16 = (float)((float)(v10 * displayWidth) - displayWidth) * -0.5;
      LUI_CoD_GenerateQuadVerts(v16, 0.0, v14, v13 * -0.5, (vec4_t (*)[4])verts);
      LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
      LUI_CoD_GenerateQuadVerts(v16, (float)(v10 * displayHeight) - v13, v14, v10 * displayHeight, (vec4_t (*)[4])verts);
    }
    else
    {
      LUI_CoD_GenerateQuadVerts(0.0, 0.0, (float)(displayWidth * 0.5) - (float)(displayHeight * 0.8888889), displayHeight, (vec4_t (*)[4])verts);
      LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
      v15 = (float)vidConfig.displayWidth;
      LUI_CoD_GenerateQuadVerts((float)(v15 * 0.5) + (float)(displayHeight * 0.8888889), 0.0, v15, displayHeight, (vec4_t (*)[4])verts);
    }
    LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
  }
}

/*
==============
LUIElement_UILongCountdownLayout
==============
*/
void LUIElement_UILongCountdownLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  unsigned int userDataInt; 
  bool v9; 
  const char *v10; 
  unsigned int UTC; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v15; 
  const char *v16; 
  const char *v17; 
  char *v18; 
  char *fmt; 
  int replaceInts[4]; 
  char dest[128]; 

  userDataInt = element->currentAnimationState.userDataInt;
  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1614, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_getfield(luaVM, -1, "m_useLocalizedCountdownFormat");
  v9 = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_localizedFormatString");
  v10 = j_lua_tolstring(luaVM, -1, NULL);
  j_lua_settop(luaVM, -2);
  if ( userDataInt && (UTC = LiveStorage_GetUTC(), UTC < userDataInt) )
  {
    v12 = userDataInt - UTC;
    v13 = v12 / 0x15180;
    v14 = v12 % 0x15180 / 0xE10;
    v15 = v12 % 0xE10;
    if ( v9 )
    {
      replaceInts[0] = v13;
      replaceInts[1] = v14;
      replaceInts[2] = v15 / 0x3C;
      v16 = UI_SafeTranslateString(v10);
      v17 = UI_ReplaceConversionInts(v16, 3, replaceInts);
      Core_strcpy(dest, 0x80ui64, v17);
    }
    else
    {
      LODWORD(fmt) = v15 / 0x3C;
      Com_sprintf<128>((char (*)[128])dest, "%02u:%02u:%02u", v13, v14, fmt);
    }
    v18 = dest;
  }
  else
  {
    v18 = "00:00:00";
  }
  LUI_LUIElement_SetText(element->firstChild, v18, luaVM);
  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUIElement_UITechyDigitsLayout
==============
*/
void LUIElement_UITechyDigitsLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  lua_State *v5; 
  LUIElement *v6; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  char *v12; 
  int ServerTime; 
  int v14; 
  int v15; 
  bool v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v26; 
  char *fmt; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 

  v5 = luaVM;
  v6 = element;
  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1870, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v6, luaVM);
  j_lua_getfield(luaVM, -1, "digits");
  v8 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -2, "longWait");
  v9 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -3, "m_shortWait");
  v33 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -4, "m_pulsesDone");
  v31 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -5, "m_pulsesTotal");
  v34 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -6, "m_lastUpdated");
  v32 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -7, "minValue");
  v10 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -8, "maxValue");
  v11 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -9, "m_techyData");
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1889, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  v12 = (char *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -11);
  if ( (v6->currentAnimationState.flags & 0x10) != 0 )
    ServerTime = Game_GetServerTime(localClientNum);
  else
    ServerTime = Sys_Milliseconds();
  v14 = ServerTime;
  v15 = ServerTime - v32;
  if ( v15 > v9 || v31 > 0 && v15 > v33 )
  {
    if ( (int)v8 >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1907, ASSERT_TYPE_ASSERT, "(digits < 256)", (const char *)&queryFormat, "digits < LUI_TECHY_DIGITS_TEXT_LEN") )
      __debugbreak();
    v16 = v11 <= v10;
    if ( v11 < v10 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1908, ASSERT_TYPE_ASSERT, "(maxValue >= minValue)", (const char *)&queryFormat, "maxValue >= minValue") )
        __debugbreak();
      v16 = v11 <= v10;
    }
    if ( v16 )
    {
      v17 = 9;
      v18 = v8;
      if ( (int)v8 < 9 )
        v17 = v8;
      v19 = (int)powf_0(10.0, (float)(v17 - 1));
      v20 = 10 * v19;
      Com_sprintf(v12, 0x100ui64, (const char *)&queryFormat, &stru_1440115A4);
      if ( (int)v8 > 0 )
      {
        do
        {
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1842, ASSERT_TYPE_ASSERT, "(techyData)", (const char *)&queryFormat, "techyData") )
            __debugbreak();
          v21 = v19 + rand() % v20;
          if ( v21 >= v20 )
            v21 += -9 * v19;
          v22 = 9;
          LODWORD(v30) = v21;
          if ( v18 < 9 )
            v22 = v18;
          LODWORD(fmt) = v22;
          Com_sprintf(v12, 0x100ui64, "%s%0*d", v12, fmt, v30);
          v18 -= 9;
        }
        while ( v18 > 0 );
        v5 = luaVM;
        v6 = element;
      }
      v12[v8 + 1] = 0;
    }
    else
    {
      LODWORD(v30) = v10 + rand() % (v11 - v10);
      Com_sprintf(v12, 0x100ui64, "%s%0*d", (const char *)&stru_1440115A4, v8, v30);
    }
    if ( !LUI_ElementHasWeakTableEntry(v6, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1935, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v6, v5);
    LUI_SetTableNumber("m_lastUpdated", (float)v14, v5);
    LUI_SetTableNumber("m_pulsesDone", (float)((v31 + 1) % v34), v5);
    j_lua_settop(v5, -2);
    if ( !((v31 + 1) % v34) )
    {
      LUI_PutElementOnTopOfStack(v6, v5);
      j_lua_getfield(v5, -1, "pulsesMin");
      v23 = lui_tointeger32(v5, -1);
      j_lua_getfield(v5, -2, "pulsesMax");
      lui_tointeger32(v5, -1);
      j_lua_settop(v5, -3);
      I_random();
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm1, 1 }
      LUI_SetTableNumber("m_pulsesTotal", (float)(v23 + (int)*(float *)&_XMM4), v5);
      j_lua_settop(v5, -2);
    }
    LUI_PutElementOnTopOfStack(v6, v5);
    j_lua_getfield(v5, -1, "shortWaitMin");
    v26 = lui_tointeger32(v5, -1);
    j_lua_getfield(v5, -2, "shortWaitMax");
    lui_tointeger32(v5, -1);
    j_lua_settop(v5, -3);
    I_random();
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm1, 1 }
    LUI_SetTableNumber("m_shortWait", (float)(v26 + (int)*(float *)&_XMM4), v5);
    j_lua_settop(v5, -2);
  }
  LUIElement_DefaultLayout(localClientNum, v6, unitScale, deltaTime, v5);
}

/*
==============
LUIElement_UITechyDigitsRender
==============
*/
void LUIElement_UITechyDigitsRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  const char *text; 
  float v12; 

  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1984, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_getfield(luaVM, -1, "m_techyData");
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1987, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  text = (const char *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -3);
  v12 = element->right - element->left;
  if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1996, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  LUI_Interface_DrawText(localClientNum, root, element, element->left, element->bottom, red, green, blue, alpha, text, element->textData.font, element->bottom - element->top, v12, 0, 0, element->currentAnimationState.alignment, NULL, NULL, NULL, luaVM);
}

/*
==============
LUIElement_UITextRender
==============
*/
void LUIElement_UITextRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  LUISharedTextRefIndex v11; 
  const char *v12; 
  float v13; 
  const char *text; 
  double CurrentUnitScale; 

  if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 162, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  v11 = *(unsigned __int16 *)element->textData.textRef;
  if ( (_WORD)v11 != INVALID_INDEX )
  {
    LUI_SharedTextRef_PushRefOnStack(luaVM, v11);
    if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 166, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
      __debugbreak();
    v12 = j_lua_tolstring(luaVM, -1, NULL);
    v13 = element->right - element->left;
    text = v12;
    CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
    LUI_Interface_DrawText(localClientNum, root, element, element->left, element->bottom, red, green, blue, alpha, text, element->textData.font, element->bottom - element->top, v13, (int)(float)((float)(*(float *)&CurrentUnitScale * element->imageData.vMin) + 0.5), (int)(float)((float)(*(float *)&CurrentUnitScale * element->imageData.vMax) + 0.5), element->currentAnimationState.alignment, NULL, NULL, NULL, luaVM);
    j_lua_settop(luaVM, -2);
  }
}

/*
==============
LUIElement_WorldBlurLayout
==============
*/
void LUIElement_WorldBlurLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  const LUIElement *CurrentRoot; 
  LUIRootData *RootData; 
  const dvar_t *v12; 

  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  if ( !CurrentRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1197, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  RootData = LUI_GetRootData(CurrentRoot);
  if ( !RootData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1200, ASSERT_TYPE_ASSERT, "(rootData)", (const char *)&queryFormat, "rootData") )
    __debugbreak();
  _XMM0 = (unsigned int)element->currentAnimationState.userDataInt;
  __asm { vmaxss  xmm1, xmm0, dword ptr [rbx+0E4h] }
  RootData->worldBlurRadius = *(float *)&_XMM1;
  v12 = DVARBOOL_lui_world_blur_fullscreen_layout_safety;
  if ( !DVARBOOL_lui_world_blur_fullscreen_layout_safety && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_world_blur_fullscreen_layout_safety") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
    LUIElement_ScaleFullscreenStretchAnchorToRoot(localClientNum, element, unitScale, deltaTime, luaVM);
  else
    LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUI_ComputeWorldOffset
==============
*/
void LUI_ComputeWorldOffset(const LocalClientNum_t localClientNum, int entityNum, const tmat33_t<vec3_t> *tagTransform, const vec3_t *tagOffset, const vec3_t *entityOffset, const vec3_t *worldOffset, vec3_t *outOffset)
{
  char v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  centity_t *Entity; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  tmat33_t<vec3_t> axis; 

  if ( entityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1057, ASSERT_TYPE_ASSERT, "(entityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
    __debugbreak();
  v11 = 0;
  *(_QWORD *)outOffset->v = 0i64;
  outOffset->v[2] = 0.0;
  v12 = tagOffset->v[0];
  if ( tagOffset->v[0] != 0.0 || tagOffset->v[1] != 0.0 || tagOffset->v[2] != 0.0 )
    v11 = 1;
  v13 = 0.0;
  v14 = 0.0;
  v15 = 0.0;
  if ( v11 )
  {
    v16 = v12 * tagTransform->m[0].v[0];
    outOffset->v[0] = v16;
    v17 = v12 * tagTransform->m[0].v[1];
    outOffset->v[1] = v17;
    v18 = v12 * tagTransform->m[0].v[2];
    outOffset->v[2] = v18;
    v19 = tagOffset->v[1];
    v20 = (float)(v19 * tagTransform->m[1].v[0]) + v16;
    outOffset->v[0] = v20;
    v21 = (float)(v19 * tagTransform->m[1].v[1]) + v17;
    outOffset->v[1] = v21;
    v22 = (float)(v19 * tagTransform->m[1].v[2]) + v18;
    outOffset->v[2] = v22;
    v23 = tagOffset->v[2];
    v13 = (float)(v23 * tagTransform->m[2].v[0]) + v20;
    outOffset->v[0] = v13;
    v14 = (float)(v23 * tagTransform->m[2].v[1]) + v21;
    outOffset->v[1] = v14;
    v15 = (float)(v23 * tagTransform->m[2].v[2]) + v22;
    outOffset->v[2] = v15;
  }
  if ( entityOffset->v[0] != 0.0 || entityOffset->v[1] != 0.0 || entityOffset->v[2] != 0.0 )
  {
    Entity = CG_GetEntity(localClientNum, entityNum);
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1073, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
      __debugbreak();
    AnglesToAxis(&Entity->pose.angles, &axis);
    v26 = (float)(entityOffset->v[0] * axis.m[0].v[0]) + outOffset->v[0];
    v27 = (float)(entityOffset->v[0] * axis.m[0].v[2]) + outOffset->v[2];
    v28 = (float)(entityOffset->v[0] * axis.m[0].v[1]) + outOffset->v[1];
    outOffset->v[1] = v28;
    outOffset->v[2] = v27;
    outOffset->v[0] = v26;
    v29 = entityOffset->v[1];
    v30 = (float)(v29 * axis.m[1].v[0]) + v26;
    v31 = (float)(v29 * axis.m[1].v[2]) + v27;
    v32 = (float)(v29 * axis.m[1].v[1]) + v28;
    outOffset->v[1] = v32;
    outOffset->v[2] = v31;
    outOffset->v[0] = v30;
    v33 = entityOffset->v[2];
    v34 = v33 * axis.m[2].v[1];
    v13 = (float)(v33 * axis.m[2].v[0]) + v30;
    v15 = (float)(v33 * axis.m[2].v[2]) + v31;
    v14 = v34 + v32;
    outOffset->v[2] = v15;
    outOffset->v[0] = v13;
    outOffset->v[1] = v14;
  }
  outOffset->v[0] = v13 + worldOffset->v[0];
  outOffset->v[1] = v14 + worldOffset->v[1];
  outOffset->v[2] = v15 + worldOffset->v[2];
}

/*
==============
LUI_GetEntityTagPositionAndAxis
==============
*/
char LUI_GetEntityTagPositionAndAxis(const LocalClientNum_t localClientNum, int entityNum, const char *tagName, tmat33_t<vec3_t> *outLocalAxis, vec3_t *outWorldPosition)
{
  __int64 v5; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  const DObj *v11; 
  scr_string_t String; 
  int WorldTagMatrix; 
  int v16; 

  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v16 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v16) )
      __debugbreak();
  }
  if ( clientUIActives[v5].connectionState != CA_ACTIVE )
    return 0;
  if ( entityNum == 2047 )
    return 0;
  Entity = CG_GetEntity((const LocalClientNum_t)v5, entityNum);
  if ( (Entity->flags & 1) == 0 )
    return 0;
  if ( !CG_Entity_CanUseDObj((LocalClientNum_t)v5, entityNum) || (ClientDObj = Com_GetClientDObj(Entity->nextState.number, (LocalClientNum_t)v5), (v11 = ClientDObj) == NULL) || !DObjVerifyNumBones(ClientDObj) || (!tagName || !*tagName || (String = SL_GetString(tagName, 0), WorldTagMatrix = CG_DObjGetWorldTagMatrix(&Entity->pose, v11, String, outLocalAxis, outWorldPosition), SL_RemoveRefToString(String), !WorldTagMatrix)) && !CG_DObjGetWorldTagMatrix(&Entity->pose, v11, scr_const.tag_origin, outLocalAxis, outWorldPosition) )
  {
    CG_GetPoseOrigin(&Entity->pose, outWorldPosition);
    MatrixIdentity33(outLocalAxis);
  }
  return 1;
}

/*
==============
LUI_GetPlayerHandIndexToUseForWidget
==============
*/
__int64 LUI_GetPlayerHandIndexToUseForWidget(const LocalClientNum_t localClientNum, const bool useLeftHandIfAkimbo)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( useLeftHandIfAkimbo )
    return (unsigned int)LocalClientGlobals->predictedPlayerState.weapCommon.lastWeaponHand;
  else
    return 0i64;
}

/*
==============
LUI_GetViewModelBoneTransformData
==============
*/
char LUI_GetViewModelBoneTransformData(const LocalClientNum_t localClientNum, const PlayerHandIndex handIndex, scr_string_t tagName, tmat33_t<vec3_t> *outLocalAxis, dvec3_t *outWorldPosition)
{
  __int64 v5; 
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  const DObj *viewModelDObj; 
  const cpose_t *p_viewModelPose; 
  const DObjAnimMat *LocalTagMatrix; 
  float *v13; 
  __int64 v15; 

  v5 = localClientNum;
  v7 = handIndex;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( !BG_GetCurrentWeaponForPlayer(CgWeaponMap::ms_instance[v5], &LocalClientGlobals->predictedPlayerState)->weaponIdx )
    return 0;
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v15) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  viewModelDObj = LocalClientGlobals->m_weaponHand[v7].viewModelDObj;
  if ( !viewModelDObj || !DObjVerifyNumBones(LocalClientGlobals->m_weaponHand[v7].viewModelDObj) )
    return 0;
  p_viewModelPose = &LocalClientGlobals->viewModelPose;
  if ( !p_viewModelPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 150, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 151, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  LocalTagMatrix = CG_DObjGetLocalTagMatrix(p_viewModelPose, viewModelDObj, tagName);
  v13 = (float *)LocalTagMatrix;
  if ( !LocalTagMatrix )
    return 0;
  LocalConvertQuatToMat(LocalTagMatrix, outLocalAxis);
  outWorldPosition->x = g_activeRefDef->viewOffset.v[0] + v13[4];
  outWorldPosition->y = g_activeRefDef->viewOffset.v[1] + v13[5];
  outWorldPosition->z = g_activeRefDef->viewOffset.v[2] + v13[6];
  return 1;
}

/*
==============
LUI_GetViewModelReticleTransform
==============
*/
char LUI_GetViewModelReticleTransform(const LocalClientNum_t localClientNum, const PlayerHandIndex handIndex, const char *tagName, const bool isLockedToTag, tmat33_t<vec3_t> *outLocalAxis, dvec3_t *outWorldPosition)
{
  scr_string_t String; 
  bool ViewModelBoneTransformData; 
  const dvar_t *v12; 
  float value; 
  cg_t *LocalClientGlobals; 
  float v17; 
  float v20; 
  __int128 v21; 
  float v24; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  vec3_t outOrg; 
  __int64 v34; 

  v34 = -2i64;
  if ( tagName && *tagName )
  {
    String = SL_GetString(tagName, 0);
    ViewModelBoneTransformData = LUI_GetViewModelBoneTransformData(localClientNum, handIndex, String, outLocalAxis, outWorldPosition);
    SL_RemoveRefToString(String);
  }
  else
  {
    ViewModelBoneTransformData = LUI_GetViewModelBoneTransformData(localClientNum, handIndex, scr_const.tag_reticle_attach, outLocalAxis, outWorldPosition);
  }
  if ( !ViewModelBoneTransformData )
    return 0;
  if ( !isLockedToTag )
  {
    v12 = DVARFLT_cg_maxReflexSightDrift;
    if ( !DVARFLT_cg_maxReflexSightDrift && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_maxReflexSightDrift") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    value = v12->current.value;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    _XMM0 = *(unsigned __int64 *)&outWorldPosition->x;
    __asm { vcvtpd2ps xmm0, xmm0 }
    v17 = *(float *)&_XMM0 - outOrg.v[0];
    _XMM1 = *(unsigned __int64 *)&outWorldPosition->y;
    __asm { vcvtpd2ps xmm1, xmm1 }
    v21 = _XMM1;
    v20 = *(float *)&_XMM1 - outOrg.v[1];
    _XMM0 = *(unsigned __int64 *)&outWorldPosition->z;
    __asm { vcvtpd2ps xmm0, xmm0 }
    v24 = *(float *)&_XMM0 - outOrg.v[2];
    *(float *)&v21 = fsqrt((float)((float)(v20 * v20) + (float)(v17 * v17)) + (float)(v24 * v24));
    _XMM1 = v21;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm1, xmm1, xmm2, xmm0
    }
    v28 = v17 * (float)(1.0 / *(float *)&_XMM1);
    *(float *)&v21 = v20 * (float)(1.0 / *(float *)&_XMM1);
    v29 = v24 * (float)(1.0 / *(float *)&_XMM1);
    v30 = outLocalAxis->m[1].v[0];
    LODWORD(v31) = COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v21 * outLocalAxis->m[1].v[1]) + (float)(v28 * v30)) + (float)(v29 * outLocalAxis->m[1].v[2])) * value) ^ _xmm;
    outWorldPosition->x = (float)(v30 * v31) + outWorldPosition->x;
    outWorldPosition->y = (float)(v31 * outLocalAxis->m[1].v[1]) + outWorldPosition->y;
    outWorldPosition->z = (float)(v31 * outLocalAxis->m[1].v[2]) + outWorldPosition->z;
    v32 = outLocalAxis->m[2].v[0];
    *(float *)&v21 = (float)((float)((float)(*(float *)&v21 * outLocalAxis->m[2].v[1]) + (float)(v28 * v32)) + (float)(v29 * outLocalAxis->m[2].v[2])) * value;
    outWorldPosition->x = (float)(v32 * COERCE_FLOAT(v21 ^ _xmm)) + outWorldPosition->x;
    outWorldPosition->y = (float)(COERCE_FLOAT(v21 ^ _xmm) * outLocalAxis->m[2].v[1]) + outWorldPosition->y;
    outWorldPosition->z = (float)(COERCE_FLOAT(v21 ^ _xmm) * outLocalAxis->m[2].v[2]) + outWorldPosition->z;
    memset(&outOrg, 0, sizeof(outOrg));
  }
  return 1;
}

/*
==============
LUI_GetViewModelTransform
==============
*/
bool LUI_GetViewModelTransform(const LocalClientNum_t localClientNum, const PlayerHandIndex handIndex, const char *tagName, tmat33_t<vec3_t> *outLocalAxis, dvec3_t *outWorldPosition)
{
  scr_string_t String; 
  bool ViewModelBoneTransformData; 

  if ( tagName && *tagName )
  {
    String = SL_GetString(tagName, 0);
    ViewModelBoneTransformData = LUI_GetViewModelBoneTransformData(localClientNum, handIndex, String, outLocalAxis, outWorldPosition);
    SL_RemoveRefToString(String);
  }
  else
  {
    return LUI_GetViewModelBoneTransformData(localClientNum, handIndex, scr_const.tag_reticle_attach, outLocalAxis, outWorldPosition);
  }
  return ViewModelBoneTransformData;
}

/*
==============
LUI_LUIElement_RegisterMethods
==============
*/
void LUI_LUIElement_RegisterMethods(LUIElement *element, lua_State *luaVM, const luaL_Reg *methods)
{
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_luaL_register(luaVM, NULL, methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_LUIElement_SetupUIBaseImage
==============
*/
void LUI_LUIElement_SetupUIBaseImage(LUIElement *element, void (*renderFunction)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))
{
  element->renderFunction = renderFunction;
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 127, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  *(_QWORD *)&element->textData.fontSize = 1065353216i64;
  element->imageData.uMin = 0.0;
  element->imageData.vMax = 1.0;
}

/*
==============
LUI_LuaCall_LUIElement_SetIgnoreKeybindBacking
==============
*/
__int64 LUI_LuaCall_LUIElement_SetIgnoreKeybindBacking(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 213, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 214, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 215, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUIElement_IsTextLike(v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 219, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( self ))", (const char *)&queryFormat, "LUIElement_IsTextLike( self )") )
    __debugbreak();
  v3 = j_lua_toboolean(luaVM, 2);
  v4 = v2->currentAnimationState.flags & 0xFFFFFFBF;
  if ( v3 )
    v4 = v2->currentAnimationState.flags | 0x40;
  v2->currentAnimationState.flags = v4;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_Setup3SliceHorizontalImage
==============
*/
__int64 LUI_LuaCall_LUIElement_Setup3SliceHorizontalImage(lua_State *luaVM)
{
  LUIElement *v3; 
  __int128 v6; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 && j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_gettop( luaVM ) == 3");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->renderFunction = LUIElement_UI3SliceHorizontalImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si ecx, xmm0 }
    v3->currentAnimationState.userDataBytes[0] = _ECX;
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v6 = j_lua_tonumber(luaVM, 3) * 255.0;
    _XMM1 = v6;
    __asm { vcvttsd2si eax, xmm1 }
    v3->currentAnimationState.userDataBytes[1] = _EAX;
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
LUI_LuaCall_LUIElement_Setup3SliceHorizontalMirrorImage
==============
*/
__int64 LUI_LuaCall_LUIElement_Setup3SliceHorizontalMirrorImage(lua_State *luaVM)
{
  LUIElement *v3; 
  __int128 v6; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 && j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_gettop( luaVM ) == 3");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->renderFunction = LUIElement_UI3SliceHorizontalMirrorImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si ecx, xmm0 }
    v3->currentAnimationState.userDataBytes[0] = _ECX;
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v6 = j_lua_tonumber(luaVM, 3) * 255.0;
    _XMM1 = v6;
    __asm { vcvttsd2si eax, xmm1 }
    v3->currentAnimationState.userDataBytes[1] = _EAX;
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
LUI_LuaCall_LUIElement_Setup3SliceVerticalImage
==============
*/
__int64 LUI_LuaCall_LUIElement_Setup3SliceVerticalImage(lua_State *luaVM)
{
  LUIElement *v3; 
  __int128 v6; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 && j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_gettop( luaVM ) == 3");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->renderFunction = LUIElement_UI3SliceVerticalImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si ecx, xmm0 }
    v3->currentAnimationState.userDataBytes[0] = _ECX;
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v6 = j_lua_tonumber(luaVM, 3) * 255.0;
    _XMM1 = v6;
    __asm { vcvttsd2si eax, xmm1 }
    v3->currentAnimationState.userDataBytes[1] = _EAX;
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
LUI_LuaCall_LUIElement_Setup9SliceImage
==============
*/
__int64 LUI_LuaCall_LUIElement_Setup9SliceImage(lua_State *luaVM)
{
  LUIElement *v3; 
  double v6; 
  __int128 v8; 
  unsigned int v12; 

  if ( j_lua_gettop(luaVM) != 1 && j_lua_gettop(luaVM) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_gettop( luaVM ) == 5");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->renderFunction = LUIElement_UI9SliceImageRender;
  if ( j_lua_gettop(luaVM) == 5 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
    if ( *(float *)&_XMM8 > 255.0 || *(float *)&_XMM7 > 255.0 )
    {
      v6 = I_fclamp(*(float *)&_XMM8, 0.0, 255.0);
      LODWORD(_XMM8) = LODWORD(v6);
      *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&_XMM7 + 1);
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM7, 0.0, 255.0);
      LODWORD(_XMM7) = _XMM0;
      Com_PrintWarning(13, "WARNING: 9slicing is used with a value greater than 382 pixels and will be clamped! Things might not look as desired!\n");
    }
    v3->currentAnimationState.userDataBytes[0] = (int)*(float *)&_XMM8;
    v3->currentAnimationState.userDataBytes[1] = (int)*(float *)&_XMM7;
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v8 = j_lua_tonumber(luaVM, 4) * 255.0;
    _XMM0 = v8;
    __asm { vcvttsd2si eax, xmm0 }
    v3->currentAnimationState.userDataBytes[2] = _EAX;
    *(double *)&v8 = j_lua_tonumber(luaVM, 5) * 255.0;
    _XMM1 = v8;
    __asm { vcvttsd2si eax, xmm1 }
    v3->currentAnimationState.userDataBytes[3] = _EAX;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v12);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupChatBox
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupChatBox(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( LUI_CoD_InFrontend() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2408, ASSERT_TYPE_ASSERT, "(!LUI_CoD_InFrontend())", (const char *)&queryFormat, "!LUI_CoD_InFrontend()") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_ChatBoxRender;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupCinematicSubtitles
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupCinematicSubtitles(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_CinematicSubtitlesRender;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupDirectionalImage
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupDirectionalImage(lua_State *luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetupDirectionalImage( <stretch> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v2->usageFlags |= 1u;
    LUI_LUIElement_SetupUIBaseImage(v2, LUIElement_DirectionalImageRender);
    v3 = lui_tonumber32(luaVM, 2);
    v2->currentAnimationState.userData = *(float *)&v3;
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
LUI_LuaCall_LUIElement_SetupDynamicCrosshair
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupDynamicCrosshair(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->layoutFunction = LUIElement_DynamicCrosshair_Layout;
  v2->usageFlags |= 3u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupIconImage
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupIconImage(lua_State *luaVM)
{
  LUIElement *v2; 
  _QWORD *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetupIconImage( <iconString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v2, luaVM);
    v3 = j_lua_newuserdata(luaVM, 8ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v2->customElementData = v3;
    *v3 = 0i64;
    v2->usageFlags |= 1u;
    *v3 = j_lua_tolstring(luaVM, 2, NULL);
    LUI_LUIElement_SetupUIBaseImage(v2, LUIElement_IconImage_Render);
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
LUI_LuaCall_LUIElement_SetupLayoutUpdateEvent
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupLayoutUpdateEvent(lua_State *luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  LUI_ToElement(luaVM, 1)->layoutFunction = LUIElement_LayoutUpdateEvent;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupMinimizedInteractiveObjects
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupMinimizedInteractiveObjects(lua_State *luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2592, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS )") )
    __debugbreak();
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetupMinimizedInteractiveObjects( <dotDiameterPx> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v2->usageFlags |= 1u;
    v2->renderFunction = LUIElement_RenderMinimizedInteractiveObjects;
    v3 = lui_tonumber32(luaVM, 2);
    v2->currentAnimationState.userData = *(float *)&v3;
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
LUI_LuaCall_LUIElement_SetupMountHint
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupMountHint(lua_State *luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetupMountHint( <dotDiameterPx> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v2->usageFlags |= 1u;
    v2->renderFunction = LUIElement_RenderMountHint;
    v3 = lui_tonumber32(luaVM, 2);
    v2->currentAnimationState.userData = *(float *)&v3;
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
LUI_LuaCall_LUIElement_SetupObjectiveDistance
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupObjectiveDistance(lua_State *luaVM)
{
  LUIElement *v2; 
  LUIElementUsageFlag usageFlags; 
  unsigned __int16 v4; 
  __int16 v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 3");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 3 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = LUIElement_ObjectiveDistance_Render;
  usageFlags = v2->usageFlags;
  if ( (usageFlags & 0x80u) == 0 )
  {
    v2->usageFlags = usageFlags | 0x80;
    v2->imageData.image = NULL;
    *(_QWORD *)v2->textData.textRef = 0i64;
    *(_QWORD *)&v2->textData.tracking = 0i64;
    *(_WORD *)v2->textData.textRef = -1;
    v2->imageData.image = (const GfxImage *)LUI_DefaultFont;
  }
  v4 = j_lua_tointeger(luaVM, 2);
  v5 = j_lua_tointeger(luaVM, 3);
  v2->currentAnimationState.dataSource = v4;
  v2->currentAnimationState.userDataShorts[1] = v5;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupScreenshotViewer
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScreenshotViewer(lua_State *luaVM)
{
  LUI_ToElement(luaVM, 1)->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_ScreenshotRender;
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_scaleStretchAnchorToRoot
==============
*/
__int64 LUI_LuaCall_LUIElement_scaleStretchAnchorToRoot(lua_State *luaVM)
{
  unsigned int v2; 

  LUI_ToElement(luaVM, 1)->layoutFunction = LUIElement_ScaleFullscreenStretchAnchorToRoot;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setFlashFade
==============
*/
__int64 LUI_LuaCall_LUIElement_setFlashFade(lua_State *luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  LUI_ToElement(luaVM, 1)->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_FlashFadeRender;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setHudElemLayer
==============
*/
__int64 LUI_LuaCall_LUIElement_setHudElemLayer(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_HudElemLayerRender;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setupLetterboxElement
==============
*/
__int64 LUI_LuaCall_LUIElement_setupLetterboxElement(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 400, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1 || lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 401, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  v2->layoutFunction = LUIElement_UILetterboxLayout;
  v2->renderFunction = LUIElement_UILetterboxRender;
  if ( j_lua_type(luaVM, 2) == 1 && j_lua_toboolean(luaVM, 2) )
    v2->usageFlags |= 0x400u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setupOwnerdraw
==============
*/
__int64 LUI_LuaCall_LUIElement_setupOwnerdraw(lua_State *luaVM)
{
  LUIElement *v2; 
  LUIElementUsageFlag usageFlags; 
  char v4; 
  double v5; 
  int v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) > 4 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) <= 4");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = LUIElement_OwnerdrawRender;
  usageFlags = v2->usageFlags;
  if ( (usageFlags & 0x80u) == 0 )
  {
    v2->usageFlags = usageFlags | 0x80;
    v2->imageData.image = NULL;
    *(_QWORD *)v2->textData.textRef = 0i64;
    *(_QWORD *)&v2->textData.tracking = 0i64;
    *(_WORD *)v2->textData.textRef = -1;
    v2->imageData.image = (const GfxImage *)LUI_DefaultFont;
  }
  if ( j_lua_gettop(luaVM) >= 2 && j_lua_isnumber(luaVM, 2) )
    v2->currentAnimationState.dataSource = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_isnumber(luaVM, 3) )
  {
    j_lua_pushvalue(luaVM, 3);
    j_lua_setfield(luaVM, 1, "m_ownerDrawTextScale");
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v2->currentAnimationState.userDataBytes[2] = v4;
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isnumber(luaVM, 4) )
  {
    v5 = lui_tonumber32(luaVM, 4);
    v6 = (int)*(float *)&v5;
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  v2->currentAnimationState.userDataBytes[3] = v6;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setupScaleFullscreen
==============
*/
__int64 LUI_LuaCall_LUIElement_setupScaleFullscreen(lua_State *luaVM)
{
  unsigned int v2; 

  LUI_ToElement(luaVM, 1)->layoutFunction = LUIElement_ScaleFullscreenLayout;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setupSubtitles
==============
*/
__int64 LUI_LuaCall_LUIElement_setupSubtitles(lua_State *luaVM)
{
  LUIElement *v2; 
  LUIElementUsageFlag usageFlags; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_SubtitlesRender;
  usageFlags = v2->usageFlags;
  if ( (usageFlags & 0x80u) == 0 )
  {
    v2->usageFlags = usageFlags | 0x80;
    v2->imageData.image = NULL;
    *(_QWORD *)v2->textData.textRef = 0i64;
    *(_QWORD *)&v2->textData.tracking = 0i64;
    *(_WORD *)v2->textData.textRef = -1;
    v2->imageData.image = (const GfxImage *)LUI_DefaultFont;
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
LUI_LuaCall_LUIElement_setupTechyDigits
==============
*/

__int64 __fastcall LUI_LuaCall_LUIElement_setupTechyDigits(lua_State *luaVM, double _XMM1_8)
{
  LUIElement *v3; 
  int v4; 
  void *v7; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  v4 = v3->usageFlags | 3;
  v3->usageFlags = v4;
  v3->renderFunction = LUIElement_UITechyDigitsRender;
  v3->layoutFunction = LUIElement_UITechyDigitsLayout;
  if ( (v4 & 0x80) == 0 )
  {
    v3->usageFlags = v4 | 0x80;
    v3->imageData.image = NULL;
    *(_QWORD *)v3->textData.textRef = 0i64;
    *(_QWORD *)&v3->textData.tracking = 0i64;
    *(_WORD *)v3->textData.textRef = -1;
    v3->imageData.image = (const GfxImage *)LUI_DefaultFont;
  }
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2038, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( self, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( self, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v3, luaVM);
  __asm { vxorpd  xmm1, xmm1, xmm1; value }
  LUI_SetTableNumber("m_lastUpdated", *(long double *)&_XMM1, luaVM);
  __asm { vxorpd  xmm1, xmm1, xmm1; value }
  LUI_SetTableNumber("m_shortWait", *(long double *)&_XMM1, luaVM);
  LUI_SetTableNumber("m_pulsesDone", -1.0, luaVM);
  LUI_SetTableNumber("m_pulsesTotal", 1.0, luaVM);
  v7 = j_lua_newuserdata(luaVM, 0x100ui64);
  memset_0(v7, 0, 0x100ui64);
  j_lua_setfield(luaVM, -2, "m_techyData");
  j_lua_settop(luaVM, -2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setupTextValueIntTween
==============
*/
__int64 LUI_LuaCall_LUIElement_setupTextValueIntTween(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_setupTextValueIntTween_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_setupTextValueIntTween_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_setupTextValueIntTween_impl(lua_State *const luaVM)
{
  int v3; 
  char v6; 
  const char *v8; 
  LUIElement *v9; 
  LUIElement *v10; 
  _QWORD *customElementData; 
  signed __int64 v12; 
  char v13; 
  int v14; 
  char v15; 

  v3 = j_lua_gettop(luaVM);
  if ( v3 < 4 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "numParams >= 4");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 3 )");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 4 )");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si r15d, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
  __asm { vcvttsd2si r12d, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 4);
  v6 = 0;
  __asm { vcvttsd2si r13d, xmm0 }
  if ( j_lua_gettop(luaVM) >= 5 )
    v6 = j_lua_tointeger(luaVM, 5);
  v8 = (char *)&queryFormat.fmt + 3;
  if ( v3 == 6 )
  {
    if ( !j_lua_isstring(luaVM, 6) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, 6 )");
    v8 = j_lua_tolstring(luaVM, 6, NULL);
    if ( !v8 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "stringReference != NULL");
  }
  v9 = LUI_ToElement(luaVM, 1);
  v10 = v9;
  customElementData = v9->customElementData;
  if ( !customElementData )
  {
    if ( !LUI_ElementHasWeakTableEntry(v9, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v10, luaVM);
    customElementData = j_lua_newuserdata(luaVM, 0x28ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v10->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v10->customElementData = customElementData;
    *customElementData = 0i64;
    customElementData[1] = 0i64;
    customElementData[2] = 0i64;
    customElementData[3] = 0i64;
    customElementData[4] = 0i64;
  }
  *(_DWORD *)customElementData = _ER13;
  *((_DWORD *)customElementData + 1) = _ER15;
  *((_DWORD *)customElementData + 2) = _ER12;
  *((_BYTE *)customElementData + 16) = v6;
  *((_DWORD *)customElementData + 3) = 0;
  v12 = (char *)customElementData - v8;
  do
  {
    v13 = *v8;
    v8[v12 + 17] = *v8;
    ++v8;
  }
  while ( v13 );
  v10->layoutFunction = LUIElement_UpdateTextTweenLayout;
  v10->renderFunction = LUIElement_UITextRender;
  v14 = v10->usageFlags | 2;
  v15 = LOBYTE(v10->usageFlags) | 2;
  v10->usageFlags = v14;
  if ( (v15 & 0x80) == 0 )
  {
    v10->usageFlags = v14 | 0x80;
    v10->imageData.image = NULL;
    *(_QWORD *)v10->textData.textRef = 0i64;
    *(_QWORD *)&v10->textData.tracking = 0i64;
    *(_WORD *)v10->textData.textRef = -1;
    v10->imageData.image = (const GfxImage *)LUI_DefaultFont;
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setupUICountdown
==============
*/
__int64 LUI_LuaCall_LUIElement_setupUICountdown(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_setupUICountdown_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_setupUICountdown_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_setupUICountdown_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  char v4; 
  int v5; 
  bool v6; 
  LUICountdown *CustomElement; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) > 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) <= 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->renderFunction = LUIElement_UITextRender;
  v2->layoutFunction = LUIElement_UICountdownLayout;
  v3 = v2->usageFlags | 2;
  v4 = LOBYTE(v2->usageFlags) | 2;
  v2->usageFlags = v3;
  if ( (v4 & 0x80) == 0 )
  {
    v2->usageFlags = v3 | 0x80;
    v2->imageData.image = NULL;
    *(_QWORD *)v2->textData.textRef = 0i64;
    *(_QWORD *)&v2->textData.tracking = 0i64;
    *(_WORD *)v2->textData.textRef = -1;
    v2->imageData.image = (const GfxImage *)LUI_DefaultFont;
  }
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( !j_lua_isnumber(luaVM, 2) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
    v5 = lui_tointeger32(luaVM, 2);
  }
  else
  {
    v5 = 0;
  }
  v2->currentAnimationState.userDataInt = v5;
  v6 = v2->customElementData == NULL;
  v2->timeValue = 0;
  if ( v6 )
  {
    if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v2, luaVM);
    CustomElement = (LUICountdown *)j_lua_newuserdata(luaVM, 8ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v2->customElementData = CustomElement;
  }
  else
  {
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUICountdown>(v2, luaVM);
  }
  result = 0i64;
  CustomElement->oneSecondIntervalTrackedTime = 0;
  CustomElement->showDecimalsAtTime = 30;
  return result;
}

/*
==============
LUI_LuaCall_LUIElement_setupUIImage
==============
*/
__int64 LUI_LuaCall_LUIElement_setupUIImage(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 137, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 138, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  v2->renderFunction = LUIElement_UIImageRender;
  if ( !LUIElement_IsImageLike(v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 127, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  *(_QWORD *)&v2->textData.fontSize = 1065353216i64;
  v2->imageData.uMin = 0.0;
  v2->imageData.vMax = 1.0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setupUILongCountdown
==============
*/
__int64 LUI_LuaCall_LUIElement_setupUILongCountdown(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) > 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) <= 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->renderFunction = LUIElement_UITextRender;
  v2->layoutFunction = LUIElement_UILongCountdownLayout;
  v3 = v2->usageFlags | 2;
  v2->usageFlags = v3;
  if ( (v3 & 0x80u) == 0 )
  {
    v2->usageFlags = v3 | 0x80;
    v2->imageData.image = NULL;
    *(_QWORD *)v2->textData.textRef = 0i64;
    *(_QWORD *)&v2->textData.tracking = 0i64;
    *(_WORD *)v2->textData.textRef = -1;
    v2->imageData.image = (const GfxImage *)LUI_DefaultFont;
  }
  v2->currentAnimationState.userDataInt = 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setupUIText
==============
*/
__int64 LUI_LuaCall_LUIElement_setupUIText(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 189, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 190, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  v2->renderFunction = LUIElement_UITextRender;
  v3 = v2->usageFlags | 0x100;
  v2->usageFlags = v3;
  if ( (v3 & 0x80u) == 0 )
  {
    v2->usageFlags = v3 | 0x80;
    v2->imageData.image = NULL;
    *(_QWORD *)v2->textData.textRef = 0i64;
    *(_QWORD *)&v2->textData.tracking = 0i64;
    *(_WORD *)v2->textData.textRef = -1;
    v2->imageData.image = (const GfxImage *)LUI_DefaultFont;
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
LUI_LuaCall_LUIElement_setupWorldBlur
==============
*/
__int64 LUI_LuaCall_LUIElement_setupWorldBlur(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  v2 = LUI_ToElement(luaVM, 1);
  v2->layoutFunction = LUIElement_WorldBlurLayout;
  v2->usageFlags |= 2u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

