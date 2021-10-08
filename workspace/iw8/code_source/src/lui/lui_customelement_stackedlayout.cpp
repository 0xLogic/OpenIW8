/*
==============
LUIElement_StackedLayout
==============
*/

void __fastcall LUIElement_StackedLayout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  bool v15; 
  const LUIStackedLayout *customElementData; 
  LUIStackedLayoutAlignment Alignment; 
  LUIStackedLayoutAlignment v63; 
  char v76; 
  LUIElementAxisPosition v85; 
  char v93; 
  void *retaddr; 

  _RAX = &retaddr;
  v15 = element->customElementData == NULL;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps [rsp+0F8h+var_88], xmm11
  }
  _RSI = element;
  __asm
  {
    vmovaps [rsp+0F8h+var_98], xmm12
    vmovaps [rsp+0F8h+var_A8], xmm14
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmm12, xmm2
  }
  if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (const LUIStackedLayout *)_RSI->customElementData;
  __asm { vmovaps xmm1, xmm12; unitScale }
  LUIElement_UpdateLayout(_RSI, *(float *)&_XMM1, deltaTime, luaVM);
  _RBX = _RSI->firstChild;
  __asm
  {
    vmovss  xmm14, dword ptr [rsi+48h]
    vmovss  xmm11, cs:__real@3f800000
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm10, xmm10, xmm10
  }
  for ( ; _RBX; _RBX = _RBX->nextSibling )
  {
    __asm { vmovaps xmm2, xmm12; unitScale }
    LUIElement_Layout(localClientNum, _RBX, *(float *)&_XMM2, deltaTime, luaVM);
    __asm { vmovaps xmm1, xmm12; unitScale }
    *(float *)&_XMM0 = LUIElement_StackedLayout_MeasureChildSize(luaVM, *(float *)&_XMM1, _RBX, customElementData);
    if ( customElementData->ignoreStretchingChildren )
    {
      _RAX = (LUIElement *)&_RBX->currentAnimationState.position.y;
      if ( customElementData->direction != VERTICAL )
        _RAX = _RBX;
      __asm
      {
        vmovss  xmm2, dword ptr [rax+10h]
        vucomiss xmm2, xmm9
        vmovss  xmm1, dword ptr [rax+14h]
      }
      if ( customElementData->direction != VERTICAL )
        goto LABEL_64;
      __asm { vucomiss xmm1, xmm11 }
      if ( customElementData->direction != VERTICAL )
      {
LABEL_64:
        __asm { vucomiss xmm2, xmm11 }
        if ( customElementData->direction != VERTICAL )
          continue;
        __asm { vucomiss xmm1, xmm9 }
        if ( customElementData->direction != VERTICAL )
          continue;
      }
    }
    if ( customElementData->ignoreInvisibleChildren )
    {
      __asm { vcomiss xmm9, dword ptr [rbx+44h] }
    }
    else
    {
      __asm { vaddss  xmm10, xmm10, xmm0 }
      if ( _RBX->nextSibling )
      {
        __asm { vucomiss xmm0, xmm9 }
        if ( _RBX->nextSibling )
          __asm { vaddss  xmm10, xmm10, xmm14 }
      }
    }
  }
  v15 = !customElementData->adjustSizeToContent;
  __asm
  {
    vmovaps [rsp+0F8h+var_38], xmm6
    vmovaps [rsp+0F8h+var_48], xmm7
  }
  if ( !v15 )
  {
    if ( !_RSI->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 187, ASSERT_TYPE_ASSERT, "(element->parent)", (const char *)&queryFormat, "element->parent") )
      __debugbreak();
    _RBX = (LUIElement *)&_RSI->currentAnimationState.position.y;
    if ( customElementData->direction != VERTICAL )
      _RBX = _RSI;
    _RBP = (__int64)&_RSI->parent->currentAnimationState.position.y;
    if ( customElementData->direction != VERTICAL )
      _RBP = (__int64)_RSI->parent;
    Alignment = LUIElement_StackedLayout_GetAlignment(customElementData, _RSI);
    if ( Alignment )
    {
      if ( Alignment == CENTER )
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rbp+0Ch]
          vmovss  xmm0, dword ptr [rbx+0Ch]
          vaddss  xmm1, xmm0, dword ptr [rbx+8]
          vmulss  xmm5, xmm1, cs:__real@3f000000
          vsubss  xmm0, xmm11, dword ptr [rbx+10h]
          vmulss  xmm1, xmm7, dword ptr [rbx+10h]
          vmulss  xmm4, xmm10, cs:__real@3f000000
          vmovaps [rsp+0F8h+var_58], xmm8
          vmovss  xmm8, dword ptr [rbp+8]
          vmulss  xmm2, xmm0, xmm8
          vaddss  xmm2, xmm2, xmm1
          vmulss  xmm1, xmm8, dword ptr [rbx+14h]
          vmovaps xmm8, [rsp+0F8h+var_58]
          vsubss  xmm3, xmm5, xmm4
          vsubss  xmm0, xmm3, xmm2
          vmovss  dword ptr [rbx], xmm0
          vsubss  xmm0, xmm11, dword ptr [rbx+14h]
          vmulss  xmm2, xmm0, xmm7
          vaddss  xmm2, xmm2, xmm1
          vaddss  xmm4, xmm4, xmm5
          vsubss  xmm0, xmm4, xmm2
          vmovss  dword ptr [rbx+4], xmm0
        }
      }
      else if ( Alignment == BOTTOM )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+4]
          vsubss  xmm0, xmm11, dword ptr [rbx+14h]
          vsubss  xmm2, xmm1, xmm10
          vmovss  dword ptr [rbx], xmm2
          vmovss  dword ptr [rbx+10h], xmm0
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 233, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
      {
        __debugbreak();
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm11, dword ptr [rbx+10h]
        vaddss  xmm1, xmm10, dword ptr [rbx]
        vmovss  dword ptr [rbx+14h], xmm0
        vmovss  dword ptr [rbx+4], xmm1
      }
    }
    LUIElement_CalculateGlobalRectangle(_RSI, &_RSI->currentAnimationState);
    __asm { vmovaps xmm1, xmm12; unitScale }
    LUIElement_SetDimensions(_RSI, *(float *)&_XMM1);
  }
  if ( customElementData->direction == VERTICAL )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+18h]
      vmovsd  xmm1, qword ptr [rsi+28h]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovsd  xmm1, qword ptr [rsi+10h]
    }
  }
  __asm
  {
    vmovups [rsp+0F8h+var_C8], xmm0
    vmovsd  [rsp+0F8h+var_B8], xmm1
  }
  *(float *)&_XMM0 = LUI_Measure(&v85);
  __asm { vmovaps xmm6, xmm0 }
  v63 = LUIElement_StackedLayout_GetAlignment(customElementData, _RSI);
  if ( v63 == CENTER )
  {
    __asm
    {
      vsubss  xmm0, xmm6, xmm10
      vmulss  xmm6, xmm0, cs:__real@3f000000
    }
  }
  else if ( v63 == BOTTOM )
  {
    __asm { vsubss  xmm6, xmm6, xmm10 }
  }
  else
  {
    __asm { vmovaps xmm6, xmm9 }
  }
  _RBX = _RSI->firstChild;
  __asm { vmovaps xmm10, [rsp+0F8h+var_78] }
  for ( _RSI->layoutDeeplyCached = _RSI->canCacheLayout; _RBX; _RBX = _RBX->nextSibling )
  {
    if ( !customElementData->ignoreStretchingChildren )
      goto LABEL_51;
    _RAX = (LUIElement *)&_RBX->currentAnimationState.position.y;
    if ( customElementData->direction != VERTICAL )
      _RAX = _RBX;
    __asm
    {
      vmovss  xmm1, dword ptr [rax+10h]
      vucomiss xmm1, xmm9
      vmovss  xmm0, dword ptr [rax+14h]
    }
    if ( customElementData->direction == VERTICAL )
    {
      __asm { vucomiss xmm0, xmm11 }
      if ( customElementData->direction == VERTICAL )
        goto LABEL_51;
    }
    __asm { vucomiss xmm1, xmm11 }
    if ( customElementData->direction == VERTICAL )
    {
      __asm { vucomiss xmm0, xmm9 }
      if ( customElementData->direction == VERTICAL )
      {
LABEL_51:
        if ( !customElementData->ignoreInvisibleChildren )
        {
          __asm { vmovaps xmm1, xmm12; unitScale }
          *(float *)&_XMM0 = LUIElement_StackedLayout_MeasureChildSize(luaVM, *(float *)&_XMM1, _RBX, customElementData);
          _RBP = (LUIElement *)&_RBX->currentAnimationState.position.y;
          if ( customElementData->direction != VERTICAL )
            _RBP = _RBX;
          __asm
          {
            vmovaps xmm7, xmm0
            vmovups xmm1, xmmword ptr [rbp+0]
            vmovsd  xmm2, qword ptr [rbp+10h]
            vmovups [rsp+0F8h+var_C8], xmm1
            vmovsd  [rsp+0F8h+var_B8], xmm2
          }
          *(float *)&_XMM0 = LUI_Measure(&v85);
          __asm
          {
            vaddss  xmm1, xmm0, xmm6
            vmovss  xmm0, dword ptr [rbp+8]
            vcomiss xmm0, dword ptr [rbp+0Ch]
            vmovss  dword ptr [rbp+0], xmm6
            vmovss  dword ptr [rbp+4], xmm1
          }
          _RBP->currentAnimationState.position.x.anchors[0] = 0.0;
          _RBP->currentAnimationState.position.x.anchors[1] = 1.0;
          if ( !(v76 | v15) )
          {
            __asm
            {
              vmovss  dword ptr [rbp+0], xmm1
              vmovss  dword ptr [rbp+4], xmm6
            }
          }
          _RBX->layoutCached = 0;
          __asm { vmovaps xmm2, xmm12; unitScale }
          LUIElement_Layout(localClientNum, _RBX, *(float *)&_XMM2, deltaTime, luaVM);
          __asm { vcomiss xmm7, xmm9 }
          if ( !(v76 | v15) )
          {
            __asm
            {
              vaddss  xmm0, xmm7, xmm14
              vaddss  xmm6, xmm6, xmm0
            }
          }
          goto LABEL_60;
        }
        __asm { vcomiss xmm9, dword ptr [rbx+44h] }
      }
    }
    _RBX->layoutCached = 0;
    __asm { vmovaps xmm2, xmm12; unitScale }
    LUIElement_Layout(localClientNum, _RBX, *(float *)&_XMM2, deltaTime, luaVM);
LABEL_60:
    _RSI->layoutDeeplyCached &= _RBX->layoutDeeplyCached;
  }
  LUI_QuadCache_Element_Invalidate(_RSI);
  _R11 = &v93;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
    vmovaps xmm7, [rsp+0F8h+var_48]
    vmovaps xmm6, [rsp+0F8h+var_38]
  }
  _RSI->layoutCached = _RSI->canCacheLayout;
}

