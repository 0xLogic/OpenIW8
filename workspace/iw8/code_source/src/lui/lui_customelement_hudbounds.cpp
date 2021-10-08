/*
==============
LUIElement_HUDBounds_Layout
==============
*/

void __fastcall LUIElement_HUDBounds_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *v17; 
  int LocalClientActiveCount; 
  bool v29; 
  bool v30; 
  char v76; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+28h]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
  }
  v17 = element;
  __asm
  {
    vmovss  xmm8, dword ptr [rdx+18h]
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovss  xmm9, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovss  xmm10, dword ptr [rdx+1Ch]
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovss  xmm12, dword ptr [rdx+2Ch]
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovss  xmm13, dword ptr [rdx]
    vmovaps [rsp+0D8h+var_88], xmm14
    vmovss  xmm14, dword ptr [rdx+10h]
    vmovaps [rsp+0D8h+var_98], xmm15
    vmovss  xmm15, dword ptr [rdx+14h]
    vmovss  [rsp+0D8h+arg_8], xmm0
    vmovaps xmm11, xmm2
  }
  LocalClientActiveCount = CL_GetLocalClientActiveCount();
  v29 = LocalClientActiveCount > 1 && localClientNum == LOCAL_CLIENT_1;
  v30 = LocalClientActiveCount > 1 && localClientNum == LOCAL_CLIENT_0;
  __asm { vmovss  xmm3, cs:__real@40e66666 }
  _ER8 = 0;
  _EAX = v29;
  __asm
  {
    vmovd   xmm0, eax
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm13, xmm4
    vmovd   xmm1, r8d
    vpcmpeqd xmm2, xmm0, xmm1
  }
  _EAX = v30;
  __asm
  {
    vmovd   xmm1, r8d
    vmovd   xmm0, eax
    vblendvps xmm5, xmm3, xmm4, xmm2
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm6, xmm3, xmm4, xmm2
    vmovss  [rsp+0D8h+var_A8], xmm6
    vucomiss xmm9, xmm4
    vucomiss xmm8, xmm5
    vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000
    vucomiss xmm10, xmm0
  }
  _EAX = v29;
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
  _EAX = v29;
  __asm
  {
    vmovd   xmm2, r8d
    vpcmpeqd xmm1, xmm0, xmm2
    vblendvps xmm0, xmm3, xmm4, xmm1
    vmulss  xmm10, xmm0, [rsp+0D8h+arg_8]
    vmovd   xmm0, eax
    vmovd   xmm1, r8d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
    vmovss  [rsp+0D8h+arg_8], xmm0
    vmovaps xmm2, xmm11; unitScale
    vmovaps xmm15, [rsp+0D8h+var_98]
  }
  _R11 = &v76;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
  LUIElement_DefaultLayout(localClientNum, v17, *(float *)&_XMM2, deltaTime, luaVM);
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
  v2->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_HUDBounds_Layout;
  v2->usageFlags |= 2u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

