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
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Usage: radialMenu:GetBigRadius()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    _RSI = LUIElement_RadialMenu_GetData(v3, luaVM);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 868, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+0ECh]
      vcvtss2sd xmm1, xmm1, xmm1; n
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
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
  LUIElement *v3; 
  int v5; 
  int v6; 
  unsigned int v17; 
  float c; 
  float s; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetSelection( index )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    _RDI = LUIElement_RadialMenu_GetData(v3, luaVM);
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 905, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    v5 = lua_tointeger32(luaVM, 2);
    _RDI->selectedItem = v5;
    v6 = v5;
    _RDI->lastSelectedItem = v5;
    if ( v5 != -1 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, dword ptr [rdi+0E4h]
        vaddss  xmm1, xmm0, cs:__real@43870000
        vcvttss2si ecx, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
      }
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      __asm
      {
        vmovss  xmm0, [rsp+48h+c]
        vmovss  xmm1, [rsp+48h+s]
        vmovss  dword ptr [rdi+0D4h], xmm0
        vmovss  dword ptr [rdi+0D8h], xmm1
      }
    }
    LUIElement_RadialMenu_SelectionChanged(v3, _RDI, luaVM, v6);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v17 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v17);
  }
  return 0i64;
}

/*
==============
LUIElement_RadialMenu_GetLastUsedItem
==============
*/

__int64 __fastcall LUIElement_RadialMenu_GetLastUsedItem(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v3; 
  LUIElement *v4; 
  unsigned int v7; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetLastUsedItem()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    if ( !LUIElement_RadialMenu_GetData(v4, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 941, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, dword ptr [rsi+0C8h]; n
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v7);
  }
  return v3;
}

/*
==============
LUIElement_RadialMenu_CreateItem
==============
*/
LUIElement *LUIElement_RadialMenu_CreateItem(LUIElement *radialMenu, RadialMenuOptions *radialMenuData, lua_State *luaVM, const int index)
{
  int buildArrowFunction; 
  int v13; 
  int v14; 
  LUIElement *v15; 

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
    v13 = 0;
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vcvtss2sd xmm1, xmm0, xmm0; n
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    v13 = 1;
  }
  v14 = LuaShared_PCall(luaVM, v13, 1);
  if ( v14 )
  {
    LUI_ReportError("Error while creating UI radial menu content.\n", luaVM);
    LUI_HandleLuaError(v14);
    return 0i64;
  }
  else
  {
    if ( !j_lua_isuserdata(luaVM, -1) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )");
    v15 = LUI_ToElement(luaVM, -1);
    j_lua_settop(luaVM, -2);
    LUI_LUIElement_AddElement(radialMenu, v15, luaVM);
    return v15;
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

void __fastcall LUIElement_RadialMenu_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  lua_State *v12; 
  int v15; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v19; 
  int v20; 
  __int64 numItems; 
  LUIElement **items; 
  LUIElement *v39; 
  float s; 
  float c[3]; 

  v12 = luaVM;
  __asm { vmovaps [rsp+0D8h+var_88], xmm11 }
  v15 = deltaTime;
  __asm { vmovaps xmm11, xmm2 }
  _RBX = LUIElement_RadialMenu_GetData(element, luaVM);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 114, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  if ( !Com_FrontEnd_IsInFrontEnd() )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( _RBX->deactivateTime != -1 )
    {
      if ( _RBX->selectedItem == -1 )
        goto LABEL_11;
      v19 = DVARINT_cg_radialMenu_deactivationDelay;
      if ( !DVARINT_cg_radialMenu_deactivationDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_deactivationDelay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( LocalClientGlobals->time > _RBX->deactivateTime + v19->current.integer )
      {
LABEL_11:
        CL_Keys_RemoveCatcher(localClientNum, -257);
        _RBX->deactivateTime = -1;
      }
    }
  }
  if ( _RBX->radialMenuActive )
  {
    v20 = 0;
    numItems = _RBX->numItems;
    if ( numItems > 0 )
    {
      __asm { vmovaps [rsp+0D8h+var_38], xmm6 }
      items = _RBX->items;
      __asm
      {
        vmovss  xmm6, cs:__real@42b40000
        vmovaps [rsp+0D8h+var_48], xmm7
        vmovss  xmm7, cs:__real@41c80000
        vmovaps [rsp+0D8h+var_58], xmm8
        vmovss  xmm8, cs:__real@43870000
        vmovaps [rsp+0D8h+var_68], xmm9
        vmovss  xmm9, cs:__real@3c8efa35
        vmovaps [rsp+0D8h+var_78], xmm10
        vmovss  xmm10, cs:__real@bf800000
      }
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vmulss  xmm1, xmm0, dword ptr [rbx+0E4h]
          vaddss  xmm2, xmm1, xmm8
          vcvttss2si ecx, xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
        }
        if ( _RBX->drawCircleInCode )
        {
          __asm { vmulss  xmm0, xmm0, xmm9; radians }
          FastSinCos(*(const float *)&_XMM0, &s, c);
          __asm
          {
            vmulss  xmm1, xmm10, [rsp+0D8h+s]
            vmovss  xmm3, dword ptr [rbx+0A0h]
          }
          _RDX = *items;
          v39 = *items;
          __asm
          {
            vmulss  xmm2, xmm1, xmm3
            vmulss  xmm1, xmm3, [rsp+0D8h+c]
            vmovss  [rsp+0D8h+s], xmm2
            vmovss  [rsp+0D8h+c], xmm1
            vsubss  xmm0, xmm1, xmm7
            vmovss  dword ptr [rdx], xmm0
            vaddss  xmm2, xmm7, [rsp+0D8h+c]
            vmovss  dword ptr [rdx+4], xmm2
          }
          v39->currentAnimationState.position.x.anchors[0] = 0.5;
          v39->currentAnimationState.position.x.anchors[1] = 0.5;
          __asm
          {
            vmovss  xmm0, [rsp+0D8h+s]
            vsubss  xmm1, xmm0, xmm7
            vmovss  dword ptr [rdx+18h], xmm1
            vaddss  xmm0, xmm7, [rsp+0D8h+s]
            vmovss  dword ptr [rdx+1Ch], xmm0
          }
          _RDX->currentAnimationState.position.y.anchors[0] = 0.5;
          _RDX->currentAnimationState.position.y.anchors[1] = 0.5;
        }
        else
        {
          _RAX = *items;
          __asm
          {
            vsubss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rax+30h], xmm0
          }
        }
        ++v20;
        ++items;
        --numItems;
      }
      while ( numItems );
      v12 = luaVM;
      v15 = deltaTime;
      __asm
      {
        vmovaps xmm10, [rsp+0D8h+var_78]
        vmovaps xmm9, [rsp+0D8h+var_68]
        vmovaps xmm8, [rsp+0D8h+var_58]
        vmovaps xmm7, [rsp+0D8h+var_48]
        vmovaps xmm6, [rsp+0D8h+var_38]
      }
    }
    if ( !_RBX->drawCircleInCode )
    {
      __asm { vmovss  xmm0, dword ptr [rbx+98h] }
      _RAX = _RBX->arrow;
      __asm
      {
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rax+30h], xmm1
      }
    }
    __asm { vmovaps xmm2, xmm11; unitScale }
    LUIElement_DefaultLayout(localClientNum, element, *(float *)&_XMM2, v15, v12);
  }
  __asm { vmovaps xmm11, [rsp+0D8h+var_88] }
}

