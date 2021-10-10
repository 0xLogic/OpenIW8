/*
==============
LUIElement_FPSCounter_Render
==============
*/
void LUIElement_FPSCounter_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  const dvar_t *v9; 
  unsigned int flags; 
  const char *v14; 
  const char *text; 
  int fps; 
  FontGlowStyle fontGlowStyle; 

  v9 = DVARBOOL_cg_fpsCounter;
  if ( !DVARBOOL_cg_fpsCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fpsCounter") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v9->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v9->name) )
      __debugbreak();
  }
  if ( v9->current.enabled )
  {
    CG_Draw_GetFPS(&fps, NULL, 0);
    if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
      __debugbreak();
    v14 = UI_ReplaceConversionInt(*(const char **)element->customElementData, fps);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&fontGlowStyle.outlineGlowMinDistance = _XMM0;
    fontGlowStyle.glowMinDistance = FLOAT_N0_2;
    fontGlowStyle.glowColor.v[2] = 0.0;
    fontGlowStyle.glowColor.v[1] = 0.0;
    fontGlowStyle.glowColor.v[0] = 0.0;
    fontGlowStyle.glowMaxDistance = FLOAT_0_2;
    *(_QWORD *)&fontGlowStyle.outlineGlowColor.xyz.z = 0i64;
    fontGlowStyle.glowColor.v[3] = FLOAT_1_0;
    fontGlowStyle.glowUVOffset.v[1] = FLOAT_N0_001;
    fontGlowStyle.glowUVOffset.v[0] = FLOAT_N0_001;
    text = v14;
    if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_fpscounter.cpp", 37, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
      __debugbreak();
    LUI_Interface_DrawText(localClientNum, root, element, element->right, element->bottom, red, green, blue, alpha, text, element->textData.font, element->bottom - element->top, -1.0, 0, 0, element->currentAnimationState.alignment, NULL, &fontGlowStyle, NULL, luaVM);
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupFPSCounter
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupFPSCounter(lua_State *luaVM)
{
  LUIElement *v2; 
  _QWORD *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = LUIElement_FPSCounter_Render;
  LUIElement_InitTextLikeElement(v2);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 8ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  *v3 = 0i64;
  *v3 = SEH_StringEd_GetString("LUA_MENU/FPS");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

