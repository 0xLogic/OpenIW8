/*
==============
luaopen_math
==============
*/
__int64 luaopen_math(lua_State *L)
{
  *((_DWORD *)j_lua_newuserdata(L, 0x28ui64) + 8) = 0;
  j_lj_lib_register(L, "math", lj_lib_init_math, lj_lib_cf_math);
  return 1i64;
}

/*
==============
lj_math_random_step
==============
*/
__int64 lj_math_random_step(RandomState *rs)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 

  v2 = rs->gen[2];
  v3 = (rs->gen[0] << 18) ^ (rs->gen[0] >> 45) ^ ((unsigned int)(rs->gen[0] >> 14) ^ ((unsigned int)rs->gen[0] << 18)) & 0x7FFFF;
  rs->gen[0] = v3;
  v4 = (rs->gen[1] << 28) ^ (rs->gen[1] >> 30) ^ ((rs->gen[1] >> 11) ^ (rs->gen[1] << 28)) & 0x3FFFFFFFFi64;
  v5 = v4 ^ v3;
  rs->gen[1] = v4;
  v6 = rs->gen[3];
  v7 = (v2 << 7) ^ HIWORD(v2) ^ (unsigned __int16)(((_WORD)v2 << 7) ^ (v2 >> 24));
  v8 = v7 ^ v5;
  rs->gen[2] = v7;
  v9 = (v6 << 8) ^ (v6 >> 39) ^ (((_DWORD)v6 << 8) ^ (unsigned int)(v6 >> 18)) & 0x1FFFFFF;
  rs->gen[3] = v9;
  return (v8 ^ v9) & 0xFFFFFFFFFFFFFi64 | 0x3FF0000000000000i64;
}

/*
==============
lj_ffh_math_abs
==============
*/
__int64 lj_ffh_math_abs(lua_State *L)
{
  j_lj_lib_checknum(L, 1);
  return 0i64;
}

/*
==============
lj_ffh_math_sqrt
==============
*/
__int64 lj_ffh_math_sqrt(lua_State *L)
{
  j_lj_lib_checknum(L, 1);
  return 0i64;
}

/*
==============
lj_ffh_math_log
==============
*/
__int64 lj_ffh_math_log(lua_State *L)
{
  double v5; 
  __int64 result; 

  *(double *)&_XMM0 = j_lj_lib_checknum(L, 1);
  if ( &L->base[1] >= L->top )
    return 0i64;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  *(double *)&_XMM0 = log_0(*(double *)&_XMM0);
  __asm { vmovaps xmm6, xmm0 }
  v5 = j_lj_lib_checknum(L, 2);
  log_0(v5);
  _RCX = L->base;
  result = 2i64;
  __asm
  {
    vdivsd  xmm1, xmm6, xmm0
    vmovaps xmm6, [rsp+38h+var_18]
    vmovsd  qword ptr [rcx-10h], xmm1
  }
  return result;
}

/*
==============
lj_ffh_math_atan2
==============
*/
__int64 lj_ffh_math_atan2(lua_State *L)
{
  j_lj_lib_checknum(L, 1);
  j_lj_lib_checknum(L, 2);
  return 0i64;
}

/*
==============
lj_ffh_math_ldexp
==============
*/
__int64 lj_ffh_math_ldexp(lua_State *L)
{
  j_lj_lib_checknum(L, 1);
  j_lj_lib_checknum(L, 2);
  return 0i64;
}

/*
==============
lj_ffh_math_min
==============
*/
__int64 lj_ffh_math_min(lua_State *L)
{
  int v2; 

  v2 = 0;
  do
    j_lj_lib_checknum(L, ++v2);
  while ( &L->base[v2] < L->top );
  return 0i64;
}

/*
==============
lj_cf_math_random
==============
*/

