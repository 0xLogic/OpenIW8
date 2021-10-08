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

void __fastcall LUIElement_Minimap_InitCircularMapOptions(lua_State *luaVM, MinimapOptions *minimapOptions, double _XMM2_8)
{
  GfxImage *v7; 
  const char *v8; 
  GfxImage *v9; 
  const char *v10; 
  GfxImage *v11; 
  const char *v12; 

  _RSI = minimapOptions;
  j_lua_getfield(luaVM, 2, "mapMask");
  v7 = NULL;
  if ( j_lua_isstring(luaVM, -1) )
  {
    v8 = j_lua_tolstring(luaVM, -1, NULL);
    v9 = Image_Register(v8, IMAGE_TRACK_UI);
  }
  else
  {
    v9 = NULL;
  }
  _RSI->mapMask = v9;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "mapOverlay");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v10 = j_lua_tolstring(luaVM, -1, NULL);
    v11 = Image_Register(v10, IMAGE_TRACK_UI);
  }
  else
  {
    v11 = NULL;
  }
  _RSI->mapOverlay = v11;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "mapRotOverlay");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v12 = j_lua_tolstring(luaVM, -1, NULL);
    v7 = Image_Register(v12, IMAGE_TRACK_UI);
  }
  _RSI->mapRotOverlay = v7;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "boundsRadius");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmaxss  xmm2, xmm0, xmm1
    }
  }
  else
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  __asm { vmovss  dword ptr [rsi+38h], xmm2 }
  j_lua_settop(luaVM, -2);
}

/*
==============
LUIElement_Minimap_Render
==============
*/

