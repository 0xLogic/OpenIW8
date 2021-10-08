/*
==============
LUIElement_Mask_Push
==============
*/

void __fastcall LUIElement_Mask_Push(LocalClientNum_t localClientNum, LUIElement *mask, lua_State *luaVM)
{
  ?LUIElement_Mask_Push@@YAXW4LocalClientNum_t@@PEAULUIElement@@PEAUlua_State@@@Z(localClientNum, mask, luaVM);
}

/*
==============
LUIElement_Mask_Push
==============
*/
void LUIElement_Mask_Push(LocalClientNum_t localClientNum, LUIElement *mask, lua_State *luaVM)
{
  float fmt; 
  float maskRotation; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  vec2_t outSize; 
  char v55; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _RBX = mask;
  if ( !mask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_mask.cpp", 67, ASSERT_TYPE_ASSERT, "(mask)", (const char *)&queryFormat, "mask") )
    __debugbreak();
  if ( !_RBX->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RDI = (GfxImage **)_RBX->customElementData;
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+10h]
    vaddss  xmm0, xmm6, dword ptr [rdi]
    vmulss  xmm7, xmm0, cs:__real@3f000000
    vmovss  xmm5, dword ptr [rdi+14h]
    vaddss  xmm0, xmm5, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi+8]
    vsubss  xmm1, xmm3, dword ptr [rdi]
    vmovss  xmm4, dword ptr [rdi+0Ch]
    vmulss  xmm8, xmm0, cs:__real@3f000000
    vsubss  xmm0, xmm4, dword ptr [rdi+4]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm3, xmm6, xmm3
    vsqrtss xmm9, xmm2, xmm2
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
  }
  LUI_Render_GetViewportSize(localClientNum, &outSize);
  if ( !LUIElement_IsImageLike(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_mask.cpp", 79, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( mask ))", (const char *)&queryFormat, "LUIElement_IsImageLike( mask )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+124h]
    vmovss  xmm1, dword ptr [rbx+11Ch]
    vmovss  xmm4, dword ptr [rbx+118h]
    vmovss  [rsp+0E8h+var_88], xmm0
    vmovss  xmm0, dword ptr [rbx+120h]
    vmovss  [rsp+0E8h+var_90], xmm1
    vmovss  [rsp+0E8h+var_98], xmm0
    vmovss  [rsp+0E8h+var_A0], xmm4
    vmovss  xmm4, dword ptr [rdi+28h]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0E8h+var_B0], xmm0
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vmovss  [rsp+0E8h+var_B8], xmm4
    vmovss  [rsp+0E8h+maskRotation], xmm0
    vmovaps xmm3, xmm9; maskWidth
    vmovaps xmm2, xmm8; maskCenterY
    vmovaps xmm1, xmm7; maskCenterX
    vmovss  dword ptr [rsp+0E8h+fmt], xmm6
  }
  LUI_Render_PushMask(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, maskRotation, v48, v49, 0, v50, v51, v52, v53, &outSize, _RDI[4]);
  _R11 = &v55;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
LUIElement_Mask_Render
==============
*/

