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

void __fastcall LUIElement_DirectionalImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  char v23; 
  bool IsImageLike; 
  bool v36; 
  float fmt; 
  float alphaa; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+0D8h+var_68], xmm10 }
  _RBX = element;
  __asm { vmovaps xmm10, xmm3 }
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  if ( _RAX->nextSnap )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+49FFCh]
      vmovaps [rsp+0D8h+var_38], xmm6
      vmovaps [rsp+0D8h+var_48], xmm7
      vsubss  xmm7, xmm0, dword ptr [rax+178C4h]
      vmovaps [rsp+0D8h+var_58], xmm9
      vmovss  xmm9, dword ptr [rbx+48h]
    }
    AnglesToAxis(&_RAX->refdefViewAngles, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+axis+20h]
      vmovss  xmm6, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    if ( v23 )
    {
      __asm
      {
        vmulss  xmm0, xmm7, cs:__real@3b360b61
        vaddss  xmm5, xmm0, xmm6
        vaddss  xmm2, xmm5, xmm6
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vsubss  xmm1, xmm5, xmm4
        vmulss  xmm7, xmm1, cs:__real@43b40000
      }
    }
    __asm
    {
      vmulss  xmm1, xmm7, cs:__real@3b360b61
      vmulss  xmm0, xmm9, xmm6
      vsubss  xmm6, xmm1, xmm0
      vaddss  xmm7, xmm0, xmm1
    }
    IsImageLike = LUIElement_IsImageLike(_RBX);
    __asm { vmovaps xmm9, [rsp+0D8h+var_58] }
    if ( !IsImageLike && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1105, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    __asm
    {
      vmovss  dword ptr [rbx+118h], xmm6
      vmovss  dword ptr [rbx+11Ch], xmm7
    }
    v36 = LUIElement_IsImageLike(_RBX);
    __asm
    {
      vmovaps xmm7, [rsp+0D8h+var_48]
      vmovaps xmm6, [rsp+0D8h+var_38]
    }
    if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1109, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, [rsp+0D8h+blue]
      vmovss  xmm3, [rsp+0D8h+green]; green
      vmovss  xmm2, [rsp+0D8h+red]; red
      vmovss  [rsp+0D8h+alpha], xmm10
      vmovss  dword ptr [rsp+0D8h+fmt], xmm0
    }
    LUI_Render_ImageFill(localClientNum, _RBX, *(float *)&_XMM2, *(float *)&_XMM3, fmt, alphaa, _RBX->imageData.image, luaVM);
  }
  __asm { vmovaps xmm10, [rsp+0D8h+var_68] }
}

/*
==============
LUIElement_DynamicCrosshair_Layout
==============
*/

void __fastcall LUIElement_DynamicCrosshair_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  const dvar_t *v12; 
  cg_t *LocalClientGlobals; 
  LUIElement *i; 
  int v28; 
  float x; 
  float y; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v35; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmm6, xmm2
  }
  _RDI = element;
  if ( (element->currentAnimationState.flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2722, ASSERT_TYPE_ASSERT, "(element->currentAnimationState.flags & ( 1 << 0 ))", (const char *)&queryFormat, "element->currentAnimationState.flags & LUI_ANIMSTATE_INITIALIZED") )
    __debugbreak();
  v12 = DVARBOOL_cg_crosshairDynamic;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+168h+x], xmm7
    vmovss  [rsp+168h+y], xmm7
  }
  if ( !DVARBOOL_cg_crosshairDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairDynamic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    _RAX = ScrPlace_GetActivePlacement(localClientNum);
    __asm
    {
      vmovss  xmm2, dword ptr [rax+24h]; screenHeight
      vmovss  xmm1, dword ptr [rax+20h]; screenWidth
    }
    CG_CalcCrosshairPosition(LocalClientGlobals, *(const float *)&_XMM1, *(const float *)&_XMM2, &x, &y);
    AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &axis);
    MatrixTranspose(&axis, &out);
    AnglesToAxis(&LocalClientGlobals->gunAnglesExtrapolated, &in1);
    MatrixMultiply(&in1, &out, &v35);
    AxisToAngles(&v35, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+168h+angles+8]
      vxorps  xmm7, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  [rsp+168h+var_128], xmm7
    }
    if ( (v28 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2749, ASSERT_TYPE_ASSERT, "(!IS_NAN( roll ))", (const char *)&queryFormat, "!IS_NAN( roll )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm2, xmm0, xmm6
    vmulss  xmm1, xmm2, [rsp+168h+x]
    vmulss  xmm0, xmm2, [rsp+168h+y]
    vmovss  dword ptr [rdi], xmm1
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  dword ptr [rdi+18h], xmm0
    vmovss  dword ptr [rdi+1Ch], xmm0
  }
  _RDI->currentAnimationState.position.x.anchors[0] = 0.5;
  _RDI->currentAnimationState.position.x.anchors[1] = 0.5;
  _RDI->currentAnimationState.position.y.anchors[0] = 0.5;
  _RDI->currentAnimationState.position.y.anchors[1] = 0.5;
  __asm
  {
    vmovaps xmm1, xmm6; unitScale
    vmovss  dword ptr [rdi+30h], xmm7
  }
  _RDI->layoutCached = 0;
  LUIElement_UpdateLayout(_RDI, *(float *)&_XMM1, deltaTime, luaVM);
  for ( i = _RDI->firstChild; i; i = i->nextSibling )
  {
    __asm { vmovaps xmm2, xmm6; unitScale }
    LUIElement_Layout(localClientNum, i, *(float *)&_XMM2, deltaTime, luaVM);
  }
  __asm
  {
    vmovaps xmm6, [rsp+168h+var_48]
    vmovaps xmm7, [rsp+168h+var_58]
  }
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
  rectDef_s *v5; 
  const LUIElement *v6; 
  float *h; 
  const ScreenPlacement *ActivePlacement; 

  v5 = rect;
  v6 = element;
  if ( rect )
  {
    rect->x = element->left;
    rect->y = element->top;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+0D4h]
      vsubss  xmm1, xmm0, dword ptr [rdx+0CCh]
      vmovss  dword ptr [r8+8], xmm1
      vmovss  xmm0, dword ptr [rdx+0D8h]
      vsubss  xmm1, xmm0, dword ptr [rdx+0D0h]
    }
    h = &rect->h;
    __asm { vmovss  dword ptr [rbx], xmm1 }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    ScrPlace_ApplyRect(ActivePlacement, &v5->x, &v5->y, &v5->w, h, 6, 6);
    *(_WORD *)&v5->horzAlign = 3340;
  }
  color->v[0] = v6->currentAnimationState.red;
  color->v[1] = v6->currentAnimationState.green;
  color->v[2] = v6->currentAnimationState.blue;
  color->v[3] = v6->currentAnimationState.alpha;
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

void __fastcall LUIElement_IconImage_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  const char *String; 
  float fmt; 
  float alphaa; 
  char outIconName[64]; 

  __asm
  {
    vmovaps [rsp+0B8h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  String = SEH_StringEd_GetString(*(const char **)element->customElementData);
  if ( FontIcons_GetIconNameForDirective(localClientNum, String, 0x40ui64, outIconName) )
  {
    element->imageData.image = Image_Register(outIconName, IMAGE_TRACK_UI);
    if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1161, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, [rsp+0B8h+blue]
      vmovss  xmm3, [rsp+0B8h+green]; green
      vmovss  xmm2, [rsp+0B8h+red]; red
      vmovss  [rsp+0B8h+alpha], xmm6
      vmovss  dword ptr [rsp+0B8h+fmt], xmm0
    }
    LUI_Render_ImageFill(localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmt, alphaa, element->imageData.image, luaVM);
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_28] }
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

void __fastcall LUIElement_LayoutUpdateEvent(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *firstChild; 
  bool v14; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm1, xmm2; unitScale
    vmovaps xmm6, xmm2
  }
  LUIElement_UpdateLayout(element, *(float *)&_XMM1, deltaTime, luaVM);
  if ( LUI_BeginEventWithElement(localClientNum, element, "self_layout_updated", luaVM) )
    LUI_EndEventWithElement(luaVM);
  firstChild = element->firstChild;
  __asm { vmovaps xmm2, xmm6; unitScale }
  element->layoutDeeplyCached = element->canCacheLayout;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  v14 = element->layoutDeeplyCached & LUIElement_LayoutChildren(localClientNum, firstChild, *(float *)&_XMM2, deltaTime, luaVM) & ~(unsigned __int8)((unsigned int)element->usageFlags >> 1);
  element->layoutCached = element->canCacheLayout;
  element->layoutDeeplyCached = v14;
}

/*
==============
LUIElement_ObjectiveDistance_Render
==============
*/

void __fastcall LUIElement_ObjectiveDistance_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  playerState_s *p_predictedPlayerState; 
  __int64 v17; 
  __int16 v18; 
  unsigned __int8 v19; 
  int v20; 
  unsigned __int8 v21; 
  CalloutMarkerPingPool v22; 
  const CalloutMarkerPingView *View; 
  unsigned __int8 v24; 
  const ObjectiveSettings *v25; 
  int v32; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  float fmt; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  vec3_t out_origin; 
  vec3_t outWorldOrigin; 
  FontGlowStyle fontGlowStyle; 
  char result[128]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmm7, xmm3
  }
  _RSI = element;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  v17 = _RSI->currentAnimationState.userDataShorts[0];
  v18 = _RSI->currentAnimationState.userDataShorts[1];
  if ( (int)v17 < 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2088, "objectiveIndex >= 0") )
    __debugbreak();
  if ( v18 < 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2089, "locationIndex >= 0") )
    __debugbreak();
  if ( v18 >= 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2090, "locationIndex < 8") )
    __debugbreak();
  v19 = ScriptableCl_ObjectivePeak(localClientNum);
  v20 = v19 + 32;
  if ( (int)v17 >= v19 + 85 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2095, "objectiveIndex < ( numObjectivesAndScriptableObjectives + CG_CALLOUTMARKERPING_VIEW_INDEX_MAX )") )
    __debugbreak();
  if ( (int)v17 < v20 )
  {
    if ( (int)v17 < 32 )
    {
      _RDI = (__int64)p_predictedPlayerState->objectives[v17].entNum;
      if ( (*(_BYTE *)(_RDI + 156) & 4) == 0 )
        goto LABEL_34;
      v32 = *(_DWORD *)(_RDI + 4i64 * v18);
      if ( v32 == 2047 )
      {
        _RAX = 3i64 * v18;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+rax*4+20h]
          vmovss  dword ptr [rbp+0E0h+outWorldOrigin], xmm0
          vmovss  xmm1, dword ptr [rdi+rax*4+24h]
          vmovss  dword ptr [rbp+0E0h+outWorldOrigin+4], xmm1
          vmovss  xmm0, dword ptr [rdi+rax*4+28h]
          vmovss  dword ptr [rbp+0E0h+outWorldOrigin+8], xmm0
        }
      }
      else
      {
        Entity = CG_GetEntity(localClientNum, v32);
        if ( !Entity || (Entity->flags & 1) == 0 )
        {
LABEL_33:
          memset(&out_origin, 0, sizeof(out_origin));
          goto LABEL_34;
        }
        CG_GetPoseOrigin(&Entity->pose, &out_origin);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0E0h+out_origin]
          vmovss  dword ptr [rbp+0E0h+outWorldOrigin], xmm0
          vmovss  xmm1, dword ptr [rbp+0E0h+out_origin+4]
          vmovss  dword ptr [rbp+0E0h+outWorldOrigin+4], xmm1
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, dword ptr [rdi+84h]
          vaddss  xmm1, xmm2, dword ptr [rbp+0E0h+out_origin+8]
          vmovss  dword ptr [rbp+0E0h+outWorldOrigin+8], xmm1
        }
        memset(&out_origin, 0, sizeof(out_origin));
      }
    }
    else
    {
      v24 = v17 - 32;
      if ( v24 >= ScriptableCl_ObjectiveCount(localClientNum) )
        goto LABEL_34;
      v25 = ScriptableCl_ObjectiveGet(localClientNum, v24, &out_origin);
      if ( !v25 || (v25->flags[0] & 4) == 0 )
        goto LABEL_34;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0E0h+out_origin]
        vmovss  dword ptr [rbp+0E0h+outWorldOrigin], xmm0
        vmovss  xmm1, dword ptr [rbp+0E0h+out_origin+4]
        vmovss  dword ptr [rbp+0E0h+outWorldOrigin+4], xmm1
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, dword ptr [rax+4]
        vaddss  xmm1, xmm2, dword ptr [rbp+0E0h+out_origin+8]
        vmovss  dword ptr [rbp+0E0h+outWorldOrigin+8], xmm1
      }
    }
