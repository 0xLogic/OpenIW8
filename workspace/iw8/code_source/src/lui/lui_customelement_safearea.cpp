/*
==============
LUIElement_SafeArea_Layout
==============
*/
void LUIElement_SafeArea_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  const dvar_t *v5; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float value; 
  const dvar_t *v18; 
  float v19; 
  bool v20; 
  bool v21; 
  int LocalClientActiveCount; 
  bool v30; 
  float v32; 
  float v36; 
  float v40; 

  v5 = DVARFLT_safeArea_adjusted_horizontal;
  v9 = element->currentAnimationState.position.x.anchors[1];
  v10 = element->currentAnimationState.position.x.offsets[0];
  v11 = element->currentAnimationState.position.x.offsets[1];
  v12 = element->currentAnimationState.position.y.offsets[0];
  v13 = element->currentAnimationState.position.y.offsets[1];
  v14 = element->currentAnimationState.position.x.anchors[0];
  v15 = element->currentAnimationState.position.y.anchors[1];
  v40 = element->currentAnimationState.position.y.anchors[0];
  if ( !DVARFLT_safeArea_adjusted_horizontal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_horizontal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v18 = DVARFLT_safeArea_adjusted_vertical;
  if ( !DVARFLT_safeArea_adjusted_vertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_vertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = (float)((float)(1.0 - value) * 360.0) * cls.vidConfig.windowAspectRatio;
  v20 = 0;
  v21 = 0;
  if ( !Com_FrontEnd_IsInFrontEnd() )
  {
    LocalClientActiveCount = CL_GetLocalClientActiveCount();
    v20 = LocalClientActiveCount > 1 && localClientNum == LOCAL_CLIENT_1;
    v21 = LocalClientActiveCount > 1 && localClientNum == LOCAL_CLIENT_0;
  }
  _XMM3 = LODWORD(FLOAT_7_1999998);
  _XMM0 = v20;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm5, xmm3, xmm7, xmm2
  }
  _XMM0 = v21;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm7, xmm3, xmm7, xmm2
  }
  v30 = v10 == v19 && v11 == COERCE_FLOAT(LODWORD(v19) ^ _xmm) && v12 == *(float *)&_XMM5 && v13 == COERCE_FLOAT(_XMM7 ^ _xmm);
  _XMM3 = LODWORD(FLOAT_432_0);
  v32 = (float)(v14 * 720.0) * cls.vidConfig.windowAspectRatio;
  _XMM0 = v20;
  __asm
  {
    vpcmpeqd xmm1, xmm0, xmm2
    vblendvps xmm0, xmm3, xmm4, xmm1
  }
  v36 = *(float *)&_XMM0 * v40;
  _XMM0 = v20;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
  }
  if ( !v30 )
  {
    element->currentAnimationState.position.x.offsets[1] = (float)((float)(v9 * 720.0) * cls.vidConfig.windowAspectRatio) - v19;
    element->currentAnimationState.position.x.offsets[0] = v19 - v32;
    element->layoutCached = 0;
    element->currentAnimationState.position.y.offsets[1] = (float)(v15 * *(float *)&_XMM0) - *(float *)&_XMM7;
    element->currentAnimationState.position.y.offsets[0] = *(float *)&_XMM5 - v36;
    LUI_QuadCache_Element_Invalidate(element);
  }
  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUI_LuaCall_LUIElement_SetupSafeArea
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupSafeArea(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->layoutFunction = LUIElement_SafeArea_Layout;
  v2->usageFlags |= 2u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