void __fastcall LUIElement_Minimap_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v14; 
  char v16; 
  char v17; 
  CgCompassSystemSP *v24; 
  CgCompassSystemMP *CompassSystemMP; 
  Material *material; 
  float materiala; 
  vec4_t *v46; 
  float mapOverlay; 
  float v48; 
  vec4_t secondaryColor; 
  vec4_t v50; 
  rectDef_s rect; 
  rectDef_s parentRect; 
  vec4_t color; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmm7, xmm3
  }
  v14 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v14] )
  {
    LODWORD(v46) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v46) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v46) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v46) )
      __debugbreak();
  }
  if ( cg_t::ms_cgArray[v14]->nextSnap )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [rbp+40h+parentRect.x], xmm0
    }
    *(_WORD *)&parentRect.horzAlign = 1285;
    LUIElement_GetCommonParams((LocalClientNum_t)v14, element, &rect, &color);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  xmm0, [rbp+40h+rect.w]
      vcomiss xmm0, xmm6
    }
    if ( !(v16 | v17) )
    {
      __asm
      {
        vmovss  xmm0, [rbp+40h+rect.h]
        vcomiss xmm0, xmm6
      }
      if ( !(v16 | v17) )
      {
        Sys_ProfBeginNamedEvent(0xFFEE82EE, "LUIElement_Minimap_Render");
        __asm
        {
          vmovss  xmm0, [rbp+40h+red]
          vmovss  dword ptr [rbp+40h+secondaryColor], xmm0
          vmovss  xmm1, [rbp+40h+green]
          vmovss  dword ptr [rbp+40h+secondaryColor+4], xmm1
          vmovss  xmm0, [rbp+40h+blue]
          vmovss  dword ptr [rbp+40h+secondaryColor+8], xmm0
          vmovss  dword ptr [rbp+40h+secondaryColor+0Ch], xmm7
        }
        if ( cg_t::ms_allocatedType == GLOB_TYPE_SP )
        {
          if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF )
          {
            LODWORD(v46) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v46, 1, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
              __debugbreak();
          }
          if ( (unsigned int)v14 >= CgCompassSystem::ms_allocatedCount )
          {
            LODWORD(v46) = CgCompassSystem::ms_allocatedCount;
            LODWORD(material) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", material, v46) )
              __debugbreak();
          }
          if ( !CgCompassSystem::ms_compassSystemArray[v14] )
          {
            LODWORD(v46) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v46) )
              __debugbreak();
          }
          v24 = (CgCompassSystemSP *)CgCompassSystem::ms_compassSystemArray[v14];
          CgCompassSystem::SetCurrentCompassDisplayType(v24, COMPASS_DISPLAY_MINIMAP);
          _RAX = LUIElement_Minimap_GetMinimapData(element, luaVM);
          _RBX = _RAX;
          if ( _RAX->drawMap )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+40h+secondaryColor]
              vmovss  dword ptr [rbp+40h+var_A8], xmm0
              vmovss  xmm1, dword ptr [rbp+40h+secondaryColor+4]
              vmovss  dword ptr [rbp+40h+var_A8+4], xmm1
              vmovss  xmm0, dword ptr [rbp+40h+secondaryColor+8]
              vmovss  dword ptr [rbp+40h+var_A8+8], xmm0
              vmovss  xmm1, dword ptr [rax+10h]
              vmulss  xmm0, xmm1, dword ptr [rbp+40h+secondaryColor+0Ch]
              vmovss  dword ptr [rbp+40h+var_A8+0Ch], xmm0
            }
            CgCompassSystem::DrawPlayerMap(v24, _RAX->compassType, _RAX->cropPartialMap, &parentRect, &rect, NULL, &v50, _RAX->mapMask, _RAX->mapOverlay, _RAX->mapRotOverlay, element, luaVM);
          }
          if ( _RBX->drawPlayer )
          {
            __asm
            {
              vmovss  dword ptr [rsp+150h+var_E0], xmm6
              vmovss  xmm0, dword ptr [rbx+38h]
              vmovss  dword ptr [rsp+150h+mapOverlay], xmm0
            }
            CgCompassSystem::DrawPlayer(v24, _RBX->compassType, _RBX->cropPartialMap, _RBX->largeMap, 0, NULL, &parentRect, &rect, mapOverlay, &secondaryColor, &secondaryColor, &secondaryColor, &secondaryColor, &secondaryColor, v48, element, luaVM);
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+38h]
            vmovss  dword ptr [rsp+150h+material], xmm0
          }
          CgCompassSystemSP::DrawEnemies(v24, _RBX->compassType, _RBX->cropPartialMap, &parentRect, &rect, materiala, &secondaryColor, element, luaVM);
        }
        else
        {
          CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)v14);
          _RBX = LUIElement_Minimap_GetMinimapData(element, luaVM);
          CgCompassSystem::SetCurrentCompassType(CompassSystemMP, _RBX->compassType);
          CgCompassSystem::SetMinimapStyle(CompassSystemMP, _RBX->minimapStyle);
          CgCompassSystem::SetMinimapRotationEnabled(CompassSystemMP, _RBX->minimapRotationEnabled);
          CgCompassSystem::SetCurrentCompassDisplayType(CompassSystemMP, COMPASS_DISPLAY_MINIMAP);
          CgCompassSystem::SetIsUsingTabletMode(CompassSystemMP, _RBX->isUsingTabletMode);
          ((void (__fastcall *)(CgCompassSystemMP *, _QWORD))CompassSystemMP->SetCurrentFilters)(CompassSystemMP, _RBX->filters.array[0]);
          CgCompassSystemMP::SetRadarSweepEnabled(CompassSystemMP, _RBX->drawRadarSweep);
          CgCompassSystemMP::SetFullmap(CompassSystemMP, _RBX->largeMap);
          if ( _RBX->retainZoomLevel )
          {
            __asm { vmovss  xmm1, dword ptr [rbx+48h]; zoomLevel }
            CgCompassSystem::SetCurrentCompassZoomLevel(CompassSystemMP, *(const float *)&_XMM1);
          }
          if ( _RBX->drawMap )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+40h+secondaryColor]
              vmovss  dword ptr [rbp+40h+var_A8], xmm0
              vmovss  xmm1, dword ptr [rbp+40h+secondaryColor+4]
              vmovss  dword ptr [rbp+40h+var_A8+4], xmm1
              vmovss  xmm0, dword ptr [rbp+40h+secondaryColor+8]
              vmovss  dword ptr [rbp+40h+var_A8+8], xmm0
              vmovss  xmm1, dword ptr [rbx+10h]
              vmulss  xmm0, xmm1, dword ptr [rbp+40h+secondaryColor+0Ch]
              vmovss  dword ptr [rbp+40h+var_A8+0Ch], xmm0
            }
            CompassSystemMP->DrawMapLayer(CompassSystemMP, _RBX, &parentRect, &rect, &secondaryColor, &v50, element, luaVM);
          }
          if ( _RBX->drawCursor && (CL_Input_IsGamepadEnabled((LocalClientNum_t)v14) || CgCompassSystem::GetCurrentCompassType(CompassSystemMP) != COMPASS_TYPE_TACMAP) )
          {
            Sys_ProfBeginNamedEvent(0xFF0000FF, "DrawCursorLayer");
            CompassSystemMP->DrawCursorLayer(CompassSystemMP, _RBX, &parentRect, &rect, &secondaryColor, element, luaVM);
            Sys_ProfEndNamedEvent();
          }
          if ( _RBX->drawItems )
          {
            Sys_ProfBeginNamedEvent(0xFF44CCFF, "DrawItemsLayer");
            CompassSystemMP->DrawItemsLayer(CompassSystemMP, _RBX, &parentRect, &rect, &secondaryColor, element, luaVM);
            Sys_ProfEndNamedEvent();
          }
          if ( _RBX->drawOthers )
          {
            Sys_ProfBeginNamedEvent(0xFF00008B, "DrawOthersLayer");
            CompassSystemMP->DrawOthersLayer(CompassSystemMP, _RBX, &parentRect, &rect, &secondaryColor, element, luaVM);
            Sys_ProfEndNamedEvent();
          }
          if ( _RBX->drawPlayer )
          {
            Sys_ProfBeginNamedEvent(0xFFFF00FF, "DrawPlayerLayer");
            CompassSystemMP->DrawPlayerLayer(CompassSystemMP, _RBX, &parentRect, &rect, &secondaryColor, element, luaVM);
            Sys_ProfEndNamedEvent();
          }
          if ( _RBX->retainZoomLevel )
          {
            *(double *)&_XMM0 = CgCompassSystem::GetCurrentCompassZoomLevel(CompassSystemMP);
            __asm { vmovss  dword ptr [rbx+48h], xmm0 }
          }
        }
        Sys_ProfEndNamedEvent();
      }
    }
  }
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
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

