/*
==============
LUIElement_Anchored_SnapScreenPositionToEdges
==============
*/

bool __fastcall LUIElement_Anchored_SnapScreenPositionToEdges(const LocalClientNum_t localClientNum, const float snapRadius, const float elementwWidth, const float elementHeight, const float snapToEdgesSmoothingRadius, const vec2_t *screenPosition, vec2_t *outSnappedScreenPosition, const bool *snapToLocation, const vec2_t *screenSnapOffset)
{
  return ?LUIElement_Anchored_SnapScreenPositionToEdges@@YA_NW4LocalClientNum_t@@MMMMAEBTvec2_t@@AEAT2@AEB_N1@Z(localClientNum, snapRadius, elementwWidth, elementHeight, snapToEdgesSmoothingRadius, screenPosition, outSnappedScreenPosition, snapToLocation, screenSnapOffset);
}

/*
==============
LUIElement_Anchored_GetEntityNum
==============
*/
__int64 LUIElement_Anchored_GetEntityNum(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  LUIAnchor *AnchorData; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetEntityNum()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) && (v3 = LUI_ToElement(luaVM, 1), AnchorData = LUIElement_Anchored_GetAnchorData(v3, luaVM), AnchorData->attachType == ATTACH_ENTITY) )
    j_lua_pushinteger(luaVM, AnchorData->entityNum);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUIElement_Anchored_SetEntityNum
==============
*/
__int64 LUIElement_Anchored_SetEntityNum(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIAnchor *AnchorData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetEntityNum( entityNum )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && (j_lua_isnumber(luaVM, 2) || !j_lua_type(luaVM, 2)) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    if ( j_lua_isnumber(luaVM, 2) )
    {
      AnchorData->entityNum = lui_tointeger32(luaVM, 2);
      AnchorData->attachType = ATTACH_ENTITY;
    }
    else
    {
      AnchorData->attachType = ATTACH_WORLD;
      AnchorData->entityNum = 2047;
    }
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
LUIElement_Anchored_SetEntityTag
==============
*/
__int64 LUIElement_Anchored_SetEntityTag(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Anchored_SetEntityTag_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Anchored_AttachToViewModel
==============
*/
__int64 LUIElement_Anchored_AttachToViewModel(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIAnchor *AnchorData; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:AttachToViewModel( usesScopeStencil )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    v4 = j_lua_toboolean(luaVM, 2);
    AnchorData->entityNum = 2047;
    AnchorData->attachType = ATTACH_VIEWMODEL;
    if ( v4 )
      v2->usageFlags |= 8u;
    v2->usageFlags |= 4u;
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
LUIElement_Anchored_AttachToReticleViewModel
==============
*/
__int64 LUIElement_Anchored_AttachToReticleViewModel(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIAnchor *AnchorData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:AttachToReticleViewModel()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    AnchorData->entityNum = 2047;
    AnchorData->attachType = ATTACH_VIEWMODEL_RETICLE;
    v2->usageFlags |= 8u;
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
LUIElement_Anchored_AttachToScriptable
==============
*/
__int64 LUIElement_Anchored_AttachToScriptable(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIAnchor *AnchorData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:AttachToScriptable( scriptableIndex )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && (j_lua_isnumber(luaVM, 2) || !j_lua_type(luaVM, 2)) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    if ( j_lua_isnumber(luaVM, 2) )
    {
      AnchorData->entityNum = lui_tointeger32(luaVM, 2);
      AnchorData->attachType = ATTACH_SCRIPTABLE;
    }
    else
    {
      AnchorData->attachType = ATTACH_WORLD;
      AnchorData->entityNum = 2047;
    }
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
LUIElement_Anchored_AttachToObjective
==============
*/
__int64 LUIElement_Anchored_AttachToObjective(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIAnchor *AnchorData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:AttachToObjective( objectiveIndex )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && (j_lua_isnumber(luaVM, 2) || !j_lua_type(luaVM, 2)) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    if ( j_lua_isnumber(luaVM, 2) )
    {
      AnchorData->entityNum = lui_tointeger32(luaVM, 2);
      AnchorData->attachType = ATTACH_OBJECTIVE;
    }
    else
    {
      AnchorData->attachType = ATTACH_WORLD;
      AnchorData->entityNum = 2047;
    }
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
LUIElement_Anchored_SetAnchoringAmount
==============
*/
__int64 LUIElement_Anchored_SetAnchoringAmount(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Anchored_SetAnchoringAmount_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Anchored_GetTagOffsets
==============
*/
__int64 LUIElement_Anchored_GetTagOffsets(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v11; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetTagOffsets()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) && (v3 = LUI_ToElement(luaVM, 1), (_RSI = LUIElement_Anchored_GetAnchorData(v3, luaVM)) != NULL) )
  {
    j_lua_createtable(luaVM, 0, 3);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+84h]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("x", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+88h]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("y", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+8Ch]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("z", *(long double *)&_XMM1, LUI_luaVM);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v11);
  }
  return v2;
}

/*
==============
LUIElement_Anchored_SetTagOffsets
==============
*/
__int64 LUIElement_Anchored_SetTagOffsets(lua_State *const luaVM)
{
  LUIElement *v6; 
  unsigned int v14; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetTagOffsets( x, y, z )");
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
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_Anchored_GetAnchorData(v6, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+84h], xmm8
      vmovaps xmm8, [rsp+58h+var_38]
      vmovss  dword ptr [rax+88h], xmm7
      vmovaps xmm7, [rsp+58h+var_28]
      vmovss  dword ptr [rax+8Ch], xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v14 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v14);
  }
  return 0i64;
}

/*
==============
LUIElement_Anchored_SetWorldSpacePosition
==============
*/
__int64 LUIElement_Anchored_SetWorldSpacePosition(lua_State *const luaVM)
{
  LUIElement *v6; 
  unsigned int v14; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetWorldSpacePosition( x, y, z )");
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
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_Anchored_GetAnchorData(v6, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+78h], xmm8
      vmovaps xmm8, [rsp+58h+var_38]
      vmovss  dword ptr [rax+7Ch], xmm7
      vmovaps xmm7, [rsp+58h+var_28]
      vmovss  dword ptr [rax+80h], xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v14 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v14);
  }
  return 0i64;
}

/*
==============
LUIElement_Anchored_GetScreenOffsets
==============
*/
__int64 LUIElement_Anchored_GetScreenOffsets(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v9; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetScreenOffsets()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) && (v3 = LUI_ToElement(luaVM, 1), (_RSI = LUIElement_Anchored_GetAnchorData(v3, luaVM)) != NULL) )
  {
    j_lua_createtable(luaVM, 0, 2);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+0A8h]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("x", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+0ACh]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("y", *(long double *)&_XMM1, LUI_luaVM);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v9);
  }
  return v2;
}

/*
==============
LUIElement_Anchored_SetScreenOffsets
==============
*/
__int64 LUIElement_Anchored_SetScreenOffsets(lua_State *const luaVM)
{
  LUIElement *v5; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetScreenOffsets( x, y )");
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
    _RAX = LUIElement_Anchored_GetAnchorData(v5, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+0A8h], xmm7
      vmovaps xmm7, [rsp+48h+var_28]
      vmovss  dword ptr [rax+0ACh], xmm6
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
LUIElement_Anchored_SetScreenSnapOffsets
==============
*/
__int64 LUIElement_Anchored_SetScreenSnapOffsets(lua_State *const luaVM)
{
  LUIElement *v5; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetScreenSnapOffsets( x, y )");
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
    _RAX = LUIElement_Anchored_GetAnchorData(v5, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+0B0h], xmm7
      vmovaps xmm7, [rsp+48h+var_28]
      vmovss  dword ptr [rax+0B4h], xmm6
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
LUIElement_Anchored_SetSnapToLocation
==============
*/
__int64 LUIElement_Anchored_SetSnapToLocation(lua_State *const luaVM)
{
  LUIElement *v2; 
  bool v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetSnapToLocation( bool )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2) != 0;
    LUIElement_Anchored_GetAnchorData(v2, luaVM)->snapToLocation = v3;
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
LUIElement_Anchored_SetScreenCenterFadeRadius
==============
*/

__int64 __fastcall LUIElement_Anchored_SetScreenCenterFadeRadius(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v5; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetScreenCenterFadeRadius( radius )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v5 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmaxss  xmm6, xmm0, xmm1
    }
    _RAX = LUIElement_Anchored_GetAnchorData(v5, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+74h], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v10);
  }
  return 0i64;
}

/*
==============
LUIElement_Anchored_Reset
==============
*/
__int64 LUIElement_Anchored_Reset(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIAnchor *AnchorData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:ResetAnchor()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    AnchorData->activeTraceRequest = NULL;
    *(_WORD *)AnchorData->secondaryObstruction = 0;
    AnchorData->primaryObstruction[0] = 0;
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
LUIElement_Anchored_SetSnapRadius
==============
*/

__int64 __fastcall LUIElement_Anchored_SetSnapRadius(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v5; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetSnapRadius( snapRadius )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v5 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmaxss  xmm6, xmm0, xmm1
    }
    _RAX = LUIElement_Anchored_GetAnchorData(v5, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+64h], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v10);
  }
  return 0i64;
}

/*
==============
LUIElement_Anchored_SetAllowDistanceBasedFade
==============
*/
__int64 LUIElement_Anchored_SetAllowDistanceBasedFade(lua_State *const luaVM)
{
  LUIElement *v2; 
  bool v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetAllowDistanceBasedFade( useDistanceBasedFading )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2) != 0;
    LUIElement_Anchored_GetAnchorData(v2, luaVM)->useDistanceBasedFading = v3;
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
LUIElement_Anchored_GetAnchorData
==============
*/
LUIAnchor *LUIElement_Anchored_GetAnchorData(LUIElement *element, lua_State *luaVM)
{
  if ( element->customElementData )
    return (LUIAnchor *)element->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (LUIAnchor *)element->customElementData;
}

