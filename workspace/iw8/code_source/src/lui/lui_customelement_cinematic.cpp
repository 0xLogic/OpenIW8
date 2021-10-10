/*
==============
LUIElement_Cinematic_Render
==============
*/

void __fastcall LUIElement_Cinematic_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue)
{
  unsigned __int8 v10; 
  float *customElementData; 
  unsigned __int8 v12; 
  Material *v16; 
  vec4_t quadVerts[4]; 

  _XMM6 = *(_OWORD *)&alpha;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  v10 = element->currentAnimationState.userDataBytes[1];
  customElementData = (float *)element->customElementData;
  *((_BYTE *)customElementData + 80) = v10 != 0;
  v12 = element->currentAnimationState.userDataBytes[0];
  if ( v12 && v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_cinematic.cpp", 55, ASSERT_TYPE_ASSERT, "(!isMP4 || ( isMP4 && !data->fullscreenCinematic ))", (const char *)&queryFormat, "!isMP4 || ( isMP4 && !data->fullscreenCinematic )") )
    __debugbreak();
  if ( !*((_BYTE *)customElementData + 80) )
  {
    _XMM1 = *((unsigned int *)customElementData + 12);
    __asm
    {
      vcmpltss xmm0, xmm1, cs:__real@3f800000
      vblendvps xmm2, xmm6, xmm1, xmm0
    }
    customElementData[13] = red;
    customElementData[15] = blue;
    customElementData[14] = green;
    customElementData[16] = *(float *)&_XMM2;
    LUI_CoD_GenerateQuadVerts(element->left, element->top, element->right, element->bottom, (vec4_t (*)[4])quadVerts);
    *(float *)&_XMM1 = quadVerts[0].v[1];
    *customElementData = quadVerts[0].v[0];
    *(float *)&_XMM0 = quadVerts[1].v[0];
    customElementData[1] = *(float *)&_XMM1;
    *(float *)&_XMM1 = quadVerts[1].v[1];
    customElementData[2] = *(float *)&_XMM0;
    *(float *)&_XMM0 = quadVerts[2].v[0];
    customElementData[3] = *(float *)&_XMM1;
    *(float *)&_XMM1 = quadVerts[2].v[1];
    customElementData[4] = *(float *)&_XMM0;
    *(float *)&_XMM0 = quadVerts[3].v[0];
    customElementData[5] = *(float *)&_XMM1;
    *(float *)&_XMM1 = quadVerts[3].v[1];
    customElementData[6] = *(float *)&_XMM0;
    customElementData[7] = *(float *)&_XMM1;
    v16 = s_luiCinematicMaterial;
    if ( v12 )
      v16 = s_luiCinematicMP4Material;
    *((_QWORD *)customElementData + 9) = v16;
    if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_cinematic.cpp", 78, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    customElementData[8] = element->imageData.uMin;
    customElementData[9] = element->imageData.vMin;
    customElementData[10] = element->imageData.uMax;
    customElementData[11] = element->imageData.vMax;
  }
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUIElement_Cinematic_RenderImmediate, customElementData, 0x58ui64, 8ui64);
}

/*
==============
LUIElement_Cinematic_RenderImmediate
==============
*/
void LUIElement_Cinematic_RenderImmediate(const LUICinematicRenderData *data)
{
  if ( data->fullscreenCinematic )
    R_Cinematic_DrawFullscreen_Letterboxed();
  else
    R_AddCmdDrawQuadPicST(data->drawVerts, data->uMin, data->vMin, data->uMax, data->vMax, &data->color, data->material);
}

/*
==============
LUI_LuaCall_LUIElement_SetupCinematic
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupCinematic(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupCinematic_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupCinematic_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupCinematic_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUICinematicRenderData *CustomElement; 

  if ( j_lua_gettop(luaVM) < 1 || j_lua_gettop(luaVM) > 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1 && lua_gettop( luaVM ) <= 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_gettop(luaVM) >= 2 && j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) < 2 || lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->usageFlags |= 1u;
  LUI_LUIElement_SetupUIBaseImage(v3, (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_Cinematic_Render);
  if ( v3->customElementData )
  {
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUICinematicRenderData>(v3, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v3, luaVM);
    CustomElement = (LUICinematicRenderData *)j_lua_newuserdata(luaVM, 0x58ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v3->customElementData = CustomElement;
    memset_0(CustomElement, 0, sizeof(LUICinematicRenderData));
  }
  if ( j_lua_gettop(luaVM) >= 2 )
  {
    j_lua_getfield(luaVM, 2, "mp4");
    if ( j_lua_type(luaVM, -1) == 1 )
      v3->currentAnimationState.userDataBytes[0] = j_lua_toboolean(luaVM, -1) > 0;
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, 2, "fullscreen");
    if ( j_lua_type(luaVM, -1) == 1 )
      v3->currentAnimationState.userDataBytes[1] = j_lua_toboolean(luaVM, -1) > 0;
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, 2, "forcedAlpha");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
      __asm { vmaxss  xmm2, xmm0, xmm1 }
    }
    else
    {
      *(float *)&_XMM2 = FLOAT_1_0;
    }
    CustomElement->forcedAlpha = *(float *)&_XMM2;
    j_lua_settop(luaVM, -2);
  }
  return 0i64;
}