/*
==============
LUIElement_RadialMenu_Render
==============
*/
void LUIElement_RadialMenu_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v19; 
  int numItems; 
  bool v23; 
  vec2_t *p_realViewportSize; 
  LocalClientNum_t ClientFromController; 
  clientUIActive_t *LocalClientUIGlobals; 
  int v47; 
  unsigned int v49; 
  bool v58; 
  char v62; 
  char v63; 
  vec2_t v70; 
  unsigned int v116; 
  RumbleInfo *RumbleByName; 
  __int64 v120; 
  int numItemsRumbled; 
  bool v125; 
  const char *v153; 
  const GfxImage *imgExpandedSelection; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float height; 
  float heighta; 
  float heightb; 
  float heightc; 
  float heightd; 
  float heighte; 
  float heightf; 
  float heightg; 
  float heighth; 
  float heighti; 
  float heightj; 
  float heightk; 
  float heightl; 
  float heightm; 
  float heightn; 
  float uMin; 
  float uMina; 
  float uMinb; 
  float uMinc; 
  float uMind; 
  float uMine; 
  float uMinf; 
  float uMing; 
  float uMinh; 
  float uMini; 
  float uMinj; 
  float uMink; 
  float uMinl; 
  float uMinm; 
  float uMinn; 
  float v278; 
  float v279; 
  float v280; 
  float v281; 
  float v282; 
  float v283; 
  float v284; 
  float v285; 
  float v286; 
  float v287; 
  float v288; 
  float v289; 
  float v290; 
  float v291; 
  float v292; 
  float applyParallax; 
  float applyParallaxa; 
  float applyParallaxb; 
  float applyParallaxc; 
  float applyParallaxd; 
  float applyParallaxe; 
  float applyParallaxf; 
  float applyParallaxg; 
  float applyParallaxh; 
  float applyParallaxi; 
  float applyParallaxj; 
  float applyParallaxk; 
  float v305; 
  float v306; 
  float v307; 
  float v308; 
  float v309; 
  float v310; 
  float v311; 
  float v312; 
  float v313; 
  float v314; 
  float v315; 
  float v316; 
  float v317; 
  float v318; 
  float v319; 
  float v320; 
  float v321; 
  float v322; 
  float v323; 
  float v324; 
  float v325; 
  float v326; 
  float v327; 
  float v328; 
  float v329; 
  float v330; 
  float v331; 
  float v332; 
  float v333; 
  float v334; 
  float v335; 
  float v336; 
  float v337; 
  float v338; 
  float v339; 
  float v340; 
  float v341; 
  float v342; 
  float v343; 
  float v344; 
  float v345; 
  float v346; 
  float v347; 
  float v348; 
  float v349; 
  float v350; 
  float v351; 
  float v352; 
  float v353; 
  float v354; 
  float v355; 
  float v356; 
  float v357; 
  float v358; 
  float v359; 
  float v360; 
  float v361; 
  float v362; 
  float v363; 
  float v364; 
  float viewportSize; 
  float viewportSizea; 
  float viewportSizeb; 
  float viewportSizec; 
  float viewportSized; 
  float viewportSizee; 
  float viewportSizef; 
  float viewportSizeg; 
  float viewportSizeh; 
  float viewportSizei; 
  float viewportSizej; 
  float viewportSizek; 
  float image; 
  float imagea; 
  float imageb; 
  float imagec; 
  float imaged; 
  float imagee; 
  float imagef; 
  float imageg; 
  float imageh; 
  float imagei; 
  float imagej; 
  float imagek; 
  float material; 
  float v390; 
  int errorCode; 
  int errorCodea; 
  int v398; 
  clientUIActive_t *v401; 
  vec2_t v402; 
  float outX[4]; 
  LUIElement elementa; 

  _R13 = element;
  v19 = localClientNum;
  _RBX = root;
  _RDI = LUIElement_RadialMenu_GetData(element, luaVM);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 240, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  if ( _RDI->radialMenuActive )
  {
    numItems = _RDI->numItems;
    __asm
    {
      vmovaps [rsp+300h+var_50], xmm7
      vmovaps [rsp+300h+var_60], xmm8
      vmovaps [rsp+300h+var_70], xmm9
      vmovaps [rsp+300h+var_80], xmm10
      vmovaps [rsp+300h+var_90], xmm11
      vmovaps [rsp+300h+var_A0], xmm12
      vmovaps [rsp+300h+var_B0], xmm13
      vmovaps [rsp+300h+var_D0], xmm15
    }
    errorCode = numItems;
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        p_realViewportSize = &scrPlaceViewDisplay[v19].realViewportSize;
LABEL_12:
        __asm
        {
          vmovss  xmm2, dword ptr [r13+0D0h]
          vmovss  xmm3, dword ptr [r13+0CCh]
          vmovss  xmm0, dword ptr [r13+0D4h]
          vmovss  xmm1, dword ptr [r13+0D8h]
          vsubss  xmm10, xmm0, xmm3
          vmulss  xmm0, xmm10, cs:__real@3f000000
          vsubss  xmm15, xmm1, xmm2
          vmulss  xmm1, xmm15, cs:__real@3f000000
          vaddss  xmm8, xmm0, xmm3
          vmovss  xmm0, dword ptr [rbx+0D8h]
          vsubss  xmm7, xmm0, dword ptr [rbx+0D0h]
          vaddss  xmm9, xmm1, xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vmulss  xmm1, xmm0, cs:__real@3a72b9d6
          vmulss  xmm2, xmm1, xmm7
          vdivss  xmm11, xmm15, xmm2
          vxorps  xmm12, xmm12, xmm12
          vmovss  [rbp+1E0h+var_244], xmm11
          vmovss  [rbp+1E0h+var_258], xmm10
          vmovss  [rbp+1E0h+var_250], xmm15
          vmovss  [rbp+1E0h+var_25C], xmm8
          vmovss  [rbp+1E0h+var_260], xmm9
          vmovss  [rbp+1E0h+var_248], xmm7
          vmovss  dword ptr [rbp+1E0h+var_238], xmm12
          vmovss  dword ptr [rbp+1E0h+var_238+4], xmm12
        }
        ClientFromController = CL_Mgr_GetClientFromController(_RDI->controllerIndex);
        LocalClientUIGlobals = CL_GetLocalClientUIGlobals(ClientFromController);
        v401 = LocalClientUIGlobals;
        v398 = 1;
        if ( LocalClientUIGlobals->lastInputType == GAMEPAD )
        {
          *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_RSTICK_X);
          __asm { vmovss  dword ptr [rbp+1E0h+var_238], xmm0 }
          *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_RSTICK_Y);
          __asm { vmovss  dword ptr [rbp+1E0h+var_238+4], xmm0 }
          if ( _RDI->useBothThumbsticks )
          {
            *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_LSTICK_X);
            __asm
            {
              vaddss  xmm0, xmm0, dword ptr [rbp+1E0h+var_238]
              vmovss  dword ptr [rbp+1E0h+var_238], xmm0
            }
            *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_LSTICK_Y);
            __asm
            {
              vaddss  xmm0, xmm0, dword ptr [rbp+1E0h+var_238+4]
              vmovss  dword ptr [rbp+1E0h+var_238+4], xmm0
            }
          }
          LocalClientUIGlobals = v401;
        }
        v47 = 0;
        __asm { vmovss  xmm13, cs:__real@3f800000 }
        v49 = LocalClientUIGlobals->lastInputType - 1;
        __asm { vmovaps [rsp+300h+var_40], xmm6 }
        if ( v49 <= 1 )
        {
          LUI_CoD_GetRootSpaceMousePosition(_RDI->controllerIndex, outX, &outX[1]);
          __asm
          {
            vmovss  xmm0, [rbp+1E0h+outX]
            vsubss  xmm5, xmm9, [rbp+1E0h+outX+4]
            vsubss  xmm4, xmm0, xmm8
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm3, xmm1, xmm0
            vmulss  xmm0, xmm7, dword ptr [rdi+0F0h]
            vmulss  xmm1, xmm0, xmm11
            vmulss  xmm6, xmm1, xmm1
          }
          v58 = !_RDI->disableInfiniteOuterRadius;
          if ( _RDI->disableInfiniteOuterRadius )
          {
            __asm
            {
              vmulss  xmm0, xmm7, dword ptr [rdi+0ECh]
              vmulss  xmm1, xmm0, xmm11
              vmulss  xmm2, xmm1, xmm1
              vcomiss xmm3, xmm2
            }
            v62 = 0;
            v58 = 1;
          }
          else
          {
            v62 = 1;
          }
          __asm { vcomiss xmm3, xmm6 }
          v63 = 0;
          if ( !v58 )
            v63 = v62;
          if ( v63 )
          {
            __asm
            {
              vsqrtss xmm1, xmm3, xmm3
              vcmpless xmm0, xmm1, cs:__real@80000000
              vblendvps xmm0, xmm1, xmm13, xmm0
              vdivss  xmm1, xmm13, xmm0
              vmulss  xmm0, xmm4, xmm1
              vmulss  xmm1, xmm5, xmm1
              vmovss  dword ptr [rbp+1E0h+var_238+4], xmm1
              vmovss  dword ptr [rbp+1E0h+var_238], xmm0
            }
            _RDI->isMouseInside = 1;
          }
          else
          {
            _RDI->isMouseInside = 0;
          }
        }
        if ( _RDI->allowNavigation )
        {
          v70 = v402;
        }
        else
        {
          __asm
          {
            vmovss  [rbp+1E0h+outX], xmm12
            vmovss  [rbp+1E0h+outX+4], xmm12
          }
          v70 = *(vec2_t *)outX;
          v402 = *(vec2_t *)outX;
        }
        *(_DWORD *)&elementa.pixelGrid.blockWidth = 16843266;
        elementa.pixelGrid.contrast = -1;
        if ( _RDI->drawCircleInCode )
        {
          __asm
          {
            vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
            vmovups xmmword ptr [rbp+1E0h+outX], xmm0
            vmovaps xmm0, xmm13; amount
          }
          LUI_Render_PushBlur(*(float *)&_XMM0);
          __asm
          {
            vmovss  dword ptr [rsp+300h+image], xmm13
            vmovss  dword ptr [rsp+300h+viewportSize], xmm13
            vmovss  [rsp+300h+var_2A0], xmm13
            vmovss  [rsp+300h+var_2A8], xmm13
            vmovss  [rsp+300h+var_2B0], xmm12
            vmovss  [rsp+300h+var_2B8], xmm13
            vmovss  dword ptr [rsp+300h+applyParallax], xmm13
            vmovss  [rsp+300h+var_2C8], xmm12
            vmovss  [rsp+300h+uMin], xmm12
            vmovss  [rsp+300h+height], xmm15
            vmovaps xmm3, xmm9; centerY
            vmovaps xmm2, xmm8; centerX
            vmovss  dword ptr [rsp+300h+fmt], xmm10
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmt, height, uMin, v278, applyParallax, v305, v320, v335, v350, viewportSize, image, _RDI->imgLargeCircle, luaVM);
          LUI_Render_PopBlur();
          _RSI = DCONST_DVARVEC4_cg_radialMenu_color_bg_blur_darkening;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_bg_blur_darkening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_bg_blur_darkening") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vmovss  xmm2, dword ptr [rsi+2Ch]
            vmovss  xmm3, dword ptr [rsi+28h]
            vmovss  xmm0, dword ptr [rsi+34h]
            vmovss  xmm1, dword ptr [rsi+30h]
            vmovss  dword ptr [rsp+300h+image], xmm0
            vmovss  dword ptr [rsp+300h+viewportSize], xmm1
            vmovss  [rsp+300h+var_2A0], xmm2
            vmovss  [rsp+300h+var_2A8], xmm3
            vmovss  [rsp+300h+var_2B0], xmm12
            vmovss  [rsp+300h+var_2B8], xmm13
            vmovss  dword ptr [rsp+300h+applyParallax], xmm13
            vmovss  [rsp+300h+var_2C8], xmm12
            vmovss  [rsp+300h+uMin], xmm12
            vmovss  [rsp+300h+height], xmm15
            vmovaps xmm3, xmm9; centerY
            vmovaps xmm2, xmm8; centerX
            vmovss  dword ptr [rsp+300h+fmt], xmm10
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmta, heighta, uMina, v279, applyParallaxa, v306, v321, v336, v351, viewportSizea, imagea, _RDI->imgSmallCircle, luaVM);
          _RSI = DCONST_DVARVEC4_cg_radialMenu_color_bg_outline_blur_darkening;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_bg_outline_blur_darkening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_bg_outline_blur_darkening") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vmovss  xmm2, dword ptr [rsi+2Ch]
            vmovss  xmm3, dword ptr [rsi+28h]
            vmovss  xmm0, dword ptr [rsi+34h]
            vmovss  xmm1, dword ptr [rsi+30h]
            vmovss  dword ptr [rsp+300h+image], xmm0
            vmovss  dword ptr [rsp+300h+viewportSize], xmm1
            vmovss  [rsp+300h+var_2A0], xmm2
            vmovss  [rsp+300h+var_2A8], xmm3
            vmovss  [rsp+300h+var_2B0], xmm12
            vmovss  [rsp+300h+var_2B8], xmm13
            vmovss  dword ptr [rsp+300h+applyParallax], xmm13
            vmovss  [rsp+300h+var_2C8], xmm12
            vmovss  [rsp+300h+uMin], xmm12
            vmovss  [rsp+300h+height], xmm15
            vmovaps xmm3, xmm9; centerY
            vmovaps xmm2, xmm8; centerX
            vmovss  dword ptr [rsp+300h+fmt], xmm10
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, heightb, uMinb, v280, applyParallaxb, v307, v322, v337, v352, viewportSizeb, imageb, _RDI->imgLargeCircleOutline, luaVM);
          _RSI = DCONST_DVARVEC4_cg_radialMenu_color_bg_pixel_grid;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_bg_pixel_grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_bg_pixel_grid") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vmovss  xmm9, dword ptr [rsi+28h]
            vmovss  xmm8, dword ptr [rsi+2Ch]
            vmovss  xmm7, dword ptr [rsi+30h]
            vmovss  xmm6, dword ptr [rsi+34h]
          }
          LUI_Render_PushPixelGrid((const LocalClientNum_t)v19, &elementa);
          __asm
          {
            vmovss  dword ptr [rsp+300h+image], xmm6
            vmovss  dword ptr [rsp+300h+viewportSize], xmm7
            vmovss  [rsp+300h+var_2A0], xmm8
            vmovss  xmm8, [rbp+1E0h+var_25C]
            vmovss  [rsp+300h+var_2A8], xmm9
            vmovss  xmm9, [rbp+1E0h+var_260]
            vmovss  [rsp+300h+var_2B0], xmm12
            vmovss  [rsp+300h+var_2B8], xmm13
            vmovss  dword ptr [rsp+300h+applyParallax], xmm13
            vmovss  [rsp+300h+var_2C8], xmm12
            vmovss  [rsp+300h+uMin], xmm12
            vmovss  [rsp+300h+height], xmm15
            vmovaps xmm3, xmm9; centerY
            vmovaps xmm2, xmm8; centerX
            vmovss  dword ptr [rsp+300h+fmt], xmm10
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, heightc, uMinc, v281, applyParallaxc, v308, v323, v338, v353, viewportSizec, imagec, _RDI->imgSmallCircle, luaVM);
          LUI_Render_PopPixelGrid((const LocalClientNum_t)v19);
          v47 = 0;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+1E0h+var_238]
          vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm2, cs:__real@3e4ccccd
          vandps  xmm0, xmm0, xmm1
          vcomiss xmm0, xmm2
        }
        if ( _RDI->keepSelectionWhileInDeadZone && _RDI->autoDisableKeepDeadZoneSelection )
          _RDI->keepSelectionWhileInDeadZone = 0;
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+1E0h+var_238]; X
          vmovss  xmm0, dword ptr [rbp+1E0h+var_238+4]; Y
          vmovaps [rsp+300h+var_C0], xmm14
        }
        *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm { vmulss  xmm0, xmm0, cs:__real@42652ee0; angle }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm
        {
          vmovaps xmm14, xmm0
          vxorps  xmm6, xmm6, xmm6
          vxorps  xmm10, xmm10, xmm10
        }
        if ( errorCode > 0 )
        {
          __asm
          {
            vmovss  xmm5, dword ptr [rdi+0E4h]
            vmovss  xmm4, dword ptr [rdi+0E8h]
            vmovss  xmm7, cs:__real@43870000
          }
          do
          {
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, esi
              vmulss  xmm0, xmm1, xmm5
              vaddss  xmm3, xmm0, xmm7
              vsubss  xmm2, xmm3, xmm4
              vcvttss2si ecx, xmm2
              vxorps  xmm6, xmm6, xmm6
              vaddss  xmm0, xmm4, xmm3
              vxorps  xmm10, xmm10, xmm10
              vcvtsi2ss xmm6, xmm6, ecx
              vcvttss2si ecx, xmm0
            }
            v116 = 360 * ((int)_ECX / 360);
            __asm
            {
              vcvtsi2ss xmm10, xmm10, ecx
              vcomiss xmm6, xmm10
            }
            if ( _ECX > v116 )
            {
              __asm { vcomiss xmm14, xmm6 }
              if ( _ECX >= v116 )
                break;
              __asm { vcomiss xmm14, xmm10 }
              if ( _ECX <= v116 )
                break;
            }
            __asm { vcomiss xmm14, xmm6 }
            if ( _ECX >= v116 )
            {
              __asm { vcomiss xmm14, xmm10 }
              if ( _ECX <= v116 )
                break;
            }
            ++v47;
          }
          while ( v47 < errorCode );
        }
        if ( _RDI->selectionStyleFunction != -2 )
        {
          if ( !LUI_ElementHasWeakTableEntry(_R13, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 208, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( radialMenu, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( radialMenu, luaVM )") )
            __debugbreak();
          LUI_PutElementOnTopOfStack(_R13, luaVM);
          j_lua_getfield(luaVM, -1, "_functionRefs");
          j_lua_rawgeti(luaVM, -1, _RDI->selectionStyleFunction);
          j_lua_remove(luaVM, -2);
          j_lua_remove(luaVM, -2);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, esi
            vcvtss2sd xmm1, xmm0, xmm0; n
          }
          j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
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
            v398 = lua_tointeger32(luaVM, -1);
            j_lua_settop(luaVM, -2);
          }
        }
        if ( _RDI->selectedItem != v47 )
        {
          LUIElement_RadialMenu_SelectionChanged(_R13, _RDI, luaVM, v47);
          if ( !Com_FrontEnd_IsInFrontEnd() )
          {
            *(_QWORD *)outX = CG_GetLocalClientGlobals((const LocalClientNum_t)v19);
            RumbleByName = Rumble_GetRumbleByName("ui_haptic");
            v120 = *(_QWORD *)outX;
            if ( *(_DWORD *)(*(_QWORD *)outX + 26092i64) - _RDI->timeOfLastRumble < RumbleByName->duration )
              numItemsRumbled = _RDI->numItemsRumbled;
            else
              numItemsRumbled = 0;
            _RDI->numItemsRumbled = numItemsRumbled + 1;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, ecx
              vdivss  xmm2, xmm13, xmm0; scale
            }
            _RDI->timeOfLastRumble = *(_DWORD *)(v120 + 26092);
            CG_Rumble_PlayOnClientScaledWithUpdate((LocalClientNum_t)v19, RumbleByName, *(float *)&_XMM2);
          }
        }
        v125 = !_RDI->drawCircleInCode;
        __asm
        {
          vaddss  xmm11, xmm6, cs:__real@43340000
          vmovss  [rbp+1E0h+errorCode], xmm11
        }
        _RDI->selectedItem = v47;
        _RDI->lastSelectedItem = v47;
        _RDI->lastGamepadOffset = v70;
        if ( v125 )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@42b40000
            vsubss  xmm1, xmm0, xmm14
            vmovss  dword ptr [rdi+98h], xmm1
          }
