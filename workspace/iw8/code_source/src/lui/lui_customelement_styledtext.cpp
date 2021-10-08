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

void __fastcall LUIElement_StyledText_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  LUIElement *v16; 
  unsigned __int8 *fontDecodeStyle; 
  LUISharedTextRefIndex v21; 
  int leading; 
  LUIVerticalAlignment VerticalAlignment; 
  unsigned __int8 v32; 
  char v34; 
  bool v35; 
  unsigned int v37; 
  const dvar_t *v50; 
  const dvar_t *v53; 
  bool v79; 
  const dvar_t *v87; 
  const dvar_t *v89; 
  float fmt; 
  float fmta; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  char v100; 
  char tracking; 
  char *text; 
  LUIVerticalAlignment v112; 

  __asm { vmovaps [rsp+178h+var_B8], xmm13 }
  v16 = root;
  __asm { vmovaps xmm13, xmm3 }
  _RBX = element;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  fontDecodeStyle = (unsigned __int8 *)_RBX->customElementData;
  if ( !LUIElement_IsTextLike(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_styledtext.cpp", 60, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  v21 = *(unsigned __int16 *)_RBX->textData.textRef;
  if ( (_WORD)v21 != INVALID_INDEX )
  {
    __asm
    {
      vmovaps [rsp+178h+var_48], xmm6
      vmovaps [rsp+178h+var_68], xmm8
      vmovaps [rsp+178h+var_78], xmm9
      vmovaps [rsp+178h+var_A8], xmm12
    }
    LUI_SharedTextRef_PushRefOnStack(luaVM, v21);
    if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_styledtext.cpp", 66, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
      __debugbreak();
    text = (char *)&queryFormat.fmt + 3;
    if ( j_lua_isstring(luaVM, -1) )
      text = (char *)j_lua_tolstring(luaVM, -1, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D8h]
      vsubss  xmm9, xmm0, dword ptr [rbx+0D0h]
    }
    *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rbx+120h]
      vmovss  xmm8, cs:__real@3f000000
      vmulss  xmm0, xmm0, dword ptr [rbx+124h]
      vaddss  xmm1, xmm1, xmm8
      vcvttss2si eax, xmm1
      vaddss  xmm1, xmm0, xmm8
      vcvttss2si r14d, xmm1
    }
    v100 = leading;
    tracking = _EAX;
    VerticalAlignment = LUI_GetVerticalAlignment(_RBX->currentAnimationState.alignment);
    v32 = fontDecodeStyle[94];
    v112 = VerticalAlignment;
    __asm { vxorps  xmm12, xmm12, xmm12 }
    v34 = 0;
    v35 = v32 == 0;
    if ( !v32 )
      goto LABEL_30;
    __asm { vmovaps [rsp+178h+var_58], xmm7 }
    _ER14 = 1;
    __asm { vmovaps [rsp+178h+var_88], xmm10 }
    v37 = 1;
    __asm { vmovaps [rsp+178h+var_98], xmm11 }
    if ( v32 == 2 )
      v37 = fontDecodeStyle[92];
    __asm
    {
      vxorps  xmm11, xmm11, xmm11
      vcvtsi2ss xmm11, xmm11, rax
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, rax
      vxorps  xmm10, xmm10, xmm10
      vxorps  xmm7, xmm7, xmm7
      vmovd   xmm1, r14d
    }
    _EAX = SEH_GetCurrentLanguage() - 12;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpgtq xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@40000000
      vblendvps xmm0, xmm1, xmm12, xmm2
      vmovss  [rsp+178h+var_D0], xmm0
    }
    if ( fontDecodeStyle[94] != 2 )
    {
      v87 = DVARFLT_lui_marquee_stencil_padding_left;
      if ( !DVARFLT_lui_marquee_stencil_padding_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_marquee_stencil_padding_left") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v87);
      __asm { vmulss  xmm8, xmm9, dword ptr [rsi+28h] }
      v89 = DVARFLT_lui_marquee_stencil_padding_right;
      if ( !DVARFLT_lui_marquee_stencil_padding_right && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_marquee_stencil_padding_right") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v89);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0CCh]
        vmulss  xmm3, xmm9, dword ptr [rsi+28h]
        vaddss  xmm11, xmm3, dword ptr [rbx+0D4h]
      }
      LOBYTE(leading) = v100;
      __asm { vsubss  xmm10, xmm0, xmm8 }
      goto LABEL_29;
    }
    v50 = DVARFLT_lui_marquee_stencil_padding_top;
    if ( !DVARFLT_lui_marquee_stencil_padding_top && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_marquee_stencil_padding_top") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    __asm
    {
      vmulss  xmm1, xmm9, dword ptr [r15+28h]
      vmovss  xmm0, dword ptr [rbx+0D0h]
    }
    v53 = DVARFLT_lui_marquee_stencil_padding_bottom;
    __asm
    {
      vsubss  xmm1, xmm0, xmm1
      vsubss  xmm7, xmm1, [rsp+178h+var_D0]
    }
    if ( !DVARFLT_lui_marquee_stencil_padding_bottom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_marquee_stencil_padding_bottom") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    LOBYTE(leading) = v100;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm4, xmm0, xmm9
      vmulss  xmm0, xmm9, dword ptr [r15+28h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, esi
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm3, xmm2, dword ptr [rbx+0D0h]
      vaddss  xmm6, xmm3, xmm0
    }
    if ( v37 > 1 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm4
      }
      if ( v112 != CENTER )
      {
        v16 = root;
        if ( v112 == BOTTOM )
        {
          __asm
          {
            vsubss  xmm7, xmm7, xmm1
            vsubss  xmm6, xmm6, xmm1
          }
        }
        goto LABEL_29;
      }
      __asm
      {
        vmulss  xmm0, xmm1, xmm8
        vsubss  xmm7, xmm7, xmm0
        vsubss  xmm6, xmm6, xmm0
      }
    }
    v16 = root;
LABEL_29:
    __asm
    {
      vmovaps xmm3, xmm11; right
      vmovaps xmm2, xmm7; top
      vmovaps xmm1, xmm10; left
      vmovss  dword ptr [rsp+178h+fmt], xmm6
    }
    LUI_Render_PushStencilRectangle(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
    __asm
    {
      vmovaps xmm11, [rsp+178h+var_98]
      vmovaps xmm10, [rsp+178h+var_88]
      vmovaps xmm7, [rsp+178h+var_58]
    }
LABEL_30:
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D4h]
      vmovss  xmm3, dword ptr [rbx+0CCh]
      vmovaps xmm8, [rsp+178h+var_68]
      vsubss  xmm6, xmm0, xmm3
      vmovss  xmm0, dword ptr [rbx+48h]; amount
      vcomiss xmm0, xmm12
      vmovaps xmm12, [rsp+178h+var_A8]
    }
    v79 = !(v34 | v35);
    if ( !(v34 | v35) )
    {
      LUI_Render_PushBlur(*(float *)&_XMM0);
      __asm { vmovss  xmm3, dword ptr [rbx+0CCh]; x }
    }
    __asm
    {
      vmovss  xmm0, [rsp+178h+blue]
      vmovss  xmm1, [rsp+178h+green]
      vmovss  [rsp+178h+var_118], xmm6
      vmovss  [rsp+178h+var_120], xmm9
      vmovss  [rsp+178h+var_138], xmm13
      vmovss  [rsp+178h+var_140], xmm0
      vmovss  xmm0, [rsp+178h+red]
      vmovss  [rsp+178h+var_148], xmm1
      vmovss  xmm1, dword ptr [rbx+0D8h]
      vmovss  [rsp+178h+var_150], xmm0
      vmovss  dword ptr [rsp+178h+fmt], xmm1
    }
    LUI_Interface_DrawText(localClientNum, v16, _RBX, *(float *)&_XMM3, fmta, v94, v95, v96, v97, text, _RBX->textData.font, v98, v99, tracking, leading, _RBX->currentAnimationState.alignment, (FontDecodeStyle *)fontDecodeStyle, (FontGlowStyle *)(fontDecodeStyle + 20), (AutoScrollStyle *)(fontDecodeStyle + 76), luaVM);
    __asm
    {
      vmovaps xmm9, [rsp+178h+var_78]
      vmovaps xmm6, [rsp+178h+var_48]
    }
    if ( v79 )
      LUI_Render_PopBlur();
    if ( v32 )
      LUI_Render_PopStencilRectangle(localClientNum);
    j_lua_settop(luaVM, -2);
  }
  __asm { vmovaps xmm13, [rsp+178h+var_B8] }
}

