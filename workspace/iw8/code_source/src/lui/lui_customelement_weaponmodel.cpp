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
  LUIElement *v6; 
  unsigned int v14; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetWeaponOffset( <xOffset>, <yOffset>, <zOffset> )");
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
    _RAX = LUIElement_WeaponModel_GetModelData(v6, luaVM);
    __asm
    {
      vmovss  dword ptr [rax], xmm8
      vmovaps xmm8, [rsp+58h+var_38]
      vmovss  dword ptr [rax+4], xmm7
      vmovaps xmm7, [rsp+58h+var_28]
      vmovss  dword ptr [rax+8], xmm6
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
LUIElement_WeaponModel_SetCollisionPlaneHeightOffset
==============
*/
__int64 LUIElement_WeaponModel_SetCollisionPlaneHeightOffset(lua_State *const luaVM)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetCollisionPlaneHeightOffset( <zOffset> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_WeaponModel_GetModelData(v4, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+14h], xmm6
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

void __fastcall LUIElement_WeaponModel_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  __int64 v14; 
  cg_t *v16; 
  bool v18; 
  __int64 v80; 
  __int64 v81; 
  vec3_t right; 
  vec3_t up; 
  vec3_t offset; 

  __asm { vmovaps [rsp+128h+var_38], xmm6 }
  v14 = localClientNum;
  __asm { vmovaps xmm6, xmm2 }
  LUIElement_DefaultLayout(localClientNum, element, *(float *)&unitScale, deltaTime, luaVM);
  if ( (unsigned int)v14 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, 2) )
    __debugbreak();
  if ( (int)v14 < cg_t::ms_allocatedCount )
  {
    if ( (unsigned int)v14 >= cg_t::ms_allocatedCount )
    {
      LODWORD(v81) = cg_t::ms_allocatedCount;
      LODWORD(v80) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v80, v81) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[v14] )
    {
      LODWORD(v81) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v81) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v81) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v81) )
        __debugbreak();
    }
    v16 = cg_t::ms_cgArray[v14];
    _RSI = LUIElement_WeaponModel_GetModelData(element, luaVM);
    if ( _RSI->weaponIndex >= 0 )
    {
      __asm
      {
        vmovaps [rsp+128h+var_48], xmm7
        vmovaps [rsp+128h+var_58], xmm8
        vmovaps [rsp+128h+var_68], xmm9
        vmovaps [rsp+128h+var_78], xmm10
        vmovaps [rsp+128h+var_88], xmm11
        vmovaps [rsp+128h+var_98], xmm12
        vmovaps [rsp+128h+var_A8], xmm13
      }
      if ( activeScreenPlacementMode && activeScreenPlacementMode != SCRMODE_DISPLAY )
      {
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v18 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, cs:__real@41f1eb86
        vdivss  xmm2, xmm0, dword ptr [rax]
        vmulss  xmm1, xmm6, dword ptr [rsi+0Ch]
        vmulss  xmm0, xmm6, dword ptr [rsi+10h]
        vmulss  xmm12, xmm1, xmm2
        vmulss  xmm1, xmm0, xmm2
        vxorps  xmm13, xmm1, cs:__xmm@80000000800000008000000080000000
      }
      AngleVectors(&v16->refdefViewAngles, NULL, &right, &up);
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+128h+right]
        vmovss  xmm5, dword ptr [rsp+128h+right+4]
        vmovss  xmm6, dword ptr [rsp+128h+right+8]
        vmovss  xmm9, cs:__real@3f800000
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
        vdivss  xmm1, xmm9, xmm0
        vmulss  xmm10, xmm4, xmm1
        vmovss  xmm4, dword ptr [rsp+128h+up]
        vmulss  xmm8, xmm6, xmm1
        vmovss  xmm6, dword ptr [rsp+128h+up+8]
        vmulss  xmm11, xmm5, xmm1
        vmovss  xmm5, dword ptr [rsp+128h+up+4]
        vmovss  dword ptr [rsp+128h+right+8], xmm8
        vmovss  dword ptr [rsp+128h+right], xmm10
        vmovss  dword ptr [rsp+128h+right+4], xmm11
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
        vdivss  xmm1, xmm9, xmm0
        vmulss  xmm0, xmm6, xmm1
        vmovss  dword ptr [rsp+128h+up+8], xmm0
        vmulss  xmm7, xmm4, xmm1
        vmulss  xmm5, xmm5, xmm1
        vmulss  xmm6, xmm13, xmm0
        vmovss  dword ptr [rsp+128h+up], xmm7
        vmovss  dword ptr [rsp+128h+up+4], xmm5
        vmulss  xmm0, xmm10, xmm12
        vaddss  xmm2, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rsp+128h+offset], xmm2
        vmulss  xmm1, xmm11, xmm12
        vaddss  xmm3, xmm1, dword ptr [rsi+4]
        vmovss  dword ptr [rsp+128h+offset+4], xmm3
        vmovss  xmm4, dword ptr [rsi+8]
        vmulss  xmm0, xmm13, xmm7
        vaddss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rsp+128h+offset], xmm1
        vmulss  xmm2, xmm13, xmm5
        vaddss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+128h+offset+4], xmm0
        vmulss  xmm8, xmm8, xmm12
        vaddss  xmm1, xmm8, xmm4
        vaddss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rsp+128h+offset+8], xmm2
      }
      CL_UIWeapon_SetOriginOffset((const LocalClientNum_t)v14, _RSI->weaponIndex, &offset);
      __asm
      {
        vaddss  xmm0, xmm8, dword ptr [rsi+14h]
        vaddss  xmm2, xmm0, xmm6; offset
      }
      CL_UIWeapon_SetCollisionPlaneHeightOffset((const LocalClientNum_t)v14, _RSI->weaponIndex, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm13, [rsp+128h+var_A8]
        vmovaps xmm12, [rsp+128h+var_98]
        vmovaps xmm11, [rsp+128h+var_88]
        vmovaps xmm10, [rsp+128h+var_78]
        vmovaps xmm9, [rsp+128h+var_68]
        vmovaps xmm8, [rsp+128h+var_58]
        vmovaps xmm7, [rsp+128h+var_48]
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+128h+var_38] }
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
  LUIElement *v4; 
  unsigned int v6; 
  unsigned int v8; 
  int v9; 
  int v12; 
  int v15; 
  __int64 v17; 
  __int64 v18; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v4 = LUI_ToElement(luaVM, 1);
  v4->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_WeaponModel_Layout;
  v4->usageFlags |= 2u;
  LUI_LUIElement_RegisterMethods(v4, luaVM, s_weaponModelMethods);
  if ( v4->customElementData )
  {
    _R15 = LUI_LUIElement_RetrieveCustomElementData<LUIWeaponModelData>(v4, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v4, luaVM);
    _R15 = (LUIWeaponModelData *)j_lua_newuserdata(luaVM, 0x1Cui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v4->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v4->customElementData = _R15;
    *(_QWORD *)_R15->offset.v = 0i64;
    *(_QWORD *)&_R15->offset.z = 0i64;
    *(_QWORD *)&_R15->base2DPosition.y = 0i64;
    _R15->weaponIndex = 0;
  }
  v6 = 0;
  _R14 = &_R15->base2DPosition;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _R15->base2DPosition = 0i64;
  j_lua_getfield(luaVM, 2, "base2DPosition");
  if ( j_lua_type(luaVM, -1) == 5 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v8 + 1;
      j_lua_pushinteger(luaVM, (int)(v8 + 1));
      j_lua_gettable(luaVM, -2);
      if ( !j_lua_isnumber(luaVM, -1) )
        break;
      *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
      __asm { vmovaps xmm6, xmm0 }
      if ( v8 >= 2 )
      {
        LODWORD(v18) = 2;
        LODWORD(v17) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [r14], xmm6 }
      j_lua_settop(luaVM, -2);
      _R14 = (vec2_t *)((char *)_R14 + 4);
      ++v8;
      if ( v9 >= 2 )
        goto LABEL_25;
    }
    j_lua_settop(luaVM, -2);
  }
