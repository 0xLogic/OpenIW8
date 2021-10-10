/*
==============
LUIElement_ScopeReticleSpacer_Layout
==============
*/
void LUIElement_ScopeReticleSpacer_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  __int64 v8; 
  float *customElementData; 
  cg_t *v10; 
  float v11; 
  float fWeaponPosFrac; 
  bool v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 

  v8 = localClientNum;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (float *)element->customElementData;
  if ( (unsigned int)v8 >= cg_t::ms_allocatedCount )
  {
    v21 = cg_t::ms_allocatedCount;
    LODWORD(v19) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v19, v21) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v8] )
  {
    LODWORD(v20) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v20) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v20) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v20) )
      __debugbreak();
  }
  v10 = cg_t::ms_cgArray[v8];
  v11 = v10->predictedPlayerState.weapCommon.aimSpreadScale * 0.0039215689;
  fWeaponPosFrac = v10->predictedPlayerState.weapCommon.fWeaponPosFrac;
  if ( v11 != customElementData[5] || fWeaponPosFrac != customElementData[6] )
  {
    v13 = *((_BYTE *)customElementData + 16) == 0;
    v14 = (float)(1.0 - fWeaponPosFrac) * customElementData[2];
    v15 = fWeaponPosFrac * *customElementData;
    v16 = (float)((float)((float)(1.0 - fWeaponPosFrac) * customElementData[3]) + (float)(fWeaponPosFrac * customElementData[1])) * v11;
    customElementData[6] = fWeaponPosFrac;
    v17 = (float)(v14 + v15) * (float)(1.0 - v11);
    v18 = (float)(v16 + v17) * 0.5;
    customElementData[5] = v11;
    if ( !v13 )
      element->parent->currentAnimationState.position.x.offsets[0] = COERCE_FLOAT(LODWORD(v18) ^ _xmm);
    if ( *((_BYTE *)customElementData + 17) )
      element->parent->currentAnimationState.position.x.offsets[1] = v18;
    if ( *((_BYTE *)customElementData + 18) )
      element->parent->currentAnimationState.position.y.offsets[0] = (float)(v16 + v17) * -0.5;
    if ( *((_BYTE *)customElementData + 19) )
      element->parent->currentAnimationState.position.y.offsets[1] = (float)(v16 + v17) * 0.5;
  }
  LUIElement_DefaultLayout((const LocalClientNum_t)v8, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUI_LuaCall_LUIElement_SetupScopeReticleSpacer
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScopeReticleSpacer(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupScopeReticleSpacer_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupScopeReticleSpacer_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScopeReticleSpacer_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  float *v3; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v11; 

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
  v3 = (float *)j_lua_newuserdata(luaVM, 0x1Cui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  *(_QWORD *)v3 = 0i64;
  *((_QWORD *)v3 + 1) = 0i64;
  *((_QWORD *)v3 + 2) = 0i64;
  v3[6] = 0.0;
  j_lua_getfield(luaVM, 2, "minSizeADS");
  if ( j_lua_isnumber(luaVM, -1) )
    v4 = lui_tonumber32(luaVM, -1);
  else
    *(float *)&v4 = FLOAT_1_0;
  *v3 = *(float *)&v4;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxSizeADS");
  if ( j_lua_isnumber(luaVM, -1) )
    v5 = lui_tonumber32(luaVM, -1);
  else
    *(float *)&v5 = FLOAT_5_0;
  v3[1] = *(float *)&v5;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minSizeHip");
  if ( j_lua_isnumber(luaVM, -1) )
    v6 = lui_tonumber32(luaVM, -1);
  else
    *(float *)&v6 = FLOAT_20_0;
  v3[2] = *(float *)&v6;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxSizeHip");
  if ( j_lua_isnumber(luaVM, -1) )
    v7 = lui_tonumber32(luaVM, -1);
  else
    *(float *)&v7 = FLOAT_60_0;
  v3[3] = *(float *)&v7;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustLeft");
  v8 = 0;
  v9 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  *((_BYTE *)v3 + 16) = v9;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustRight");
  v10 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  *((_BYTE *)v3 + 17) = v10;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustTop");
  v11 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  *((_BYTE *)v3 + 18) = v11;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustBottom");
  if ( j_lua_type(luaVM, -1) == 1 )
    v8 = j_lua_toboolean(luaVM, -1) != 0;
  *((_BYTE *)v3 + 19) = v8;
  j_lua_settop(luaVM, -2);
  v3[5] = -1.0;
  v3[6] = -1.0;
  v2->layoutFunction = LUIElement_ScopeReticleSpacer_Layout;
  v2->usageFlags |= 2u;
  return 0i64;
}

