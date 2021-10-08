/*
==============
LUIElement_ScreenCenterFade_EnableFade
==============
*/
__int64 LUIElement_ScreenCenterFade_EnableFade(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:EnableFade()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    LUIElement_ScreenCenterFade_GetConfigData(v2, luaVM)->fadeEnabled = 1;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUIElement_ScreenCenterFade_DisableFade
==============
*/
__int64 LUIElement_ScreenCenterFade_DisableFade(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:DisableFade()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    LUIElement_ScreenCenterFade_GetConfigData(v2, luaVM)->fadeEnabled = 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUIElement_ScreenCenterFade_GetAlpha
==============
*/

float __fastcall LUIElement_ScreenCenterFade_GetAlpha(const LocalClientNum_t localClientNum, const LUIScreenCenterFade *const configData, double unitScale, const vec2_t *topleft)
{
  __int64 v10; 
  __int64 v45; 
  __int64 v46; 
  int v47; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rdx]
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  _RDI = topleft;
  __asm { vmovaps xmm7, xmm2 }
  v10 = localClientNum;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_screencenterfade.cpp", 35, ASSERT_TYPE_ASSERT, "(configData->radius > 0.f)", (const char *)&queryFormat, "configData->radius > 0.f") )
    __debugbreak();
  if ( (unsigned int)v10 >= 2 )
  {
    v47 = 2;
    LODWORD(v45) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v45, v47) )
      __debugbreak();
  }
  if ( (int)v10 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_screencenterfade.cpp", 37, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  if ( activeScreenPlacementMode && activeScreenPlacementMode != SCRMODE_DISPLAY && (activeScreenPlacementMode == SCRMODE_INVALID ? CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.") : CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode")) )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@3f000000
    vmulss  xmm3, xmm6, dword ptr [rcx]
    vmulss  xmm4, xmm6, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rdi]
    vaddss  xmm0, xmm1, dword ptr [rax]
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm7
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm5, xmm3, xmm2
    vaddss  xmm2, xmm1, dword ptr [rax+4]
    vmulss  xmm0, xmm2, xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmulss  xmm3, xmm0, xmm7
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm4, xmm7, dword ptr [rsi]
    vmulss  xmm1, xmm1, xmm1
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vdivss  xmm3, xmm2, xmm1
    vminss  xmm7, xmm3, xmm6
  }
  if ( (unsigned int)v10 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v46) = cg_t::ms_allocatedCount;
    LODWORD(v45) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v45, v46) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v10] )
  {
    LODWORD(v46) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v46) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v46) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v46) )
      __debugbreak();
  }
  _RAX = cg_t::ms_cgArray[v10];
  __asm
  {
    vmovss  xmm1, dword ptr [rax+738h]
    vsubss  xmm0, xmm6, xmm1
    vmulss  xmm2, xmm0, dword ptr [rsi+10h]
    vmulss  xmm1, xmm1, dword ptr [rsi+14h]
    vsubss  xmm0, xmm6, xmm7
    vmovaps xmm6, [rsp+78h+var_28]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm3, xmm0
    vaddss  xmm0, xmm1, xmm7
    vmovaps xmm7, [rsp+78h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
LUIElement_ScreenCenterFade_GetConfigData
==============
*/
LUIScreenCenterFade *LUIElement_ScreenCenterFade_GetConfigData(LUIElement *const element, lua_State *const luaVM)
{
  if ( element->customElementData )
    return (LUIScreenCenterFade *)element->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (LUIScreenCenterFade *)element->customElementData;
}

/*
==============
LUIElement_ScreenCenterFade_Layout
==============
*/

void __fastcall LUIElement_ScreenCenterFade_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *i; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _R14 = element->customElementData;
  __asm { vmovaps xmm1, xmm6; unitScale }
  LUIElement_UpdateLayout(element, *(float *)&_XMM1, deltaTime, luaVM);
  if ( *((_BYTE *)_R14 + 24) )
  {
    _RAX = _R14[1];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0CCh]
      vmovss  xmm1, dword ptr [rax+0D0h]
      vmovss  dword ptr [rsp+88h+topleft], xmm0
      vmovss  xmm0, dword ptr [rax+0D4h]
      vmovss  dword ptr [rsp+88h+bottomRight], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [r14]
      vmovss  dword ptr [rsp+88h+topleft+4], xmm1
      vmovss  xmm1, dword ptr [rax+0D8h]
      vmovss  dword ptr [rsp+88h+bottomRight+4], xmm1
    }
  }
  for ( i = element->firstChild; i; i = i->nextSibling )
  {
    __asm { vmovaps xmm2, xmm6; unitScale }
    LUIElement_Layout(localClientNum, i, *(float *)&_XMM2, deltaTime, luaVM);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
}

/*
==============
LUI_LuaCall_LUIElement_SetupScreenCenterFadeElement
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScreenCenterFadeElement(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupScreenCenterFadeElement_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupScreenCenterFadeElement_impl
==============
*/

__int64 __fastcall LUI_LuaCall_LUIElement_SetupScreenCenterFadeElement_impl(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v5; 
  __int64 result; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v5 = LUI_ToElement(luaVM, 1);
  v5->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_ScreenCenterFade_Layout;
  v5->usageFlags |= 3u;
  LUI_LUIElement_RegisterMethods(v5, luaVM, s_fadeMethods);
  if ( v5->customElementData )
  {
    _RDI = LUI_LUIElement_RetrieveCustomElementData<LUIScreenCenterFade>(v5, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v5, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v5, luaVM);
    _RDI = (LUIScreenCenterFade *)j_lua_newuserdata(luaVM, 0x20ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v5->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v5->customElementData = _RDI;
    *(_QWORD *)&_RDI->radius = 0i64;
    _RDI->proxyElement = NULL;
    *(_QWORD *)&_RDI->minAlpha = 0i64;
    *(_QWORD *)&_RDI->fadeEnabled = 0i64;
  }
  j_lua_getfield(luaVM, 2, "radius");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmaxss  xmm1, xmm0, xmm6
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm1, xmm1, xmm1
    }
  }
  __asm { vmovss  dword ptr [rdi], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "proxyElement");
  if ( j_lua_isuserdata(luaVM, -1) )
    v5 = LUI_ToElement(luaVM, -1);
  _RDI->proxyElement = v5;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minAlpha");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    __asm { vmovss  xmm1, cs:__real@3e4ccccd }
  }
  __asm { vmovss  dword ptr [rdi+10h], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "minAlphaADS");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm6, xmm0, xmm6 }
  }
  __asm { vmovss  dword ptr [rdi+14h], xmm6 }
  j_lua_settop(luaVM, -2);
  result = 0i64;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