/*
==============
LUIElement_StackedLayout_GetAlignment
==============
*/
char LUIElement_StackedLayout_GetAlignment(const LUIStackedLayout *stackedLayout, LUIElement *element)
{
  bool v2; 
  char alignment; 
  LUIHorizontalAlignment VerticalAlignment; 

  v2 = stackedLayout->direction == VERTICAL;
  alignment = element->currentAnimationState.alignment;
  if ( v2 )
    VerticalAlignment = LUI_GetVerticalAlignment(alignment);
  else
    VerticalAlignment = LUI_GetHorizontalAlignment(alignment);
  if ( VerticalAlignment == LEFT )
    return 0;
  if ( VerticalAlignment == RIGHT )
    return 1;
  if ( VerticalAlignment != 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 66, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment value") )
      __debugbreak();
    return 0;
  }
  return 2;
}

/*
==============
LUIElement_StackedLayout_MeasureChildSize
==============
*/

float __fastcall LUIElement_StackedLayout_MeasureChildSize(lua_State *luaVM, double unitScale, LUIElement *child, const LUIStackedLayout *stackedLayout)
{
  LUIStackedLayoutDirection direction; 
  bool IsTextLike; 
  float outWidth[4]; 
  LUIElementAxisPosition v17; 
  float outHeight; 

  direction = stackedLayout->direction;
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RDI = child;
  __asm { vmovaps xmm6, xmm1 }
  IsTextLike = LUIElement_IsTextLike(child);
  if ( direction != VERTICAL )
  {
    if ( IsTextLike )
    {
      __asm { vmovaps xmm0, xmm6; unitScale }
      LUI_MeasureTextElement(*(float *)&_XMM0, _RDI, luaVM, outWidth, &outHeight);
      __asm { vmovss  xmm0, [rsp+78h+outWidth] }
      goto LABEL_9;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovsd  xmm1, qword ptr [rdi+10h]
    }
LABEL_8:
    __asm
    {
      vmovups [rsp+78h+var_38], xmm0
      vmovsd  [rsp+78h+var_28], xmm1
    }
    *(float *)&_XMM0 = LUI_Measure(&v17);
    goto LABEL_9;
  }
  if ( !IsTextLike )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+18h]
      vmovsd  xmm1, qword ptr [rdi+28h]
    }
    goto LABEL_8;
  }
  __asm { vmovaps xmm0, xmm6; unitScale }
  LUI_MeasureTextElement(*(float *)&_XMM0, _RDI, luaVM, outWidth, &outHeight);
  __asm { vmovss  xmm0, [rsp+78h+arg_18] }
