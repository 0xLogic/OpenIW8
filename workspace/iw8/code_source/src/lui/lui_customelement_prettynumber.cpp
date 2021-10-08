/*
==============
LUI_LuaCall_LUIElement_PrettyNumberSetValue
==============
*/
__int64 LUI_LuaCall_LUIElement_PrettyNumberSetValue(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  _DWORD *v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:setValue( value )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      if ( j_lua_isnumber(luaVM, 2) )
      {
        v2 = LUI_ToElement(luaVM, 1);
        if ( LUI_ElementHasWeakTableEntry(v2, luaVM) )
        {
          v3 = lui_tointeger32(luaVM, 2);
          LUI_PutElementOnTopOfStack(v2, luaVM);
          j_lua_getfield(luaVM, -1, "m_UIPrettyNumberData");
          if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 56, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
            __debugbreak();
          v4 = j_lua_touserdata(luaVM, -1);
          j_lua_settop(luaVM, -3);
          v4[5] = v3 - v3 % v4[7];
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_PrettyNumberSetSpeed
==============
*/
__int64 LUI_LuaCall_LUIElement_PrettyNumberSetSpeed(lua_State *const luaVM)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:setSpeed( speed )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      if ( j_lua_isnumber(luaVM, 2) )
      {
        v4 = LUI_ToElement(luaVM, 1);
        if ( LUI_ElementHasWeakTableEntry(v4, luaVM) )
        {
          __asm { vmovaps [rsp+48h+var_18], xmm6 }
          *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
          __asm { vmovaps xmm6, xmm0 }
          LUI_PutElementOnTopOfStack(v4, luaVM);
          j_lua_getfield(luaVM, -1, "m_UIPrettyNumberData");
          if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 96, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
            __debugbreak();
          _RBX = j_lua_touserdata(luaVM, -1);
          j_lua_settop(luaVM, -3);
          __asm
          {
            vmovss  dword ptr [rbx+18h], xmm6
            vmovaps xmm6, [rsp+48h+var_18]
          }
        }
      }
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
LUI_LuaCall_LUIElement_PrettyNumberGetDisplayValue
==============
*/
__int64 LUI_LuaCall_LUIElement_PrettyNumberGetDisplayValue(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  int *v4; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:getDisplayValue()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    if ( LUI_ElementHasWeakTableEntry(v3, luaVM) )
    {
      LUI_PutElementOnTopOfStack(v3, luaVM);
      j_lua_getfield(luaVM, -1, "m_UIPrettyNumberData");
      if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 133, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
        __debugbreak();
      v4 = (int *)j_lua_touserdata(luaVM, -1);
      j_lua_settop(luaVM, -3);
      j_lua_pushinteger(luaVM, v4[4]);
    }
    else
    {
      v2 = 0;
    }
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUIElement_UIPrettyNumberLayout
==============
*/

void __fastcall LUIElement_UIPrettyNumberLayout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  char v13; 
  bool v14; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  _BYTE *v37; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps [rsp+68h+var_38], xmm7
    vmovaps xmm7, xmm2
  }
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_getfield(luaVM, -1, "m_UIPrettyNumberData");
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 192, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  _RDI = j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -3);
  __asm
  {
    vmovsd  xmm6, qword ptr [rdi+8]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, dword ptr [rdi+14h]
    vsubsd  xmm5, xmm0, xmm6
    vcomisd xmm5, cs:__real@3f847ae147ae147b
  }
  if ( !(v13 | v14) )
    goto LABEL_7;
  __asm { vcomisd xmm5, cs:__real@bf847ae147ae147b }
  if ( v13 || (v13 = 0, v14 = *(_BYTE *)_RDI == 0, !*(_BYTE *)_RDI) )
  {
LABEL_7:
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+18h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r14d
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vminss  xmm2, xmm1, cs:__real@42480000
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm4, xmm0
      vmulss  xmm3, xmm2, xmm4
      vcvtss2sd xmm1, xmm3, xmm3
    }
    if ( v13 | v14 )
    {
      __asm { vmovaps xmm1, xmm5 }
LABEL_16:
      __asm
      {
        vaddsd  xmm0, xmm6, xmm1
        vmovsd  qword ptr [rdi+8], xmm0
        vaddsd  xmm0, xmm0, cs:__real@3fe0000000000000
        vcvttsd2si r11d, xmm0
      }
      if ( _ER11 != _RDI[4] || !*(_BYTE *)_RDI )
      {
        v33 = 0;
        _RDI[4] = _ER11;
        v34 = 0;
        v35 = 1;
        if ( _ER11 < 0 )
        {
          *((_BYTE *)_RDI + 32) = 45;
          v34 = 1;
          _ER11 = -_ER11;
        }
        if ( _ER11 / 10 <= 0 )
          goto LABEL_24;
        v36 = 10;
        do
        {
          v35 = v36;
          v36 *= 10;
          ++v33;
        }
        while ( _ER11 / v36 > 0 );
        if ( v35 >= 1 )
        {
LABEL_24:
          v37 = (char *)_RDI + (unsigned int)v34 + 32;
          do
          {
            ++v34;
            *v37++ = _ER11 / v35 + 48;
            _ER11 -= v35 * (char)(_ER11 / v35);
            if ( v33 > 0 && v33 == 3 * (v33 / 3) )
            {
              ++v34;
              *v37++ = 44;
            }
            --v33;
            v35 /= 10;
          }
          while ( v35 >= 1 );
        }
        *((_BYTE *)_RDI + v34 + 32) = 0;
        if ( v34 >= 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 179, ASSERT_TYPE_ASSERT, "(charIndex < 64)", (const char *)&queryFormat, "charIndex < LUI_PRETTY_NUMBER_STRING_BUFFER_SIZE") )
          __debugbreak();
        element->layoutCached = 0;
        *(_BYTE *)_RDI = 1;
      }
      goto LABEL_33;
    }
    __asm { vcomisd xmm5, xmm0 }
    if ( !(v13 | v14) )
    {
      __asm { vcomisd xmm1, xmm5 }
      if ( !(v13 | v14) )
        goto LABEL_14;
      __asm { vcomisd xmm5, xmm0 }
    }
    if ( !v13 )
      goto LABEL_16;
    __asm { vcomisd xmm1, xmm5 }
    if ( !v13 )
    {
      __asm { vxorpd  xmm1, xmm1, cs:__xmm@80000000000000008000000000000000 }
      goto LABEL_16;
    }
LABEL_14:
    __asm { vmovaps xmm1, xmm5 }
    goto LABEL_16;
  }