/*
==============
LUIElement_Anchored_GetDistanceBasedFadeAlpha
==============
*/
float LUIElement_Anchored_GetDistanceBasedFadeAlpha(LocalClientNum_t localClientNum, const LUIAnchor *const anchorData, const vec3_t *worldPosition)
{
  cg_t *LocalClientGlobals; 
  char v12; 
  char v25; 
  __int64 v44; 
  int v45; 
  vec3_t outOrg; 
  __int64 v47; 
  void *retaddr; 

  _RAX = &retaddr;
  v47 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  if ( !LUIElement_Anchored_UseDistanceBasedFading(localClientNum, anchorData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 854, ASSERT_TYPE_ASSERT, "(LUIElement_Anchored_UseDistanceBasedFading( localClientNum, anchorData ))", (const char *)&queryFormat, "LUIElement_Anchored_UseDistanceBasedFading( localClientNum, anchorData )") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v45 = 2;
    LODWORD(v44) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v44, v45) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 855, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RDI = DVARFLT_lui_objective_fadeStart;
  if ( !DVARFLT_lui_objective_fadeStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_fadeStart") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  _RDI = DVARFLT_lui_objective_fadeEnd;
  if ( !DVARFLT_lui_objective_fadeEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_fadeEnd") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm7, dword ptr [rdi+28h] }
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outOrg]
    vsubss  xmm3, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsp+98h+outOrg+4]
    vsubss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsp+98h+outOrg+8]
    vsubss  xmm4, xmm0, dword ptr [rsi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcomiss xmm7, xmm6
  }
  if ( v12 | v25 )
  {
    __asm
    {
      vcmpltss xmm2, xmm1, xmm7
      vmovss  xmm1, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vblendvps xmm0, xmm0, xmm1, xmm2
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm5, cs:__real@3f800000
      vcomiss xmm1, xmm6
    }
    if ( v12 )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    else
    {
      __asm { vcomiss xmm1, xmm7 }
      if ( v12 )
      {
        __asm
        {
          vsubss  xmm1, xmm1, xmm6
          vsubss  xmm0, xmm7, xmm6
          vdivss  xmm4, xmm1, xmm0
          vmulss  xmm2, xmm4, cs:__real@40000000
          vmovss  xmm1, cs:__real@40400000
          vsubss  xmm3, xmm1, xmm2
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm0, xmm3, xmm0
        }
      }
      else
      {
        __asm { vmovaps xmm0, xmm5 }
      }
    }
    __asm { vsubss  xmm0, xmm5, xmm0 }
  }
  memset(&outOrg, 0, sizeof(outOrg));
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
LUIElement_Anchored_GetObjectiveSettings
==============
*/
const ObjectiveSettings *LUIElement_Anchored_GetObjectiveSettings(const LocalClientNum_t localClientNum, const LUIAnchor *const anchorData)
{
  unsigned int entityNum; 
  int v5; 
  unsigned __int8 v6; 
  __int64 v8; 
  vec3_t out_origin; 

  if ( !anchorData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 611, ASSERT_TYPE_ASSERT, "(anchorData)", (const char *)&queryFormat, "anchorData") )
    __debugbreak();
  entityNum = anchorData->entityNum;
  if ( anchorData->entityNum <= 2048 )
    return 0i64;
  v5 = entityNum & 0x3FFFFF;
  if ( entityNum >> 30 != 1 && anchorData->attachType != ATTACH_SCRIPTABLE )
  {
    LODWORD(v8) = anchorData->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 620, ASSERT_TYPE_ASSERT, "( useClass == USE_CLASS_SCRIPTABLE || anchorData->attachType == LUIAnchorAttachType::ATTACH_SCRIPTABLE )", "Invalid anchor key: entityNum %d, useIndex=%d, useclass=%d, useData=%d", v8, entityNum & 0x3FFFFF, entityNum >> 30, (unsigned __int8)(entityNum >> 22)) )
      __debugbreak();
  }
  if ( !ScriptableCl_GetInstanceInUse(localClientNum, v5) || !ScriptableCl_ObjectiveActiveForInstance(localClientNum, v5) )
    return 0i64;
  v6 = ScriptableCl_ObjectiveGetForInstance(localClientNum, v5);
  return ScriptableCl_ObjectiveGet(localClientNum, v6, &out_origin);
}

/*
==============
LUIElement_Anchored_GetScale
==============
*/
float LUIElement_Anchored_GetScale(const LocalClientNum_t localClientNum, const LUIAnchor *const anchorData, const vec3_t *worldPosition)
{
  cg_t *v9; 
  double v47; 
  int v52; 
  vec3_t outOrg; 
  __int64 v54; 
  void *retaddr; 

  _RAX = &retaddr;
  v54 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RDI = anchorData;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v52 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v52) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 762, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  v9 = _RAX;
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( _RDI->naturalFOV )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+6934h]
      vmulss  xmm0, xmm0, cs:__real@3faaaaab; X
    }
    *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  xmm1, cs:__real@3c0efa36
      vdivss  xmm2, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm7, xmm2, xmm0
    }
  }
  RefdefView_GetOrg(&v9->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outOrg]
    vsubss  xmm2, xmm0, dword ptr [rbp+0]
    vmovss  xmm1, dword ptr [rsp+98h+outOrg+4]
    vsubss  xmm3, xmm1, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rsp+98h+outOrg+8]
    vsubss  xmm4, xmm0, dword ptr [rbp+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
  }
  if ( !_RDI->perspectiveScalingEnabled )
    goto LABEL_15;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( _RDI->perspectiveScalingEnabled )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+4Ch]
      vucomiss xmm2, xmm0
    }
    if ( !_RDI->perspectiveScalingEnabled )
      goto LABEL_14;
    __asm { vcomiss xmm2, xmm0 }
    if ( _RDI->perspectiveScalingEnabled )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+58h]
        vmovss  xmm4, dword ptr [rdi+54h]
        vdivss  xmm0, xmm5, xmm2
        vmulss  xmm1, xmm0, xmm6
        vsubss  xmm3, xmm5, xmm1
        vdivss  xmm2, xmm4, xmm2
        vmulss  xmm0, xmm2, xmm6
        vsubss  xmm1, xmm4, xmm0
        vsubss  xmm3, xmm3, xmm1
        vaddss  xmm2, xmm3, xmm4
      }
    }
    else
    {
LABEL_14:
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+44h]
        vdivss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, dword ptr [rdi+50h]
        vmovss  xmm5, dword ptr [rdi+58h]
      }
    }
  }
  else
  {
LABEL_15:
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+58h]
      vmovaps xmm5, xmm2
    }
  }
  __asm
  {
    vmulss  xmm0, xmm2, xmm7; val
    vmovaps xmm2, xmm5; max
    vmovss  xmm1, dword ptr [rdi+54h]; min
  }
  v47 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  memset(&outOrg, 0, sizeof(outOrg));
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
  return *(float *)&v47;
}

/*
==============
LUIElement_Anchored_GetScreenPosition
==============
*/

__int64 __fastcall LUIElement_Anchored_GetScreenPosition(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, lua_State *luaVM, const dvec3_t *hiPrecisionWorldPosition, const vec3_t *lowPrecisionWorldPosition, float scale, bool roundScreenPos, vec2_t *outAnchorPoint, vec2_t *outTopLeft, vec2_t *outBottomRight)
{
  const ScreenPlacement *ActivePlacement; 
  const GfxViewInfo *ViewInfo; 
  char v61; 
  char v62; 
  char v63; 
  char v68; 
  char v69; 
  const char *v70; 
  _BYTE *customElementData; 
  char v73; 
  bool v74; 
  char v75; 
  const char *v83; 
  unsigned __int8 v107; 
  const ObjectiveSettings *ObjectiveSettings; 
  cg_t *LocalClientGlobals; 
  char v145; 
  char v146; 
  __int64 result; 
  float fmt; 
  vec2_t *screenPosition; 
  vec2_t *outSnappedScreenPosition; 
  bool snapToLocation[8]; 
  vec3_t luaVMa; 
  LUIElementAxisPosition v181; 
  __int64 v182; 
  vec2_t outScreenPos; 
  dvec3_t *worldPos; 
  char v185; 
  void *retaddr; 

  _RAX = &retaddr;
  v182 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  *(_QWORD *)luaVMa.v = luaVM;
  __asm { vmovaps xmm11, xmm2 }
  _R15 = element;
  worldPos = (dvec3_t *)hiPrecisionWorldPosition;
  _R13 = outAnchorPoint;
  _R14 = outTopLeft;
  _R12 = outBottomRight;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 662, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  if ( !_R15->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RSI = (const LUIAnchor *)_R15->customElementData;
  if ( (_R15->currentAnimationState.flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 665, ASSERT_TYPE_ASSERT, "(element->currentAnimationState.flags & ( 1 << 0 ))", (const char *)&queryFormat, "element->currentAnimationState.flags & LUI_ANIMSTATE_INITIALIZED") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rsp+170h+var_108.global], xmm0
    vmovsd  xmm1, qword ptr [r15+10h]
    vmovsd  [rbp+70h+var_F0], xmm1
  }
  *(float *)&_XMM0 = LUI_Measure(&v181);
  __asm
  {
    vmulss  xmm13, xmm0, xmm11
    vmovups xmm0, xmmword ptr [r15+18h]
    vmovups xmmword ptr [rsp+170h+var_108.global], xmm0
    vmovsd  xmm1, qword ptr [r15+28h]
    vmovsd  [rbp+70h+var_F0], xmm1
  }
  *(float *)&_XMM0 = LUI_Measure(&v181);
  __asm { vmulss  xmm14, xmm0, xmm11 }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  CG_WorldPosToScreenPosRealForScenePrecise(localClientNum, ActivePlacement, worldPos, _RSI->attachType == ATTACH_VIEWMODEL_RETICLE, &outScreenPos);
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+70h+outScreenPos]
    vmovss  dword ptr [r13+0], xmm2
    vmovss  xmm3, dword ptr [rbp+70h+outScreenPos+4]
    vmovss  dword ptr [r13+4], xmm3
    vmovss  xmm10, [rbp+70h+scale]
    vmulss  xmm0, xmm10, dword ptr [rsi+0A8h]
    vmulss  xmm1, xmm10, dword ptr [rsi+0ACh]
    vmulss  xmm0, xmm0, xmm11
    vaddss  xmm6, xmm0, xmm2
    vmulss  xmm1, xmm1, xmm11
    vaddss  xmm7, xmm1, xmm3
    vmovss  xmm0, dword ptr [r15+0Ch]
    vaddss  xmm2, xmm0, dword ptr [r15+8]
    vmovss  xmm12, cs:__real@3f000000
    vmulss  xmm1, xmm2, xmm12
    vmulss  xmm4, xmm1, xmm11
    vmovss  xmm0, dword ptr [r15+24h]
    vaddss  xmm2, xmm0, dword ptr [r15+20h]
    vmulss  xmm1, xmm2, xmm12
    vmulss  xmm5, xmm1, xmm11
    vsubss  xmm0, xmm6, xmm4
    vmulss  xmm1, xmm0, dword ptr [r15+48h]
    vaddss  xmm2, xmm1, xmm4
    vmovss  dword ptr [rbp+70h+outScreenPos], xmm2
    vsubss  xmm0, xmm7, xmm5
    vmulss  xmm1, xmm0, dword ptr [r15+48h]
    vaddss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rbp+70h+outScreenPos+4], xmm2
  }
  if ( _RSI->applyLensDistortion )
  {
    ViewInfo = LUI_GetViewInfo();
    if ( ViewInfo )
      R_ScopeDistortionTransform(ViewInfo, &outScreenPos, &outScreenPos);
  }
  v61 = _RSI->onScreenStatus[0];
  _RAX = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmovss  xmm1, dword ptr [rbp+70h+outScreenPos]
    vcomiss xmm1, dword ptr [rax+20h]
  }
  if ( !v62 )
    goto LABEL_21;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+70h+outScreenPos+4]
    vcomiss xmm0, dword ptr [rax+24h]
  }
  if ( !v62 )
    goto LABEL_21;
  __asm { vcomiss xmm1, xmm9 }
  if ( v62 | v63 )
    goto LABEL_21;
  __asm { vcomiss xmm0, xmm9 }
  if ( v62 | v63 )
