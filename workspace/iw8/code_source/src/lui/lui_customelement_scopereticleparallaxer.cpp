/*
==============
LUIElement_ScopeReticleParallaxer_SetHorSkewFactor
==============
*/
__int64 LUIElement_ScopeReticleParallaxer_SetHorSkewFactor(lua_State *const luaVM)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetHorSkewFactor( skewFactor )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUI_LUIElement_RetrieveCustomElementData<LUIScopeReticleParallaxerData>(v4, luaVM);
    __asm
    {
      vmovss  dword ptr [rax], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUIElement_ScopeReticleParallaxer_SetVertSkewFactor
==============
*/
__int64 LUIElement_ScopeReticleParallaxer_SetVertSkewFactor(lua_State *const luaVM)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetVertSkewFactor( skewFactor )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUI_LUIElement_RetrieveCustomElementData<LUIScopeReticleParallaxerData>(v4, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+4], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUIElement_ScopeReticleParallaxer_Layout
==============
*/

void __fastcall LUIElement_ScopeReticleParallaxer_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  __int64 v12; 
  bool v28; 
  __int64 v35; 
  __int64 v36; 
  int v37; 
  char v39; 
  void *retaddr; 

  _R11 = &retaddr;
  v28 = element->customElementData == NULL;
  __asm { vmovaps [rsp+88h+var_28], xmm7 }
  _RSI = element;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmm9, xmm2
  }
  v12 = localClientNum;
  if ( v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RBP = _RSI->customElementData;
  if ( (unsigned int)v12 >= cg_t::ms_allocatedCount )
  {
    v37 = cg_t::ms_allocatedCount;
    LODWORD(v35) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v35, v37) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v12] )
  {
    LODWORD(v36) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v36) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v36) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v36) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0D4h]
    vsubss  xmm1, xmm0, dword ptr [rsi+0CCh]
    vmovss  xmm0, dword ptr [rsi+0D8h]
    vmulss  xmm2, xmm1, cs:__real@3e4ccccd; max
    vsubss  xmm1, xmm0, dword ptr [rsi+0D0h]
  }
  _RBX = cg_t::ms_cgArray[v12];
  __asm
  {
    vmulss  xmm7, xmm1, cs:__real@3e4ccccd
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vmovss  xmm0, dword ptr [rbx+5B00h]
    vmulss  xmm0, xmm0, dword ptr [rbp+0]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+5AFCh]
    vxorps  xmm1, xmm7, cs:__xmm@80000000800000008000000080000000; min
    vmovaps xmm8, xmm0
    vmulss  xmm0, xmm3, dword ptr [rbp+4]; val
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vucomiss xmm8, dword ptr [rbp+8] }
  if ( !v28 )
    goto LABEL_15;
  __asm { vucomiss xmm0, dword ptr [rbp+0Ch] }
  if ( !v28 )
  {
LABEL_15:
    __asm
    {
      vmovss  dword ptr [rbp+8], xmm8
      vmovss  dword ptr [rbp+0Ch], xmm0
    }
    _RSI->layoutCached = 0;
  }
  __asm
  {
    vmovaps xmm2, xmm9; unitScale
    vmovaps xmm7, [rsp+88h+var_28]
  }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
  }
  LUIElement_DefaultLayout((const LocalClientNum_t)v12, _RSI, *(float *)&_XMM2, deltaTime, luaVM);
}

/*
==============
LUIElement_ScopeReticleParallaxer_Render
==============
*/

