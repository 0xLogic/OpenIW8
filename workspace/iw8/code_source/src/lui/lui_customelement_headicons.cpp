/*
==============
HeadIconState_GetPosition
==============
*/

void __fastcall HeadIconState_GetPosition(const HeadIconState *icon, vec3_t *outpos)
{
  ?HeadIconState_GetPosition@@YAXPEBUHeadIconState@@AEATvec3_t@@@Z(icon, outpos);
}

/*
==============
HeadIconState_SetPosition
==============
*/

void __fastcall HeadIconState_SetPosition(HeadIconState *icon, const vec3_t *pos)
{
  ?HeadIconState_SetPosition@@YAXPEAUHeadIconState@@AEBTvec3_t@@@Z(icon, pos);
}

/*
==============
HeadIconState_GetPosition
==============
*/
void HeadIconState_GetPosition(const HeadIconState *icon, vec3_t *outpos)
{
  if ( !icon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 96, ASSERT_TYPE_ASSERT, "(icon)", (const char *)&queryFormat, "icon") )
    __debugbreak();
  if ( !icon->position.Get_position && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 104, ASSERT_TYPE_ASSERT, "(icon->position.Get_position)", (const char *)&queryFormat, "icon->position.Get_position") )
    __debugbreak();
  ((void (__fastcall *)(vec4_t *, vec3_t *))((unsigned __int64)icon->position.Get_position ^ s_aab_get_pointer_iconpos ^ (unsigned __int64)&icon->position))(&icon->position.position, outpos);
}

/*
==============
HeadIconState_SetPosition
==============
*/
void HeadIconState_SetPosition(HeadIconState *icon, const vec3_t *pos)
{
  if ( !icon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 124, ASSERT_TYPE_ASSERT, "(icon)", (const char *)&queryFormat, "icon") )
    __debugbreak();
  if ( !icon->position.Set_position && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 132, ASSERT_TYPE_ASSERT, "(icon->position.Set_position)", (const char *)&queryFormat, "icon->position.Set_position") )
    __debugbreak();
  ((void (__fastcall *)(const vec3_t *, vec4_t *))((unsigned __int64)icon->position.Set_position ^ s_aab_set_pointer_iconpos ^ (unsigned __int64)&icon->position.Get_position))(pos, &icon->position.position);
}

