/*
==============
LUIElement_WorldScaling_SetWorldOrigin
==============
*/
__int64 LUIElement_WorldScaling_SetWorldOrigin(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  float v4; 
  double v5; 
  float v6; 
  double v7; 
  LUIWorldScaling *Data; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetWorldOrigin( worldX, worldY, worldZ )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = *(float *)&v3;
    v5 = lui_tonumber32(luaVM, 3);
    v6 = *(float *)&v5;
    v7 = lui_tonumber32(luaVM, 4);
    Data = LUIElement_WorldScaling_GetData(v2, luaVM);
    Data->worldOrigin.v[0] = v4;
    Data->worldOrigin.v[1] = v6;
    Data->worldOrigin.v[2] = *(float *)&v7;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
  }
  return 0i64;
}

/*
==============
LUIElement_WorldScaling_GetData
==============
*/
LUIWorldScaling *LUIElement_WorldScaling_GetData(LUIElement *const element, lua_State *const luaVM)
{
  if ( element->customElementData )
    return (LUIWorldScaling *)element->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (LUIWorldScaling *)element->customElementData;
}

/*
==============
LUIElement_WorldScaling_Render
==============
*/
void LUIElement_WorldScaling_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v10; 
  const vec3_t *customElementData; 
  bool v12; 
  ScreenPlacement *v13; 
  double CurrentUnitScale; 
  float v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  float v21; 
  float v22; 
  __int64 v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  float v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v36; 
  __int128 v39; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  __int128 top_low; 
  __int128 v51; 
  __int128 v52; 
  float v53; 
  float top; 
  float left; 
  float right; 
  float v58; 
  float v59; 
  float v60; 
  __int128 v61; 
  float v65; 
  vec2_t outScreenPos; 

  *(float *)&_XMM12 = alpha;
  v10 = localClientNum;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (const vec3_t *)element->customElementData;
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v13 = &scrPlaceViewDisplay[v10];
      goto LABEL_11;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v12 )
      __debugbreak();
  }
  v13 = &scrPlaceFull;