LABEL_21:
    v68 = 0;
  else
    v68 = 1;
  v69 = (v68 ^ 1) + 1;
  _RSI->onScreenStatus[0] = v69;
  if ( _RSI->sendScreenEvents && v61 != v69 )
  {
    v70 = "anchor_off_screen";
    if ( v68 )
      v70 = "anchor_on_screen";
    if ( LUI_BeginEventWithElement(localClientNum, _R15, v70, luaVM) )
      LUI_EndEventWithElement(luaVM);
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(outSnappedScreenPosition) = 2;
    LODWORD(screenPosition) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", screenPosition, outSnappedScreenPosition) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 248, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_R15->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = _R15->customElementData;
  v73 = customElementData[310];
  snapToLocation[0] = v73;
  if ( _RDI->dualViewScope )
  {
    v74 = !_RDI->scopeBoundingCircleValid;
    if ( _RDI->scopeBoundingCircleValid )
      goto LABEL_42;
    _RDI->scopeBoundingCircleValid = CG_FetchScreenSpaceScopeBoundingCircle(localClientNum, &_RDI->scopeBoundingCircle);
    v73 = snapToLocation[0];
  }
  v74 = !_RDI->scopeBoundingCircleValid;
  if ( !_RDI->scopeBoundingCircleValid )
  {
    customElementData[310] = 1;
    v75 = 1;
    goto LABEL_45;
  }
LABEL_42:
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0B535Ch]
    vsubss  xmm4, xmm0, dword ptr [rbp+70h+outScreenPos]
    vmovss  xmm1, dword ptr [rdi+0B5360h]
    vsubss  xmm2, xmm1, dword ptr [rbp+70h+outScreenPos+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vcomiss xmm1, dword ptr [rdi+0B5364h]
  }
  if ( v74 )
  {
    customElementData[310] = 2;
    v75 = 2;
  }
  else
  {
    customElementData[310] = 3;
    v75 = 3;
  }
LABEL_45:
  if ( customElementData[311] == 1 && v73 != v75 )
  {
    switch ( v75 )
    {
      case 1:
        v83 = "anchor_scope_off";
        break;
      case 2:
        v83 = "anchor_within_scope_frame";
        break;
      case 3:
        v83 = "anchor_outside_scope_frame";
        break;
      default:
        goto LABEL_55;
    }
    if ( LUI_BeginEventWithElement(localClientNum, _R15, v83, *(lua_State **)luaVMa.v) )
      LUI_EndEventWithElement(*(lua_State **)luaVMa.v);
  }
LABEL_55:
  if ( _RSI->snapToScopeEdges && _RSI->scopeStatus[0] == 3 )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(outSnappedScreenPosition) = 2;
      LODWORD(screenPosition) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", screenPosition, outSnappedScreenPosition) )
        __debugbreak();
    }
    if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 287, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
      __debugbreak();
    _RDI = CG_GetLocalClientGlobals(localClientNum);
    if ( !_RDI->scopeBoundingCircleValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 289, ASSERT_TYPE_ASSERT, "(cgameGlob->scopeBoundingCircleValid)", (const char *)&queryFormat, "cgameGlob->scopeBoundingCircleValid") )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+0B535Ch]
      vmovss  xmm7, dword ptr [rbp+70h+outScreenPos]
      vsubss  xmm1, xmm4, xmm7
      vmovss  xmm5, dword ptr [rdi+0B5360h]
      vmovss  xmm6, dword ptr [rbp+70h+outScreenPos+4]
      vsubss  xmm0, xmm5, xmm6
      vmulss  xmm1, xmm1, xmm1
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm1, dword ptr [rdi+0B5364h]
      vdivss  xmm2, xmm1, xmm2
      vsqrtss xmm3, xmm2, xmm2
      vsubss  xmm0, xmm7, xmm4
      vsubss  xmm1, xmm6, xmm5
      vmulss  xmm2, xmm0, xmm3
      vmulss  xmm3, xmm1, xmm3
      vaddss  xmm4, xmm2, xmm4
      vaddss  xmm0, xmm3, xmm5
      vsubss  xmm1, xmm4, xmm7
      vsubss  xmm2, xmm0, xmm6
      vaddss  xmm0, xmm7, xmm1
      vmovss  dword ptr [rbp+70h+outScreenPos], xmm0
      vaddss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rbp+70h+outScreenPos+4], xmm1
    }
    v107 = 1;
  }
  else
  {
    if ( !_RSI->snapToScreenEdges )
      goto LABEL_76;
    if ( !_RSI->enableDistanceBasedSnapCheck )
      goto LABEL_75;
    ObjectiveSettings = LUIElement_Anchored_GetObjectiveSettings(localClientNum, _RSI);
    if ( ObjectiveSettings )
    {
      if ( ObjectiveSettings->alwaysSnapToScreenEdge )
        goto LABEL_75;
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &luaVMa);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+170h+luaVM]
      vsubss  xmm3, xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rsp+170h+luaVM+4]
      vsubss  xmm2, xmm1, dword ptr [rax+4]
      vmovss  xmm0, [rsp+170h+var_110]
      vsubss  xmm4, xmm0, dword ptr [rax+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm6, xmm2, xmm2
    }
    _RDI = DVARFLT_lui_objective_stopSnapDistance;
    if ( !DVARFLT_lui_objective_stopSnapDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_stopSnapDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vcomiss xmm0, xmm6
    }
    memset(&luaVMa, 0, sizeof(luaVMa));
    if ( !(v62 | v63) )
    {
LABEL_75:
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmovups xmmword ptr [rsp+170h+var_108.global], xmm0
        vmovsd  xmm1, qword ptr [r15+10h]
        vmovsd  [rbp+70h+var_F0], xmm1
        vmulss  xmm6, xmm11, xmm10
      }
      *(float *)&_XMM0 = LUI_Measure(&v181);
      __asm
      {
        vmulss  xmm7, xmm0, xmm6
        vmovups xmm1, xmmword ptr [r15+18h]
        vmovups xmmword ptr [rsp+170h+var_108.global], xmm1
        vmovsd  xmm0, qword ptr [r15+28h]
        vmovsd  [rbp+70h+var_F0], xmm0
      }
      *(float *)&_XMM0 = LUI_Measure(&v181);
      __asm { vmulss  xmm3, xmm0, xmm6; elementHeight }
      snapToLocation[0] = _RSI->snapToLocation;
      __asm
      {
        vmulss  xmm0, xmm11, dword ptr [rsi+0B0h]
        vmovss  dword ptr [rbp+70h+worldPos], xmm0
        vmulss  xmm1, xmm11, dword ptr [rsi+0B4h]
        vmovss  dword ptr [rbp+70h+worldPos+4], xmm1
        vmulss  xmm1, xmm11, dword ptr [rsi+64h]; snapRadius
        vmovss  xmm0, dword ptr [rsi+6Ch]
        vmovss  dword ptr [rsp+170h+fmt], xmm0
        vmovaps xmm2, xmm7; elementwWidth
      }
      LUIElement_Anchored_SnapScreenPositionToEdges(localClientNum, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, &outScreenPos, &outScreenPos, snapToLocation, (const vec2_t *)&worldPos);
      v107 = 1;
    }
    else
    {
LABEL_76:
      __asm
      {
        vmulss  xmm7, xmm13, xmm10
        vmulss  xmm1, xmm7, xmm12
        vmovss  xmm0, dword ptr [rbp+70h+outScreenPos]
        vsubss  xmm8, xmm0, xmm1
        vmulss  xmm2, xmm14, xmm10
        vmulss  xmm1, xmm2, xmm12
        vmovss  xmm0, dword ptr [rbp+70h+outScreenPos+4]
        vsubss  xmm6, xmm0, xmm1
        vaddss  xmm10, xmm6, xmm2
      }
      _RAX = ScrPlace_GetActivePlacement(localClientNum);
      __asm { vcomiss xmm8, dword ptr [rax+20h] }
      if ( !v145 )
        goto LABEL_81;
      __asm { vcomiss xmm6, dword ptr [rax+24h] }
      if ( !v145 )
        goto LABEL_81;
      __asm
      {
        vaddss  xmm0, xmm8, xmm7
        vcomiss xmm0, xmm9
      }
      if ( v145 | v146 )
        goto LABEL_81;
      __asm { vcomiss xmm10, xmm9 }
      if ( v145 | v146 )
LABEL_81:
        v107 = 0;
      else
        v107 = 1;
    }
  }
  __asm
  {
    vmulss  xmm1, xmm13, xmm12
    vmovss  xmm0, dword ptr [rbp+70h+outScreenPos]
    vsubss  xmm3, xmm0, xmm1
    vmovss  dword ptr [r14], xmm3
    vmulss  xmm2, xmm14, xmm12
    vmovss  xmm1, dword ptr [rbp+70h+outScreenPos+4]
    vsubss  xmm2, xmm1, xmm2
    vmovss  dword ptr [r14+4], xmm2
  }
  if ( roundScreenPos )
  {
    __asm { vmovaps xmm0, xmm3; X }
    *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [r14], xmm0
      vmovss  xmm0, dword ptr [r14+4]; X
    }
    *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [r14+4], xmm0
      vmovss  xmm3, dword ptr [r14]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm3, xmm13
    vmovss  dword ptr [r12], xmm0
    vaddss  xmm0, xmm14, dword ptr [r14+4]
    vmovss  dword ptr [r12+4], xmm0
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm2, xmm1, xmm11
    vmulss  xmm0, xmm2, dword ptr [r14]
    vmovss  dword ptr [r14], xmm0
    vmulss  xmm1, xmm2, dword ptr [r14+4]
    vmovss  dword ptr [r14+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [r12]
    vmovss  dword ptr [r12], xmm0
    vmulss  xmm1, xmm2, dword ptr [r12+4]
    vmovss  dword ptr [r12+4], xmm1
  }
  result = v107;
  _R11 = &v185;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
  return result;
}