/*
==============
LUIElement_HeadIcons_Render
==============
*/
void LUIElement_HeadIcons_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  HeadIconState *customElementData; 
  cg_t *LocalClientGlobals; 
  cg_t *v12; 
  signed int v13; 
  char *p_z; 
  HeadIconView *headIcons; 
  float *v16; 
  const HeadIconExtendedView *p_headIconExtendedView; 
  bool v18; 
  LUITraceRequest *v19; 
  double v20; 
  float v21; 
  double v22; 
  __int128 v23; 
  bool outHit; 
  vec3_t outWorldPosition; 
  char *outName; 
  lua_State *v27; 
  LUIElement *roota; 
  LUIElement *elementa; 
  HeadIconState *v30; 
  __int64 v31; 
  vec4_t color; 

  v31 = -2i64;
  roota = root;
  elementa = element;
  v27 = luaVM;
  if ( !Sys_IsRenderThread() || !R_IsInRemoteScreenUpdate() )
  {
    if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
      __debugbreak();
    customElementData = (HeadIconState *)element->customElementData;
    v30 = customElementData;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v12 = CG_GetLocalClientGlobals(localClientNum);
    color.v[0] = red;
    color.v[1] = green;
    color.v[2] = blue;
    color.v[3] = alpha;
    v13 = 0;
    p_z = (char *)&customElementData->headIconExtendedView.worldOrigin.z;
    headIcons = v12->predictedPlayerState.headIcons;
    v16 = &v12->predictedPlayerState.headIconsExtendedData[0].worldOrigin.v[1];
    do
    {
      if ( (headIcons->flags & 1) != 0 )
      {
        if ( *((_DWORD *)p_z - 8) != headIcons->entityNumber || p_z[4] != *((_BYTE *)v16 + 8) || *(v16 - 1) != *((float *)p_z - 2) || *v16 != *((float *)p_z - 1) || v16[1] != *(float *)p_z )
        {
          *((_DWORD *)p_z + 3) = LocalClientGlobals->time;
          p_z[24] = 0;
          *((_QWORD *)p_z + 2) = 0i64;
          HeadIconState_SetPosition(&customElementData[v13], &vec3_origin);
          p_z[80] = 0;
        }
        *((_DWORD *)p_z + 2) = LocalClientGlobals->time;
        *((_OWORD *)p_z - 2) = *(_OWORD *)&headIcons->entityNumber;
        *((double *)p_z - 2) = *(double *)&headIcons->maxDistance;
        *(_OWORD *)(p_z - 8) = *(_OWORD *)(v16 - 1);
      }
      p_headIconExtendedView = &customElementData[v13].headIconExtendedView;
      if ( (*(p_z - 24) & 1) == 0 || CG_CalloutMarkerPing_CheckSquadPingsForTarget(localClientNum, *((_DWORD *)p_z - 8), 0xFFFFFFFF, -1) != 53 || CG_CalloutMarkerPing_CheckPrevPredictedForTarget(localClientNum, *((_DWORD *)p_z - 8), 0xFFFFFFFF, -1) != 53 )
        goto LABEL_42;
      if ( CG_Players_HeadIcons_GetWorldPosition(localClientNum, (const HeadIconView *)(p_z - 32), p_headIconExtendedView, &outWorldPosition) )
      {
        HeadIconState_SetPosition((HeadIconState *)(p_z - 32), &outWorldPosition);
        p_z[80] = 1;
      }
      else
      {
        if ( !p_z[80] )
          goto LABEL_41;
        if ( !*((_QWORD *)p_z + 7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 104, ASSERT_TYPE_ASSERT, "(icon->position.Get_position)", (const char *)&queryFormat, "icon->position.Get_position") )
          __debugbreak();
        ((void (__fastcall *)(char *, vec3_t *))(*((_QWORD *)p_z + 7) ^ s_aab_get_pointer_iconpos ^ (unsigned __int64)(p_z + 48)))(p_z + 64, &outWorldPosition);
      }
      v18 = (*((_DWORD *)p_z - 6) & 2) != 0;
      if ( (*((_DWORD *)p_z - 6) & 2) != 0 )
      {
        v19 = (LUITraceRequest *)*((_QWORD *)p_z + 2);
        if ( v19 )
        {
          if ( LUITraceRunner::GetTraceResult(localClientNum, v19, &outHit) )
          {
            *((_QWORD *)p_z + 2) = 0i64;
            p_z[24] = !outHit;
          }
        }
        else
        {
          *((_QWORD *)p_z + 2) = LUITraceRunner::RequestTraceToPosition(localClientNum, &outWorldPosition, *((_DWORD *)p_z - 8), 0, 0);
        }
        if ( !p_z[24] )
          goto LABEL_41;
      }
      v20 = I_fclamp((float)(LocalClientGlobals->time - *((_DWORD *)p_z + 3)) * 0.0033333334, 0.0, 1.0);
      v21 = *(float *)&v20;
      v22 = I_fclamp((float)(LocalClientGlobals->time - *((_DWORD *)p_z + 2)) * 0.0020000001, 0.0, 1.0);
      if ( *((_QWORD *)p_z + 4) && *((_DWORD *)p_z + 10) == *((_DWORD *)p_z - 7) )
        goto LABEL_35;
      if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_HEADICON, *((_DWORD *)p_z - 7), (const char **)&outName) )
      {
        *((_DWORD *)p_z + 10) = *((_DWORD *)p_z - 7);
        *((_QWORD *)p_z + 4) = Image_Register(outName, IMAGE_TRACK_HUD);
LABEL_35:
        if ( CG_GetFlashbangedRemainingTime(localClientNum) <= 0 && (!v18 || p_z[24]) )
          LUIElement_HeadIcons_RenderItem(localClientNum, elementa, roota, (const HeadIconView *)(p_z - 32), *((const GfxImage **)p_z + 4), &color, &outWorldPosition, v21, *(float *)&v22, v27);
        if ( *(float *)&v22 >= 1.0 )
        {
          v23 = *((_OWORD *)p_z + 3);
          memset_0(p_z - 32, 0, 0x78ui64);
          *((_OWORD *)p_z + 3) = v23;
        }
      }