LABEL_29:
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &out_origin);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0E0h+out_origin]
      vsubss  xmm3, xmm0, dword ptr [rbp+0E0h+outWorldOrigin]
      vmovss  xmm1, dword ptr [rbp+0E0h+out_origin+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+0E0h+outWorldOrigin+4]
      vmovss  xmm0, dword ptr [rbp+0E0h+out_origin+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+0E0h+outWorldOrigin+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vmulss  xmm0, xmm1, cs:__real@3cd013a9; distance
    }
    CG_BuildCompassDistanceString(*(float *)&_XMM0, result, 128);
    *(_QWORD *)&fontGlowStyle.glowMaxDistance = 0i64;
    fontGlowStyle.glowUVOffset.v[1] = 0.0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+0E0h+var_130.outlineGlowMinDistance], xmm0
    }
    *(_QWORD *)&fontGlowStyle.outlineGlowColor.xyz.z = 0i64;
    __asm
    {
      vmovss  xmm1, cs:__real@be99999a
      vmovss  [rbp+0E0h+var_130.glowMinDistance], xmm1
      vmovups xmm0, cs:__xmm@3f8000003e99999a3e99999a3e99999a
      vmovups xmmword ptr [rbp+0E0h+var_130.glowColor], xmm0
      vmovss  xmm1, dword ptr [rsi+0D4h]
      vsubss  xmm6, xmm1, dword ptr [rsi+0CCh]
    }
    if ( !LUIElement_IsTextLike(_RSI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2183, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+0D8h]
      vsubss  xmm0, xmm2, dword ptr [rsi+0D0h]
      vmovss  dword ptr [rsp+200h+var_1A0], xmm6
      vmovss  [rsp+200h+var_1A8], xmm0
      vmovss  dword ptr [rsp+200h+var_1C0], xmm7
      vmovss  xmm0, [rbp+0E0h+blue]
      vmovss  [rsp+200h+var_1C8], xmm0
      vmovss  xmm1, [rbp+0E0h+green]
      vmovss  [rsp+200h+var_1D0], xmm1
      vmovss  xmm0, [rbp+0E0h+red]
      vmovss  [rsp+200h+var_1D8], xmm0
      vmovss  dword ptr [rsp+200h+fmt], xmm2
      vmovss  xmm3, dword ptr [rsi+0CCh]; x
    }
    LUI_Interface_DrawText(localClientNum, root, _RSI, *(float *)&_XMM3, fmt, v71, v72, v73, v74, result, _RSI->textData.font, v75, v76, 0, 0, _RSI->currentAnimationState.alignment, NULL, &fontGlowStyle, NULL, luaVM);
    goto LABEL_33;
  }
  v21 = v17 - v20;
  v22 = CG_CalloutMarkerPing_ViewIndexToPool(localClientNum, v21);
  View = CG_CalloutMarkerPing_GetView(localClientNum, v21, p_predictedPlayerState);
  if ( View->origin.owner && CG_CalloutMarkerPing_GetWorldOrigin(v22, View, localClientNum, &outWorldOrigin) )
    goto LABEL_29;
LABEL_34:
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+200h+var_58+8]
    vmovaps xmm7, [rsp+200h+var_68+8]
  }
}

/*
==============
LUIElement_OwnerdrawRender
==============
*/
void LUIElement_OwnerdrawRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  char alignment; 
  bool v16; 
  bool v20; 
  GfxFont *font; 
  bool v25; 
  signed __int16 v26; 
  __int64 data; 
  int v35; 
  const GfxImage *image; 
  vec4_t color; 
  int v39; 
  int v40; 

  _RBX = element;
  LODWORD(data) = localClientNum;
  if ( (!Sys_IsRenderThread() || !R_IsInRemoteScreenUpdate()) && (LUIElement_IsCGameInitialized(localClientNum) || LUI_CoD_InFrontend()) )
  {
    if ( !LUIElement_IsTextLike(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1741, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )", data) )
      __debugbreak();
    LUIElement_GetCommonParams(localClientNum, _RBX, (rectDef_s *const)((char *)&data + 4), &color);
    alignment = _RBX->currentAnimationState.alignment;
    if ( alignment )
    {
      v40 = alignment;
      if ( alignment == 2 )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@3f000000
          vmulss  xmm2, xmm3, [rbp+37h+rect.w]
          vaddss  xmm2, xmm2, [rbp+37h+rect.x]
          vmulss  xmm3, xmm3, [rbp+37h+rect.h]
          vmovss  [rbp+37h+rect.x], xmm2
          vaddss  xmm2, xmm3, [rbp+37h+rect.y]
          vmovss  [rbp+37h+rect.y], xmm2
        }
      }
    }
    else
    {
      v40 = 0;
    }
    v16 = _RBX->currentAnimationState.userDataBytes[2] == 1;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D8h]
      vsubss  xmm1, xmm0, dword ptr [rbx+0D0h]
      vmulss  xmm2, xmm1, cs:__real@3caaaaab
      vmovss  [rbp+37h+var_40], xmm2
    }
    if ( v16 )
    {
      if ( !LUI_ElementHasWeakTableEntry(_RBX, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1762, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
        __debugbreak();
      LUI_PutElementOnTopOfStack(_RBX, luaVM);
      j_lua_getfield(luaVM, -1, "m_ownerDrawTextScale");
      if ( j_lua_isnumber(luaVM, -1) )
      {
        *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
        __asm { vmovss  [rbp+37h+var_40], xmm0 }
        v20 = LUI_CoD_UsingSplitscreenUpscaling();
        __asm { vmovss  xmm0, [rbp+37h+var_40] }
        if ( v20 )
          __asm { vmulss  xmm1, xmm0, cs:__real@3f8e38e4 }
        else
          __asm { vmulss  xmm1, xmm0, cs:__real@3f2aaaab }
        font = _RBX->textData.font;
        __asm
        {
          vmovss  [rbp+37h+var_40], xmm1
          vmovss  xmm1, cs:__real@3f800000; scale
        }
        R_NormalizedTextScale(font, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, [rbp+37h+var_40]
          vdivss  xmm0, xmm1, xmm0
          vmovss  [rbp+37h+var_40], xmm0
        }
      }
      j_lua_settop(luaVM, -3);
    }
    v25 = LUI_CoD_InFrontend();
    v26 = _RBX->currentAnimationState.userDataShorts[0];
    if ( v25 || v26 == 365 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rbp+37h+var_54], xmm0
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovss  [rbp+37h+var_54], xmm1
      }
    }
    v35 = v26;
    image = _RBX->imageData.image;
    v39 = _RBX->currentAnimationState.userDataBytes[3];
    __asm { vmovss  [rbp+37h+var_58], xmm0 }
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
  int vertAlign; 
  int v7; 
  GfxFont *font; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  int textStyle; 
  int textAlign; 
  rectDef_s v21; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rcx+18h]
  }
  vertAlign = data->rect.vertAlign;
  __asm
  {
    vmovss  xmm3, dword ptr [rcx+0Ch]
    vmovss  xmm2, dword ptr [rcx+8]
  }
  v7 = (unsigned __int8)*(_DWORD *)&data->rect.horzAlign;
  *(_DWORD *)&v21.horzAlign = *(_DWORD *)&data->rect.horzAlign;
  textAlign = data->textAlign;
  textStyle = data->textStyle;
  font = data->font;
  __asm
  {
    vmovups xmmword ptr [r11-28h], xmm0
    vmovss  xmm0, dword ptr [rcx+30h]
    vmovss  [rsp+0C8h+var_58], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0C8h+var_68], xmm0
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmovss  [rsp+0C8h+var_88], xmm0
    vmovss  xmm0, dword ptr [rcx+10h]
    vmovss  [rsp+0C8h+var_90], xmm1
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  [rsp+0C8h+var_A8], xmm0
  }
  UI_OwnerDraw(data->localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v14, v7, vertAlign, v15, v16, data->ownerDraw, 0, 0, v17, font, v18, &data->color, textStyle, &v21, textAlign, NULL);
}

/*
==============
LUIElement_RenderMinimizedInteractiveObjects
==============
*/

