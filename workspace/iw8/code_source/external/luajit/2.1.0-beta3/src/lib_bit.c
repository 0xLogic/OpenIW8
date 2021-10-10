/*
==============
luaopen_bit
==============
*/
__int64 luaopen_bit(lua_State *L)
{
  j_lj_lib_register(L, "bit", lj_lib_init_bit, lj_lib_cf_bit);
  return 1i64;
}

/*
==============
lj_ffh_bit_tobit
==============
*/
__int64 lj_ffh_bit_tobit(lua_State *L)
{
  j_lj_lib_checknum(L, 1);
  return 0i64;
}

/*
==============
lj_ffh_bit_bnot
==============
*/
__int64 lj_ffh_bit_bnot(lua_State *L)
{
  j_lj_lib_checknum(L, 1);
  return 0i64;
}

/*
==============
lj_ffh_bit_bswap
==============
*/
__int64 lj_ffh_bit_bswap(lua_State *L)
{
  j_lj_lib_checknum(L, 1);
  return 0i64;
}

/*
==============
lj_ffh_bit_lshift
==============
*/
__int64 lj_ffh_bit_lshift(lua_State *L)
{
  j_lj_lib_checknum(L, 1);
  bit_checkbit(L, 2);
  return 0i64;
}

/*
==============
lj_ffh_bit_band
==============
*/
__int64 lj_ffh_bit_band(lua_State *L)
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
lj_cf_bit_tohex
==============
*/
__int64 lj_cf_bit_tohex(lua_State *L)
{
  unsigned int v2; 
  int v3; 
  unsigned __int64 ptr64; 
  int v5; 
  int v6; 
  SBuf *v7; 
  signed __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  v2 = bit_checkbit(L, 1);
  if ( &L->base[1] < L->top )
    v3 = bit_checkbit(L, 2);
  else
    v3 = 8;
  ptr64 = L->glref.ptr64;
  *(_QWORD *)(ptr64 + 152) = *(_QWORD *)(ptr64 + 168);
  *(_QWORD *)(ptr64 + 176) = L;
  v5 = abs32(v3);
  v6 = ((v5 + 1) << 24) | (((v3 >> 31) & 0x2000) + 20);
  if ( v5 < 8 )
    v2 &= (1 << (4 * v5)) - 1;
  v7 = j_lj_strfmt_putfxint((SBuf *)(ptr64 + 152), v6, v2);
  v8 = (unsigned __int64)j_lj_str_new(L, (const char *)v7->b.ptr64, (unsigned int)(LODWORD(v7->p.ptr64) - LODWORD(v7->b.ptr64))) | 0xFFFD800000000000ui64;
  v9 = v8 >> 47;
  L->top[-1].u64 = v8;
  if ( (unsigned int)(v8 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v10 = v8 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v9 != *(unsigned __int8 *)(v10 + 9) || (*(_BYTE *)(v10 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  return 1i64;
}

/*
==============
bit_checkbit
==============
*/
__int64 bit_checkbit(lua_State *L, int narg)
{
  TValue *v4; 
  __int64 v5; 
  long double v7; 

  v4 = &L->base[narg - 1];
  if ( v4 >= L->top || (v5 = v4->it64 >> 47, (unsigned int)v5 > 0xFFFFFFF2) && ((_DWORD)v5 != -5 || !j_lj_strscan_num((GCstr *)(v4->u64 & 0x7FFFFFFFFFFFi64), v4)) )
    j_lj_err_argt(L, narg, 3);
  if ( (unsigned int)(v4->it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_bit.c", 48, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
    __debugbreak();
  v7 = v4->n + 6.755399441055744e15;
  return LODWORD(v7);
}

