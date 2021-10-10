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
  LUIAnchor *AnchorData; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetTagOffsets()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) && (v3 = LUI_ToElement(luaVM, 1), (AnchorData = LUIElement_Anchored_GetAnchorData(v3, luaVM)) != NULL) )
  {
    j_lua_createtable(luaVM, 0, 3);
    LUI_SetTableNumber("x", AnchorData->tagOffset.v[0], LUI_luaVM);
    LUI_SetTableNumber("y", AnchorData->tagOffset.v[1], LUI_luaVM);
    LUI_SetTableNumber("z", AnchorData->tagOffset.v[2], LUI_luaVM);
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
LUIElement_Anchored_SetTagOffsets
==============
*/
__int64 LUIElement_Anchored_SetTagOffsets(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  float v4; 
  double v5; 
  float v6; 
  double v7; 
  LUIAnchor *AnchorData; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetTagOffsets( x, y, z )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = *(float *)&v3;
    v5 = lui_tonumber32(luaVM, 3);
    v6 = *(float *)&v5;
    v7 = lui_tonumber32(luaVM, 4);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    AnchorData->tagOffset.v[0] = v4;
    AnchorData->tagOffset.v[1] = v6;
    AnchorData->tagOffset.v[2] = *(float *)&v7;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
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
  LUIElement *v2; 
  double v3; 
  float v4; 
  double v5; 
  float v6; 
  double v7; 
  LUIAnchor *AnchorData; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetWorldSpacePosition( x, y, z )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = *(float *)&v3;
    v5 = lui_tonumber32(luaVM, 3);
    v6 = *(float *)&v5;
    v7 = lui_tonumber32(luaVM, 4);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    AnchorData->worldOffset.v[0] = v4;
    AnchorData->worldOffset.v[1] = v6;
    AnchorData->worldOffset.v[2] = *(float *)&v7;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
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
  LUIAnchor *AnchorData; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetScreenOffsets()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) && (v3 = LUI_ToElement(luaVM, 1), (AnchorData = LUIElement_Anchored_GetAnchorData(v3, luaVM)) != NULL) )
  {
    j_lua_createtable(luaVM, 0, 2);
    LUI_SetTableNumber("x", AnchorData->screenOffset.v[0], LUI_luaVM);
    LUI_SetTableNumber("y", AnchorData->screenOffset.v[1], LUI_luaVM);
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
LUIElement_Anchored_SetScreenOffsets
==============
*/
__int64 LUIElement_Anchored_SetScreenOffsets(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  float v4; 
  double v5; 
  LUIAnchor *AnchorData; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetScreenOffsets( x, y )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = *(float *)&v3;
    v5 = lui_tonumber32(luaVM, 3);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    AnchorData->screenOffset.v[0] = v4;
    AnchorData->screenOffset.v[1] = *(float *)&v5;
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
LUIElement_Anchored_SetScreenSnapOffsets
==============
*/
__int64 LUIElement_Anchored_SetScreenSnapOffsets(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  float v4; 
  double v5; 
  LUIAnchor *AnchorData; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetScreenSnapOffsets( x, y )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = *(float *)&v3;
    v5 = lui_tonumber32(luaVM, 3);
    AnchorData = LUIElement_Anchored_GetAnchorData(v2, luaVM);
    AnchorData->screenSnapOffset.v[0] = v4;
    AnchorData->screenSnapOffset.v[1] = *(float *)&v5;
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
__int64 LUIElement_Anchored_SetScreenCenterFadeRadius(lua_State *const luaVM)
{
  LUIElement *v3; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetScreenCenterFadeRadius( radius )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmaxss  xmm6, xmm0, xmm1 }
    LUIElement_Anchored_GetAnchorData(v3, luaVM)->screenCenterFadeRadius = *(float *)&_XMM6;
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
__int64 LUIElement_Anchored_SetSnapRadius(lua_State *const luaVM)
{
  LUIElement *v3; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetSnapRadius( snapRadius )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmaxss  xmm6, xmm0, xmm1 }
    LUIElement_Anchored_GetAnchorData(v3, luaVM)->snapRadius = *(float *)&_XMM6;
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
  const dvar_t *v6; 
  float value; 
  const dvar_t *v8; 
  float v9; 
  __int128 v11; 
  float v15; 
  __int64 v17; 
  int v18; 
  vec3_t outOrg; 
  __int64 v20; 

  v20 = -2i64;
  if ( !LUIElement_Anchored_UseDistanceBasedFading(localClientNum, anchorData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 854, ASSERT_TYPE_ASSERT, "(LUIElement_Anchored_UseDistanceBasedFading( localClientNum, anchorData ))", (const char *)&queryFormat, "LUIElement_Anchored_UseDistanceBasedFading( localClientNum, anchorData )") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v18 = 2;
    LODWORD(v17) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 855, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v6 = DVARFLT_lui_objective_fadeStart;
  if ( !DVARFLT_lui_objective_fadeStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_fadeStart") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  value = v6->current.value;
  v8 = DVARFLT_lui_objective_fadeEnd;
  if ( !DVARFLT_lui_objective_fadeEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_fadeEnd") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.value;
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v11 = LODWORD(outOrg.v[1]);
  *(float *)&v11 = fsqrt((float)((float)((float)(outOrg.v[1] - worldPosition->v[1]) * (float)(outOrg.v[1] - worldPosition->v[1])) + (float)((float)(outOrg.v[0] - worldPosition->v[0]) * (float)(outOrg.v[0] - worldPosition->v[0]))) + (float)((float)(outOrg.v[2] - worldPosition->v[2]) * (float)(outOrg.v[2] - worldPosition->v[2])));
  _XMM1 = v11;
  if ( v9 > value )
  {
    if ( *(float *)&v11 >= value )
    {
      if ( *(float *)&v11 < v9 )
        v15 = (float)(3.0 - (float)((float)((float)(*(float *)&v11 - value) / (float)(v9 - value)) * 2.0)) * (float)((float)((float)(*(float *)&v11 - value) / (float)(v9 - value)) * (float)((float)(*(float *)&v11 - value) / (float)(v9 - value)));
      else
        v15 = FLOAT_1_0;
    }
    else
    {
      v15 = 0.0;
    }
    *(float *)&_XMM0 = 1.0 - v15;
  }
  else
  {
    __asm { vcmpltss xmm2, xmm1, xmm7 }
    _XMM0 = 0i64;
    __asm { vblendvps xmm0, xmm0, xmm1, xmm2 }
  }
  memset(&outOrg, 0, sizeof(outOrg));
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
  cg_t *LocalClientGlobals; 
  cg_t *v7; 
  float v8; 
  int naturalFOV; 
  float v10; 
  float perspectiveScaleLerpDistance; 
  float v12; 
  float maxScale; 
  double v14; 
  vec3_t outOrg; 
  __int64 v17; 

  v17 = -2i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 762, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = LocalClientGlobals;
  v8 = FLOAT_1_0;
  naturalFOV = anchorData->naturalFOV;
  if ( naturalFOV )
    v8 = (float)(0.0087266471 / atanf_0(LocalClientGlobals->refdef.view.fov.tanHalfFovY * 1.3333334)) * (float)naturalFOV;
  RefdefView_GetOrg(&v7->refdef.view, &outOrg);
  v10 = fsqrt((float)((float)((float)(outOrg.v[0] - worldPosition->v[0]) * (float)(outOrg.v[0] - worldPosition->v[0])) + (float)((float)(outOrg.v[1] - worldPosition->v[1]) * (float)(outOrg.v[1] - worldPosition->v[1]))) + (float)((float)(outOrg.v[2] - worldPosition->v[2]) * (float)(outOrg.v[2] - worldPosition->v[2])));
  if ( !anchorData->perspectiveScalingEnabled || v10 == 0.0 )
  {
    maxScale = anchorData->maxScale;
    v12 = maxScale;
  }
  else
  {
    perspectiveScaleLerpDistance = anchorData->perspectiveScaleLerpDistance;
    if ( perspectiveScaleLerpDistance == 0.0 || perspectiveScaleLerpDistance <= 0.0 )
    {
      maxScale = (float)(anchorData->naturalDistance / v10) * anchorData->defaultPerspectiveScale;
      v12 = anchorData->maxScale;
    }
    else
    {
      v12 = anchorData->maxScale;
      maxScale = (float)((float)(v12 - (float)((float)(v12 / perspectiveScaleLerpDistance) * v10)) - (float)(anchorData->minScale - (float)((float)(anchorData->minScale / perspectiveScaleLerpDistance) * v10))) + anchorData->minScale;
    }
  }
  v14 = I_fclamp(maxScale * v8, anchorData->minScale, v12);
  memset(&outOrg, 0, sizeof(outOrg));
  return *(float *)&v14;
}

/*
==============
LUIElement_Anchored_GetScreenPosition
==============
*/
_BOOL8 LUIElement_Anchored_GetScreenPosition(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, lua_State *luaVM, const dvec3_t *hiPrecisionWorldPosition, const vec3_t *lowPrecisionWorldPosition, float scale, bool roundScreenPos, vec2_t *outAnchorPoint, vec2_t *outTopLeft, vec2_t *outBottomRight)
{
  void *customElementData; 
  float v16; 
  float v17; 
  const ScreenPlacement *ActivePlacement; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  const GfxViewInfo *ViewInfo; 
  char v25; 
  const ScreenPlacement *v26; 
  bool v27; 
  char v28; 
  const char *v29; 
  cg_t *LocalClientGlobals; 
  _BYTE *v31; 
  char v32; 
  char v33; 
  const char *v34; 
  cg_t *v35; 
  float v36; 
  float v37; 
  float v38; 
  bool v39; 
  const ObjectiveSettings *ObjectiveSettings; 
  cg_t *v41; 
  float v42; 
  const dvar_t *v43; 
  bool v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  const ScreenPlacement *v49; 
  float v50; 
  float v51; 
  vec2_t *screenPosition; 
  vec2_t *outSnappedScreenPosition; 
  bool snapToLocation[8]; 
  vec3_t luaVMa; 
  LUIElementAxisPosition x; 
  __int64 v58; 
  vec2_t outScreenPos; 
  dvec3_t *worldPos; 

  v58 = -2i64;
  *(_QWORD *)luaVMa.v = luaVM;
  worldPos = (dvec3_t *)hiPrecisionWorldPosition;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 662, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = element->customElementData;
  if ( (element->currentAnimationState.flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 665, ASSERT_TYPE_ASSERT, "(element->currentAnimationState.flags & ( 1 << 0 ))", (const char *)&queryFormat, "element->currentAnimationState.flags & LUI_ANIMSTATE_INITIALIZED") )
    __debugbreak();
  x = element->currentAnimationState.position.x;
  v16 = LUI_Measure(&x) * unitScale;
  x = element->currentAnimationState.position.y;
  v17 = LUI_Measure(&x) * unitScale;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  CG_WorldPosToScreenPosRealForScenePrecise(localClientNum, ActivePlacement, worldPos, *((_BYTE *)customElementData + 312) == 3, &outScreenPos);
  v19 = outScreenPos.v[0];
  outAnchorPoint->v[0] = outScreenPos.v[0];
  v20 = outScreenPos.v[1];
  outAnchorPoint->v[1] = outScreenPos.v[1];
  v21 = (float)((float)(scale * *((float *)customElementData + 43)) * unitScale) + v20;
  v22 = (float)((float)(element->currentAnimationState.position.x.global[1] + element->currentAnimationState.position.x.global[0]) * 0.5) * unitScale;
  v23 = (float)((float)(element->currentAnimationState.position.y.global[1] + element->currentAnimationState.position.y.global[0]) * 0.5) * unitScale;
  outScreenPos.v[0] = (float)((float)((float)((float)((float)(scale * *((float *)customElementData + 42)) * unitScale) + v19) - v22) * element->currentAnimationState.userData) + v22;
  outScreenPos.v[1] = (float)((float)(v21 - v23) * element->currentAnimationState.userData) + v23;
  if ( *((_BYTE *)customElementData + 324) )
  {
    ViewInfo = LUI_GetViewInfo();
    if ( ViewInfo )
      R_ScopeDistortionTransform(ViewInfo, &outScreenPos, &outScreenPos);
  }
  v25 = *((_BYTE *)customElementData + 104);
  v26 = ScrPlace_GetActivePlacement(localClientNum);
  v27 = outScreenPos.v[0] < v26->realViewportSize.v[0] && outScreenPos.v[1] < v26->realViewportSize.v[1] && outScreenPos.v[0] > 0.0 && outScreenPos.v[1] > 0.0;
  v28 = !v27 + 1;
  *((_BYTE *)customElementData + 104) = v28;
  if ( *((_BYTE *)customElementData + 331) && v25 != v28 )
  {
    v29 = "anchor_off_screen";
    if ( v27 )
      v29 = "anchor_on_screen";
    if ( LUI_BeginEventWithElement(localClientNum, element, v29, luaVM) )
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
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  v31 = element->customElementData;
  v32 = v31[310];
  snapToLocation[0] = v32;
  if ( LocalClientGlobals->dualViewScope )
  {
    if ( LocalClientGlobals->scopeBoundingCircleValid )
      goto LABEL_42;
    LocalClientGlobals->scopeBoundingCircleValid = CG_FetchScreenSpaceScopeBoundingCircle(localClientNum, &LocalClientGlobals->scopeBoundingCircle);
    v32 = snapToLocation[0];
  }
  if ( !LocalClientGlobals->scopeBoundingCircleValid )
  {
    v31[310] = 1;
    v33 = 1;
    goto LABEL_45;
  }
LABEL_42:
  if ( (float)((float)((float)(LocalClientGlobals->scopeBoundingCircle.v[1] - outScreenPos.v[1]) * (float)(LocalClientGlobals->scopeBoundingCircle.v[1] - outScreenPos.v[1])) + (float)((float)(LocalClientGlobals->scopeBoundingCircle.v[0] - outScreenPos.v[0]) * (float)(LocalClientGlobals->scopeBoundingCircle.v[0] - outScreenPos.v[0]))) <= LocalClientGlobals->scopeBoundingCircle.v[2] )
  {
    v31[310] = 2;
    v33 = 2;
  }
  else
  {
    v31[310] = 3;
    v33 = 3;
  }
LABEL_45:
  if ( v31[311] == 1 && v32 != v33 )
  {
    switch ( v33 )
    {
      case 1:
        v34 = "anchor_scope_off";
        break;
      case 2:
        v34 = "anchor_within_scope_frame";
        break;
      case 3:
        v34 = "anchor_outside_scope_frame";
        break;
      default:
        goto LABEL_55;
    }
    if ( LUI_BeginEventWithElement(localClientNum, element, v34, *(lua_State **)luaVMa.v) )
      LUI_EndEventWithElement(*(lua_State **)luaVMa.v);
  }
LABEL_55:
  if ( *((_BYTE *)customElementData + 327) && *((_BYTE *)customElementData + 310) == 3 )
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
    v35 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v35->scopeBoundingCircleValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 289, ASSERT_TYPE_ASSERT, "(cgameGlob->scopeBoundingCircleValid)", (const char *)&queryFormat, "cgameGlob->scopeBoundingCircleValid") )
      __debugbreak();
    v36 = v35->scopeBoundingCircle.v[0];
    v37 = v35->scopeBoundingCircle.v[1];
    v38 = fsqrt(v35->scopeBoundingCircle.v[2] / (float)((float)((float)(v36 - outScreenPos.v[0]) * (float)(v36 - outScreenPos.v[0])) + (float)((float)(v37 - outScreenPos.v[1]) * (float)(v37 - outScreenPos.v[1]))));
    outScreenPos.v[0] = outScreenPos.v[0] + (float)((float)((float)((float)(outScreenPos.v[0] - v36) * v38) + v36) - outScreenPos.v[0]);
    outScreenPos.v[1] = outScreenPos.v[1] + (float)((float)((float)((float)(outScreenPos.v[1] - v37) * v38) + v37) - outScreenPos.v[1]);
    v39 = 1;
  }
  else
  {
    if ( !*((_BYTE *)customElementData + 326) )
      goto LABEL_76;
    if ( !*((_BYTE *)customElementData + 112) )
      goto LABEL_75;
    ObjectiveSettings = LUIElement_Anchored_GetObjectiveSettings(localClientNum, (const LUIAnchor *const)customElementData);
    if ( ObjectiveSettings )
    {
      if ( ObjectiveSettings->alwaysSnapToScreenEdge )
        goto LABEL_75;
    }
    v41 = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&v41->refdef.view, &luaVMa);
    v42 = fsqrt((float)((float)((float)(luaVMa.v[1] - lowPrecisionWorldPosition->v[1]) * (float)(luaVMa.v[1] - lowPrecisionWorldPosition->v[1])) + (float)((float)(luaVMa.v[0] - lowPrecisionWorldPosition->v[0]) * (float)(luaVMa.v[0] - lowPrecisionWorldPosition->v[0]))) + (float)((float)(luaVMa.v[2] - lowPrecisionWorldPosition->v[2]) * (float)(luaVMa.v[2] - lowPrecisionWorldPosition->v[2])));
    v43 = DVARFLT_lui_objective_stopSnapDistance;
    if ( !DVARFLT_lui_objective_stopSnapDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_stopSnapDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    v44 = v43->current.value > v42;
    memset(&luaVMa, 0, sizeof(luaVMa));
    if ( v44 )
    {
LABEL_75:
      x = element->currentAnimationState.position.x;
      v45 = LUI_Measure(&x) * (float)(unitScale * scale);
      x = element->currentAnimationState.position.y;
      v46 = LUI_Measure(&x);
      snapToLocation[0] = *((_BYTE *)customElementData + 328);
      *(float *)&worldPos = unitScale * *((float *)customElementData + 44);
      *((float *)&worldPos + 1) = unitScale * *((float *)customElementData + 45);
      LUIElement_Anchored_SnapScreenPositionToEdges(localClientNum, unitScale * *((float *)customElementData + 25), v45, v46 * (float)(unitScale * scale), *((const float *)customElementData + 27), &outScreenPos, &outScreenPos, snapToLocation, (const vec2_t *)&worldPos);
      v39 = 1;
    }
    else
    {
LABEL_76:
      v47 = outScreenPos.v[0] - (float)((float)(v16 * scale) * 0.5);
      v48 = outScreenPos.v[1] - (float)((float)(v17 * scale) * 0.5);
      v49 = ScrPlace_GetActivePlacement(localClientNum);
      v39 = v47 < v49->realViewportSize.v[0] && v48 < v49->realViewportSize.v[1] && (float)(v47 + (float)(v16 * scale)) > 0.0 && (float)(v48 + (float)(v17 * scale)) > 0.0;
    }
  }
  v51 = outScreenPos.v[0] - (float)(v16 * 0.5);
  v50 = v51;
  outTopLeft->v[0] = v51;
  outTopLeft->v[1] = outScreenPos.v[1] - (float)(v17 * 0.5);
  if ( roundScreenPos )
  {
    outTopLeft->v[0] = roundf(v51);
    outTopLeft->v[1] = roundf(outTopLeft->v[1]);
    v50 = outTopLeft->v[0];
  }
  outBottomRight->v[0] = v50 + v16;
  outBottomRight->v[1] = v17 + outTopLeft->v[1];
  outTopLeft->v[0] = (float)(1.0 / unitScale) * outTopLeft->v[0];
  outTopLeft->v[1] = (float)(1.0 / unitScale) * outTopLeft->v[1];
  outBottomRight->v[0] = (float)(1.0 / unitScale) * outBottomRight->v[0];
  outBottomRight->v[1] = (float)(1.0 / unitScale) * outBottomRight->v[1];
  return v39;
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
  float v9; 
  float v10; 
  float v11; 
  bool result; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v19; 
  float v29; 
  float v30; 
  float v31; 
  int worldOffset; 
  int outOffset; 
  vec3_t v34; 
  vec3_t v35; 
  tmat33_t<vec3_t> outLocalAxis; 
  tmat33_t<vec3_t> dst; 

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
      ScriptableCl_GetPartUsePosition((const LocalClientNum_t)v4, v7, (unsigned __int8)v8, outWorldPosition);
      LUI_ComputeWorldOffset((const LocalClientNum_t)v4, anchorData->entityNum, &dst, &anchorData->tagOffset, &anchorData->entityOffset, &anchorData->worldOffset, &v34);
      v9 = v34.v[1];
      outWorldPosition->v[0] = v34.v[0] + outWorldPosition->v[0];
      v10 = v9 + outWorldPosition->v[1];
      v11 = v34.v[2];
      outWorldPosition->v[1] = v10;
      outWorldPosition->v[2] = v11 + outWorldPosition->v[2];
      return 1;
    }
    goto LABEL_28;
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v4, entityNum);
  if ( (Entity->flags & 1) == 0 || (LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4), !CG_View_IsOutOfBody((const LocalClientNum_t)v4)) && LocalClientGlobals->predictedPlayerState.clientNum == anchorData->entityNum )
  {
LABEL_28:
    result = 0;
    *(_QWORD *)outWorldPosition->v = 0i64;
    outWorldPosition->v[2] = 0.0;
    return result;
  }
  if ( !anchorData->tagName[0] || !LUI_GetEntityTagPositionAndAxis((const LocalClientNum_t)v4, anchorData->entityNum, anchorData->tagName, &outLocalAxis, outWorldPosition) )
  {
    MatrixClear33(&outLocalAxis);
    if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
    FunctionPointer_origin(&Entity->pose.origin.origin.origin, outWorldPosition);
    if ( Entity->pose.isPosePrecise )
    {
      _XMM0 = LODWORD(outWorldPosition->v[0]);
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v19 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v19 = *(double *)&_XMM0 * 0.000244140625;
      _XMM0 = v19;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      _XMM0 = LODWORD(outWorldPosition->v[1]);
      __asm { vcvtdq2pd xmm0, xmm0 }
      outWorldPosition->v[0] = *(float *)&_XMM1;
      *((_QWORD *)&v19 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v19 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v19;
      _XMM0 = LODWORD(outWorldPosition->v[2]);
      __asm
      {
        vcvtsd2ss xmm2, xmm1, xmm1
        vcvtdq2pd xmm0, xmm0
      }
      *((_QWORD *)&v19 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v19 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v19;
      outWorldPosition->v[1] = *(float *)&_XMM2;
      __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
      outWorldPosition->v[2] = *(float *)&_XMM2;
    }
  }
  LUI_ComputeWorldOffset((const LocalClientNum_t)v4, anchorData->entityNum, &outLocalAxis, &anchorData->tagOffset, &anchorData->entityOffset, &anchorData->worldOffset, &v35);
  v29 = v35.v[1];
  outWorldPosition->v[0] = v35.v[0] + outWorldPosition->v[0];
  v30 = v29 + outWorldPosition->v[1];
  v31 = v35.v[2];
  outWorldPosition->v[1] = v30;
  outWorldPosition->v[2] = v31 + outWorldPosition->v[2];
  return 1;
}

/*
==============
LUIElement_Anchored_Layout
==============
*/
void LUIElement_Anchored_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  bool v5; 
  int v7; 
  LUIAnchor *customElementData; 
  bool v11; 
  LUIAnchorAttachType attachType; 
  PlayerHandIndex PlayerHandIndexToUseForWidget; 
  cg_t *LocalClientGlobals; 
  float v15; 
  float v16; 
  float v17; 
  cg_t *v24; 
  PlayerHandIndex v25; 
  float v26; 
  float v27; 
  float v28; 
  float v36; 
  double v38; 
  __m128 v40; 
  double v42; 
  __m128 v44; 
  float v46; 
  cg_t *v50; 
  __int64 entityNum; 
  __int128 v53; 
  float v54; 
  float v55; 
  bool WorldPosition; 
  float Scale; 
  bool v58; 
  float alpha; 
  bool v60; 
  bool v61; 
  LUITraceRequest *activeTraceRequest; 
  _BYTE *v63; 
  LUIAnchorTagType currentTraceTag; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  const vec3_t *v68; 
  LUITraceRequest *v69; 
  char v70; 
  const char *v71; 
  __int128 v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  const ScreenPlacement *ActivePlacement; 
  float v78; 
  __int128 v79; 
  float v80; 
  cg_t *v83; 
  float v84; 
  float v85; 
  float v86; 
  LUIElement *firstChild; 
  dvec3_t *v88; 
  __int64 ignoreOffsetsForTraces; 
  bool v90; 
  bool outHit; 
  bool outTriviallyNotInSight; 
  char v93; 
  int v94; 
  vec3_t outOrigin; 
  dvec3_t outWorldPosition; 
  vec2_t screenSpaceBottomRight; 
  vec2_t screenSpaceTopLeft; 
  tmat33_t<vec3_t> in1; 
  vec3_t angles; 
  __int128 v101; 
  vec2_t inOutAnchorPoint; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> outLocalAxis; 
  tmat33_t<vec3_t> v106; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> v109; 

  v5 = element->customElementData == NULL;
  v7 = deltaTime;
  v94 = deltaTime;
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (LUIAnchor *)element->customElementData;
  v11 = 1;
  attachType = customElementData->attachType;
  if ( attachType == ATTACH_VIEWMODEL )
  {
    PlayerHandIndexToUseForWidget = LUI_GetPlayerHandIndexToUseForWidget(localClientNum, customElementData->useLeftHandIfAkimbo);
    if ( LUI_GetViewModelTransform(localClientNum, PlayerHandIndexToUseForWidget, customElementData->tagName, &outLocalAxis, &outWorldPosition) )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &axis);
      MatrixInverse(&axis, &out);
      MatrixMultiply(&outLocalAxis, &out, &v106);
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    AxisToAngles(&v106, &angles);
    v15 = angles.v[2];
    v16 = angles.v[1];
    element->xRot = COERCE_FLOAT(LODWORD(angles.v[0]) ^ _xmm);
    LODWORD(v17) = LODWORD(v15) ^ _xmm;
    _XMM0 = *(unsigned __int64 *)&outWorldPosition.y;
    element->currentAnimationState.zRot = v17;
    _XMM1 = *(unsigned __int64 *)&outWorldPosition.z;
    element->yRot = v16;
    _XMM2 = *(unsigned __int64 *)&outWorldPosition.x;
    __asm
    {
      vcvtpd2ps xmm1, xmm1
      vcvtpd2ps xmm2, xmm2
      vcvtpd2ps xmm0, xmm0
    }
    outOrigin.v[2] = *(float *)&_XMM1;
    outOrigin.v[0] = *(float *)&_XMM2;
    outOrigin.v[1] = *(float *)&_XMM0;
    goto LABEL_30;
  }
  if ( attachType != ATTACH_VIEWMODEL_RETICLE )
  {
    switch ( attachType )
    {
      case ATTACH_WORLD:
        _XMM1 = LODWORD(customElementData->worldOffset.v[0]);
        *(_QWORD *)outOrigin.v = *(_QWORD *)customElementData->worldOffset.v;
        v36 = customElementData->worldOffset.v[2];
        __asm { vunpcklps xmm0, xmm1, xmm0 }
        break;
      case ATTACH_SCRIPTABLE:
        ScriptableCl_GetInstanceOrigin(localClientNum, customElementData->entityNum, &outOrigin);
        v44 = (__m128)LODWORD(outOrigin.v[0]);
        v44.m128_f32[0] = outOrigin.v[0] + customElementData->worldOffset.v[0];
        _XMM3 = v44;
        _XMM0 = LODWORD(outOrigin.v[2]);
        outOrigin.v[0] = v44.m128_f32[0];
        outOrigin.v[1] = outOrigin.v[1] + customElementData->worldOffset.v[1];
        v46 = outOrigin.v[2] + customElementData->worldOffset.v[2];
        __asm
        {
          vunpcklps xmm1, xmm3, xmm2
          vxorpd  xmm0, xmm0, xmm0
        }
        *(double *)outOrigin.v = *(double *)&_XMM1;
        v44.m128_u64[1] = *((_QWORD *)&_XMM0 + 1);
        v44.m128_u64[0] = *(unsigned __int64 *)&_XMM1;
        _XMM2 = _mm_cvtps_pd(v44);
        __asm { vmovupd xmmword ptr [rsp+2E8h+outWorldPosition], xmm2 }
        outOrigin.v[2] = v46;
        v42 = v46;
        goto LABEL_29;
      case ATTACH_OBJECTIVE:
        v50 = CG_GetLocalClientGlobals(localClientNum);
        entityNum = customElementData->entityNum;
        v53 = LODWORD(customElementData->worldOffset.v[0]);
        *(float *)&v53 = customElementData->worldOffset.v[0] + v50->predictedPlayerState.objectives[entityNum].origin[0].v[0];
        _XMM2 = v53;
        v54 = v50->predictedPlayerState.objectives[entityNum].origin[0].v[1];
        v55 = v50->predictedPlayerState.objectives[entityNum].origin[0].v[2];
        outOrigin.v[0] = *(float *)&v53;
        outOrigin.v[1] = v54 + customElementData->worldOffset.v[1];
        v36 = v55 + customElementData->worldOffset.v[2];
        __asm { vunpcklps xmm0, xmm2, xmm0 }
        break;
      default:
        if ( attachType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 1153, ASSERT_TYPE_ASSERT, "(anchorData->attachType == LUIAnchorAttachType::ATTACH_ENTITY)", (const char *)&queryFormat, "anchorData->attachType == LUIAnchorAttachType::ATTACH_ENTITY") )
          __debugbreak();
        WorldPosition = LUIElement_Anchored_GetWorldPosition(localClientNum, customElementData, &outOrigin);
        outWorldPosition.x = outOrigin.v[0];
        v42 = outOrigin.v[2];
        outWorldPosition.y = outOrigin.v[1];
        v11 = WorldPosition;
        goto LABEL_29;
    }
    v38 = *(double *)&_XMM0;
    *(double *)outOrigin.v = *(double *)&_XMM0;
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    v40.m128_u64[1] = *((_QWORD *)&_XMM0 + 1);
    *(double *)v40.m128_u64 = v38;
    _XMM2 = _mm_cvtps_pd(v40);
    __asm { vmovupd xmmword ptr [rsp+2E8h+outWorldPosition], xmm2 }
    outOrigin.v[2] = v36;
    v42 = v36;
LABEL_29:
    outWorldPosition.z = v42;
    goto LABEL_30;
  }
  v24 = CG_GetLocalClientGlobals(localClientNum);
  v25 = LUI_GetPlayerHandIndexToUseForWidget(localClientNum, customElementData->useLeftHandIfAkimbo);
  if ( LUI_GetViewModelReticleTransform(localClientNum, v25, customElementData->tagName, customElementData->isLockedToTag, &in1, &outWorldPosition) )
  {
    v26 = customElementData->tagOffset.v[0];
    if ( v26 != 0.0 || customElementData->tagOffset.v[1] != 0.0 || customElementData->tagOffset.v[2] != 0.0 )
    {
      v27 = customElementData->tagOffset.v[1];
      v28 = customElementData->tagOffset.v[2];
      outWorldPosition.x = (float)((float)((float)(v26 * in1.m[0].v[0]) + (float)(v27 * in1.m[1].v[0])) + (float)(v28 * in1.m[2].v[0])) + outWorldPosition.x;
      outWorldPosition.y = (float)((float)((float)(v26 * in1.m[0].v[1]) + (float)(v27 * in1.m[1].v[1])) + (float)(v28 * in1.m[2].v[1])) + outWorldPosition.y;
      outWorldPosition.z = (float)((float)((float)(v26 * in1.m[0].v[2]) + (float)(v27 * in1.m[1].v[2])) + (float)(v28 * in1.m[2].v[2])) + outWorldPosition.z;
    }
    AnglesToAxis(&v24->refdefViewAngles, &in);
    MatrixInverse(&in, &in2);
    MatrixMultiply(&in1, &in2, &v109);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  _XMM0 = *(unsigned __int64 *)&outWorldPosition.x;
  _XMM1 = *(unsigned __int64 *)&outWorldPosition.y;
  __asm { vcvtpd2ps xmm0, xmm0 }
  outOrigin.v[0] = *(float *)&_XMM0;
  _XMM0 = *(unsigned __int64 *)&outWorldPosition.z;
  __asm
  {
    vcvtpd2ps xmm0, xmm0
    vcvtpd2ps xmm1, xmm1
  }
  outOrigin.v[2] = *(float *)&_XMM0;
  outOrigin.v[1] = *(float *)&_XMM1;
  AxisToAngles(&v109, (vec3_t *)&v101);
  element->currentAnimationState.zRot = COERCE_FLOAT(DWORD2(v101) ^ _xmm);
LABEL_30:
  LUIElement_UpdateLayout(element, unitScale, v7, luaVM);
  Scale = 0.0;
  v58 = LUIElement_Anchored_UseDistanceBasedFading(localClientNum, customElementData);
  alpha = FLOAT_1_0;
  v60 = !v58;
  v90 = !v58;
  if ( !v58 )
    alpha = element->currentAnimationState.alpha;
  if ( v11 )
  {
    if ( v58 )
    {
      alpha = alpha * LUIElement_Anchored_GetDistanceBasedFadeAlpha(localClientNum, customElementData, &outOrigin);
      v11 = alpha > 0.0;
    }
    if ( v11 )
    {
      Scale = LUIElement_Anchored_GetScale(localClientNum, customElementData, &outOrigin);
      if ( !LUIElement_Anchored_GetScreenPosition(localClientNum, element, unitScale, luaVM, &outWorldPosition, &outOrigin, Scale, customElementData->roundScreenPosition, &inOutAnchorPoint, &screenSpaceTopLeft, &screenSpaceBottomRight) )
        v11 = 0;
    }
  }
  if ( customElementData->scopeStatus[0] == 3 && !customElementData->snapToScopeEdges && customElementData->onScope == 2 )
    v11 = 0;
  if ( customElementData->onObstruction )
  {
    v61 = 0;
    if ( customElementData->alwaysShowUnderCrosshair )
    {
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(ignoreOffsetsForTraces) = 2;
        LODWORD(v88) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v88, ignoreOffsetsForTraces) )
          __debugbreak();
      }
      if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 1201, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
        __debugbreak();
      v61 = CG_GetLocalClientGlobals(localClientNum)->crosshairClientNum == customElementData->entityNum;
    }
    activeTraceRequest = customElementData->activeTraceRequest;
    v93 = customElementData->finalObstruction[0];
    if ( activeTraceRequest )
    {
      v63 = &customElementData->primaryObstruction[customElementData->currentTraceTag == SECONDARY];
      if ( LUITraceRunner::GetTraceResult(localClientNum, activeTraceRequest, &outHit) )
      {
        v5 = outHit;
        customElementData->activeTraceRequest = NULL;
        *v63 = !v5 + 1;
      }
    }
    if ( !customElementData->activeTraceRequest )
    {
      currentTraceTag = customElementData->currentTraceTag;
      if ( customElementData->secondaryObstructionTagName[0] )
      {
        currentTraceTag = currentTraceTag == PRIMARY;
        customElementData->currentTraceTag = currentTraceTag;
      }
      v65 = (currentTraceTag == SECONDARY) + 305i64;
      v66 = 144i64;
      if ( currentTraceTag != SECONDARY )
        v66 = 132i64;
      v67 = 240i64;
      v68 = (const vec3_t *)((char *)customElementData + v66);
      if ( currentTraceTag != SECONDARY )
        v67 = 4i64;
      v69 = LUITraceRunner::RequestTraceToEntityOffset(localClientNum, customElementData->entityNum, (const char *)customElementData + v67, v68, &customElementData->entityOffset, &customElementData->worldOffset, customElementData->ignoreOffsetsForTraces, *((_BYTE *)&customElementData->entityNum + v65) == 0, &outTriviallyNotInSight, customElementData->useClientDetailWorld);
      customElementData->activeTraceRequest = v69;
      if ( !v69 )
      {
        if ( outTriviallyNotInSight )
          *((_BYTE *)&customElementData->entityNum + v65) = 1;
        else
          Com_PrintWarning(13, "LUI_Traces queue is full");
      }
    }
    v70 = customElementData->primaryObstruction[0];
    if ( customElementData->secondaryObstructionTagName[0] && (char)customElementData->secondaryObstruction[0] > v70 )
      v70 = customElementData->secondaryObstruction[0];
    customElementData->finalObstruction[0] = v70;
    if ( v61 )
    {
      customElementData->finalObstruction[0] = 2;
      v70 = 2;
    }
    if ( !v70 && !customElementData->displayOnObstructionUnknown )
      v11 = 0;
    if ( v70 == v93 || customElementData->onObstruction != SHOW )
      goto LABEL_81;
    if ( v70 == 1 )
    {
      v71 = "anchor_sight_obstructed";
    }
    else
    {
      if ( v70 != 2 )
      {
LABEL_81:
        v7 = v94;
        v60 = v90;
        if ( customElementData->onObstruction == 2 && customElementData->finalObstruction[0] != 2 )
          v11 = 0;
        goto LABEL_84;
      }
      v71 = "anchor_sight_clear";
    }
    if ( LUI_BeginEventWithElement(localClientNum, element, v71, luaVM) )
      LUI_EndEventWithElement(luaVM);
    goto LABEL_81;
  }