void __fastcall LUIElement_RenderMinimizedInteractiveObjects(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v21; 
  cg_t *LocalClientGlobals; 
  __int64 p_predictedPlayerState; 
  int v32; 
  __int64 v33; 
  unsigned __int8 *p_usableData; 
  unsigned __int8 v38; 
  int v40; 
  centity_t *Entity; 
  centity_t *v42; 
  int v44; 
  const char *BoneName; 
  const DObj *ClientDObj; 
  centity_t *v47; 
  const DObj *v48; 
  const DObj *v49; 
  scr_string_t String; 
  int WorldTagMatrix; 
  vec3_t *worldOffset; 
  vec3_t *outOffset; 
  int v73; 
  vec3_t worldPos; 
  vec3_t out_usePosition; 
  int outCount; 
  cg_t *v77; 
  playerState_s *v78; 
  ScreenPlacement *scrPlace; 
  LUIElement *elementa; 
  lua_State *v81; 
  __int64 v82; 
  vec2_t outScreenPos; 
  vec3_t v85; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 
  MinimizedUseTarget outTargets; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  v82 = -2i64;
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
    vmovaps xmm15, xmm3
  }
  _R14 = element;
  elementa = element;
  v21 = localClientNum;
  v81 = luaVM;
  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2439, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS )") )
    __debugbreak();
  if ( !Sys_IsRenderThread() || !R_IsInRemoteScreenUpdate() )
  {
    if ( !LUIElement_IsImageLike(_R14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2449, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)v21);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+48h]
      vmulss  xmm11, xmm0, cs:__real@3f000000
      vmovss  xmm1, [rbp+1D0h+red]
      vmovss  dword ptr [rbp+1D0h+var_218], xmm1
      vmovss  xmm0, [rbp+1D0h+green]
      vmovss  dword ptr [rbp+1D0h+var_218+4], xmm0
      vmovss  xmm1, [rbp+1D0h+blue]
      vmovss  dword ptr [rbp+1D0h+var_218+8], xmm1
      vmovss  dword ptr [rbp+1D0h+var_218+0Ch], xmm15
    }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v21);
    v77 = LocalClientGlobals;
    if ( LocalClientGlobals->nextSnap )
    {
      p_predictedPlayerState = (__int64)&LocalClientGlobals->predictedPlayerState;
      v78 = &LocalClientGlobals->predictedPlayerState;
      CG_GetPlayerViewOrigin((LocalClientNum_t)v21, &LocalClientGlobals->predictedPlayerState, &outOrigin);
      outCount = 0;
      CG_GetMinimizedUseTargets((LocalClientNum_t)v21, &outCount, &outTargets);
      __asm
      {
        vxorps  xmm10, xmm11, cs:__xmm@80000000800000008000000080000000
        vaddss  xmm13, xmm11, dword ptr [rsi+20h]
        vaddss  xmm12, xmm11, dword ptr [rsi+24h]
      }
      v32 = 0;
      v73 = 0;
      if ( outCount > 0 )
      {
        v33 = v21;
        p_usableData = &outTargets.usableData;
        __asm
        {
          vxorps  xmm9, xmm9, xmm9
          vmovss  xmm14, cs:__real@7f7fffff
          vmovss  xmm8, cs:__real@3f800000
        }
        while ( 1 )
        {
          v38 = *(p_usableData - 8);
          if ( *(_BYTE *)(p_predictedPlayerState + 721) == v38 && *(_DWORD *)(p_predictedPlayerState + 716) == *((_DWORD *)p_usableData - 1) && *(_BYTE *)(p_predictedPlayerState + 720) == *p_usableData )
            goto LABEL_55;
          if ( !v38 )
            break;
          if ( v38 == 1 )
          {
            if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v21, *((_DWORD *)p_usableData - 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2528, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, r_useTarget.usableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, r_useTarget.usableIndex )") )
              __debugbreak();
            if ( !ScriptableCl_GetPartIsUsable((const LocalClientNum_t)v21, *((_DWORD *)p_usableData - 1), *p_usableData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2529, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetPartIsUsable( localClientNum, r_useTarget.usableIndex, r_useTarget.usableData ))", (const char *)&queryFormat, "ScriptableCl_GetPartIsUsable( localClientNum, r_useTarget.usableIndex, r_useTarget.usableData )") )
              __debugbreak();
            ScriptableCl_GetPartUsePosition((const LocalClientNum_t)v21, *((_DWORD *)p_usableData - 1), *p_usableData, &out_usePosition);
            __asm
            {
              vmovsd  xmm0, qword ptr [rsp+2D0h+out_usePosition]
              vmovsd  qword ptr [rsp+2D0h+worldPos], xmm0
            }
            worldPos.v[2] = out_usePosition.v[2];
LABEL_52:
            if ( CG_WorldPosToScreenPosReal((LocalClientNum_t)v21, scrPlace, &worldPos, &outScreenPos) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+1D0h+outScreenPos]
                vcomiss xmm0, xmm10
                vmovss  xmm1, dword ptr [rbp+1D0h+outScreenPos+4]
                vcomiss xmm1, xmm10
                vcomiss xmm0, xmm13
              }
            }
            goto LABEL_54;
          }
          LODWORD(worldOffset) = v38;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2539, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected usable class %i", worldOffset) )
            __debugbreak();
LABEL_54:
          memset(&worldPos, 0, sizeof(worldPos));
          memset(&out_usePosition, 0, sizeof(out_usePosition));
          p_predictedPlayerState = (__int64)v78;
LABEL_55:
          v73 = ++v32;
          p_usableData += 20;
          v33 = v21;
          if ( v32 >= outCount )
            goto LABEL_56;
        }
        v40 = *((_DWORD *)p_usableData - 1);
        Entity = CG_GetEntity((const LocalClientNum_t)v21, v40);
        v42 = Entity;
        if ( (!Entity || (Entity->flags & 1) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2498, ASSERT_TYPE_ASSERT, "(cent != 0 && CENextValid( cent ))", (const char *)&queryFormat, "cent != NULL && CENextValid( cent )") )
          __debugbreak();
        CG_GetPoseOrigin(&v42->pose, &out_usePosition);
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+2D0h+out_usePosition]
          vmovsd  qword ptr [rsp+2D0h+worldPos], xmm0
        }
        worldPos.v[2] = out_usePosition.v[2];
        v44 = *((_DWORD *)p_usableData + 1);
        if ( v44 != 255 && v44 != 254 )
        {
          BoneName = NULL;
          ClientDObj = Com_GetClientDObj(v42->nextState.number, (LocalClientNum_t)v21);
          if ( ClientDObj )
          {
            BoneName = DObjGetBoneName(ClientDObj, *((_DWORD *)p_usableData + 1));
            if ( !BoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2513, ASSERT_TYPE_ASSERT, "(tagName)", (const char *)&queryFormat, "tagName") )
              __debugbreak();
          }
          if ( (unsigned int)v21 >= 2 )
          {
            LODWORD(outOffset) = 2;
            LODWORD(worldOffset) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", worldOffset, outOffset) )
              __debugbreak();
          }
          if ( clientUIActives[v33].connectionState == CA_ACTIVE && v40 != 2047 )
          {
            v47 = CG_GetEntity((const LocalClientNum_t)v21, v40);
            if ( (v47->flags & 1) != 0 )
            {
              if ( !CG_Entity_CanUseDObj((LocalClientNum_t)v21, v40) || (v48 = Com_GetClientDObj(v47->nextState.number, (LocalClientNum_t)v21), (v49 = v48) == NULL) || !DObjVerifyNumBones(v48) || (!BoneName || !*BoneName || (String = SL_GetString(BoneName, 0), WorldTagMatrix = CG_DObjGetWorldTagMatrix(&v47->pose, v49, String, &outTagMat, &worldPos), SL_RemoveRefToString(String), !WorldTagMatrix)) && !CG_DObjGetWorldTagMatrix(&v47->pose, v49, scr_const.tag_origin, &outTagMat, &worldPos) )
              {
                CG_GetPoseOrigin(&v47->pose, &worldPos);
                MatrixIdentity33(&outTagMat);
              }
              LUI_ComputeWorldOffset((const LocalClientNum_t)v21, v40, &outTagMat, &vec3_origin, &vec3_origin, &vec3_origin, &v85);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+2D0h+worldPos]
                vaddss  xmm1, xmm0, dword ptr [rbp+1D0h+var_208]
                vmovss  dword ptr [rsp+2D0h+worldPos], xmm1
                vmovss  xmm2, dword ptr [rsp+2D0h+worldPos+4]
                vaddss  xmm0, xmm2, dword ptr [rbp+1D0h+var_208+4]
                vmovss  dword ptr [rsp+2D0h+worldPos+4], xmm0
                vmovss  xmm1, dword ptr [rsp+2D0h+worldPos+8]
                vaddss  xmm2, xmm1, dword ptr [rbp+1D0h+var_208+8]
                vmovss  dword ptr [rsp+2D0h+worldPos+8], xmm2
              }
            }
          }
        }
        v32 = v73;
        goto LABEL_52;
      }
    }
  }
LABEL_56:
  _R11 = &v89;
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
LUIElement_RenderMountHint
==============
*/

void __fastcall LUIElement_RenderMountHint(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha)
{
  const dvar_t *v11; 
  const ScreenPlacement *ActivePlacement; 
  cg_t *LocalClientGlobals; 
  vec2_t outScreenPos; 

  __asm
  {
    vmovaps [rsp+158h+var_98], xmm12
    vmovaps xmm12, xmm3
  }
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
      __asm
      {
        vmovaps [rsp+158h+var_38], xmm6
        vmovaps [rsp+158h+var_78], xmm10
      }
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
      __asm
      {
        vmulss  xmm10, xmm0, dword ptr [rbp+48h]
        vmulss  xmm6, xmm10, cs:__real@3f000000
      }
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( LocalClientGlobals->mountHint.type && CG_WorldPosToScreenPosReal(localClientNum, ActivePlacement, &LocalClientGlobals->mountHint.refinedOrigin, &outScreenPos) )
      {
        __asm
        {
          vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000
          vmovss  xmm2, dword ptr [rsp+158h+outScreenPos]
          vcomiss xmm2, xmm1
          vaddss  xmm4, xmm6, dword ptr [rdi+20h]
          vaddss  xmm3, xmm6, dword ptr [rdi+24h]
          vmovss  xmm0, dword ptr [rsp+158h+outScreenPos+4]
          vcomiss xmm0, xmm1
          vcomiss xmm2, xmm4
        }
      }
      __asm
      {
        vmovaps xmm6, [rsp+158h+var_38]
        vmovaps xmm10, [rsp+158h+var_78]
      }
    }
  }
  __asm { vmovaps xmm12, [rsp+158h+var_98] }
}

/*
==============
LUIElement_ScaleFullscreenLayout
==============
*/

void __fastcall LUIElement_ScaleFullscreenLayout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *CurrentRoot; 
  LUIElement *firstChild; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  __asm { vmovaps xmm1, xmm6; unitScale }
  *(_QWORD *)element->currentAnimationState.position.x.global = *(_QWORD *)CurrentRoot->currentAnimationState.position.x.global;
  *(_QWORD *)element->currentAnimationState.position.y.global = *(_QWORD *)CurrentRoot->currentAnimationState.position.y.global;
  LUIElement_SetDimensions(element, *(float *)&_XMM1);
  firstChild = element->firstChild;
  __asm { vmovaps xmm2, xmm6; unitScale }
  element->layoutDeeplyCached = element->canCacheLayout;
  element->layoutDeeplyCached &= LUIElement_LayoutChildren(localClientNum, firstChild, *(float *)&_XMM2, deltaTime, luaVM);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  element->layoutCached = element->canCacheLayout;
}

/*
==============
LUIElement_ScaleFullscreenStretchAnchorToRoot
==============
*/

void __fastcall LUIElement_ScaleFullscreenStretchAnchorToRoot(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  char v11; 
  LUIElement *CurrentRoot; 
  LUIElement *v14; 
  LUIElement *firstChild; 
  bool v20; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm2
  }
  _RBX = element;
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rbx+10h]
  }
  v14 = CurrentRoot;
  if ( !v11 )
    goto LABEL_4;
  __asm { vucomiss xmm6, dword ptr [rbx+14h] }
  if ( v11 )
  {
    _RBX->currentAnimationState.position.x.global[0] = CurrentRoot->currentAnimationState.position.x.global[0];
    _RBX->currentAnimationState.position.x.global[1] = CurrentRoot->currentAnimationState.position.x.global[1];
  }
  else
  {
LABEL_4:
    LUI_CalculateGlobalPosition(&_RBX->parent->currentAnimationState.position.x, &_RBX->currentAnimationState.position.x);
  }
  __asm { vucomiss xmm6, dword ptr [rbx+28h] }
  if ( !v11 )
    goto LABEL_8;
  __asm { vucomiss xmm6, dword ptr [rbx+2Ch] }
  if ( v11 )
  {
    _RBX->currentAnimationState.position.y.global[0] = v14->currentAnimationState.position.y.global[0];
    _RBX->currentAnimationState.position.y.global[1] = v14->currentAnimationState.position.y.global[1];
  }
  else
  {
LABEL_8:
    LUI_CalculateGlobalPosition(&_RBX->parent->currentAnimationState.position.y, &_RBX->currentAnimationState.position.y);
  }
  __asm { vmovaps xmm1, xmm7; unitScale }
  LUIElement_SetDimensions(_RBX, *(float *)&_XMM1);
  firstChild = _RBX->firstChild;
  __asm { vmovaps xmm2, xmm7; unitScale }
  _RBX->layoutDeeplyCached = _RBX->canCacheLayout;
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  v20 = _RBX->layoutDeeplyCached & LUIElement_LayoutChildren(localClientNum, firstChild, *(float *)&_XMM2, deltaTime, luaVM) & ~(unsigned __int8)((unsigned int)_RBX->usageFlags >> 1);
  _RBX->layoutCached = _RBX->canCacheLayout;
  _RBX->layoutDeeplyCached = v20;
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
  element->renderFunction = LUIElement_UI3SliceHorizontalImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si eax, xmm0 }
    element->currentAnimationState.userDataBytes[0] = _EAX;
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm
    {
      vmulsd  xmm1, xmm0, cs:__real@406fe00000000000
      vcvttsd2si eax, xmm1
    }
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
  element->renderFunction = LUIElement_UI3SliceHorizontalMirrorImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si eax, xmm0 }
    element->currentAnimationState.userDataBytes[0] = _EAX;
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm
    {
      vmulsd  xmm1, xmm0, cs:__real@406fe00000000000
      vcvttsd2si eax, xmm1
    }
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
  element->renderFunction = LUIElement_UI3SliceVerticalImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si eax, xmm0 }
    element->currentAnimationState.userDataBytes[0] = _EAX;
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm
    {
      vmulsd  xmm1, xmm0, cs:__real@406fe00000000000
      vcvttsd2si eax, xmm1
    }
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
  int v9; 
  char v11; 
  char v12; 

  element->renderFunction = LUIElement_UI9SliceImageRender;
  v9 = j_lua_gettop(luaVM);
  if ( v9 == 5 )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vmovaps [rsp+58h+var_28], xmm7
      vmovaps [rsp+58h+var_38], xmm8
    }
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, v9 - 3);
    __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm
    {
      vmovss  xmm6, cs:__real@437f0000
      vcomiss xmm8, xmm6
      vcvtsd2ss xmm7, xmm0, xmm0
    }
    if ( !(v11 | v12) )
      goto LABEL_4;
    __asm { vcomiss xmm7, xmm6 }
    if ( !(v11 | v12) )
    {
LABEL_4:
      __asm
      {
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm0, xmm8; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm8, xmm0
        vmovaps xmm0, xmm7; val
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm7, xmm0 }
      Com_PrintWarning(13, "WARNING: 9slicing is used with a value greater than 382 pixels and will be clamped! Things might not look as desired!\n");
    }
    __asm { vcvttss2si eax, xmm8 }
    element->currentAnimationState.userDataBytes[0] = _EAX;
    __asm { vcvttss2si eax, xmm7 }
    element->currentAnimationState.userDataBytes[1] = _EAX;
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 4);
    __asm
    {
      vmulsd  xmm0, xmm0, cs:__real@406fe00000000000
      vcvttsd2si eax, xmm0
    }
    element->currentAnimationState.userDataBytes[2] = _EAX;
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 5);
    __asm
    {
      vmulsd  xmm1, xmm0, cs:__real@406fe00000000000
      vmovaps xmm8, [rsp+58h+var_38]
      vmovaps xmm7, [rsp+58h+var_28]
      vmovaps xmm6, [rsp+58h+var_18]
      vcvttsd2si eax, xmm1
    }
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
  const ScreenPlacement *ActivePlacement; 
  int vertAlign; 
  LocalClientNum_t data; 
  float x; 
  float y; 
  float w; 
  float h; 
  __int16 v22; 
  const GfxImage *image; 
  int alignment; 

  v4 = localClientNum;
  _RDI = element;
  data = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    vertAlign = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, vertAlign) )
      __debugbreak();
  }
  if ( !clientUIActives[v4].frontEndSceneState[0] && clientUIActives[v4].cgameInitialized && !UI_AnyCinematicSubtitlesVisible((LocalClientNum_t)v4) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+0CCh]
      vmovss  xmm0, dword ptr [rdi+0D4h]
      vmovss  xmm3, dword ptr [rdi+0D0h]
      vmovss  xmm2, dword ptr [rdi+0D8h]
      vmovss  [rsp+88h+x], xmm1
      vsubss  xmm1, xmm0, xmm1
      vsubss  xmm0, xmm2, xmm3
      vmovss  [rsp+88h+h], xmm0
      vmovss  [rsp+88h+y], xmm3
      vmovss  [rsp+88h+w], xmm1
    }
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v4);
    ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &h, 6, 6);
    __asm { vmovups xmm0, xmmword ptr [rdi+38h] }
    v22 = 3340;
    __asm { vmovups [rsp+88h+var_30], xmm0 }
    if ( !LUIElement_IsTextLike(_RDI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2324, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rdi+34h] }
    image = _RDI->imageData.image;
    alignment = _RDI->currentAnimationState.alignment;
    __asm { vmovss  [rsp+88h+var_18], xmm0 }
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
  float v4; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+30h]
    vcvttss2si r9d, dword ptr [rcx+8]; yPos
    vcvttss2si r8d, dword ptr [rcx+4]; xPos
    vmovss  [rsp+68h+var_30], xmm0
  }
  Con_DrawGameMessageWindow(data->localClientNum, 2, _ER8, _ER9, data->rect.horzAlign, data->rect.vertAlign, data->font, v4, &data->color, 3, data->textAlign, MWM_BOTTOMUP_ALIGN_BOTTOM);
}