LABEL_25:
  j_lua_settop(luaVM, -2);
  *(_QWORD *)_R15->offset.v = 0i64;
  _R15->offset.v[2] = 0.0;
  j_lua_getfield(luaVM, 2, "offset");
  if ( j_lua_type(luaVM, -1) == 5 )
  {
    _RDI = _R15;
    while ( 1 )
    {
      v12 = v6 + 1;
      j_lua_pushinteger(luaVM, (int)(v6 + 1));
      j_lua_gettable(luaVM, -2);
      if ( !j_lua_isnumber(luaVM, -1) )
        break;
      *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
      __asm { vmovaps xmm6, xmm0 }
      if ( v6 >= 3 )
      {
        LODWORD(v18) = 3;
        LODWORD(v17) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rdi], xmm6 }
      j_lua_settop(luaVM, -2);
      _RDI = (LUIWeaponModelData *)((char *)_RDI + 4);
      ++v6;
      if ( v12 >= 3 )
        goto LABEL_34;
    }
    j_lua_settop(luaVM, -2);
  }
LABEL_34:
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "weaponIndex");
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  if ( j_lua_isnumber(luaVM, -1) )
    v15 = lui_tointeger32(luaVM, -1);
  else
    v15 = -1;
  _R15->weaponIndex = v15;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "collisionPlaneHeightOffset");
  if ( j_lua_isnumber(luaVM, -1) )
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm { vmovss  dword ptr [r15+14h], xmm0 }
  j_lua_settop(luaVM, -2);
  return 0i64;
}