LABEL_84:
  v72 = *(_OWORD *)element->currentAnimationState.position.y.global;
  *(__m256i *)in1.m[0].v = *(__m256i *)element->currentAnimationState.position.x.offsets;
  v101 = v72;
  if ( v11 )
  {
    v73 = screenSpaceTopLeft.v[1];
    v74 = screenSpaceTopLeft.v[0];
    v75 = screenSpaceBottomRight.v[1];
    v76 = screenSpaceBottomRight.v[0];
    if ( customElementData->screenCenterFadeRadius <= 0.0 )
    {
      v78 = FLOAT_1_0;
    }
    else
    {
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(ignoreOffsetsForTraces) = 2;
        LODWORD(v88) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v88, ignoreOffsetsForTraces) )
          __debugbreak();
      }
      if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 812, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
        __debugbreak();
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      v78 = FLOAT_1_0;
      v79 = LODWORD(FLOAT_0_5);
      v80 = (float)(0.5 * ActivePlacement->realViewportSize.v[0]) - (float)((float)((float)(v76 + v74) * 0.5) * unitScale);
      *(float *)&v79 = (float)((float)((float)((float)(0.5 * ActivePlacement->realViewportSize.v[1]) - (float)((float)((float)(v75 + v73) * 0.5) * unitScale)) * (float)((float)(0.5 * ActivePlacement->realViewportSize.v[1]) - (float)((float)((float)(v75 + v73) * 0.5) * unitScale))) + (float)(v80 * v80)) / (float)((float)(unitScale * customElementData->screenCenterFadeRadius) * (float)(unitScale * customElementData->screenCenterFadeRadius));
      _XMM2 = v79;
      __asm { vminss  xmm6, xmm2, xmm14 }
      v83 = CG_GetLocalClientGlobals(localClientNum);
      v84 = (float)((float)((float)((float)(1.0 - v83->predictedPlayerState.weapCommon.fWeaponPosFrac) * customElementData->minAlpha) + (float)(v83->predictedPlayerState.weapCommon.fWeaponPosFrac * customElementData->minAlphaADS)) * (float)(1.0 - *(float *)&_XMM6)) + *(float *)&_XMM6;
      v72 = v101;
      if ( v60 )
        alpha = v84;
      else
        alpha = alpha * v84;
    }
    if ( customElementData->scaleUsingLayout )
    {
      v85 = (float)((float)((float)(v76 - v74) * 0.5) + v74) * (float)(v78 - Scale);
      element->currentAnimationState.position.x.global[0] = (float)(v74 * Scale) + v85;
      v86 = (float)((float)((float)(v75 - v73) * 0.5) + v73) * (float)(v78 - Scale);
      element->currentAnimationState.position.y.global[0] = (float)(v73 * Scale) + v86;
      element->currentAnimationState.position.y.global[1] = (float)(v75 * Scale) + v86;
      element->currentAnimationState.position.x.global[1] = (float)(v76 * Scale) + v85;
    }
    else
    {
      element->currentAnimationState.position.x.global[0] = v74;
      element->currentAnimationState.position.y.global[0] = v73;
      element->currentAnimationState.position.x.global[1] = v76;
      element->currentAnimationState.position.y.global[1] = v75;
      element->currentAnimationState.scale = Scale - v78;
    }
    LUIElement_SetDimensions(element, unitScale);
  }
  else
  {
    element->currentAnimationState.flags &= ~1u;
  }
  firstChild = element->firstChild;
  element->layoutCached = !v11;
  for ( element->currentAnimationState.alpha = alpha; firstChild; firstChild = firstChild->nextSibling )
    LUIElement_Layout(localClientNum, firstChild, unitScale, v7, luaVM);
  if ( v11 && customElementData->rotateElementCount > 0 )
    LUIElement_Anchored_UpdateRotatedElements(unitScale, customElementData, &inOutAnchorPoint, &screenSpaceTopLeft, &screenSpaceBottomRight);
  *(__m256i *)element->currentAnimationState.position.x.offsets = *(__m256i *)in1.m[0].v;
  *(_OWORD *)element->currentAnimationState.position.y.global = v72;
}