LABEL_33:
  __asm
  {
    vmovaps xmm2, xmm7; unitScale
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
  LUIElement_DefaultLayout(localClientNum, element, *(float *)&_XMM2, deltaTime, luaVM);
}

/*
==============
LUIElement_UIPrettyNumberRender
==============
*/

void __fastcall LUIElement_UIPrettyNumberRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  const char *v14; 
  float fmt; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm3
  }
  _RDI = element;
  if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 241, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(_RDI, luaVM);
  j_lua_getfield(luaVM, -1, "m_UIPrettyNumberData");
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 246, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  v14 = (const char *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -3);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0D4h]
    vmovss  xmm4, dword ptr [rdi+0D8h]
    vmovss  xmm3, dword ptr [rdi+0CCh]; x
    vsubss  xmm2, xmm4, dword ptr [rdi+0D0h]
    vsubss  xmm1, xmm0, xmm3
    vmovss  xmm0, [rsp+0B8h+blue]
    vmovss  [rsp+0B8h+var_58], xmm1
    vmovss  xmm1, [rsp+0B8h+green]
    vmovss  [rsp+0B8h+var_60], xmm2
    vmovss  [rsp+0B8h+var_78], xmm6
    vmovss  [rsp+0B8h+var_80], xmm0
    vmovss  xmm0, [rsp+0B8h+red]
    vmovss  [rsp+0B8h+var_88], xmm1
    vmovss  [rsp+0B8h+var_90], xmm0
    vmovss  dword ptr [rsp+0B8h+fmt], xmm4
  }
  LUI_Interface_DrawText(localClientNum, root, _RDI, *(float *)&_XMM3, fmt, v26, v27, v28, v29, v14 + 32, _RDI->textData.font, v30, v31, 0, 0, _RDI->currentAnimationState.alignment, NULL, NULL, NULL, luaVM);
  _R11 = &v32;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
LUI_LuaCall_LUIElement_setupPrettyNumber
==============
*/
__int64 LUI_LuaCall_LUIElement_setupPrettyNumber(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_setupPrettyNumber_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_setupPrettyNumber_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_setupPrettyNumber_impl(lua_State *const luaVM)
{
  LUIElement *v3; 

  if ( j_lua_gettop(luaVM) < 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 3");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 3 )");
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) < 4 || lua_isnumber( luaVM, 4 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->usageFlags |= 3u;
  v3->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_UIPrettyNumberLayout;
  v3->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_UIPrettyNumberRender;
  LUIElement_InitTextLikeElement(v3);
  LUI_PutElementOnTopOfStack(v3, luaVM);
  _RBX = j_lua_newuserdata(luaVM, 0x60ui64);
  memset_0(_RBX, 0, 0x60ui64);
  j_lua_setfield(luaVM, -2, "m_UIPrettyNumberData");
  j_luaL_register(luaVM, NULL, PrettyNumber_functions);
  j_lua_settop(luaVM, -2);
  lui_tointeger32(luaVM, 3);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  qword ptr [rbx+8], xmm1
  }
  _RBX[5] = lui_tointeger32(luaVM, 3);
  _RBX[4] = lui_tointeger32(luaVM, 3);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  _RBX[7] = 1;
  __asm { vmovss  dword ptr [rbx+18h], xmm0 }
  *(_BYTE *)_RBX = 0;
  if ( j_lua_gettop(luaVM) >= 4 )
    _RBX[7] = lui_tointeger32(luaVM, 4);
  if ( (int)_RBX[7] <= 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "prettyNumberData->precision > 0");
  return 0i64;
}