/*
==============
LUIElement_Anchored_GetWorldPosition
==============
*/
bool LUIElement_Anchored_GetWorldPosition(const LocalClientNum_t localClientNum, const LUIAnchor *const anchorData, vec3_t *outWorldPosition)
{
  __int64 v4; 
  int entityNum; 
  int v7; 
  unsigned int v8; 
  bool result; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  int worldOffset; 
  int outOffset; 
  vec3_t v40; 
  vec3_t v41; 
  tmat33_t<vec3_t> outLocalAxis; 
  tmat33_t<vec3_t> dst; 

  _RBX = outWorldPosition;
  v4 = localClientNum;
  if ( Sys_IsRenderThread() && R_IsInRemoteScreenUpdate() || !Sys_IsMainThread() )
    goto LABEL_28;
  if ( (unsigned int)v4 >= 2 )
  {
    outOffset = 2;
    worldOffset = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", worldOffset, outOffset) )
      __debugbreak();
  }
  if ( clientUIActives[v4].connectionState != CA_ACTIVE )
    goto LABEL_28;
  entityNum = anchorData->entityNum;
  if ( anchorData->entityNum == 2047 )
    goto LABEL_28;
  if ( entityNum > 2048 )
  {
    MatrixClear33(&dst);
    v7 = anchorData->entityNum & 0x3FFFFF;
    v8 = (unsigned int)anchorData->entityNum >> 22;
    if ( (unsigned int)anchorData->entityNum >> 30 != 1 && anchorData->attachType != ATTACH_SCRIPTABLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 405, ASSERT_TYPE_ASSERT, "(useClass == USE_CLASS_SCRIPTABLE || anchorData->attachType == LUIAnchorAttachType::ATTACH_SCRIPTABLE)", (const char *)&queryFormat, "useClass == USE_CLASS_SCRIPTABLE || anchorData->attachType == LUIAnchorAttachType::ATTACH_SCRIPTABLE") )
      __debugbreak();
    if ( ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v4, v7) && ScriptableCl_GetPartIsUsable((const LocalClientNum_t)v4, v7, (unsigned __int8)v8) )
    {
      ScriptableCl_GetPartUsePosition((const LocalClientNum_t)v4, v7, (unsigned __int8)v8, _RBX);
      LUI_ComputeWorldOffset((const LocalClientNum_t)v4, anchorData->entityNum, &dst, &anchorData->tagOffset, &anchorData->entityOffset, &anchorData->worldOffset, &v40);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0E8h+var_A8]
        vaddss  xmm1, xmm0, dword ptr [rbx]
        vmovss  xmm0, dword ptr [rsp+0E8h+var_A8+4]
        vmovss  dword ptr [rbx], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+4]
        vmovss  xmm0, dword ptr [rsp+0E8h+var_A8+8]
        vmovss  dword ptr [rbx+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
      }
      return 1;
    }
    goto LABEL_28;
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v4, entityNum);
  if ( (Entity->flags & 1) == 0 || (LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4), !CG_View_IsOutOfBody((const LocalClientNum_t)v4)) && LocalClientGlobals->predictedPlayerState.clientNum == anchorData->entityNum )
  {
LABEL_28:
    result = 0;
    *(_QWORD *)_RBX->v = 0i64;
    _RBX->v[2] = 0.0;
    return result;
  }
  if ( !anchorData->tagName[0] || !LUI_GetEntityTagPositionAndAxis((const LocalClientNum_t)v4, anchorData->entityNum, anchorData->tagName, &outLocalAxis, _RBX) )
  {
    MatrixClear33(&outLocalAxis);
    if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
    FunctionPointer_origin(&Entity->pose.origin.origin.origin, _RBX);
    if ( Entity->pose.isPosePrecise )
    {
      __asm
      {
        vmovsd  xmm3, cs:__real@3f30000000000000
        vmovd   xmm0, dword ptr [rbx]
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm0, xmm0, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovd   xmm0, dword ptr [rbx+4]
        vcvtdq2pd xmm0, xmm0
        vmovss  dword ptr [rbx], xmm1
        vmulsd  xmm1, xmm0, xmm3
        vmovd   xmm0, dword ptr [rbx+8]
        vcvtsd2ss xmm2, xmm1, xmm1
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm1, xmm0, xmm3
        vmovss  dword ptr [rbx+4], xmm2
        vcvtsd2ss xmm2, xmm1, xmm1
        vmovss  dword ptr [rbx+8], xmm2
      }
    }
  }
  LUI_ComputeWorldOffset((const LocalClientNum_t)v4, anchorData->entityNum, &outLocalAxis, &anchorData->tagOffset, &anchorData->entityOffset, &anchorData->worldOffset, &v41);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+var_98]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsp+0E8h+var_98+4]
    vmovss  dword ptr [rbx], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsp+0E8h+var_98+8]
    vmovss  dword ptr [rbx+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm1
  }
  return 1;
}

/*
==============
LUIElement_Anchored_Layout
==============
*/

void __fastcall LUIElement_Anchored_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  bool v16; 
  int v18; 
  bool v22; 
  LUIAnchorAttachType attachType; 
  PlayerHandIndex PlayerHandIndexToUseForWidget; 
  cg_t *LocalClientGlobals; 
  cg_t *v38; 
  PlayerHandIndex v39; 
  bool WorldPosition; 
  bool v107; 
  char v109; 
  bool v111; 
  LUITraceRequest *activeTraceRequest; 
  _BYTE *v113; 
  LUIAnchorTagType currentTraceTag; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  const vec3_t *v118; 
  LUITraceRequest *v119; 
  char v120; 
  const char *v121; 
  LUIElement *firstChild; 
  dvec3_t *v163; 
  __int64 ignoreOffsetsForTraces; 
  float ignoreOffsetsForTracesa; 
  bool outHit; 
  bool outTriviallyNotInSight; 
  char v168; 
  int v169; 
  vec3_t outOrigin; 
  dvec3_t outWorldPosition; 
  vec2_t screenSpaceBottomRight; 
  vec2_t screenSpaceTopLeft; 
  tmat33_t<vec3_t> in1; 
  vec3_t angles; 
  __int128 v176; 
  vec2_t inOutAnchorPoint; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> outLocalAxis; 
  tmat33_t<vec3_t> v181; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> v184; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm8
  }
  v16 = element->customElementData == NULL;
  _RDI = element;
  v18 = deltaTime;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovaps xmmword ptr [r11-0D8h], xmm15
  }
  v169 = deltaTime;
  __asm { vmovaps xmm8, xmm2 }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RBX = (LUIAnchor *)_RDI->customElementData;
  v22 = 1;
  __asm { vxorps  xmm14, xmm14, xmm14 }
  attachType = _RBX->attachType;
  if ( attachType == ATTACH_VIEWMODEL )
  {
    PlayerHandIndexToUseForWidget = LUI_GetPlayerHandIndexToUseForWidget(localClientNum, _RBX->useLeftHandIfAkimbo);
    if ( LUI_GetViewModelTransform(localClientNum, PlayerHandIndexToUseForWidget, _RBX->tagName, &outLocalAxis, &outWorldPosition) )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &axis);
      MatrixInverse(&axis, &out);
      MatrixMultiply(&outLocalAxis, &out, &v181);
      v22 = 1;
    }
    else
    {
      v22 = 0;
    }
    AxisToAngles(&v181, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+2E8h+angles]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rsp+2E8h+angles+8]
      vmovss  xmm2, dword ptr [rsp+2E8h+angles+4]
      vmovss  dword ptr [rdi+0E0h], xmm1
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovsd  xmm0, qword ptr [rsp+2E8h+outWorldPosition+8]
      vmovss  dword ptr [rdi+30h], xmm1
      vmovsd  xmm1, qword ptr [rsp+2E8h+outWorldPosition+10h]
      vmovss  dword ptr [rdi+0E4h], xmm2
      vmovsd  xmm2, qword ptr [rsp+2E8h+outWorldPosition]
      vcvtpd2ps xmm1, xmm1
      vcvtpd2ps xmm2, xmm2
      vcvtpd2ps xmm0, xmm0
      vmovss  dword ptr [rsp+2E8h+outOrigin+8], xmm1
      vmovss  dword ptr [rsp+2E8h+outOrigin], xmm2
      vmovss  dword ptr [rsp+2E8h+outOrigin+4], xmm0
    }
    goto LABEL_26;
  }
  if ( attachType != ATTACH_VIEWMODEL_RETICLE )
  {
    switch ( attachType )
    {
      case ATTACH_WORLD:
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+78h]
          vmovss  dword ptr [rsp+2E8h+outOrigin], xmm1
          vmovss  xmm0, dword ptr [rbx+7Ch]
          vmovss  dword ptr [rsp+2E8h+outOrigin+4], xmm0
          vmovss  xmm3, dword ptr [rbx+80h]
          vunpcklps xmm0, xmm1, xmm0
        }
        break;
      case ATTACH_SCRIPTABLE:
        ScriptableCl_GetInstanceOrigin(localClientNum, _RBX->entityNum, &outOrigin);
        __asm
        {
          vmovss  xmm1, dword ptr [rsp+2E8h+outOrigin+4]
          vmovss  xmm0, dword ptr [rsp+2E8h+outOrigin]
          vaddss  xmm3, xmm0, dword ptr [rbx+78h]
          vmovss  xmm0, dword ptr [rsp+2E8h+outOrigin+8]
          vmovss  dword ptr [rsp+2E8h+outOrigin], xmm3
          vaddss  xmm2, xmm1, dword ptr [rbx+7Ch]
          vmovss  dword ptr [rsp+2E8h+outOrigin+4], xmm2
          vaddss  xmm4, xmm0, dword ptr [rbx+80h]
          vunpcklps xmm1, xmm3, xmm2
          vmovaps xmm2, xmm1
          vxorpd  xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+2E8h+outOrigin], xmm1
          vmovsd  xmm1, xmm0, xmm2
          vcvtps2pd xmm2, xmm1
          vmovupd xmmword ptr [rsp+2E8h+outWorldPosition], xmm2
          vmovss  dword ptr [rsp+2E8h+outOrigin+8], xmm4
          vcvtss2sd xmm0, xmm4, xmm4
        }
        goto LABEL_25;
      case ATTACH_OBJECTIVE:
        _RAX = CG_GetLocalClientGlobals(localClientNum);
        __asm { vmovss  xmm0, dword ptr [rbx+78h] }
        _RDX = 172i64 * _RBX->entityNum;
        __asm
        {
          vaddss  xmm2, xmm0, dword ptr [rdx+rax+1298h]
          vmovss  xmm1, dword ptr [rdx+rax+129Ch]
          vmovss  xmm3, dword ptr [rdx+rax+12A0h]
          vmovss  dword ptr [rsp+2E8h+outOrigin], xmm2
          vaddss  xmm0, xmm1, dword ptr [rbx+7Ch]
          vmovss  dword ptr [rsp+2E8h+outOrigin+4], xmm0
          vaddss  xmm3, xmm3, dword ptr [rbx+80h]
          vunpcklps xmm0, xmm2, xmm0
        }
        break;
      default:
        if ( attachType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 1153, ASSERT_TYPE_ASSERT, "(anchorData->attachType == LUIAnchorAttachType::ATTACH_ENTITY)", (const char *)&queryFormat, "anchorData->attachType == LUIAnchorAttachType::ATTACH_ENTITY") )
          __debugbreak();
        WorldPosition = LUIElement_Anchored_GetWorldPosition(localClientNum, _RBX, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+2E8h+outOrigin]
          vmovss  xmm1, dword ptr [rsp+2E8h+outOrigin+4]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+2E8h+outWorldPosition], xmm0
          vmovss  xmm0, dword ptr [rsp+2E8h+outOrigin+8]
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+2E8h+outWorldPosition+8], xmm1
        }
        v22 = WorldPosition;
        goto LABEL_25;
    }
    __asm
    {
      vmovaps xmm2, xmm0
      vmovsd  qword ptr [rsp+2E8h+outOrigin], xmm0
      vxorpd  xmm0, xmm0, xmm0
      vmovsd  xmm1, xmm0, xmm2
      vcvtps2pd xmm2, xmm1
      vmovupd xmmword ptr [rsp+2E8h+outWorldPosition], xmm2
      vmovss  dword ptr [rsp+2E8h+outOrigin+8], xmm3
      vcvtss2sd xmm0, xmm3, xmm3
    }