void __fastcall LUIElement_Mask_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha)
{
  bool v12; 
  char v15; 
  vec4_t *v17; 
  __int64 v18; 
  vec4_t result; 
  tmat44_t<vec4_t> outMatrix; 
  vec4_t quadVerts[4]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-18h], xmm6 }
  _RBX = element;
  __asm { vmovaps xmm6, xmm3 }
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RDI = _RBX->customElementData;
  __asm { vmovss  dword ptr [rdi+28h], xmm6 }
  if ( !LUIElement_IsImageLike(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_mask.cpp", 24, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  _RDI[4] = _RBX->imageData.image;
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+0D8h]; bottom
    vmovss  xmm2, dword ptr [rbx+0D4h]; right
    vmovss  xmm1, dword ptr [rbx+0D0h]; top
    vmovss  xmm0, dword ptr [rbx+0CCh]; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  *(double *)&_XMM0 = LUI_Render_GetCurrentParallaxAmount();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( v15 | v12 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0E8h+quadVerts]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr [rsp+0E8h+quadVerts+4]
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  xmm0, dword ptr [rsp+0E8h+quadVerts+10h]
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  xmm1, dword ptr [rsp+0E8h+quadVerts+14h]
      vmovss  dword ptr [rdi+0Ch], xmm1
      vmovss  xmm0, dword ptr [rsp+0E8h+quadVerts+20h]
      vmovss  dword ptr [rdi+10h], xmm0
      vmovss  xmm1, dword ptr [rsp+0E8h+quadVerts+24h]
      vmovss  dword ptr [rdi+14h], xmm1
      vmovss  xmm0, dword ptr [rsp+0E8h+quadVerts+30h]
      vmovss  dword ptr [rdi+18h], xmm0
      vmovss  xmm1, dword ptr [rsp+0E8h+quadVerts+34h]
      vmovss  dword ptr [rdi+1Ch], xmm1
    }
  }
  else
  {
    LUI_GetCurrentParallaxMatrix(*(float *)&_XMM0, &outMatrix);
    _RBX = _RDI;
    v17 = quadVerts;
    v18 = 4i64;
    do
    {
      LUI_Matrix_MultiplyVector(&outMatrix, v17, &result);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0E8h+result]
        vmovss  xmm1, dword ptr [rsp+0E8h+result+4]
      }
      ++v17;
      __asm
      {
        vmovss  dword ptr [rbx], xmm0
        vmovss  dword ptr [rbx+4], xmm1
      }
      ++_RBX;
      v12 = --v18 == 0;
    }
    while ( v18 );
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm2, xmm0, dword ptr [rdi]
    vucomiss xmm2, xmm6
    vmovss  xmm1, dword ptr [rdi+0Ch]
    vsubss  xmm0, xmm1, dword ptr [rdi+4]; Y
  }
  if ( !v12 )
    goto LABEL_15;
  __asm { vucomiss xmm0, xmm6 }
  if ( v12 )
  {
    __asm { vmovss  dword ptr [rdi+2Ch], xmm6 }
  }
  else
  {
LABEL_15:
    __asm { vmovaps xmm1, xmm2; X }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@c2652ee0
      vmovss  dword ptr [rdi+2Ch], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+0E8h+var_18] }
}

/*
==============
LUI_LuaCall_LUIElement_ClearMask
==============
*/
__int64 LUI_LuaCall_LUIElement_ClearMask(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: self:ClearMask()");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      v2 = LUI_ToElement(luaVM, 1);
      v2->maskElement = NULL;
      if ( LUI_ElementHasWeakTableEntry(v2, luaVM) )
      {
        LUI_PutElementOnTopOfStack(v2, luaVM);
        LUI_SetTableNil("_maskElement", luaVM);
        j_lua_settop(luaVM, -2);
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
LUI_LuaCall_LUIElement_SetMask
==============
*/
__int64 LUI_LuaCall_LUIElement_SetMask(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetMask_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetMask_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetMask_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIElement *v3; 
  LUIElement *v4; 
  _QWORD *v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: self:SetMask( maskElement )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  v3 = LUI_ToElement(luaVM, 2);
  v2->maskElement = v3;
  v4 = v3;
  if ( !v3->customElementData )
  {
    if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v4, luaVM);
    v5 = j_lua_newuserdata(luaVM, 0x30ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v4->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v4->customElementData = v5;
    *v5 = 0i64;
    v5[1] = 0i64;
    v5[2] = 0i64;
    v5[3] = 0i64;
    v5[4] = 0i64;
    v5[5] = 0i64;
    v5[4] = Image_Register("$white", IMAGE_TRACK_UI);
    v4->usageFlags |= 1u;
    v4->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_Mask_Render;
  }
  if ( LUI_ElementHasWeakTableEntry(v2, luaVM) && LUI_ElementHasWeakTableEntry(v4, luaVM) )
  {
    LUI_PutElementOnTopOfStack(v2, luaVM);
    LUI_PutElementOnTopOfStack(v4, luaVM);
    j_lua_setfield(luaVM, -2, "_maskElement");
    j_lua_settop(luaVM, -2);
  }
  return 0i64;
}

