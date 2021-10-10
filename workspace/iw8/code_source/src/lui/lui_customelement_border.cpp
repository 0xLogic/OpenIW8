/*
==============
LUIElement_Border_Render
==============
*/
void LUIElement_Border_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  double CurrentUnitScale; 
  float v11; 
  float v12; 
  float v13; 
  vec4_t color; 
  vec4_t verts[4]; 

  color.v[0] = red;
  color.v[2] = blue;
  color.v[1] = green;
  color.v[3] = alpha;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v11 = (float)((float)element->currentAnimationState.userDataBytes[1] * 0.098039217) * *(float *)&CurrentUnitScale;
  v12 = (float)((float)element->currentAnimationState.userDataBytes[2] * 0.098039217) * *(float *)&CurrentUnitScale;
  v13 = (float)((float)element->currentAnimationState.userDataBytes[3] * 0.098039217) * *(float *)&CurrentUnitScale;
  LUI_CoD_GenerateQuadVerts(element->left, v12 + element->top, (float)((float)((float)element->currentAnimationState.userDataBytes[0] * 0.098039217) * *(float *)&CurrentUnitScale) + element->left, element->bottom - v13, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
  LUI_CoD_GenerateQuadVerts(element->right - v11, v12 + element->top, element->right, element->bottom - v13, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
  LUI_CoD_GenerateQuadVerts(element->left, element->top, element->right, element->top + v12, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
  LUI_CoD_GenerateQuadVerts(element->left, element->bottom - v13, element->right, element->bottom, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessBottom
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessBottom(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBorderThicknessBottom_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessBottom_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessBottom_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBorderThicknessBottom( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  v4 = (int)(float)(*(float *)&v3 * 10.2);
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lui_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 50;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v2->currentAnimationState.userDataBytes[3] = v4;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lui_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 50;
  v7->duration = v6;
  v7->startValue.byteValue = v2->currentAnimationState.userDataBytes[3];
  v7->endValue.byteValue = v4;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessLeft
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessLeft(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBorderThicknessLeft_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessLeft_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessLeft_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBorderThicknessLeft( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  v4 = (int)(float)(*(float *)&v3 * 10.2);
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lui_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 47;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v2->currentAnimationState.userDataBytes[0] = v4;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lui_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 47;
  v7->duration = v6;
  v7->startValue.byteValue = v2->currentAnimationState.userDataBytes[0];
  v7->endValue.byteValue = v4;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessRight
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessRight(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBorderThicknessRight_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessRight_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessRight_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBorderThicknessRight( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  v4 = (int)(float)(*(float *)&v3 * 10.2);
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lui_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 48;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v2->currentAnimationState.userDataBytes[1] = v4;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lui_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 48;
  v7->duration = v6;
  v7->startValue.byteValue = v2->currentAnimationState.userDataBytes[1];
  v7->endValue.byteValue = v4;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessTop
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessTop(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBorderThicknessTop_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessTop_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessTop_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBorderThicknessTop( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  v4 = (int)(float)(*(float *)&v3 * 10.2);
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lui_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 49;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v2->currentAnimationState.userDataBytes[2] = v4;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lui_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 49;
  v7->duration = v6;
  v7->startValue.byteValue = v2->currentAnimationState.userDataBytes[2];
  v7->endValue.byteValue = v4;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupBorder
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupBorder(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupBorder_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupBorder_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupBorder_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  double v5; 
  int v6; 
  double v7; 
  int v8; 
  double v9; 
  int v10; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_getfield(luaVM, 2, "borderThicknessLeft");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v3 = lui_tonumber32(luaVM, -1);
    v4 = (int)(float)((float)(*(float *)&v3 * 0.039999999) * 255.0);
  }
  else
  {
    LOBYTE(v4) = 1;
  }
  v2->currentAnimationState.userDataBytes[0] = v4;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "borderThicknessRight");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v5 = lui_tonumber32(luaVM, -1);
    v6 = (int)(float)((float)(*(float *)&v5 * 0.039999999) * 255.0);
  }
  else
  {
    LOBYTE(v6) = 1;
  }
  v2->currentAnimationState.userDataBytes[1] = v6;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "borderThicknessTop");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v7 = lui_tonumber32(luaVM, -1);
    v8 = (int)(float)((float)(*(float *)&v7 * 0.039999999) * 255.0);
  }
  else
  {
    LOBYTE(v8) = 1;
  }
  v2->currentAnimationState.userDataBytes[2] = v8;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "borderThicknessBottom");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v9 = lui_tonumber32(luaVM, -1);
    v10 = (int)(float)((float)(*(float *)&v9 * 0.039999999) * 255.0);
  }
  else
  {
    LOBYTE(v10) = 1;
  }
  v2->currentAnimationState.userDataBytes[3] = v10;
  j_lua_settop(luaVM, -2);
  v2->renderFunction = LUIElement_Border_Render;
  return 0i64;
}