/*
==============
LUIElement_UI3SliceHorizontalImageRender
==============
*/

void __fastcall LUIElement_UI3SliceHorizontalImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  vec4_t v42; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RBX = element;
  __asm
  {
    vmovss  xmm6, cs:__real@3eaaaaab
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps xmm7, xmm3
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm { vmovaps xmm4, xmm0 }
  if ( _RBX->currentAnimationState.userDataBytes[0] )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm3, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, cs:__real@3b808081
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D4h]
      vsubss  xmm1, xmm0, dword ptr [rbx+0CCh]
      vmulss  xmm3, xmm1, xmm6
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, edi
      vmulss  xmm0, xmm2, xmm4
      vmulss  xmm1, xmm0, xmm6
      vminss  xmm3, xmm3, xmm1
    }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+3Ch]
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  xmm2, dword ptr [rbx+40h]
    vmovss  [rsp+88h+var_38], xmm0
    vmovss  [rsp+88h+var_34], xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmovss  [rsp+88h+var_50], xmm1
    vsubss  xmm0, xmm1, xmm6
    vmovss  [rsp+88h+var_58], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+88h+var_60], xmm6
    vmovss  [rsp+88h+var_68], xmm0
    vmovss  [rsp+88h+var_30], xmm2
    vmovss  [rsp+88h+var_2C], xmm7
  }
  LUIElement_UI3SliceHorizontalImageRender_Internal(localClientNum, _RBX, &v42, *(float *)&_XMM3, v38, v39, v40, v41, luaVM);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

/*
==============
LUIElement_UI3SliceHorizontalImageRender_Internal
==============
*/

void __fastcall LUIElement_UI3SliceHorizontalImageRender_Internal(const LocalClientNum_t localClientNum, LUIElement *element, const vec4_t *colorLinearSrgb, double edgeWidth, float uMin, float firstSlice, float secondSlice, float uMax, lua_State *luaVM)
{
  float quadVerts; 
  float quadVertsa; 
  float quadVertsb; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  vec4_t color; 
  vec4_t verts[4]; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovups xmm0, xmmword ptr [r8]
    vmovss  xmm1, dword ptr [rdx+0D0h]; top
    vmovups xmmword ptr [rsp+118h+var_C8], xmm0
    vmovss  xmm0, dword ptr [rdx+0CCh]; left
    vaddss  xmm2, xmm0, xmm3; right
    vmovaps xmm10, xmm3
    vmovss  xmm3, dword ptr [rdx+0D8h]; bottom
  }
  _RSI = element;
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  xmm0, [rsp+118h+arg_20]
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm7, [rsp+118h+arg_28]
    vmovss  [rsp+118h+var_E0], xmm9
    vmovss  [rsp+118h+var_E8], xmm7
    vxorps  xmm8, xmm8, xmm8
    vmovss  [rsp+118h+var_F0], xmm8
    vmovss  dword ptr [rsp+118h+quadVerts], xmm0
  }
  LUI_Render_DrawImage(localClientNum, _RSI, luaVM, (const vec4_t (*)[4])verts, quadVerts, v47, v50, v53, &color, _RSI->imageData.image);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0D4h]
    vmovss  xmm3, dword ptr [rsi+0D8h]; bottom
    vmovss  xmm1, dword ptr [rsi+0D0h]; top
    vsubss  xmm2, xmm0, xmm10; right
    vaddss  xmm0, xmm10, dword ptr [rsi+0CCh]; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  xmm6, [rsp+118h+arg_30]
    vmovss  [rsp+118h+var_E0], xmm9
    vmovss  [rsp+118h+var_E8], xmm6
    vmovss  [rsp+118h+var_F0], xmm8
    vmovss  dword ptr [rsp+118h+quadVerts], xmm7
  }
  LUI_Render_DrawImage(localClientNum, _RSI, luaVM, (const vec4_t (*)[4])verts, quadVertsa, v48, v51, v54, &color, _RSI->imageData.image);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+0D4h]; right
    vmovss  xmm3, dword ptr [rsi+0D8h]; bottom
    vmovss  xmm1, dword ptr [rsi+0D0h]; top
    vsubss  xmm0, xmm2, xmm10; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  xmm0, [rsp+118h+arg_38]
    vmovss  [rsp+118h+var_E0], xmm9
    vmovss  [rsp+118h+var_E8], xmm0
    vmovss  [rsp+118h+var_F0], xmm8
    vmovss  dword ptr [rsp+118h+quadVerts], xmm6
  }
  LUI_Render_DrawImage(localClientNum, _RSI, luaVM, (const vec4_t (*)[4])verts, quadVertsb, v49, v52, v55, &color, _RSI->imageData.image);
  _R11 = &v58;
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
LUIElement_UI3SliceHorizontalMirrorImageRender
==============
*/

void __fastcall LUIElement_UI3SliceHorizontalMirrorImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  vec4_t v42; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RBX = element;
  __asm
  {
    vmovss  xmm6, cs:__real@3eaaaaab
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps xmm7, xmm3
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm { vmovaps xmm4, xmm0 }
  if ( _RBX->currentAnimationState.userDataBytes[0] )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm3, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, cs:__real@3b808081
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D4h]
      vsubss  xmm1, xmm0, dword ptr [rbx+0CCh]
      vmulss  xmm3, xmm1, xmm6
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, edi
      vmulss  xmm0, xmm2, xmm4
      vmulss  xmm1, xmm0, xmm6
      vminss  xmm3, xmm3, xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  xmm1, dword ptr [rbx+3Ch]
    vmovss  xmm4, cs:__real@3f800000
    vmovss  xmm2, dword ptr [rbx+40h]
    vmovss  [rsp+88h+var_38], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+88h+var_50], xmm0
    vmovss  [rsp+88h+var_34], xmm1
    vsubss  xmm1, xmm4, xmm6
    vmovss  [rsp+88h+var_58], xmm6
    vmovss  [rsp+88h+var_60], xmm1
    vmovss  [rsp+88h+var_68], xmm4
    vmovss  [rsp+88h+var_30], xmm2
    vmovss  [rsp+88h+var_2C], xmm7
  }
  LUIElement_UI3SliceHorizontalImageRender_Internal(localClientNum, _RBX, &v42, *(double *)&_XMM3, v38, v39, v40, v41, luaVM);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

/*
==============
LUIElement_UI3SliceVerticalImageRender
==============
*/

void __fastcall LUIElement_UI3SliceVerticalImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  float quadVerts; 
  float quadVertsa; 
  float quadVertsb; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  vec4_t color; 
  vec4_t verts[4]; 
  char v73; 
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
  _RBX = element;
  __asm
  {
    vmovss  xmm9, cs:__real@3eaaaaab
    vmovaps xmm6, xmm3
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm { vmovaps xmm2, xmm0 }
  if ( _RBX->currentAnimationState.userDataBytes[0] )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+0D4h]
      vmovss  xmm5, dword ptr [rbx+0CCh]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm10, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm9, xmm0, cs:__real@3b808081
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+0D4h]
      vmovss  xmm5, dword ptr [rbx+0CCh]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm1, xmm0, xmm2
      vsubss  xmm2, xmm4, xmm5
      vmulss  xmm0, xmm2, xmm9
      vmulss  xmm3, xmm1, xmm9
      vminss  xmm10, xmm3, xmm0
    }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+38h]
    vmovss  xmm3, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rsp+118h+var_C8], xmm1
    vmovss  xmm1, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+118h+var_C8+8], xmm1
    vmovss  xmm1, dword ptr [rbx+0D0h]; top
    vmovss  dword ptr [rsp+118h+var_C8+4], xmm3
    vaddss  xmm3, xmm1, xmm10; bottom
    vmovaps xmm2, xmm4; right
    vmovaps xmm0, xmm5; left
    vmovss  dword ptr [rsp+118h+var_C8+0Ch], xmm6
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  [rsp+118h+var_E0], xmm9
    vxorps  xmm8, xmm8, xmm8
    vmovss  [rsp+118h+var_E8], xmm7
    vmovss  [rsp+118h+var_F0], xmm8
    vmovss  dword ptr [rsp+118h+quadVerts], xmm8
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVerts, v62, v65, v68, &color, _RBX->imageData.image);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0D8h]
    vaddss  xmm1, xmm10, dword ptr [rbx+0D0h]; top
    vmovss  xmm2, dword ptr [rbx+0D4h]; right
    vsubss  xmm3, xmm0, xmm10; bottom
    vmovss  xmm0, dword ptr [rbx+0CCh]; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vsubss  xmm6, xmm7, xmm9
    vmovss  [rsp+118h+var_E0], xmm6
    vmovss  [rsp+118h+var_E8], xmm7
    vmovss  [rsp+118h+var_F0], xmm9
    vmovss  dword ptr [rsp+118h+quadVerts], xmm8
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVertsa, v63, v66, v69, &color, _RBX->imageData.image);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+0D8h]; bottom
    vmovss  xmm2, dword ptr [rbx+0D4h]; right
    vmovss  xmm0, dword ptr [rbx+0CCh]; left
    vsubss  xmm1, xmm3, xmm10; top
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  [rsp+118h+var_E0], xmm7
    vmovss  [rsp+118h+var_E8], xmm7
    vmovss  [rsp+118h+var_F0], xmm6
    vmovss  dword ptr [rsp+118h+quadVerts], xmm8
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVertsb, v64, v67, v70, &color, _RBX->imageData.image);
  _R11 = &v73;
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
LUIElement_UI9SliceImageRender
==============
*/

