/*
==============
LUIElement_Mask_Push
==============
*/

void __fastcall LUIElement_Mask_Push(LocalClientNum_t localClientNum, LUIElement *mask, lua_State *luaVM)
{
  ?LUIElement_Mask_Push@@YAXW4LocalClientNum_t@@PEAULUIElement@@PEAUlua_State@@@Z(localClientNum, mask, luaVM);
}

/*
==============
LUIElement_Mask_Push
==============
*/
void LUIElement_Mask_Push(LocalClientNum_t localClientNum, LUIElement *mask, lua_State *luaVM)
{
  void *customElementData; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec2_t outSize; 

  if ( !mask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_mask.cpp", 67, ASSERT_TYPE_ASSERT, "(mask)", (const char *)&queryFormat, "mask") )
    __debugbreak();
  if ( !mask->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = mask->customElementData;
  v6 = *((float *)customElementData + 4);
  v7 = (float)(v6 + *(float *)customElementData) * 0.5;
  v8 = *((float *)customElementData + 5);
  v9 = *((float *)customElementData + 2);
  v10 = *((float *)customElementData + 3);
  v11 = (float)(v8 + *((float *)customElementData + 1)) * 0.5;
  v12 = fsqrt((float)((float)(v10 - *((float *)customElementData + 1)) * (float)(v10 - *((float *)customElementData + 1))) + (float)((float)(v9 - *(float *)customElementData) * (float)(v9 - *(float *)customElementData)));
  v13 = fsqrt((float)((float)(v8 - v10) * (float)(v8 - v10)) + (float)((float)(v6 - v9) * (float)(v6 - v9)));
  LUI_Render_GetViewportSize(localClientNum, &outSize);
  if ( !LUIElement_IsImageLike(mask) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_mask.cpp", 79, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( mask ))", (const char *)&queryFormat, "LUIElement_IsImageLike( mask )") )
    __debugbreak();
  LUI_Render_PushMask(localClientNum, v7, v11, v12, v13, *((float *)customElementData + 11), *((float *)customElementData + 10), 0.0, 0, mask->imageData.uMin, mask->imageData.vMin, mask->imageData.uMax, mask->imageData.vMax, &outSize, *((GfxImage **)customElementData + 4));
}

/*
==============
LUIElement_Mask_Render
==============
*/
void LUIElement_Mask_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha)
{
  float *customElementData; 
  double CurrentParallaxAmount; 
  float *v7; 
  vec4_t *v8; 
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  vec4_t result; 
  tmat44_t<vec4_t> outMatrix; 
  vec4_t quadVerts[4]; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (float *)element->customElementData;
  customElementData[10] = alpha;
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_mask.cpp", 24, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  *((_QWORD *)customElementData + 4) = element->imageData.image;
  LUI_CoD_GenerateQuadVerts(element->left, element->top, element->right, element->bottom, (vec4_t (*)[4])quadVerts);
  CurrentParallaxAmount = LUI_Render_GetCurrentParallaxAmount();
  if ( *(float *)&CurrentParallaxAmount <= 0.0 )
  {
    *customElementData = quadVerts[0].v[0];
    customElementData[1] = quadVerts[0].v[1];
    customElementData[2] = quadVerts[1].v[0];
    customElementData[3] = quadVerts[1].v[1];
    customElementData[4] = quadVerts[2].v[0];
    customElementData[5] = quadVerts[2].v[1];
    customElementData[6] = quadVerts[3].v[0];
    customElementData[7] = quadVerts[3].v[1];
  }
  else
  {
    LUI_GetCurrentParallaxMatrix(*(float *)&CurrentParallaxAmount, &outMatrix);
    v7 = customElementData;
    v8 = quadVerts;
    v9 = 4i64;
    do
    {
      LUI_Matrix_MultiplyVector(&outMatrix, v8, &result);
      v10 = result.v[1];
      ++v8;
      *v7 = result.v[0];
      v7[1] = v10;
      v7 += 2;
      --v9;
    }
    while ( v9 );
  }
  v11 = customElementData[2] - *customElementData;
  v12 = customElementData[3] - customElementData[1];
  if ( v11 == 0.0 && v12 == 0.0 )
    customElementData[11] = 0;
  else
    customElementData[11] = atan2f_0(v12, v11) * -57.295776;
}

/*
==============
LUI_LuaCall_LUIElement_ClearMask
==============
*/
__int64 LUI_LuaCall_LUIElement_ClearMask(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: self:ClearMask()");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      v2 = LUI_ToElement(luaVM, 1);
      v2->maskElement = NULL;
      if ( LUI_ElementHasWeakTableEntry(v2, luaVM) )
      {
        LUI_PutElementOnTopOfStack(v2, luaVM);
        LUI_SetTableNil("_maskElement", luaVM);
        j_lua_settop(luaVM, -2);
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
LUI_LuaCall_LUIElement_SetMask
==============
*/
__int64 LUI_LuaCall_LUIElement_SetMask(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetMask_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetMask_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetMask_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIElement *v3; 
  LUIElement *v4; 
  _QWORD *v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: self:SetMask( maskElement )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  v3 = LUI_ToElement(luaVM, 2);
  v2->maskElement = v3;
  v4 = v3;
  if ( !v3->customElementData )
  {
    if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v4, luaVM);
    v5 = j_lua_newuserdata(luaVM, 0x30ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v4->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v4->customElementData = v5;
    *v5 = 0i64;
    v5[1] = 0i64;
    v5[2] = 0i64;
    v5[3] = 0i64;
    v5[4] = 0i64;
    v5[5] = 0i64;
    v5[4] = Image_Register("$white", IMAGE_TRACK_UI);
    v4->usageFlags |= 1u;
    v4->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_Mask_Render;
  }
  if ( LUI_ElementHasWeakTableEntry(v2, luaVM) && LUI_ElementHasWeakTableEntry(v4, luaVM) )
  {
    LUI_PutElementOnTopOfStack(v2, luaVM);
    LUI_PutElementOnTopOfStack(v4, luaVM);
    j_lua_setfield(luaVM, -2, "_maskElement");
    j_lua_settop(luaVM, -2);
  }
  return 0i64;
}