/*
==============
LUIElement_StyledText_SetOutlineMaxDistance_impl
==============
*/
__int64 LUIElement_StyledText_SetOutlineMaxDistance_impl(lua_State *const luaVM)
{
  LUIElement *v4; 
  int v6; 
  LUITweenProperty v7; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetOutlineMaxDistance( value, ?duration, ?easing )");
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    goto LABEL_24;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    goto LABEL_24;
  v4 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) )
    goto LABEL_24;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovaps xmm6, xmm0 }
  if ( j_lua_gettop(luaVM) < 3 )
    v6 = 0;
  else
    v6 = lui_tointeger32(luaVM, 3);
  _R14 = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v4, luaVM);
  if ( v6 <= 0 )
  {
    LOBYTE(v7) = 30;
    LUI_Tween_InterruptElementTween(v4, v7, luaVM);
    __asm { vmovss  dword ptr [r14+38h], xmm6 }
    LUI_QuadCache_Element_Invalidate(v4);
LABEL_24:
    result = 0i64;
    goto LABEL_25;
  }
  _RSI = LUI_Tween_Create(luaVM, v4);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RSI->easing = lui_tointeger32(luaVM, 4);
  _RSI->targetProperty[0] = 30;
  _RSI->duration = v6;
  _RSI->startValue.intValue = LODWORD(_R14->glowStyle.outlineGlowMaxDistance);
  __asm { vmovss  dword ptr [rsi+28h], xmm6 }
  LUI_Tween_AddElementTween(v4, _RSI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RSI, luaVM);
  result = 1i64;