void __fastcall LUIElement_UI9SliceImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  const GfxImage *image; 
  float quadVerts; 
  float quadVertsa; 
  float quadVertsb; 
  float quadVertsc; 
  float quadVertsd; 
  float quadVertse; 
  float quadVertsf; 
  float quadVertsg; 
  float quadVertsh; 
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
  vec4_t color; 
  vec4_t verts[4]; 
  char v151; 
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
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovss  xmm10, cs:__real@3eaaaaab
  }
  _EDI = 0;
  __asm { vmovaps xmm13, xmm10 }
  _ESI = 0;
  _RBX = element;
  __asm { vmovaps xmm7, xmm3 }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm { vmovaps xmm4, xmm0 }
  if ( _RBX->currentAnimationState.userDataBytes[0] )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rbx+0D0h]
      vmovss  xmm6, dword ptr [rbx+0CCh]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm11, xmm1, xmm0
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, eax
      vmulss  xmm12, xmm2, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm10, xmm0, cs:__real@3b808081
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm13, xmm0, cs:__real@3b808081
    }
  }
  else
  {
    image = _RBX->imageData.image;
    if ( image )
    {
      _ESI = image->height;
      _EDI = image->width;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D4h]
      vmovss  xmm6, dword ptr [rbx+0CCh]
      vmovss  xmm5, dword ptr [rbx+0D0h]
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm3, xmm1, xmm10
      vmovd   xmm2, edi
      vcvtdq2ps xmm2, xmm2
      vmulss  xmm0, xmm2, xmm4
      vmulss  xmm1, xmm0, xmm10
      vmovss  xmm0, dword ptr [rbx+0D8h]
      vminss  xmm11, xmm3, xmm1
      vsubss  xmm1, xmm0, xmm5
      vmulss  xmm3, xmm1, xmm10
      vmovd   xmm2, esi
      vcvtdq2ps xmm2, xmm2
      vmulss  xmm0, xmm2, xmm4
      vmulss  xmm1, xmm0, xmm10
      vminss  xmm12, xmm3, xmm1
    }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+38h]
    vmovss  xmm3, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rsp+150h+var_100], xmm2
    vmovss  xmm2, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+150h+var_100+8], xmm2
    vmovss  dword ptr [rsp+150h+var_100+4], xmm3
    vaddss  xmm2, xmm6, xmm11; right
    vaddss  xmm3, xmm5, xmm12; bottom
    vmovaps xmm1, xmm5; top
    vmovaps xmm0, xmm6; left
    vmovss  dword ptr [rsp+150h+var_100+0Ch], xmm7
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_118], xmm13
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+150h+var_120], xmm10
    vmovss  [rsp+150h+var_128], xmm7
    vmovss  dword ptr [rsp+150h+quadVerts], xmm7
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVerts, v122, v131, v140, &color, _RBX->imageData.image);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0D4h]
    vmovss  xmm1, dword ptr [rbx+0D0h]; top
    vsubss  xmm2, xmm0, xmm11; right
    vaddss  xmm0, xmm11, dword ptr [rbx+0CCh]; left
    vaddss  xmm3, xmm1, xmm12; bottom
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  dword ptr [rsp+150h+var_118], xmm13
    vsubss  xmm9, xmm8, xmm10
    vmovss  [rsp+150h+var_120], xmm9
    vmovss  [rsp+150h+var_128], xmm7
    vmovss  dword ptr [rsp+150h+quadVerts], xmm10
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVertsa, v123, v132, v141, &color, _RBX->imageData.image);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0D0h]; top
    vmovss  xmm2, dword ptr [rbx+0D4h]; right
    vaddss  xmm3, xmm1, xmm12; bottom
    vsubss  xmm0, xmm2, xmm11; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_118], xmm13
    vmovss  [rsp+150h+var_120], xmm8
    vmovss  [rsp+150h+var_128], xmm7
    vmovss  dword ptr [rsp+150h+quadVerts], xmm9
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVertsb, v124, v133, v142, &color, _RBX->imageData.image);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0D8h]
    vmovss  xmm0, dword ptr [rbx+0CCh]; left
    vsubss  xmm3, xmm1, xmm12; bottom
    vaddss  xmm1, xmm12, dword ptr [rbx+0D0h]; top
    vaddss  xmm2, xmm0, xmm11; right
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vsubss  xmm6, xmm8, xmm13
    vmovss  dword ptr [rsp+150h+var_118], xmm6
    vmovss  [rsp+150h+var_120], xmm10
    vmovss  [rsp+150h+var_128], xmm13
    vmovss  dword ptr [rsp+150h+quadVerts], xmm7
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVertsc, v125, v134, v143, &color, _RBX->imageData.image);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0D8h]
    vmovss  xmm1, dword ptr [rbx+0D4h]
    vsubss  xmm3, xmm0, xmm12; bottom
    vaddss  xmm0, xmm11, dword ptr [rbx+0CCh]; left
    vsubss  xmm2, xmm1, xmm11; right
    vaddss  xmm1, xmm12, dword ptr [rbx+0D0h]; top
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_118], xmm6
    vmovss  [rsp+150h+var_120], xmm9
    vmovss  [rsp+150h+var_128], xmm13
    vmovss  dword ptr [rsp+150h+quadVerts], xmm10
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVertsd, v126, v135, v144, &color, _RBX->imageData.image);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0D8h]
    vmovss  xmm2, dword ptr [rbx+0D4h]; right
    vaddss  xmm1, xmm12, dword ptr [rbx+0D0h]; top
    vsubss  xmm3, xmm0, xmm12; bottom
    vsubss  xmm0, xmm2, xmm11; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_118], xmm6
    vmovss  [rsp+150h+var_120], xmm8
    vmovss  [rsp+150h+var_128], xmm13
    vmovss  dword ptr [rsp+150h+quadVerts], xmm9
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVertse, v127, v136, v145, &color, _RBX->imageData.image);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+0D8h]; bottom
    vmovss  xmm0, dword ptr [rbx+0CCh]; left
    vaddss  xmm2, xmm0, xmm11; right
    vsubss  xmm1, xmm3, xmm12; top
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_118], xmm8
    vmovss  [rsp+150h+var_120], xmm10
    vmovss  [rsp+150h+var_128], xmm6
    vmovss  dword ptr [rsp+150h+quadVerts], xmm7
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVertsf, v128, v137, v146, &color, _RBX->imageData.image);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0D4h]
    vmovss  xmm3, dword ptr [rbx+0D8h]; bottom
    vsubss  xmm2, xmm0, xmm11; right
    vaddss  xmm0, xmm11, dword ptr [rbx+0CCh]; left
    vsubss  xmm1, xmm3, xmm12; top
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_118], xmm8
    vmovss  [rsp+150h+var_120], xmm9
    vmovss  [rsp+150h+var_128], xmm6
    vmovss  dword ptr [rsp+150h+quadVerts], xmm10
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVertsg, v129, v138, v147, &color, _RBX->imageData.image);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+0D8h]; bottom
    vmovss  xmm2, dword ptr [rbx+0D4h]; right
    vsubss  xmm1, xmm3, xmm12; top
    vsubss  xmm0, xmm2, xmm11; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_118], xmm8
    vmovss  [rsp+150h+var_120], xmm8
    vmovss  [rsp+150h+var_128], xmm6
    vmovss  dword ptr [rsp+150h+quadVerts], xmm9
  }
  LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, quadVertsh, v130, v139, v148, &color, _RBX->imageData.image);
  _R11 = &v151;
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
LUIElement_UICountdownLayout
==============
*/

void __fastcall LUIElement_UICountdownLayout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  int *customElementData; 
  int v10; 
  int v11; 
  int v12; 
  const char *customFormat; 
  bool v14; 
  int userDataInt; 
  int ServerTime; 
  int v17; 
  int timeValue; 
  const char *v19; 
  int v20; 
  const char *v21; 
  const char *v22; 
  LUIElement *firstChild; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  bool v32; 
  bool v33; 
  LUICountdownCustomFormatType customFormatType; 
  int replaceInts[2]; 
  int v37; 
  char outBuffer[1024]; 

  __asm
  {
    vmovaps [rsp+4C8h+var_58], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (int *)element->customElementData;
  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1349, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_getfield(luaVM, -1, "m_frozen");
  v10 = j_lua_toboolean(luaVM, -1);
  v33 = v10 != 0;
  j_lua_settop(luaVM, -2);
  v11 = 0;
  if ( v10 )
  {
    j_lua_getfield(luaVM, -1, "m_timeWhenFrozen");
    if ( j_lua_type(luaVM, -1) && j_lua_isnumber(luaVM, -1) )
      v11 = j_lua_tointeger(luaVM, -1);
    j_lua_settop(luaVM, -2);
  }
  j_lua_getfield(luaVM, -1, "m_useLocalizedCountdownFormat");
  v32 = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_timeToStart1SecEvents");
  *(_QWORD *)replaceInts = j_lua_tointeger(luaVM, -1);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_customEventThreshold");
  v12 = j_lua_tointeger(luaVM, -1);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_customFormatType");
  customFormatType = (unsigned int)j_lua_tointeger(luaVM, -1);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_customFormat");
  customFormat = j_lua_tolstring(luaVM, -1, NULL);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_endTimeWasSet");
  v14 = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  j_lua_pushboolean(luaVM, 0);
  j_lua_setfield(luaVM, -2, "m_endTimeWasSet");
  j_lua_settop(luaVM, -2);
  if ( !element->firstChild || v33 && !v14 )
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
    if ( v11 )
      goto LABEL_22;
    ServerTime = Game_GetServerTime(localClientNum);
  }
  v11 = ServerTime;
LABEL_22:
  v17 = userDataInt - v11;
  if ( v17 <= 0 )
  {
    if ( element->timeValue && LUI_BeginEventWithElement(localClientNum, element, "timeout", luaVM) )
      LUI_EndEventWithElement(luaVM);
    if ( v32 )
    {
      *(_QWORD *)replaceInts = 0i64;
      v37 = 0;
      if ( customFormatType )
      {
        switch ( customFormatType )
        {
          case LUI_COUNTDOWN_FORMAT_HRMINSEC:
          case LUI_COUNTDOWN_FORMAT_DAYHRMIN:
            v21 = UI_SafeTranslateString(customFormat);
            v22 = UI_ReplaceConversionInts(v21, 3, replaceInts);
            firstChild = element->firstChild;
            v24 = v22;
            goto LABEL_61;
          case LUI_COUNTDOWN_FORMAT_MINSEC:
          case LUI_COUNTDOWN_FORMAT_SECMSEC:
            v25 = customFormat;
            goto LABEL_56;
          case LUI_COUNTDOWN_FORMAT_SEC:
          case LUI_COUNTDOWN_FORMAT_MSEC:
            v28 = UI_SafeTranslateString(customFormat);
            v29 = UI_ReplaceConversionInts(v28, 1, replaceInts);
            firstChild = element->firstChild;
            v24 = v29;
            goto LABEL_61;
          default:
            goto LABEL_62;
        }
        goto LABEL_62;
      }
      v25 = "LUA_MENU_MP/COUNTDOWN";
LABEL_56:
      v26 = UI_SafeTranslateString(v25);
      v27 = UI_ReplaceConversionInts(v26, 2, replaceInts);
      firstChild = element->firstChild;
      v24 = v27;
    }
    else
    {
      v24 = "0:00.0";
      firstChild = element->firstChild;
      if ( customElementData[1] <= 0 )
        v24 = "0:00";
    }
LABEL_61:
    LUI_LUIElement_SetText(firstChild, v24, luaVM);
LABEL_62:
    element->timeValue = 0;
    *customElementData = 0;
LABEL_63:
    v20 = deltaTime;
    goto LABEL_64;
  }
  if ( v12 > -1 && element->timeValue >= v12 && v17 <= v12 && LUI_BeginEventWithElement(localClientNum, element, "customThresholdReached", luaVM) )
    LUI_EndEventWithElement(luaVM);
  timeValue = element->timeValue;
  if ( timeValue < 30000 || v17 > 30000 )
  {
    if ( timeValue < 10000 || v17 > 10000 )
    {
      if ( timeValue >= v17 || !LUI_BeginEventWithElement(localClientNum, element, "timeReset", luaVM) )
        goto LABEL_40;
      LUI_SetTableInt("timeValue", v17, LUI_luaVM);
      goto LABEL_39;
    }
    v19 = "time10sec";
  }
  else
  {
    v19 = "time30sec";
  }
  if ( LUI_BeginEventWithElement(localClientNum, element, v19, luaVM) )