__int64 __fastcall lj_cf_math_random(lua_State *L, double _XMM1_8)
{
  TValue *base; 
  __int64 v6; 
  __int64 v7; 
  __int64 result; 
  unsigned __int64 v22; 

  base = L->base;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  v6 = L->top - base;
  if ( (unsigned int)(*(__int64 *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) >> 47) != -13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_math.c", 157, "(((uint32_t)(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn.c.upvalue[(1)-1]))->it64 >> 47)) == (~12u))") )
    __debugbreak();
  v7 = *(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64;
  if ( !*(_DWORD *)(v7 + 0x50) )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1; d }
    random_init((RandomState *)(v7 + 48), *(long double *)&_XMM1);
  }
  v22 = j_lj_math_random_step((RandomState *)(v7 + 48));
  __asm
  {
    vmovsd  xmm0, [rsp+48h+arg_0]
    vsubsd  xmm6, xmm0, cs:__real@3ff0000000000000
  }
  if ( (int)v6 > 0 )
  {
    __asm { vmovaps [rsp+48h+var_28], xmm8 }
    *(double *)&_XMM0 = j_lj_lib_checknum(L, 1);
    __asm { vmovaps xmm8, xmm0 }
    if ( (_DWORD)v6 == 1 )
    {
      __asm { vmulsd  xmm0, xmm0, xmm6 }
      *(double *)&_XMM0 = j_lj_vm_floor_1();
      __asm { vaddsd  xmm6, xmm0, cs:__real@3ff0000000000000 }
    }
    else
    {
      *(double *)&_XMM0 = j_lj_lib_checknum(L, 2);
      __asm
      {
        vsubsd  xmm1, xmm0, xmm8
        vaddsd  xmm2, xmm1, cs:__real@3ff0000000000000
        vmulsd  xmm0, xmm2, xmm6
      }
      *(double *)&_XMM0 = j_lj_vm_floor_1();
      __asm { vaddsd  xmm6, xmm0, xmm8 }
    }
    __asm { vmovaps xmm8, [rsp+48h+var_28] }
  }
  _RCX = L->top;
  result = 1i64;
  __asm { vmovsd  qword ptr [rcx], xmm6 }
  ++L->top;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
lj_cf_math_randomseed
==============
*/
__int64 lj_cf_math_randomseed(lua_State *L)
{
  __int64 v3; 

  if ( (unsigned int)(*(__int64 *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) >> 47) != -13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_math.c", 209, "(((uint32_t)(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn.c.upvalue[(1)-1]))->it64 >> 47)) == (~12u))") )
    __debugbreak();
  v3 = *(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64;
  *(double *)&_XMM0 = j_lj_lib_checknum(L, 1);
  __asm { vmovaps xmm1, xmm0; d }
  random_init((RandomState *)(v3 + 48), *(long double *)&_XMM1);
  return 0i64;
}

/*
==============
random_init
==============
*/

void __fastcall random_init(RandomState *rs, double d)
{
  unsigned __int64 v6; 
  unsigned __int64 v10; 
  unsigned __int64 v13; 
  unsigned __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 

  __asm
  {
    vmovsd  xmm2, cs:__real@400921fb54442d18
    vmovsd  xmm3, cs:__real@4005bf0a8b145769
    vmulsd  xmm0, xmm1, xmm2
    vaddsd  xmm4, xmm0, xmm3
    vmovsd  [rsp+28h+arg_0], xmm4
  }
  v6 = v18;
  if ( v18 < 2 )
    v6 = v18 + 2;
  __asm
  {
    vmulsd  xmm0, xmm4, xmm2
    vaddsd  xmm1, xmm0, xmm3
    vmovsd  [rsp+28h+arg_0], xmm1
  }
  rs->gen[0] = v6;
  v10 = v19;
  if ( v19 < 0x40 )
    v10 = v19 + 64;
  __asm
  {
    vmulsd  xmm0, xmm1, xmm2
    vaddsd  xmm4, xmm0, xmm3
    vmovsd  [rsp+28h+arg_0], xmm4
  }
  rs->gen[1] = v10;
  v13 = v20;
  if ( v20 < 0x200 )
    v13 = v20 + 512;
  __asm
  {
    vmulsd  xmm0, xmm4, xmm2
    vaddsd  xmm1, xmm0, xmm3
    vmovsd  [rsp+28h+arg_0], xmm1
  }
  rs->gen[2] = v13;
  v16 = v21;
  if ( v21 < 0x20000 )
    v16 = v21 + 0x20000;
  rs->gen[3] = v16;
  v17 = 10i64;
  rs->valid = 1;
  do
  {
    j_lj_math_random_step(rs);
    --v17;
  }
  while ( v17 );
}

