/*
==============
LUIElement_MouseCursor_Render
==============
*/

void __fastcall LUIElement_MouseCursor_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue)
{
  void *controllerIndex; 
  float fmt; 
  float alphaa; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_mousecursor.cpp", 13, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  if ( element->imageData.image )
  {
    controllerIndex = element->customElementData;
    if ( (unsigned __int64)controllerIndex + 0x80000000 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)controllerIndex, "signed", element->customElementData) )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, [rsp+68h+blue]
      vmovss  xmm3, [rsp+68h+green]; green
      vmovss  xmm2, [rsp+68h+red]; red
      vmovss  [rsp+68h+alpha], xmm6
      vmovss  dword ptr [rsp+68h+fmt], xmm0
    }
    LUI_Render_DrawMouseCursor(localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmt, alphaa, (int)controllerIndex);
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
LUI_LuaCall_LUIElement_SetMouseCursorController
==============
*/
__int64 LUI_LuaCall_LUIElement_SetMouseCursorController(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->customElementData = (void *)lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupMouseCursor
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupMouseCursor(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_MouseCursor_Render;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