LABEL_25:
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
}

/*
==============
LUIElement_StyledText_SetOutlineMinDistance_impl
==============
*/
__int64 LUIElement_StyledText_SetOutlineMinDistance_impl(lua_State *const luaVM)
{
  LUIElement *v4; 
  int v6; 
  LUITweenProperty v7; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetOutlineMinDistance( value, ?duration, ?easing )");
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    goto LABEL_24;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    goto LABEL_24;
  v4 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) )
    goto LABEL_24;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovaps xmm6, xmm0 }
  if ( j_lua_gettop(luaVM) < 3 )
    v6 = 0;
  else
    v6 = lui_tointeger32(luaVM, 3);
  _R14 = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v4, luaVM);
  if ( v6 <= 0 )
  {
    LOBYTE(v7) = 29;
    LUI_Tween_InterruptElementTween(v4, v7, luaVM);
    __asm { vmovss  dword ptr [r14+34h], xmm6 }
    LUI_QuadCache_Element_Invalidate(v4);
LABEL_24:
    result = 0i64;
    goto LABEL_25;
  }
  _RSI = LUI_Tween_Create(luaVM, v4);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RSI->easing = lui_tointeger32(luaVM, 4);
  _RSI->targetProperty[0] = 29;
  _RSI->duration = v6;
  _RSI->startValue.intValue = LODWORD(_R14->glowStyle.outlineGlowMinDistance);
  __asm { vmovss  dword ptr [rsi+28h], xmm6 }
  LUI_Tween_AddElementTween(v4, _RSI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RSI, luaVM);
  result = 1i64;