/*
==============
LUIElement_Anchored_SetAnchoringAmount_impl
==============
*/
__int64 LUIElement_Anchored_SetAnchoringAmount_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v6; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetAnchoringAmount( lerpFactor, duration, easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 || (v5 = lui_tointeger32(luaVM, 3), v5 <= 0) )
  {
    LOBYTE(v4) = 51;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->currentAnimationState.userData = *(float *)&v3;
    return 0i64;
  }
  v6 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v6->easing = lui_tointeger32(luaVM, 4);
  v6->targetProperty[0] = 51;
  v6->duration = v5;
  v6->startValue.intValue = v2->currentAnimationState.userDataInt;
  v6->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v6, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v6, luaVM);
  return 1i64;
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
__int64 LUIElement_Anchored_SnapScreenPositionToEdges(const LocalClientNum_t localClientNum, const float snapRadius, const float elementwWidth, const float elementHeight, const float snapToEdgesSmoothingRadius, const vec2_t *screenPosition, vec2_t *outSnappedScreenPosition, const bool *snapToLocation, const vec2_t *screenSnapOffset)
{
  const ScreenPlacement *ActivePlacement; 
  unsigned __int8 v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  int v36; 
  __int128 v37; 
  float v38; 
  float v39; 
  float v42; 
  unsigned int v43; 
  int v44; 
  __int64 v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  __int128 v51; 
  __int64 v52; 
  __int128 v53; 
  float v54; 
  float v55; 
  float v56; 
  char v57; 
  char v58; 
  float v59; 
  __int128 v60; 
  __int64 result; 
  float v65; 
  float v66; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v12 = 0;
  v13 = 0.5 * ActivePlacement->realViewportSize.v[0];
  v14 = 0.5 * ActivePlacement->realViewportSize.v[1];
  v15 = elementwWidth * 0.5;
  v16 = elementHeight * 0.5;
  v17 = screenPosition->v[0];
  outSnappedScreenPosition->v[0] = screenPosition->v[0];
  v18 = screenPosition->v[1] - v14;
  v20 = v17 - v13;
  v19 = v17 - v13;
  outSnappedScreenPosition->v[1] = v18;
  outSnappedScreenPosition->v[0] = v17 - v13;
  v21 = ActivePlacement->realAdjustableMin.v[0] - v13;
  v22 = v13 - (float)(ActivePlacement->realViewportSize.v[0] - ActivePlacement->realAdjustableMax.v[0]);
  v23 = ActivePlacement->realAdjustableMin.v[1] - v14;
  v24 = v14 - (float)(ActivePlacement->realViewportSize.v[1] - ActivePlacement->realAdjustableMax.v[1]);
  v66 = v13;
  v65 = v14;
  v25 = v17 - v13;
  v26 = v18;
  if ( snapRadius > 0.0 )
  {
    v27 = fsqrt((float)(v18 * v18) + (float)(v20 * v20));
    if ( v27 > snapRadius )
    {
      v25 = (float)(v19 * snapRadius) * (float)(1.0 / v27);
      v26 = (float)(v18 * snapRadius) * (float)(1.0 / v27);
      outSnappedScreenPosition->v[1] = v26;
      outSnappedScreenPosition->v[0] = v25;
      v12 = 1;
    }
  }
  v28 = v25 + v15;
  if ( (float)(v25 - v15) < v21 && v28 <= v22 )
  {
    v29 = v21 + v15;
LABEL_10:
    v30 = v26 * (float)(v29 / v25);
    v31 = v25 * (float)(v29 / v25);
    outSnappedScreenPosition->v[1] = v30;
    outSnappedScreenPosition->v[0] = v31;
    v12 = 1;
    goto LABEL_11;
  }
  v30 = v26;
  v31 = v25;
  if ( v28 > v22 && (float)(v25 - v15) >= v21 )
  {
    v29 = v22 - v15;
    goto LABEL_10;
  }
LABEL_11:
  v32 = v30 + v16;
  if ( (float)(v30 - v16) < v23 && v32 <= v24 )
  {
    v33 = v23 + v16;
LABEL_17:
    v35 = v30 * (float)(v33 / v30);
    v34 = v31 * (float)(v33 / v30);
    outSnappedScreenPosition->v[1] = v35;
    outSnappedScreenPosition->v[0] = v34;
    v12 = 1;
    goto LABEL_18;
  }
  v34 = v31;
  v35 = v30;
  if ( v32 > v24 && (float)(v30 - v16) >= v23 )
  {
    v33 = v24 - v16;
    goto LABEL_17;
  }
LABEL_18:
  v36 = 0;
  if ( *snapToLocation )
  {
    *outSnappedScreenPosition = 0i64;
    v34 = screenSnapOffset->v[0];
    outSnappedScreenPosition->v[0] = screenSnapOffset->v[0];
    v35 = screenSnapOffset->v[1];
    outSnappedScreenPosition->v[1] = v35;
  }
  if ( snapToEdgesSmoothingRadius != 0.0 )
  {
    v37 = LODWORD(ActivePlacement->realAdjustableMax.v[1]);
    v38 = v65;
    v39 = v65;
    *(float *)&v37 = (float)(ActivePlacement->realAdjustableMax.v[1] - ActivePlacement->realAdjustableMin.v[1]) * 0.5;
    _XMM3 = v37;
    __asm { vminss  xmm3, xmm3, xmm1 }
    v42 = *(float *)&_XMM3 * snapToEdgesSmoothingRadius;
    v43 = -1;
    while ( 1 )
    {
      v44 = -1;
      do
      {
        if ( !v43 || !v44 )
          goto LABEL_40;
        if ( v36 > 1 )
          break;
        v45 = 22i64;
        v46 = _mm_cvtepi32_ps((__m128i)v43).m128_f32[0];
        v47 = (float)(v46 * v15) + outSnappedScreenPosition->v[0];
        if ( v43 != -1 )
          v45 = 24i64;
        v48 = _mm_cvtepi32_ps((__m128i)(unsigned int)v44).m128_f32[0];
        v49 = (float)(v48 * v16) + outSnappedScreenPosition->v[1];
        v51 = LODWORD(ActivePlacement->scaleVirtualToReal.v[v45]);
        *(float *)&v51 = (float)(*(float *)&v51 - (float)(v46 * v42)) - v66;
        v50 = *(float *)&v51;
        v52 = 23i64;
        if ( v44 != -1 )
          v52 = 25i64;
        *(float *)&v51 = *(float *)&v51 - v47;
        v53 = v51;
        v54 = (float)(ActivePlacement->scaleVirtualToReal.v[v52] - (float)(v48 * v42)) - v65;
        v56 = v54 - v49;
        v55 = v54 - v49;
        if ( v43 == -1 )
        {
          if ( *(float *)&v53 <= 0.0 )
            goto LABEL_32;
        }
        else if ( *(float *)&v53 >= 0.0 )
        {
LABEL_32:
          v57 = 0;
          goto LABEL_33;
        }
        v57 = 1;
LABEL_33:
        if ( v44 == -1 )
        {
          if ( v56 > 0.0 )
            goto LABEL_48;
        }
        else if ( v56 < 0.0 )
        {
LABEL_48:
          v58 = 1;
          goto LABEL_36;
        }
        v58 = 0;
LABEL_36:
        if ( v57 )
        {
          if ( v58 )
          {
            v59 = fsqrt((float)((float)(v49 - v54) * (float)(v49 - v54)) + (float)((float)(v47 - v50) * (float)(v47 - v50)));
            v60 = v53;
            *(float *)&v60 = fsqrt((float)(*(float *)&v53 * *(float *)&v53) + (float)(v55 * v55));
            _XMM2 = v60;
            __asm
            {
              vcmpless xmm0, xmm2, xmm12
              vblendvps xmm0, xmm2, xmm13, xmm0
            }
            if ( v59 > v42 )
            {
              v39 = (float)(*(float *)&v53 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v59 - v42);
              v38 = (float)(v59 - v42) * (float)((float)(1.0 / *(float *)&_XMM0) * v55);
              ++v36;
            }
          }
        }
LABEL_40:
        ++v44;
      }
      while ( v44 < 2 );
      if ( (int)++v43 >= 2 )
      {
        v34 = outSnappedScreenPosition->v[0];
        v35 = outSnappedScreenPosition->v[1];
        if ( v36 == 1 )
        {
          v34 = v34 + v39;
          v35 = v35 + v38;
        }
        break;
      }
    }
  }
  result = v12;
  outSnappedScreenPosition->v[0] = v34 + v66;
  outSnappedScreenPosition->v[1] = v35 + v65;
  return result;
}

