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
  LUIElement *v2; 
  double v3; 
  float *v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:setSpeed( speed )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      if ( j_lua_isnumber(luaVM, 2) )
      {
        v2 = LUI_ToElement(luaVM, 1);
        if ( LUI_ElementHasWeakTableEntry(v2, luaVM) )
        {
          v3 = lui_tonumber32(luaVM, 2);
          LUI_PutElementOnTopOfStack(v2, luaVM);
          j_lua_getfield(luaVM, -1, "m_UIPrettyNumberData");
          if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 96, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
            __debugbreak();
          v4 = (float *)j_lua_touserdata(luaVM, -1);
          j_lua_settop(luaVM, -3);
          v4[6] = *(float *)&v3;
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
void LUIElement_UIPrettyNumberLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  char *v9; 
  double v10; 
  double v13; 
  float v14; 
  __int128 v15; 
  __int128 v19; 
  bool v20; 
  __int128 v21; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  char *v28; 

  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_getfield(luaVM, -1, "m_UIPrettyNumberData");
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 192, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  v9 = (char *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -3);
  v10 = *((double *)v9 + 1);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rdi+14h] }
  v13 = *(double *)&_XMM0 - v10;
  if ( *(double *)&_XMM0 - v10 > 0.01 || *(double *)&_XMM0 - v10 < -0.01 || !*v9 )
  {
    v14 = *((float *)v9 + 6);
    v15 = 0i64;
    *(float *)&v15 = (float)deltaTime * 0.001;
    _XMM1 = v15;
    __asm { vminss  xmm2, xmm1, cs:__real@42480000 }
    *((_QWORD *)&v19 + 1) = *((_QWORD *)&_XMM2 + 1);
    *(double *)&v19 = (float)(*(float *)&_XMM2 * v14);
    _XMM1 = v19;
    if ( v14 <= 0.0 )
    {
      *(double *)&_XMM1 = *(double *)&_XMM0 - v10;
LABEL_16:
      *((_QWORD *)&v21 + 1) = 0i64;
      *((double *)v9 + 1) = v10 + *(double *)&_XMM1;
      *(double *)&v21 = v10 + *(double *)&_XMM1 + 0.5;
      _XMM0 = v21;
      __asm { vcvttsd2si r11d, xmm0 }
      if ( _ER11 != *((_DWORD *)v9 + 4) || !*v9 )
      {
        v24 = 0;
        *((_DWORD *)v9 + 4) = _ER11;
        v25 = 0;
        v26 = 1;
        if ( _ER11 < 0 )
        {
          v9[32] = 45;
          v25 = 1;
          _ER11 = -_ER11;
        }
        if ( _ER11 / 10 <= 0 )
          goto LABEL_24;
        v27 = 10;
        do
        {
          v26 = v27;
          v27 *= 10;
          ++v24;
        }
        while ( _ER11 / v27 > 0 );
        if ( v26 >= 1 )
        {
LABEL_24:
          v28 = &v9[v25 + 32];
          do
          {
            ++v25;
            *v28++ = _ER11 / v26 + 48;
            _ER11 -= v26 * (char)(_ER11 / v26);
            if ( v24 > 0 && v24 == 3 * (v24 / 3) )
            {
              ++v25;
              *v28++ = 44;
            }
            --v24;
            v26 /= 10;
          }
          while ( v26 >= 1 );
        }
        v9[v25 + 32] = 0;
        if ( v25 >= 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 179, ASSERT_TYPE_ASSERT, "(charIndex < 64)", (const char *)&queryFormat, "charIndex < LUI_PRETTY_NUMBER_STRING_BUFFER_SIZE") )
          __debugbreak();
        element->layoutCached = 0;
        *v9 = 1;
      }
      goto LABEL_33;
    }
    v20 = v13 < 0.0;
    if ( v13 > 0.0 )
    {
      if ( *(double *)&v19 > v13 )
        goto LABEL_14;
      v20 = v13 < 0.0;
    }
    if ( !v20 )
      goto LABEL_16;
    if ( *(double *)&v19 >= v13 )
    {
      __asm { vxorpd  xmm1, xmm1, cs:__xmm@80000000000000008000000000000000 }
      goto LABEL_16;
    }
LABEL_14:
    *(double *)&_XMM1 = *(double *)&_XMM0 - v10;
    goto LABEL_16;
  }
LABEL_33:
  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUIElement_UIPrettyNumberRender
==============
*/
void LUIElement_UIPrettyNumberRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  const char *v11; 

  if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 241, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_getfield(luaVM, -1, "m_UIPrettyNumberData");
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_prettynumber.cpp", 246, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  v11 = (const char *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -3);
  LUI_Interface_DrawText(localClientNum, root, element, element->left, element->bottom, red, green, blue, alpha, v11 + 32, element->textData.font, element->bottom - element->top, element->right - element->left, 0, 0, element->currentAnimationState.alignment, NULL, NULL, NULL, luaVM);
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
  LUIElement *v2; 
  _BYTE *v3; 
  double v4; 

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
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 3u;
  v2->layoutFunction = LUIElement_UIPrettyNumberLayout;
  v2->renderFunction = LUIElement_UIPrettyNumberRender;
  LUIElement_InitTextLikeElement(v2);
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 0x60ui64);
  memset_0(v3, 0, 0x60ui64);
  j_lua_setfield(luaVM, -2, "m_UIPrettyNumberData");
  j_luaL_register(luaVM, NULL, PrettyNumber_functions);
  j_lua_settop(luaVM, -2);
  *((double *)v3 + 1) = (float)lui_tointeger32(luaVM, 3);
  *((_DWORD *)v3 + 5) = lui_tointeger32(luaVM, 3);
  *((_DWORD *)v3 + 4) = lui_tointeger32(luaVM, 3);
  v4 = lui_tonumber32(luaVM, 2);
  *((_DWORD *)v3 + 7) = 1;
  *((float *)v3 + 6) = *(float *)&v4;
  *v3 = 0;
  if ( j_lua_gettop(luaVM) >= 4 )
    *((_DWORD *)v3 + 7) = lui_tointeger32(luaVM, 4);
  if ( *((int *)v3 + 7) <= 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "prettyNumberData->precision > 0");
  return 0i64;
}

