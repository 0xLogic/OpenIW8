/*
==============
LUIElement_ScreenCenterFade_EnableFade
==============
*/
__int64 LUIElement_ScreenCenterFade_EnableFade(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:EnableFade()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    LUIElement_ScreenCenterFade_GetConfigData(v2, luaVM)->fadeEnabled = 1;
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
LUIElement_ScreenCenterFade_DisableFade
==============
*/
__int64 LUIElement_ScreenCenterFade_DisableFade(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:DisableFade()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    LUIElement_ScreenCenterFade_GetConfigData(v2, luaVM)->fadeEnabled = 0;
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
LUIElement_ScreenCenterFade_GetAlpha
==============
*/
float LUIElement_ScreenCenterFade_GetAlpha(const LocalClientNum_t localClientNum, const LUIScreenCenterFade *const configData, const float unitScale, const vec2_t *topleft, const vec2_t *bottomRight)
{
  __int64 v7; 
  bool v8; 
  vec2_t *p_realViewportSize; 
  __int128 v10; 
  float v11; 
  __int64 v15; 
  __int64 v16; 
  int v17; 

  v7 = localClientNum;
  if ( configData->radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_screencenterfade.cpp", 35, ASSERT_TYPE_ASSERT, "(configData->radius > 0.f)", (const char *)&queryFormat, "configData->radius > 0.f") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    v17 = 2;
    LODWORD(v15) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  if ( (int)v7 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_screencenterfade.cpp", 37, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      p_realViewportSize = &scrPlaceViewDisplay[v7].realViewportSize;
      goto LABEL_17;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v8 )
      __debugbreak();
  }
  p_realViewportSize = &scrPlaceFull.realViewportSize;
LABEL_17:
  v10 = LODWORD(FLOAT_0_5);
  v11 = (float)(0.5 * p_realViewportSize->v[0]) - (float)((float)((float)(topleft->v[0] + bottomRight->v[0]) * 0.5) * unitScale);
  *(float *)&v10 = (float)(0.5 * p_realViewportSize->v[1]) - (float)((float)((float)(topleft->v[1] + bottomRight->v[1]) * 0.5) * unitScale);
  *(float *)&v10 = (float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v11 * v11)) / (float)((float)(unitScale * configData->radius) * (float)(unitScale * configData->radius));
  _XMM3 = v10;
  __asm { vminss  xmm7, xmm3, xmm6 }
  if ( (unsigned int)v7 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v16) = cg_t::ms_allocatedCount;
    LODWORD(v15) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v7] )
  {
    LODWORD(v16) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v16) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v16) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v16) )
      __debugbreak();
  }
  return (float)((float)((float)((float)(1.0 - cg_t::ms_cgArray[v7]->predictedPlayerState.weapCommon.fWeaponPosFrac) * configData->minAlpha) + (float)(cg_t::ms_cgArray[v7]->predictedPlayerState.weapCommon.fWeaponPosFrac * configData->minAlphaADS)) * (float)(1.0 - *(float *)&_XMM7)) + *(float *)&_XMM7;
}

/*
==============
LUIElement_ScreenCenterFade_GetConfigData
==============
*/
LUIScreenCenterFade *LUIElement_ScreenCenterFade_GetConfigData(LUIElement *const element, lua_State *const luaVM)
{
  if ( element->customElementData )
    return (LUIScreenCenterFade *)element->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (LUIScreenCenterFade *)element->customElementData;
}

/*
==============
LUIElement_ScreenCenterFade_Layout
==============
*/
void LUIElement_ScreenCenterFade_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  const LUIScreenCenterFade *customElementData; 
  float *offsets; 
  float v10; 
  bool v11; 
  LUIElement *i; 
  vec2_t bottomRight; 
  vec2_t topleft; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (const LUIScreenCenterFade *)element->customElementData;
  LUIElement_UpdateLayout(element, unitScale, deltaTime, luaVM);
  if ( customElementData->fadeEnabled )
  {
    offsets = customElementData->proxyElement->currentAnimationState.position.x.offsets;
    v10 = offsets[52];
    topleft.v[0] = offsets[51];
    bottomRight.v[0] = offsets[53];
    v11 = customElementData->radius > 0.0;
    topleft.v[1] = v10;
    bottomRight.v[1] = offsets[54];
    if ( v11 )
      element->currentAnimationState.alpha = LUIElement_ScreenCenterFade_GetAlpha(localClientNum, customElementData, 1.0, &topleft, &bottomRight);
  }
  for ( i = element->firstChild; i; i = i->nextSibling )
    LUIElement_Layout(localClientNum, i, unitScale, deltaTime, luaVM);
}

/*
==============
LUI_LuaCall_LUIElement_SetupScreenCenterFadeElement
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScreenCenterFadeElement(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupScreenCenterFadeElement_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupScreenCenterFadeElement_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScreenCenterFadeElement_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUIScreenCenterFade *CustomElement; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->layoutFunction = LUIElement_ScreenCenterFade_Layout;
  v3->usageFlags |= 3u;
  LUI_LUIElement_RegisterMethods(v3, luaVM, s_fadeMethods);
  if ( v3->customElementData )
  {
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIScreenCenterFade>(v3, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v3, luaVM);
    CustomElement = (LUIScreenCenterFade *)j_lua_newuserdata(luaVM, 0x20ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v3->customElementData = CustomElement;
    *(_QWORD *)&CustomElement->radius = 0i64;
    CustomElement->proxyElement = NULL;
    *(_QWORD *)&CustomElement->minAlpha = 0i64;
    *(_QWORD *)&CustomElement->fadeEnabled = 0i64;
  }
  j_lua_getfield(luaVM, 2, "radius");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    LODWORD(_XMM6) = 0;
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    LODWORD(_XMM6) = 0;
    LODWORD(_XMM1) = 0;
  }
  CustomElement->radius = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "proxyElement");
  if ( j_lua_isuserdata(luaVM, -1) )
    v3 = LUI_ToElement(luaVM, -1);
  CustomElement->proxyElement = v3;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minAlpha");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    *(float *)&_XMM1 = FLOAT_0_2;
  }
  CustomElement->minAlpha = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minAlphaADS");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm6, xmm0, xmm6 }
  }
  CustomElement->minAlphaADS = *(float *)&_XMM6;
  j_lua_settop(luaVM, -2);
  return 0i64;
}