LABEL_25:
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
}

/*
==============
LUIElement_StyledText_SetOutlineRGBFromInt_impl
==============
*/
__int64 LUIElement_StyledText_SetOutlineRGBFromInt_impl(lua_State *const luaVM)
{
  LUIElement *v6; 
  int v7; 
  LUITweenProperty v18; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetOutlineRGBFromInt( colorValue, ?duration, ?easing )");
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
  }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    goto LABEL_23;
  v6 = LUI_ToElement(luaVM, 1);
  lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v7 = 0;
  else
    v7 = lui_tointeger32(luaVM, 3);
  __asm
  {
    vmovss  xmm1, cs:__real@3b808081
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm7, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm8, xmm0, xmm1
  }
  _RSI = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v6, luaVM);
  if ( v7 <= 0 )
  {
    LOBYTE(v18) = 31;
    LUI_Tween_InterruptElementTween(v6, v18, luaVM);
    __asm
    {
      vmovss  dword ptr [rsi+3Ch], xmm6
      vmovss  dword ptr [rsi+40h], xmm7
      vmovss  dword ptr [rsi+44h], xmm8
    }
    LUI_QuadCache_Element_Invalidate(v6);
LABEL_23:
    result = 0i64;
    goto LABEL_24;
  }
  _RDI = LUI_Tween_Create(luaVM, v6);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RDI->easing = lui_tointeger32(luaVM, 4);
  _RDI->targetProperty[0] = 31;
  _RDI->duration = v7;
  _RDI->startValue.intValue = LODWORD(_RSI->glowStyle.outlineGlowColor.v[0]);
  _RDI->startValue.colorValue.g = _RSI->glowStyle.outlineGlowColor.v[1];
  _RDI->startValue.colorValue.b = _RSI->glowStyle.outlineGlowColor.v[2];
  __asm
  {
    vmovss  dword ptr [rdi+28h], xmm6
    vmovss  dword ptr [rdi+2Ch], xmm7
    vmovss  dword ptr [rdi+30h], xmm8
  }
  LUI_Tween_AddElementTween(v6, _RDI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RDI, luaVM);
  result = 1i64;
LABEL_24:
  __asm
  {
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return result;
}

/*
==============
LUIElement_StyledText_SetOutlineRGBFromTable_impl
==============
*/
__int64 LUIElement_StyledText_SetOutlineRGBFromTable_impl(lua_State *const luaVM)
{
  LUIElement *v6; 
  int v7; 
  LUITweenProperty v11; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetOutlineRGBFromTable( colorTable, ?duration, ?easing )");
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
  }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    goto LABEL_30;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    goto LABEL_30;
  v6 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v6, luaVM) )
    goto LABEL_30;
  if ( j_lua_gettop(luaVM) < 3 )
    v7 = 0;
  else
    v7 = lui_tointeger32(luaVM, 3);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm7, xmm7, xmm7
  }
  j_lua_getfield(luaVM, 2, "r");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm6, xmm0 }
  }
  j_lua_getfield(luaVM, 2, "g");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm8, xmm0 }
  }
  j_lua_getfield(luaVM, 2, "b");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm7, xmm0 }
  }
  j_lua_settop(luaVM, -4);
  _RSI = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v6, luaVM);
  if ( v7 <= 0 )
  {
    LOBYTE(v11) = 31;
    LUI_Tween_InterruptElementTween(v6, v11, luaVM);
    __asm
    {
      vmovss  dword ptr [rsi+3Ch], xmm6
      vmovss  dword ptr [rsi+40h], xmm8
      vmovss  dword ptr [rsi+44h], xmm7
    }
    LUI_QuadCache_Element_Invalidate(v6);
LABEL_30:
    result = 0i64;
    goto LABEL_31;
  }
  _RDI = LUI_Tween_Create(luaVM, v6);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RDI->easing = lui_tointeger32(luaVM, 4);
  _RDI->targetProperty[0] = 31;
  _RDI->duration = v7;
  _RDI->startValue.intValue = LODWORD(_RSI->glowStyle.outlineGlowColor.v[0]);
  _RDI->startValue.colorValue.g = _RSI->glowStyle.outlineGlowColor.v[1];
  _RDI->startValue.colorValue.b = _RSI->glowStyle.outlineGlowColor.v[2];
  __asm
  {
    vmovss  dword ptr [rdi+28h], xmm6
    vmovss  dword ptr [rdi+2Ch], xmm8
    vmovss  dword ptr [rdi+30h], xmm7
  }
  LUI_Tween_AddElementTween(v6, _RDI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RDI, luaVM);
  result = 1i64;
