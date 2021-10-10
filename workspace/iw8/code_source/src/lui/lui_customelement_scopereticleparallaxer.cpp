/*
==============
LUIElement_ScopeReticleParallaxer_SetHorSkewFactor
==============
*/
__int64 LUIElement_ScopeReticleParallaxer_SetHorSkewFactor(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetHorSkewFactor( skewFactor )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    LUI_LUIElement_RetrieveCustomElementData<LUIScopeReticleParallaxerData>(v2, luaVM)->horSkewFactor = *(float *)&v3;
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
LUIElement_ScopeReticleParallaxer_SetVertSkewFactor
==============
*/
__int64 LUIElement_ScopeReticleParallaxer_SetVertSkewFactor(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetVertSkewFactor( skewFactor )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    LUI_LUIElement_RetrieveCustomElementData<LUIScopeReticleParallaxerData>(v2, luaVM)->vertSkewFactor = *(float *)&v3;
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
LUIElement_ScopeReticleParallaxer_Layout
==============
*/
void LUIElement_ScopeReticleParallaxer_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  __int64 v8; 
  float *customElementData; 
  float v10; 
  cg_t *v11; 
  float v12; 
  double v13; 
  float v14; 
  double v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 

  v8 = localClientNum;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (float *)element->customElementData;
  if ( (unsigned int)v8 >= cg_t::ms_allocatedCount )
  {
    v18 = cg_t::ms_allocatedCount;
    LODWORD(v16) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v8] )
  {
    LODWORD(v17) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v17) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v17) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v17) )
      __debugbreak();
  }
  v10 = (float)(element->right - element->left) * 0.2;
  v11 = cg_t::ms_cgArray[v8];
  v12 = (float)(element->bottom - element->top) * 0.2;
  v13 = I_fclamp(v11->predictedViewState.weapMoveState.swayAngles.v[1] * *customElementData, COERCE_FLOAT(LODWORD(v10) ^ _xmm), v10);
  v14 = *(float *)&v13;
  v15 = I_fclamp(v11->predictedViewState.weapMoveState.swayAngles.v[0] * customElementData[1], COERCE_FLOAT(LODWORD(v12) ^ _xmm), v12);
  if ( v14 != customElementData[2] || *(float *)&v15 != customElementData[3] )
  {
    customElementData[2] = v14;
    customElementData[3] = *(float *)&v15;
    element->layoutCached = 0;
  }
  LUIElement_DefaultLayout((const LocalClientNum_t)v8, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUIElement_ScopeReticleParallaxer_Render
==============
*/
void LUIElement_ScopeReticleParallaxer_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  float right; 
  float left; 
  float top; 
  float *customElementData; 
  float v14; 
  float v15; 
  vec4_t color; 
  vec4_t verts[4]; 

  right = element->right;
  color.v[0] = red;
  color.v[2] = blue;
  left = element->left;
  color.v[1] = green;
  top = element->top;
  color.v[3] = alpha;
  LUI_CoD_GenerateQuadVerts(left, top, right, element->bottom, (vec4_t (*)[4])verts);
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (float *)element->customElementData;
  v14 = customElementData[2];
  v15 = customElementData[3];
  verts[0].v[1] = v15 + verts[0].v[1];
  verts[0].v[0] = verts[0].v[0] - v14;
  verts[1].v[1] = v15 + verts[1].v[1];
  verts[1].v[0] = verts[1].v[0] - v14;
  verts[2].v[1] = verts[2].v[1] - v15;
  verts[2].v[0] = v14 + verts[2].v[0];
  verts[3].v[1] = verts[3].v[1] - v15;
  verts[0].v[2] = 0.0;
  verts[0].v[3] = FLOAT_1_0;
  verts[1].v[2] = 0.0;
  verts[1].v[3] = FLOAT_1_0;
  verts[2].v[2] = 0.0;
  verts[2].v[3] = FLOAT_1_0;
  verts[3].v[0] = v14 + verts[3].v[0];
  verts[3].v[2] = 0.0;
  verts[3].v[3] = FLOAT_1_0;
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scopereticleparallaxer.cpp", 64, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &color, element->imageData.image);
}

/*
==============
LUI_LuaCall_LUIElement_SetupScopeReticleParallaxer
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScopeReticleParallaxer(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupScopeReticleParallaxer_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupScopeReticleParallaxer_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScopeReticleParallaxer_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  float *v3; 
  double v4; 
  double v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = (float *)j_lua_newuserdata(luaVM, 0x10ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  *(_QWORD *)v3 = 0i64;
  *((_QWORD *)v3 + 1) = 0i64;
  j_lua_getfield(luaVM, 2, "horSkewFactor");
  if ( j_lua_isnumber(luaVM, -1) )
    v4 = lui_tonumber32(luaVM, -1);
  else
    *(float *)&v4 = FLOAT_150_0;
  *v3 = *(float *)&v4;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "vertSkewFactor");
  if ( j_lua_isnumber(luaVM, -1) )
    v5 = lui_tonumber32(luaVM, -1);
  else
    *(float *)&v5 = FLOAT_200_0;
  v3[1] = *(float *)&v5;
  j_lua_settop(luaVM, -2);
  *((_QWORD *)v3 + 1) = 0i64;
  v2->layoutFunction = LUIElement_ScopeReticleParallaxer_Layout;
  v2->renderFunction = LUIElement_ScopeReticleParallaxer_Render;
  v2->usageFlags |= 2u;
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_scopeReticleParallaxerMethods);
  return 0i64;
}