LABEL_25:
    __asm { vmovsd  qword ptr [rsp+2E8h+outWorldPosition+10h], xmm0 }
    goto LABEL_26;
  }
  v38 = CG_GetLocalClientGlobals(localClientNum);
  v39 = LUI_GetPlayerHandIndexToUseForWidget(localClientNum, _RBX->useLeftHandIfAkimbo);
  if ( LUI_GetViewModelReticleTransform(localClientNum, v39, _RBX->tagName, _RBX->isLockedToTag, &in1, &outWorldPosition) )
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+84h]
      vucomiss xmm7, xmm14
      vmovss  xmm5, dword ptr [rbx+88h]
      vmovss  xmm6, dword ptr [rbx+8Ch]
      vmulss  xmm2, xmm5, dword ptr [rsp+2E8h+in1+0Ch]
      vmulss  xmm3, xmm7, dword ptr [rsp+2E8h+in1]
      vmulss  xmm1, xmm6, dword ptr [rsp+2E8h+in1+18h]
      vmulss  xmm0, xmm6, dword ptr [rsp+2E8h+in1+1Ch]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcvtss2sd xmm3, xmm2, xmm2
      vaddsd  xmm1, xmm3, qword ptr [rsp+2E8h+outWorldPosition]
      vmulss  xmm3, xmm7, dword ptr [rsp+2E8h+in1+4]
      vmulss  xmm2, xmm5, dword ptr [rsp+2E8h+in1+14h]
      vmovsd  qword ptr [rsp+2E8h+outWorldPosition], xmm1
      vmulss  xmm1, xmm5, dword ptr [rsp+2E8h+in1+10h]
      vaddss  xmm4, xmm3, xmm1
      vaddss  xmm1, xmm4, xmm0
      vcvtss2sd xmm3, xmm1, xmm1
      vaddsd  xmm0, xmm3, qword ptr [rsp+2E8h+outWorldPosition+8]
      vmulss  xmm3, xmm7, dword ptr [rsp+2E8h+in1+8]
      vmovsd  qword ptr [rsp+2E8h+outWorldPosition+8], xmm0
      vmulss  xmm0, xmm6, dword ptr [rsp+2E8h+in1+20h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm0
      vcvtss2sd xmm3, xmm2, xmm2
      vaddsd  xmm0, xmm3, qword ptr [rsp+2E8h+outWorldPosition+10h]
      vmovsd  qword ptr [rsp+2E8h+outWorldPosition+10h], xmm0
    }
    AnglesToAxis(&v38->refdefViewAngles, &in);
    MatrixInverse(&in, &in2);
    MatrixMultiply(&in1, &in2, &v184);
    v22 = 1;
  }
  else
  {
    v22 = 0;
  }
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+2E8h+outWorldPosition]
    vmovsd  xmm1, qword ptr [rsp+2E8h+outWorldPosition+8]
    vcvtpd2ps xmm0, xmm0
    vmovss  dword ptr [rsp+2E8h+outOrigin], xmm0
    vmovsd  xmm0, qword ptr [rsp+2E8h+outWorldPosition+10h]
    vcvtpd2ps xmm0, xmm0
    vcvtpd2ps xmm1, xmm1
    vmovss  dword ptr [rsp+2E8h+outOrigin+8], xmm0
    vmovss  dword ptr [rsp+2E8h+outOrigin+4], xmm1
  }
  AxisToAngles(&v184, (vec3_t *)&v176);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+2E8h+var_210+8]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdi+30h], xmm1
  }
LABEL_26:
  __asm { vmovaps xmm1, xmm8; unitScale }
  LUIElement_UpdateLayout(_RDI, *(float *)&_XMM1, v18, luaVM);
  __asm { vxorps  xmm15, xmm15, xmm15 }
  v107 = LUIElement_Anchored_UseDistanceBasedFading(localClientNum, _RBX);
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( !v107 )
    __asm { vmovss  xmm7, dword ptr [rdi+44h] }
  if ( v22 )
  {
    if ( v107 )
    {
      LUIElement_Anchored_GetDistanceBasedFadeAlpha(localClientNum, _RBX, &outOrigin);
      __asm
      {
        vmulss  xmm7, xmm7, xmm0
        vcomiss xmm7, xmm14
      }
      v22 = !(v109 | v16);
    }
    if ( v22 )
    {
      *(float *)&_XMM0 = LUIElement_Anchored_GetScale(localClientNum, _RBX, &outOrigin);
      __asm
      {
        vmovss  dword ptr [rsp+2E8h+ignoreOffsetsForTraces], xmm0
        vmovaps xmm2, xmm8; unitScale
        vmovaps xmm15, xmm0
      }
      if ( !(unsigned __int8)LUIElement_Anchored_GetScreenPosition(localClientNum, _RDI, *(double *)&_XMM2, luaVM, &outWorldPosition, &outOrigin, ignoreOffsetsForTracesa, _RBX->roundScreenPosition, &inOutAnchorPoint, &screenSpaceTopLeft, &screenSpaceBottomRight) )
        v22 = 0;
    }
  }
  if ( _RBX->scopeStatus[0] == 3 && !_RBX->snapToScopeEdges && _RBX->onScope == 2 )
    v22 = 0;
  if ( _RBX->onObstruction )
  {
    v111 = 0;
    if ( _RBX->alwaysShowUnderCrosshair )
    {
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(ignoreOffsetsForTraces) = 2;
        LODWORD(v163) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v163, ignoreOffsetsForTraces) )
          __debugbreak();
      }
      if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 1201, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
        __debugbreak();
      v111 = CG_GetLocalClientGlobals(localClientNum)->crosshairClientNum == _RBX->entityNum;
    }
    activeTraceRequest = _RBX->activeTraceRequest;
    v168 = _RBX->finalObstruction[0];
    if ( activeTraceRequest )
    {
      v113 = &_RBX->primaryObstruction[_RBX->currentTraceTag == SECONDARY];
      if ( LUITraceRunner::GetTraceResult(localClientNum, activeTraceRequest, &outHit) )
      {
        v16 = outHit;
        _RBX->activeTraceRequest = NULL;
        *v113 = !v16 + 1;
      }
    }
    if ( !_RBX->activeTraceRequest )
    {
      currentTraceTag = _RBX->currentTraceTag;
      if ( _RBX->secondaryObstructionTagName[0] )
      {
        currentTraceTag = currentTraceTag == PRIMARY;
        _RBX->currentTraceTag = currentTraceTag;
      }
      v115 = (currentTraceTag == SECONDARY) + 305i64;
      v116 = 144i64;
      if ( currentTraceTag != SECONDARY )
        v116 = 132i64;
      v117 = 240i64;
      v118 = (const vec3_t *)((char *)_RBX + v116);
      if ( currentTraceTag != SECONDARY )
        v117 = 4i64;
      v119 = LUITraceRunner::RequestTraceToEntityOffset(localClientNum, _RBX->entityNum, (const char *)_RBX + v117, v118, &_RBX->entityOffset, &_RBX->worldOffset, _RBX->ignoreOffsetsForTraces, *((_BYTE *)&_RBX->entityNum + v115) == 0, &outTriviallyNotInSight, _RBX->useClientDetailWorld);
      _RBX->activeTraceRequest = v119;
      if ( !v119 )
      {
        if ( outTriviallyNotInSight )
          *((_BYTE *)&_RBX->entityNum + v115) = 1;
        else
          Com_PrintWarning(13, "LUI_Traces queue is full");
      }
    }
    v120 = _RBX->primaryObstruction[0];
    if ( _RBX->secondaryObstructionTagName[0] && (char)_RBX->secondaryObstruction[0] > v120 )
      v120 = _RBX->secondaryObstruction[0];
    _RBX->finalObstruction[0] = v120;
    if ( v111 )
    {
      _RBX->finalObstruction[0] = 2;
      v120 = 2;
    }
    if ( !v120 && !_RBX->displayOnObstructionUnknown )
      v22 = 0;
    if ( v120 == v168 || _RBX->onObstruction != SHOW )
      goto LABEL_77;
    if ( v120 == 1 )
    {
      v121 = "anchor_sight_obstructed";
    }
    else
    {
      if ( v120 != 2 )
      {
LABEL_77:
        v18 = v169;
        if ( _RBX->onObstruction == 2 && _RBX->finalObstruction[0] != 2 )
          v22 = 0;
        goto LABEL_80;
      }
      v121 = "anchor_sight_clear";
    }
    if ( LUI_BeginEventWithElement(localClientNum, _RDI, v121, luaVM) )
      LUI_EndEventWithElement(luaVM);
    goto LABEL_77;
  }