LABEL_39:
    LUI_EndEventWithElement(luaVM);
LABEL_40:
  if ( *customElementData > 1000 )
  {
    if ( (element->timeValue <= replaceInts[0] || replaceInts[0] == -1) && LUI_BeginEventWithElement(localClientNum, element, "time1secElapsed", luaVM) )
    {
      LUI_SetTableInt("timeValue", v17, LUI_luaVM);
      LUI_EndEventWithElement(luaVM);
    }
    for ( ; *customElementData > 1000; *customElementData -= 1000 )
      ;
  }
  LUI_CoD_FormatDuration(v17, 0x400ui64, outBuffer, v32, customElementData[1], customFormatType, customFormat);
  LUI_LUIElement_SetText(element->firstChild, outBuffer, luaVM);
  v20 = deltaTime;
  element->timeValue = v17;
  *customElementData += deltaTime;
LABEL_64:
  __asm { vmovaps xmm2, xmm6; unitScale }
  LUIElement_DefaultLayout(localClientNum, element, *(float *)&_XMM2, v20, luaVM);
  __asm { vmovaps xmm6, [rsp+4C8h+var_58] }
}

/*
==============
LUIElement_UIImageRender
==============
*/

void __fastcall LUIElement_UIImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  float reda; 
  float greena; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 107, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+blue]
    vmovss  xmm3, [rsp+58h+green]; green
    vmovss  xmm2, [rsp+58h+red]; red
    vmovss  [rsp+58h+green], xmm6
    vmovss  [rsp+58h+red], xmm0
    vmovaps xmm6, [rsp+58h+var_18]
  }
  LUI_Render_ImageFill(localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, reda, greena, element->imageData.image, luaVM);
}

/*
==============
LUIElement_UILetterboxLayout
==============
*/

void __fastcall LUIElement_UILetterboxLayout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  bool v10; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = element;
  __asm { vmovaps xmm6, xmm2 }
  if ( !element->layoutCached )
  {
    v10 = LUI_CoD_UsingSplitscreenUpscaling();
    if ( v10 )
    {
      __asm
      {
        vmovss  xmm1, cs:__real@c3580000
        vmovss  xmm3, cs:__real@43580000
        vmovss  xmm4, cs:__real@c3c00000
        vmovss  xmm2, cs:__real@43c00000
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@c3b40000
        vmovss  xmm3, cs:__real@43b40000
        vmovss  xmm4, cs:__real@c4200000
        vmovss  xmm2, cs:__real@44200000
      }
    }
    __asm
    {
      vmovss  xmm0, cs:?vidConfig@@3UvidConfig_t@@A.windowAspectRatio; vidConfig_t vidConfig
      vcomiss xmm0, cs:__real@3fe38e39
    }
    if ( v10 )
    {
      __asm { vxorps  xmm5, xmm5, xmm5 }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3f100000
        vsubss  xmm5, xmm0, cs:__real@3f800000
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+34h], xmm5
      vmovss  dword ptr [rbx], xmm4
      vmovss  dword ptr [rbx+4], xmm2
      vmovss  dword ptr [rbx+18h], xmm1
      vmovss  dword ptr [rbx+1Ch], xmm3
    }
    _RBX->currentAnimationState.position.y.anchors[0] = 0.5;
    _RBX->currentAnimationState.position.y.anchors[1] = 0.5;
    _RBX->currentAnimationState.position.x.anchors[0] = 0.5;
    _RBX->currentAnimationState.position.x.anchors[1] = 0.5;
  }
  __asm
  {
    vmovaps xmm2, xmm6; unitScale
    vmovaps xmm6, [rsp+48h+var_18]
  }
  LUIElement_DefaultLayout(localClientNum, _RBX, *(float *)&_XMM2, deltaTime, luaVM);
}

/*
==============
LUIElement_UILetterboxRender
==============
*/

void __fastcall LUIElement_UILetterboxRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  bool v16; 
  float quadVertsa; 
  float quadVerts; 
  float quadVertsb; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  vec4_t color; 
  vec4_t verts[4]; 
  void *retaddr; 

  _R11 = &retaddr;
  v16 = (element->usageFlags & 0x400) == 0;
  if ( (element->usageFlags & 0x400) == 0 )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
      vmovaps xmmword ptr [r11-18h], xmm6
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovaps xmmword ptr [r11-38h], xmm8
      vmovaps xmmword ptr [r11-48h], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vaddss  xmm1, xmm9, dword ptr [rdx+34h]
      vmovaps xmmword ptr [r11-58h], xmm10
      vdivss  xmm2, xmm9, xmm1
      vmovaps xmmword ptr [r11-68h], xmm11
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, rax
      vxorps  xmm10, xmm10, xmm10
      vcvtsi2ss xmm10, xmm10, rax
      vmovups xmmword ptr [rsp+128h+var_D8], xmm0
      vmovss  xmm0, cs:?vidConfig@@3UvidConfig_t@@A.windowAspectRatio; vidConfig_t vidConfig
      vcomiss xmm0, cs:__real@3fe38e39
      vmulss  xmm8, xmm2, xmm10
      vmovaps xmmword ptr [r11-78h], xmm12
      vsubss  xmm12, xmm8, xmm10
      vmulss  xmm11, xmm2, xmm3
      vxorps  xmm1, xmm1, xmm1; top
    }
    if ( v16 )
    {
      __asm
      {
        vsubss  xmm0, xmm11, xmm3
        vmulss  xmm6, xmm0, cs:__real@bf000000
        vmulss  xmm3, xmm12, cs:__real@bf000000; bottom
        vmovaps xmm0, xmm6; left
        vmovaps xmm2, xmm11; right
        vxorps  xmm7, xmm7, xmm7
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
      __asm
      {
        vmovss  [rsp+128h+var_F0], xmm9
        vmovss  [rsp+128h+var_F8], xmm9
        vmovss  [rsp+128h+var_100], xmm7
        vmovss  dword ptr [rsp+128h+quadVerts], xmm7
      }
      LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, quadVertsb, v66, v69, v72, &color, LUI_DefaultMaterial);
      __asm
      {
        vsubss  xmm1, xmm8, xmm12; top
        vmovaps xmm3, xmm8; bottom
        vmovaps xmm2, xmm11; right
        vmovaps xmm0, xmm6; left
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
      __asm
      {
        vmovss  [rsp+128h+var_F0], xmm9
        vmovss  [rsp+128h+var_F8], xmm9
        vmovss  [rsp+128h+var_100], xmm7
        vmovss  dword ptr [rsp+128h+quadVerts], xmm7
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm3, cs:__real@3f000000
        vmulss  xmm7, xmm10, cs:__real@3f638e39
        vsubss  xmm2, xmm0, xmm7; right
        vxorps  xmm0, xmm0, xmm0; left
        vmovaps xmm3, xmm10; bottom
        vxorps  xmm8, xmm8, xmm8
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
      __asm
      {
        vmovss  [rsp+128h+var_F0], xmm9
        vmovss  [rsp+128h+var_F8], xmm9
        vmovss  [rsp+128h+var_100], xmm8
        vmovss  dword ptr [rsp+128h+quadVerts], xmm8
      }
      LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, quadVertsa, v64, v67, v70, &color, LUI_DefaultMaterial);
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, rax; right
        vmulss  xmm0, xmm2, cs:__real@3f000000
        vaddss  xmm0, xmm0, xmm7; left
        vmovaps xmm3, xmm10; bottom
        vxorps  xmm1, xmm1, xmm1; top
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
      __asm
      {
        vmovss  [rsp+128h+var_F0], xmm9
        vmovss  [rsp+128h+var_F8], xmm9
        vmovss  [rsp+128h+var_100], xmm8
        vmovss  dword ptr [rsp+128h+quadVerts], xmm8
      }
    }
    LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, quadVerts, v65, v68, v71, &color, LUI_DefaultMaterial);
    __asm
    {
      vmovaps xmm11, [rsp+128h+var_68]
      vmovaps xmm10, [rsp+128h+var_58]
      vmovaps xmm9, [rsp+128h+var_48]
      vmovaps xmm8, [rsp+128h+var_38]
      vmovaps xmm7, [rsp+128h+var_28]
      vmovaps xmm6, [rsp+128h+var_18]
      vmovaps xmm12, [rsp+128h+var_78]
    }
  }
}

/*
==============
LUIElement_UILongCountdownLayout
==============
*/

void __fastcall LUIElement_UILongCountdownLayout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  unsigned int userDataInt; 
  bool v11; 
  const char *v12; 
  unsigned int UTC; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  const char *v18; 
  const char *v19; 
  char *v20; 
  char *fmt; 
  int replaceInts[4]; 
  char dest[128]; 

  __asm { vmovaps [rsp+118h+var_48], xmm6 }
  userDataInt = element->currentAnimationState.userDataInt;
  __asm { vmovaps xmm6, xmm2 }
  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1614, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_getfield(luaVM, -1, "m_useLocalizedCountdownFormat");
  v11 = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, -1, "m_localizedFormatString");
  v12 = j_lua_tolstring(luaVM, -1, NULL);
  j_lua_settop(luaVM, -2);
  if ( userDataInt && (UTC = LiveStorage_GetUTC(), UTC < userDataInt) )
  {
    v14 = userDataInt - UTC;
    v15 = v14 / 0x15180;
    v16 = v14 % 0x15180 / 0xE10;
    v17 = v14 % 0xE10;
    if ( v11 )
    {
      replaceInts[0] = v15;
      replaceInts[1] = v16;
      replaceInts[2] = v17 / 0x3C;
      v18 = UI_SafeTranslateString(v12);
      v19 = UI_ReplaceConversionInts(v18, 3, replaceInts);
      Core_strcpy(dest, 0x80ui64, v19);
    }
    else
    {
      LODWORD(fmt) = v17 / 0x3C;
      Com_sprintf<128>((char (*)[128])dest, "%02u:%02u:%02u", v15, v16, fmt);
    }
    v20 = dest;
  }
  else
  {
    v20 = "00:00:00";
  }
  LUI_LUIElement_SetText(element->firstChild, v20, luaVM);
  __asm { vmovaps xmm2, xmm6; unitScale }
  LUIElement_DefaultLayout(localClientNum, element, *(float *)&_XMM2, deltaTime, luaVM);
  __asm { vmovaps xmm6, [rsp+118h+var_48] }
}

/*
==============
LUIElement_UITechyDigitsLayout
==============
*/

