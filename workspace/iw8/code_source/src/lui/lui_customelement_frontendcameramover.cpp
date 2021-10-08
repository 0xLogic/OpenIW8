/*
==============
LUIElement_FrontendCameraMover_SetLimits
==============
*/
__int64 LUIElement_FrontendCameraMover_SetLimits(lua_State *const luaVM)
{
  LUIElement *v7; 
  unsigned int v17; 

  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: element:SetLimits( <leftLimit>, <rightLimit>, <upLimit>, <downLimit> )");
  if ( j_lua_gettop(luaVM) == 5 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isnumber(luaVM, 5) )
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmovaps [rsp+68h+var_28], xmm7
      vmovaps [rsp+68h+var_38], xmm8
      vmovaps [rsp+68h+var_48], xmm9
    }
    v7 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm9, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_FrontendCameraMover_GetModelData(v7, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+4], xmm9
      vmovaps xmm9, [rsp+68h+var_48]
      vmovss  dword ptr [rax+8], xmm8
      vmovaps xmm8, [rsp+68h+var_38]
      vmovss  dword ptr [rax+0Ch], xmm7
      vmovaps xmm7, [rsp+68h+var_28]
      vmovss  dword ptr [rax+10h], xmm6
      vmovaps xmm6, [rsp+68h+var_18]
    }
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
LUIElement_FrontendCameraMover_SetSwayValues
==============
*/
__int64 LUIElement_FrontendCameraMover_SetSwayValues(lua_State *const luaVM)
{
  LUIElement *v6; 
  unsigned int v20; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetSwayValues( <timeScaledown>, <amplitudeX>, <amplitudeY> )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vmovaps [rsp+58h+var_28], xmm7
      vmovaps [rsp+58h+var_38], xmm8
    }
    v6 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm
    {
      vmovss  xmm2, cs:__real@459c4000; max
      vmovss  xmm1, cs:__real@3f800000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm
    {
      vmovss  xmm2, cs:__real@42c80000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm
    {
      vmovss  xmm2, cs:__real@42c80000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_FrontendCameraMover_GetModelData(v6, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+1Ch], xmm8
      vmovaps xmm8, [rsp+58h+var_38]
      vmovss  dword ptr [rax+20h], xmm7
      vmovaps xmm7, [rsp+58h+var_28]
      vmovss  dword ptr [rax+24h], xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v20 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v20);
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
  LUIElement *v5; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetScreenOrigin( <x>, <y> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vmovaps [rsp+48h+var_28], xmm7
    }
    v5 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_FrontendCameraMover_GetModelData(v5, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+38h], xmm7
      vmovaps xmm7, [rsp+48h+var_28]
      vmovss  dword ptr [rax+3Ch], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
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
LUIElement_FrontendCameraMover_SetVelocity
==============
*/
__int64 LUIElement_FrontendCameraMover_SetVelocity(lua_State *const luaVM)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetVelocity( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_FrontendCameraMover_GetModelData(v4, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+54h], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
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
LUIElement_FrontendCameraMover_SetZoomSpeed
==============
*/
__int64 LUIElement_FrontendCameraMover_SetZoomSpeed(lua_State *const luaVM)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetZoomSpeed( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_FrontendCameraMover_GetModelData(v4, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+2Ch], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
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
LUIElement_FrontendCameraMover_SetMinZoom
==============
*/
__int64 LUIElement_FrontendCameraMover_SetMinZoom(lua_State *const luaVM)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetMinZoom( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_FrontendCameraMover_GetModelData(v4, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+58h], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
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
LUIElement_FrontendCameraMover_SetMaxZoom
==============
*/
__int64 LUIElement_FrontendCameraMover_SetMaxZoom(lua_State *const luaVM)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetMaxZoom( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_FrontendCameraMover_GetModelData(v4, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+5Ch], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
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
LUIElement_FrontendCameraMover_SetRotationRadius
==============
*/
__int64 LUIElement_FrontendCameraMover_SetRotationRadius(lua_State *const luaVM)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetRoationRadius( <radius> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_FrontendCameraMover_GetModelData(v4, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+28h], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
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
  LUIElement *v4; 
  unsigned int v13; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetZoomWheel( <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_FrontendCameraMover_GetModelData(v4, luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rax+5Ch]
      vsubss  xmm3, xmm1, dword ptr [rax+58h]
      vmovss  xmm2, dword ptr [rax+2Ch]
      vdivss  xmm3, xmm2, xmm3
      vmulss  xmm0, xmm3, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
      vmovss  dword ptr [rax+64h], xmm0
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v13 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v13);
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
  LUIElement *v5; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetPanMouse( <value>, <value> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vmovaps [rsp+48h+var_28], xmm7
    }
    v5 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_FrontendCameraMover_GetModelData(v5, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+48h], xmm7
      vmovaps xmm7, [rsp+48h+var_28]
      vmovss  dword ptr [rax+4Ch], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
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
LUIElement_FrontendCameraMover_SetRotation
==============
*/
__int64 LUIElement_FrontendCameraMover_SetRotation(lua_State *const luaVM)
{
  unsigned int v13; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetRotation( <x>, <y>, <z> )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && cg_t::ms_allocatedCount > 0 && Com_FrontEndScene_IsActive() )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vmovaps [rsp+58h+var_28], xmm7
      vmovaps [rsp+58h+var_38], xmm8
    }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    __asm
    {
      vmovss  dword ptr [rax+17FE0h], xmm8
      vmovaps xmm8, [rsp+58h+var_38]
      vmovss  dword ptr [rax+17FE4h], xmm7
      vmovaps xmm7, [rsp+58h+var_28]
      vmovss  dword ptr [rax+17FE8h], xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v13 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v13);
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
  __int64 v12; 
  LocalClientNum_t ClientFromController; 
  UIInputType lastInputType; 
  GamepadPhysicalAxis v16; 
  bool v44; 
  cg_t *LocalClientGlobals; 
  unsigned int v48; 
  __int64 v62; 
  void *retaddr; 

  _RAX = &retaddr;
  v44 = element->customElementData == NULL;
  _RDI = gamepadOffset;
  __asm { vmovaps xmmword ptr [rax-48h], xmm7 }
  v12 = localClientNum;
  if ( v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RBX = (const int *)element->customElementData;
  ClientFromController = CL_Mgr_GetClientFromController(*_RBX);
  if ( (unsigned int)v12 >= 2 )
  {
    LODWORD(v62) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v62, 2) )
      __debugbreak();
  }
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  lastInputType = clientUIActives[v12].lastInputType;
  if ( lastInputType == GAMEPAD )
  {
    if ( !*((_BYTE *)_RBX + 54) )
    {
      if ( *((_BYTE *)_RBX + 50) )
      {
        *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_LSTICK_X);
        v16 = GPAD_PHYSAXIS_LSTICK_Y;
      }
      else
      {
        *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_RSTICK_X);
        v16 = GPAD_PHYSAXIS_RSTICK_Y;
      }
      __asm { vmovss  dword ptr [rdi], xmm0 }
      *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(ClientFromController, v16);
      __asm { vmovss  dword ptr [rdi+4], xmm0 }
    }
    _RSI = (char *)(_RBX + 24);
    if ( *((_BYTE *)_RBX + 51) )
    {
      __asm { vmovaps [rsp+0A8h+var_58], xmm8 }
      *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_LTRIGGER);
      __asm { vmulss  xmm6, xmm0, cs:__real@bf800000 }
      *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(ClientFromController, GPAD_PHYSAXIS_RTRIGGER);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+5Ch]
        vsubss  xmm3, xmm1, dword ptr [rbx+58h]
        vmovss  xmm2, dword ptr [rsi]
      }
      _EAX = *((unsigned __int8 *)_RBX + 52);
      _ECX = 0;
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vdivss  xmm7, xmm2, xmm3
        vaddss  xmm5, xmm0, xmm6
        vmovaps xmm4, xmm0
        vmovd   xmm2, ecx
        vmovd   xmm1, eax
        vpcmpeqd xmm3, xmm1, xmm2
        vblendvps xmm0, xmm7, xmm5, xmm3
        vmovss  [rsp+0A8h+var_68], xmm0
        vmovss  xmm0, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm6, xmm6, xmm0
        vucomiss xmm6, xmm8
      }
      *((_DWORD *)_RBX + 26) = 0;
      __asm
      {
        vsubss  xmm0, xmm5, xmm7
        vmovss  dword ptr [rbx+68h], xmm0
        vmovss  xmm0, [rsp+0A8h+var_68]; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
        vxorps  xmm7, xmm7, xmm7
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm8, xmm0
        vmulss  xmm2, xmm1, dword ptr [rbx+58h]
        vmulss  xmm0, xmm0, dword ptr [rbx+5Ch]
        vmovaps xmm8, [rsp+0A8h+var_58]
        vaddss  xmm1, xmm2, xmm0
      }
      goto LABEL_17;
    }
    __asm { vxorps  xmm7, xmm7, xmm7 }