LABEL_80:
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups xmm6, xmmword ptr [rdi+20h]
    vmovups ymmword ptr [rsp+2E8h+in1], ymm0
    vmovups [rsp+2E8h+var_210], xmm6
  }
  if ( v22 )
  {
    __asm
    {
      vcomiss xmm14, dword ptr [rbx+74h]
      vmovaps [rsp+2E8h+var_78], xmm9
      vmovss  xmm9, dword ptr [rsp+2E8h+screenSpaceTopLeft+4]
      vmovaps [rsp+2E8h+var_88], xmm10
      vmovss  xmm10, dword ptr [rsp+2E8h+screenSpaceTopLeft]
      vmovaps [rsp+2E8h+var_98], xmm11
      vmovss  xmm11, dword ptr [rsp+2E8h+screenSpaceBottomRight+4]
      vmovaps [rsp+2E8h+var_A8], xmm12
      vmovss  xmm12, dword ptr [rsp+2E8h+screenSpaceBottomRight]
      vmovaps [rsp+2E8h+var_B8], xmm13
      vmovss  xmm13, cs:__real@3f000000
      vmovss  xmm14, cs:__real@3f800000
    }
    if ( _RBX->scaleUsingLayout )
    {
      __asm
      {
        vsubss  xmm0, xmm12, xmm10
        vmulss  xmm1, xmm0, xmm13
        vaddss  xmm2, xmm1, xmm10
        vsubss  xmm3, xmm14, xmm15
        vmulss  xmm4, xmm2, xmm3
        vmulss  xmm0, xmm10, xmm15
        vaddss  xmm1, xmm0, xmm4
        vmovss  dword ptr [rdi+8], xmm1
        vsubss  xmm2, xmm11, xmm9
        vmulss  xmm0, xmm2, xmm13
        vaddss  xmm1, xmm0, xmm9
        vmulss  xmm3, xmm1, xmm3
        vmulss  xmm2, xmm9, xmm15
        vaddss  xmm0, xmm2, xmm3
        vmulss  xmm1, xmm12, xmm15
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rdi+20h], xmm0
        vmulss  xmm0, xmm11, xmm15
        vaddss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rdi+24h], xmm1
        vmovss  dword ptr [rdi+0Ch], xmm2
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm15, xmm14
        vmovss  dword ptr [rdi+8], xmm10
        vmovss  dword ptr [rdi+20h], xmm9
        vmovss  dword ptr [rdi+0Ch], xmm12
        vmovss  dword ptr [rdi+24h], xmm11
        vmovss  dword ptr [rdi+34h], xmm0
      }
    }
    __asm { vmovaps xmm1, xmm8; unitScale }
    LUIElement_SetDimensions(_RDI, *(float *)&_XMM1);
    __asm
    {
      vmovaps xmm13, [rsp+2E8h+var_B8]
      vmovaps xmm12, [rsp+2E8h+var_A8]
      vmovaps xmm11, [rsp+2E8h+var_98]
      vmovaps xmm10, [rsp+2E8h+var_88]
      vmovaps xmm9, [rsp+2E8h+var_78]
    }
  }
  else
  {
    _RDI->currentAnimationState.flags &= ~1u;
  }
  firstChild = _RDI->firstChild;
  __asm
  {
    vmovaps xmm15, [rsp+2E8h+var_D8]
    vmovaps xmm14, [rsp+2E8h+var_C8]
  }
  _RDI->layoutCached = !v22;
  __asm
  {
    vmovss  dword ptr [rdi+44h], xmm7
    vmovaps xmm7, [rsp+2E8h+var_58]
  }
  for ( ; firstChild; firstChild = firstChild->nextSibling )
  {
    __asm { vmovaps xmm2, xmm8; unitScale }
    LUIElement_Layout(localClientNum, firstChild, *(float *)&_XMM2, v18, luaVM);
  }
  if ( v22 && _RBX->rotateElementCount > 0 )
  {
    __asm { vmovaps xmm0, xmm8; unitScale }
    LUIElement_Anchored_UpdateRotatedElements(*(float *)&_XMM0, _RBX, &inOutAnchorPoint, &screenSpaceTopLeft, &screenSpaceBottomRight);
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+2E8h+in1]
    vmovups ymmword ptr [rdi], ymm0
    vmovups xmmword ptr [rdi+20h], xmm6
    vmovaps xmm6, [rsp+2E8h+var_48]
    vmovaps xmm8, [rsp+2E8h+var_68]
  }
}

/*
==============
LUIElement_Anchored_SetAnchoringAmount_impl
==============
*/
__int64 LUIElement_Anchored_SetAnchoringAmount_impl(lua_State *const luaVM)
{
  LUITweenProperty v6; 
  int v7; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetAnchoringAmount( lerpFactor, duration, easing )");
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    goto LABEL_29;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    goto LABEL_29;
  _RDI = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(_RDI, luaVM) )
    goto LABEL_29;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovaps xmm6, xmm0 }
  if ( j_lua_gettop(luaVM) < 3 || (v7 = lui_tointeger32(luaVM, 3), v7 <= 0) )
  {
    LOBYTE(v6) = 51;
    LUI_Tween_InterruptElementTween(_RDI, v6, luaVM);
    __asm { vmovss  dword ptr [rdi+48h], xmm6 }
LABEL_29:
    result = 0i64;
    goto LABEL_30;
  }
  _RSI = LUI_Tween_Create(luaVM, _RDI);
  if ( j_lua_gettop(luaVM) >= 4 )
    _RSI->easing = lui_tointeger32(luaVM, 4);
  _RSI->targetProperty[0] = 51;
  _RSI->duration = v7;
  _RSI->startValue.intValue = _RDI->currentAnimationState.userDataInt;
  __asm { vmovss  dword ptr [rsi+28h], xmm6 }
  LUI_Tween_AddElementTween(_RDI, _RSI, luaVM, 0);
  LUI_Tween_PushOnLuaStack(_RSI, luaVM);
  result = 1i64;
LABEL_30:
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
}

/*
==============
LUIElement_Anchored_SetEntityTag_impl
==============
*/
__int64 LUIElement_Anchored_SetEntityTag_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIAnchor *AnchorData; 
  const int *p_entityNum; 
  char *tagName; 
  int v6; 
  LocalClientNum_t CurrentLocalClient; 
  centity_t *Entity; 
  unsigned int number; 
  unsigned int v10; 
  unsigned int v11; 
  const DObj *v12; 
  const char *BoneName; 
  __int64 v15; 
  __int64 v16; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isstring(luaVM, 2) && !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetEntityTag( entityTag )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && (j_lua_isstring(luaVM, 2) || j_lua_isnumber(luaVM, 2)) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    AnchorData->tagName[0] = 0;
    p_entityNum = &AnchorData->entityNum;
    tagName = AnchorData->tagName;
    if ( j_lua_isnumber(luaVM, 2) && *p_entityNum < 2048 )
    {
      v6 = lui_tointeger32(luaVM, 2);
      CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
      if ( CurrentLocalClient == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 1376, ASSERT_TYPE_ASSERT, "(localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "localClientNum != LOCAL_CLIENT_INVALID") )
        __debugbreak();
      Entity = CG_GetEntity(CurrentLocalClient, *p_entityNum);
      if ( (Entity->flags & 1) != 0 )
      {
        number = Entity->nextState.number;
        if ( number > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", Entity->nextState.number) )
          __debugbreak();
        if ( (unsigned int)CurrentLocalClient >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v16) = 2;
          LODWORD(v15) = CurrentLocalClient;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        v10 = 2533 * CurrentLocalClient + number;
        if ( v10 >= 0x13CA )
        {
          LODWORD(v16) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v16) )
            __debugbreak();
        }
        v11 = clientObjMap[v10];
        if ( v11 )
        {
          if ( v11 >= (unsigned int)s_objCount )
          {
            LODWORD(v16) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v16) )
              __debugbreak();
          }
          v12 = (const DObj *)s_objBuf[v11];
          if ( v12 )
          {
            BoneName = DObjGetBoneName(v12, v6);
            if ( BoneName )
              goto LABEL_34;
          }
        }
      }
    }
    else if ( j_lua_isstring(luaVM, 2) )
    {
      BoneName = j_lua_tolstring(luaVM, 2, NULL);
LABEL_34:
      Core_strcpy(tagName, 0x40ui64, BoneName);
    }
  }
  return 0i64;
}

/*
==============
LUIElement_Anchored_SnapScreenPositionToEdges
==============
*/