LABEL_41:
      memset(&outWorldPosition, 0, sizeof(outWorldPosition));
LABEL_42:
      ++v13;
      ++headIcons;
      v16 += 4;
      p_z += 120;
      customElementData = v30;
    }
    while ( (unsigned int)v13 < 0x20 );
  }
}

/*
==============
LUIElement_HeadIcons_RenderItem
==============
*/
void LUIElement_HeadIcons_RenderItem(LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, const HeadIconView *headIcon, const GfxImage *image, const vec4_t *color, const vec3_t *worldPosition, float introLerp, float outroLerp, lua_State *luaVM)
{
  __int64 v12; 
  bool v13; 
  const ScreenPlacement *v14; 
  const GfxViewInfo *ViewInfo; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  float v20; 
  int maxDistance; 
  float v22; 
  float naturalDistance; 
  float v24; 
  float v25; 
  __int128 v27; 
  double CurrentUnitScale; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  double v34; 
  float v35; 
  float v36; 
  double v37; 
  __int128 v38; 
  bool snapToLocation[24]; 
  lua_State *v42; 
  LUIElement *elementa; 
  __int64 v44; 
  vec2_t outScreenPos; 
  vec2_t screenPosition; 
  vec4_t v47; 
  vec2_t screenSnapOffset; 
  vec4_t quadVerts[4]; 

  v44 = -2i64;
  elementa = element;
  v12 = localClientNum;
  v42 = luaVM;
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 165, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !root && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 166, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  if ( !headIcon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 167, ASSERT_TYPE_ASSERT, "(headIcon)", (const char *)&queryFormat, "headIcon") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 168, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 169, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_22;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v13 )
      __debugbreak();
LABEL_22:
    v14 = &scrPlaceFull;
    goto LABEL_23;
  }
  v14 = &scrPlaceViewDisplay[v12];
