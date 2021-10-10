/*
==============
LUIElement_StyledText_GetDecodeEffectTimeLength
==============
*/
__int64 LUIElement_StyledText_GetDecodeEffectTimeLength(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  LUISharedTextRefIndex v4; 
  __int64 v5; 
  const char *v6; 
  LUIStyledText *CustomElement; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  v2 = 1;
  v3 = LUI_ToElement(luaVM, 1);
  v4 = *(unsigned __int16 *)v3->textData.textRef;
  if ( (_WORD)v4 == INVALID_INDEX )
  {
    v2 = 0;
  }
  else
  {
    LUI_SharedTextRef_PushRefOnStack(luaVM, v4);
    v5 = -1i64;
    if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_styledtext.cpp", 196, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
      __debugbreak();
    v6 = j_lua_tolstring(luaVM, -1, NULL);
    do
      ++v5;
    while ( v6[v5] );
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v3, luaVM);
    j_lua_pushinteger(luaVM, (int)v5 * CustomElement->decodeStyle.millisecondsPerLetter);
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetDecodeUseSystemTime
==============
*/
__int64 LUIElement_StyledText_SetDecodeUseSystemTime(lua_State *const luaVM)
{
  LUIElement *v2; 
  bool v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = j_lua_toboolean(luaVM, 2) != 0;
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  *((_BYTE *)v2->customElementData + 16) = !v3;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetDecodeUpdatesPerLetter
==============
*/
__int64 LUIElement_StyledText_SetDecodeUpdatesPerLetter(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  *((_DWORD *)v2->customElementData + 3) = v3;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_TextUpdate
==============
*/
__int64 LUIElement_StyledText_TextUpdate(lua_State *const luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  int time; 
  unsigned int v5; 
  __int64 v7; 
  __int64 v8; 
  int v9; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  if ( !clientUIActives[0].frontEndSceneState[0] && clientUIActives[0].cgameInitialized && customElementData[16] )
  {
    if ( !cg_t::ms_allocatedCount )
    {
      v9 = cg_t::ms_allocatedCount;
      LODWORD(v7) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[0] )
    {
      LODWORD(v8) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v8) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v8) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v8) )
        __debugbreak();
    }
    time = cg_t::ms_cgArray[0]->time;
  }
  else
  {
    time = Sys_Milliseconds();
  }
  *(_DWORD *)customElementData = time;
  *((_DWORD *)customElementData + 24) = 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_CompleteDecodeAnimation