/*
==============
LUIElement_Anchored_UpdateRotatedElements
==============
*/
void LUIElement_Anchored_UpdateRotatedElements(float unitScale, LUIAnchor *anchorData, vec2_t *inOutAnchorPoint, const vec2_t *screenSpaceTopLeft, const vec2_t *screenSpaceBottomRight)
{
  __int128 v5; 
  __int128 v6; 
  float v7; 
  float v9; 
  __int128 v10; 
  __int128 v11; 
  float v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v27; 
  __int128 v29; 
  __int128 v34; 
  float v41; 
  LUIElement *pinRotateToEdgeElement; 
  double v43; 
  float v44; 
  LUIElement *v45; 
  float v46; 
  double v47; 
  float v48; 
  __int128 v49; 
  __int128 v50; 
  float v51; 
  float v52; 
  int v53; 
  LUIElement **rotateElements; 
  LUIElement *v55; 
  double v56; 
  float v57; 
  __int128 v58; 
  float v59; 
  LUIElementAxisPosition v60[2]; 
  LUIElementAxisPosition v61; 
  __int128 v62; 
  __int128 v63; 

  v7 = screenSpaceTopLeft->v[0];
  v9 = screenSpaceTopLeft->v[1];
  v11 = LODWORD(FLOAT_1_0);
  *(float *)&v11 = 1.0 / unitScale;
  v10 = v11;
  *(float *)&v11 = (float)(1.0 / unitScale) * inOutAnchorPoint->v[0];
  v62 = v6;
  v13 = 0.0;
  v14 = screenSpaceBottomRight->v[1];
  v15 = screenSpaceBottomRight->v[0];
  inOutAnchorPoint->v[0] = *(float *)&v11;
  v17 = v10;
  *(float *)&v17 = *(float *)&v10 * inOutAnchorPoint->v[1];
  v16 = v17;
  inOutAnchorPoint->v[1] = *(float *)&v17;
  v18 = LODWORD(inOutAnchorPoint->v[0]);
  *(float *)&v18 = inOutAnchorPoint->v[0] - (float)((float)(v15 + v7) * 0.5);
  v19 = v18 & _xmm;
  v21 = v16;
  *(float *)&v21 = *(float *)&v16 - (float)((float)(v14 + v9) * 0.5);
  v20 = v21;
  _XMM7 = 0i64;
  v23 = 0i64;
  if ( *(float *)&v19 >= 0.001 && COERCE_FLOAT(v21 & _xmm) >= 0.001 )
  {
    v25 = v19;
    *(float *)&v25 = *(float *)&v19 + 1.0e-10;
    v24 = v25;
    v27 = v20;
    *(float *)&v27 = *(float *)&v20 + *(float *)&v24;
    _XMM4 = v27;
    v29 = v24;
    *(float *)&v29 = *(float *)&v24 - *(float *)&v20;
    _XMM2 = v29;
    __asm
    {
      vcmpless xmm0, xmm7, xmm5
      vblendvps xmm3, xmm4, xmm1, xmm0
      vcmpless xmm0, xmm7, xmm5
      vblendvps xmm0, xmm2, xmm4, xmm0
    }
    v34 = _XMM3;
    *(float *)&v34 = (float)((float)((float)((float)(*(float *)&_XMM3 / *(float *)&_XMM0) * 0.1963) * (float)(*(float *)&_XMM3 / *(float *)&_XMM0)) - 0.9817) * (float)(*(float *)&_XMM3 / *(float *)&_XMM0);
    _XMM0 = LODWORD(FLOAT_2_3561945);
    __asm
    {
      vcmpless xmm2, xmm7, xmm5
      vblendvps xmm1, xmm0, xmm1, xmm2
    }
    *(float *)&v34 = *(float *)&v34 + *(float *)&_XMM1;
    _XMM2 = v34 ^ (unsigned int)_xmm;
    __asm
    {
      vcmpless xmm0, xmm7, xmm8
      vblendvps xmm1, xmm2, xmm3, xmm0
    }
    v13 = *(float *)&_XMM1 * 57.295776;
    v23 = _XMM1;
  }
  v41 = 0.0;
  if ( anchorData->pinRotateElementsToEdge )
  {
    pinRotateToEdgeElement = anchorData->pinRotateToEdgeElement;
    v63 = v5;
    v43 = *(double *)pinRotateToEdgeElement->currentAnimationState.position.x.anchors;
    *(_OWORD *)v60[0].offsets = *(_OWORD *)pinRotateToEdgeElement->currentAnimationState.position.x.offsets;
    *(double *)v60[0].anchors = v43;
    v44 = LUI_Measure(v60);
    v45 = anchorData->pinRotateToEdgeElement;
    v46 = v44 * unitScale;
    v47 = *(double *)v45->currentAnimationState.position.y.anchors;
    *(_OWORD *)v60[0].offsets = *(_OWORD *)v45->currentAnimationState.position.y.offsets;
    *(double *)v60[0].anchors = v47;
    v48 = LUI_Measure(v60) * unitScale;
    if ( *(float *)&v23 >= 6.2831855 )
    {
      do
      {
        v49 = v23;
        *(float *)&v49 = *(float *)&v23 + -6.2831855;
        v23 = v49;
      }
      while ( *(float *)&v49 >= 6.2831855 );
    }
    if ( *(float *)&v23 < 0.0 )
    {
      do
      {
        v50 = v23;
        *(float *)&v50 = *(float *)&v23 + 6.2831855;
        v23 = v50;
      }
      while ( *(float *)&v50 < 0.0 );
    }
    *(float *)&_XMM7 = v48 * 0.5;
    v51 = v46 * 0.5;
    v52 = tanf_0(*(float *)&v23);
    v41 = v52 * (float)(v48 * 0.5);
    if ( COERCE_FLOAT(LODWORD(v41) & _xmm) > v51 )
    {
      *(float *)&_XMM7 = v51 / v52;
      if ( *(float *)&v23 < 3.1415927 )
      {
        v41 = v51;
        goto LABEL_17;
      }
      LODWORD(v41) = LODWORD(v51) ^ _xmm;
      goto LABEL_16;
    }
    if ( *(float *)&v23 >= 1.5707964 && *(float *)&v23 <= 4.712389 )
    {
      LODWORD(v41) = COERCE_UNSIGNED_INT(v52 * *(float *)&_XMM7) ^ _xmm;
LABEL_16:
      LODWORD(_XMM7) = _XMM7 ^ _xmm;
    }
  }
LABEL_17:
  v53 = 0;
  if ( anchorData->rotateElementCount > 0 )
  {
    rotateElements = anchorData->rotateElements;
    do
    {
      v55 = *rotateElements;
      if ( *rotateElements )
      {
        v55->currentAnimationState.zRot = v13;
        if ( anchorData->pinRotateElementsToEdge )
        {
          v56 = *(double *)v55->currentAnimationState.position.x.anchors;
          *(_OWORD *)v60[0].offsets = *(_OWORD *)v55->currentAnimationState.position.x.offsets;
          *(double *)v60[0].anchors = v56;
          v57 = LUI_Measure(v60) * unitScale;
          v58 = *(_OWORD *)v55->currentAnimationState.position.y.offsets;
          *(_QWORD *)v61.anchors = *(_QWORD *)v55->currentAnimationState.position.y.anchors;
          *(_OWORD *)v61.offsets = v58;
          v59 = (float)(LUI_Measure(&v61) * unitScale) * 0.5;
          v55->currentAnimationState.position.x.offsets[0] = (float)(v41 - (float)(v57 * 0.5)) * *(float *)&v10;
          v55->currentAnimationState.position.y.offsets[0] = (float)(*(float *)&_XMM7 - v59) * *(float *)&v10;
          v55->currentAnimationState.position.y.offsets[1] = (float)(*(float *)&_XMM7 + v59) * *(float *)&v10;
          v55->currentAnimationState.position.x.offsets[1] = (float)(v41 + (float)(v57 * 0.5)) * *(float *)&v10;
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 1064, ASSERT_TYPE_ASSERT, "(rotateElement)", (const char *)&queryFormat, "rotateElement") )
      {
        __debugbreak();
      }
      ++v53;
      ++rotateElements;
    }
    while ( v53 < anchorData->rotateElementCount );
  }
}

