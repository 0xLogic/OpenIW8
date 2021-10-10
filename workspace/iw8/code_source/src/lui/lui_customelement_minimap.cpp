/*
==============
LUIElement_Minimap_GetMinimapData
==============
*/
MinimapOptions *LUIElement_Minimap_GetMinimapData(LUIElement *element, lua_State *luaVM)
{
  if ( element->customElementData )
    return (MinimapOptions *)element->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (MinimapOptions *)element->customElementData;
}

/*
==============
LUIElement_Minimap_InitCircularMapOptions
==============
*/
void LUIElement_Minimap_InitCircularMapOptions(lua_State *luaVM, MinimapOptions *minimapOptions)
{
  GfxImage *v5; 
  const char *v6; 
  GfxImage *v7; 
  const char *v8; 
  GfxImage *v9; 
  const char *v10; 

  j_lua_getfield(luaVM, 2, "mapMask");
  v5 = NULL;
  if ( j_lua_isstring(luaVM, -1) )
  {
    v6 = j_lua_tolstring(luaVM, -1, NULL);
    v7 = Image_Register(v6, IMAGE_TRACK_UI);
  }
  else
  {
    v7 = NULL;
  }
  minimapOptions->mapMask = v7;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "mapOverlay");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v8 = j_lua_tolstring(luaVM, -1, NULL);
    v9 = Image_Register(v8, IMAGE_TRACK_UI);
  }
  else
  {
    v9 = NULL;
  }
  minimapOptions->mapOverlay = v9;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "mapRotOverlay");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v10 = j_lua_tolstring(luaVM, -1, NULL);
    v5 = Image_Register(v10, IMAGE_TRACK_UI);
  }
  minimapOptions->mapRotOverlay = v5;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "boundsRadius");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm2, xmm0, xmm1 }
  }
  else
  {
    LODWORD(_XMM2) = 0;
  }
  minimapOptions->boundsRadius = *(float *)&_XMM2;
  j_lua_settop(luaVM, -2);
}

