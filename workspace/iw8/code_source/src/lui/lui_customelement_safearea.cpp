/*
==============
LUIElement_SafeArea_Layout
==============
*/

void __fastcall LUIElement_SafeArea_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *v18; 
  const dvar_t *v30; 
  bool v37; 
  bool v38; 
  int LocalClientActiveCount; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = DVARFLT_safeArea_adjusted_horizontal;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  v18 = element;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps [rsp+108h+var_98], xmm13
    vmovaps [rsp+108h+var_A8], xmm14
    vmovaps [rsp+108h+var_B8], xmm15
    vmovss  xmm0, dword ptr [rdx+28h]
    vmovss  xmm15, dword ptr [rdx+14h]
    vmovss  xmm12, dword ptr [rdx]
    vmovss  xmm8, dword ptr [rdx+4]
    vmovss  xmm9, dword ptr [rdx+18h]
    vmovss  xmm10, dword ptr [rdx+1Ch]
    vmovss  xmm14, dword ptr [rdx+10h]
    vmovss  xmm13, dword ptr [rdx+2Ch]
    vmovss  [rsp+108h+arg_8], xmm0
    vmovaps xmm11, xmm2
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_horizontal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  v30 = DVARFLT_safeArea_adjusted_vertical;
  if ( !DVARFLT_safeArea_adjusted_vertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_vertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vsubss  xmm0, xmm2, xmm6
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmulss  xmm6, xmm0, cs:?cls@@3UClStatic@@A.vidConfig.windowAspectRatio; ClStatic cls
    vsubss  xmm0, xmm2, dword ptr [rdi+28h]
    vmulss  xmm7, xmm0, cs:__real@43b40000
  }
  v37 = 0;
  v38 = 0;
  if ( !Com_FrontEnd_IsInFrontEnd() )
  {
    LocalClientActiveCount = CL_GetLocalClientActiveCount();
    v37 = LocalClientActiveCount > 1 && localClientNum == LOCAL_CLIENT_1;
    v38 = LocalClientActiveCount > 1 && localClientNum == LOCAL_CLIENT_0;
  }
  __asm { vmovss  xmm3, cs:__real@40e66666 }
  _EDX = 0;
  _EAX = v37;
  __asm
  {
    vucomiss xmm12, xmm6
    vmovd   xmm0, eax
    vmovd   xmm1, edx
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm5, xmm3, xmm7, xmm2
  }
  _EAX = v38;
  __asm
  {
    vmovd   xmm1, edx
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm7, xmm3, xmm7, xmm2
    vmovss  [rsp+108h+var_C8], xmm7
    vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm6, xmm1
    vucomiss xmm8, xmm0
    vucomiss xmm9, xmm5
    vxorps  xmm0, xmm7, xmm1
    vucomiss xmm10, xmm0
  }
  _EAX = v37;
  __asm
  {
    vmovss  xmm4, cs:__real@44340000
    vmovss  xmm3, cs:__real@43d80000
    vmulss  xmm0, xmm14, xmm4
    vmulss  xmm8, xmm0, cs:?cls@@3UClStatic@@A.vidConfig.windowAspectRatio; ClStatic cls
    vmulss  xmm0, xmm15, xmm4
    vmulss  xmm9, xmm0, cs:?cls@@3UClStatic@@A.vidConfig.windowAspectRatio; ClStatic cls
    vmovd   xmm0, eax
  }
  _EAX = v37;
  __asm
  {
    vmovd   xmm2, edx
    vpcmpeqd xmm1, xmm0, xmm2
    vblendvps xmm0, xmm3, xmm4, xmm1
    vmulss  xmm10, xmm0, [rsp+108h+arg_8]
    vmovd   xmm0, eax
    vmovd   xmm1, edx
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
    vmovss  [rsp+108h+arg_8], xmm0
    vmovaps xmm2, xmm11; unitScale
    vmovaps xmm14, [rsp+108h+var_A8]
  }
  _R11 = &v88;
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
    vmovaps xmm15, [rsp+108h+var_B8]
  }
  LUIElement_DefaultLayout(localClientNum, v18, *(float *)&_XMM2, deltaTime, luaVM);
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
  v2->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_SafeArea_Layout;
  v2->usageFlags |= 2u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

