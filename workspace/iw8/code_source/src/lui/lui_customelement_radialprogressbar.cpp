/*
==============
LUIElement_RadialProgressBar_SetProgress
==============
*/
__int64 LUIElement_RadialProgressBar_SetProgress(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_RadialProgressBar_SetProgress_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_RadialProgressBar_SetProgressBarCounterClockwise
==============
*/
__int64 LUIElement_RadialProgressBar_SetProgressBarCounterClockwise(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetProgressBarCounterClockwise( isCounterClockwise )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      if ( j_lua_type(luaVM, 2) == 1 )
      {
        v2 = LUI_ToElement(luaVM, 1);
        if ( LUI_ElementHasWeakTableEntry(v2, luaVM) )
          v2->currentAnimationState.userDataShorts[1] = j_lua_toboolean(luaVM, 2) != 0;
      }
    }
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
LUIElement_RadialProgressBar_DrawPiece
==============
*/
void LUIElement_RadialProgressBar_DrawPiece(const LocalClientNum_t localClientNum, LUIElement *element, float uOffset, const vec4_t (*quadVerts)[4], const vec4_t *color, float progress, lua_State *luaVM)
{
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialprogressbar.cpp", 17, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  LUI_Render_DrawImageRotatedUV(localClientNum, element, luaVM, quadVerts, 0.5, 0.5, 0.5, 0.5, uOffset, 0.0, uOffset + 0.5, 1.0, progress * -360.0, color, element->imageData.image);
}

/*
==============
LUIElement_RadialProgressBar_Render
==============
*/
void LUIElement_RadialProgressBar_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  int v8; 
  float right; 
  __int16 v12; 
  float v13; 
  float v14; 
  float top; 
  double v16; 
  float v17; 
  double v18; 
  bool v19; 
  bool v20; 
  double v21; 
  vec4_t color; 
  vec4_t quadVerts[4]; 
  vec4_t v24[4]; 

  v8 = element->currentAnimationState.userDataShorts[0];
  right = element->right;
  color.v[0] = red;
  color.v[2] = blue;
  v12 = element->currentAnimationState.userDataShorts[1];
  v13 = (float)v8 * 0.000030518509;
  v14 = (float)(right + element->left) * 0.5;
  color.v[1] = green;
  top = element->top;
  color.v[3] = alpha;
  LUI_CoD_GenerateQuadVerts(v14, top, right, element->bottom, (vec4_t (*)[4])quadVerts);
  LUI_CoD_GenerateQuadVerts(element->left, element->top, v14, element->bottom, (vec4_t (*)[4])v24);
  if ( v12 )
  {
    v16 = I_fclamp(COERCE_FLOAT(LODWORD(v13) ^ _xmm), -1.0, -0.5);
    v17 = *(float *)&v16;
    v18 = I_fclamp(COERCE_FLOAT(LODWORD(v13) ^ _xmm), -0.5, 0.0);
    v19 = v17 < -0.5;
    v20 = *(float *)&v18 < 0.0;
  }
  else
  {
    v21 = I_fclamp(v13 + 0.5, 0.0, 1.0);
    v17 = *(float *)&v21;
    v18 = I_fclamp(v13 - 0.5, 0.0, 1.0);
    v19 = v17 > 0.5;
    v20 = *(float *)&v18 > 0.0;
  }
  if ( v19 )
    LUIElement_RadialProgressBar_DrawPiece(localClientNum, element, 0.5, (const vec4_t (*)[4])quadVerts, &color, v17, luaVM);
  if ( v20 )
    LUIElement_RadialProgressBar_DrawPiece(localClientNum, element, 0.0, (const vec4_t (*)[4])v24, &color, *(float *)&v18, luaVM);
}

/*
==============
LUIElement_RadialProgressBar_SetProgress_impl
==============
*/
__int64 LUIElement_RadialProgressBar_SetProgress_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  double v4; 
  int v5; 
  LUITweenProperty v6; 
  int v7; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetProgressInC( progress, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  v4 = I_fclamp(*(float *)&v3, 0.0, 1.0);
  v5 = (int)(float)(*(float *)&v4 * 32767.0);
  if ( j_lua_gettop(luaVM) < 3 || (v7 = lui_tointeger32(luaVM, 3), v7 <= 0) )
  {
    LOBYTE(v6) = 52;
    LUI_Tween_InterruptElementTween(v2, v6, luaVM);
    v2->currentAnimationState.dataSource = v5;
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 52;
  v8->duration = v7;
  v8->startValue.shortValue = v2->currentAnimationState.userDataShorts[0];
  v8->endValue.shortValue = v5;
  LUI_Tween_AddElementTween(v2, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupRadialProgressBar
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRadialProgressBar(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_radialProgressBarMethods);
  v2->usageFlags |= 1u;
  LUI_LUIElement_SetupUIBaseImage(v2, LUIElement_RadialProgressBar_Render);
  v3 = j_lua_toboolean(luaVM, 2);
  v2->currentAnimationState.dataSource = 0;
  v2->currentAnimationState.userDataShorts[1] = v3 != 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

