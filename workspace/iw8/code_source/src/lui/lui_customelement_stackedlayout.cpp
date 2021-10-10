/*
==============
LUIElement_StackedLayout
==============
*/
void LUIElement_StackedLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  const LUIStackedLayout *customElementData; 
  LUIElement *firstChild; 
  float userData; 
  __int128 i; 
  float v13; 
  LUIElement *p_y; 
  float v15; 
  float v16; 
  __int128 v17; 
  LUIElement *v18; 
  LUIElement *parent; 
  LUIStackedLayoutAlignment Alignment; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  double v28; 
  float v29; 
  LUIStackedLayoutAlignment v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  LUIElement *v34; 
  LUIElement *v35; 
  float v36; 
  LUIElement *v37; 
  __int128 v38; 
  double v39; 
  float v40; 
  bool v41; 
  __int128 v42; 
  __int128 v43; 
  LUIElementAxisPosition v44; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (const LUIStackedLayout *)element->customElementData;
  LUIElement_UpdateLayout(element, unitScale, deltaTime, luaVM);
  firstChild = element->firstChild;
  userData = element->currentAnimationState.userData;
  for ( i = 0i64; firstChild; firstChild = firstChild->nextSibling )
  {
    LUIElement_Layout(localClientNum, firstChild, unitScale, deltaTime, luaVM);
    v13 = LUIElement_StackedLayout_MeasureChildSize(luaVM, unitScale, firstChild, customElementData);
    if ( customElementData->ignoreStretchingChildren )
    {
      p_y = (LUIElement *)&firstChild->currentAnimationState.position.y;
      if ( customElementData->direction != VERTICAL )
        p_y = firstChild;
      v15 = p_y->currentAnimationState.position.x.anchors[0];
      v16 = p_y->currentAnimationState.position.x.anchors[1];
      if ( (v15 != 0.0 || v16 != 1.0) && (v15 != 1.0 || v16 != 0.0) )
        continue;
    }
    if ( !customElementData->ignoreInvisibleChildren || firstChild->currentAnimationState.alpha > 0.0 )
    {
      v17 = i;
      *(float *)&v17 = *(float *)&i + v13;
      i = v17;
      if ( firstChild->nextSibling )
      {
        if ( v13 != 0.0 )
        {
          *(float *)&v17 = *(float *)&v17 + userData;
          i = v17;
        }
      }
    }
  }
  if ( customElementData->adjustSizeToContent )
  {
    if ( !element->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 187, ASSERT_TYPE_ASSERT, "(element->parent)", (const char *)&queryFormat, "element->parent") )
      __debugbreak();
    v18 = (LUIElement *)&element->currentAnimationState.position.y;
    if ( customElementData->direction != VERTICAL )
      v18 = element;
    parent = (LUIElement *)&element->parent->currentAnimationState.position.y;
    if ( customElementData->direction != VERTICAL )
      parent = element->parent;
    Alignment = LUIElement_StackedLayout_GetAlignment(customElementData, element);
    if ( Alignment )
    {
      if ( Alignment == CENTER )
      {
        v22 = parent->currentAnimationState.position.x.global[1];
        v23 = (float)(v18->currentAnimationState.position.x.global[1] + v18->currentAnimationState.position.x.global[0]) * 0.5;
        v24 = parent->currentAnimationState.position.x.global[0];
        v25 = v24 * v18->currentAnimationState.position.x.anchors[1];
        v18->currentAnimationState.position.x.offsets[0] = (float)(v23 - (float)(*(float *)&i * 0.5)) - (float)((float)((float)(1.0 - v18->currentAnimationState.position.x.anchors[0]) * v24) + (float)(v22 * v18->currentAnimationState.position.x.anchors[0]));
        v18->currentAnimationState.position.x.offsets[1] = (float)((float)(*(float *)&i * 0.5) + v23) - (float)((float)((float)(1.0 - v18->currentAnimationState.position.x.anchors[1]) * v22) + v25);
      }
      else if ( Alignment == BOTTOM )
      {
        v21 = 1.0 - v18->currentAnimationState.position.x.anchors[1];
        v18->currentAnimationState.position.x.offsets[0] = v18->currentAnimationState.position.x.offsets[1] - *(float *)&i;
        v18->currentAnimationState.position.x.anchors[0] = v21;
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 233, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
      {
        __debugbreak();
      }
    }
    else
    {
      v26 = *(float *)&i + v18->currentAnimationState.position.x.offsets[0];
      v18->currentAnimationState.position.x.anchors[1] = 1.0 - v18->currentAnimationState.position.x.anchors[0];
      v18->currentAnimationState.position.x.offsets[1] = v26;
    }
    LUIElement_CalculateGlobalRectangle(element, &element->currentAnimationState);
    LUIElement_SetDimensions(element, unitScale);
  }
  if ( customElementData->direction == VERTICAL )
  {
    v27 = *(_OWORD *)element->currentAnimationState.position.y.offsets;
    v28 = *(double *)element->currentAnimationState.position.y.anchors;
  }
  else
  {
    v27 = *(_OWORD *)element->currentAnimationState.position.x.offsets;
    v28 = *(double *)element->currentAnimationState.position.x.anchors;
  }
  *(_OWORD *)v44.offsets = v27;
  *(double *)v44.anchors = v28;
  *(float *)&v27 = LUI_Measure(&v44);
  v29 = *(float *)&v27;
  v30 = LUIElement_StackedLayout_GetAlignment(customElementData, element);
  if ( v30 == CENTER )
  {
    v31 = v27;
    *(float *)&v31 = *(float *)&v27 - *(float *)&i;
    v27 = v31;
    *(float *)&v31 = (float)(v29 - *(float *)&i) * 0.5;
    v32 = v31;
  }
  else if ( v30 == BOTTOM )
  {
    v33 = v27;
    *(float *)&v33 = *(float *)&v27 - *(float *)&i;
    v32 = v33;
  }
  else
  {
    v32 = 0i64;
  }
  v34 = element->firstChild;
  for ( element->layoutDeeplyCached = element->canCacheLayout; v34; v34 = v34->nextSibling )
  {
    if ( customElementData->ignoreStretchingChildren )
    {
      v35 = (LUIElement *)&v34->currentAnimationState.position.y;
      if ( customElementData->direction != VERTICAL )
        v35 = v34;
      v36 = v35->currentAnimationState.position.x.anchors[0];
      v27 = LODWORD(v35->currentAnimationState.position.x.anchors[1]);
      if ( (v36 != 0.0 || *(float *)&v27 != 1.0) && (v36 != 1.0 || *(float *)&v27 != 0.0) )
        goto LABEL_53;
    }
    if ( !customElementData->ignoreInvisibleChildren || v34->currentAnimationState.alpha > 0.0 )
    {
      *(float *)&v27 = LUIElement_StackedLayout_MeasureChildSize(luaVM, unitScale, v34, customElementData);
      v37 = (LUIElement *)&v34->currentAnimationState.position.y;
      if ( customElementData->direction != VERTICAL )
        v37 = v34;
      v38 = v27;
      v39 = *(double *)v37->currentAnimationState.position.x.anchors;
      *(_OWORD *)v44.offsets = *(_OWORD *)v37->currentAnimationState.position.x.offsets;
      *(double *)v44.anchors = v39;
      v40 = LUI_Measure(&v44) + *(float *)&v32;
      v27 = LODWORD(v37->currentAnimationState.position.x.global[0]);
      v41 = *(float *)&v27 <= v37->currentAnimationState.position.x.global[1];
      v37->currentAnimationState.position.x.offsets[0] = *(float *)&v32;
      v37->currentAnimationState.position.x.offsets[1] = v40;
      v37->currentAnimationState.position.x.anchors[0] = 0.0;
      v37->currentAnimationState.position.x.anchors[1] = 1.0;
      if ( !v41 )
      {
        v37->currentAnimationState.position.x.offsets[0] = v40;
        v37->currentAnimationState.position.x.offsets[1] = *(float *)&v32;
      }
      v34->layoutCached = 0;
      LUIElement_Layout(localClientNum, v34, unitScale, deltaTime, luaVM);
      if ( *(float *)&v38 > 0.0 )
      {
        v42 = v38;
        *(float *)&v42 = *(float *)&v38 + userData;
        v27 = v42;
        v43 = v32;
        *(float *)&v43 = *(float *)&v32 + *(float *)&v27;
        v32 = v43;
      }
    }
    else
    {
LABEL_53:
      v34->layoutCached = 0;
      LUIElement_Layout(localClientNum, v34, unitScale, deltaTime, luaVM);
    }
    element->layoutDeeplyCached &= v34->layoutDeeplyCached;
  }
  LUI_QuadCache_Element_Invalidate(element);
  element->layoutCached = element->canCacheLayout;
}

