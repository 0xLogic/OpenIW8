/*
==============
LUIElement_Border_Render
==============
*/

void __fastcall LUIElement_Border_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  float quadVerts; 
  float quadVertsa; 
  float quadVertsb; 
  float quadVertsc; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  vec4_t color; 
  vec4_t verts[4]; 
  char v82; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovss  xmm0, [rsp+118h+red]
    vmovss  xmm1, [rsp+118h+green]
  }
  _RSI = element;
  __asm
  {
    vmovss  dword ptr [rsp+118h+var_C8], xmm0
    vmovss  xmm0, [rsp+118h+blue]
    vmovss  dword ptr [rsp+118h+var_C8+8], xmm0
    vmovss  dword ptr [rsp+118h+var_C8+4], xmm1
    vmovss  dword ptr [rsp+118h+var_C8+0Ch], xmm3
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm
  {
    vmovss  xmm4, cs:__real@3dc8c8c9
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm1, xmm1, xmm4
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vmulss  xmm6, xmm1, xmm0
    vmulss  xmm1, xmm2, xmm4
    vmulss  xmm7, xmm1, xmm0
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vmulss  xmm1, xmm2, xmm4
    vmulss  xmm10, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsi+0D8h]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vsubss  xmm3, xmm1, xmm10; bottom
    vmulss  xmm1, xmm2, xmm4
    vmovaps xmm5, xmm0
    vmovss  xmm0, dword ptr [rsi+0CCh]; left
    vmulss  xmm4, xmm1, xmm5
    vaddss  xmm1, xmm7, dword ptr [rsi+0D0h]; top
    vaddss  xmm2, xmm4, xmm0; right
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  [rsp+118h+var_E0], xmm9
    vxorps  xmm8, xmm8, xmm8
    vmovss  [rsp+118h+var_E8], xmm9
    vmovss  [rsp+118h+var_F0], xmm8
    vmovss  dword ptr [rsp+118h+quadVerts], xmm8
  }
  LUI_Render_DrawImage(localClientNum, _RSI, luaVM, (const vec4_t (*)[4])verts, quadVerts, v68, v72, v76, &color, LUI_DefaultMaterial);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0D8h]
    vmovss  xmm2, dword ptr [rsi+0D4h]; right
    vaddss  xmm1, xmm7, dword ptr [rsi+0D0h]; top
    vsubss  xmm3, xmm0, xmm10; bottom
    vsubss  xmm0, xmm2, xmm6; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  [rsp+118h+var_E0], xmm9
    vmovss  [rsp+118h+var_E8], xmm9
    vmovss  [rsp+118h+var_F0], xmm8
    vmovss  dword ptr [rsp+118h+quadVerts], xmm8
  }
  LUI_Render_DrawImage(localClientNum, _RSI, luaVM, (const vec4_t (*)[4])verts, quadVertsa, v69, v73, v77, &color, LUI_DefaultMaterial);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+0D0h]; top
    vaddss  xmm3, xmm1, xmm7; bottom
    vmovss  xmm2, dword ptr [rsi+0D4h]; right
    vmovss  xmm0, dword ptr [rsi+0CCh]; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  [rsp+118h+var_E0], xmm9
    vmovss  [rsp+118h+var_E8], xmm9
    vmovss  [rsp+118h+var_F0], xmm8
    vmovss  dword ptr [rsp+118h+quadVerts], xmm8
  }
  LUI_Render_DrawImage(localClientNum, _RSI, luaVM, (const vec4_t (*)[4])verts, quadVertsb, v70, v74, v78, &color, LUI_DefaultMaterial);
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+0D8h]; bottom
    vmovss  xmm2, dword ptr [rsi+0D4h]; right
    vmovss  xmm0, dword ptr [rsi+0CCh]; left
    vsubss  xmm1, xmm3, xmm10; top
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  [rsp+118h+var_E0], xmm9
    vmovss  [rsp+118h+var_E8], xmm9
    vmovss  [rsp+118h+var_F0], xmm8
    vmovss  dword ptr [rsp+118h+quadVerts], xmm8
  }
  LUI_Render_DrawImage(localClientNum, _RSI, luaVM, (const vec4_t (*)[4])verts, quadVertsc, v71, v75, v79, &color, LUI_DefaultMaterial);
  _R11 = &v82;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessBottom
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessBottom(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBorderThicknessBottom_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessBottom_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessBottom_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUITweenProperty v6; 
  int v7; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBorderThicknessBottom( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v3 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) )
    return 0i64;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@41233333
    vcvttss2si r14d, xmm1
  }
  if ( j_lua_gettop(luaVM) < 3 || (v7 = lui_tointeger32(luaVM, 3), v7 <= 0) )
  {
    LOBYTE(v6) = 50;
    LUI_Tween_InterruptElementTween(v3, v6, luaVM);
    v3->currentAnimationState.userDataBytes[3] = _ER14;
    LUI_QuadCache_Element_Invalidate(v3);
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v3);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 50;
  v8->duration = v7;
  v8->startValue.byteValue = v3->currentAnimationState.userDataBytes[3];
  v8->endValue.byteValue = _ER14;
  LUI_Tween_AddElementTween(v3, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessLeft
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessLeft(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBorderThicknessLeft_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessLeft_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessLeft_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUITweenProperty v6; 
  int v7; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBorderThicknessLeft( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v3 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) )
    return 0i64;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@41233333
    vcvttss2si r14d, xmm1
  }
  if ( j_lua_gettop(luaVM) < 3 || (v7 = lui_tointeger32(luaVM, 3), v7 <= 0) )
  {
    LOBYTE(v6) = 47;
    LUI_Tween_InterruptElementTween(v3, v6, luaVM);
    v3->currentAnimationState.userDataBytes[0] = _ER14;
    LUI_QuadCache_Element_Invalidate(v3);
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v3);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 47;
  v8->duration = v7;
  v8->startValue.byteValue = v3->currentAnimationState.userDataBytes[0];
  v8->endValue.byteValue = _ER14;
  LUI_Tween_AddElementTween(v3, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessRight
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessRight(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBorderThicknessRight_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessRight_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessRight_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUITweenProperty v6; 
  int v7; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBorderThicknessRight( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v3 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) )
    return 0i64;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@41233333
    vcvttss2si r14d, xmm1
  }
  if ( j_lua_gettop(luaVM) < 3 || (v7 = lui_tointeger32(luaVM, 3), v7 <= 0) )
  {
    LOBYTE(v6) = 48;
    LUI_Tween_InterruptElementTween(v3, v6, luaVM);
    v3->currentAnimationState.userDataBytes[1] = _ER14;
    LUI_QuadCache_Element_Invalidate(v3);
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v3);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 48;
  v8->duration = v7;
  v8->startValue.byteValue = v3->currentAnimationState.userDataBytes[1];
  v8->endValue.byteValue = _ER14;
  LUI_Tween_AddElementTween(v3, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessTop
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessTop(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBorderThicknessTop_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBorderThicknessTop_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBorderThicknessTop_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUITweenProperty v6; 
  int v7; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBorderThicknessTop( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v3 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) )
    return 0i64;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@41233333
    vcvttss2si r14d, xmm1
  }
  if ( j_lua_gettop(luaVM) < 3 || (v7 = lui_tointeger32(luaVM, 3), v7 <= 0) )
  {
    LOBYTE(v6) = 49;
    LUI_Tween_InterruptElementTween(v3, v6, luaVM);
    v3->currentAnimationState.userDataBytes[2] = _ER14;
    LUI_QuadCache_Element_Invalidate(v3);
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v3);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 49;
  v8->duration = v7;
  v8->startValue.byteValue = v3->currentAnimationState.userDataBytes[2];
  v8->endValue.byteValue = _ER14;
  LUI_Tween_AddElementTween(v3, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupBorder
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupBorder(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupBorder_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupBorder_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupBorder_impl(lua_State *const luaVM)
{
  LUIElement *v5; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
  }
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v5 = LUI_ToElement(luaVM, 1);
  j_lua_getfield(luaVM, 2, "borderThicknessLeft");
  __asm
  {
    vmovss  xmm6, cs:__real@3d23d70a
    vmovss  xmm7, cs:__real@437f0000
  }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, xmm7
      vcvttss2si eax, xmm2
    }
  }
  else
  {
    LOBYTE(_EAX) = 1;
  }
  v5->currentAnimationState.userDataBytes[0] = _EAX;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "borderThicknessRight");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, xmm7
      vcvttss2si eax, xmm2
    }
  }
  else
  {
    LOBYTE(_EAX) = 1;
  }
  v5->currentAnimationState.userDataBytes[1] = _EAX;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "borderThicknessTop");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, xmm7
      vcvttss2si eax, xmm2
    }
  }
  else
  {
    LOBYTE(_EAX) = 1;
  }
  v5->currentAnimationState.userDataBytes[2] = _EAX;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "borderThicknessBottom");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, xmm7
      vcvttss2si eax, xmm2
    }
  }
  else
  {
    LOBYTE(_EAX) = 1;
  }
  v5->currentAnimationState.userDataBytes[3] = _EAX;
  j_lua_settop(luaVM, -2);
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  v5->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_Border_Render;
  return 0i64;
}