void __fastcall LUIElement_ScopeReticleParallaxer_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  LUIElement *v18; 
  float quadVerts; 
  float vMin; 
  float v41; 
  float v42; 
  vec4_t color; 
  vec4_t verts[4]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovss  xmm0, [rbp+37h+red]
    vmovss  xmm1, [rbp+37h+green]
    vmovss  xmm2, dword ptr [rdx+0D4h]; right
    vmovss  dword ptr [rbp+37h+var_A0], xmm0
    vmovss  xmm0, [rbp+37h+blue]
    vmovss  dword ptr [rbp+37h+var_A0+8], xmm0
    vmovss  xmm0, dword ptr [rdx+0CCh]; left
    vmovss  dword ptr [rbp+37h+var_A0+4], xmm1
    vmovss  xmm1, dword ptr [rdx+0D0h]; top
    vmovss  dword ptr [rbp+37h+var_A0+0Ch], xmm3
    vmovss  xmm3, dword ptr [rdx+0D8h]; bottom
  }
  v18 = element;
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  if ( !v18->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+37h+verts]
    vmovss  xmm2, dword ptr [rbp+37h+verts+24h]
    vmovss  xmm7, cs:__real@3f800000
  }
  _RAX = v18->customElementData;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm3, dword ptr [rax+8]
    vmovss  xmm4, dword ptr [rax+0Ch]
    vsubss  xmm1, xmm0, xmm3
    vaddss  xmm0, xmm4, dword ptr [rbp+37h+verts+4]
    vmovss  dword ptr [rbp+37h+verts+4], xmm0
    vmovss  xmm0, dword ptr [rbp+37h+verts+10h]
    vmovss  dword ptr [rbp+37h+verts], xmm1
    vsubss  xmm1, xmm0, xmm3
    vaddss  xmm0, xmm4, dword ptr [rbp+37h+verts+14h]
    vmovss  dword ptr [rbp+37h+verts+14h], xmm0
    vsubss  xmm0, xmm2, xmm4
    vmovss  xmm2, dword ptr [rbp+37h+verts+34h]
    vmovss  dword ptr [rbp+37h+verts+10h], xmm1
    vaddss  xmm1, xmm3, dword ptr [rbp+37h+verts+20h]
    vmovss  dword ptr [rbp+37h+verts+24h], xmm0
    vmovss  dword ptr [rbp+37h+verts+20h], xmm1
    vaddss  xmm1, xmm3, dword ptr [rbp+37h+verts+30h]
    vsubss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rbp+37h+verts+34h], xmm0
    vmovss  dword ptr [rbp+37h+verts+8], xmm6
    vmovss  dword ptr [rbp+37h+verts+0Ch], xmm7
    vmovss  dword ptr [rbp+37h+verts+18h], xmm6
    vmovss  dword ptr [rbp+37h+verts+1Ch], xmm7
    vmovss  dword ptr [rbp+37h+verts+28h], xmm6
    vmovss  dword ptr [rbp+37h+verts+2Ch], xmm7
    vmovss  dword ptr [rbp+37h+verts+30h], xmm1
    vmovss  dword ptr [rbp+37h+verts+38h], xmm6
    vmovss  dword ptr [rbp+37h+verts+3Ch], xmm7
  }
  if ( !LUIElement_IsImageLike(v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scopereticleparallaxer.cpp", 64, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  __asm
  {
    vmovss  dword ptr [rsp+0F0h+var_B8], xmm7
    vmovss  [rsp+0F0h+var_C0], xmm7
    vmovss  [rsp+0F0h+vMin], xmm6
    vmovss  dword ptr [rsp+0F0h+quadVerts], xmm6
  }
  LUI_Render_DrawImage(localClientNum, v18, luaVM, (const vec4_t (*)[4])verts, quadVerts, vMin, v41, v42, &color, v18->imageData.image);
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+0F0h+var_38+8]
    vmovaps xmm7, [rsp+0F0h+var_48+8]
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupScopeReticleParallaxer
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScopeReticleParallaxer(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupScopeReticleParallaxer_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupScopeReticleParallaxer_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScopeReticleParallaxer_impl(lua_State *const luaVM)
{
  LUIElement *v3; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v3, luaVM);
  _RSI = j_lua_newuserdata(luaVM, 0x10ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v3->customElementData = _RSI;
  *_RSI = 0i64;
  _RSI[1] = 0i64;
  j_lua_getfield(luaVM, 2, "horSkewFactor");
  if ( j_lua_isnumber(luaVM, -1) )
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  else
    __asm { vmovss  xmm0, cs:__real@43160000 }
  __asm { vmovss  dword ptr [rsi], xmm0 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "vertSkewFactor");
  if ( j_lua_isnumber(luaVM, -1) )
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  else
    __asm { vmovss  xmm0, cs:__real@43480000 }
  __asm { vmovss  dword ptr [rsi+4], xmm0 }
  j_lua_settop(luaVM, -2);
  _RSI[1] = 0i64;
  v3->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_ScopeReticleParallaxer_Layout;
  v3->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_ScopeReticleParallaxer_Render;
  v3->usageFlags |= 2u;
  LUI_LUIElement_RegisterMethods(v3, luaVM, s_scopeReticleParallaxerMethods);
  return 0i64;
}

