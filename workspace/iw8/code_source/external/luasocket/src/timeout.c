/*
==============
timeout_lua_gettime
==============
*/

__int64 __fastcall timeout_lua_gettime(lua_State *L, double _XMM1_8)
{
  _FILETIME SystemTimeAsFileTime; 

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm2, xmm0, cs:__real@407ad7f29abcaf48
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
    vmulsd  xmm0, xmm1, cs:__real@3e7ad7f29abcaf48
    vaddsd  xmm2, xmm2, xmm0
    vsubsd  xmm1, xmm2, cs:__real@4205b08488000000; n
  }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  return 1i64;
}

/*
==============
timeout_lua_sleep
==============
*/

__int64 __fastcall timeout_lua_sleep(lua_State *L, double _XMM1_8)
{
  char v5; 

  *(double *)&_XMM0 = j_luaL_checknumber(L, 1);
  __asm
  {
    vxorpd  xmm1, xmm1, xmm1
    vmaxsd  xmm2, xmm0, xmm1
    vcomisd xmm2, cs:__real@7f50624dd2f1a9fb
  }
  if ( v5 )
    __asm { vmulsd  xmm2, xmm2, cs:__real@408f400000000000 }
  __asm
  {
    vminsd  xmm0, xmm2, cs:__real@41dfffffffc00000
    vcvttsd2si ecx, xmm0; dwMilliseconds
  }
  Sleep(_ECX);
  return 0i64;
}

/*
==============
timeout_get
==============
*/
long double timeout_get(t_timeout_ *tm)
{
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = tm;
  __asm
  {
    vxorpd  xmm6, xmm6, xmm6
    vcomisd xmm0, xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovsd  xmm7, qword ptr [rcx+8]
    vcomisd xmm7, xmm6
  }
  j_timeout_gettime();
  __asm
  {
    vsubsd  xmm1, xmm7, xmm0
    vaddsd  xmm2, xmm1, qword ptr [rbx+10h]
    vmovsd  xmm1, qword ptr [rbx]
    vmaxsd  xmm3, xmm2, xmm6
    vcmpltsd xmm0, xmm1, xmm3
    vblendvpd xmm1, xmm3, xmm1, xmm0
    vmovaps xmm0, xmm1
    vmovsd  qword ptr [rsp+48h+SystemTimeAsFileTime.dwLowDateTime], xmm1
    vmovaps xmm7, [rsp+48h+var_28]
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(double *)&_XMM0;
}

/*
==============
timeout_getretry
==============
*/
long double timeout_getretry(t_timeout_ *tm)
{
  char v9; 

  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovaps [rsp+48h+var_28], xmm7
  }
  _RBX = tm;
  __asm
  {
    vxorpd  xmm7, xmm7, xmm7
    vcomisd xmm0, xmm7
    vmovaps [rsp+48h+var_18], xmm6
    vmovsd  xmm6, qword ptr [rcx+8]
  }
  *(double *)&_XMM0 = j_timeout_gettime();
  __asm
  {
    vcomisd xmm6, xmm7
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm2, xmm0
  }
  if ( v9 )
  {
    __asm
    {
      vmovsd  xmm1, qword ptr [rbx]
      vsubsd  xmm0, xmm1, xmm0
      vaddsd  xmm2, xmm0, qword ptr [rbx+10h]
      vmaxsd  xmm0, xmm2, xmm7
      vmovaps xmm7, [rsp+48h+var_28]
    }
  }
  else
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+8]
      vsubsd  xmm1, xmm0, xmm2
      vaddsd  xmm2, xmm1, qword ptr [rbx+10h]
      vmovsd  xmm1, qword ptr [rbx]
      vmaxsd  xmm3, xmm2, xmm7
      vmovaps xmm7, [rsp+48h+var_28]
      vcmpltsd xmm0, xmm1, xmm3
      vblendvpd xmm1, xmm3, xmm1, xmm0
      vmovaps xmm0, xmm1
      vmovsd  qword ptr [rsp+48h+SystemTimeAsFileTime.dwLowDateTime], xmm1
    }
  }
  return *(double *)&_XMM0;
}

/*
==============
timeout_getstart
==============
*/
long double timeout_getstart(t_timeout_ *tm)
{
  __asm { vmovsd  xmm0, qword ptr [rcx+10h] }
  return *(double *)&_XMM0;
}

/*
==============
timeout_gettime
==============
*/

long double __fastcall timeout_gettime(double _XMM0_8, double _XMM1_8)
{
  _FILETIME SystemTimeAsFileTime; 

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm2, xmm0, cs:__real@407ad7f29abcaf48
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
    vmulsd  xmm0, xmm1, cs:__real@3e7ad7f29abcaf48
    vaddsd  xmm2, xmm2, xmm0
    vsubsd  xmm0, xmm2, cs:__real@4205b08488000000
  }
  return *(double *)&_XMM0;
}

/*
==============
timeout_init
==============
*/

void __fastcall timeout_init(t_timeout_ *tm, double block, double total)
{
  __asm
  {
    vmovsd  qword ptr [rcx], xmm1
    vmovsd  qword ptr [rcx+8], xmm2
  }
}

/*
==============
timeout_markstart
==============
*/

t_timeout_ *__fastcall timeout_markstart(t_timeout_ *tm, double _XMM1_8)
{
  _FILETIME SystemTimeAsFileTime; 

  _RBX = tm;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm2, xmm0, cs:__real@407ad7f29abcaf48
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
    vmulsd  xmm0, xmm1, cs:__real@3e7ad7f29abcaf48
    vaddsd  xmm2, xmm2, xmm0
    vsubsd  xmm3, xmm2, cs:__real@4205b08488000000
    vmovsd  qword ptr [rbx+10h], xmm3
  }
  return _RBX;
}

/*
==============
timeout_meth_gettimeout
==============
*/
__int64 timeout_meth_gettimeout(lua_State *L, t_timeout_ *tm)
{
  __asm { vmovsd  xmm1, qword ptr [rdx]; n }
  _RBX = tm;
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  __asm { vmovsd  xmm1, qword ptr [rbx+8]; n }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  return 2i64;
}

/*
==============
timeout_meth_settimeout
==============
*/
__int64 timeout_meth_settimeout(lua_State *L, t_timeout_ *tm)
{
  char v8; 
  __int64 result; 

  __asm { vmovsd  xmm2, cs:__real@bff0000000000000; def }
  _RDI = tm;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  *(double *)&_XMM0 = j_luaL_optnumber(L, 2, *(long double *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  v8 = *j_luaL_optlstring(L, 3, "b", NULL);
  if ( v8 == 98 )
  {
    __asm { vmovsd  qword ptr [rdi], xmm6 }
  }
  else
  {
    if ( ((v8 - 114) & 0xFD) != 0 )
      j_luaL_argerror(L, 3, "invalid timeout mode");
    __asm { vmovsd  qword ptr [rdi+8], xmm6 }
  }
  __asm { vmovsd  xmm1, cs:__real@3ff0000000000000; n }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  result = 1i64;
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
}

/*
==============
timeout_open
==============
*/
__int64 timeout_open(lua_State *L)
{
  j_luaL_setfuncs(L, func_1, 0);
  return 0i64;
}