__int64 __fastcall LUI_LuaCall_LUIElement_ChangeMinimapOptions_impl(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v4; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v12; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v4 = LUI_ToElement(luaVM, 1);
  if ( !v4->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RDI = v4->customElementData;
  if ( !_RDI )
    j_luaL_error(luaVM, "Trying to access an invalid/uninitialized Minimap element");
  j_lua_getfield(luaVM, 2, "compassType");
  if ( j_lua_isnumber(luaVM, -1) )
    *_RDI = lui_tointeger32(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( *_RDI > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 431, ASSERT_TYPE_ASSERT, "(minimapOptions->compassType == CompassType::COMPASS_TYPE_PARTIAL || minimapOptions->compassType == CompassType::COMPASS_TYPE_FULL || minimapOptions->compassType == CompassType::COMPASS_TYPE_TACMAP)", (const char *)&queryFormat, "minimapOptions->compassType == CompassType::COMPASS_TYPE_PARTIAL || minimapOptions->compassType == CompassType::COMPASS_TYPE_FULL || minimapOptions->compassType == CompassType::COMPASS_TYPE_TACMAP") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "minimapStyle");
  if ( j_lua_isnumber(luaVM, -1) )
    _RDI[19] = lui_tointeger32(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( _RDI[19] > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 440, ASSERT_TYPE_ASSERT, "(minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_CIRCLE || minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_SQUARE)", (const char *)&queryFormat, "minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_CIRCLE || minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_SQUARE") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "minimapRotationEnabled");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 80) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawMap");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 4) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawPlayer");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 5) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawOthers");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 6) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawItems");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 7) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawLocationSelectionCursor");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 9) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "mapAlpha");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+10h], xmm0 }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm0, dword ptr [rdi+10h]; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+10h], xmm0 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "cropPartialMap");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 20) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "largeMap");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 21) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "cursorStyle");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v9 = lui_tointeger32(luaVM, -1);
    v10 = v9;
    if ( v9 >= 2 )
    {
      LODWORD(v12) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 520, ASSERT_TYPE_ASSERT, "(unsigned)( cursorStyle ) < (unsigned)( TacMapCursorStyle::TAC_MAP_CURSOR_STYLE_COUNT )", "cursorStyle doesn't index TacMapCursorStyle::TAC_MAP_CURSOR_STYLE_COUNT\n\t%i not in [0, %i)", v12, 2) )
        __debugbreak();
    }
    _RDI[17] = v10;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawPlayerPingCircle");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 10) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "retainZoomLevel");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 12) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "isCPRaidSecurityScreen");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 81) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawRadarSweep");
  if ( j_lua_type(luaVM, -1) == 1 )
    *((_BYTE *)_RDI + 11) = j_lua_toboolean(luaVM, -1) > 0;
  j_lua_settop(luaVM, -2);
  LUIElement_Minimap_InitCircularMapOptions(luaVM, (MinimapOptions *)_RDI, *(double *)&_XMM2);
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

