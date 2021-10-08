/*
==============
LUIElement_RepeatedImage_SetOffsetXY
==============
*/
__int64 LUIElement_RepeatedImage_SetOffsetXY(lua_State *const luaVM)
{
  LUIElement *v3; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: SetOffsetXY( <float>, <float> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    _RBX = LUI_LUIElement_RetrieveCustomElementData<RepeatedImageData>(v3, luaVM);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovss  dword ptr [rbx], xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovss  dword ptr [rbx+4], xmm0 }
    LUI_QuadCache_Element_Invalidate(v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
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

void __fastcall LUIElement_RepeatedImageRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  _DWORD *customElementData; 
  float fmt; 
  float vMin; 
  float v34; 
  float v35; 
  vec4_t color; 
  vec4_t quadVerts[4]; 

  __asm
  {
    vmovaps [rsp+0F8h+var_48], xmm6
    vmovss  xmm0, [rsp+0F8h+red]
    vmovss  xmm1, [rsp+0F8h+green]
  }
  _RBX = element;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+var_A8], xmm0
    vmovss  xmm0, [rsp+0F8h+blue]
    vmovss  dword ptr [rsp+0F8h+var_A8+8], xmm0
    vmovss  dword ptr [rsp+0F8h+var_A8+4], xmm1
    vmovss  dword ptr [rsp+0F8h+var_A8+0Ch], xmm3
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm { vmovaps xmm6, xmm0 }
  if ( !_RBX->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = _RBX->customElementData;
  for ( _EDI = 0; _EDI < customElementData[2]; ++_EDI )
  {
    __asm
    {
      vmovd   xmm3, edi
      vcvtdq2ps xmm3, xmm3
      vmulss  xmm0, xmm3, dword ptr [rsi]
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm0, xmm1, dword ptr [rbx+0CCh]; left
      vaddss  xmm2, xmm1, dword ptr [rbx+0D4h]; right
      vmulss  xmm1, xmm3, dword ptr [rsi+4]
      vmulss  xmm3, xmm1, xmm6
      vaddss  xmm1, xmm3, dword ptr [rbx+0D0h]; top
      vaddss  xmm3, xmm3, dword ptr [rbx+0D8h]; bottom
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    if ( !LUIElement_IsImageLike(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_repeatedimage.cpp", 79, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+124h]
      vmovss  xmm1, dword ptr [rbx+11Ch]
      vmovss  [rsp+0F8h+var_C0], xmm0
      vmovss  xmm0, dword ptr [rbx+120h]
      vmovss  [rsp+0F8h+var_C8], xmm1
      vmovss  xmm1, dword ptr [rbx+118h]
      vmovss  [rsp+0F8h+vMin], xmm0
      vmovss  dword ptr [rsp+0F8h+fmt], xmm1
    }
    LUI_Render_DrawImage(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])quadVerts, fmt, vMin, v34, v35, &color, _RBX->imageData.image);
  }
  __asm { vmovaps xmm6, [rsp+0F8h+var_48] }
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_RepeatedImageRender;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