/*
==============
LUIElement_Minimap_Render
==============
*/
void LUIElement_Minimap_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v9; 
  CgCompassSystemSP *v10; 
  MinimapOptions *MinimapData; 
  MinimapOptions *v12; 
  CgCompassSystemMP *CompassSystemMP; 
  MinimapOptions *v14; 
  double CurrentCompassZoomLevel; 
  Material *material; 
  vec4_t *v17; 
  vec4_t secondaryColor; 
  vec4_t v19; 
  rectDef_s rect; 
  rectDef_s parentRect; 
  vec4_t color; 

  v9 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v9] )
  {
    LODWORD(v17) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v17) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v17) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v17) )
      __debugbreak();
  }
  if ( cg_t::ms_cgArray[v9]->nextSnap )
  {
    *(_OWORD *)&parentRect.x = 0i64;
    *(_WORD *)&parentRect.horzAlign = 1285;
    LUIElement_GetCommonParams((LocalClientNum_t)v9, element, &rect, &color);
    if ( rect.w > 0.0 && rect.h > 0.0 )
    {
      Sys_ProfBeginNamedEvent(0xFFEE82EE, "LUIElement_Minimap_Render");
      secondaryColor.v[0] = red;
      secondaryColor.v[1] = green;
      secondaryColor.v[2] = blue;
      secondaryColor.v[3] = alpha;
      if ( cg_t::ms_allocatedType == GLOB_TYPE_SP )
      {
        if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF )
        {
          LODWORD(v17) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v17, 1, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
            __debugbreak();
        }
        if ( (unsigned int)v9 >= CgCompassSystem::ms_allocatedCount )
        {
          LODWORD(v17) = CgCompassSystem::ms_allocatedCount;
          LODWORD(material) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", material, v17) )
            __debugbreak();
        }
        if ( !CgCompassSystem::ms_compassSystemArray[v9] )
        {
          LODWORD(v17) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v17) )
            __debugbreak();
        }
        v10 = (CgCompassSystemSP *)CgCompassSystem::ms_compassSystemArray[v9];
        CgCompassSystem::SetCurrentCompassDisplayType(v10, COMPASS_DISPLAY_MINIMAP);
        MinimapData = LUIElement_Minimap_GetMinimapData(element, luaVM);
        v12 = MinimapData;
        if ( MinimapData->drawMap )
        {
          v19.v[0] = secondaryColor.v[0];
          v19.v[1] = secondaryColor.v[1];
          v19.v[2] = secondaryColor.v[2];
          v19.v[3] = MinimapData->mapAlpha * secondaryColor.v[3];
          CgCompassSystem::DrawPlayerMap(v10, MinimapData->compassType, MinimapData->cropPartialMap, &parentRect, &rect, NULL, &v19, MinimapData->mapMask, MinimapData->mapOverlay, MinimapData->mapRotOverlay, element, luaVM);
        }
        if ( v12->drawPlayer )
          CgCompassSystem::DrawPlayer(v10, v12->compassType, v12->cropPartialMap, v12->largeMap, 0, NULL, &parentRect, &rect, v12->boundsRadius, &secondaryColor, &secondaryColor, &secondaryColor, &secondaryColor, &secondaryColor, 0.0, element, luaVM);
        CgCompassSystemSP::DrawEnemies(v10, v12->compassType, v12->cropPartialMap, &parentRect, &rect, v12->boundsRadius, &secondaryColor, element, luaVM);
      }
      else
      {
        CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)v9);
        v14 = LUIElement_Minimap_GetMinimapData(element, luaVM);
        CgCompassSystem::SetCurrentCompassType(CompassSystemMP, v14->compassType);
        CgCompassSystem::SetMinimapStyle(CompassSystemMP, v14->minimapStyle);
        CgCompassSystem::SetMinimapRotationEnabled(CompassSystemMP, v14->minimapRotationEnabled);
        CgCompassSystem::SetCurrentCompassDisplayType(CompassSystemMP, COMPASS_DISPLAY_MINIMAP);
        CgCompassSystem::SetIsUsingTabletMode(CompassSystemMP, v14->isUsingTabletMode);
        ((void (__fastcall *)(CgCompassSystemMP *, _QWORD))CompassSystemMP->SetCurrentFilters)(CompassSystemMP, v14->filters.array[0]);
        CgCompassSystemMP::SetRadarSweepEnabled(CompassSystemMP, v14->drawRadarSweep);
        CgCompassSystemMP::SetFullmap(CompassSystemMP, v14->largeMap);
        if ( v14->retainZoomLevel )
          CgCompassSystem::SetCurrentCompassZoomLevel(CompassSystemMP, v14->zoomLevel);
        if ( v14->drawMap )
        {
          v19.v[0] = secondaryColor.v[0];
          v19.v[1] = secondaryColor.v[1];
          v19.v[2] = secondaryColor.v[2];
          v19.v[3] = v14->mapAlpha * secondaryColor.v[3];
          CompassSystemMP->DrawMapLayer(CompassSystemMP, v14, &parentRect, &rect, &secondaryColor, &v19, element, luaVM);
        }
        if ( v14->drawCursor && (CL_Input_IsGamepadEnabled((LocalClientNum_t)v9) || CgCompassSystem::GetCurrentCompassType(CompassSystemMP) != COMPASS_TYPE_TACMAP) )
        {
          Sys_ProfBeginNamedEvent(0xFF0000FF, "DrawCursorLayer");
          CompassSystemMP->DrawCursorLayer(CompassSystemMP, v14, &parentRect, &rect, &secondaryColor, element, luaVM);
          Sys_ProfEndNamedEvent();
        }
        if ( v14->drawItems )
        {
          Sys_ProfBeginNamedEvent(0xFF44CCFF, "DrawItemsLayer");
          CompassSystemMP->DrawItemsLayer(CompassSystemMP, v14, &parentRect, &rect, &secondaryColor, element, luaVM);
          Sys_ProfEndNamedEvent();
        }
        if ( v14->drawOthers )
        {
          Sys_ProfBeginNamedEvent(0xFF00008B, "DrawOthersLayer");
          CompassSystemMP->DrawOthersLayer(CompassSystemMP, v14, &parentRect, &rect, &secondaryColor, element, luaVM);
          Sys_ProfEndNamedEvent();
        }
        if ( v14->drawPlayer )
        {
          Sys_ProfBeginNamedEvent(0xFFFF00FF, "DrawPlayerLayer");
          CompassSystemMP->DrawPlayerLayer(CompassSystemMP, v14, &parentRect, &rect, &secondaryColor, element, luaVM);
          Sys_ProfEndNamedEvent();
        }
        if ( v14->retainZoomLevel )
        {
          CurrentCompassZoomLevel = CgCompassSystem::GetCurrentCompassZoomLevel(CompassSystemMP);
          v14->zoomLevel = *(float *)&CurrentCompassZoomLevel;
        }
      }
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
LUI_LuaCall_LUIElement_ChangeMinimapCompassType
==============
*/
__int64 LUI_LuaCall_LUIElement_ChangeMinimapCompassType(lua_State *luaVM)
{
  LUIElement *v2; 
  _DWORD *customElementData; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgCompassSystemMP *CompassSystemMP; 
  CompassType v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(CurrentValidLocalClient);
  v6 = lui_tointeger32(luaVM, 2);
  *customElementData = v6;
  CgCompassSystem::SetCurrentCompassType(CompassSystemMP, v6);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_ChangeMinimapOptions
==============
*/
__int64 LUI_LuaCall_LUIElement_ChangeMinimapOptions(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_ChangeMinimapOptions_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_ChangeMinimapOptions_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_ChangeMinimapOptions_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  void *customElementData; 
  double v4; 
  double v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v9; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  if ( !customElementData )
    j_luaL_error(luaVM, "Trying to access an invalid/uninitialized Minimap element");
  j_lua_getfield(luaVM, 2, "compassType");
  if ( j_lua_isnumber(luaVM, -1) )
    *(_DWORD *)customElementData = lui_tointeger32(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( *(_DWORD *)customElementData > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 431, ASSERT_TYPE_ASSERT, "(minimapOptions->compassType == CompassType::COMPASS_TYPE_PARTIAL || minimapOptions->compassType == CompassType::COMPASS_TYPE_FULL || minimapOptions->compassType == CompassType::COMPASS_TYPE_TACMAP)", (const char *)&queryFormat, "minimapOptions->compassType == CompassType::COMPASS_TYPE_PARTIAL || minimapOptions->compassType == CompassType::COMPASS_TYPE_FULL || minimapOptions->compassType == CompassType::COMPASS_TYPE_TACMAP") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "minimapStyle");
  if ( j_lua_isnumber(luaVM, -1) )
    *((_DWORD *)customElementData + 19) = lui_tointeger32(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( *((_DWORD *)customElementData + 19) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 440, ASSERT_TYPE_ASSERT, "(minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_CIRCLE || minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_SQUARE)", (const char *)&queryFormat, "minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_CIRCLE || minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_SQUARE") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "minimapRotationEnabled");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 80) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawMap");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 4) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawPlayer");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 5) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawOthers");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 6) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawItems");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 7) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawLocationSelectionCursor");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 9) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "mapAlpha");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v4 = lui_tonumber32(luaVM, -1);
    *((float *)customElementData + 4) = *(float *)&v4;
  }
  v5 = I_fclamp(*((float *)customElementData + 4), 0.0, 1.0);
  *((float *)customElementData + 4) = *(float *)&v5;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "cropPartialMap");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 20) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "largeMap");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 21) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "cursorStyle");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v6 = lui_tointeger32(luaVM, -1);
    v7 = v6;
    if ( v6 >= 2 )
    {
      LODWORD(v9) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 520, ASSERT_TYPE_ASSERT, "(unsigned)( cursorStyle ) < (unsigned)( TacMapCursorStyle::TAC_MAP_CURSOR_STYLE_COUNT )", "cursorStyle doesn't index TacMapCursorStyle::TAC_MAP_CURSOR_STYLE_COUNT\n\t%i not in [0, %i)", v9, 2) )
        __debugbreak();
    }
    *((_DWORD *)customElementData + 17) = v7;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawPlayerPingCircle");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 10) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "retainZoomLevel");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 12) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "isCPRaidSecurityScreen");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 81) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawRadarSweep");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)customElementData + 11) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  LUIElement_Minimap_InitCircularMapOptions(luaVM, (MinimapOptions *)customElementData);
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_GetFilterBits
==============
*/
__int64 LUI_LuaCall_LUIElement_GetFilterBits(lua_State *luaVM)
{
  LUIElement *v2; 
  int *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (int *)v2->customElementData;
  j_lua_createtable(luaVM, 0, 10);
  LUI_SetTableBool("filterPlayerPings", customElementData[16] < 0, LUI_luaVM);
  LUI_SetTableBool("filterPoi", (customElementData[16] & 0x40000000) != 0, LUI_luaVM);
  LUI_SetTableBool("filterMission", (customElementData[16] & 0x20000000) != 0, LUI_luaVM);
  LUI_SetTableBool("filterVehicle", (customElementData[16] & 0x10000000) != 0, LUI_luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_ResetMapInitialized
==============
*/
__int64 LUI_LuaCall_LUIElement_ResetMapInitialized(lua_State *luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  if ( !customElementData )
    j_luaL_error(luaVM, "Trying to access an invalid/uninitialized Minimap element");
  customElementData[60] = 1;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_ResetZoomLevel
==============
*/
__int64 LUI_LuaCall_LUIElement_ResetZoomLevel(lua_State *luaVM)
{
  LUIElement *v2; 
  _DWORD *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  if ( !customElementData )
    j_luaL_error(luaVM, "Trying to access an invalid/uninitialized Minimap element");
  customElementData[18] = 1065353216;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetFilterBits
==============
*/
__int64 LUI_LuaCall_LUIElement_SetFilterBits(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetFilterBits_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetFilterBits_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetFilterBits_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  _DWORD *customElementData; 
  bool v4; 
  bool v5; 
  bool v6; 
  bool v7; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  j_lua_getfield(luaVM, 2, "filterPlayerPings");
  v4 = 0;
  if ( j_lua_type(luaVM, -1) == 1 )
    v4 = j_lua_toboolean(luaVM, -1) > 0;
  if ( v4 )
    customElementData[16] |= 0x80000000;
  else
    customElementData[16] &= ~0x80000000;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "filterPoi");
  v5 = 0;
  if ( j_lua_type(luaVM, -1) == 1 )
    v5 = j_lua_toboolean(luaVM, -1) > 0;
  if ( v5 )
    customElementData[16] |= 0x40000000u;
  else
    customElementData[16] &= ~0x40000000u;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "filterMission");
  v6 = 0;
  if ( j_lua_type(luaVM, -1) == 1 )
    v6 = j_lua_toboolean(luaVM, -1) > 0;
  if ( v6 )
    customElementData[16] |= 0x20000000u;
  else
    customElementData[16] &= ~0x20000000u;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "filterVehicle");
  v7 = 0;
  if ( j_lua_type(luaVM, -1) == 1 )
    v7 = j_lua_toboolean(luaVM, -1) > 0;
  if ( v7 )
    customElementData[16] |= 0x10000000u;
  else
    customElementData[16] &= ~0x10000000u;
  j_lua_settop(luaVM, -2);
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetIsUsingTabletMode
==============
*/
__int64 LUI_LuaCall_LUIElement_SetIsUsingTabletMode(lua_State *luaVM)
{
  LUIElement *v2; 
  _BYTE *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  if ( !customElementData )
    j_luaL_error(luaVM, "Trying to access an invalid/uninitialized Minimap element");
  customElementData[61] = j_lua_toboolean(luaVM, 2) != 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupMinimap
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupMinimap(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupMinimap_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupMinimap_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupMinimap_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  MinimapOptions *v3; 
  int v4; 
  int v5; 
  bool v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  double v12; 
  double v13; 
  bool v14; 
  bool v15; 
  unsigned int v16; 
  unsigned int v17; 
  bool v18; 
  bool v19; 
  bool v20; 
  __int64 result; 
  __int64 v22; 
  int v23; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = LUIElement_Minimap_Render;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = (MinimapOptions *)j_lua_newuserdata(luaVM, 0x58ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  memset_0(v3, 0, sizeof(MinimapOptions));
  j_lua_getfield(luaVM, 2, "compassType");
  if ( j_lua_isnumber(luaVM, -1) )
    v4 = lui_tointeger32(luaVM, -1);
  else
    v4 = 0;
  v3->compassType = v4;
  j_lua_settop(luaVM, -2);
  if ( v3->compassType > (unsigned int)COMPASS_TYPE_TACMAP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 229, ASSERT_TYPE_ASSERT, "(minimapOptions->compassType == CompassType::COMPASS_TYPE_PARTIAL || minimapOptions->compassType == CompassType::COMPASS_TYPE_FULL || minimapOptions->compassType == CompassType::COMPASS_TYPE_TACMAP)", (const char *)&queryFormat, "minimapOptions->compassType == CompassType::COMPASS_TYPE_PARTIAL || minimapOptions->compassType == CompassType::COMPASS_TYPE_FULL || minimapOptions->compassType == CompassType::COMPASS_TYPE_TACMAP") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "minimapStyle");
  if ( j_lua_isnumber(luaVM, -1) )
    v5 = lui_tointeger32(luaVM, -1);
  else
    v5 = 0;
  v3->minimapStyle = v5;
  j_lua_settop(luaVM, -2);
  if ( v3->minimapStyle > (unsigned int)MINIMAP_STYLE_SQUARE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 242, ASSERT_TYPE_ASSERT, "(minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_CIRCLE || minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_SQUARE)", (const char *)&queryFormat, "minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_CIRCLE || minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_SQUARE") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "minimapRotationEnabled");
  v6 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  v3->minimapRotationEnabled = v6;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawMap");
  v7 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  v3->drawMap = v7;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawPlayer");
  v8 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  v3->drawPlayer = v8;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawOthers");
  v9 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  v3->drawOthers = v9;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawItems");
  v10 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  v3->drawItems = v10;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawLocationSelectionCursor");
  v11 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  v3->drawCursor = v11;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "mapAlpha");
  if ( j_lua_isnumber(luaVM, -1) )
    v12 = lui_tonumber32(luaVM, -1);
  else
    *(float *)&v12 = FLOAT_1_0;
  v3->mapAlpha = *(float *)&v12;
  v13 = I_fclamp(*(float *)&v12, 0.0, 1.0);
  v3->mapAlpha = *(float *)&v13;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "cropPartialMap");
  v14 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  v3->cropPartialMap = v14;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "largeMap");
  v15 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  v3->largeMap = v15;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "cursorStyle");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v16 = lui_tointeger32(luaVM, -1);
    v17 = v16;
    if ( v16 >= 2 )
    {
      v23 = 2;
      LODWORD(v22) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 358, ASSERT_TYPE_ASSERT, "(unsigned)( cursorStyle ) < (unsigned)( TacMapCursorStyle::TAC_MAP_CURSOR_STYLE_COUNT )", "cursorStyle doesn't index TacMapCursorStyle::TAC_MAP_CURSOR_STYLE_COUNT\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
  }
  else
  {
    v17 = 0;
  }
  v3->cursorStyle = v17;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawPlayerPingCircle");
  v18 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  v3->drawPlayerPingCircle = v18;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "retainZoomLevel");
  v19 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  v3->retainZoomLevel = v19;
  v3->zoomLevel = 1.0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawRadarSweep");
  v20 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  v3->drawRadarSweep = v20;
  j_lua_settop(luaVM, -2);
  LUIElement_Minimap_InitCircularMapOptions(luaVM, v3);
  result = 0i64;
  v3->filters.array[0] = 0;
  return result;
}

