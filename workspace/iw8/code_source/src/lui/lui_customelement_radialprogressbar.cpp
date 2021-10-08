/*
==============
LUIElement_RadialProgressBar_SetProgress
==============
*/
__int64 LUIElement_RadialProgressBar_SetProgress(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_RadialProgressBar_SetProgress_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_RadialProgressBar_SetProgressBarCounterClockwise
==============
*/
__int64 LUIElement_RadialProgressBar_SetProgressBarCounterClockwise(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetProgressBarCounterClockwise( isCounterClockwise )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      if ( j_lua_type(luaVM, 2) == 1 )
      {
        v2 = LUI_ToElement(luaVM, 1);
        if ( LUI_ElementHasWeakTableEntry(v2, luaVM) )
          v2->currentAnimationState.userDataShorts[1] = j_lua_toboolean(luaVM, 2) != 0;
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
LUIElement_RadialProgressBar_DrawPiece
==============
*/

void __fastcall LUIElement_RadialProgressBar_DrawPiece(const LocalClientNum_t localClientNum, LUIElement *element, double uOffset, const vec4_t (*quadVerts)[4], const vec4_t *color, float progress, lua_State *luaVM)
{
  float fmt; 
  float vCenter; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  char v30; 

  __asm
  {
    vmovaps [rsp+98h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialprogressbar.cpp", 17, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vmovss  xmm0, [rsp+98h+progress]
    vmulss  xmm1, xmm0, cs:__real@c3b40000
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+98h+var_38], xmm1
    vmovss  [rsp+98h+var_40], xmm0
    vaddss  xmm2, xmm6, xmm3
    vmovss  [rsp+98h+var_48], xmm2
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+98h+var_50], xmm1
    vmovss  [rsp+98h+var_58], xmm6
    vmovss  [rsp+98h+var_60], xmm3
    vmovss  [rsp+98h+var_68], xmm3
    vmovss  [rsp+98h+vCenter], xmm3
    vmovss  dword ptr [rsp+98h+fmt], xmm3
  }
  LUI_Render_DrawImageRotatedUV(localClientNum, element, luaVM, quadVerts, fmt, vCenter, v22, v23, v24, v25, v26, v27, v28, color, element->imageData.image);
  _R11 = &v30;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
LUIElement_RadialProgressBar_Render
==============
*/

void __fastcall LUIElement_RadialProgressBar_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int16 v20; 
  bool v44; 
  bool v45; 
  bool v46; 
  char v52; 
  float v60; 
  float v61; 
  vec4_t color; 
  vec4_t quadVerts[4]; 
  vec4_t v64[4]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovss  xmm0, [rsp+148h+red]
  }
  _RDI = element;
  __asm
  {
    vmovss  xmm1, [rsp+148h+green]
    vmovss  xmm2, dword ptr [rdx+0D4h]; right
    vmovss  dword ptr [rsp+148h+color], xmm0
    vmovss  xmm0, [rsp+148h+blue]
    vmovss  dword ptr [rsp+148h+color+8], xmm0
  }
  v20 = element->currentAnimationState.userDataShorts[1];
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovaps xmmword ptr [r11-38h], xmm7
    vmulss  xmm7, xmm0, cs:__real@38000100
    vaddss  xmm0, xmm2, dword ptr [rdx+0CCh]
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovss  xmm10, cs:__real@3f000000
    vmulss  xmm6, xmm0, xmm10
    vmovss  dword ptr [rsp+148h+color+4], xmm1
    vmovss  xmm1, dword ptr [rdx+0D0h]; top
    vmovss  dword ptr [rsp+148h+color+0Ch], xmm3
    vmovss  xmm3, dword ptr [rdx+0D8h]; bottom
    vmovaps xmm0, xmm6; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+0D8h]; bottom
    vmovss  xmm1, dword ptr [rdi+0D0h]; top
    vmovss  xmm0, dword ptr [rdi+0CCh]; left
    vmovaps xmm2, xmm6; right
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])v64);
  if ( v20 )
  {
    __asm
    {
      vxorps  xmm6, xmm7, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm7, cs:__real@bf000000
      vmovss  xmm1, cs:__real@bf800000; min
      vmovaps xmm2, xmm7; max
      vmovaps xmm0, xmm6; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm9, xmm0
      vmovaps xmm0, xmm6; val
      vxorps  xmm2, xmm2, xmm2; max
      vmovaps xmm1, xmm7; min
      vxorps  xmm8, xmm8, xmm8
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vcomiss xmm9, xmm7 }
    v45 = v44;
    __asm { vcomiss xmm0, xmm8 }
    v46 = v44;
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vaddss  xmm0, xmm7, xmm10; val
      vxorps  xmm1, xmm1, xmm1; min
      vxorps  xmm8, xmm8, xmm8
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovaps xmm9, xmm0
      vsubss  xmm0, xmm7, xmm10; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vcomiss xmm9, xmm10 }
    v45 = !(v44 | v52);
    __asm { vcomiss xmm0, xmm8 }
    v46 = v45;
  }
  __asm
  {
    vmovaps xmm7, [rsp+148h+var_38]
    vmovaps xmm6, xmm0
  }
  if ( v45 )
  {
    __asm
    {
      vmovss  [rsp+148h+var_120], xmm9
      vmovaps xmm2, xmm10; uOffset
    }
    LUIElement_RadialProgressBar_DrawPiece(localClientNum, _RDI, *(double *)&_XMM2, (const vec4_t (*)[4])quadVerts, &color, v60, luaVM);
  }
  __asm
  {
    vmovaps xmm10, [rsp+148h+var_68]
    vmovaps xmm9, [rsp+148h+var_58]
  }
  if ( v46 )
  {
    __asm
    {
      vmovss  [rsp+148h+var_120], xmm6
      vxorps  xmm2, xmm2, xmm2; uOffset
    }
    LUIElement_RadialProgressBar_DrawPiece(localClientNum, _RDI, *(double *)&_XMM2, (const vec4_t (*)[4])v64, &color, v61, luaVM);
  }
  __asm
  {
    vmovaps xmm6, [rsp+148h+var_28]
    vmovaps xmm8, [rsp+148h+var_48]
  }
}