LABEL_11:
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v15 = *(float *)&CurrentUnitScale;
  CG_WorldPosToScreenPosReal((LocalClientNum_t)v10, v13, customElementData, &outScreenPos);
  _XMM11 = 0i64;
  if ( *(float *)&CurrentUnitScale > 0.0 )
  {
    v21 = customElementData[1].v[2];
    if ( v21 > 0.0 )
    {
      v22 = customElementData[2].v[0];
      if ( v22 > 0.0 )
      {
        v23 = *(_QWORD *)&customElementData[2].z;
        v24 = (float)(0.5 * v13->realViewportSize.v[0]) * (float)(1.0 / *(float *)&CurrentUnitScale);
        v25 = (float)(0.5 * v13->realViewportSize.v[1]) * (float)(1.0 / *(float *)&CurrentUnitScale);
        v26 = *(unsigned int *)(v23 + 216);
        v27 = (float)((float)((float)(*(float *)(v23 + 212) + *(float *)(v23 + 204)) * 0.5) * (float)(1.0 / *(float *)&CurrentUnitScale)) - v24;
        v28 = v27 * v22;
        v29 = (float)((float)((float)(*(float *)(v23 + 216) + *(float *)(v23 + 208)) * 0.5) * (float)(1.0 / *(float *)&CurrentUnitScale)) - v25;
        *(float *)&v26 = v29 * v21;
        v31 = v26 & _xmm;
        *(float *)&v31 = *(float *)&v31 + 1.0e-10;
        v30 = v31;
        *(float *)&v31 = *(float *)&v31 + v28;
        _XMM4 = v31;
        __asm
        {
          vcmpless xmm0, xmm11, xmm5
          vblendvps xmm3, xmm4, xmm1, xmm0
        }
        v36 = v30;
        *(float *)&v36 = *(float *)&v30 - v28;
        _XMM2 = v36;
        __asm
        {
          vcmpless xmm0, xmm11, xmm5
          vblendvps xmm0, xmm2, xmm4, xmm0
        }
        v39 = _XMM3;
        *(float *)&v39 = (float)((float)((float)((float)(*(float *)&_XMM3 / *(float *)&_XMM0) * 0.1963) * (float)(*(float *)&_XMM3 / *(float *)&_XMM0)) - 0.9817) * (float)(*(float *)&_XMM3 / *(float *)&_XMM0);
        _XMM0 = LODWORD(FLOAT_2_3561945);
        __asm
        {
          vcmpless xmm2, xmm11, xmm5
          vblendvps xmm1, xmm0, xmm1, xmm2
        }
        *(float *)&v39 = *(float *)&v39 + *(float *)&_XMM1;
        _XMM1 = v39 ^ _xmm;
        __asm
        {
          vcmpless xmm0, xmm11, xmm6
          vblendvps xmm1, xmm1, xmm3, xmm0
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v17, v16, v18, v19);
        *(float *)&_XMM3 = (float)((float)(*(float *)&_XMM0 * customElementData[2].v[0]) + v25) - v25;
        v46 = (float)((float)(_mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_f32[0] * customElementData[1].v[2]) + v24) - v24;
        v47 = (float)((float)(v29 * v29) + (float)(v27 * v27)) - (float)((float)(*(float *)&_XMM3 * *(float *)&_XMM3) + (float)(v46 * v46));
        if ( v47 <= 0.0 )
        {
          v48 = fsqrt(COERCE_FLOAT(LODWORD(v47) ^ _xmm)) * (float)(1.0 / customElementData[2].v[1]);
          I_fclamp(v48, 0.0, *(float *)&_XMM12);
          *(float *)&_XMM12 = v48;
        }
        else
        {
          LODWORD(_XMM12) = 0;
        }
      }
    }
  }
  v49 = customElementData[1].v[0];
  if ( v49 > 0.0 )
  {
    top_low = LODWORD(element->top);
    *(float *)&top_low = element->top - outScreenPos.v[1];
    v51 = top_low & _xmm;
    v52 = v51;
    *(float *)&v52 = *(float *)&v51 / v15;
    if ( (float)(*(float *)&v51 / v15) <= v49 )
      return;
    v53 = customElementData[1].v[1];
    if ( v53 >= 1.0 )
    {
      *(float *)&v52 = (float)(*(float *)&v52 - v49) / v53;
      _XMM1 = v52;
      __asm { vminss  xmm12, xmm1, xmm12 }
    }
  }
  if ( *(float *)&_XMM12 > 0.0 )
  {
    top = element->top;
    left = element->left;
    right = element->right;
    v58 = outScreenPos.v[1] - top;
    v59 = right - left;
    if ( (float)(outScreenPos.v[1] - top) >= 0.0 )
    {
      v60 = (float)((float)(right - left) * 0.5) + left;
      v61 = LODWORD(outScreenPos.v[0]);
      *(float *)&v61 = fsqrt((float)((float)(outScreenPos.v[0] - v60) * (float)(outScreenPos.v[0] - v60)) + (float)(v58 * v58));
      _XMM3 = v61;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm13, xmm0
      }
      v65 = atan2f_0((float)(outScreenPos.v[0] - v60) * (float)(1.0 / *(float *)&_XMM0), v58 * (float)(1.0 / *(float *)&_XMM0)) * -57.295776;
      LUI_Render_DrawQuadRotatedRelativeToPoint((const LocalClientNum_t)v10, element, v60, top, v60, (float)(v58 * 0.5) + top, v59, v58, 0.0, 0.0, 1.0, 1.0, v65, red, green, blue, *(float *)&_XMM12, element->imageData.image, luaVM);
    }
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupWorldScalingElement
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupWorldScalingElement(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupWorldScalingElement_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupWorldScalingElement_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupWorldScalingElement_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUIWorldScaling *CustomElement; 
  LUIElement *v10; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  LUI_LUIElement_RegisterMethods(v3, luaVM, s_worldScalingMethods);
  if ( v3->customElementData )
  {
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIWorldScaling>(v3, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v3, luaVM);
    CustomElement = (LUIWorldScaling *)j_lua_newuserdata(luaVM, 0x28ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v3->customElementData = CustomElement;
    *(_QWORD *)CustomElement->worldOrigin.v = 0i64;
    *(_QWORD *)&CustomElement->worldOrigin.z = 0i64;
    *(_QWORD *)&CustomElement->heightFadeMargin = 0i64;
    *(_QWORD *)&CustomElement->verticalHideRadius = 0i64;
    CustomElement->fadeLocusElement = NULL;
  }
  j_lua_getfield(luaVM, 2, "hideHeight");
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
  CustomElement->hideHeight = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "heightFadeMargin");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    LODWORD(_XMM1) = 0;
  }
  CustomElement->heightFadeMargin = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "centerFadeMargin");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    LODWORD(_XMM1) = 0;
  }
  CustomElement->centerFadeMargin = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "horizontalHideRadius");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    LODWORD(_XMM1) = 0;
  }
  CustomElement->horizontalHideRadius = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "verticalHideRadius");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm6, xmm0, xmm6 }
  }
  CustomElement->verticalHideRadius = *(float *)&_XMM6;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "fadeLocusElement");
  if ( j_lua_isuserdata(luaVM, -1) )
    v10 = LUI_ToElement(luaVM, -1);
  else
    v10 = v3;
  CustomElement->fadeLocusElement = v10;
  j_lua_settop(luaVM, -2);
  *(_QWORD *)CustomElement->worldOrigin.v = 0i64;
  CustomElement->worldOrigin.v[2] = 0.0;
  v3->renderFunction = LUIElement_WorldScaling_Render;
  return 0i64;
}

