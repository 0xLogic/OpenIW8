/*
==============
LUIElement_FPSCounter_Render
==============
*/

void __fastcall LUIElement_FPSCounter_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  const dvar_t *v10; 
  unsigned int flags; 
  const char *v16; 
  const char *text; 
  float fmt; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  int fps; 
  FontGlowStyle fontGlowStyle; 

  __asm { vmovaps [rsp+138h+var_48], xmm6 }
  v10 = DVARBOOL_cg_fpsCounter;
  _RDI = element;
  __asm { vmovaps xmm6, xmm3 }
  if ( !DVARBOOL_cg_fpsCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fpsCounter") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v10->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v10->name) )
      __debugbreak();
  }
  if ( v10->current.enabled )
  {
    CG_Draw_GetFPS(&fps, NULL, 0);
    if ( !_RDI->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
      __debugbreak();
    v16 = UI_ReplaceConversionInt(*(const char **)_RDI->customElementData, fps);
    __asm
    {
      vmovss  xmm1, cs:__real@3e4ccccd
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+138h+var_90.outlineGlowMinDistance], xmm0
      vmovss  xmm0, cs:__real@be4ccccd
      vmovss  [rsp+138h+var_90.glowMinDistance], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+138h+var_90.glowColor+8], xmm0
      vmovss  dword ptr [rsp+138h+var_90.glowColor+4], xmm0
      vmovss  dword ptr [rsp+138h+var_90.glowColor], xmm0
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+138h+var_90.glowMaxDistance], xmm1
      vmovss  xmm1, cs:__real@ba83126f
    }
    *(_QWORD *)&fontGlowStyle.outlineGlowColor.xyz.z = 0i64;
    __asm
    {
      vmovss  dword ptr [rsp+138h+var_90.glowColor+0Ch], xmm0
      vmovss  dword ptr [rsp+138h+var_90.glowUVOffset+4], xmm1
      vmovss  dword ptr [rsp+138h+var_90.glowUVOffset], xmm1
    }
    text = v16;
    if ( !LUIElement_IsTextLike(_RDI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_fpscounter.cpp", 37, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+0D8h]
      vmovss  xmm0, cs:__real@bf800000
      vsubss  xmm1, xmm2, dword ptr [rdi+0D0h]
      vmovss  xmm3, dword ptr [rdi+0D4h]; x
      vmovss  [rsp+138h+var_D8], xmm0
      vmovss  xmm0, [rsp+138h+blue]
      vmovss  [rsp+138h+var_E0], xmm1
      vmovss  xmm1, [rsp+138h+green]
      vmovss  [rsp+138h+var_F8], xmm6
      vmovss  [rsp+138h+var_100], xmm0
      vmovss  xmm0, [rsp+138h+red]
      vmovss  [rsp+138h+var_108], xmm1
      vmovss  [rsp+138h+var_110], xmm0
      vmovss  dword ptr [rsp+138h+fmt], xmm2
    }
    LUI_Interface_DrawText(localClientNum, root, _RDI, *(float *)&_XMM3, fmt, v33, v34, v35, v36, text, _RDI->textData.font, v37, v38, 0, 0, _RDI->currentAnimationState.alignment, NULL, &fontGlowStyle, NULL, luaVM);
  }
  __asm { vmovaps xmm6, [rsp+138h+var_48] }
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_FPSCounter_Render;
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

