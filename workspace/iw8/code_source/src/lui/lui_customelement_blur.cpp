/*
==============
LUIElement_Blur_Render
==============
*/
void LUIElement_Blur_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  LUI_Render_PushBlur(element->currentAnimationState.userData);
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_blur.cpp", 16, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  LUI_Render_ImageFill(localClientNum, element, red, green, blue, alpha, element->imageData.image, luaVM);
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
  LUI_LUIElement_SetupUIBaseImage(v2, LUIElement_Blur_Render);
  v2->currentAnimationState.userDataInt = 1056964608;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