/*
==============
LUIElement_RadialProgressBar_SetProgress_impl
==============
*/

__int64 __fastcall LUIElement_RadialProgressBar_SetProgress_impl(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v4; 
  LUITweenProperty v9; 
  int v10; 
  LUITween *v11; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetProgressInC( progress, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v4 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) )
    return 0i64;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@46fffe00
    vcvttss2si r14d, xmm1
  }
  if ( j_lua_gettop(luaVM) < 3 || (v10 = lui_tointeger32(luaVM, 3), v10 <= 0) )
  {
    LOBYTE(v9) = 52;
    LUI_Tween_InterruptElementTween(v4, v9, luaVM);
    v4->currentAnimationState.dataSource = _ER14;
    return 0i64;
  }
  v11 = LUI_Tween_Create(luaVM, v4);
  if ( j_lua_gettop(luaVM) >= 4 )
    v11->easing = lui_tointeger32(luaVM, 4);
  v11->targetProperty[0] = 52;
  v11->duration = v10;
  v11->startValue.shortValue = v4->currentAnimationState.userDataShorts[0];
  v11->endValue.shortValue = _ER14;
  LUI_Tween_AddElementTween(v4, v11, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v11, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupRadialProgressBar
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRadialProgressBar(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_radialProgressBarMethods);
  v2->usageFlags |= 1u;
  LUI_LUIElement_SetupUIBaseImage(v2, (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_RadialProgressBar_Render);
  v3 = j_lua_toboolean(luaVM, 2);
  v2->currentAnimationState.dataSource = 0;
  v2->currentAnimationState.userDataShorts[1] = v3 != 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