/*
==============
LUIElement_Anchored_UseDistanceBasedFading
==============
*/
bool LUIElement_Anchored_UseDistanceBasedFading(const LocalClientNum_t localClientNum, const LUIAnchor *const anchorData)
{
  const dvar_t *v2; 
  const dvar_t *v5; 
  const ObjectiveSettings *ObjectiveSettings; 

  v2 = DVARBOOL_lui_objective_fade_enabled;
  if ( !DVARBOOL_lui_objective_fade_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_fade_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled || !anchorData->useDistanceBasedFading )
    return 0;
  v5 = DVARFLT_lui_objective_fadeEnd;
  if ( !DVARFLT_lui_objective_fadeEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_objective_fadeEnd") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.value <= 0.0 )
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
  LUIElement *v3; 
  LUIElementUsageFlag *p_usageFlags; 
  LUIAnchor *CustomElement; 
  int v6; 
  const char *v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  bool v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  bool v27; 
  int v28; 
  int v29; 
  bool v35; 
  bool v37; 
  bool v39; 
  LUIAnchorOnObstruction v40; 
  const char *v41; 
  LUIAnchorOnScope v42; 
  bool v43; 
  bool v44; 
  int v45; 
  bool v46; 
  bool v47; 
  bool v48; 
  bool v49; 
  bool v50; 
  double v51; 
  bool v52; 
  bool v53; 
  bool v54; 
  bool v55; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->layoutFunction = LUIElement_Anchored_Layout;
  p_usageFlags = &v3->usageFlags;
  v3->usageFlags |= 3u;
  LUI_LUIElement_RegisterMethods(v3, luaVM, s_anchoredMethods);
  if ( v3->customElementData )
  {
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIAnchor>(v3, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v3, luaVM);
    CustomElement = (LUIAnchor *)j_lua_newuserdata(luaVM, 0x150ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v3->customElementData = CustomElement;
    memset_0(CustomElement, 0, sizeof(LUIAnchor));
  }
  CustomElement->attachType = ATTACH_ENTITY;
  v3->currentAnimationState.userDataInt = 1065353216;
  j_lua_getfield(luaVM, 2, "entityNum");
  if ( j_lua_isnumber(luaVM, -1) )
    v6 = lui_tointeger32(luaVM, -1);
  else
    v6 = 2047;
  CustomElement->entityNum = v6;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "entityTag");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v7 = j_lua_tolstring(luaVM, -1, NULL);
    Core_strcpy(CustomElement->tagName, 0x40ui64, v7);
  }
  else
  {
    CustomElement->tagName[0] = 0;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "screenOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v8 = lui_tonumber32(luaVM, -1);
    CustomElement->screenOffset.v[0] = *(float *)&v8;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "screenOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v9 = lui_tonumber32(luaVM, -1);
    CustomElement->screenOffset.v[1] = *(float *)&v9;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "screenSnapOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v10 = lui_tonumber32(luaVM, -1);
    CustomElement->screenSnapOffset.v[0] = *(float *)&v10;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "screenSnapOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v11 = lui_tonumber32(luaVM, -1);
    CustomElement->screenSnapOffset.v[1] = *(float *)&v11;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "snapToLocation");
  v12 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->snapToLocation = v12;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "worldOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v13 = lui_tonumber32(luaVM, -1);
    CustomElement->worldOffset.v[0] = *(float *)&v13;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "worldOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v14 = lui_tonumber32(luaVM, -1);
    CustomElement->worldOffset.v[1] = *(float *)&v14;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "worldOffsetZ");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v15 = lui_tonumber32(luaVM, -1);
    CustomElement->worldOffset.v[2] = *(float *)&v15;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "entityOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v16 = lui_tonumber32(luaVM, -1);
    CustomElement->entityOffset.v[0] = *(float *)&v16;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "entityOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v17 = lui_tonumber32(luaVM, -1);
    CustomElement->entityOffset.v[1] = *(float *)&v17;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "entityOffsetZ");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v18 = lui_tonumber32(luaVM, -1);
    CustomElement->entityOffset.v[2] = *(float *)&v18;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "tagOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v19 = lui_tonumber32(luaVM, -1);
    CustomElement->tagOffset.v[0] = *(float *)&v19;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "tagOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v20 = lui_tonumber32(luaVM, -1);
    CustomElement->tagOffset.v[1] = *(float *)&v20;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "tagOffsetZ");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v21 = lui_tonumber32(luaVM, -1);
    CustomElement->tagOffset.v[2] = *(float *)&v21;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "secondaryTagOffsetX");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v22 = lui_tonumber32(luaVM, -1);
    CustomElement->secondaryTagOffset.v[0] = *(float *)&v22;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "secondaryTagOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v23 = lui_tonumber32(luaVM, -1);
    CustomElement->secondaryTagOffset.v[1] = *(float *)&v23;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "secondaryTagOffsetZ");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v24 = lui_tonumber32(luaVM, -1);
    CustomElement->secondaryTagOffset.v[2] = *(float *)&v24;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "naturalDistance");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    *(float *)&_XMM1 = FLOAT_300_0;
  }
  CustomElement->naturalDistance = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "perspectiveScaleLerpDistance");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    *(float *)&_XMM1 = FLOAT_N1_0;
  }
  CustomElement->perspectiveScaleLerpDistance = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "perspectiveScalingEnabled");
  v27 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->perspectiveScalingEnabled = v27;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "naturalFOV");
  v28 = 0;
  if ( j_lua_isnumber(luaVM, -1) )
    v29 = lui_tointeger32(luaVM, -1);
  else
    v29 = 0;
  CustomElement->naturalFOV = v29;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "defaultScale");
  LODWORD(_XMM7) = 0;
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm7 }
  }
  else
  {
    *(float *)&_XMM1 = FLOAT_1_0;
  }
  CustomElement->defaultPerspectiveScale = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minScale");
  *(float *)&_XMM8 = FLOAT_0_2;
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm7 }
  }
  else
  {
    *(float *)&_XMM1 = FLOAT_0_2;
  }
  CustomElement->minScale = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxScale");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm7 }
  }
  else
  {
    *(float *)&_XMM1 = FLOAT_1_0;
  }
  CustomElement->maxScale = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "snapToScreenEdges");
  v35 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->snapToScreenEdges = v35;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "snapRadius");
  if ( j_lua_isnumber(luaVM, -1) )
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  else
    _XMM0 = 0i64;
  CustomElement->snapRadius = *(float *)&_XMM0;
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
    *(float *)&_XMM1 = FLOAT_0_5;
  }
  CustomElement->snapToEdgesSmoothingRadius = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "enableDistanceBasedSnapCheck");
  v37 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  CustomElement->enableDistanceBasedSnapCheck = v37;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "screenCenterFadeRadius");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm7 }
  }
  else
  {
    LODWORD(_XMM1) = 0;
  }
  CustomElement->screenCenterFadeRadius = *(float *)&_XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useDistanceBasedFading");
  v39 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  CustomElement->useDistanceBasedFading = v39;
  j_lua_settop(luaVM, -2);
  CustomElement->onObstruction = HIDE;
  j_lua_getfield(luaVM, 2, "onObstruction");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v40 = (unsigned __int8)lui_tointeger32(luaVM, -1);
    if ( (unsigned __int8)v40 <= 2u )
      CustomElement->onObstruction = v40;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "obstructionEntityTag");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v41 = j_lua_tolstring(luaVM, -1, NULL);
    Core_strcpy(CustomElement->secondaryObstructionTagName, 0x40ui64, v41);
  }
  else
  {
    CustomElement->secondaryObstructionTagName[0] = 0;
  }
  j_lua_settop(luaVM, -2);
  CustomElement->onScope = HIDE;
  j_lua_getfield(luaVM, 2, "onScope");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v42 = (unsigned __int8)lui_tointeger32(luaVM, -1);
    if ( (unsigned __int8)v42 <= 2u )
      CustomElement->onScope = v42;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "snapToScopeEdges");
  v43 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->snapToScopeEdges = v43;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "sendVisibilityEvents");
  v44 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->sendScreenEvents = v44;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "rotateElements");
  CustomElement->rotateElementCount = 0;
  CustomElement->rotateElements[0] = NULL;
  CustomElement->rotateElements[1] = NULL;
  CustomElement->rotateElements[2] = NULL;
  CustomElement->rotateElements[3] = NULL;
  if ( j_lua_type(luaVM, -1) == 5 )
  {
    v45 = 0;
    while ( 1 )
    {
      j_lua_pushinteger(luaVM, ++v45);
      j_lua_gettable(luaVM, -2);
      if ( !j_lua_isuserdata(luaVM, -1) )
        break;
      CustomElement->rotateElements[CustomElement->rotateElementCount] = LUI_ToElement(luaVM, -1);
      if ( !CustomElement->rotateElements[CustomElement->rotateElementCount] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_anchored.cpp", 2212, ASSERT_TYPE_ASSERT, "(anchorData->rotateElements[anchorData->rotateElementCount])", (const char *)&queryFormat, "anchorData->rotateElements[anchorData->rotateElementCount]") )
        __debugbreak();
      ++CustomElement->rotateElementCount;
      j_lua_settop(luaVM, -2);
      if ( v45 >= 4 )
        goto LABEL_120;
    }
    j_lua_settop(luaVM, -2);
  }
LABEL_120:
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "pinRotateToEdgeElement");
  if ( j_lua_isuserdata(luaVM, -1) )
    v3 = LUI_ToElement(luaVM, -1);
  CustomElement->pinRotateToEdgeElement = v3;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "pinRotateElementsToEdge");
  v46 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->pinRotateElementsToEdge = v46;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "roundScreenPosition");
  v47 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->roundScreenPosition = v47;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useClientDetailWorld");
  v48 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->useClientDetailWorld = v48;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "scaleUsingLayout");
  v49 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->scaleUsingLayout = v49;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "displayOnObstructionUnknown");
  v50 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->displayOnObstructionUnknown = v50;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "ignoreOffsetsForTraces");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v51 = lui_tonumber32(luaVM, -1);
    v28 = (int)*(float *)&v51;
  }
  CustomElement->ignoreOffsetsForTraces = v28;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "alwaysShowUnderCrosshair");
  v52 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->alwaysShowUnderCrosshair = v52;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "isLockedToTag");
  v53 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->isLockedToTag = v53;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useLeftHandIfAkimbo");
  v54 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->useLeftHandIfAkimbo = v54;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "useScopeStencil");
  if ( j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0 )
    *p_usageFlags |= 8u;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "applyLensDistortion");
  v55 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  CustomElement->applyLensDistortion = v55;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minAlpha");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm8, xmm0, xmm7 }
  }
  CustomElement->minAlpha = *(float *)&_XMM8;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minAlphaADS");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm7, xmm0, xmm7 }
  }
  CustomElement->minAlphaADS = *(float *)&_XMM7;
  j_lua_settop(luaVM, -2);
  return 0i64;
}

