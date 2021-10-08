/*
==============
LUIElement_Blur_Render
==============
*/

void __fastcall LUIElement_Blur_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  LUIElement *v10; 
  float fmt; 
  float alphaa; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+48h]; amount
    vmovaps [rsp+58h+var_18], xmm6
  }
  v10 = element;
  __asm { vmovaps xmm6, xmm3 }
  LUI_Render_PushBlur(*(float *)&_XMM0);
  if ( !LUIElement_IsImageLike(v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_blur.cpp", 16, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+58h+blue]
    vmovss  xmm3, [rsp+58h+green]; green
    vmovss  xmm2, [rsp+58h+red]; red
    vmovss  [rsp+58h+alpha], xmm6
    vmovss  dword ptr [rsp+58h+fmt], xmm0
  }
  LUI_Render_ImageFill(localClientNum, v10, *(float *)&_XMM2, *(float *)&_XMM3, fmt, alphaa, v10->imageData.image, luaVM);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  LUI_Render_PopBlur();
}

/*
==============
LUI_LuaCall_LUIElement_SetupBlur
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupBlur(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  LUI_LUIElement_SetupUIBaseImage(v2, (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_Blur_Render);
  v2->currentAnimationState.userDataInt = 1056964608;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