LABEL_9:
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
LUI_LuaCall_LUIElement_SetAdjustSizeToContent
==============
*/
__int64 LUI_LuaCall_LUIElement_SetAdjustSizeToContent(lua_State *luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 356, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 357, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 358, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[1] = j_lua_toboolean(luaVM, 2) > 0;
  LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetDirection
==============
*/
__int64 LUI_LuaCall_LUIElement_SetDirection(lua_State *luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 317, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 318, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 319, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 2 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  *customElementData = lui_tointeger32(luaVM, 2);
  LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetIgnoreInvisibleChildren
==============
*/
__int64 LUI_LuaCall_LUIElement_SetIgnoreInvisibleChildren(lua_State *luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 343, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 344, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 345, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[3] = j_lua_toboolean(luaVM, 2) > 0;
  LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetIgnoreStretchingChildren
==============
*/
__int64 LUI_LuaCall_LUIElement_SetIgnoreStretchingChildren(lua_State *luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 330, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 331, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 332, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[2] = j_lua_toboolean(luaVM, 2) > 0;
  LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupStackedLayout
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupStackedLayout(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupStackedLayout_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupStackedLayout_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupStackedLayout_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  _DWORD *v3; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 369, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 370, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_stackedlayout.cpp", 371, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  v2->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_StackedLayout;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 4ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  *v3 = 0;
  j_lua_getfield(luaVM, 2, "direction");
  if ( j_lua_isnumber(luaVM, -1) )
    *(_BYTE *)v3 = lui_tointeger32(luaVM, -1);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustSizeToContent");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)v3 + 1) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "ignoreStretchingChildren");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)v3 + 2) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "ignoreInvisibleChildren");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)v3 + 3) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  return 0i64;
}