/*
==============
LUIElement_StackedLayout_GetAlignment
==============
*/
char LUIElement_StackedLayout_GetAlignment(const LUIStackedLayout *stackedLayout, LUIElement *element)
{
  bool v2; 
  char alignment; 
  LUIHorizontalAlignment VerticalAlignment; 

  v2 = stackedLayout->direction == VERTICAL;
  alignment = element->currentAnimationState.alignment;
  if ( v2 )
    VerticalAlignment = LUI_GetVerticalAlignment(alignment);
  else
    VerticalAlignment = LUI_GetHorizontalAlignment(alignment);
  if ( VerticalAlignment == LEFT )
    return 0;
  if ( VerticalAlignment == RIGHT )
    return 1;
  if ( VerticalAlignment != 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 66, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment value") )
      __debugbreak();
    return 0;
  }
  return 2;
}

/*
==============
LUIElement_StackedLayout_MeasureChildSize
==============
*/
float LUIElement_StackedLayout_MeasureChildSize(lua_State *luaVM, float unitScale, LUIElement *child, const LUIStackedLayout *stackedLayout)
{
  LUIStackedLayoutDirection direction; 
  bool IsTextLike; 
  __int128 v9; 
  double v10; 
  float outWidth[4]; 
  LUIElementAxisPosition v12; 
  float outHeight; 

  direction = stackedLayout->direction;
  IsTextLike = LUIElement_IsTextLike(child);
  if ( direction == VERTICAL )
  {
    if ( IsTextLike )
    {
      LUI_MeasureTextElement(unitScale, child, luaVM, outWidth, &outHeight);
      return outHeight;
    }
    v9 = *(_OWORD *)child->currentAnimationState.position.y.offsets;
    v10 = *(double *)child->currentAnimationState.position.y.anchors;
  }
  else
  {
    if ( IsTextLike )
    {
      LUI_MeasureTextElement(unitScale, child, luaVM, outWidth, &outHeight);
      return outWidth[0];
    }
    v9 = *(_OWORD *)child->currentAnimationState.position.x.offsets;
    v10 = *(double *)child->currentAnimationState.position.x.anchors;
  }
  *(_OWORD *)v12.offsets = v9;
  *(double *)v12.anchors = v10;
  return LUI_Measure(&v12);
}