LABEL_16:
    __asm { vxorps  xmm1, xmm1, xmm1 }
    goto LABEL_17;
  }
  v48 = lastInputType - 1;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( v48 <= 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+48h]
      vucomiss xmm0, xmm7
    }
    if ( v48 == 1 )
    {
      __asm { vucomiss xmm7, dword ptr [rbx+4Ch] }
      _RDI->v[0] = 0.0;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+44h]
        vmulss  xmm1, xmm0, cs:__real@3f400000
      }
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr [rbx+4Ch]
      }
    }
    __asm { vmovss  dword ptr [rdi+4], xmm1 }
    _RSI = (char *)(_RBX + 24);
    *((_QWORD *)_RBX + 9) = 0i64;
    if ( *((_BYTE *)_RBX + 51) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+5Ch]
        vsubss  xmm2, xmm0, dword ptr [rbx+58h]
        vmovss  xmm1, dword ptr [rsi]
        vmovss  xmm6, cs:__real@3f800000
        vdivss  xmm2, xmm1, xmm2
        vaddss  xmm0, xmm2, dword ptr [rbx+64h]; val
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *((_DWORD *)_RBX + 25) = 0;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vmulss  xmm2, xmm1, dword ptr [rbx+58h]
        vmulss  xmm0, xmm0, dword ptr [rbx+5Ch]
        vaddss  xmm1, xmm2, xmm0
      }
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  *_RDI = 0i64;
  if ( *((_BYTE *)_RBX + 51) )
    __asm { vmovss  xmm1, dword ptr [rbx+58h] }
  else
    __asm { vxorps  xmm1, xmm1, xmm1 }
  _RSI = (char *)(_RBX + 24);