==============
*/
__int64 LUIElement_StyledText_CompleteDecodeAnimation(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  *(_DWORD *)v2->customElementData = 0;
  LUI_QuadCache_Element_Invalidate(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetDecodeMaxRandChars
==============
*/
__int64 LUIElement_StyledText_SetDecodeMaxRandChars(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  *((_DWORD *)v2->customElementData + 2) = v3;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetDecodeLetterLength
==============
*/
__int64 LUIElement_StyledText_SetDecodeLetterLength(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  *((_DWORD *)v2->customElementData + 1) = v3;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetShadowMinDistance
==============
*/
__int64 LUIElement_StyledText_SetShadowMinDistance(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_StyledText_SetShadowMinDistance_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetShadowMaxDistance
==============
*/
__int64 LUIElement_StyledText_SetShadowMaxDistance(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_StyledText_SetShadowMaxDistance_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetShadowUOffset
==============
*/
__int64 LUIElement_StyledText_SetShadowUOffset(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_StyledText_SetShadowUOffset_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetShadowVOffset
==============
*/
__int64 LUIElement_StyledText_SetShadowVOffset(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_StyledText_SetShadowVOffset_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetShadowRGBFromInt
==============
*/
__int64 LUIElement_StyledText_SetShadowRGBFromInt(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_StyledText_SetShadowRGBFromInt_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetShadowRGBFromTable
==============
*/
__int64 LUIElement_StyledText_SetShadowRGBFromTable(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_StyledText_SetShadowRGBFromTable_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetOutlineMinDistance
==============
*/
__int64 LUIElement_StyledText_SetOutlineMinDistance(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_StyledText_SetOutlineMinDistance_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetOutlineMaxDistance
==============
*/
__int64 LUIElement_StyledText_SetOutlineMaxDistance(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_StyledText_SetOutlineMaxDistance_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetOutlineRGBFromInt
==============
*/
__int64 LUIElement_StyledText_SetOutlineRGBFromInt(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_StyledText_SetOutlineRGBFromInt_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetOutlineRGBFromTable
==============
*/
__int64 LUIElement_StyledText_SetOutlineRGBFromTable(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_StyledText_SetOutlineRGBFromTable_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_StyledText_SetStartupDelay
==============
*/
__int64 LUIElement_StyledText_SetStartupDelay(lua_State *const luaVM)
{
  LUIElement *v2; 
  _WORD *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[38] = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetLineHoldTime
==============
*/
__int64 LUIElement_StyledText_SetLineHoldTime(lua_State *const luaVM)
{
  LUIElement *v2; 
  _WORD *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[45] = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetAnimMoveTime
==============
*/
__int64 LUIElement_StyledText_SetAnimMoveTime(lua_State *const luaVM)
{
  LUIElement *v2; 
  _WORD *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[43] = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetAnimMoveSpeed
==============
*/
__int64 LUIElement_StyledText_SetAnimMoveSpeed(lua_State *const luaVM)
{
  LUIElement *v2; 
  _WORD *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[44] = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetEndDelay
==============
*/
__int64 LUIElement_StyledText_SetEndDelay(lua_State *const luaVM)
{
  LUIElement *v2; 
  _WORD *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[39] = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetCrossfadeTime
==============
*/
__int64 LUIElement_StyledText_SetCrossfadeTime(lua_State *const luaVM)
{
  LUIElement *v2; 
  _WORD *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[40] = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetFadeInTime
==============
*/
__int64 LUIElement_StyledText_SetFadeInTime(lua_State *const luaVM)
{
  LUIElement *v2; 
  _WORD *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[41] = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetFadeOutTime
==============
*/
__int64 LUIElement_StyledText_SetFadeOutTime(lua_State *const luaVM)
{
  LUIElement *v2; 
  _WORD *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[42] = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetAutoScrollStyle
==============
*/
__int64 LUIElement_StyledText_SetAutoScrollStyle(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  char v4; 
  _BYTE *customElementData; 
  LUIElementUsageFlag usageFlags; 
  unsigned int v7; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  v4 = v3;
  if ( v3 >= 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "directionInt < static_cast<int>( AutoScrollDirection::COUNT )");
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  usageFlags = v2->usageFlags;
  if ( v4 )
    v7 = usageFlags | 3;
  else
    v7 = usageFlags & 0xFFFFFFFC;
  v2->usageFlags = v7;
  customElementData[94] = v4;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_GetAutoScrollStyle
==============
*/
__int64 LUIElement_StyledText_GetAutoScrollStyle(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  j_lua_pushinteger(luaVM, *((char *)v2->customElementData + 94));
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUIElement_StyledText_SetMaxVisibleLines
==============
*/
__int64 LUIElement_StyledText_SetMaxVisibleLines(lua_State *const luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[92] = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_SetUseEllipses
==============
*/
__int64 LUIElement_StyledText_SetUseEllipses(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned __int8 v3; 
  _BYTE *customElementData; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = j_lua_tointeger(luaVM, 2);
  if ( v3 >= 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_styledtext.cpp", 999, ASSERT_TYPE_ASSERT, "(unsigned)( ellipses ) < (unsigned)( LUI_ELLIPSES_COUNT )", "ellipses doesn't index LUI_ELLIPSES_COUNT\n\t%i not in [0, %i)", v3, 3) )
    __debugbreak();
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[93] = v3 != 0;
  if ( v3 == 2 )
  {
    *((_DWORD *)customElementData + 19) = 98305000;
    *((_DWORD *)customElementData + 22) = 26214900;
    *((_DWORD *)customElementData + 21) = 300;
    *((_DWORD *)customElementData + 20) = 19660800;
    customElementData[92] = 1;
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
LUIElement_StyledText_SetParentHasFocus
==============
*/
__int64 LUIElement_StyledText_SetParentHasFocus(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int flags; 
  unsigned int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = j_lua_toboolean(luaVM, 2);
  flags = v2->currentAnimationState.flags;
  v5 = flags & 0xFFFFFFDF;
  if ( v3 )
    v5 = v2->currentAnimationState.flags | 0x20;
  v2->currentAnimationState.flags = v5;
  if ( flags != v5 )
    LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUIElement_StyledText_Layout
==============
*/
void LUIElement_StyledText_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  _BYTE *customElementData; 
  LUIElement *parent; 
  char v9; 

  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = element->customElementData;
  if ( customElementData[94] == 1 && customElementData[93] && (element->currentAnimationState.flags & 0x20) != 0 )
  {
    parent = element->parent;
    v9 = 1;
    if ( !parent )
      goto LABEL_12;
    while ( (parent->currentAnimationState.flags & 4) != 0 )
    {
      parent = parent->parent;
      if ( !parent )
        goto LABEL_12;
    }
  }
  v9 = 0;
LABEL_12:
  if ( v9 )
    *((_DWORD *)customElementData + 24) = 0;
  else
    *((_DWORD *)customElementData + 24) += deltaTime;
}

/*
==============
LUIElement_StyledText_Render
==============
*/
void LUIElement_StyledText_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  LUIElement *v8; 
  unsigned __int8 *fontDecodeStyle; 
  LUISharedTextRefIndex v13; 
  float v14; 
  float v15; 
  double CurrentUnitScale; 
  int leading; 
  LUIVerticalAlignment VerticalAlignment; 
  unsigned __int8 v19; 
  int v20; 
  float displayWidth; 
  float displayHeight; 
  float v23; 
  float v24; 
  const dvar_t *v29; 
  float v30; 
  const dvar_t *v31; 
  float v32; 
  float v33; 
  float left; 
  float v35; 
  float userData; 
  const dvar_t *v37; 
  float v38; 
  const dvar_t *v39; 
  int tracking; 
  char *text; 
  LUIVerticalAlignment v42; 

  v8 = root;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  fontDecodeStyle = (unsigned __int8 *)element->customElementData;
  if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_styledtext.cpp", 60, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  v13 = *(unsigned __int16 *)element->textData.textRef;
  if ( (_WORD)v13 != INVALID_INDEX )
  {
    LUI_SharedTextRef_PushRefOnStack(luaVM, v13);
    if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_styledtext.cpp", 66, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
      __debugbreak();
    text = (char *)&queryFormat.fmt + 3;
    if ( j_lua_isstring(luaVM, -1) )
      text = (char *)j_lua_tolstring(luaVM, -1, NULL);
    v15 = element->bottom - element->top;
    v14 = v15;
    CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
    leading = (int)(float)((float)(*(float *)&CurrentUnitScale * element->imageData.vMax) + 0.5);
    tracking = (int)(float)((float)(*(float *)&CurrentUnitScale * element->imageData.vMin) + 0.5);
    VerticalAlignment = LUI_GetVerticalAlignment(element->currentAnimationState.alignment);
    v19 = fontDecodeStyle[94];
    v42 = VerticalAlignment;
    if ( !v19 )
      goto LABEL_30;
    v20 = 1;
    if ( v19 == 2 )
      v20 = fontDecodeStyle[92];
    displayWidth = (float)cls.vidConfig.displayWidth;
    displayHeight = (float)cls.vidConfig.displayHeight;
    v23 = 0.0;
    v24 = 0.0;
    _XMM0 = (unsigned int)(SEH_GetCurrentLanguage() - 12);
    __asm { vpcmpgtq xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_2_0);
    __asm { vblendvps xmm0, xmm1, xmm12, xmm2 }
    if ( fontDecodeStyle[94] != 2 )
    {
      v37 = DVARFLT_lui_marquee_stencil_padding_left;
      if ( !DVARFLT_lui_marquee_stencil_padding_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_marquee_stencil_padding_left") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      v38 = v15 * v37->current.value;
      v39 = DVARFLT_lui_marquee_stencil_padding_right;
      if ( !DVARFLT_lui_marquee_stencil_padding_right && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_marquee_stencil_padding_right") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      displayWidth = (float)(v15 * v39->current.value) + element->right;
      v23 = element->left - v38;
      goto LABEL_29;
    }
    v29 = DVARFLT_lui_marquee_stencil_padding_top;
    if ( !DVARFLT_lui_marquee_stencil_padding_top && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_marquee_stencil_padding_top") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    v30 = v15 * v29->current.value;
    v31 = DVARFLT_lui_marquee_stencil_padding_bottom;
    v24 = (float)(element->top - v30) - *(float *)&_XMM0;
    if ( !DVARFLT_lui_marquee_stencil_padding_bottom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_marquee_stencil_padding_bottom") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    v32 = (float)(char)leading + v15;
    displayHeight = (float)((float)((float)v20 * v32) + element->top) + (float)(v15 * v31->current.value);
    if ( (unsigned int)v20 > 1 )
    {
      v33 = (float)(v20 - 1) * v32;
      if ( v42 != CENTER )
      {
        v8 = root;
        if ( v42 == BOTTOM )
        {
          v24 = v24 - v33;
          displayHeight = displayHeight - v33;
        }
        goto LABEL_29;
      }
      v24 = v24 - (float)(v33 * 0.5);
      displayHeight = displayHeight - (float)(v33 * 0.5);
    }
    v8 = root;
LABEL_29:
    LUI_Render_PushStencilRectangle(localClientNum, v23, v24, displayWidth, displayHeight);
LABEL_30:
    left = element->left;
    v35 = element->right - left;
    userData = element->currentAnimationState.userData;
    if ( userData > 0.0 )
    {
      LUI_Render_PushBlur(userData);
      left = element->left;
    }
    LUI_Interface_DrawText(localClientNum, v8, element, left, element->bottom, red, green, blue, alpha, text, element->textData.font, v14, v35, tracking, leading, element->currentAnimationState.alignment, (FontDecodeStyle *)fontDecodeStyle, (FontGlowStyle *)(fontDecodeStyle + 20), (AutoScrollStyle *)(fontDecodeStyle + 76), luaVM);
    if ( userData > 0.0 )
      LUI_Render_PopBlur();
    if ( v19 )
      LUI_Render_PopStencilRectangle(localClientNum);
    j_lua_settop(luaVM, -2);
  }
}

/*
==============
LUIElement_StyledText_SetOutlineMaxDistance_impl
==============
*/
__int64 LUIElement_StyledText_SetOutlineMaxDistance_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  LUIStyledText *CustomElement; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetOutlineMaxDistance( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v4 = 0;
  else
    v4 = lui_tointeger32(luaVM, 3);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v2, luaVM);
  if ( v4 <= 0 )
  {
    LOBYTE(v5) = 30;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    CustomElement->glowStyle.outlineGlowMaxDistance = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 30;
  v8->duration = v4;
  v8->startValue.intValue = LODWORD(CustomElement->glowStyle.outlineGlowMaxDistance);
  v8->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUIElement_StyledText_SetOutlineMinDistance_impl
==============
*/
__int64 LUIElement_StyledText_SetOutlineMinDistance_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  LUIStyledText *CustomElement; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetOutlineMinDistance( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v4 = 0;
  else
    v4 = lui_tointeger32(luaVM, 3);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v2, luaVM);
  if ( v4 <= 0 )
  {
    LOBYTE(v5) = 29;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    CustomElement->glowStyle.outlineGlowMinDistance = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 29;
  v8->duration = v4;
  v8->startValue.intValue = LODWORD(CustomElement->glowStyle.outlineGlowMinDistance);
  v8->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUIElement_StyledText_SetOutlineRGBFromInt_impl
==============
*/
__int64 LUIElement_StyledText_SetOutlineRGBFromInt_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  int v4; 
  float v5; 
  float v6; 
  float v7; 
  LUITweenProperty v8; 
  LUIStyledText *CustomElement; 
  LUITween *v11; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetOutlineRGBFromInt( colorValue, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v4 = 0;
  else
    v4 = lui_tointeger32(luaVM, 3);
  v5 = (float)BYTE2(v3) * 0.0039215689;
  v6 = (float)BYTE1(v3) * 0.0039215689;
  v7 = (float)(unsigned __int8)v3 * 0.0039215689;
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v2, luaVM);
  if ( v4 <= 0 )
  {
    LOBYTE(v8) = 31;
    LUI_Tween_InterruptElementTween(v2, v8, luaVM);
    CustomElement->glowStyle.outlineGlowColor.v[0] = v5;
    CustomElement->glowStyle.outlineGlowColor.v[1] = v6;
    CustomElement->glowStyle.outlineGlowColor.v[2] = v7;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v11 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v11->easing = lui_tointeger32(luaVM, 4);
  v11->targetProperty[0] = 31;
  v11->duration = v4;
  v11->startValue.intValue = LODWORD(CustomElement->glowStyle.outlineGlowColor.v[0]);
  v11->startValue.colorValue.g = CustomElement->glowStyle.outlineGlowColor.v[1];
  v11->startValue.colorValue.b = CustomElement->glowStyle.outlineGlowColor.v[2];
  v11->endValue.floatValue = v5;
  v11->endValue.colorValue.g = v6;
  v11->endValue.colorValue.b = v7;
  LUI_Tween_AddElementTween(v2, v11, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v11, luaVM);
  return 1i64;
}

/*
==============
LUIElement_StyledText_SetOutlineRGBFromTable_impl
==============
*/
__int64 LUIElement_StyledText_SetOutlineRGBFromTable_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  float v4; 
  float v5; 
  float v6; 
  double v7; 
  double v8; 
  double v9; 
  LUITweenProperty v10; 
  LUIStyledText *CustomElement; 
  LUITween *v13; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetOutlineRGBFromTable( colorTable, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  if ( j_lua_gettop(luaVM) < 3 )
    v3 = 0;
  else
    v3 = lui_tointeger32(luaVM, 3);
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  j_lua_getfield(luaVM, 2, "r");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v7 = lui_tonumber32(luaVM, -1);
    v4 = *(float *)&v7;
  }
  j_lua_getfield(luaVM, 2, "g");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v8 = lui_tonumber32(luaVM, -1);
    v5 = *(float *)&v8;
  }
  j_lua_getfield(luaVM, 2, "b");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v9 = lui_tonumber32(luaVM, -1);
    v6 = *(float *)&v9;
  }
  j_lua_settop(luaVM, -4);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v2, luaVM);
  if ( v3 <= 0 )
  {
    LOBYTE(v10) = 31;
    LUI_Tween_InterruptElementTween(v2, v10, luaVM);
    CustomElement->glowStyle.outlineGlowColor.v[0] = v4;
    CustomElement->glowStyle.outlineGlowColor.v[1] = v5;
    CustomElement->glowStyle.outlineGlowColor.v[2] = v6;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v13 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v13->easing = lui_tointeger32(luaVM, 4);
  v13->targetProperty[0] = 31;
  v13->duration = v3;
  v13->startValue.intValue = LODWORD(CustomElement->glowStyle.outlineGlowColor.v[0]);
  v13->startValue.colorValue.g = CustomElement->glowStyle.outlineGlowColor.v[1];
  v13->startValue.colorValue.b = CustomElement->glowStyle.outlineGlowColor.v[2];
  v13->endValue.floatValue = v4;
  v13->endValue.colorValue.g = v5;
  v13->endValue.colorValue.b = v6;
  LUI_Tween_AddElementTween(v2, v13, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v13, luaVM);
  return 1i64;
}

/*
==============
LUIElement_StyledText_SetShadowMaxDistance_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowMaxDistance_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  LUIStyledText *CustomElement; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowMaxDistance( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v4 = 0;
  else
    v4 = lui_tointeger32(luaVM, 3);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v2, luaVM);
  if ( v4 <= 0 )
  {
    LOBYTE(v5) = 25;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    CustomElement->glowStyle.glowMaxDistance = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 25;
  v8->duration = v4;
  v8->startValue.intValue = LODWORD(CustomElement->glowStyle.glowMaxDistance);
  v8->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUIElement_StyledText_SetShadowMinDistance_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowMinDistance_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  LUIStyledText *CustomElement; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowMinDistance( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v4 = 0;
  else
    v4 = lui_tointeger32(luaVM, 3);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v2, luaVM);
  if ( v4 <= 0 )
  {
    LOBYTE(v5) = 24;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    CustomElement->glowStyle.glowMinDistance = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 24;
  v8->duration = v4;
  v8->startValue.intValue = LODWORD(CustomElement->glowStyle.glowMinDistance);
  v8->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUIElement_StyledText_SetShadowRGBFromInt_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowRGBFromInt_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  int v4; 
  float v5; 
  float v6; 
  float v7; 
  LUITweenProperty v8; 
  LUIStyledText *CustomElement; 
  LUITween *v11; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowRGBFromInt( colorValue, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v4 = 0;
  else
    v4 = lui_tointeger32(luaVM, 3);
  v5 = (float)BYTE2(v3) * 0.0039215689;
  v6 = (float)BYTE1(v3) * 0.0039215689;
  v7 = (float)(unsigned __int8)v3 * 0.0039215689;
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v2, luaVM);
  if ( v4 <= 0 )
  {
    LOBYTE(v8) = 28;
    LUI_Tween_InterruptElementTween(v2, v8, luaVM);
    CustomElement->glowStyle.glowColor.v[0] = v5;
    CustomElement->glowStyle.glowColor.v[1] = v6;
    CustomElement->glowStyle.glowColor.v[2] = v7;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v11 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v11->easing = lui_tointeger32(luaVM, 4);
  v11->targetProperty[0] = 28;
  v11->duration = v4;
  v11->startValue.intValue = LODWORD(CustomElement->glowStyle.glowColor.v[0]);
  v11->startValue.colorValue.g = CustomElement->glowStyle.glowColor.v[1];
  v11->startValue.colorValue.b = CustomElement->glowStyle.glowColor.v[2];
  v11->endValue.floatValue = v5;
  v11->endValue.colorValue.g = v6;
  v11->endValue.colorValue.b = v7;
  LUI_Tween_AddElementTween(v2, v11, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v11, luaVM);
  return 1i64;
}

/*
==============
LUIElement_StyledText_SetShadowRGBFromTable_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowRGBFromTable_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  float v4; 
  float v5; 
  float v6; 
  double v7; 
  double v8; 
  double v9; 
  LUITweenProperty v10; 
  LUIStyledText *CustomElement; 
  LUITween *v13; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowRGBFromTable( colorTable, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  if ( j_lua_gettop(luaVM) < 3 )
    v3 = 0;
  else
    v3 = lui_tointeger32(luaVM, 3);
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  j_lua_getfield(luaVM, 2, "r");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v7 = lui_tonumber32(luaVM, -1);
    v4 = *(float *)&v7;
  }
  j_lua_getfield(luaVM, 2, "g");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v8 = lui_tonumber32(luaVM, -1);
    v5 = *(float *)&v8;
  }
  j_lua_getfield(luaVM, 2, "b");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v9 = lui_tonumber32(luaVM, -1);
    v6 = *(float *)&v9;
  }
  j_lua_settop(luaVM, -4);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v2, luaVM);
  if ( v3 <= 0 )
  {
    LOBYTE(v10) = 28;
    LUI_Tween_InterruptElementTween(v2, v10, luaVM);
    CustomElement->glowStyle.glowColor.v[0] = v4;
    CustomElement->glowStyle.glowColor.v[1] = v5;
    CustomElement->glowStyle.glowColor.v[2] = v6;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v13 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v13->easing = lui_tointeger32(luaVM, 4);
  v13->targetProperty[0] = 28;
  v13->duration = v3;
  v13->startValue.intValue = LODWORD(CustomElement->glowStyle.glowColor.v[0]);
  v13->startValue.colorValue.g = CustomElement->glowStyle.glowColor.v[1];
  v13->startValue.colorValue.b = CustomElement->glowStyle.glowColor.v[2];
  v13->endValue.floatValue = v4;
  v13->endValue.colorValue.g = v5;
  v13->endValue.colorValue.b = v6;
  LUI_Tween_AddElementTween(v2, v13, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v13, luaVM);
  return 1i64;
}

/*
==============
LUIElement_StyledText_SetShadowUOffset_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowUOffset_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  LUIStyledText *CustomElement; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowUOffset( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v4 = 0;
  else
    v4 = lui_tointeger32(luaVM, 3);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v2, luaVM);
  if ( v4 <= 0 )
  {
    LOBYTE(v5) = 26;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    CustomElement->glowStyle.glowUVOffset.v[0] = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 26;
  v8->duration = v4;
  v8->startValue.intValue = LODWORD(CustomElement->glowStyle.glowUVOffset.v[0]);
  v8->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUIElement_StyledText_SetShadowVOffset_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowVOffset_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  LUIStyledText *CustomElement; 
  LUITween *v8; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowVOffset( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v4 = 0;
  else
    v4 = lui_tointeger32(luaVM, 3);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v2, luaVM);
  if ( v4 <= 0 )
  {
    LOBYTE(v5) = 27;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    CustomElement->glowStyle.glowUVOffset.v[1] = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v8 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v8->easing = lui_tointeger32(luaVM, 4);
  v8->targetProperty[0] = 27;
  v8->duration = v4;
  v8->startValue.intValue = LODWORD(CustomElement->glowStyle.glowUVOffset.v[1]);
  v8->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v8, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v8, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupStyledText
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupStyledText(lua_State *luaVM)
{
  LUIElement *v2; 
  void *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_styledTextMethods);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 0x64ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  memset_0(v3, 0, 0x64ui64);
  *((_DWORD *)v3 + 12) = 1065353216;
  *((_DWORD *)v3 + 18) = 1065353216;
  *((_WORD *)v3 + 43) = 2000;
  v2->renderFunction = LUIElement_StyledText_Render;
  v2->layoutFunction = LUIElement_StyledText_Layout;
  LUIElement_InitTextLikeElement(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