LABEL_104:
          __asm
          {
            vmovaps xmm14, [rsp+300h+var_C0]
            vmovaps xmm6, [rsp+300h+var_40]
            vmovaps xmm12, [rsp+300h+var_A0]
            vmovaps xmm11, [rsp+300h+var_90]
            vmovaps xmm10, [rsp+300h+var_80]
            vmovaps xmm9, [rsp+300h+var_70]
            vmovaps xmm8, [rsp+300h+var_60]
            vmovaps xmm7, [rsp+300h+var_50]
            vmovaps xmm13, [rsp+300h+var_B0]
            vmovaps xmm15, [rsp+300h+var_D0]
          }
          return;
        }
        __asm
        {
          vmovss  xmm6, [rbp+1E0h+var_258]
          vmovss  [rsp+300h+var_2A0], xmm13
          vmovss  [rsp+300h+var_2A8], xmm13
          vmovss  [rsp+300h+var_2B0], xmm12
          vmovss  [rsp+300h+var_2B8], xmm12
          vmovss  [rsp+300h+var_2C8], xmm12
          vmovss  [rsp+300h+uMin], xmm13
          vmovss  [rsp+300h+height], xmm11
          vmovaps xmm3, xmm6; maskWidth
          vmovaps xmm2, xmm9; maskCenterY
          vmovaps xmm1, xmm8; maskCenterX
          vmovss  dword ptr [rsp+300h+fmt], xmm15
        }
        LUI_Render_PushMask((const LocalClientNum_t)v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, heightd, uMind, v282, 1, v309, v324, v339, v354, p_realViewportSize, (GfxImage *)_RDI->imgLargeCircleHalfMask);
        __asm
        {
          vmovss  [rsp+300h+var_2A0], xmm13
          vmovss  [rsp+300h+var_2A8], xmm13
          vmovss  [rsp+300h+var_2B0], xmm12
          vmovss  [rsp+300h+var_2B8], xmm12
          vmovss  [rsp+300h+var_2C8], xmm12
          vmovss  [rsp+300h+uMin], xmm13
          vmovss  [rsp+300h+height], xmm10
          vmovaps xmm3, xmm6; maskWidth
          vmovaps xmm2, xmm9; maskCenterY
          vmovaps xmm1, xmm8; maskCenterX
          vmovss  dword ptr [rsp+300h+fmt], xmm15
        }
        LUI_Render_PushMask((const LocalClientNum_t)v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, heighte, uMine, v283, 1, v310, v325, v340, v355, p_realViewportSize, (GfxImage *)_RDI->imgLargeCircleHalfMask);
        _RBX = DCONST_DVARVEC4_cg_radialMenu_color_masked_foreground;
        if ( !DCONST_DVARVEC4_cg_radialMenu_color_masked_foreground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_masked_foreground") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx+2Ch]
          vmovss  xmm3, dword ptr [rbx+28h]
          vmovss  xmm0, dword ptr [rbx+34h]
          vmovss  xmm1, dword ptr [rbx+30h]
          vmovss  dword ptr [rsp+300h+image], xmm0
          vmovss  dword ptr [rsp+300h+viewportSize], xmm1
          vmovss  [rsp+300h+var_2A0], xmm2
          vmovss  [rsp+300h+var_2A8], xmm3
          vmovss  [rsp+300h+var_2B0], xmm12
          vmovss  [rsp+300h+var_2B8], xmm13
          vmovss  dword ptr [rsp+300h+applyParallax], xmm13
          vmovss  [rsp+300h+var_2C8], xmm12
          vmovss  [rsp+300h+uMin], xmm12
          vmovss  [rsp+300h+height], xmm15
          vmovaps xmm3, xmm9; centerY
          vmovaps xmm2, xmm8; centerX
          vmovss  dword ptr [rsp+300h+fmt], xmm6
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, heightf, uMinf, v284, applyParallaxd, v311, v326, v341, v356, viewportSized, imaged, _RDI->imgSmallCircle, luaVM);
        _RBX = DCONST_DVARVEC4_cg_radialMenu_color_outline_circles;
        if ( !DCONST_DVARVEC4_cg_radialMenu_color_outline_circles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_outline_circles") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+28h]
          vmovss  xmm7, dword ptr [rbx+2Ch]
          vmovss  xmm8, dword ptr [rbx+30h]
          vmovss  xmm9, dword ptr [rbx+34h]
        }
        if ( _RDI->useOuterCircleOutline )
        {
          __asm
          {
            vmovss  xmm0, [rbp+1E0h+var_258]
            vmovss  xmm3, [rbp+1E0h+var_260]; centerY
            vmovss  xmm2, [rbp+1E0h+var_25C]; centerX
            vmovss  dword ptr [rsp+300h+image], xmm9
            vmovss  dword ptr [rsp+300h+viewportSize], xmm8
            vmovss  [rsp+300h+var_2A0], xmm7
            vmovss  [rsp+300h+var_2A8], xmm6
            vmovss  [rsp+300h+var_2B0], xmm12
            vmovss  [rsp+300h+var_2B8], xmm13
            vmovss  dword ptr [rsp+300h+applyParallax], xmm13
            vmovss  [rsp+300h+var_2C8], xmm12
            vmovss  [rsp+300h+uMin], xmm12
            vmovss  [rsp+300h+height], xmm15
            vmovss  dword ptr [rsp+300h+fmt], xmm0
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, heightg, uMing, v285, applyParallaxe, v312, v327, v342, v357, viewportSizee, imagee, _RDI->imgLargeCircleOutline, luaVM);
        }
        __asm
        {
          vmovss  xmm0, [rbp+1E0h+var_258]
          vmovss  xmm3, [rbp+1E0h+var_260]; centerY
          vmovss  xmm2, [rbp+1E0h+var_25C]; centerX
          vmovss  dword ptr [rsp+300h+image], xmm9
          vmovss  dword ptr [rsp+300h+viewportSize], xmm8
          vmovss  [rsp+300h+var_2A0], xmm7
          vmovss  [rsp+300h+var_2A8], xmm6
          vmovss  [rsp+300h+var_2B0], xmm12
          vmovss  [rsp+300h+var_2B8], xmm13
          vmovss  dword ptr [rsp+300h+applyParallax], xmm13
          vmovss  [rsp+300h+var_2C8], xmm12
          vmovss  [rsp+300h+uMin], xmm12
          vmovss  [rsp+300h+height], xmm15
          vmovss  dword ptr [rsp+300h+fmt], xmm0
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmth, heighth, uMinh, v286, applyParallaxf, v313, v328, v343, v358, viewportSizef, imagef, _RDI->imgSmallCircleOutline, luaVM);
        if ( v398 == 1 )
        {
          _RBX = DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_glow;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_glow )
          {
            v153 = "cg_radialMenu_color_select_pixel_grid_glow";
            goto LABEL_82;
          }
        }
        else
        {
          if ( v398 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 519, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown selection style.") )
              __debugbreak();
            goto LABEL_87;
          }
          _RBX = DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_plain;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_plain )
          {
            v153 = "cg_radialMenu_color_select_pixel_grid_plain";
LABEL_82:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v153) )
              __debugbreak();
          }
        }
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+28h]
          vmovss  xmm7, dword ptr [rbx+2Ch]
          vmovss  xmm8, dword ptr [rbx+30h]
          vmovss  xmm9, dword ptr [rbx+34h]
        }