__int64 __fastcall LUIElement_Anchored_SnapScreenPositionToEdges(const LocalClientNum_t localClientNum, double snapRadius, double elementwWidth, double elementHeight, const float snapToEdgesSmoothingRadius, const vec2_t *screenPosition, vec2_t *outSnappedScreenPosition, const bool *snapToLocation, const vec2_t *screenSnapOffset)
{
  int v57; 
  bool v58; 
  char v94; 
  char v95; 
  __int64 result; 
  char v133; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = outSnappedScreenPosition;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps [rsp+0D8h+var_A8], xmm15
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm8, xmm1
    vmovss  xmm12, cs:__real@3f000000
    vmovss  xmm13, cs:__real@3f800000
  }
  _R10 = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmulss  xmm2, xmm12, dword ptr [rax+20h]
    vmulss  xmm3, xmm12, dword ptr [rax+24h]
  }
  _RAX = screenPosition;
  __asm
  {
    vmulss  xmm15, xmm6, xmm12
    vmulss  xmm14, xmm7, xmm12
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm8, xmm7
    vmovss  xmm0, dword ptr [rax]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vsubss  xmm5, xmm1, xmm3
    vsubss  xmm4, xmm0, xmm2
    vmovss  dword ptr [rbx+4], xmm5
    vmovss  dword ptr [rbx], xmm4
    vmovss  xmm0, dword ptr [r10+58h]
    vmovss  xmm1, dword ptr [r10+20h]
    vsubss  xmm6, xmm0, xmm2
    vsubss  xmm0, xmm1, dword ptr [r10+60h]
    vmovss  xmm1, dword ptr [r10+5Ch]
    vsubss  xmm9, xmm2, xmm0
    vmovss  xmm0, dword ptr [r10+24h]
    vsubss  xmm10, xmm1, xmm3
    vsubss  xmm1, xmm0, dword ptr [r10+64h]
    vsubss  xmm11, xmm3, xmm1
    vmovss  [rsp+0D8h+var_B4], xmm2
    vmovss  [rsp+0D8h+var_B8], xmm3
    vmovaps xmm3, xmm4
    vmovaps xmm2, xmm5
    vsubss  xmm1, xmm3, xmm15
    vcomiss xmm1, xmm6
    vaddss  xmm0, xmm3, xmm15
    vcomiss xmm0, xmm9
    vmovaps xmm4, xmm2
    vmovaps xmm5, xmm3
    vsubss  xmm1, xmm4, xmm14
    vcomiss xmm1, xmm10
    vaddss  xmm0, xmm4, xmm14
    vcomiss xmm0, xmm11
    vmovaps xmm2, xmm5
    vmovaps xmm3, xmm4
  }
  v57 = 0;
  v58 = !*snapToLocation;
  if ( *snapToLocation )
  {
    _RAX = screenSnapOffset;
    *outSnappedScreenPosition = 0i64;
    __asm
    {
      vmovss  xmm2, dword ptr [rax]
      vmovss  dword ptr [rbx], xmm2
      vmovss  xmm3, dword ptr [rax+4]
      vmovss  dword ptr [rbx+4], xmm3
    }
  }
  __asm
  {
    vmovss  xmm4, [rsp+0D8h+snapToEdgesSmoothingRadius]
    vucomiss xmm4, xmm7
  }
  if ( !v58 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r10+64h]
      vsubss  xmm1, xmm0, dword ptr [r10+5Ch]
      vmovss  xmm2, dword ptr [r10+60h]
      vsubss  xmm0, xmm2, dword ptr [r10+58h]
      vmovss  xmm10, [rsp+0D8h+var_B8]
      vmovss  xmm11, [rsp+0D8h+var_B8]
      vmulss  xmm3, xmm1, xmm12
      vmulss  xmm1, xmm0, xmm12
      vmovss  xmm12, cs:__real@80000000
      vminss  xmm3, xmm3, xmm1
      vmulss  xmm8, xmm3, xmm4
    }
    _ER9 = -1;
    do
    {
      _ECX = -1;
      do
      {
        if ( _ER9 && _ECX )
        {
          if ( v57 > 1 )
            break;
          _RAX = 88i64;
          __asm
          {
            vmovd   xmm1, r9d
            vcvtdq2ps xmm1, xmm1
            vmulss  xmm0, xmm1, xmm15
            vaddss  xmm3, xmm0, dword ptr [rbx]
          }
          if ( _ER9 != -1 )
            _RAX = 96i64;
          __asm
          {
            vmulss  xmm1, xmm1, xmm8
            vmovd   xmm2, ecx
            vcvtdq2ps xmm2, xmm2
            vmulss  xmm0, xmm2, xmm14
            vaddss  xmm6, xmm0, dword ptr [rbx+4]
            vmovss  xmm0, dword ptr [rax+r10]
            vsubss  xmm1, xmm0, xmm1
            vsubss  xmm9, xmm1, [rsp+0D8h+var_B4]
            vmulss  xmm1, xmm2, xmm8
          }
          _RAX = 92i64;
          if ( _ECX != -1 )
            _RAX = 100i64;
          __asm
          {
            vsubss  xmm4, xmm9, xmm3
            vmovss  xmm0, dword ptr [rax+r10]
            vsubss  xmm1, xmm0, xmm1
            vsubss  xmm2, xmm1, [rsp+0D8h+var_B8]
            vsubss  xmm5, xmm2, xmm6
          }
          if ( _ER9 == -1 )
          {
            __asm { vcomiss xmm4, xmm7 }
            v94 = 0;
          }
          else
          {
            __asm { vcomiss xmm4, xmm7 }
            v94 = 1;
          }
          if ( _ECX == -1 )
          {
            __asm { vcomiss xmm5, xmm7 }
            v95 = 0;
          }
          else
          {
            __asm { vcomiss xmm5, xmm7 }
            v95 = 1;
          }
          if ( v94 && v95 )
          {
            __asm
            {
              vsubss  xmm0, xmm6, xmm2
              vmulss  xmm2, xmm0, xmm0
              vsubss  xmm1, xmm3, xmm9
              vmulss  xmm1, xmm1, xmm1
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm6, xmm2, xmm2
              vcomiss xmm6, xmm8
              vmulss  xmm0, xmm5, xmm5
              vmulss  xmm3, xmm4, xmm4
              vaddss  xmm1, xmm3, xmm0
              vsqrtss xmm2, xmm1, xmm1
              vcmpless xmm0, xmm2, xmm12
              vblendvps xmm0, xmm2, xmm13, xmm0
              vdivss  xmm3, xmm13, xmm0
              vmulss  xmm2, xmm3, xmm5
              vsubss  xmm1, xmm6, xmm8
              vmulss  xmm0, xmm4, xmm3
              vmulss  xmm11, xmm0, xmm1
              vmulss  xmm10, xmm1, xmm2
            }
            ++v57;
          }
        }
        ++_ECX;
      }
      while ( _ECX < 2 );
      ++_ER9;
    }
    while ( _ER9 < 2 );
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]
      vmovss  xmm3, dword ptr [rbx+4]
    }
    if ( v57 == 1 )
    {
      __asm
      {
        vaddss  xmm2, xmm2, xmm11
        vaddss  xmm3, xmm3, xmm10
      }
    }
  }
  __asm
  {
    vaddss  xmm0, xmm2, [rsp+0D8h+var_B4]
    vaddss  xmm1, xmm3, [rsp+0D8h+var_B8]
    vmovaps xmm14, [rsp+0D8h+var_98]
  }
  result = 0i64;
  __asm { vmovaps xmm15, [rsp+0D8h+var_A8] }
  _R11 = &v133;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovss  dword ptr [rbx], xmm0
    vmovss  dword ptr [rbx+4], xmm1
  }
  return result;
}

/*
==============
LUIElement_Anchored_UpdateRotatedElements
==============
*/

void __fastcall LUIElement_Anchored_UpdateRotatedElements(double unitScale, LUIAnchor *anchorData, vec2_t *inOutAnchorPoint, const vec2_t *screenSpaceTopLeft, const vec2_t *screenSpaceBottomRight)
{
  char v72; 
  char v78; 
  char v79; 
  int v83; 
  LUIElement **rotateElements; 
  LUIElementAxisPosition v110[2]; 
  LUIElementAxisPosition v111; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm5, dword ptr [r9]
    vmovss  xmm1, cs:__real@3f800000
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovss  xmm7, dword ptr [r9+4]
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm11
    vdivss  xmm11, xmm1, xmm0
    vmulss  xmm2, xmm11, dword ptr [r8]
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovss  xmm12, cs:__real@3f000000
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
    vmovaps xmm15, xmm0
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _RAX = screenSpaceBottomRight;
  __asm
  {
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm14, xmm14, xmm14
    vmovss  xmm6, dword ptr [rax+4]
    vmovss  xmm3, dword ptr [rax]
    vmovss  dword ptr [r8], xmm2
    vmulss  xmm4, xmm11, dword ptr [r8+4]
    vaddss  xmm0, xmm3, xmm5
    vmulss  xmm1, xmm0, xmm12
    vmovss  dword ptr [r8+4], xmm4
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm8, xmm0, xmm1
    vandps  xmm2, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm1, xmm6, xmm7
    vmulss  xmm0, xmm1, xmm12
    vmovss  xmm1, cs:__real@3a83126f
    vcomiss xmm2, xmm1
    vsubss  xmm5, xmm4, xmm0
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
    vandps  xmm0, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, xmm1
    vaddss  xmm2, xmm2, cs:__real@2edbe6ff
    vaddss  xmm4, xmm5, xmm2
    vsubss  xmm1, xmm5, xmm2
    vsubss  xmm2, xmm2, xmm5
    vcmpless xmm0, xmm7, xmm5
    vblendvps xmm3, xmm4, xmm1, xmm0
    vcmpless xmm0, xmm7, xmm5
    vblendvps xmm0, xmm2, xmm4, xmm0
    vdivss  xmm3, xmm3, xmm0
    vmulss  xmm1, xmm3, cs:__real@3e4902de
    vmulss  xmm2, xmm1, xmm3
    vsubss  xmm0, xmm2, cs:__real@3f7b50b1
    vmovss  xmm1, cs:__real@3f490fdb
    vmulss  xmm4, xmm0, xmm3
    vmovss  xmm0, cs:__real@4016cbe4
    vcmpless xmm2, xmm7, xmm5
    vblendvps xmm1, xmm0, xmm1, xmm2
    vaddss  xmm3, xmm4, xmm1
    vxorps  xmm2, xmm3, xmm10
    vcmpless xmm0, xmm7, xmm8
    vblendvps xmm1, xmm2, xmm3, xmm0
    vmulss  xmm14, xmm1, cs:__real@42652ee0
    vmovaps xmm6, xmm1
    vxorps  xmm8, xmm8, xmm8
  }
  if ( anchorData->pinRotateElementsToEdge )
  {
    _RAX = anchorData->pinRotateToEdgeElement;
    __asm
    {
      vmovaps [rsp+138h+var_68], xmm9
      vmovups xmm0, xmmword ptr [rax]
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovups [rsp+138h+var_108], xmm0
      vmovsd  [rsp+138h+var_F8], xmm1
    }
    *(float *)&_XMM0 = LUI_Measure(v110);
    _RAX = anchorData->pinRotateToEdgeElement;
    __asm
    {
      vmulss  xmm8, xmm0, xmm15
      vmovups xmm0, xmmword ptr [rax+18h]
      vmovsd  xmm1, qword ptr [rax+28h]
      vmovups [rsp+138h+var_108], xmm0
      vmovsd  [rsp+138h+var_F8], xmm1
    }
    *(float *)&_XMM0 = LUI_Measure(v110);
    __asm
    {
      vmovss  xmm1, cs:__real@40c90fdb
      vcomiss xmm6, xmm1
      vmulss  xmm2, xmm0, xmm15
    }
    if ( !v72 )
    {
      __asm { vmovss  xmm0, cs:__real@c0c90fdb }
      do
      {
        __asm
        {
          vaddss  xmm6, xmm6, xmm0
          vcomiss xmm6, xmm1
        }
      }
      while ( !v72 );
    }
    __asm { vcomiss xmm6, xmm7 }
    while ( v72 )
    {
      __asm
      {
        vaddss  xmm6, xmm6, xmm1
        vcomiss xmm6, xmm7
      }
    }
    __asm
    {
      vmovaps xmm0, xmm6; X
      vmulss  xmm7, xmm2, xmm12
      vmulss  xmm9, xmm8, xmm12
    }
    *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm8, xmm0, xmm7
      vandps  xmm1, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, xmm9
    }
    if ( v78 | v79 )
    {
      __asm { vcomiss xmm6, cs:__real@3fc90fdb }
      if ( v78 )
        goto LABEL_15;
      __asm { vcomiss xmm6, cs:__real@4096cbe4 }
      if ( !(v78 | v79) )
        goto LABEL_15;
      __asm { vxorps  xmm8, xmm8, xmm10 }
    }
    else
    {
      __asm
      {
        vcomiss xmm6, cs:__real@40490fdb
        vdivss  xmm7, xmm9, xmm0
      }
      if ( v78 )
      {
        __asm { vmovaps xmm8, xmm9 }
LABEL_15:
        __asm { vmovaps xmm9, [rsp+138h+var_68] }
        goto LABEL_16;
      }
      __asm { vxorps  xmm8, xmm9, xmm10 }
    }
    __asm { vxorps  xmm7, xmm7, xmm10 }
    goto LABEL_15;
  }