LABEL_17:
  __asm { vmovss  dword ptr [rsi], xmm1 }
  *((_DWORD *)_RBX + 16) = LODWORD(_RDI->v[0]);
  *((_DWORD *)_RBX + 17) = LODWORD(_RDI->v[1]);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
  __asm
  {
    vucomiss xmm7, dword ptr [rdi]
    vmovaps xmm6, [rsp+0A8h+var_38]
  }
  if ( !v44 )
    goto LABEL_19;
  __asm { vucomiss xmm7, dword ptr [rdi+4] }
  if ( !v44 )
  {
LABEL_19:
    *((_DWORD *)_RBX + 27) = LODWORD(LocalClientGlobals->currentCameraOffset.v[0]);
    *((_DWORD *)_RBX + 29) = LODWORD(LocalClientGlobals->currentCameraOffset.v[2]);
  }
  __asm
  {
    vucomiss xmm7, dword ptr [rbx+68h]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
  if ( !v44 )
    *((_DWORD *)_RBX + 28) = LODWORD(LocalClientGlobals->currentCameraOffset.v[1]);
}

/*
==============
LUIElement_FrontendCameraMover_Layout
==============
*/
void LUIElement_FrontendCameraMover_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  LUIFrontendCameraMoverData *ModelData; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  bool v22; 
  int v39; 
  int v43; 
  clientUIActive_t *LocalClientUIGlobals; 
  const dvar_t *v64; 
  int deltaTimea; 
  vec2_t gamepadOffset; 
  int v106; 

  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum < cg_t::ms_allocatedCount && Com_FrontEndScene_IsActive() && LUI_CoD_IsInputLocked(localClientNum) )
  {
    __asm
    {
      vmovaps [rsp+108h+var_48], xmm6
      vmovaps [rsp+108h+var_58], xmm7
    }
    _RSI = CG_GetLocalClientGlobals(localClientNum);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_frontendcameramover.cpp", 245, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    ModelData = LUIElement_FrontendCameraMover_GetModelData(element, luaVM);
    __asm
    {
      vmovss  xmm6, cs:__real@3f000000
      vmovss  xmm7, cs:__real@3f800000
      vmovss  dword ptr [rsp+108h+gamepadOffset], xmm6
    }
    v22 = !ModelData->disableInput;
    _RBX = ModelData;
    __asm
    {
      vmovss  dword ptr [rsp+108h+gamepadOffset+4], xmm6
      vmovaps xmm3, xmm6
      vmovaps xmm4, xmm6
    }
    if ( v22 )
    {
      LUIElement_FrontendCameraMover_InputUpdate(localClientNum, &gamepadOffset, &deltaTimea, element);
      if ( _RBX->snapToCenter )
      {
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsp+108h+gamepadOffset]
          vaddss  xmm0, xmm7, dword ptr [rsp+108h+gamepadOffset+4]
          vmulss  xmm3, xmm1, xmm6
          vmulss  xmm4, xmm0, xmm6
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+108h+gamepadOffset+4]
          vmovss  xmm3, dword ptr [rsp+108h+gamepadOffset]
        }
      }
    }
    if ( _RBX->enableRotation )
    {
      __asm
      {
        vmulss  xmm1, xmm3, dword ptr [rbx+18h]
        vsubss  xmm0, xmm7, xmm3
        vmulss  xmm2, xmm0, dword ptr [rbx+14h]
        vaddss  xmm6, xmm2, xmm1
        vmulss  xmm0, xmm6, cs:__real@3c8efa35
      }
      *(double *)&_XMM0 = j___libm_sse2_sincosf_(v17, v16, v18, v19);
      __asm
      {
        vmulss  xmm2, xmm0, dword ptr [rbx+28h]
        vshufps xmm1, xmm0, xmm0, 1
        vmulss  xmm0, xmm2, xmm0
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vxorps  xmm4, xmm4, xmm4
        vmovss  [rsp+108h+var_B8], xmm4
      }
      v39 = v106;
      __asm
      {
        vmulss  xmm3, xmm1, xmm2
        vunpcklps xmm0, xmm3, xmm0
        vmovsd  qword ptr [rsi+17FC8h], xmm0
        vunpcklps xmm0, xmm4, xmm6
        vmovss  [rsp+108h+var_B8], xmm4
      }
      LODWORD(_RSI->targetCameraOffset.v[2]) = v39;
      v43 = v106;
      __asm { vmovsd  qword ptr [rsi+17FE0h], xmm0 }
      LODWORD(_RSI->targetCameraAngleOffset.v[2]) = v43;
    }
    else
    {
      v22 = !_RBX->disableInput;
      __asm
      {
        vmovaps [rsp+108h+var_68], xmm8
        vmovaps [rsp+108h+var_78], xmm9
        vmovaps [rsp+108h+var_88], xmm10
        vmovaps [rsp+108h+var_98], xmm11
        vmovaps [rsp+108h+var_A8], xmm12
      }
      if ( !v22 && _RBX->enableZoom )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+5Ch]
          vaddss  xmm1, xmm0, dword ptr [rbx+58h]
          vmulss  xmm2, xmm1, xmm6
          vmovss  dword ptr [rbx+60h], xmm2
        }
      }
      __asm { vmovss  xmm9, dword ptr [rbx+60h] }
      if ( _RBX->snapToCenter )
      {
        __asm
        {
          vmulss  xmm1, xmm3, dword ptr [rbx+8]
          vsubss  xmm0, xmm7, xmm3
          vmulss  xmm2, xmm0, dword ptr [rbx+4]
          vaddss  xmm0, xmm2, xmm1
          vaddss  xmm6, xmm0, dword ptr [rbx+38h]
          vmulss  xmm0, xmm4, dword ptr [rbx+10h]
          vsubss  xmm1, xmm7, xmm4
          vmulss  xmm2, xmm1, dword ptr [rbx+0Ch]
          vaddss  xmm1, xmm2, xmm0
          vaddss  xmm7, xmm1, dword ptr [rbx+3Ch]
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm8, xmm8, xmm8
          vcvtsi2ss xmm8, xmm8, r15d
          vmulss  xmm1, xmm8, dword ptr [rbx+54h]
          vmulss  xmm0, xmm1, dword ptr [rbx+40h]
          vmulss  xmm1, xmm1, dword ptr [rbx+44h]
          vaddss  xmm7, xmm1, dword ptr [rbx+74h]
          vaddss  xmm6, xmm0, dword ptr [rbx+6Ch]
        }
        LocalClientUIGlobals = CL_GetLocalClientUIGlobals(localClientNum);
        if ( _RBX->enableHoldZoom && LocalClientUIGlobals->lastInputType == GAMEPAD )
        {
          __asm
          {
            vmulss  xmm0, xmm8, dword ptr [rbx+2Ch]
            vmulss  xmm1, xmm0, dword ptr [rbx+68h]
            vaddss  xmm9, xmm1, dword ptr [rbx+70h]
          }
        }
      }
      if ( _RBX->enableSway )
        goto LABEL_29;
      v64 = DCONST_DVARBOOL_lui_camera_mover_force_sway;
      if ( !DCONST_DVARBOOL_lui_camera_mover_force_sway && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_camera_mover_force_sway") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v64);
      if ( v64->current.enabled )
      {
LABEL_29:
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rsi+65ECh]
          vdivss  xmm0, xmm0, dword ptr [rbx+1Ch]; X
        }
        *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
        __asm
        {
          vmulss  xmm1, xmm0, dword ptr [rbx+20h]
          vmulss  xmm2, xmm0, dword ptr [rbx+24h]
          vaddss  xmm6, xmm6, xmm1
          vaddss  xmm7, xmm7, xmm2
        }
      }
      __asm
      {
        vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000; val
        vmovss  xmm2, dword ptr [rbx+8]; max
        vmovss  xmm1, dword ptr [rbx+4]; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+10h]; max
        vmovss  xmm1, dword ptr [rbx+0Ch]; min
        vmovaps xmm12, xmm0
        vmovaps xmm0, xmm7; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+5Ch]; max
        vmovss  xmm1, dword ptr [rbx+58h]; min
        vmovaps xmm11, xmm0
        vmovaps xmm0, xmm9; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm2, xmm11, dword ptr [rsi+695Ch]
        vmulss  xmm1, xmm12, dword ptr [rsi+6950h]
        vmovaps xmm9, [rsp+108h+var_78]
        vmovaps xmm8, [rsp+108h+var_68]
        vaddss  xmm3, xmm2, xmm1
        vmovaps xmm10, xmm0
        vmulss  xmm0, xmm0, dword ptr [rsi+6944h]
        vaddss  xmm1, xmm3, xmm0
        vmovss  dword ptr [rsi+17FC8h], xmm1
        vmulss  xmm2, xmm11, dword ptr [rsi+6960h]
        vmulss  xmm0, xmm12, dword ptr [rsi+6954h]
        vmulss  xmm1, xmm10, dword ptr [rsi+6948h]
        vaddss  xmm3, xmm2, xmm0
        vaddss  xmm2, xmm3, xmm1
        vmovss  dword ptr [rsi+17FCCh], xmm2
        vmulss  xmm4, xmm12, dword ptr [rsi+6958h]
        vmulss  xmm0, xmm11, dword ptr [rsi+6964h]
        vmulss  xmm1, xmm10, dword ptr [rsi+694Ch]
        vmovaps xmm12, [rsp+108h+var_A8]
        vmovaps xmm11, [rsp+108h+var_98]
        vmovaps xmm10, [rsp+108h+var_88]
        vaddss  xmm2, xmm4, xmm0
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsi+17FD0h], xmm2
      }
    }
    __asm
    {
      vmovaps xmm6, [rsp+108h+var_48]
      vmovaps xmm7, [rsp+108h+var_58]
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

