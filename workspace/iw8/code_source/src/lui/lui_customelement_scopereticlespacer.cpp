/*
==============
LUIElement_ScopeReticleSpacer_Layout
==============
*/

void __fastcall LUIElement_ScopeReticleSpacer_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  __int64 v10; 
  bool v12; 
  bool v13; 
  __int64 v40; 
  __int64 v41; 
  int v42; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
    vmovaps xmm7, xmm2
  }
  v10 = localClientNum;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RDI = element->customElementData;
  if ( (unsigned int)v10 >= cg_t::ms_allocatedCount )
  {
    v42 = cg_t::ms_allocatedCount;
    LODWORD(v40) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v40, v42) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v10] )
  {
    LODWORD(v41) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v41) )
      __debugbreak();
  }
  v12 = cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN;
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v41) = v10;
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v41);
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  _RAX = cg_t::ms_cgArray[v10];
  __asm
  {
    vmovss  xmm0, dword ptr [rax+74Ch]
    vmulss  xmm6, xmm0, cs:__real@3b808081
    vucomiss xmm6, dword ptr [rdi+14h]
    vmovss  xmm3, dword ptr [rax+738h]
  }
  if ( !v12 )
    goto LABEL_15;
  __asm { vucomiss xmm3, dword ptr [rdi+18h] }
  if ( !v12 )
  {
LABEL_15:
    v12 = _RDI[16] == 0;
    __asm
    {
      vmulss  xmm0, xmm3, dword ptr [rdi+4]
      vmovss  xmm5, cs:__real@3f800000
      vsubss  xmm2, xmm5, xmm3
      vmulss  xmm1, xmm2, dword ptr [rdi+0Ch]
      vmulss  xmm2, xmm2, dword ptr [rdi+8]
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm3, dword ptr [rdi]
      vmulss  xmm4, xmm1, xmm6
      vsubss  xmm1, xmm5, xmm6
      vmovss  dword ptr [rdi+18h], xmm3
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm3, xmm1
      vaddss  xmm2, xmm4, xmm0
      vmulss  xmm1, xmm2, cs:__real@3f000000
      vmovss  dword ptr [rdi+14h], xmm6
    }
    if ( !v12 )
    {
      _RAX = element->parent;
      __asm
      {
        vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rax], xmm0
      }
    }
    if ( _RDI[17] )
    {
      _RAX = element->parent;
      __asm { vmovss  dword ptr [rax+4], xmm1 }
    }
    if ( _RDI[18] )
    {
      _RAX = element->parent;
      __asm
      {
        vmulss  xmm0, xmm2, cs:__real@bf000000
        vmovss  dword ptr [rax+18h], xmm0
      }
    }
    if ( _RDI[19] )
    {
      _RAX = element->parent;
      __asm { vmovss  dword ptr [rax+1Ch], xmm1 }
    }
  }
  __asm
  {
    vmovaps xmm2, xmm7; unitScale
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
  LUIElement_DefaultLayout((const LocalClientNum_t)v10, element, *(float *)&_XMM2, deltaTime, luaVM);
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
  LUIElement *v3; 
  bool v5; 
  bool v6; 
  bool v7; 
  bool v8; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v3, luaVM);
  _RSI = j_lua_newuserdata(luaVM, 0x1Cui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v3->customElementData = _RSI;
  *_RSI = 0i64;
  _RSI[1] = 0i64;
  _RSI[2] = 0i64;
  *((_DWORD *)_RSI + 6) = 0;
  j_lua_getfield(luaVM, 2, "minSizeADS");
  if ( j_lua_isnumber(luaVM, -1) )
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  else
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  __asm { vmovss  dword ptr [rsi], xmm0 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxSizeADS");
  if ( j_lua_isnumber(luaVM, -1) )
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  else
    __asm { vmovss  xmm0, cs:__real@40a00000 }
  __asm { vmovss  dword ptr [rsi+4], xmm0 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minSizeHip");
  if ( j_lua_isnumber(luaVM, -1) )
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  else
    __asm { vmovss  xmm0, cs:__real@41a00000 }
  __asm { vmovss  dword ptr [rsi+8], xmm0 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxSizeHip");
  if ( j_lua_isnumber(luaVM, -1) )
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  else
    __asm { vmovss  xmm0, cs:__real@42700000 }
  __asm { vmovss  dword ptr [rsi+0Ch], xmm0 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustLeft");
  v5 = 0;
  v6 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  *((_BYTE *)_RSI + 16) = v6;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustRight");
  v7 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  *((_BYTE *)_RSI + 17) = v7;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustTop");
  v8 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  *((_BYTE *)_RSI + 18) = v8;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustBottom");
  if ( j_lua_type(luaVM, -1) == 1 )
    v5 = j_lua_toboolean(luaVM, -1) != 0;
  *((_BYTE *)_RSI + 19) = v5;
  j_lua_settop(luaVM, -2);
  *((_DWORD *)_RSI + 5) = -1082130432;
  *((_DWORD *)_RSI + 6) = -1082130432;
  v3->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_ScopeReticleSpacer_Layout;
  v3->usageFlags |= 2u;
  return 0i64;
}

