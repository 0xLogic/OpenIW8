/*
==============
LUIElement_WeaponModel_SetWeaponIndex
==============
*/
__int64 LUIElement_WeaponModel_SetWeaponIndex(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetWeaponIndex( <weaponIndex> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    LUIElement_WeaponModel_GetModelData(v2, luaVM)->weaponIndex = v3;
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
LUIElement_WeaponModel_GetWeaponIndex
==============
*/
__int64 LUIElement_WeaponModel_GetWeaponIndex(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  LUIWeaponModelData *ModelData; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetWeaponIndex()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    ModelData = LUIElement_WeaponModel_GetModelData(v3, luaVM);
    j_lua_pushinteger(luaVM, ModelData->weaponIndex);
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
LUIElement_WeaponModel_SetWeaponOffset
==============
*/
__int64 LUIElement_WeaponModel_SetWeaponOffset(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  float v4; 
  double v5; 
  float v6; 
  double v7; 
  LUIWeaponModelData *ModelData; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetWeaponOffset( <xOffset>, <yOffset>, <zOffset> )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = *(float *)&v3;
    v5 = lui_tonumber32(luaVM, 3);
    v6 = *(float *)&v5;
    v7 = lui_tonumber32(luaVM, 4);
    ModelData = LUIElement_WeaponModel_GetModelData(v2, luaVM);
    ModelData->offset.v[0] = v4;
    ModelData->offset.v[1] = v6;
    ModelData->offset.v[2] = *(float *)&v7;
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
LUIElement_WeaponModel_SetCollisionPlaneHeightOffset
==============
*/
__int64 LUIElement_WeaponModel_SetCollisionPlaneHeightOffset(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetCollisionPlaneHeightOffset( <zOffset> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    LUIElement_WeaponModel_GetModelData(v2, luaVM)->collisionPlaneHeightOffset = *(float *)&v3;
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
LUIElement_WeaponModel_GetModelData
==============
*/
LUIWeaponModelData *LUIElement_WeaponModel_GetModelData(LUIElement *element, lua_State *luaVM)
{
  if ( element->customElementData )
    return (LUIWeaponModelData *)element->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (LUIWeaponModelData *)element->customElementData;
}

/*
==============
LUIElement_WeaponModel_Layout
==============
*/
void LUIElement_WeaponModel_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  __int64 v6; 
  cg_t *v8; 
  LUIWeaponModelData *ModelData; 
  bool v10; 
  float *v11; 
  float v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v19; 
  __int128 v20; 
  float v24; 
  float v25; 
  __int64 v26; 
  __int64 v27; 
  vec3_t right; 
  vec3_t up; 
  vec3_t offset; 

  v6 = localClientNum;
  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
  if ( (unsigned int)v6 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, 2) )
    __debugbreak();
  if ( (int)v6 < cg_t::ms_allocatedCount )
  {
    if ( (unsigned int)v6 >= cg_t::ms_allocatedCount )
    {
      LODWORD(v27) = cg_t::ms_allocatedCount;
      LODWORD(v26) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[v6] )
    {
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v27) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v27) )
        __debugbreak();
    }
    v8 = cg_t::ms_cgArray[v6];
    ModelData = LUIElement_WeaponModel_GetModelData(element, luaVM);
    if ( ModelData->weaponIndex >= 0 )
    {
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v11 = (float *)&scrPlaceViewDisplay[v6].realViewportSize + 1;
          goto LABEL_22;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v10 )
          __debugbreak();
      }
      v11 = (float *)&scrPlaceFull.realViewportSize + 1;
LABEL_22:
      v12 = 30.240002 / *v11;
      v13 = (float)(unitScale * ModelData->base2DPosition.v[0]) * v12;
      LODWORD(v14) = COERCE_UNSIGNED_INT((float)(unitScale * ModelData->base2DPosition.v[1]) * v12) ^ _xmm;
      AngleVectors(&v8->refdefViewAngles, NULL, &right, &up);
      v15 = LODWORD(right.v[0]);
      *(float *)&v15 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(right.v[1] * right.v[1])) + (float)(right.v[2] * right.v[2]));
      _XMM3 = v15;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
      }
      right.v[2] = right.v[2] * (float)(1.0 / *(float *)&_XMM0);
      v19 = right.v[2];
      right.v[0] = right.v[0] * (float)(1.0 / *(float *)&_XMM0);
      right.v[1] = right.v[1] * (float)(1.0 / *(float *)&_XMM0);
      v20 = LODWORD(up.v[0]);
      *(float *)&v20 = fsqrt((float)((float)(*(float *)&v20 * *(float *)&v20) + (float)(up.v[1] * up.v[1])) + (float)(up.v[2] * up.v[2]));
      _XMM3 = v20;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
      }
      up.v[2] = up.v[2] * (float)(1.0 / *(float *)&_XMM0);
      v24 = v14 * up.v[2];
      up.v[0] = up.v[0] * (float)(1.0 / *(float *)&_XMM0);
      up.v[1] = up.v[1] * (float)(1.0 / *(float *)&_XMM0);
      offset.v[0] = (float)(right.v[0] * v13) + ModelData->offset.v[0];
      offset.v[1] = (float)(right.v[1] * v13) + ModelData->offset.v[1];
      v25 = ModelData->offset.v[2];
      offset.v[0] = (float)(v14 * up.v[0]) + offset.v[0];
      offset.v[1] = (float)(v14 * up.v[1]) + offset.v[1];
      offset.v[2] = (float)((float)(right.v[2] * v13) + v25) + (float)(v14 * up.v[2]);
      CL_UIWeapon_SetOriginOffset((const LocalClientNum_t)v6, ModelData->weaponIndex, &offset);
      CL_UIWeapon_SetCollisionPlaneHeightOffset((const LocalClientNum_t)v6, ModelData->weaponIndex, (float)((float)(v19 * v13) + ModelData->collisionPlaneHeightOffset) + v24);
    }
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupWeaponModel
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupWeaponModel(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupWeaponModel_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupWeaponModel_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupWeaponModel_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIWeaponModelData *CustomElement; 
  unsigned int v4; 
  float *p_base2DPosition; 
  unsigned int v6; 
  int v7; 
  double v8; 
  float *v9; 
  int v10; 
  double v11; 
  int v12; 
  double v13; 
  __int64 v15; 
  __int64 v16; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->layoutFunction = LUIElement_WeaponModel_Layout;
  v2->usageFlags |= 2u;
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_weaponModelMethods);
  if ( v2->customElementData )
  {
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIWeaponModelData>(v2, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v2, luaVM);
    CustomElement = (LUIWeaponModelData *)j_lua_newuserdata(luaVM, 0x1Cui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v2->customElementData = CustomElement;
    *(_QWORD *)CustomElement->offset.v = 0i64;
    *(_QWORD *)&CustomElement->offset.z = 0i64;
    *(_QWORD *)&CustomElement->base2DPosition.y = 0i64;
    CustomElement->weaponIndex = 0;
  }
  v4 = 0;
  p_base2DPosition = (float *)&CustomElement->base2DPosition;
  CustomElement->base2DPosition = 0i64;
  j_lua_getfield(luaVM, 2, "base2DPosition");
  if ( j_lua_type(luaVM, -1) == 5 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = v6 + 1;
      j_lua_pushinteger(luaVM, (int)(v6 + 1));
      j_lua_gettable(luaVM, -2);
      if ( !j_lua_isnumber(luaVM, -1) )
        break;
      v8 = lui_tonumber32(luaVM, -1);
      if ( v6 >= 2 )
      {
        LODWORD(v16) = 2;
        LODWORD(v15) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      *p_base2DPosition = *(float *)&v8;
      j_lua_settop(luaVM, -2);
      ++p_base2DPosition;
      ++v6;
      if ( v7 >= 2 )
        goto LABEL_25;
    }
    j_lua_settop(luaVM, -2);
  }
LABEL_25:
  j_lua_settop(luaVM, -2);
  *(_QWORD *)CustomElement->offset.v = 0i64;
  CustomElement->offset.v[2] = 0.0;
  j_lua_getfield(luaVM, 2, "offset");
  if ( j_lua_type(luaVM, -1) == 5 )
  {
    v9 = (float *)CustomElement;
    while ( 1 )
    {
      v10 = v4 + 1;
      j_lua_pushinteger(luaVM, (int)(v4 + 1));
      j_lua_gettable(luaVM, -2);
      if ( !j_lua_isnumber(luaVM, -1) )
        break;
      v11 = lui_tonumber32(luaVM, -1);
      if ( v4 >= 3 )
      {
        LODWORD(v16) = 3;
        LODWORD(v15) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      *v9 = *(float *)&v11;
      j_lua_settop(luaVM, -2);
      ++v9;
      ++v4;
      if ( v10 >= 3 )
        goto LABEL_34;
    }
    j_lua_settop(luaVM, -2);
  }
LABEL_34:
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "weaponIndex");
  if ( j_lua_isnumber(luaVM, -1) )
    v12 = lui_tointeger32(luaVM, -1);
  else
    v12 = -1;
  CustomElement->weaponIndex = v12;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "collisionPlaneHeightOffset");
  if ( j_lua_isnumber(luaVM, -1) )
    v13 = lui_tonumber32(luaVM, -1);
  else
    LODWORD(v13) = 0;
  CustomElement->collisionPlaneHeightOffset = *(float *)&v13;
  j_lua_settop(luaVM, -2);
  return 0i64;
}