void __fastcall LUIElement_UITechyDigitsLayout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  lua_State *v8; 
  LUIElement *v9; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  char *v16; 
  int ServerTime; 
  int v18; 
  bool v19; 
  int v20; 
  int v24; 
  int v25; 
  int v26; 
  char *fmt; 
  __int64 v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 

  v8 = luaVM;
  v9 = element;
  __asm
  {
    vmovaps [rsp+88h+var_48], xmm7
    vmovaps xmm7, xmm2
  }
  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1870, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v9, luaVM);
  j_lua_getfield(luaVM, -1, "digits");
  v12 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -2, "longWait");
  v13 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -3, "m_shortWait");
  v60 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -4, "m_pulsesDone");
  v58 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -5, "m_pulsesTotal");
  v61 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -6, "m_lastUpdated");
  v59 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -7, "minValue");
  v14 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -8, "maxValue");
  v15 = lui_tointeger32(luaVM, -1);
  j_lua_getfield(luaVM, -9, "m_techyData");
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1889, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  v16 = (char *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -11);
  if ( (v9->currentAnimationState.flags & 0x10) != 0 )
    ServerTime = Game_GetServerTime(localClientNum);
  else
    ServerTime = Sys_Milliseconds();
  v18 = ServerTime - v59;
  if ( v18 > v13 || v58 > 0 && v18 > v60 )
  {
    if ( (int)v12 >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1907, ASSERT_TYPE_ASSERT, "(digits < 256)", (const char *)&queryFormat, "digits < LUI_TECHY_DIGITS_TEXT_LEN") )
      __debugbreak();
    v19 = v15 <= v14;
    if ( v15 < v14 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1908, ASSERT_TYPE_ASSERT, "(maxValue >= minValue)", (const char *)&queryFormat, "maxValue >= minValue") )
        __debugbreak();
      v19 = v15 <= v14;
    }
    if ( v19 )
    {
      __asm { vmovss  xmm0, cs:__real@41200000; X }
      v20 = v12;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vcvttss2si r14d, xmm0 }
      v24 = 10 * _ER14;
      Com_sprintf(v16, 0x100ui64, (const char *)&queryFormat, &stru_1440115A4);
      if ( (int)v12 > 0 )
      {
        do
        {
          if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1842, ASSERT_TYPE_ASSERT, "(techyData)", (const char *)&queryFormat, "techyData") )
            __debugbreak();
          v25 = _ER14 + rand() % v24;
          if ( v25 >= v24 )
            v25 += -9 * _ER14;
          v26 = 9;
          LODWORD(v57) = v25;
          if ( v20 < 9 )
            v26 = v20;
          LODWORD(fmt) = v26;
          Com_sprintf(v16, 0x100ui64, "%s%0*d", v16, fmt, v57);
          v20 -= 9;
        }
        while ( v20 > 0 );
        v8 = luaVM;
        v9 = element;
      }
      v16[v12 + 1] = 0;
    }
    else
    {
      LODWORD(v57) = v14 + rand() % (v15 - v14);
      Com_sprintf(v16, 0x100ui64, "%s%0*d", (const char *)&stru_1440115A4, v12, v57);
    }
    if ( !LUI_ElementHasWeakTableEntry(v9, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1935, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v9, v8);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r13d
      vcvtss2sd xmm1, xmm0, xmm0; value
    }
    LUI_SetTableNumber("m_lastUpdated", *(long double *)&_XMM1, v8);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vcvtss2sd xmm1, xmm0, xmm0; value
    }
    LUI_SetTableNumber("m_pulsesDone", *(long double *)&_XMM1, v8);
    j_lua_settop(v8, -2);
    if ( !((v58 + 1) % v61) )
    {
      LUI_PutElementOnTopOfStack(v9, v8);
      j_lua_getfield(v8, -1, "pulsesMin");
      lui_tointeger32(v8, -1);
      j_lua_getfield(v8, -2, "pulsesMax");
      lui_tointeger32(v8, -1);
      j_lua_settop(v8, -3);
      *(double *)&_XMM0 = I_random();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm1, xmm1, ebx
        vmulss  xmm0, xmm0, xmm1
        vaddss  xmm3, xmm0, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm2, xmm3
        vroundss xmm4, xmm0, xmm1, 1
        vcvttss2si eax, xmm4
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcvtss2sd xmm1, xmm0, xmm0; value
      }
      LUI_SetTableNumber("m_pulsesTotal", *(long double *)&_XMM1, v8);
      j_lua_settop(v8, -2);
    }
    LUI_PutElementOnTopOfStack(v9, v8);
    j_lua_getfield(v8, -1, "shortWaitMin");
    lui_tointeger32(v8, -1);
    j_lua_getfield(v8, -2, "shortWaitMax");
    lui_tointeger32(v8, -1);
    j_lua_settop(v8, -3);
    *(double *)&_XMM0 = I_random();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm1, xmm1, ebx
      vmulss  xmm0, xmm0, xmm1
      vaddss  xmm3, xmm0, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm2, xmm3
      vroundss xmm4, xmm0, xmm1, 1
      vcvttss2si eax, xmm4
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcvtss2sd xmm1, xmm0, xmm0; value
    }
    LUI_SetTableNumber("m_shortWait", *(long double *)&_XMM1, v8);
    j_lua_settop(v8, -2);
  }
  __asm
  {
    vmovaps xmm2, xmm7; unitScale
    vmovaps xmm7, [rsp+88h+var_48]
  }
  LUIElement_DefaultLayout(localClientNum, v9, *(float *)&_XMM2, deltaTime, v8);
}

/*
==============
LUIElement_UITechyDigitsRender
==============
*/

void __fastcall LUIElement_UITechyDigitsRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  const char *text; 
  float fmt; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = element;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmm7, xmm3
  }
  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1984, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(_RBX, luaVM);
  j_lua_getfield(luaVM, -1, "m_techyData");
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1987, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  text = (const char *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -3);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0D4h]
    vsubss  xmm6, xmm0, dword ptr [rbx+0CCh]
  }
  if ( !LUIElement_IsTextLike(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1996, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+0D8h]
    vsubss  xmm0, xmm2, dword ptr [rbx+0D0h]
    vmovss  xmm1, [rsp+0D8h+green]
    vmovss  xmm3, dword ptr [rbx+0CCh]; x
    vmovss  [rsp+0D8h+var_78], xmm6
    vmovss  [rsp+0D8h+var_80], xmm0
    vmovss  xmm0, [rsp+0D8h+blue]
    vmovss  [rsp+0D8h+var_98], xmm7
    vmovss  [rsp+0D8h+var_A0], xmm0
    vmovss  xmm0, [rsp+0D8h+red]
    vmovss  [rsp+0D8h+var_A8], xmm1
    vmovss  [rsp+0D8h+var_B0], xmm0
    vmovss  dword ptr [rsp+0D8h+fmt], xmm2
  }
  LUI_Interface_DrawText(localClientNum, root, _RBX, *(float *)&_XMM3, fmt, v28, v29, v30, v31, text, _RBX->textData.font, v32, v33, 0, 0, _RBX->currentAnimationState.alignment, NULL, NULL, NULL, luaVM);
  _R11 = &v34;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
LUIElement_UITextRender
==============
*/

void __fastcall LUIElement_UITextRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  LUISharedTextRefIndex v15; 
  const char *v16; 
  const char *text; 
  int leading; 
  int tracking; 
  float fmt; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm3
  }
  _RDI = element;
  if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 162, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  v15 = *(unsigned __int16 *)_RDI->textData.textRef;
  if ( (_WORD)v15 != INVALID_INDEX )
  {
    __asm { vmovaps [rsp+0C8h+var_18], xmm6 }
    LUI_SharedTextRef_PushRefOnStack(luaVM, v15);
    if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 166, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
      __debugbreak();
    v16 = j_lua_tolstring(luaVM, -1, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0D4h]
      vsubss  xmm6, xmm0, dword ptr [rdi+0CCh]
    }
    text = v16;
    *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rdi+124h]
      vaddss  xmm1, xmm1, cs:__real@3f000000
      vmulss  xmm0, xmm0, dword ptr [rdi+120h]
      vmovss  xmm4, dword ptr [rdi+0D8h]
      vsubss  xmm3, xmm4, dword ptr [rdi+0D0h]
      vcvttss2si edx, xmm1
      vaddss  xmm1, xmm0, cs:__real@3f000000
      vmovss  xmm0, [rsp+0C8h+blue]
      vcvttss2si ecx, xmm1
      vmovss  xmm1, [rsp+0C8h+green]
      vmovss  [rsp+0C8h+var_68], xmm6
      vmovss  [rsp+0C8h+var_70], xmm3
      vmovss  xmm3, dword ptr [rdi+0CCh]; x
      vmovss  [rsp+0C8h+var_88], xmm7
      vmovss  [rsp+0C8h+var_90], xmm0
      vmovss  xmm0, [rsp+0C8h+red]
      vmovss  [rsp+0C8h+var_98], xmm1
      vmovss  [rsp+0C8h+var_A0], xmm0
      vmovss  dword ptr [rsp+0C8h+fmt], xmm4
    }
    LUI_Interface_DrawText(localClientNum, root, _RDI, *(float *)&_XMM3, fmt, v36, v37, v38, v39, text, _RDI->textData.font, v40, v41, tracking, leading, _RDI->currentAnimationState.alignment, NULL, NULL, NULL, luaVM);
    j_lua_settop(luaVM, -2);
    __asm { vmovaps xmm6, [rsp+0C8h+var_18] }
  }
  _R11 = &v43;
  __asm { vmovaps xmm7, xmmword ptr [r11-20h] }
}

/*
==============
LUIElement_WorldBlurLayout
==============
*/

void __fastcall LUIElement_WorldBlurLayout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  const LUIElement *CurrentRoot; 
  const dvar_t *v14; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RDI = element;
  __asm { vmovaps xmm6, xmm2 }
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  if ( !CurrentRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1197, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  _RBX = LUI_GetRootData(CurrentRoot);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1200, ASSERT_TYPE_ASSERT, "(rootData)", (const char *)&queryFormat, "rootData") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+48h]
    vmaxss  xmm1, xmm0, dword ptr [rbx+0E4h]
    vmovss  dword ptr [rbx+0E4h], xmm1
  }
  v14 = DVARBOOL_lui_world_blur_fullscreen_layout_safety;
  if ( !DVARBOOL_lui_world_blur_fullscreen_layout_safety && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_world_blur_fullscreen_layout_safety") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm { vmovaps xmm2, xmm6; unitScale }
  if ( v14->current.enabled )
    LUIElement_ScaleFullscreenStretchAnchorToRoot(localClientNum, _RDI, *(double *)&_XMM2, deltaTime, luaVM);
  else
    LUIElement_DefaultLayout(localClientNum, _RDI, *(float *)&_XMM2, deltaTime, luaVM);
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
LUI_ComputeWorldOffset
==============
*/
void LUI_ComputeWorldOffset(const LocalClientNum_t localClientNum, int entityNum, const tmat33_t<vec3_t> *tagTransform, const vec3_t *tagOffset, const vec3_t *entityOffset, const vec3_t *worldOffset, vec3_t *outOffset)
{
  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
  }
  _RBX = outOffset;
  _RDI = tagOffset;
  if ( entityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 1057, ASSERT_TYPE_ASSERT, "(entityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
    __debugbreak();
  *(_QWORD *)outOffset->v = 0i64;
  outOffset->v[2] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
    vucomiss xmm6, dword ptr [rdi+4]
    vucomiss xmm6, dword ptr [rdi+8]
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm4, xmm4, xmm4
    vxorps  xmm2, xmm2, xmm2
  }
  _RDI = entityOffset;
  __asm
  {
    vucomiss xmm6, dword ptr [rdi]
    vucomiss xmm6, dword ptr [rdi+4]
    vucomiss xmm6, dword ptr [rdi+8]
    vaddss  xmm0, xmm7, dword ptr [rax]
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm1, xmm4, dword ptr [rax+4]
    vmovss  dword ptr [rbx+4], xmm1
    vaddss  xmm0, xmm2, dword ptr [rax+8]
    vmovss  dword ptr [rbx+8], xmm0
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
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
  __int64 v34; 

  v5 = localClientNum;
  v7 = handIndex;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( !BG_GetCurrentWeaponForPlayer(CgWeaponMap::ms_instance[v5], &LocalClientGlobals->predictedPlayerState)->weaponIdx )
    return 0;
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v34) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v34, 2) )
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
  _RBX = LocalTagMatrix;
  if ( !LocalTagMatrix )
    return 0;
  LocalConvertQuatToMat(LocalTagMatrix, outLocalAxis);
  _RAX = g_activeRefDef;
  __asm { vmovss  xmm0, dword ptr [rbx+10h] }
  _RCX = outWorldPosition;
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rax+7Ch]
    vcvtss2sd xmm1, xmm1, xmm1
    vaddsd  xmm2, xmm1, xmm0
    vmovsd  qword ptr [rcx], xmm2
  }
  _RAX = g_activeRefDef;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rax+80h]
    vcvtss2sd xmm1, xmm1, xmm1
    vaddsd  xmm1, xmm1, xmm0
    vmovsd  qword ptr [rcx+8], xmm1
  }
  _RAX = g_activeRefDef;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovss  xmm2, dword ptr [rax+84h]
    vcvtss2sd xmm2, xmm2, xmm2
    vaddsd  xmm1, xmm2, xmm0
    vmovsd  qword ptr [rcx+10h], xmm1
  }
  return 1;
}

