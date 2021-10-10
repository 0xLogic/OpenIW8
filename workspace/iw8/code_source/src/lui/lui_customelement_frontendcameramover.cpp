/*
==============
LUIElement_FrontendCameraMover_SetLimits
==============
*/
__int64 LUIElement_FrontendCameraMover_SetLimits(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  float v4; 
  double v5; 
  float v6; 
  double v7; 
  float v8; 
  double v9; 
  LUIFrontendCameraMoverData *ModelData; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: element:SetLimits( <leftLimit>, <rightLimit>, <upLimit>, <downLimit> )");
  if ( j_lua_gettop(luaVM) == 5 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isnumber(luaVM, 5) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = *(float *)&v3;
    v5 = lui_tonumber32(luaVM, 3);
    v6 = *(float *)&v5;
    v7 = lui_tonumber32(luaVM, 4);
    v8 = *(float *)&v7;
    v9 = lui_tonumber32(luaVM, 5);
    ModelData = LUIElement_FrontendCameraMover_GetModelData(v2, luaVM);
    ModelData->leftLimit = v4;
    ModelData->rightLimit = v6;
    ModelData->upLimit = v8;
    ModelData->downLimit = *(float *)&v9;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v11);
  }
  return 0i64;
}

/*
==============
LUIElement_FrontendCameraMover_SetSwayValues
==============
*/
__int64 LUIElement_FrontendCameraMover_SetSwayValues(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  double v4; 
  float v5; 
  double v6; 
  double v7; 
  float v8; 
  double v9; 
  double v10; 
  LUIFrontendCameraMoverData *ModelData; 
  unsigned int v12; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetSwayValues( <timeScaledown>, <amplitudeX>, <amplitudeY> )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = I_fclamp(*(float *)&v3, 1.0, 5000.0);
    v5 = *(float *)&v4;
    v6 = lui_tonumber32(luaVM, 3);
    v7 = I_fclamp(*(float *)&v6, 0.0, 100.0);
    v8 = *(float *)&v7;
    v9 = lui_tonumber32(luaVM, 4);
    v10 = I_fclamp(*(float *)&v9, 0.0, 100.0);
    ModelData = LUIElement_FrontendCameraMover_GetModelData(v2, luaVM);
    ModelData->timeScaledown = v5;
    ModelData->amplitudeX = v8;
    ModelData->amplitudeY = *(float *)&v10;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v12);
  }
  return 0i64;
}