LABEL_31:
  __asm
  {
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return result;
}

/*
==============
LUIElement_StyledText_SetShadowMaxDistance_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowMaxDistance_impl(lua_State *const luaVM)
{
  LUIElement *v4; 
  int v6; 
  LUITweenProperty v7; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowMaxDistance( value, ?duration, ?easing )");
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    goto LABEL_24;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    goto LABEL_24;
  v4 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) )
    goto LABEL_24;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovaps xmm6, xmm0 }
  if ( j_lua_gettop(luaVM) < 3 )
    v6 = 0;
  else
    v6 = lui_tointeger32(luaVM, 3);
  _R14 = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v4, luaVM);
  if ( v6 <= 0 )
  {
    LOBYTE(v7) = 25;
    LUI_Tween_InterruptElementTween(v4, v7, luaVM);
    __asm { vmovss  dword ptr [r14+18h], xmm6 }
    LUI_QuadCache_Element_Invalidate(v4);
LABEL_24:
    result = 0i64;
    goto LABEL_25;
  }
  _RSI = LUI_Tween_Create(luaVM, v4);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RSI->easing = lui_tointeger32(luaVM, 4);
  _RSI->targetProperty[0] = 25;
  _RSI->duration = v6;
  _RSI->startValue.intValue = LODWORD(_R14->glowStyle.glowMaxDistance);
  __asm { vmovss  dword ptr [rsi+28h], xmm6 }
  LUI_Tween_AddElementTween(v4, _RSI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RSI, luaVM);
  result = 1i64;
LABEL_25:
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
}

/*
==============
LUIElement_StyledText_SetShadowMinDistance_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowMinDistance_impl(lua_State *const luaVM)
{
  LUIElement *v4; 
  int v6; 
  LUITweenProperty v7; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowMinDistance( value, ?duration, ?easing )");
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    goto LABEL_24;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    goto LABEL_24;
  v4 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) )
    goto LABEL_24;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovaps xmm6, xmm0 }
  if ( j_lua_gettop(luaVM) < 3 )
    v6 = 0;
  else
    v6 = lui_tointeger32(luaVM, 3);
  _R14 = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v4, luaVM);
  if ( v6 <= 0 )
  {
    LOBYTE(v7) = 24;
    LUI_Tween_InterruptElementTween(v4, v7, luaVM);
    __asm { vmovss  dword ptr [r14+14h], xmm6 }
    LUI_QuadCache_Element_Invalidate(v4);
LABEL_24:
    result = 0i64;
    goto LABEL_25;
  }
  _RSI = LUI_Tween_Create(luaVM, v4);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RSI->easing = lui_tointeger32(luaVM, 4);
  _RSI->targetProperty[0] = 24;
  _RSI->duration = v6;
  _RSI->startValue.intValue = LODWORD(_R14->glowStyle.glowMinDistance);
  __asm { vmovss  dword ptr [rsi+28h], xmm6 }
  LUI_Tween_AddElementTween(v4, _RSI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RSI, luaVM);
  result = 1i64;
LABEL_25:
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
}

/*
==============
LUIElement_StyledText_SetShadowRGBFromInt_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowRGBFromInt_impl(lua_State *const luaVM)
{
  LUIElement *v6; 
  int v7; 
  LUITweenProperty v18; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowRGBFromInt( colorValue, ?duration, ?easing )");
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
  }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    goto LABEL_24;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    goto LABEL_24;
  v6 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v6, luaVM) )
    goto LABEL_24;
  lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v7 = 0;
  else
    v7 = lui_tointeger32(luaVM, 3);
  __asm
  {
    vmovss  xmm1, cs:__real@3b808081
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm7, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm8, xmm0, xmm1
  }
  _RBP = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v6, luaVM);
  if ( v7 <= 0 )
  {
    LOBYTE(v18) = 28;
    LUI_Tween_InterruptElementTween(v6, v18, luaVM);
    __asm
    {
      vmovss  dword ptr [rbp+24h], xmm6
      vmovss  dword ptr [rbp+28h], xmm7
      vmovss  dword ptr [rbp+2Ch], xmm8
    }
    LUI_QuadCache_Element_Invalidate(v6);
LABEL_24:
    result = 0i64;
    goto LABEL_25;
  }
  _RDI = LUI_Tween_Create(luaVM, v6);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RDI->easing = lui_tointeger32(luaVM, 4);
  _RDI->targetProperty[0] = 28;
  _RDI->duration = v7;
  _RDI->startValue.intValue = LODWORD(_RBP->glowStyle.glowColor.v[0]);
  _RDI->startValue.colorValue.g = _RBP->glowStyle.glowColor.v[1];
  _RDI->startValue.colorValue.b = _RBP->glowStyle.glowColor.v[2];
  __asm
  {
    vmovss  dword ptr [rdi+28h], xmm6
    vmovss  dword ptr [rdi+2Ch], xmm7
    vmovss  dword ptr [rdi+30h], xmm8
  }
  LUI_Tween_AddElementTween(v6, _RDI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RDI, luaVM);
  result = 1i64;
LABEL_25:
  __asm
  {
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return result;
}

/*
==============
LUIElement_StyledText_SetShadowRGBFromTable_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowRGBFromTable_impl(lua_State *const luaVM)
{
  LUIElement *v6; 
  int v7; 
  LUITweenProperty v11; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowRGBFromTable( colorTable, ?duration, ?easing )");
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
  }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    goto LABEL_30;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    goto LABEL_30;
  v6 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v6, luaVM) )
    goto LABEL_30;
  if ( j_lua_gettop(luaVM) < 3 )
    v7 = 0;
  else
    v7 = lui_tointeger32(luaVM, 3);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm7, xmm7, xmm7
  }
  j_lua_getfield(luaVM, 2, "r");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm6, xmm0 }
  }
  j_lua_getfield(luaVM, 2, "g");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm8, xmm0 }
  }
  j_lua_getfield(luaVM, 2, "b");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm7, xmm0 }
  }
  j_lua_settop(luaVM, -4);
  _RSI = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v6, luaVM);
  if ( v7 <= 0 )
  {
    LOBYTE(v11) = 28;
    LUI_Tween_InterruptElementTween(v6, v11, luaVM);
    __asm
    {
      vmovss  dword ptr [rsi+24h], xmm6
      vmovss  dword ptr [rsi+28h], xmm8
      vmovss  dword ptr [rsi+2Ch], xmm7
    }
    LUI_QuadCache_Element_Invalidate(v6);
LABEL_30:
    result = 0i64;
    goto LABEL_31;
  }
  _RDI = LUI_Tween_Create(luaVM, v6);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RDI->easing = lui_tointeger32(luaVM, 4);
  _RDI->targetProperty[0] = 28;
  _RDI->duration = v7;
  _RDI->startValue.intValue = LODWORD(_RSI->glowStyle.glowColor.v[0]);
  _RDI->startValue.colorValue.g = _RSI->glowStyle.glowColor.v[1];
  _RDI->startValue.colorValue.b = _RSI->glowStyle.glowColor.v[2];
  __asm
  {
    vmovss  dword ptr [rdi+28h], xmm6
    vmovss  dword ptr [rdi+2Ch], xmm8
    vmovss  dword ptr [rdi+30h], xmm7
  }
  LUI_Tween_AddElementTween(v6, _RDI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RDI, luaVM);
  result = 1i64;
LABEL_31:
  __asm
  {
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return result;
}

/*
==============
LUIElement_StyledText_SetShadowUOffset_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowUOffset_impl(lua_State *const luaVM)
{
  LUIElement *v4; 
  int v6; 
  LUITweenProperty v7; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowUOffset( value, ?duration, ?easing )");
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    goto LABEL_24;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    goto LABEL_24;
  v4 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) )
    goto LABEL_24;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovaps xmm6, xmm0 }
  if ( j_lua_gettop(luaVM) < 3 )
    v6 = 0;
  else
    v6 = lui_tointeger32(luaVM, 3);
  _R14 = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v4, luaVM);
  if ( v6 <= 0 )
  {
    LOBYTE(v7) = 26;
    LUI_Tween_InterruptElementTween(v4, v7, luaVM);
    __asm { vmovss  dword ptr [r14+1Ch], xmm6 }
    LUI_QuadCache_Element_Invalidate(v4);
LABEL_24:
    result = 0i64;
    goto LABEL_25;
  }
  _RSI = LUI_Tween_Create(luaVM, v4);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RSI->easing = lui_tointeger32(luaVM, 4);
  _RSI->targetProperty[0] = 26;
  _RSI->duration = v6;
  _RSI->startValue.intValue = LODWORD(_R14->glowStyle.glowUVOffset.v[0]);
  __asm { vmovss  dword ptr [rsi+28h], xmm6 }
  LUI_Tween_AddElementTween(v4, _RSI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RSI, luaVM);
  result = 1i64;
LABEL_25:
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
}

/*
==============
LUIElement_StyledText_SetShadowVOffset_impl
==============
*/
__int64 LUIElement_StyledText_SetShadowVOffset_impl(lua_State *const luaVM)
{
  LUIElement *v4; 
  int v6; 
  LUITweenProperty v7; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetShadowVOffset( value, ?duration, ?easing )");
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    goto LABEL_24;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    goto LABEL_24;
  v4 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) )
    goto LABEL_24;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovaps xmm6, xmm0 }
  if ( j_lua_gettop(luaVM) < 3 )
    v6 = 0;
  else
    v6 = lui_tointeger32(luaVM, 3);
  _R14 = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(v4, luaVM);
  if ( v6 <= 0 )
  {
    LOBYTE(v7) = 27;
    LUI_Tween_InterruptElementTween(v4, v7, luaVM);
    __asm { vmovss  dword ptr [r14+20h], xmm6 }
    LUI_QuadCache_Element_Invalidate(v4);
LABEL_24:
    result = 0i64;
    goto LABEL_25;
  }
  _RSI = LUI_Tween_Create(luaVM, v4);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RSI->easing = lui_tointeger32(luaVM, 4);
  _RSI->targetProperty[0] = 27;
  _RSI->duration = v6;
  _RSI->startValue.intValue = LODWORD(_R14->glowStyle.glowUVOffset.v[1]);
  __asm { vmovss  dword ptr [rsi+28h], xmm6 }
  LUI_Tween_AddElementTween(v4, _RSI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RSI, luaVM);
  result = 1i64;
LABEL_25:
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_StyledText_Render;
  v2->layoutFunction = LUIElement_StyledText_Layout;
  LUIElement_InitTextLikeElement(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