/*
==============
LUI_LuaCall_LUIElement_SetAdjustSizeToContent
==============
*/
__int64 LUI_LuaCall_LUIElement_SetAdjustSizeToContent(lua_State *luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 356, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 357, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 358, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[1] = j_lua_toboolean(luaVM, 2) > 0;
  LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetDirection
==============
*/
__int64 LUI_LuaCall_LUIElement_SetDirection(lua_State *luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 317, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 318, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 319, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 2 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  *customElementData = lui_tointeger32(luaVM, 2);
  LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetIgnoreInvisibleChildren
==============
*/
__int64 LUI_LuaCall_LUIElement_SetIgnoreInvisibleChildren(lua_State *luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 343, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 344, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 345, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[3] = j_lua_toboolean(luaVM, 2) > 0;
  LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetIgnoreStretchingChildren
==============
*/
__int64 LUI_LuaCall_LUIElement_SetIgnoreStretchingChildren(lua_State *luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 330, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 331, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 332, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[2] = j_lua_toboolean(luaVM, 2) > 0;
  LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupStackedLayout
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupStackedLayout(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupStackedLayout_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupStackedLayout_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupStackedLayout_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  _DWORD *v3; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 369, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 370, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 371, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  v2->layoutFunction = LUIElement_StackedLayout;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 4ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  *v3 = 0;
  j_lua_getfield(luaVM, 2, "direction");
  if ( j_lua_isnumber(luaVM, -1) )
    *(_BYTE *)v3 = lui_tointeger32(luaVM, -1);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustSizeToContent");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)v3 + 1) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "ignoreStretchingChildren");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)v3 + 2) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "ignoreInvisibleChildren");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)v3 + 3) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  return 0i64;
}