/*
==============
LUI_GetViewModelReticleTransform
==============
*/
bool LUI_GetViewModelReticleTransform(const LocalClientNum_t localClientNum, const PlayerHandIndex handIndex, const char *tagName, const bool isLockedToTag, tmat33_t<vec3_t> *outLocalAxis, dvec3_t *outWorldPosition)
{
  scr_string_t String; 
  bool ViewModelBoneTransformData; 
  bool result; 
  cg_t *LocalClientGlobals; 
  vec3_t outOrg; 
  __int64 v84; 
  char v85; 
  void *retaddr; 

  _RAX = &retaddr;
  v84 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RSI = outLocalAxis;
  _RBX = outWorldPosition;
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
  if ( ViewModelBoneTransformData )
  {
    if ( !isLockedToTag )
    {
      _RDI = DVARFLT_cg_maxReflexSightDrift;
      if ( !DVARFLT_cg_maxReflexSightDrift && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_maxReflexSightDrift") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm10, dword ptr [rdi+28h] }
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      __asm
      {
        vmovsd  xmm0, qword ptr [rbx]
        vcvtpd2ps xmm0, xmm0
        vsubss  xmm6, xmm0, dword ptr [rsp+0C8h+outOrg]
        vmovsd  xmm1, qword ptr [rbx+8]
        vcvtpd2ps xmm1, xmm1
        vsubss  xmm5, xmm1, dword ptr [rsp+0C8h+outOrg+4]
        vmovsd  xmm0, qword ptr [rbx+10h]
        vcvtpd2ps xmm0, xmm0
        vsubss  xmm4, xmm0, dword ptr [rsp+0C8h+outOrg+8]
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, cs:__real@80000000
        vmovss  xmm2, cs:__real@3f800000
        vblendvps xmm1, xmm1, xmm2, xmm0
        vdivss  xmm0, xmm2, xmm1
        vmulss  xmm7, xmm6, xmm0
        vmulss  xmm6, xmm5, xmm0
        vmulss  xmm8, xmm4, xmm0
        vmovss  xmm3, dword ptr [rsi+0Ch]
        vmulss  xmm1, xmm6, dword ptr [rsi+10h]
        vmulss  xmm0, xmm7, xmm3
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, dword ptr [rsi+14h]
        vaddss  xmm0, xmm2, xmm1
        vmulss  xmm2, xmm0, xmm10
        vxorps  xmm4, xmm2, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm3, xmm4
        vcvtss2sd xmm1, xmm0, xmm0
        vaddsd  xmm2, xmm1, qword ptr [rbx]
        vmovsd  qword ptr [rbx], xmm2
        vmulss  xmm0, xmm4, dword ptr [rsi+10h]
        vcvtss2sd xmm1, xmm0, xmm0
        vaddsd  xmm1, xmm1, qword ptr [rbx+8]
        vmovsd  qword ptr [rbx+8], xmm1
        vmulss  xmm0, xmm4, dword ptr [rsi+14h]
        vcvtss2sd xmm1, xmm0, xmm0
        vaddsd  xmm1, xmm1, qword ptr [rbx+10h]
        vmovsd  qword ptr [rbx+10h], xmm1
        vmovss  xmm3, dword ptr [rsi+18h]
        vmulss  xmm1, xmm6, dword ptr [rsi+1Ch]
        vmulss  xmm0, xmm7, xmm3
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, dword ptr [rsi+20h]
        vaddss  xmm0, xmm2, xmm1
        vmulss  xmm2, xmm0, xmm10
        vxorps  xmm4, xmm2, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm1, xmm3, xmm4
        vcvtss2sd xmm0, xmm1, xmm1
        vaddsd  xmm0, xmm0, qword ptr [rbx]
        vmovsd  qword ptr [rbx], xmm0
        vmulss  xmm1, xmm4, dword ptr [rsi+1Ch]
        vcvtss2sd xmm0, xmm1, xmm1
        vaddsd  xmm0, xmm0, qword ptr [rbx+8]
        vmovsd  qword ptr [rbx+8], xmm0
        vmulss  xmm1, xmm4, dword ptr [rsi+20h]
        vcvtss2sd xmm0, xmm1, xmm1
        vaddsd  xmm0, xmm0, qword ptr [rbx+10h]
        vmovsd  qword ptr [rbx+10h], xmm0
      }
      memset(&outOrg, 0, sizeof(outOrg));
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  _R11 = &v85;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
  }
  return result;
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
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 1 && j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_gettop( luaVM ) == 3");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UI3SliceHorizontalImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si ecx, xmm0 }
    v3->currentAnimationState.userDataBytes[0] = _ECX;
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm
    {
      vmulsd  xmm1, xmm0, cs:__real@406fe00000000000
      vcvttsd2si eax, xmm1
    }
    v3->currentAnimationState.userDataBytes[1] = _EAX;
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
LUI_LuaCall_LUIElement_Setup3SliceHorizontalMirrorImage
==============
*/
__int64 LUI_LuaCall_LUIElement_Setup3SliceHorizontalMirrorImage(lua_State *luaVM)
{
  LUIElement *v3; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 1 && j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_gettop( luaVM ) == 3");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UI3SliceHorizontalMirrorImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si ecx, xmm0 }
    v3->currentAnimationState.userDataBytes[0] = _ECX;
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm
    {
      vmulsd  xmm1, xmm0, cs:__real@406fe00000000000
      vcvttsd2si eax, xmm1
    }
    v3->currentAnimationState.userDataBytes[1] = _EAX;
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
LUI_LuaCall_LUIElement_Setup3SliceVerticalImage
==============
*/
__int64 LUI_LuaCall_LUIElement_Setup3SliceVerticalImage(lua_State *luaVM)
{
  LUIElement *v3; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 1 && j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_gettop( luaVM ) == 3");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UI3SliceVerticalImageRender;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si ecx, xmm0 }
    v3->currentAnimationState.userDataBytes[0] = _ECX;
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm
    {
      vmulsd  xmm1, xmm0, cs:__real@406fe00000000000
      vcvttsd2si eax, xmm1
    }
    v3->currentAnimationState.userDataBytes[1] = _EAX;
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
LUI_LuaCall_LUIElement_Setup9SliceImage
==============
*/

__int64 __fastcall LUI_LuaCall_LUIElement_Setup9SliceImage(lua_State *luaVM, double _XMM1_8)
{
  LUIElement *v7; 
  int v8; 
  char v10; 
  char v11; 
  unsigned int v28; 

  if ( j_lua_gettop(luaVM) != 1 && j_lua_gettop(luaVM) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_gettop( luaVM ) == 5");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v7 = LUI_ToElement(luaVM, 1);
  v7->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UI9SliceImageRender;
  v8 = j_lua_gettop(luaVM);
  if ( v8 == 5 )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vmovaps [rsp+58h+var_28], xmm7
      vmovaps [rsp+58h+var_38], xmm8
    }
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, v8 - 3);
    __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm
    {
      vmovss  xmm6, cs:__real@437f0000
      vcomiss xmm8, xmm6
      vcvtsd2ss xmm7, xmm0, xmm0
    }
    if ( !(v10 | v11) )
      goto LABEL_9;
    __asm { vcomiss xmm7, xmm6 }
    if ( !(v10 | v11) )
    {
LABEL_9:
      __asm
      {
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm0, xmm8; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm8, xmm0
        vmovaps xmm0, xmm7; val
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm7, xmm0 }
      Com_PrintWarning(13, "WARNING: 9slicing is used with a value greater than 382 pixels and will be clamped! Things might not look as desired!\n");
    }
    __asm { vcvttss2si eax, xmm8 }
    v7->currentAnimationState.userDataBytes[0] = _EAX;
    __asm { vcvttss2si eax, xmm7 }
    v7->currentAnimationState.userDataBytes[1] = _EAX;
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 4);
    __asm
    {
      vmulsd  xmm0, xmm0, cs:__real@406fe00000000000
      vcvttsd2si eax, xmm0
    }
    v7->currentAnimationState.userDataBytes[2] = _EAX;
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 5);
    __asm
    {
      vmulsd  xmm1, xmm0, cs:__real@406fe00000000000
      vmovaps xmm8, [rsp+58h+var_38]
      vmovaps xmm7, [rsp+58h+var_28]
      vmovaps xmm6, [rsp+58h+var_18]
      vcvttsd2si eax, xmm1
    }
    v7->currentAnimationState.userDataBytes[3] = _EAX;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v28 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v28);
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
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetupDirectionalImage( <stretch> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    _RBX = LUI_ToElement(luaVM, 1);
    _RBX->usageFlags |= 1u;
    LUI_LUIElement_SetupUIBaseImage(_RBX, (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_DirectionalImageRender);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovss  dword ptr [rbx+48h], xmm0 }
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
  v2->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_DynamicCrosshair_Layout;
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
    LUI_LUIElement_SetupUIBaseImage(v2, (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_IconImage_Render);
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
  LUI_ToElement(luaVM, 1)->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_LayoutUpdateEvent;
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
  unsigned int v4; 

  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.cpp", 2592, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS )") )
    __debugbreak();
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetupMinimizedInteractiveObjects( <dotDiameterPx> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    _RBX = LUI_ToElement(luaVM, 1);
    _RBX->usageFlags |= 1u;
    _RBX->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_RenderMinimizedInteractiveObjects;
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovss  dword ptr [rbx+48h], xmm0 }
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
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetupMountHint( <dotDiameterPx> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    _RBX = LUI_ToElement(luaVM, 1);
    _RBX->usageFlags |= 1u;
    _RBX->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_RenderMountHint;
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovss  dword ptr [rbx+48h], xmm0 }
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_ObjectiveDistance_Render;
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

  LUI_ToElement(luaVM, 1)->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_ScaleFullscreenStretchAnchorToRoot;
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
  v2->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_UILetterboxLayout;
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UILetterboxRender;
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
  LUIElement *v3; 
  LUIElementUsageFlag usageFlags; 
  char v5; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) > 4 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) <= 4");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->usageFlags |= 1u;
  v3->renderFunction = LUIElement_OwnerdrawRender;
  usageFlags = v3->usageFlags;
  if ( (usageFlags & 0x80u) == 0 )
  {
    v3->usageFlags = usageFlags | 0x80;
    v3->imageData.image = NULL;
    *(_QWORD *)v3->textData.textRef = 0i64;
    *(_QWORD *)&v3->textData.tracking = 0i64;
    *(_WORD *)v3->textData.textRef = -1;
    v3->imageData.image = (const GfxImage *)LUI_DefaultFont;
  }
  if ( j_lua_gettop(luaVM) >= 2 && j_lua_isnumber(luaVM, 2) )
    v3->currentAnimationState.dataSource = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_isnumber(luaVM, 3) )
  {
    j_lua_pushvalue(luaVM, 3);
    j_lua_setfield(luaVM, 1, "m_ownerDrawTextScale");
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v3->currentAnimationState.userDataBytes[2] = v5;
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isnumber(luaVM, 4) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vcvttss2si eax, xmm0 }
  }
  else
  {
    LOBYTE(_EAX) = 0;
  }
  v3->currentAnimationState.userDataBytes[3] = _EAX;
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

  LUI_ToElement(luaVM, 1)->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_ScaleFullscreenLayout;
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
  void *v9; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  v4 = v3->usageFlags | 3;
  v3->usageFlags = v4;
  v3->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UITechyDigitsRender;
  v3->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_UITechyDigitsLayout;
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
  __asm { vmovsd  xmm1, cs:__real@bff0000000000000; value }
  LUI_SetTableNumber("m_pulsesDone", *(long double *)&_XMM1, luaVM);
  __asm { vmovsd  xmm1, cs:__real@3ff0000000000000; value }
  LUI_SetTableNumber("m_pulsesTotal", *(long double *)&_XMM1, luaVM);
  v9 = j_lua_newuserdata(luaVM, 0x100ui64);
  memset_0(v9, 0, 0x100ui64);
  j_lua_setfield(luaVM, -2, "m_techyData");
  j_lua_settop(luaVM, -2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v10);
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
  v10->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UITextRender;
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UITextRender;
  v2->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_UICountdownLayout;
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UIImageRender;
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UITextRender;
  v2->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_UILongCountdownLayout;
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UITextRender;
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
  v2->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_WorldBlurLayout;
  v2->usageFlags |= 2u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

