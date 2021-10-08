/*
==============
LUIElement_PulseArray_StartOutwardsPulse
==============
*/
__int64 LUIElement_PulseArray_StartOutwardsPulse(lua_State *const luaVM)
{
  LUIElement *v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  LocalClientNum_t v4; 
  unsigned int v5; 
  LocalClientNum_t v7; 
  int v8; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:StartOutwardsPulse()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v4 = CurrentValidLocalClient;
    if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT )
    {
      v8 = 2;
      v7 = CurrentValidLocalClient;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( v4 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_pulsearray.cpp", 134, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
      __debugbreak();
    v2->currentAnimationState.userDataInt = CG_GetLocalClientGlobals(v4)->time;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_PulseArray_StartInwardsPulse
==============
*/
__int64 LUIElement_PulseArray_StartInwardsPulse(lua_State *const luaVM)
{
  LUIElement *v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  LocalClientNum_t v4; 
  unsigned int v5; 
  LocalClientNum_t v7; 
  int v8; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:StartInwardsPulse()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v4 = CurrentValidLocalClient;
    if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT )
    {
      v8 = 2;
      v7 = CurrentValidLocalClient;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( v4 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_pulsearray.cpp", 151, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
      __debugbreak();
    v2->currentAnimationState.userDataInt = -CG_GetLocalClientGlobals(v4)->time;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_PulseArray_Render
==============
*/

void __fastcall LUIElement_PulseArray_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  int time; 
  unsigned int v34; 
  int v84; 
  int i; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float vMina; 
  float vMinb; 
  float vMinc; 
  int uMax; 
  float uMaxa; 
  float uMaxb; 
  float uMaxc; 
  float v121; 
  float v122; 
  float v123; 
  int v124; 
  vec4_t color; 
  vec4_t quadVerts[4]; 
  char v131; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RDI = element;
  __asm { vmovss  [rsp+1A0h+var_14C], xmm3 }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    uMax = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, uMax) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_pulsearray.cpp", 20, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0D8h]
    vsubss  xmm1, xmm0, dword ptr [rdi+0D0h]
    vmovss  xmm0, dword ptr [rdi+0D4h]
  }
  time = LocalClientGlobals->time;
  __asm
  {
    vmulss  xmm15, xmm1, cs:__real@3e2aaaab
    vsubss  xmm1, xmm0, dword ptr [rdi+0CCh]
    vmulss  xmm9, xmm1, cs:__real@3dcccccd
    vmovss  xmm12, [rbp+0A0h+blue]
    vmovss  xmm13, [rbp+0A0h+green]
    vmovss  xmm14, [rbp+0A0h+red]
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3f800000
  }
  v34 = (unsigned int)_RDI->currentAnimationState.userDataInt >> 31;
  v124 = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  [rsp+1A0h+var_144], xmm0
    vmovss  [rsp+1A0h+var_148], xmm9
    vmovss  [rsp+1A0h+var_140], xmm6
    vxorps  xmm8, xmm8, xmm8
  }
  do
  {
    __asm
    {
      vxorps  xmm11, xmm11, xmm11
      vcvtsi2ss xmm11, xmm11, r15d
      vsubss  xmm9, xmm11, cs:__real@40200000
    }
    _EBX = 0;
    __asm { vandps  xmm9, xmm9, xmm10 }
    _ER15 = 0;
    do
    {
      __asm
      {
        vmovd   xmm1, r15d
        vmovd   xmm5, ebx
        vcvtdq2ps xmm5, xmm5
        vsubss  xmm0, xmm5, cs:__real@40900000
        vandps  xmm0, xmm0, xmm10
        vaddss  xmm4, xmm0, xmm9
        vmovss  xmm0, cs:__real@40e00000
        vsubss  xmm3, xmm0, xmm4
      }
      _EAX = (unsigned __int8)v34;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm3, xmm4, xmm2
        vmulss  xmm3, xmm1, cs:__real@3e124925
        vmulss  xmm1, xmm3, [rsp+1A0h+var_144]
        vsubss  xmm0, xmm7, xmm3
        vmulss  xmm2, xmm0, xmm6
        vaddss  xmm2, xmm2, xmm1
        vcvttss2si ecx, xmm2
      }
      if ( time > _ECX && time < _ECX + 100 )
      {
        __asm
        {
          vmulss  xmm1, xmm5, [rsp+1A0h+var_148]
          vxorps  xmm0, xmm0, xmm0
          vmulss  xmm2, xmm11, xmm15
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm6, xmm0, cs:__real@3c23d70a
          vaddss  xmm0, xmm1, dword ptr [rdi+0CCh]; left
          vaddss  xmm1, xmm2, dword ptr [rdi+0D0h]; top
          vaddss  xmm2, xmm0, [rsp+1A0h+var_148]; right
          vaddss  xmm3, xmm1, xmm15; bottom
        }
        LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
        __asm
        {
          vcmpless xmm0, xmm6, cs:__real@3f000000
          vsubss  xmm1, xmm7, xmm6
          vmovss  [rsp+1A0h+var_168], xmm7
          vblendvps xmm0, xmm1, xmm6, xmm0
          vmulss  xmm1, xmm0, cs:__real@3f19999a
          vmulss  xmm2, xmm1, [rsp+1A0h+var_14C]
          vmovss  [rsp+1A0h+uMax], xmm7
          vmovss  [rsp+1A0h+vMin], xmm8
          vmovss  dword ptr [rsp+1A0h+fmt], xmm8
          vmovss  dword ptr [rsp+1A0h+var_138], xmm14
          vmovss  dword ptr [rsp+1A0h+var_138+4], xmm13
          vmovss  dword ptr [rsp+1A0h+var_138+8], xmm12
          vmovss  dword ptr [rsp+1A0h+var_138+0Ch], xmm2
        }
        LUI_Render_DrawImage(localClientNum, _RDI, luaVM, (const vec4_t (*)[4])quadVerts, fmt, vMina, uMaxa, v121, &color, LUI_DefaultMaterial);
        __asm { vmovss  xmm6, [rsp+1A0h+var_140] }
      }
      ++_EBX;
    }
    while ( _EBX < 10 );
    ++v124;
  }
  while ( v124 < 6 );
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, esi
    vmulss  xmm0, xmm0, cs:__real@3c23d70a; val
    vmovaps xmm2, xmm7; max
    vmovaps xmm1, xmm8; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  if ( (_BYTE)v34 )
    __asm { vsubss  xmm0, xmm7, xmm0 }
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3d4ccccd
    vmulss  xmm6, xmm0, [rsp+1A0h+var_14C]
  }
  v84 = 1;
  for ( i = 1; i < 6; ++i )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+0D4h]; right
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, xmm15
      vaddss  xmm1, xmm1, dword ptr [rdi+0D0h]; top
      vmovss  xmm0, dword ptr [rdi+0CCh]; left
      vaddss  xmm3, xmm1, xmm7; bottom
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovss  [rsp+1A0h+uMax], xmm7
      vmovss  [rsp+1A0h+vMin], xmm8
      vmovss  dword ptr [rsp+1A0h+fmt], xmm8
      vmovss  dword ptr [rsp+1A0h+var_138], xmm14
      vmovss  dword ptr [rsp+1A0h+var_138+4], xmm13
      vmovss  dword ptr [rsp+1A0h+var_138+8], xmm12
      vmovss  dword ptr [rsp+1A0h+var_138+0Ch], xmm6
    }
    LUI_Render_DrawImage(localClientNum, _RDI, luaVM, (const vec4_t (*)[4])quadVerts, fmta, vMinb, uMaxb, v122, &color, LUI_DefaultMaterial);
  }
  __asm { vmovss  xmm9, [rsp+1A0h+var_148] }
  do
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+0D8h]; bottom
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm1, xmm0, xmm9
      vaddss  xmm0, xmm1, dword ptr [rdi+0CCh]; left
      vmovss  xmm1, dword ptr [rdi+0D0h]; top
      vaddss  xmm2, xmm0, xmm7; right
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovss  [rsp+1A0h+uMax], xmm7
      vmovss  [rsp+1A0h+vMin], xmm8
      vmovss  dword ptr [rsp+1A0h+fmt], xmm8
      vmovss  dword ptr [rsp+1A0h+var_138], xmm14
      vmovss  dword ptr [rsp+1A0h+var_138+4], xmm13
      vmovss  dword ptr [rsp+1A0h+var_138+8], xmm12
      vmovss  dword ptr [rsp+1A0h+var_138+0Ch], xmm6
    }
    LUI_Render_DrawImage(localClientNum, _RDI, luaVM, (const vec4_t (*)[4])quadVerts, fmtb, vMinc, uMaxc, v123, &color, LUI_DefaultMaterial);
    ++v84;
  }
  while ( v84 < 10 );
  _R11 = &v131;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupPulseArray
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupPulseArray(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_pulseArrayMethods);
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_PulseArray_Render;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

