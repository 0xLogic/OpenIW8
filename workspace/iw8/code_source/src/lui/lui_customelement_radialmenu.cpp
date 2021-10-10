/*
==============
LUIElement_RadialMenu_SetActive
==============
*/
__int64 LUIElement_RadialMenu_SetActive(lua_State *const luaVM)
{
  unsigned int active; 
  unsigned int v3; 

  active = LUIElement_RadialMenu_SetActive_impl(luaVM);
  if ( (int)active > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", active, v3);
  }
  return active;
}

/*
==============
LUIElement_RadialMenu_IsActive
==============
*/
__int64 LUIElement_RadialMenu_IsActive(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  RadialMenuOptions *Data; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:IsActive()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    Data = LUIElement_RadialMenu_GetData(v3, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 658, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    j_lua_pushboolean(luaVM, Data->radialMenuActive);
  }
  else
  {
    v2 = 0;
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
LUIElement_RadialMenu_SetDisableInfiniteOuterRadius
==============
*/
__int64 LUIElement_RadialMenu_SetDisableInfiniteOuterRadius(lua_State *const luaVM)
{
  LUIElement *v2; 
  RadialMenuOptions *Data; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetDisableInfiniteOuterRadius( false )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    Data = LUIElement_RadialMenu_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 679, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    Data->disableInfiniteOuterRadius = j_lua_toboolean(luaVM, 2) > 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_RadialMenu_SetKeepSelectionWhileInDeadZone
==============
*/
__int64 LUIElement_RadialMenu_SetKeepSelectionWhileInDeadZone(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_RadialMenu_SetKeepSelectionWhileInDeadZone_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_RadialMenu_SetUseBothThumbsticks
==============
*/
__int64 LUIElement_RadialMenu_SetUseBothThumbsticks(lua_State *const luaVM)
{
  LUIElement *v2; 
  RadialMenuOptions *Data; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetUseBothThumbsticks( true )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    Data = LUIElement_RadialMenu_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 725, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    Data->useBothThumbsticks = j_lua_toboolean(luaVM, 2) > 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_RadialMenu_SetAllowNavigation
==============
*/
__int64 LUIElement_RadialMenu_SetAllowNavigation(lua_State *const luaVM)
{
  LUIElement *v2; 
  RadialMenuOptions *Data; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetAllowNavigation( true )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    Data = LUIElement_RadialMenu_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 745, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    Data->allowNavigation = j_lua_toboolean(luaVM, 2) > 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_RadialMenu_SetAllowMouseRecenterOnActivate
==============
*/
__int64 LUIElement_RadialMenu_SetAllowMouseRecenterOnActivate(lua_State *const luaVM)
{
  LUIElement *v2; 
  RadialMenuOptions *Data; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetAllowMouseRecenterOnActivate( false )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    Data = LUIElement_RadialMenu_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 765, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    Data->allowMouseRecenterOnActivate = j_lua_toboolean(luaVM, 2) > 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_RadialMenu_UseSpecificItemIfPossible
==============
*/
__int64 LUIElement_RadialMenu_UseSpecificItemIfPossible(lua_State *const luaVM)
{
  LUIElement *v2; 
  __int64 v3; 
  RadialMenuOptions *Data; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:UseSpecificItemIfPossible( 2 )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lua_tointeger32(luaVM, 2);
    Data = LUIElement_RadialMenu_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 786, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    if ( (int)v3 >= 0 && (int)v3 < Data->numItems )
    {
      LUI_PutElementOnTopOfStack(Data->items[v3], luaVM);
      j_lua_getfield(luaVM, -1, "widgetAction");
      j_lua_remove(luaVM, -2);
      v5 = LuaShared_PCall(luaVM, 0, 0);
      if ( v5 )
      {
        LUI_ReportError("Error while trying to run the widgetAction function on a radial menu widget.\n", luaVM);
        LUI_HandleLuaError(v5);
      }
      Data->lastUsedItem = v3;
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUIElement_RadialMenu_UseItemIfPossible
==============
*/
__int64 LUIElement_RadialMenu_UseItemIfPossible(lua_State *const luaVM)
{
  LUIElement *v2; 
  bool v3; 
  RadialMenuOptions *Data; 
  int selectedItem; 
  int v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:UseItemIfPossible( useLastSelectedItem )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2) > 0;
    Data = LUIElement_RadialMenu_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 823, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    selectedItem = Data->selectedItem;
    if ( v3 )
    {
      selectedItem = Data->lastSelectedItem;
      if ( selectedItem == -1 )
        selectedItem = 0;
    }
    else if ( selectedItem == -1 )
    {
      goto LABEL_18;
    }
    LUI_PutElementOnTopOfStack(Data->items[selectedItem], luaVM);
    j_lua_getfield(luaVM, -1, "widgetAction");
    j_lua_remove(luaVM, -2);
    v6 = LuaShared_PCall(luaVM, 0, 0);
    if ( v6 )
    {
      LUI_ReportError("Error while trying to run the widgetAction function on a radial menu widget.\n", luaVM);
      LUI_HandleLuaError(v6);
    }
    Data->lastUsedItem = selectedItem;
  }
LABEL_18:
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUIElement_RadialMenu_GetBigRadius
==============
*/
__int64 LUIElement_RadialMenu_GetBigRadius(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  RadialMenuOptions *Data; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Usage: radialMenu:GetBigRadius()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    Data = LUIElement_RadialMenu_GetData(v3, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 868, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    j_lua_pushnumber(luaVM, Data->radialMenuBigRadius);
  }
  else
  {
    v2 = 0;
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
LUIElement_RadialMenu_IsMouseInside
==============
*/
__int64 LUIElement_RadialMenu_IsMouseInside(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  RadialMenuOptions *Data; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Usage: radialMenu:IsMouseInside()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    Data = LUIElement_RadialMenu_GetData(v3, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 887, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    j_lua_pushboolean(luaVM, Data->isMouseInside);
  }
  else
  {
    v2 = 0;
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
LUIElement_RadialMenu_SetSelection
==============
*/
__int64 LUIElement_RadialMenu_SetSelection(lua_State *const luaVM)
{
  LUIElement *v2; 
  RadialMenuOptions *Data; 
  int v4; 
  int v5; 
  float v6; 
  unsigned int v7; 
  float c; 
  float s; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetSelection( index )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    Data = LUIElement_RadialMenu_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 905, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    v4 = lua_tointeger32(luaVM, 2);
    Data->selectedItem = v4;
    v5 = v4;
    Data->lastSelectedItem = v4;
    if ( v4 != -1 )
    {
      FastSinCos((float)((int)(float)((float)((float)v4 * Data->itemAngle) + 270.0) % 360) * 0.017453292, &s, &c);
      v6 = s;
      Data->lastGamepadOffset.v[0] = c;
      Data->lastGamepadOffset.v[1] = v6;
    }
    LUIElement_RadialMenu_SelectionChanged(v2, Data, luaVM, v5);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUIElement_RadialMenu_GetLastUsedItem
==============
*/
__int64 LUIElement_RadialMenu_GetLastUsedItem(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetLastUsedItem()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    if ( !LUIElement_RadialMenu_GetData(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 941, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rsi+0C8h]; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUIElement_RadialMenu_CreateItem
==============
*/
LUIElement *LUIElement_RadialMenu_CreateItem(LUIElement *radialMenu, RadialMenuOptions *radialMenuData, lua_State *luaVM, const int index)
{
  int buildArrowFunction; 
  int v9; 
  int v10; 
  LUIElement *v11; 

  if ( !LUI_ElementHasWeakTableEntry(radialMenu, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 974, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( radialMenu, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( radialMenu, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(radialMenu, luaVM);
  j_lua_getfield(luaVM, -1, "_functionRefs");
  if ( index == -1 )
    buildArrowFunction = radialMenuData->buildArrowFunction;
  else
    buildArrowFunction = radialMenuData->buildChildFunction;
  j_lua_rawgeti(luaVM, -1, buildArrowFunction);
  j_lua_remove(luaVM, -2);
  j_lua_remove(luaVM, -2);
  if ( index <= -1 )
  {
    v9 = 0;
  }
  else
  {
    j_lua_pushnumber(luaVM, (float)index);
    v9 = 1;
  }
  v10 = LuaShared_PCall(luaVM, v9, 1);
  if ( v10 )
  {
    LUI_ReportError("Error while creating UI radial menu content.\n", luaVM);
    LUI_HandleLuaError(v10);
    return 0i64;
  }
  else
  {
    if ( !j_lua_isuserdata(luaVM, -1) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )");
    v11 = LUI_ToElement(luaVM, -1);
    j_lua_settop(luaVM, -2);
    LUI_LUIElement_AddElement(radialMenu, v11, luaVM);
    return v11;
  }
}

/*
==============
LUIElement_RadialMenu_GetData
==============
*/
RadialMenuOptions *LUIElement_RadialMenu_GetData(LUIElement *element, lua_State *luaVM)
{
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 104, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 105, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (RadialMenuOptions *)element->customElementData;
}

/*
==============
LUIElement_RadialMenu_Layout
==============
*/
void LUIElement_RadialMenu_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  lua_State *v5; 
  int v8; 
  RadialMenuOptions *Data; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v11; 
  int v12; 
  __int64 numItems; 
  LUIElement **items; 
  float v15; 
  float itemDistanceFromCenter; 
  LUIElement *v17; 
  LUIElement *v18; 
  float s; 
  float c[3]; 

  v5 = luaVM;
  v8 = deltaTime;
  Data = LUIElement_RadialMenu_GetData(element, luaVM);
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 114, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  if ( !Com_FrontEnd_IsInFrontEnd() )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( Data->deactivateTime != -1 )
    {
      if ( Data->selectedItem == -1 )
        goto LABEL_11;
      v11 = DVARINT_cg_radialMenu_deactivationDelay;
      if ( !DVARINT_cg_radialMenu_deactivationDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_deactivationDelay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( LocalClientGlobals->time > Data->deactivateTime + v11->current.integer )
      {
LABEL_11:
        CL_Keys_RemoveCatcher(localClientNum, -257);
        Data->deactivateTime = -1;
      }
    }
  }
  if ( Data->radialMenuActive )
  {
    v12 = 0;
    numItems = Data->numItems;
    if ( numItems > 0 )
    {
      items = Data->items;
      do
      {
        v15 = (float)((int)(float)((float)((float)v12 * Data->itemAngle) + 270.0) % 360);
        if ( Data->drawCircleInCode )
        {
          FastSinCos(v15 * 0.017453292, &s, c);
          itemDistanceFromCenter = Data->itemDistanceFromCenter;
          v17 = *items;
          v18 = *items;
          s = (float)(-1.0 * s) * itemDistanceFromCenter;
          c[0] = itemDistanceFromCenter * c[0];
          v17->currentAnimationState.position.x.offsets[0] = c[0] - 25.0;
          v17->currentAnimationState.position.x.offsets[1] = c[0] + 25.0;
          v18->currentAnimationState.position.x.anchors[0] = 0.5;
          v18->currentAnimationState.position.x.anchors[1] = 0.5;
          v17->currentAnimationState.position.y.offsets[0] = s - 25.0;
          v17->currentAnimationState.position.y.offsets[1] = s + 25.0;
          v17->currentAnimationState.position.y.anchors[0] = 0.5;
          v17->currentAnimationState.position.y.anchors[1] = 0.5;
        }
        else
        {
          (*items)->currentAnimationState.zRot = v15 - 90.0;
        }
        ++v12;
        ++items;
        --numItems;
      }
      while ( numItems );
      v5 = luaVM;
      v8 = deltaTime;
    }
    if ( !Data->drawCircleInCode )
      Data->arrow->currentAnimationState.zRot = COERCE_FLOAT(LODWORD(Data->arrowRotation) ^ _xmm);
    LUIElement_DefaultLayout(localClientNum, element, unitScale, v8, v5);
  }
}

/*
==============
LUIElement_RadialMenu_Render
==============
*/
void LUIElement_RadialMenu_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v9; 
  RadialMenuOptions *Data; 
  bool v12; 
  vec2_t *p_realViewportSize; 
  float top; 
  float left; 
  float v16; 
  float height; 
  __int128 bottom_low; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  LocalClientNum_t ClientFromController; 
  clientUIActive_t *LocalClientUIGlobals; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  int v29; 
  float v30; 
  float v31; 
  bool v32; 
  bool v33; 
  vec2_t lastGamepadOffset; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  const dvar_t *v40; 
  float value; 
  float v42; 
  float v43; 
  float v44; 
  cg_t *LocalClientGlobals; 
  bool v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float halfItemAngle; 
  float v52; 
  float v53; 
  RumbleInfo *RumbleByName; 
  __int64 v55; 
  int numItemsRumbled; 
  int v57; 
  float v58; 
  const dvar_t *v59; 
  const dvar_t *v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  const dvar_t *v65; 
  const char *v66; 
  float v67; 
  float v68; 
  const dvar_t *v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  const dvar_t *v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  const GfxImage *imgExpandedSelection; 
  float width; 
  float v82; 
  float v83; 
  float v84; 
  const dvar_t *v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float viewportSize; 
  float viewportSizea; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  int errorCode; 
  int errorCodea; 
  int errorCodeb; 
  int v99; 
  float v100; 
  clientUIActive_t *v101; 
  vec2_t v102; 
  float outX[4]; 
  LUIElement elementa; 

  v9 = localClientNum;
  Data = LUIElement_RadialMenu_GetData(element, luaVM);
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 240, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  if ( Data->radialMenuActive )
  {
    errorCode = Data->numItems;
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        p_realViewportSize = &scrPlaceViewDisplay[v9].realViewportSize;
LABEL_12:
        top = element->top;
        left = element->left;
        v16 = element->right - left;
        bottom_low = LODWORD(element->bottom);
        height = element->bottom - top;
        v19 = (float)(v16 * 0.5) + left;
        v20 = root->bottom - root->top;
        v21 = (float)(height * 0.5) + top;
        v22 = height / (float)((float)((float)Data->imgLargeCircleOutline->height * 0.00092592591) * v20);
        v95 = v16;
        v94 = v19;
        v93 = v21;
        v100 = v20;
        v102 = 0i64;
        ClientFromController = CL_Mgr_GetClientFromController(Data->controllerIndex);
        LocalClientUIGlobals = CL_GetLocalClientUIGlobals(ClientFromController);
        v101 = LocalClientUIGlobals;
        v99 = 1;
        if ( LocalClientUIGlobals->lastInputType == GAMEPAD )
        {
          v25 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_RSTICK_X);
          v102.v[0] = *(float *)&v25;
          v26 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_RSTICK_Y);
          v102.v[1] = *(float *)&v26;
          if ( Data->useBothThumbsticks )
          {
            v27 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_LSTICK_X);
            v102.v[0] = *(float *)&v27 + v102.v[0];
            v28 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_LSTICK_Y);
            v102.v[1] = *(float *)&v28 + v102.v[1];
          }
          LocalClientUIGlobals = v101;
        }
        v29 = 0;
        if ( (unsigned int)(LocalClientUIGlobals->lastInputType - 1) <= 1 )
        {
          LUI_CoD_GetRootSpaceMousePosition(Data->controllerIndex, outX, &outX[1]);
          v30 = (float)((float)(height * 0.5) + top) - outX[1];
          v31 = outX[0] - v19;
          *(float *)&bottom_low = (float)(v30 * v30) + (float)(v31 * v31);
          v32 = !Data->disableInfiniteOuterRadius || *(float *)&bottom_low < (float)((float)((float)(v20 * Data->radialMenuBigRadius) * v22) * (float)((float)(v20 * Data->radialMenuBigRadius) * v22));
          v33 = 0;
          if ( *(float *)&bottom_low > (float)((float)((float)(v20 * Data->radialMenuSmallRadius) * v22) * (float)((float)(v20 * Data->radialMenuSmallRadius) * v22)) )
            v33 = v32;
          if ( v33 )
          {
            *(float *)&bottom_low = fsqrt(*(float *)&bottom_low);
            _XMM1 = bottom_low;
            __asm
            {
              vcmpless xmm0, xmm1, cs:__real@80000000
              vblendvps xmm0, xmm1, xmm13, xmm0
            }
            v102.v[1] = v30 * (float)(1.0 / *(float *)&_XMM0);
            v102.v[0] = v31 * (float)(1.0 / *(float *)&_XMM0);
            Data->isMouseInside = 1;
          }
          else
          {
            Data->isMouseInside = 0;
          }
        }
        if ( Data->allowNavigation )
        {
          lastGamepadOffset = v102;
        }
        else
        {
          outX[0] = 0.0;
          outX[1] = 0.0;
          lastGamepadOffset = *(vec2_t *)outX;
          v102 = *(vec2_t *)outX;
        }
        *(_DWORD *)&elementa.pixelGrid.blockWidth = 16843266;
        elementa.pixelGrid.contrast = -1;
        if ( Data->drawCircleInCode )
        {
          *(_OWORD *)outX = _xmm;
          LUI_Render_PushBlur(1.0);
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v19, v21, v16, height, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, Data->imgLargeCircle, luaVM);
          LUI_Render_PopBlur();
          v38 = DCONST_DVARVEC4_cg_radialMenu_color_bg_blur_darkening;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_bg_blur_darkening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_bg_blur_darkening") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v38);
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v19, v21, v16, height, 0.0, 0.0, 1.0, 1.0, 0.0, v38->current.value, v38->current.vector.v[1], v38->current.vector.v[2], v38->current.vector.v[3], Data->imgSmallCircle, luaVM);
          v39 = DCONST_DVARVEC4_cg_radialMenu_color_bg_outline_blur_darkening;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_bg_outline_blur_darkening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_bg_outline_blur_darkening") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v39);
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v19, v21, v16, height, 0.0, 0.0, 1.0, 1.0, 0.0, v39->current.value, v39->current.vector.v[1], v39->current.vector.v[2], v39->current.vector.v[3], Data->imgLargeCircleOutline, luaVM);
          v40 = DCONST_DVARVEC4_cg_radialMenu_color_bg_pixel_grid;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_bg_pixel_grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_bg_pixel_grid") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v40);
          value = v40->current.value;
          v42 = v40->current.vector.v[1];
          v43 = v40->current.vector.v[2];
          v44 = v40->current.vector.v[3];
          LUI_Render_PushPixelGrid((const LocalClientNum_t)v9, &elementa);
          v87 = v42;
          v19 = (float)(v16 * 0.5) + left;
          v86 = value;
          v21 = (float)(height * 0.5) + top;
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v94, v93, v16, height, 0.0, 0.0, 1.0, 1.0, 0.0, v86, v87, v43, v44, Data->imgSmallCircle, luaVM);
          LUI_Render_PopPixelGrid((const LocalClientNum_t)v9);
          v29 = 0;
        }
        if ( COERCE_FLOAT(LODWORD(v102.v[0]) & _xmm) >= 0.2 || COERCE_FLOAT(LODWORD(v102.v[1]) & _xmm) >= 0.2 )
        {
          if ( Data->keepSelectionWhileInDeadZone && Data->autoDisableKeepDeadZoneSelection )
            Data->keepSelectionWhileInDeadZone = 0;
          goto LABEL_62;
        }
        if ( Data->keepSelectionWhileInDeadZone )
        {
          if ( Data->lastSelectedItem != -1 )
          {
            lastGamepadOffset = Data->lastGamepadOffset;
            v102 = lastGamepadOffset;
          }
          goto LABEL_62;
        }
        if ( !Com_FrontEnd_IsInFrontEnd() )
        {
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
          if ( LocalClientGlobals )
          {
            if ( Data->selectedItem != -1 )
            {
              if ( Data->selectionHoldTime == -1 )
              {
                lastGamepadOffset = Data->lastGamepadOffset;
                v102 = lastGamepadOffset;
                Data->selectionHoldTime = LocalClientGlobals->time;
                goto LABEL_62;
              }
LABEL_53:
              if ( LocalClientGlobals->time > Data->selectionHoldTime + Dvar_GetInt_Internal_DebugName(DVARINT_cg_radialMenu_selectionHold, "cg_radialMenu_selectionHold") )
              {
                v46 = Data->selectedItem == -1;
                Data->selectionHoldTime = -1;
                if ( !v46 )
                  LUIElement_RadialMenu_SelectionChanged(element, Data, luaVM, -1);
                Data->selectedItem = -1;
                return;
              }
              goto LABEL_57;
            }
            if ( Data->selectionHoldTime != -1 )
              goto LABEL_53;
          }
        }
LABEL_57:
        if ( Data->selectedItem == -1 )
          return;
        lastGamepadOffset = Data->lastGamepadOffset;
        v102 = lastGamepadOffset;
LABEL_62:
        v47 = atan2f_0(v102.v[1], v102.v[0]) * 57.295776;
        AngleNormalize360(v47);
        v48 = v47;
        v49 = 0.0;
        v50 = 0.0;
        if ( errorCode > 0 )
        {
          halfItemAngle = Data->halfItemAngle;
          do
          {
            v52 = (float)((float)v29 * Data->itemAngle) + 270.0;
            v49 = (float)((int)(float)(v52 - halfItemAngle) % 360);
            v53 = (float)((int)(float)(halfItemAngle + v52) % 360);
            v50 = v53;
            if ( v49 > v53 && (v48 >= v49 || v48 <= v53) )
              break;
            if ( v48 >= v49 && v48 <= v53 )
              break;
            ++v29;
          }
          while ( v29 < errorCode );
        }
        if ( Data->selectionStyleFunction != -2 )
        {
          if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 208, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( radialMenu, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( radialMenu, luaVM )") )
            __debugbreak();
          LUI_PutElementOnTopOfStack(element, luaVM);
          j_lua_getfield(luaVM, -1, "_functionRefs");
          j_lua_rawgeti(luaVM, -1, Data->selectionStyleFunction);
          j_lua_remove(luaVM, -2);
          j_lua_remove(luaVM, -2);
          j_lua_pushnumber(luaVM, (float)v29);
          errorCodea = LuaShared_PCall(luaVM, 1, 1);
          if ( errorCodea )
          {
            LUI_ReportError("Error while trying to run the selectionStyle function on a radial menu.\n", luaVM);
            LUI_HandleLuaError(errorCodea);
          }
          else
          {
            if ( !j_lua_isnumber(luaVM, -1) )
              j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )");
            v99 = lua_tointeger32(luaVM, -1);
            j_lua_settop(luaVM, -2);
          }
        }
        if ( Data->selectedItem != v29 )
        {
          LUIElement_RadialMenu_SelectionChanged(element, Data, luaVM, v29);
          if ( !Com_FrontEnd_IsInFrontEnd() )
          {
            *(_QWORD *)outX = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
            RumbleByName = Rumble_GetRumbleByName("ui_haptic");
            v55 = *(_QWORD *)outX;
            if ( *(_DWORD *)(*(_QWORD *)outX + 26092i64) - Data->timeOfLastRumble < RumbleByName->duration )
              numItemsRumbled = Data->numItemsRumbled;
            else
              numItemsRumbled = 0;
            v57 = numItemsRumbled + 1;
            Data->numItemsRumbled = v57;
            Data->timeOfLastRumble = *(_DWORD *)(v55 + 26092);
            CG_Rumble_PlayOnClientScaledWithUpdate((LocalClientNum_t)v9, RumbleByName, 1.0 / (float)v57);
          }
        }
        v46 = !Data->drawCircleInCode;
        v58 = v49 + 180.0;
        *(float *)&errorCodeb = v49 + 180.0;
        Data->selectedItem = v29;
        Data->lastSelectedItem = v29;
        Data->lastGamepadOffset = lastGamepadOffset;
        if ( v46 )
        {
          Data->arrowRotation = 90.0 - v48;
          return;
        }
        LUI_Render_PushMask((const LocalClientNum_t)v9, v19, v21, v95, height, v58, 1.0, 0.0, 1, 0.0, 0.0, 1.0, 1.0, p_realViewportSize, (GfxImage *)Data->imgLargeCircleHalfMask);
        LUI_Render_PushMask((const LocalClientNum_t)v9, v19, v21, v95, height, v50, 1.0, 0.0, 1, 0.0, 0.0, 1.0, 1.0, p_realViewportSize, (GfxImage *)Data->imgLargeCircleHalfMask);
        v59 = DCONST_DVARVEC4_cg_radialMenu_color_masked_foreground;
        if ( !DCONST_DVARVEC4_cg_radialMenu_color_masked_foreground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_masked_foreground") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v59);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v19, v21, v95, height, 0.0, 0.0, 1.0, 1.0, 0.0, v59->current.value, v59->current.vector.v[1], v59->current.vector.v[2], v59->current.vector.v[3], Data->imgSmallCircle, luaVM);
        v60 = DCONST_DVARVEC4_cg_radialMenu_color_outline_circles;
        if ( !DCONST_DVARVEC4_cg_radialMenu_color_outline_circles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_outline_circles") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v60);
        v61 = v60->current.value;
        v62 = v60->current.vector.v[1];
        v63 = v60->current.vector.v[2];
        v64 = v60->current.vector.v[3];
        if ( Data->useOuterCircleOutline )
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v94, v93, v95, height, 0.0, 0.0, 1.0, 1.0, 0.0, v61, v62, v63, v64, Data->imgLargeCircleOutline, luaVM);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v94, v93, v95, height, 0.0, 0.0, 1.0, 1.0, 0.0, v61, v62, v63, v64, Data->imgSmallCircleOutline, luaVM);
        if ( v99 == 1 )
        {
          v65 = DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_glow;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_glow )
          {
            v66 = "cg_radialMenu_color_select_pixel_grid_glow";
            goto LABEL_100;
          }
        }
        else
        {
          if ( v99 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 519, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown selection style.") )
              __debugbreak();
            goto LABEL_105;
          }
          v65 = DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_plain;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_plain )
          {
            v66 = "cg_radialMenu_color_select_pixel_grid_plain";
LABEL_100:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v66) )
              __debugbreak();
          }
        }
        Dvar_CheckFrontendServerThread(v65);
        v61 = v65->current.value;
        v62 = v65->current.vector.v[1];
        v63 = v65->current.vector.v[2];
        v64 = v65->current.vector.v[3];
LABEL_105:
        LUI_Render_PushPixelGrid((const LocalClientNum_t)v9, &elementa);
        viewportSize = v63;
        v67 = (float)(height * 0.5) + top;
        v88 = v62;
        v68 = v94;
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v94, v93, v95, height, 0.0, 0.0, 1.0, 1.0, 0.0, v61, v88, viewportSize, v64, Data->imgSmallCircle, luaVM);
        LUI_Render_PopPixelGrid((const LocalClientNum_t)v9);
        LUI_Render_PopMask((const LocalClientNum_t)v9);
        LUI_Render_PopMask((const LocalClientNum_t)v9);
        if ( v99 == 1 )
        {
          LUI_Render_PushMask((const LocalClientNum_t)v9, v94, v93, v95, height, 0.0, 1.0, 0.0, 1, 0.0, 0.0, 1.0, 1.0, p_realViewportSize, (GfxImage *)Data->imgSmallCircleFullMask);
          v69 = DCONST_DVARVEC4_cg_radialMenu_color_edge_glow_lines;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_edge_glow_lines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_edge_glow_lines") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v69);
          v70 = v69->current.vector.v[3];
          v71 = v69->current.vector.v[2];
          v72 = v69->current.vector.v[1];
          v73 = v69->current.value;
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v94, v93, v95, height, 0.0, 0.0, 1.0, 1.0, COERCE_FLOAT(LODWORD(v58) ^ _xmm) - 90.0, v73, v72, v71, v70, Data->imgEdgeBlur, luaVM);
          viewportSizea = v71;
          v68 = v94;
          v89 = v72;
          v67 = (float)(height * 0.5) + top;
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v94, v93, v95, height, 0.0, 0.0, 1.0, 1.0, 90.0 - v50, v73, v89, viewportSizea, v70, Data->imgEdgeBlur, luaVM);
          LUI_Render_PopMask((const LocalClientNum_t)v9);
        }
        if ( (unsigned int)(v101->lastInputType - 1) <= 1 && !Data->disableInfiniteOuterRadius && Data->imgExpandedSelection )
        {
          v74 = DCONST_DVARVEC4_cg_radialMenu_color_expanded_selection;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_expanded_selection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_expanded_selection") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v74);
          v75 = (float)(v100 * Data->radialMenuBigRadius) * v22;
          v76 = v74->current.value;
          v77 = v74->current.vector.v[1];
          v78 = v74->current.vector.v[2];
          v79 = v74->current.vector.v[3];
          imgExpandedSelection = Data->imgExpandedSelection;
          width = (float)imgExpandedSelection->width;
          v92 = v79;
          v67 = (float)(height * 0.5) + top;
          v82 = (float)((float)(cosf_0(1.5707964 - (float)(3.1415927 / (float)Data->numItems)) * v75) * 2.0) / (float)(width - 327.0);
          v83 = width * v82;
          v84 = (float)(v93 - (float)(v83 * 0.5)) - v75;
          v68 = v94;
          LUI_Render_DrawQuadRotatedRelativeToPoint((const LocalClientNum_t)v9, element, v94, v93, v94, v84 + (float)(v82 * 50.0), v83, v83, 0.0, 0.0, 1.0, 1.0, COERCE_FLOAT(errorCodeb ^ _xmm) - (float)(Data->halfItemAngle + 90.0), v76, v77, v78, v92, imgExpandedSelection, luaVM);
        }
        v85 = DCONST_DVARVEC4_cg_radialMenu_color_selection_arrow;
        if ( !DCONST_DVARVEC4_cg_radialMenu_color_selection_arrow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_selection_arrow") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v85);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, element, v68, v67, v95, height, 0.0, 0.0, 1.0, 1.0, 90.0 - v48, v85->current.value, v85->current.vector.v[1], v85->current.vector.v[2], v85->current.vector.v[3], Data->imgSelectionArrow, luaVM);
        return;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v12 )
        __debugbreak();
    }
    p_realViewportSize = &scrPlaceFull.realViewportSize;
    goto LABEL_12;
  }
}

/*
==============
LUIElement_RadialMenu_SelectionChanged
==============
*/
void LUIElement_RadialMenu_SelectionChanged(LUIElement *radialMenu, RadialMenuOptions *radialMenuData, lua_State *luaVM, const int index)
{
  int v8; 

  if ( !LUI_ElementHasWeakTableEntry(radialMenu, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 185, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( radialMenu, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( radialMenu, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(radialMenu, luaVM);
  j_lua_getfield(luaVM, -1, "_functionRefs");
  j_lua_rawgeti(luaVM, -1, radialMenuData->selectionChangedFunction);
  j_lua_remove(luaVM, -2);
  j_lua_remove(luaVM, -2);
  j_lua_pushnumber(luaVM, (float)index);
  v8 = LuaShared_PCall(luaVM, 1, 0);
  if ( v8 )
  {
    LUI_ReportError("Error while trying to run the selectionChanged function on a radial menu.\n", luaVM);
    LUI_HandleLuaError(v8);
  }
}

/*
==============
LUIElement_RadialMenu_SetActive_impl
==============
*/
__int64 LUIElement_RadialMenu_SetActive_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  RadialMenuOptions *Data; 
  int controllerIndex; 
  LocalClientNum_t ClientFromController; 
  clientUIActive_t *LocalClientUIGlobals; 
  int v7; 
  LUIElement *CurrentRoot; 
  int v9; 
  int v10; 
  LocalClientNum_t v11; 

  if ( (j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1) && (j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 || j_lua_type(luaVM, 3) != 1) )
    j_luaL_error(luaVM, "USAGE: element:SetActive( false, [true] )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 || j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 && j_lua_type(luaVM, 3) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    Data = LUIElement_RadialMenu_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 589, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    controllerIndex = Data->controllerIndex;
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    LocalClientUIGlobals = CL_GetLocalClientUIGlobals(ClientFromController);
    v7 = j_lua_toboolean(luaVM, 2);
    Data->radialMenuActive = v7 > 0;
    if ( v7 <= 0 )
    {
      if ( j_lua_gettop(luaVM) == 3 && j_lua_toboolean(luaVM, 3) > 0 )
      {
        CL_Keys_RemoveCatcher(ClientFromController, -257);
        Data->deactivateTime = -1;
      }
      else if ( !Com_FrontEnd_IsInFrontEnd() )
      {
        Data->deactivateTime = CG_GetLocalClientGlobals(ClientFromController)->time;
      }
    }
    else
    {
      CL_Keys_AddCatcher(ClientFromController, 256);
      if ( Data->allowMouseRecenterOnActivate && (unsigned int)(LocalClientUIGlobals->lastInputType - 1) <= 1 )
      {
        Data->selectedItem = -1;
        LUIElement_RadialMenu_SelectionChanged(v2, Data, luaVM, -1);
        IN_CenterMouse(controllerIndex);
        CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
        v9 = (int)(float)((float)(CurrentRoot->right - CurrentRoot->left) * 0.5);
        v10 = (int)(float)((float)(CurrentRoot->bottom - CurrentRoot->top) * 0.5);
        v11 = CL_Mgr_GetClientFromController(controllerIndex);
        LUI_CoD_MouseMove(v11, v9, v10, 0);
      }
    }
  }
  return 0i64;
}

/*
==============
LUIElement_RadialMenu_SetKeepSelectionWhileInDeadZone_impl
==============
*/
__int64 LUIElement_RadialMenu_SetKeepSelectionWhileInDeadZone_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  RadialMenuOptions *Data; 

  if ( (j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1) && (j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 || j_lua_type(luaVM, 3) != 1) )
    j_luaL_error(luaVM, "USAGE: element:SetKeepSelectionWhileInDeadZone( keepSelectionWhileInDeadZone, [autoDisableKeepDeadZoneSelection] )");
  if ( (j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1) && (j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 || j_lua_type(luaVM, 3) != 1) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  Data = LUIElement_RadialMenu_GetData(v2, luaVM);
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 698, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  Data->keepSelectionWhileInDeadZone = j_lua_toboolean(luaVM, 2) > 0;
  if ( j_lua_gettop(luaVM) == 3 && j_lua_type(luaVM, 3) == 1 )
    Data->autoDisableKeepDeadZoneSelection = j_lua_toboolean(luaVM, 3) > 0;
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupRadialMenu
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRadialMenu(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupRadialMenu_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupRadialMenu_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRadialMenu_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  _QWORD *v3; 
  int v4; 
  double v5; 
  bool v6; 
  bool v7; 
  bool v8; 
  int v9; 
  int v10; 
  float v11; 
  int v12; 
  const char *v13; 
  __int64 v14; 
  float v15; 
  _QWORD *v16; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 3u;
  v2->layoutFunction = LUIElement_RadialMenu_Layout;
  v2->renderFunction = LUIElement_RadialMenu_Render;
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_radialMenuMethods);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 0x100ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  memset_0(v3, 0, 0x100ui64);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 1039, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  memset_0(v3, 0, 0x100ui64);
  j_lua_pushlstring(luaVM, "_functionRefs", 0xDui64);
  j_lua_createtable(luaVM, 0, 2);
  j_lua_settable(luaVM, 1);
  j_lua_getfield(luaVM, 1, "_functionRefs");
  j_lua_getfield(luaVM, 2, "buildChild");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    *((_DWORD *)v3 + 41) = j_luaL_ref(luaVM, -2);
  }
  else
  {
    *((_DWORD *)v3 + 41) = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 1, "_functionRefs");
  j_lua_getfield(luaVM, 2, "buildArrow");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    *((_DWORD *)v3 + 42) = j_luaL_ref(luaVM, -2);
  }
  else
  {
    *((_DWORD *)v3 + 42) = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 1, "_functionRefs");
  j_lua_getfield(luaVM, 2, "selectionChanged");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    *((_DWORD *)v3 + 43) = j_luaL_ref(luaVM, -2);
  }
  else
  {
    *((_DWORD *)v3 + 43) = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 1, "_functionRefs");
  j_lua_getfield(luaVM, 2, "selectionStyle");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    *((_DWORD *)v3 + 44) = j_luaL_ref(luaVM, -2);
  }
  else
  {
    *((_DWORD *)v3 + 44) = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "numItems");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v4 = lua_tointeger32(luaVM, -1);
    *((_DWORD *)v3 + 18) = v4;
    if ( v4 <= 0 || (v4 & 1) != 0 )
      Com_PrintError(13, "The radial menu number of items must be a positive, even number!");
  }
  else
  {
    *((_DWORD *)v3 + 18) = defaultNumItems;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "itemDistanceFromCenter");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v5 = lui_tonumber32(luaVM, -1);
    *((float *)v3 + 40) = *(float *)&v5;
    if ( *(float *)&v5 <= 0.0 )
      Com_PrintError(13, "The radial menu item distance from center should be a positive number!");
  }
  else
  {
    *((float *)v3 + 40) = defaultIconDistanceFromCenter;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "keepSelectionWhileInDeadZone");
  v6 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v3 + 205) = v6;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useOuterCircleOutline");
  v7 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v3 + 207) = v7;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawCircleInCode");
  v8 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v3 + 210) = v8;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "controllerIndex");
  v9 = 0;
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v10 = j_lua_tointeger(luaVM, -1);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 1178, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Radial menu expects a controller index") )
      __debugbreak();
    v10 = 0;
  }
  *((_DWORD *)v3 + 39) = v10;
  v11 = 360.0 / (float)*((int *)v3 + 18);
  v3[24] = -1i64;
  *((float *)v3 + 58) = v11 * 0.5;
  *((float *)v3 + 57) = v11;
  *((_DWORD *)v3 + 50) = 0;
  v3[23] = -1i64;
  *((_BYTE *)v3 + 204) = 0;
  *((_BYTE *)v3 + 211) = 0;
  *((_BYTE *)v3 + 206) = 0;
  *((_BYTE *)v3 + 209) = 1;
  *(_QWORD *)((char *)v3 + 220) = 0i64;
  *((_DWORD *)v3 + 59) = 1047146830;
  *((_DWORD *)v3 + 60) = 1039317462;
  *v3 = Image_Register("radial_base", IMAGE_TRACK_HUD);
  v3[1] = Image_Register("radial_select_line", IMAGE_TRACK_HUD);
  v3[2] = Image_Register("radial_base_mask", IMAGE_TRACK_HUD);
  v3[3] = Image_Register("radial_expanded", IMAGE_TRACK_HUD);
  v3[4] = Image_Register("radial_expanded_fill", IMAGE_TRACK_HUD);
  v3[5] = Image_Register("radial_expanded_mask_half", IMAGE_TRACK_HUD);
  v3[6] = Image_Register("radial_select_arrow", IMAGE_TRACK_HUD);
  v3[7] = Image_Register("radial_select_edge_blur", IMAGE_TRACK_HUD);
  v12 = *((_DWORD *)v3 + 18);
  v3[8] = 0i64;
  if ( v12 == 4 )
  {
    v13 = "radial_expanded_kbm_4";
  }
  else
  {
    if ( v12 != 8 )
      goto LABEL_56;
    v13 = "radial_expanded_kbm_8";
  }
  v3[8] = Image_Register(v13, IMAGE_TRACK_HUD);
LABEL_56:
  v14 = v3[8];
  if ( v14 )
    v15 = (float)*(unsigned __int16 *)(v14 + 36) / (float)*(unsigned __int16 *)(v14 + 38);
  else
    v15 = FLOAT_1_0;
  *((float *)v3 + 61) = v15;
  if ( *((int *)v3 + 18) > 0 )
  {
    v16 = v3 + 10;
    do
      *v16++ = LUIElement_RadialMenu_CreateItem(v2, (RadialMenuOptions *)v3, luaVM, v9++);
    while ( v9 < *((_DWORD *)v3 + 18) );
  }
  if ( !*((_BYTE *)v3 + 210) )
    v3[18] = LUIElement_RadialMenu_CreateItem(v2, (RadialMenuOptions *)v3, luaVM, -1);
  return 0i64;
}