LABEL_23:
  CG_WorldPosToScreenPosRealForScene((LocalClientNum_t)v12, v14, worldPosition, 0, &outScreenPos);
  ViewInfo = LUI_GetViewInfo();
  if ( ViewInfo )
    R_ScopeDistortionTransform(ViewInfo, &outScreenPos, &outScreenPos);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
  p_view = &LocalClientGlobals->refdef.view;
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = p_view->refdefViewOrg_aab;
  v = (_DWORD *)p_view->org.org.v;
  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  *(_DWORD *)&snapToLocation[8] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
  *(_DWORD *)&snapToLocation[12] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
  *(_DWORD *)&snapToLocation[16] = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
  v20 = fsqrt((float)((float)((float)(worldPosition->v[1] - *(float *)&snapToLocation[12]) * (float)(worldPosition->v[1] - *(float *)&snapToLocation[12])) + (float)((float)(worldPosition->v[0] - *(float *)&snapToLocation[8]) * (float)(worldPosition->v[0] - *(float *)&snapToLocation[8]))) + (float)((float)(worldPosition->v[2] - *(float *)&snapToLocation[16]) * (float)(worldPosition->v[2] - *(float *)&snapToLocation[16])));
  if ( v20 != 0.0 )
  {
    maxDistance = headIcon->maxDistance;
    v22 = (float)maxDistance;
    if ( v22 <= 0.0 || v20 <= v22 )
    {
      naturalDistance = (float)headIcon->naturalDistance;
      if ( naturalDistance > 0.0 )
      {
        v25 = naturalDistance / v20;
        I_fclamp(v25, 0.5, 1.0);
        v24 = v25;
        maxDistance = headIcon->maxDistance;
      }
      else
      {
        v24 = FLOAT_1_0;
      }
      if ( maxDistance > 0 )
      {
        v27 = 0i64;
        *(float *)&v27 = (float)((float)maxDistance - v20) * 0.1;
        _XMM2 = v27;
        __asm { vminss  xmm6, xmm2, xmm7 }
      }
      else
      {
        *(float *)&_XMM6 = FLOAT_1_0;
      }
      CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
      v30 = (float)((float)(*(float *)&CurrentUnitScale * 0.66666669) * v24) * *(float *)&_XMM6;
      v31 = v30 * 80.0;
      v33 = (float)(_mm_cvtepi32_ps((__m128i)image->width).m128_f32[0] * (float)(v30 * 80.0)) / _mm_cvtepi32_ps((__m128i)image->height).m128_f32[0];
      v32 = v33;
      if ( (headIcon->flags & 4) != 0 )
      {
        screenPosition.v[0] = outScreenPos.v[0];
        screenPosition.v[1] = outScreenPos.v[1] - (float)(v31 * 0.5);
        screenSnapOffset.v[0] = 0.0;
        screenSnapOffset.v[1] = 0.0;
        snapToLocation[0] = 0;
        LUIElement_Anchored_SnapScreenPositionToEdges((const LocalClientNum_t)v12, 0.0, v33, v31, 0.5, &screenPosition, &screenPosition, snapToLocation, &screenSnapOffset);
        outScreenPos.v[0] = screenPosition.v[0];
        outScreenPos.v[1] = screenPosition.v[1] + (float)(v31 * 0.5);
      }
      v47 = *color;
      if ( introLerp >= 1.0 )
      {
        if ( outroLerp <= 0.0 )
        {
LABEL_49:
          v38 = LODWORD(FLOAT_1_0);
          *(float *)&v38 = (float)(1.0 - CG_GetLocalClientGlobals((const LocalClientNum_t)v12)->predictedPlayerState.weapCommon.fWeaponPosFrac) * 0.2;
          _XMM1 = v38;
          __asm { vmaxss  xmm3, xmm1, xmm6 }
          v47.v[3] = *(float *)&_XMM3 * v47.v[3];
          LUI_CoD_GenerateQuadVerts(outScreenPos.v[0] - (float)(v32 * 0.5), outScreenPos.v[1] - v31, (float)(v32 * 0.5) + outScreenPos.v[0], outScreenPos.v[1], (vec4_t (*)[4])quadVerts);
          LUI_Render_DrawImage((const LocalClientNum_t)v12, elementa, v42, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &v47, image);
          goto LABEL_50;
        }
        v37 = LUI_Tween_Ease(outroLerp, EASE_IN_QUAD);
        v35 = (float)(*(float *)&v37 * 20.0) * v30;
        v36 = (float)(1.0 - outroLerp) * v47.v[3];
      }
      else
      {
        v34 = LUI_Tween_Ease(introLerp, EASE_OUT_QUAD);
        v35 = (float)((float)(1.0 - *(float *)&v34) * 40.0) * v30;
        v36 = introLerp * v47.v[3];
      }
      v47.v[3] = v36;
      outScreenPos.v[1] = outScreenPos.v[1] - v35;
      goto LABEL_49;
    }
  }
LABEL_50:
  memset(&snapToLocation[8], 0, 0xCui64);
}

/*
==============
LUI_LuaCall_LUIElement_SetupHeadIcons
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupHeadIcons(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupHeadIcons_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupHeadIcons_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupHeadIcons_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  void *v3; 
  signed int i; 
  unsigned int v5; 
  bdRandom v7; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = LUIElement_HeadIcons_Render;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 0xF00ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  memset_0(v3, 0, 0xF00ui64);
  for ( i = 0; (unsigned int)i < 0x20; ++i )
  {
    bdRandom::bdRandom(&v7);
    v5 = bdRandom::nextUInt(&v7) % 0x22;
    bdRandom::~bdRandom(&v7);
    SetObfuscatedFunction(v5, (unsigned __int64)v3 + 120 * i + 88, (unsigned __int64)v3 + 120 * i + 80, (void (__fastcall **)(const vec3_t *, vec4_t *))v3 + 15 * i + 10, (void (__fastcall **)(const vec4_t *, vec3_t *))v3 + 15 * i + 11, s_aab_set_pointer_iconpos, s_aab_get_pointer_iconpos);
  }
  return 0i64;
}