LABEL_16:
  __asm { vmovaps xmm10, [rsp+138h+var_78] }
  v83 = 0;
  if ( anchorData->rotateElementCount > 0 )
  {
    rotateElements = anchorData->rotateElements;
    do
    {
      _RBX = *rotateElements;
      if ( *rotateElements )
      {
        __asm { vmovss  dword ptr [rbx+30h], xmm14 }
        if ( anchorData->pinRotateElementsToEdge )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx]
            vmovsd  xmm1, qword ptr [rbx+10h]
            vmovups [rsp+138h+var_108], xmm0
            vmovsd  [rsp+138h+var_F8], xmm1
          }
          *(float *)&_XMM0 = LUI_Measure(v110);
          __asm
          {
            vmulss  xmm1, xmm0, xmm15
            vmovups xmm0, xmmword ptr [rbx+18h]
            vmulss  xmm6, xmm1, xmm12
            vmovsd  xmm1, qword ptr [rbx+28h]
            vmovsd  [rsp+138h+var_C8], xmm1
            vmovups [rsp+138h+var_D8], xmm0
          }
          *(float *)&_XMM0 = LUI_Measure(&v111);
          __asm
          {
            vmulss  xmm1, xmm0, xmm15
            vmulss  xmm3, xmm1, xmm12
            vsubss  xmm2, xmm8, xmm6
            vmulss  xmm0, xmm2, xmm11
            vsubss  xmm1, xmm7, xmm3
            vmulss  xmm2, xmm1, xmm11
            vmovss  dword ptr [rbx], xmm0
            vaddss  xmm0, xmm8, xmm6
            vmulss  xmm1, xmm0, xmm11
            vmovss  dword ptr [rbx+18h], xmm2
            vaddss  xmm2, xmm7, xmm3
            vmulss  xmm0, xmm2, xmm11
            vmovss  dword ptr [rbx+1Ch], xmm0
            vmovss  dword ptr [rbx+4], xmm1
          }
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 1064, ASSERT_TYPE_ASSERT, "(rotateElement)", (const char *)&queryFormat, "rotateElement") )
      {
        __debugbreak();
      }
      ++v83;
      ++rotateElements;
    }
    while ( v83 < anchorData->rotateElementCount );
  }
  _R11 = &v114;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm8, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-78h]
    vmovaps xmm12, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
LUIElement_Anchored_UseDistanceBasedFading
==============
*/
bool LUIElement_Anchored_UseDistanceBasedFading(const LocalClientNum_t localClientNum, const LUIAnchor *const anchorData)
{
  const dvar_t *v3; 
  char v8; 
  const ObjectiveSettings *ObjectiveSettings; 

  v3 = DVARBOOL_lui_objective_fade_enabled;
  if ( !DVARBOOL_lui_objective_fade_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_fade_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled || !anchorData->useDistanceBasedFading )
    return 0;
  _RBX = DVARFLT_lui_objective_fadeEnd;
  if ( !DVARFLT_lui_objective_fadeEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_fadeEnd") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( !v8 )
    return 0;
  ObjectiveSettings = LUIElement_Anchored_GetObjectiveSettings(localClientNum, anchorData);
  return !ObjectiveSettings || !ObjectiveSettings->alwaysShowInWorld;
}

/*
==============
LUI_LuaCall_LUIElement_SetupAnchoredElement
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupAnchoredElement(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupAnchoredElement_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupAnchoredElement_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupAnchoredElement_impl(lua_State *const luaVM)
{
  LUIElement *v7; 
  LUIElementUsageFlag *p_usageFlags; 
  int v10; 
  const char *v11; 
  bool v12; 
  bool v16; 
  int v18; 
  bool v24; 
  bool v27; 
  bool v29; 
  LUIAnchorOnObstruction v30; 
  const char *v31; 
  LUIAnchorOnScope v32; 
  bool v33; 
  bool v34; 
  int v35; 
  bool v36; 
  bool v37; 
  bool v38; 
  bool v39; 
  bool v40; 
  bool v41; 
  bool v42; 
  bool v43; 
  bool v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v7 = LUI_ToElement(luaVM, 1);
  v7->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_Anchored_Layout;
  p_usageFlags = &v7->usageFlags;
  v7->usageFlags |= 3u;
  LUI_LUIElement_RegisterMethods(v7, luaVM, s_anchoredMethods);
  if ( v7->customElementData )
  {
    _RDI = LUI_LUIElement_RetrieveCustomElementData<LUIAnchor>(v7, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v7, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v7, luaVM);
    _RDI = (LUIAnchor *)j_lua_newuserdata(luaVM, 0x150ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v7->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v7->customElementData = _RDI;
    memset_0(_RDI, 0, sizeof(LUIAnchor));
  }
  _RDI->attachType = ATTACH_ENTITY;
  v7->currentAnimationState.userDataInt = 1065353216;
  j_lua_getfield(luaVM, 2, "entityNum");
  if ( j_lua_isnumber(luaVM, -1) )
    v10 = lui_tointeger32(luaVM, -1);
  else
    v10 = 2047;
  _RDI->entityNum = v10;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "entityTag");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v11 = j_lua_tolstring(luaVM, -1, NULL);
    Core_strcpy(_RDI->tagName, 0x40ui64, v11);
  }
  else
  {
    _RDI->tagName[0] = 0;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "screenOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+0A8h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "screenOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+0ACh], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "screenSnapOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+0B0h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "screenSnapOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+0B4h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "snapToLocation");
  v12 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->snapToLocation = v12;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "worldOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+78h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "worldOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+7Ch], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "worldOffsetZ");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+80h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "entityOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+9Ch], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "entityOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+0A0h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "entityOffsetZ");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+0A4h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "tagOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+84h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "tagOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+88h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "tagOffsetZ");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+8Ch], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "secondaryTagOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+90h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "secondaryTagOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+94h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "secondaryTagOffsetZ");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovss  dword ptr [rdi+98h], xmm0 }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "naturalDistance");
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    __asm { vmovss  xmm1, cs:__real@43960000 }
  }
  __asm { vmovss  dword ptr [rdi+44h], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "perspectiveScaleLerpDistance");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    __asm { vmovss  xmm1, cs:__real@bf800000 }
  }
  __asm { vmovss  dword ptr [rdi+4Ch], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "perspectiveScalingEnabled");
  v16 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  _RDI->perspectiveScalingEnabled = v16;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "naturalFOV");
  _ER14 = 0;
  if ( j_lua_isnumber(luaVM, -1) )
    v18 = lui_tointeger32(luaVM, -1);
  else
    v18 = 0;
  _RDI->naturalFOV = v18;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "defaultScale");
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm7 }
  }
  else
  {
    __asm { vmovaps xmm1, xmm6 }
  }
  __asm { vmovss  dword ptr [rdi+50h], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minScale");
  __asm { vmovss  xmm8, cs:__real@3e4ccccd }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm7 }
  }
  else
  {
    __asm { vmovaps xmm1, xmm8 }
  }
  __asm { vmovss  dword ptr [rdi+54h], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxScale");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm7 }
  }
  else
  {
    __asm { vmovaps xmm1, xmm6 }
  }
  __asm { vmovss  dword ptr [rdi+58h], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "snapToScreenEdges");
  v24 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->snapToScreenEdges = v24;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "snapRadius");
  if ( j_lua_isnumber(luaVM, -1) )
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm { vmovss  dword ptr [rdi+64h], xmm0 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "snapSmoothing");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vmaxss  xmm0, xmm0, xmm7
      vminss  xmm1, xmm0, xmm6
    }
  }
  else
  {
    __asm { vmovss  xmm1, cs:__real@3f000000 }
  }
  __asm { vmovss  dword ptr [rdi+6Ch], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "enableDistanceBasedSnapCheck");
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  v27 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  _RDI->enableDistanceBasedSnapCheck = v27;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "screenCenterFadeRadius");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm7 }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm { vmovss  dword ptr [rdi+74h], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useDistanceBasedFading");
  v29 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  _RDI->useDistanceBasedFading = v29;
  j_lua_settop(luaVM, -2);
  _RDI->onObstruction = HIDE;
  j_lua_getfield(luaVM, 2, "onObstruction");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v30 = (unsigned __int8)lui_tointeger32(luaVM, -1);
    if ( (unsigned __int8)v30 <= 2u )
      _RDI->onObstruction = v30;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "obstructionEntityTag");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v31 = j_lua_tolstring(luaVM, -1, NULL);
    Core_strcpy(_RDI->secondaryObstructionTagName, 0x40ui64, v31);
  }
  else
  {
    _RDI->secondaryObstructionTagName[0] = 0;
  }
  j_lua_settop(luaVM, -2);
  _RDI->onScope = HIDE;
  j_lua_getfield(luaVM, 2, "onScope");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v32 = (unsigned __int8)lui_tointeger32(luaVM, -1);
    if ( (unsigned __int8)v32 <= 2u )
      _RDI->onScope = v32;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "snapToScopeEdges");
  v33 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->snapToScopeEdges = v33;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "sendVisibilityEvents");
  v34 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->sendScreenEvents = v34;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "rotateElements");
  _RDI->rotateElementCount = 0;
  _RDI->rotateElements[0] = NULL;
  _RDI->rotateElements[1] = NULL;
  _RDI->rotateElements[2] = NULL;
  _RDI->rotateElements[3] = NULL;
  if ( j_lua_type(luaVM, -1) == 5 )
  {
    v35 = 0;
    while ( 1 )
    {
      j_lua_pushinteger(luaVM, ++v35);
      j_lua_gettable(luaVM, -2);
      if ( !j_lua_isuserdata(luaVM, -1) )
        break;
      _RDI->rotateElements[_RDI->rotateElementCount] = LUI_ToElement(luaVM, -1);
      if ( !_RDI->rotateElements[_RDI->rotateElementCount] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 2212, ASSERT_TYPE_ASSERT, "(anchorData->rotateElements[anchorData->rotateElementCount])", (const char *)&queryFormat, "anchorData->rotateElements[anchorData->rotateElementCount]") )
        __debugbreak();
      ++_RDI->rotateElementCount;
      j_lua_settop(luaVM, -2);
      if ( v35 >= 4 )
        goto LABEL_120;
    }
    j_lua_settop(luaVM, -2);
  }
LABEL_120:
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "pinRotateToEdgeElement");
  if ( j_lua_isuserdata(luaVM, -1) )
    v7 = LUI_ToElement(luaVM, -1);
  _RDI->pinRotateToEdgeElement = v7;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "pinRotateElementsToEdge");
  v36 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->pinRotateElementsToEdge = v36;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "roundScreenPosition");
  v37 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->roundScreenPosition = v37;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useClientDetailWorld");
  v38 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->useClientDetailWorld = v38;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "scaleUsingLayout");
  v39 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->scaleUsingLayout = v39;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "displayOnObstructionUnknown");
  v40 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  _RDI->displayOnObstructionUnknown = v40;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "ignoreOffsetsForTraces");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vcvttss2si r14d, xmm0 }
  }
  _RDI->ignoreOffsetsForTraces = _ER14;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "alwaysShowUnderCrosshair");
  v41 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->alwaysShowUnderCrosshair = v41;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "isLockedToTag");
  v42 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->isLockedToTag = v42;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useLeftHandIfAkimbo");
  v43 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->useLeftHandIfAkimbo = v43;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useScopeStencil");
  if ( j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0 )
    *p_usageFlags |= 8u;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "applyLensDistortion");
  v44 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  _RDI->applyLensDistortion = v44;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minAlpha");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm8, xmm0, xmm7 }
  }
  __asm { vmovss  dword ptr [rdi+5Ch], xmm8 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minAlphaADS");
  __asm { vmovaps xmm8, [rsp+88h+var_58] }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm7, xmm0, xmm7 }
  }
  __asm { vmovss  dword ptr [rdi+60h], xmm7 }
  j_lua_settop(luaVM, -2);
  __asm { vmovaps xmm7, [rsp+88h+var_48] }
  return 0i64;
}

