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
  double v2; 
  double v3; 
  double v4; 
  double v5; 
  __int64 result; 

  v2 = j_lj_lib_checknum(L, 1);
  if ( &L->base[1] >= L->top )
    return 0i64;
  v3 = log_0(v2);
  v4 = j_lj_lib_checknum(L, 2);
  v5 = log_0(v4);
  result = 2i64;
  L->base[-2].n = v3 / v5;
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
  __int64 v4; 
  __int64 v5; 
  double v7; 
  double v8; 
  __int64 result; 

  base = L->base;
  v4 = L->top - base;
  if ( (unsigned int)(*(__int64 *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) >> 47) != -13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_math.c", 157, "(((uint32_t)(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn.c.upvalue[(1)-1]))->it64 >> 47)) == (~12u))") )
    __debugbreak();
  v5 = *(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64;
  if ( !*(_DWORD *)(v5 + 0x50) )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1; d }
    random_init((RandomState *)(v5 + 48), *(long double *)&_XMM1);
  }
  v7 = COERCE_DOUBLE(j_lj_math_random_step((RandomState *)(v5 + 48))) - 1.0;
  if ( (int)v4 > 0 )
  {
    v8 = j_lj_lib_checknum(L, 1);
    if ( (_DWORD)v4 == 1 )
    {
      v7 = j_lj_vm_floor_1() + 1.0;
    }
    else
    {
      j_lj_lib_checknum(L, 2);
      v7 = j_lj_vm_floor_1() + v8;
    }
  }
  result = 1i64;
  *(double *)&L->top->u64 = v7;
  ++L->top;
  return result;
}

/*
==============
lj_cf_math_randomseed
==============
*/
__int64 lj_cf_math_randomseed(lua_State *L)
{
  __int64 v2; 
  long double v3; 

  if ( (unsigned int)(*(__int64 *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) >> 47) != -13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_math.c", 209, "(((uint32_t)(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn.c.upvalue[(1)-1]))->it64 >> 47)) == (~12u))") )
    __debugbreak();
  v2 = *(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64;
  v3 = j_lj_lib_checknum(L, 1);
  random_init((RandomState *)(v2 + 48), v3);
  return 0i64;
}

/*
==============
random_init
==============
*/
void random_init(RandomState *rs, long double d)
{
  double v2; 
  unsigned __int64 v3; 
  double v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  double v10; 
  double v11; 

  v2 = d * 3.141592653589793 + 2.718281828459045;
  *(double *)&v3 = v2;
  if ( *(_QWORD *)&v2 < 2ui64 )
    v3 = *(_QWORD *)&v2 + 2i64;
  v5 = v2 * 3.141592653589793 + 2.718281828459045;
  rs->gen[0] = v3;
  v6 = *(_QWORD *)&v5;
  if ( *(_QWORD *)&v5 < 0x40ui64 )
    v6 = *(_QWORD *)&v5 + 64i64;
  v10 = v5 * 3.141592653589793 + 2.718281828459045;
  rs->gen[1] = v6;
  v7 = *(_QWORD *)&v10;
  if ( *(_QWORD *)&v10 < 0x200ui64 )
    v7 = *(_QWORD *)&v10 + 512i64;
  v11 = (v5 * 3.141592653589793 + 2.718281828459045) * 3.141592653589793 + 2.718281828459045;
  rs->gen[2] = v7;
  v8 = *(_QWORD *)&v11;
  if ( *(_QWORD *)&v11 < 0x20000ui64 )
    v8 = *(_QWORD *)&v11 + 0x20000i64;
  rs->gen[3] = v8;
  v9 = 10i64;
  rs->valid = 1;
  do
  {
    j_lj_math_random_step(rs);
    --v9;
  }
  while ( v9 );
}

