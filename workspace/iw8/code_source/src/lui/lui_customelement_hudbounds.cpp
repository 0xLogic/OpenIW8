/*
==============
LUIElement_HUDBounds_Layout
==============
*/
void LUIElement_HUDBounds_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  float v7; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  int LocalClientActiveCount; 
  bool v17; 
  bool v18; 
  bool v26; 
  float v28; 
  float v32; 
  float v36; 

  v7 = element->currentAnimationState.position.y.offsets[0];
  v9 = element->currentAnimationState.position.x.offsets[1];
  v10 = element->currentAnimationState.position.y.offsets[1];
  v11 = element->currentAnimationState.position.y.anchors[1];
  v12 = element->currentAnimationState.position.x.offsets[0];
  v13 = element->currentAnimationState.position.x.anchors[0];
  v14 = element->currentAnimationState.position.x.anchors[1];
  v36 = element->currentAnimationState.position.y.anchors[0];
  LocalClientActiveCount = CL_GetLocalClientActiveCount();
  v17 = LocalClientActiveCount > 1 && localClientNum == LOCAL_CLIENT_1;
  v18 = LocalClientActiveCount > 1 && localClientNum == LOCAL_CLIENT_0;
  _XMM3 = LODWORD(FLOAT_7_1999998);
  _XMM0 = v17;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = v18;
  __asm
  {
    vblendvps xmm5, xmm3, xmm4, xmm2
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm6, xmm3, xmm4, xmm2
  }
  v26 = v12 == 0.0 && v9 == 0.0 && v7 == *(float *)&_XMM5 && v10 == COERCE_FLOAT(_XMM6 ^ _xmm);
  _XMM3 = LODWORD(FLOAT_432_0);
  v28 = (float)(v14 * 720.0) * cls.vidConfig.windowAspectRatio;
  _XMM0 = v17;
  __asm
  {
    vpcmpeqd xmm1, xmm0, xmm2
    vblendvps xmm0, xmm3, xmm4, xmm1
  }
  v32 = *(float *)&_XMM0 * v36;
  _XMM0 = v17;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
  }
  if ( !v26 )
  {
    element->currentAnimationState.position.x.offsets[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v13 * 720.0) * cls.vidConfig.windowAspectRatio) ^ _xmm);
    element->layoutCached = 0;
    element->currentAnimationState.position.y.offsets[1] = (float)(v11 * *(float *)&_XMM0) - *(float *)&_XMM6;
    element->currentAnimationState.position.x.offsets[1] = v28;
    element->currentAnimationState.position.y.offsets[0] = *(float *)&_XMM5 - v32;
    LUI_QuadCache_Element_Invalidate(element);
  }
  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUI_LuaCall_LUIElement_SetupHUDBounds
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupHUDBounds(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->layoutFunction = LUIElement_HUDBounds_Layout;
  v2->usageFlags |= 2u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