__int64 __fastcall LUI_LuaCall_LUIElement_SetupMinimap_impl(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v5; 
  int v7; 
  int v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  bool v12; 
  bool v13; 
  bool v14; 
  bool v18; 
  bool v19; 
  unsigned int v20; 
  unsigned int v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  __int64 result; 
  __int64 v27; 
  int v28; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v5 = LUI_ToElement(luaVM, 1);
  v5->usageFlags |= 1u;
  v5->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_Minimap_Render;
  if ( !LUI_ElementHasWeakTableEntry(v5, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v5, luaVM);
  _RDI = (MinimapOptions *)j_lua_newuserdata(luaVM, 0x58ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v5->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v5->customElementData = _RDI;
  memset_0(_RDI, 0, sizeof(MinimapOptions));
  j_lua_getfield(luaVM, 2, "compassType");
  if ( j_lua_isnumber(luaVM, -1) )
    v7 = lui_tointeger32(luaVM, -1);
  else
    v7 = 0;
  _RDI->compassType = v7;
  j_lua_settop(luaVM, -2);
  if ( _RDI->compassType > (unsigned int)COMPASS_TYPE_TACMAP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 229, ASSERT_TYPE_ASSERT, "(minimapOptions->compassType == CompassType::COMPASS_TYPE_PARTIAL || minimapOptions->compassType == CompassType::COMPASS_TYPE_FULL || minimapOptions->compassType == CompassType::COMPASS_TYPE_TACMAP)", (const char *)&queryFormat, "minimapOptions->compassType == CompassType::COMPASS_TYPE_PARTIAL || minimapOptions->compassType == CompassType::COMPASS_TYPE_FULL || minimapOptions->compassType == CompassType::COMPASS_TYPE_TACMAP") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "minimapStyle");
  if ( j_lua_isnumber(luaVM, -1) )
    v8 = lui_tointeger32(luaVM, -1);
  else
    v8 = 0;
  _RDI->minimapStyle = v8;
  j_lua_settop(luaVM, -2);
  if ( _RDI->minimapStyle > (unsigned int)MINIMAP_STYLE_SQUARE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 242, ASSERT_TYPE_ASSERT, "(minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_CIRCLE || minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_SQUARE)", (const char *)&queryFormat, "minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_CIRCLE || minimapOptions->minimapStyle == MinimapStyle::MINIMAP_STYLE_SQUARE") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "minimapRotationEnabled");
  v9 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  _RDI->minimapRotationEnabled = v9;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawMap");
  v10 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  _RDI->drawMap = v10;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawPlayer");
  v11 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  _RDI->drawPlayer = v11;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawOthers");
  v12 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  _RDI->drawOthers = v12;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawItems");
  v13 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  _RDI->drawItems = v13;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawLocationSelectionCursor");
  v14 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->drawCursor = v14;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "mapAlpha");
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( j_lua_isnumber(luaVM, -1) )
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  else
    __asm { vmovaps xmm0, xmm6; val }
  __asm
  {
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  dword ptr [rdi+10h], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+10h], xmm0 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "cropPartialMap");
  v18 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->cropPartialMap = v18;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "largeMap");
  v19 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->largeMap = v19;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "cursorStyle");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v20 = lui_tointeger32(luaVM, -1);
    v21 = v20;
    if ( v20 >= 2 )
    {
      v28 = 2;
      LODWORD(v27) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_minimap.cpp", 358, ASSERT_TYPE_ASSERT, "(unsigned)( cursorStyle ) < (unsigned)( TacMapCursorStyle::TAC_MAP_CURSOR_STYLE_COUNT )", "cursorStyle doesn't index TacMapCursorStyle::TAC_MAP_CURSOR_STYLE_COUNT\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
  }
  else
  {
    v21 = 0;
  }
  _RDI->cursorStyle = v21;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawPlayerPingCircle");
  v22 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->drawPlayerPingCircle = v22;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "retainZoomLevel");
  v23 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->retainZoomLevel = v23;
  _RDI->zoomLevel = 1.0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "drawRadarSweep");
  v24 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  _RDI->drawRadarSweep = v24;
  j_lua_settop(luaVM, -2);
  LUIElement_Minimap_InitCircularMapOptions(luaVM, _RDI, *(double *)&_XMM2);
  result = 0i64;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  _RDI->filters.array[0] = 0;
  return result;
}