/*
==============
LUIElement_FrontendCameraMover_SetScreenOrigin
==============
*/
__int64 LUIElement_FrontendCameraMover_SetScreenOrigin(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  float v4; 
  double v5; 
  LUIFrontendCameraMoverData *ModelData; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetScreenOrigin( <x>, <y> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = *(float *)&v3;
    v5 = lui_tonumber32(luaVM, 3);
    ModelData = LUIElement_FrontendCameraMover_GetModelData(v2, luaVM);
    ModelData->camScreenOrigin.v[0] = v4;
    ModelData->camScreenOrigin.v[1] = *(float *)&v5;
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
LUIElement_FrontendCameraMover_SetVelocity
==============
*/
__int64 LUIElement_FrontendCameraMover_SetVelocity(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetVelocity( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    LUIElement_FrontendCameraMover_GetModelData(v2, luaVM)->velocity = *(float *)&v3;
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
LUIElement_FrontendCameraMover_SetZoomSpeed
==============
*/
__int64 LUIElement_FrontendCameraMover_SetZoomSpeed(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetZoomSpeed( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    LUIElement_FrontendCameraMover_GetModelData(v2, luaVM)->zoomSpeed = *(float *)&v3;
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
LUIElement_FrontendCameraMover_SetMinZoom
==============
*/
__int64 LUIElement_FrontendCameraMover_SetMinZoom(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetMinZoom( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    LUIElement_FrontendCameraMover_GetModelData(v2, luaVM)->zoomMin = *(float *)&v3;
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
LUIElement_FrontendCameraMover_SetMaxZoom
==============
*/
__int64 LUIElement_FrontendCameraMover_SetMaxZoom(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetMaxZoom( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    LUIElement_FrontendCameraMover_GetModelData(v2, luaVM)->zoomMax = *(float *)&v3;
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
LUIElement_FrontendCameraMover_SetRotationRadius
==============
*/
__int64 LUIElement_FrontendCameraMover_SetRotationRadius(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetRoationRadius( <radius> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    LUIElement_FrontendCameraMover_GetModelData(v2, luaVM)->rotationRadius = *(float *)&v3;
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
LUIElement_FrontendCameraMover_ResetPosition
==============
*/
__int64 LUIElement_FrontendCameraMover_ResetPosition(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIFrontendCameraMoverData *ModelData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:ResetPosition()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    ModelData = LUIElement_FrontendCameraMover_GetModelData(v2, luaVM);
    ModelData->prevGamepadOffset.v[0] = 0.5;
    ModelData->prevGamepadOffset.v[1] = 0.5;
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
LUIElement_FrontendCameraMover_ResetCamera
==============
*/
__int64 LUIElement_FrontendCameraMover_ResetCamera(lua_State *const luaVM)
{
  cg_t *LocalClientGlobals; 
  LUIElement *v3; 
  LUIFrontendCameraMoverData *ModelData; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:ResetCamera()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) && cg_t::ms_allocatedCount > 0 && Com_FrontEndScene_IsActive() )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    *(_QWORD *)LocalClientGlobals->currentCameraOffset.v = 0i64;
    *(_QWORD *)&LocalClientGlobals->currentCameraOffset.z = 0i64;
    *(_QWORD *)LocalClientGlobals->currentCameraAngleOffset.v = 0i64;
    LocalClientGlobals->currentCameraAngleOffset.v[2] = 0.0;
    *(_QWORD *)LocalClientGlobals->targetCameraOffset.v = 0i64;
    LocalClientGlobals->targetCameraOffset.v[2] = 0.0;
    *(_QWORD *)&LocalClientGlobals->targetCameraAngleOffset.y = 0i64;
    v3 = LUI_ToElement(luaVM, 1);
    ModelData = LUIElement_FrontendCameraMover_GetModelData(v3, luaVM);
    *(_QWORD *)&ModelData->zoomOffset = 0i64;
    *(_QWORD *)ModelData->prevPosition.v = 0i64;
    ModelData->prevPosition.v[2] = 0.0;
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
LUIElement_FrontendCameraMover_SetZoomWheel
==============
*/
__int64 LUIElement_FrontendCameraMover_SetZoomWheel(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUIFrontendCameraMoverData *ModelData; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetZoomWheel( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    ModelData = LUIElement_FrontendCameraMover_GetModelData(v2, luaVM);
    ModelData->incrementZoomWheel = (float)(ModelData->zoomSpeed / (float)(ModelData->zoomMax - ModelData->zoomMin)) * *(float *)&v3;
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
LUIElement_FrontendCameraMover_SetEnabledHoldZoom
==============
*/
__int64 LUIElement_FrontendCameraMover_SetEnabledHoldZoom(lua_State *const luaVM)
{
  LUIElement *v2; 
  bool v3; 
  LUIFrontendCameraMoverData *ModelData; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetEnabledHoldZoom( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2) > 0;
    ModelData = LUIElement_FrontendCameraMover_GetModelData(v2, luaVM);
    ModelData->enableHoldZoom = v3;
    *(_QWORD *)&ModelData->zoomOffset = 0i64;
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
LUIElement_FrontendCameraMover_SetPanMouse
==============
*/
__int64 LUIElement_FrontendCameraMover_SetPanMouse(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  float v4; 
  double v5; 
  LUIFrontendCameraMoverData *ModelData; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetPanMouse( <value>, <value> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = *(float *)&v3;
    v5 = lui_tonumber32(luaVM, 3);
    ModelData = LUIElement_FrontendCameraMover_GetModelData(v2, luaVM);
    ModelData->mousePanOffset.v[0] = v4;
    ModelData->mousePanOffset.v[1] = *(float *)&v5;
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
LUIElement_FrontendCameraMover_SetRotation
==============
*/
__int64 LUIElement_FrontendCameraMover_SetRotation(lua_State *const luaVM)
{
  double v2; 
  float v3; 
  double v4; 
  float v5; 
  double v6; 
  cg_t *LocalClientGlobals; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetRotation( <x>, <y>, <z> )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && cg_t::ms_allocatedCount > 0 && Com_FrontEndScene_IsActive() )
  {
    v2 = lui_tonumber32(luaVM, 2);
    v3 = *(float *)&v2;
    v4 = lui_tonumber32(luaVM, 3);
    v5 = *(float *)&v4;
    v6 = lui_tonumber32(luaVM, 4);
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    LocalClientGlobals->targetCameraAngleOffset.v[0] = v3;
    LocalClientGlobals->targetCameraAngleOffset.v[1] = v5;
    LocalClientGlobals->targetCameraAngleOffset.v[2] = *(float *)&v6;
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
LUIElement_FrontendCameraMover_GetModelData
==============
*/
LUIFrontendCameraMoverData *LUIElement_FrontendCameraMover_GetModelData(LUIElement *element, lua_State *luaVM)
{
  if ( element->customElementData )
    return (LUIFrontendCameraMoverData *)element->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (LUIFrontendCameraMoverData *)element->customElementData;
}

/*
==============
LUIElement_FrontendCameraMover_InputUpdate
==============
*/
void LUIElement_FrontendCameraMover_InputUpdate(const LocalClientNum_t localClientNum, vec2_t *gamepadOffset, const int *deltaTime, LUIElement *element)
{
  __int64 v6; 
  float *customElementData; 
  LocalClientNum_t ClientFromController; 
  UIInputType lastInputType; 
  double v10; 
  GamepadPhysicalAxis v11; 
  double v12; 
  float *v13; 
  double v14; 
  float v15; 
  double v16; 
  __int128 v18; 
  float v19; 
  int v20; 
  double v24; 
  float v25; 
  cg_t *LocalClientGlobals; 
  float v27; 
  float v28; 
  float v29; 
  double v30; 
  __int64 v31; 

  v6 = localClientNum;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (float *)element->customElementData;
  ClientFromController = CL_Mgr_GetClientFromController(*(_DWORD *)customElementData);
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v31) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, 2) )
      __debugbreak();
  }
  lastInputType = clientUIActives[v6].lastInputType;
  if ( lastInputType )
  {
    if ( (unsigned int)(lastInputType - 1) > 1 )
    {
      *gamepadOffset = 0i64;
      if ( *((_BYTE *)customElementData + 51) )
        v25 = customElementData[22];
      else
        v25 = 0.0;
      v13 = customElementData + 24;
      goto LABEL_19;
    }
    v27 = customElementData[18];
    if ( v27 == 0.0 && customElementData[19] == 0.0 )
    {
      gamepadOffset->v[0] = 0.0;
      v28 = customElementData[17] * 0.75;
    }
    else
    {
      gamepadOffset->v[0] = v27;
      v28 = customElementData[19];
    }
    gamepadOffset->v[1] = v28;
    v13 = customElementData + 24;
    *((_QWORD *)customElementData + 9) = 0i64;
    if ( *((_BYTE *)customElementData + 51) )
    {
      v29 = (float)(*v13 / (float)(customElementData[23] - customElementData[22])) + customElementData[25];
      customElementData[25] = 0.0;
      v30 = I_fclamp(v29, 0.0, 1.0);
      v25 = (float)((float)(1.0 - *(float *)&v30) * customElementData[22]) + (float)(*(float *)&v30 * customElementData[23]);
      goto LABEL_19;
    }
LABEL_18:
    v25 = 0.0;
    goto LABEL_19;
  }
  if ( !*((_BYTE *)customElementData + 54) )
  {
    if ( *((_BYTE *)customElementData + 50) )
    {
      v10 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_LSTICK_X);
      v11 = GPAD_PHYSAXIS_LSTICK_Y;
    }
    else
    {
      v10 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_RSTICK_X);
      v11 = GPAD_PHYSAXIS_RSTICK_Y;
    }
    gamepadOffset->v[0] = *(float *)&v10;
    v12 = CL_GamepadPhysicalAxisValue(ClientFromController, v11);
    gamepadOffset->v[1] = *(float *)&v12;
  }
  v13 = customElementData + 24;
  if ( !*((_BYTE *)customElementData + 51) )
    goto LABEL_18;
  v14 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_LTRIGGER);
  v15 = *(float *)&v14 * -1.0;
  v16 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_RTRIGGER);
  v18 = *(unsigned int *)v13;
  *(float *)&v18 = *v13 / (float)(customElementData[23] - customElementData[22]);
  _XMM7 = v18;
  v19 = *(float *)&v16 + v15;
  v20 = LODWORD(v16);
  _XMM1 = *((unsigned __int8 *)customElementData + 52);
  __asm
  {
    vpcmpeqd xmm3, xmm1, xmm2
    vblendvps xmm0, xmm7, xmm5, xmm3
  }
  customElementData[26] = 0.0;
  if ( COERCE_FLOAT(LODWORD(v15) & _xmm) == 1.0 || COERCE_FLOAT(v20 & _xmm) == 1.0 )
    customElementData[26] = v19 - *(float *)&v18;
  v24 = I_fclamp(*(float *)&_XMM0, 0.0, 1.0);
  v25 = (float)((float)(1.0 - *(float *)&v24) * customElementData[22]) + (float)(*(float *)&v24 * customElementData[23]);
LABEL_19:
  *v13 = v25;
  customElementData[16] = gamepadOffset->v[0];
  customElementData[17] = gamepadOffset->v[1];
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  if ( gamepadOffset->v[0] != 0.0 || gamepadOffset->v[1] != 0.0 )
  {
    customElementData[27] = LocalClientGlobals->currentCameraOffset.v[0];
    customElementData[29] = LocalClientGlobals->currentCameraOffset.v[2];
  }
  if ( customElementData[26] != 0.0 )
    customElementData[28] = LocalClientGlobals->currentCameraOffset.v[1];
}

/*
==============
LUIElement_FrontendCameraMover_Layout
==============
*/
void LUIElement_FrontendCameraMover_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  LUIFrontendCameraMoverData *ModelData; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  bool v14; 
  LUIFrontendCameraMoverData *v15; 
  float v16; 
  float v17; 
  double v18; 
  __m128 v21; 
  float v24; 
  float zoomOffset; 
  float v26; 
  float v27; 
  float v28; 
  clientUIActive_t *LocalClientUIGlobals; 
  const dvar_t *v30; 
  float v31; 
  double v32; 
  float v33; 
  double v34; 
  int deltaTimea; 
  vec2_t gamepadOffset; 
  float v37; 

  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum < cg_t::ms_allocatedCount && Com_FrontEndScene_IsActive() && LUI_CoD_IsInputLocked(localClientNum) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_frontendcameramover.cpp", 245, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    ModelData = LUIElement_FrontendCameraMover_GetModelData(element, luaVM);
    gamepadOffset.v[0] = FLOAT_0_5;
    v14 = !ModelData->disableInput;
    v15 = ModelData;
    gamepadOffset.v[1] = FLOAT_0_5;
    v16 = FLOAT_0_5;
    v17 = FLOAT_0_5;
    if ( v14 )
    {
      LUIElement_FrontendCameraMover_InputUpdate(localClientNum, &gamepadOffset, &deltaTimea, element);
      if ( v15->snapToCenter )
      {
        v16 = (float)(gamepadOffset.v[0] + 1.0) * 0.5;
        v17 = (float)(gamepadOffset.v[1] + 1.0) * 0.5;
      }
      else
      {
        v17 = gamepadOffset.v[1];
        v16 = gamepadOffset.v[0];
      }
    }
    if ( v15->enableRotation )
    {
      v18 = j___libm_sse2_sincosf_(v11, v10, v12, v13);
      _XMM4 = 0i64;
      v21 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v18, (__m128)*(unsigned __int64 *)&v18, 1);
      v21.m128_f32[0] = v21.m128_f32[0] * (float)(*(float *)&v18 * v15->rotationRadius);
      _XMM3 = v21;
      __asm { vunpcklps xmm0, xmm3, xmm0 }
      *(double *)LocalClientGlobals->targetCameraOffset.v = *(double *)&_XMM0;
      __asm { vunpcklps xmm0, xmm4, xmm6 }
      v37 = 0.0;
      LocalClientGlobals->targetCameraOffset.v[2] = 0.0;
      v24 = v37;
      *(double *)LocalClientGlobals->targetCameraAngleOffset.v = *(double *)&_XMM0;
      LocalClientGlobals->targetCameraAngleOffset.v[2] = v24;
    }
    else
    {
      if ( v15->disableInput && v15->enableZoom )
        v15->zoomOffset = (float)(v15->zoomMax + v15->zoomMin) * 0.5;
      zoomOffset = v15->zoomOffset;
      if ( v15->snapToCenter )
      {
        v26 = (float)((float)((float)(1.0 - v16) * v15->leftLimit) + (float)(v16 * v15->rightLimit)) + v15->camScreenOrigin.v[0];
        v27 = (float)((float)((float)(1.0 - v17) * v15->upLimit) + (float)(v17 * v15->downLimit)) + v15->camScreenOrigin.v[1];
      }
      else
      {
        v28 = (float)deltaTime * v15->velocity;
        v27 = (float)(v28 * v15->prevGamepadOffset.v[1]) + v15->prevPosition.v[2];
        v26 = (float)(v28 * v15->prevGamepadOffset.v[0]) + v15->prevPosition.v[0];
        LocalClientUIGlobals = CL_GetLocalClientUIGlobals(localClientNum);
        if ( v15->enableHoldZoom && LocalClientUIGlobals->lastInputType == GAMEPAD )
          zoomOffset = (float)((float)((float)deltaTime * v15->zoomSpeed) * v15->deltaZoomLevel) + v15->prevPosition.v[1];
      }
      if ( v15->enableSway )
        goto LABEL_29;
      v30 = DCONST_DVARBOOL_lui_camera_mover_force_sway;
      if ( !DCONST_DVARBOOL_lui_camera_mover_force_sway && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_camera_mover_force_sway") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      if ( v30->current.enabled )
      {
LABEL_29:
        v31 = sinf_0((float)LocalClientGlobals->time / v15->timeScaledown);
        v26 = v26 + (float)(v31 * v15->amplitudeX);
        v27 = v27 + (float)(v31 * v15->amplitudeY);
      }
      v32 = I_fclamp(COERCE_FLOAT(LODWORD(v26) ^ _xmm), v15->leftLimit, v15->rightLimit);
      v33 = *(float *)&v32;
      I_fclamp(v27, v15->upLimit, v15->downLimit);
      v34 = I_fclamp(zoomOffset, v15->zoomMin, v15->zoomMax);
      LocalClientGlobals->targetCameraOffset.v[0] = (float)((float)(v27 * LocalClientGlobals->refdef.view.axis.m[2].v[0]) + (float)(v33 * LocalClientGlobals->refdef.view.axis.m[1].v[0])) + (float)(*(float *)&v34 * LocalClientGlobals->refdef.view.axis.m[0].v[0]);
      LocalClientGlobals->targetCameraOffset.v[1] = (float)((float)(v27 * LocalClientGlobals->refdef.view.axis.m[2].v[1]) + (float)(v33 * LocalClientGlobals->refdef.view.axis.m[1].v[1])) + (float)(*(float *)&v34 * LocalClientGlobals->refdef.view.axis.m[0].v[1]);
      LocalClientGlobals->targetCameraOffset.v[2] = (float)((float)(v33 * LocalClientGlobals->refdef.view.axis.m[1].v[2]) + (float)(v27 * LocalClientGlobals->refdef.view.axis.m[2].v[2])) + (float)(*(float *)&v34 * LocalClientGlobals->refdef.view.axis.m[0].v[2]);
    }
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupFrontendCameraMover
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupFrontendCameraMover(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupFrontendCameraMover_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupFrontendCameraMover_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupFrontendCameraMover_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  _DWORD *v4; 
  bool v6; 
  bool v7; 
  int v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  bool v12; 
  bool v13; 
  bool v14; 

  if ( j_lua_gettop(luaVM) < 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->layoutFunction = LUIElement_FrontendCameraMover_Layout;
  v3->usageFlags |= 2u;
  LUI_LUIElement_RegisterMethods(v3, luaVM, s_frontendCameraMoverMethods);
  if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_frontendcameramover.cpp", 668, ASSERT_TYPE_ASSERT, "(!self->customElementData)", (const char *)&queryFormat, "!self->customElementData") )
    __debugbreak();
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v3, luaVM);
  v4 = j_lua_newuserdata(luaVM, 0x78ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v3->customElementData = v4;
  memset_0(v4, 0, 0x78ui64);
  _ESI = 0;
  v4[1] = -1063256064;
  v4[2] = 1084227584;
  v4[3] = -1063256064;
  v4[4] = 1084227584;
  v4[7] = 1153138688;
  v4[8] = 1050253722;
  v4[9] = 1053609165;
  v4[5] = -1048576000;
  v4[6] = 1098907648;
  *((_QWORD *)v4 + 7) = 0i64;
  *(_QWORD *)(v4 + 21) = 1077936128i64;
  v4[11] = 1077936128;
  v4[23] = 1103626240;
  *((_QWORD *)v4 + 8) = 0i64;
  *(_QWORD *)(v4 + 27) = 0i64;
  v4[29] = 0;
  j_lua_getfield(luaVM, 2, "controllerIndex");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
    __asm { vcvttsd2si esi, xmm0 }
  }
  *v4 = _ESI;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "enableZoom");
  v6 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v4 + 51) = v6;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "enableHoldZoom");
  v7 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v4 + 52) = v7;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "enableRotation");
  if ( j_lua_type(luaVM, -1) == 1 )
  {
    v8 = j_lua_toboolean(luaVM, -1);
    v4[10] = 1128529920;
    v9 = v8 > 0;
  }
  else
  {
    v9 = 0;
  }
  *((_BYTE *)v4 + 49) = v9;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "enableSway");
  v10 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v4 + 48) = v10;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useLeftStick");
  v11 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v4 + 50) = v11;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "snapToCenter");
  v12 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v4 + 80) = v12;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "disableInput");
  v13 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v4 + 53) = v13;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "disableStick");
  v14 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v4 + 54) = v14;
  j_lua_settop(luaVM, -2);
  return 0i64;
}