LABEL_87:
        LUI_Render_PushPixelGrid((const LocalClientNum_t)v19, &elementa);
        __asm
        {
          vmovss  dword ptr [rsp+300h+image], xmm9
          vmovss  dword ptr [rsp+300h+viewportSize], xmm8
          vmovss  xmm8, [rbp+1E0h+var_260]
          vmovss  [rsp+300h+var_2A0], xmm7
          vmovss  xmm7, [rbp+1E0h+var_25C]
          vmovss  [rsp+300h+var_2A8], xmm6
          vmovss  xmm6, [rbp+1E0h+var_258]
          vmovss  [rsp+300h+var_2B0], xmm12
          vmovss  [rsp+300h+var_2B8], xmm13
          vmovss  dword ptr [rsp+300h+applyParallax], xmm13
          vmovss  [rsp+300h+var_2C8], xmm12
          vmovss  [rsp+300h+uMin], xmm12
          vmovss  [rsp+300h+height], xmm15
          vmovaps xmm3, xmm8; centerY
          vmovaps xmm2, xmm7; centerX
          vmovss  dword ptr [rsp+300h+fmt], xmm6
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmti, heighti, uMini, v287, applyParallaxg, v314, v329, v344, v359, viewportSizeg, imageg, _RDI->imgSmallCircle, luaVM);
        LUI_Render_PopPixelGrid((const LocalClientNum_t)v19);
        LUI_Render_PopMask((const LocalClientNum_t)v19);
        LUI_Render_PopMask((const LocalClientNum_t)v19);
        __asm { vmovss  xmm15, cs:__real@42b40000 }
        if ( v398 == 1 )
        {
          __asm
          {
            vmovss  xmm0, [rbp+1E0h+var_250]
            vmovss  [rsp+300h+var_2A0], xmm13
            vmovss  [rsp+300h+var_2A8], xmm13
            vmovss  [rsp+300h+var_2B0], xmm12
            vmovss  [rsp+300h+var_2B8], xmm12
            vmovss  [rsp+300h+var_2C8], xmm12
            vmovss  [rsp+300h+uMin], xmm13
            vmovss  [rsp+300h+height], xmm12
            vmovaps xmm3, xmm6; maskWidth
            vmovaps xmm2, xmm8; maskCenterY
            vmovaps xmm1, xmm7; maskCenterX
            vmovss  dword ptr [rsp+300h+fmt], xmm0
          }
          LUI_Render_PushMask((const LocalClientNum_t)v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, heightj, uMinj, v288, 1, v315, v330, v345, v360, p_realViewportSize, (GfxImage *)_RDI->imgSmallCircleFullMask);
          _RBX = DCONST_DVARVEC4_cg_radialMenu_color_edge_glow_lines;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_edge_glow_lines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_edge_glow_lines") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RBX);
          __asm
          {
            vxorps  xmm0, xmm11, cs:__xmm@80000000800000008000000080000000
            vmovss  xmm6, dword ptr [rbx+34h]
            vmovss  xmm7, dword ptr [rbx+30h]
            vmovss  xmm8, dword ptr [rbx+2Ch]
            vmovss  xmm9, dword ptr [rbx+28h]
            vmovss  xmm11, [rbp+1E0h+var_250]
            vmovss  xmm3, [rbp+1E0h+var_260]; centerY
            vmovss  xmm2, [rbp+1E0h+var_25C]; centerX
            vmovss  dword ptr [rsp+300h+image], xmm6
            vmovss  dword ptr [rsp+300h+viewportSize], xmm7
            vmovss  [rsp+300h+var_2A0], xmm8
            vmovss  [rsp+300h+var_2A8], xmm9
            vsubss  xmm1, xmm0, xmm15
            vmovss  xmm0, [rbp+1E0h+var_258]
            vmovss  [rsp+300h+var_2B0], xmm1
            vmovss  [rsp+300h+var_2B8], xmm13
            vmovss  dword ptr [rsp+300h+applyParallax], xmm13
            vmovss  [rsp+300h+var_2C8], xmm12
            vmovss  [rsp+300h+uMin], xmm12
            vmovss  [rsp+300h+height], xmm11
            vmovss  dword ptr [rsp+300h+fmt], xmm0
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmtk, heightk, uMink, v289, applyParallaxh, v316, v331, v346, v361, viewportSizeh, imageh, _RDI->imgEdgeBlur, luaVM);
          __asm
          {
            vmovss  dword ptr [rsp+300h+image], xmm6
            vmovss  dword ptr [rsp+300h+viewportSize], xmm7
            vmovss  xmm7, [rbp+1E0h+var_25C]
            vmovss  [rsp+300h+var_2A0], xmm8
            vmovss  xmm8, [rbp+1E0h+var_260]
            vmovss  [rsp+300h+var_2A8], xmm9
            vsubss  xmm0, xmm15, xmm10
            vmovss  [rsp+300h+var_2B0], xmm0
            vmovss  xmm0, [rbp+1E0h+var_258]
            vmovss  [rsp+300h+var_2B8], xmm13
            vmovss  dword ptr [rsp+300h+applyParallax], xmm13
            vmovss  [rsp+300h+var_2C8], xmm12
            vmovss  [rsp+300h+uMin], xmm12
            vmovss  [rsp+300h+height], xmm11
            vmovaps xmm3, xmm8; centerY
            vmovaps xmm2, xmm7; centerX
            vmovss  dword ptr [rsp+300h+fmt], xmm0
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, heightl, uMinl, v290, applyParallaxi, v317, v332, v347, v362, viewportSizei, imagei, _RDI->imgEdgeBlur, luaVM);
          LUI_Render_PopMask((const LocalClientNum_t)v19);
        }
        if ( (unsigned int)(v401->lastInputType - 1) <= 1 && !_RDI->disableInfiniteOuterRadius && _RDI->imgExpandedSelection )
        {
          _RBX = DCONST_DVARVEC4_cg_radialMenu_color_expanded_selection;
          if ( !DCONST_DVARVEC4_cg_radialMenu_color_expanded_selection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_expanded_selection") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RBX);
          __asm
          {
            vmovss  xmm0, [rbp+1E0h+var_248]
            vmulss  xmm0, xmm0, dword ptr [rdi+0ECh]
            vmulss  xmm7, xmm0, [rbp+1E0h+var_244]
            vmovss  xmm0, cs:__real@40490fdb
            vmovss  xmm11, dword ptr [rbx+28h]
            vmovss  xmm10, dword ptr [rbx+2Ch]
            vmovss  xmm9, dword ptr [rbx+30h]
            vmovss  xmm8, dword ptr [rbx+34h]
          }
          imgExpandedSelection = _RDI->imgExpandedSelection;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [rdi+48h]
            vdivss  xmm2, xmm0, xmm1
            vmovss  xmm1, cs:__real@3fc90fdb
            vxorps  xmm6, xmm6, xmm6
            vsubss  xmm0, xmm1, xmm2; X
            vcvtsi2ss xmm6, xmm6, eax
          }
          *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
          __asm
          {
            vsubss  xmm2, xmm6, cs:__real@43a38000
            vmovss  dword ptr [rsp+300h+var_280], xmm8
            vmovss  xmm8, [rbp+1E0h+var_260]
            vmovss  dword ptr [rsp+300h+material], xmm9
            vmovss  dword ptr [rsp+300h+image], xmm10
            vmovss  dword ptr [rsp+300h+viewportSize], xmm11
            vmulss  xmm1, xmm0, xmm7
            vmulss  xmm3, xmm1, cs:__real@40000000
            vmovss  xmm0, [rbp+1E0h+errorCode]
            vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
            vaddss  xmm1, xmm15, dword ptr [rdi+0E8h]
            vmovss  xmm0, [rbp+1E0h+var_260]
            vdivss  xmm5, xmm3, xmm2
            vmulss  xmm6, xmm6, xmm5
            vmulss  xmm2, xmm6, cs:__real@3f000000
            vsubss  xmm0, xmm0, xmm2
            vsubss  xmm3, xmm0, xmm7
            vmovss  xmm7, [rbp+1E0h+var_25C]
            vsubss  xmm4, xmm4, xmm1
            vmulss  xmm1, xmm5, cs:__real@42480000
            vmovss  [rsp+300h+var_2A0], xmm4
            vmovss  [rsp+300h+var_2A8], xmm13
            vmovss  [rsp+300h+var_2B0], xmm13
            vmovss  [rsp+300h+var_2B8], xmm12
            vmovss  dword ptr [rsp+300h+applyParallax], xmm12
            vaddss  xmm2, xmm3, xmm1
            vmovss  [rsp+300h+var_2C8], xmm6
            vmovss  [rsp+300h+uMin], xmm6
            vmovss  [rsp+300h+height], xmm2
            vmovaps xmm2, xmm7; rotationCenterX
            vmovaps xmm3, xmm8; rotationCenterY
            vmovss  dword ptr [rsp+300h+fmt], xmm7
          }
          LUI_Render_DrawQuadRotatedRelativeToPoint((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, heightm, uMinm, v291, applyParallaxj, v318, v333, v348, v363, viewportSizej, imagej, material, v390, imgExpandedSelection, luaVM);
        }
        _RBX = DCONST_DVARVEC4_cg_radialMenu_color_selection_arrow;
        if ( !DCONST_DVARVEC4_cg_radialMenu_color_selection_arrow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_radialMenu_color_selection_arrow") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+34h]
          vmovss  xmm1, dword ptr [rbx+30h]
          vmovss  xmm5, dword ptr [rbx+2Ch]
          vmovss  xmm6, dword ptr [rbx+28h]
          vmovss  dword ptr [rsp+300h+image], xmm0
          vmovss  xmm0, [rbp+1E0h+var_250]
          vmovss  dword ptr [rsp+300h+viewportSize], xmm1
          vmovss  [rsp+300h+var_2A0], xmm5
          vmovss  [rsp+300h+var_2A8], xmm6
          vsubss  xmm4, xmm15, xmm14
          vmovss  [rsp+300h+var_2B0], xmm4
          vmovss  [rsp+300h+var_2B8], xmm13
          vmovss  dword ptr [rsp+300h+applyParallax], xmm13
          vmovss  [rsp+300h+var_2C8], xmm12
          vmovss  [rsp+300h+uMin], xmm12
          vmovss  [rsp+300h+height], xmm0
          vmovss  xmm0, [rbp+1E0h+var_258]
          vmovaps xmm3, xmm8; centerY
          vmovaps xmm2, xmm7; centerX
          vmovss  dword ptr [rsp+300h+fmt], xmm0
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v19, _R13, *(float *)&_XMM2, *(float *)&_XMM3, fmtn, heightn, uMinn, v292, applyParallaxk, v319, v334, v349, v364, viewportSizek, imagek, _RDI->imgSelectionArrow, luaVM);
        goto LABEL_104;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v23 )
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
  int v11; 

  if ( !LUI_ElementHasWeakTableEntry(radialMenu, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 185, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( radialMenu, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( radialMenu, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(radialMenu, luaVM);
  j_lua_getfield(luaVM, -1, "_functionRefs");
  j_lua_rawgeti(luaVM, -1, radialMenuData->selectionChangedFunction);
  j_lua_remove(luaVM, -2);
  j_lua_remove(luaVM, -2);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, esi
    vcvtss2sd xmm1, xmm0, xmm0; n
  }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  v11 = LuaShared_PCall(luaVM, 1, 0);
  if ( v11 )
  {
    LUI_ReportError("Error while trying to run the selectionChanged function on a radial menu.\n", luaVM);
    LUI_HandleLuaError(v11);
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
  LocalClientNum_t v17; 

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
        _RAX = LUI_CoD_GetCurrentRoot(luaVM);
        __asm
        {
          vmovss  xmm0, dword ptr [rax+0D4h]
          vsubss  xmm1, xmm0, dword ptr [rax+0CCh]
          vmulss  xmm1, xmm1, cs:__real@3f000000
          vmovss  xmm0, dword ptr [rax+0D8h]
          vsubss  xmm2, xmm0, dword ptr [rax+0D0h]
          vcvttss2si edi, xmm1
          vmulss  xmm1, xmm2, cs:__real@3f000000
          vcvttss2si ebx, xmm1
        }
        v17 = CL_Mgr_GetClientFromController(controllerIndex);
        LUI_CoD_MouseMove(v17, _EDI, _EBX, 0);
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

__int64 __fastcall LUI_LuaCall_LUIElement_SetupRadialMenu_impl(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v4; 
  int v6; 
  char v7; 
  char v8; 
  bool v10; 
  bool v11; 
  bool v12; 
  int v13; 
  int v14; 
  int v20; 
  const char *v21; 
  _QWORD *v27; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v4 = LUI_ToElement(luaVM, 1);
  v4->usageFlags |= 3u;
  v4->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_RadialMenu_Layout;
  v4->renderFunction = LUIElement_RadialMenu_Render;
  LUI_LUIElement_RegisterMethods(v4, luaVM, s_radialMenuMethods);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v4, luaVM);
  _RDI = j_lua_newuserdata(luaVM, 0x100ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v4->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v4->customElementData = _RDI;
  memset_0(_RDI, 0, 0x100ui64);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 1039, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  memset_0(_RDI, 0, 0x100ui64);
  j_lua_pushlstring(luaVM, "_functionRefs", 0xDui64);
  j_lua_createtable(luaVM, 0, 2);
  j_lua_settable(luaVM, 1);
  j_lua_getfield(luaVM, 1, "_functionRefs");
  j_lua_getfield(luaVM, 2, "buildChild");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    *((_DWORD *)_RDI + 41) = j_luaL_ref(luaVM, -2);
  }
  else
  {
    *((_DWORD *)_RDI + 41) = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 1, "_functionRefs");
  j_lua_getfield(luaVM, 2, "buildArrow");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    *((_DWORD *)_RDI + 42) = j_luaL_ref(luaVM, -2);
  }
  else
  {
    *((_DWORD *)_RDI + 42) = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 1, "_functionRefs");
  j_lua_getfield(luaVM, 2, "selectionChanged");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    *((_DWORD *)_RDI + 43) = j_luaL_ref(luaVM, -2);
  }
  else
  {
    *((_DWORD *)_RDI + 43) = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 1, "_functionRefs");
  j_lua_getfield(luaVM, 2, "selectionStyle");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    *((_DWORD *)_RDI + 44) = j_luaL_ref(luaVM, -2);
  }
  else
  {
    *((_DWORD *)_RDI + 44) = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "numItems");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v6 = lua_tointeger32(luaVM, -1);
    *((_DWORD *)_RDI + 18) = v6;
    if ( v6 <= 0 || (v6 & 1) != 0 )
      Com_PrintError(13, "The radial menu number of items must be a positive, even number!");
  }
  else
  {
    *((_DWORD *)_RDI + 18) = defaultNumItems;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "itemDistanceFromCenter");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovss  dword ptr [rdi+0A0h], xmm0
    }
    if ( v7 | v8 )
      Com_PrintError(13, "The radial menu item distance from center should be a positive number!");
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:defaultIconDistanceFromCenter
      vmovss  dword ptr [rdi+0A0h], xmm0
    }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "keepSelectionWhileInDeadZone");
  v10 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)_RDI + 205) = v10;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useOuterCircleOutline");
  v11 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)_RDI + 207) = v11;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawCircleInCode");
  v12 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)_RDI + 210) = v12;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "controllerIndex");
  v13 = 0;
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v14 = j_lua_tointeger(luaVM, -1);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialmenu.cpp", 1178, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Radial menu expects a controller index") )
      __debugbreak();
    v14 = 0;
  }
  *((_DWORD *)_RDI + 39) = v14;
  __asm
  {
    vmovss  xmm0, cs:__real@43b40000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rdi+48h]
    vdivss  xmm2, xmm0, xmm1
    vmulss  xmm1, xmm2, cs:__real@3f000000
  }
  _RDI[24] = -1i64;
  __asm
  {
    vmovss  dword ptr [rdi+0E8h], xmm1
    vmovss  dword ptr [rdi+0E4h], xmm2
  }
  *((_DWORD *)_RDI + 50) = 0;
  _RDI[23] = -1i64;
  *((_BYTE *)_RDI + 204) = 0;
  *((_BYTE *)_RDI + 211) = 0;
  *((_BYTE *)_RDI + 206) = 0;
  *((_BYTE *)_RDI + 209) = 1;
  *(_QWORD *)((char *)_RDI + 220) = 0i64;
  *((_DWORD *)_RDI + 59) = 1047146830;
  *((_DWORD *)_RDI + 60) = 1039317462;
  *_RDI = Image_Register("radial_base", IMAGE_TRACK_HUD);
  _RDI[1] = Image_Register("radial_select_line", IMAGE_TRACK_HUD);
  _RDI[2] = Image_Register("radial_base_mask", IMAGE_TRACK_HUD);
  _RDI[3] = Image_Register("radial_expanded", IMAGE_TRACK_HUD);
  _RDI[4] = Image_Register("radial_expanded_fill", IMAGE_TRACK_HUD);
  _RDI[5] = Image_Register("radial_expanded_mask_half", IMAGE_TRACK_HUD);
  _RDI[6] = Image_Register("radial_select_arrow", IMAGE_TRACK_HUD);
  _RDI[7] = Image_Register("radial_select_edge_blur", IMAGE_TRACK_HUD);
  v20 = *((_DWORD *)_RDI + 18);
  _RDI[8] = 0i64;
  if ( v20 == 4 )
  {
    v21 = "radial_expanded_kbm_4";
  }
  else
  {
    if ( v20 != 8 )
      goto LABEL_56;
    v21 = "radial_expanded_kbm_8";
  }
  _RDI[8] = Image_Register(v21, IMAGE_TRACK_HUD);
LABEL_56:
  if ( _RDI[8] )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm2, xmm1, xmm0
    }
  }
  else
  {
    __asm { vmovss  xmm2, cs:__real@3f800000 }
  }
  __asm { vmovss  dword ptr [rdi+0F4h], xmm2 }
  if ( *((int *)_RDI + 18) > 0 )
  {
    v27 = _RDI + 10;
    do
      *v27++ = LUIElement_RadialMenu_CreateItem(v4, (RadialMenuOptions *)_RDI, luaVM, v13++);
    while ( v13 < *((_DWORD *)_RDI + 18) );
  }
  if ( !*((_BYTE *)_RDI + 210) )
    _RDI[18] = LUIElement_RadialMenu_CreateItem(v4, (RadialMenuOptions *)_RDI, luaVM, -1);
  return 0i64;
}

