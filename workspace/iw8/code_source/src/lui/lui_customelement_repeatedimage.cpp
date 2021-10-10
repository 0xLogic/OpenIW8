/*
==============
LUIElement_RepeatedImage_SetOffsetXY
==============
*/
__int64 LUIElement_RepeatedImage_SetOffsetXY(lua_State *const luaVM)
{
  LUIElement *v2; 
  RepeatedImageData *CustomElement; 
  double v4; 
  double v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: SetOffsetXY( <float>, <float> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<RepeatedImageData>(v2, luaVM);
    v4 = lui_tonumber32(luaVM, 2);
    CustomElement->offset[0] = *(float *)&v4;
    v5 = lui_tonumber32(luaVM, 3);
    CustomElement->offset[1] = *(float *)&v5;
    LUI_QuadCache_Element_Invalidate(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUIElement_RepeatedImage_SetCount
==============
*/
__int64 LUIElement_RepeatedImage_SetCount(lua_State *const luaVM)
{
  LUIElement *v2; 
  RepeatedImageData *CustomElement; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: SetCount( <int> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<RepeatedImageData>(v2, luaVM);
    CustomElement->count = lui_tointeger32(luaVM, 2);
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
LUIElement_RepeatedImageRender
==============
*/
void LUIElement_RepeatedImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  double CurrentUnitScale; 
  float *customElementData; 
  unsigned int i; 
  float v13; 
  vec4_t color; 
  vec4_t quadVerts[4]; 

  color.v[0] = red;
  color.v[2] = blue;
  color.v[1] = green;
  color.v[3] = alpha;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (float *)element->customElementData;
  for ( i = 0; (signed int)i < *((_DWORD *)customElementData + 2); ++i )
  {
    v13 = _mm_cvtepi32_ps((__m128i)i).m128_f32[0];
    LUI_CoD_GenerateQuadVerts((float)((float)(v13 * *customElementData) * *(float *)&CurrentUnitScale) + element->left, (float)((float)(v13 * customElementData[1]) * *(float *)&CurrentUnitScale) + element->top, (float)((float)(v13 * *customElementData) * *(float *)&CurrentUnitScale) + element->right, (float)((float)(v13 * customElementData[1]) * *(float *)&CurrentUnitScale) + element->bottom, (vec4_t (*)[4])quadVerts);
    if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_repeatedimage.cpp", 79, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, element->imageData.uMin, element->imageData.vMin, element->imageData.uMax, element->imageData.vMax, &color, element->imageData.image);
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupRepeatedImage
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRepeatedImage(lua_State *luaVM)
{
  LUIElement *v2; 
  _QWORD *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_repeatedImageMethods);
  v2->usageFlags |= 1u;
  v2->imageData.uMin = 0.0;
  *(_QWORD *)&v2->textData.fontSize = 1065353216i64;
  v2->imageData.vMax = 1.0;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 0xCui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  *v3 = 0i64;
  *((_DWORD *)v3 + 2) = 0;
  v2->renderFunction = LUIElement_RepeatedImageRender;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

