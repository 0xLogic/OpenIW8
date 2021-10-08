/*
==============
luaopen_base
==============
*/
__int64 luaopen_base(lua_State *L)
{
  unsigned __int64 gcptr64; 
  GCstr *v3; 
  TValue *v4; 
  signed __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  GCtab *v8; 
  TValue *top; 
  GCtab *v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  GCstr *v13; 
  TValue *v14; 
  signed __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  gcptr64 = L->env.gcptr64;
  v3 = j_lj_str_new(L, "_G", 2ui64);
  v4 = j_lj_tab_setstr(L, (GCtab *)gcptr64, v3);
  v5 = gcptr64 | 0xFFFA000000000000ui64;
  v6 = v5 >> 47;
  v4->u64 = v5;
  if ( (unsigned int)(v5 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v7 = v5 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v6 != *(unsigned __int8 *)(v7 + 9) || (*(_BYTE *)(v7 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  j_lua_pushlstring(L, "Lua 5.1", 7ui64);
  v8 = j_lj_tab_new(L, 0, 1u);
  top = L->top;
  v10 = v8;
  L->top = top + 1;
  top->u64 = (unsigned __int64)v8 | 0xFFFA000000000000ui64;
  v11 = (__int64)((unsigned __int64)v8 | 0xFFFA000000000000ui64) >> 47;
  if ( (unsigned int)(v11 + 4) > 0xFFFFFFF6 && (~(_DWORD)v11 != *(unsigned __int8 *)(((unsigned __int64)v8 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)(((unsigned __int64)v8 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  v10->metatable.gcptr64 = (unsigned __int64)v10;
  v12 = (unsigned __int64)j_lj_str_new(L, "kv", 2ui64);
  v13 = j_lj_str_new(L, "__mode", 6ui64);
  v14 = j_lj_tab_setstr(L, v10, v13);
  v15 = v12 | 0xFFFD800000000000ui64;
  v16 = v15 >> 47;
  v14->u64 = v15;
  if ( (unsigned int)(v15 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v17 = v15 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v16 != *(unsigned __int8 *)(v17 + 9) || (*(_BYTE *)(v17 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v10->nomm = -9;
  j_lj_lib_register(L, "_G", lj_lib_init_base, lj_lib_cf_base);
  j_lj_lib_register(L, "coroutine", lj_lib_init_coroutine, lj_lib_cf_coroutine);
  return 2i64;
}

/*
==============
lj_ffh_assert
==============
*/
void __noreturn lj_ffh_assert(lua_State *L)
{
  GCstr *v2; 

  j_lj_lib_checkany(L, 1);
  v2 = j_lj_lib_optstr(L, 2);
  if ( v2 )
    j_lj_err_callermsg(L, (const char *)&v2[1]);
  j_lj_err_caller(L, LJ_ERR_ASSERT);
}

/*
==============
lj_ffh_next
==============
*/
__int64 lj_ffh_next(lua_State *L)
{
  j_lj_lib_checktab(L, 1);
  return 0i64;
}

/*
==============
lj_ffh_pairs
==============
*/
__int64 lj_ffh_pairs(lua_State *L)
{
  j_lj_lib_checktab(L, 1);
  return 0i64;
}

/*
==============
lj_ffh_ipairs_aux
==============
*/
__int64 lj_ffh_ipairs_aux(lua_State *L)
{
  j_lj_lib_checktab(L, 1);
  j_lj_lib_checkint(L, 2);
  return 0i64;
}

/*
==============
lj_ffh_ipairs
==============
*/
__int64 lj_ffh_ipairs(lua_State *L)
{
  j_lj_lib_checktab(L, 1);
  return 0i64;
}

/*
==============
lj_ffh_setmetatable
==============
*/
__int64 lj_ffh_setmetatable(lua_State *L)
{
  unsigned __int64 v2; 
  GCtab *v3; 
  unsigned __int8 v4; 
  unsigned __int64 ptr64; 
  char v6; 
  signed __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = (unsigned __int64)j_lj_lib_checktab(L, 1);
  v3 = j_lj_lib_checktabornil(L, 2);
  if ( j_lj_meta_lookup(L, L->base, MM_metatable)->u64 != -1i64 )
    j_lj_err_caller(L, LJ_ERR_PROTMT);
  *(_QWORD *)(v2 + 32) = v3;
  if ( v3 )
  {
    if ( (v3->marked & 3) != 0 )
    {
      v4 = *(_BYTE *)(v2 + 8);
      if ( (v4 & 4) != 0 )
      {
        ptr64 = L->glref.ptr64;
        if ( (v4 & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
          __debugbreak();
        v6 = *(_BYTE *)(ptr64 + 65);
        if ( (v6 == 5 || !v6) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
          __debugbreak();
        *(_BYTE *)(v2 + 8) &= ~4u;
        *(_QWORD *)(v2 + 24) = *(_QWORD *)(ptr64 + 96);
        *(_QWORD *)(ptr64 + 96) = v2;
      }
    }
  }
  v7 = v2 | 0xFFFA000000000000ui64;
  v8 = v7 >> 47;
  L->base[-2].u64 = v7;
  if ( (unsigned int)(v7 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v9 = v7 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return 2i64;
}

/*
==============
lj_cf_getfenv
==============
*/
__int64 lj_cf_getfenv(lua_State *L)
{
  TValue *base; 
  TValue *top; 
  __int64 it64; 
  const TValue *v5; 
  __int64 v6; 
  unsigned __int64 gcptr64; 
  signed __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int size; 

  base = L->base;
  top = L->top;
  if ( base >= top || (it64 = base->u64, (unsigned int)(it64 >> 47) != -9) )
  {
    size = j_lj_lib_optint(L, 1, 1);
    v5 = j_lj_debug_frame(L, size, &size);
    if ( !v5 )
      j_lj_err_arg(L, 1, LJ_ERR_INVLVL);
    it64 = v5[-1].it64;
    top = L->top;
  }
  v6 = it64 & 0x7FFFFFFFFFFFi64;
  if ( *(_BYTE *)(v6 + 10) )
    gcptr64 = L->env.gcptr64;
  else
    gcptr64 = *(_QWORD *)(v6 + 16);
  L->top = top + 1;
  v8 = gcptr64 | 0xFFFA000000000000ui64;
  top->u64 = v8;
  v9 = v8 >> 47;
  if ( (unsigned int)(v8 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v10 = v8 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v9 != *(unsigned __int8 *)(v10 + 9) || (*(_BYTE *)(v10 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return 1i64;
}

/*
==============
lj_cf_setfenv
==============
*/
int lj_cf_setfenv(lua_State *L)
{
  GCtab *v2; 
  TValue *base; 
  GCobj *v4; 
  __int64 it64; 
  int result; 
  const TValue *v7; 
  __int64 v8; 
  TValue *top; 
  signed __int64 v10; 
  int size; 

  v2 = j_lj_lib_checktab(L, 2);
  base = L->base;
  v4 = (GCobj *)v2;
  if ( base >= L->top || (it64 = base->u64, (unsigned int)(it64 >> 47) != -9) )
  {
    result = j_lj_lib_checkint(L, 1);
    size = result;
    if ( !result )
    {
      L->env.gcptr64 = (unsigned __int64)v4;
      return result;
    }
    v7 = j_lj_debug_frame(L, result, &size);
    if ( !v7 )
      j_lj_err_arg(L, 1, LJ_ERR_INVLVL);
    it64 = v7[-1].it64;
  }
  v8 = it64 & 0x7FFFFFFFFFFFi64;
  if ( *(_BYTE *)(v8 + 10) )
    j_lj_err_caller(L, LJ_ERR_SETFENV);
  *(_QWORD *)(v8 + 16) = v4;
  if ( (v4->gch.marked & 3) != 0 && (*(_BYTE *)(v8 + 8) & 4) != 0 )
    j_lj_gc_barrierf((global_State *)L->glref.ptr64, (GCobj *)v8, v4);
  top = L->top;
  L->top = top + 1;
  v10 = v8 | 0xFFFB800000000000ui64;
  top->u64 = v10;
  if ( ~(unsigned int)(v10 >> 47) != *(unsigned __int8 *)((v10 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v10 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  return 1;
}

/*
==============
lj_ffh_rawget
==============
*/
__int64 lj_ffh_rawget(lua_State *L)
{
  j_lj_lib_checktab(L, 1);
  j_lj_lib_checkany(L, 2);
  return 0i64;
}

/*
==============
lj_cf_rawset
==============
*/
__int64 lj_cf_rawset(lua_State *L)
{
  j_lj_lib_checktab(L, 1);
  j_lj_lib_checkany(L, 2);
  L->top = j_lj_lib_checkany(L, 3) + 1;
  j_lua_rawset(L, 1);
  return 1i64;
}

/*
==============
lj_cf_rawequal
==============
*/
__int64 lj_cf_rawequal(lua_State *L)
{
  const TValue *v2; 
  const TValue *v3; 
  __int64 v4; 
  __int64 result; 

  v2 = j_lj_lib_checkany(L, 1);
  v3 = j_lj_lib_checkany(L, 2);
  v4 = j_lj_obj_equal(v2, v3) + 1;
  result = 1i64;
  L->top[-1].u64 = ~(v4 << 47);
  return result;
}

/*
==============
lj_cf_unpack
==============
*/
__int64 lj_cf_unpack(lua_State *L)
{
  GCtab *v2; 
  int v3; 
  TValue *v4; 
  int v5; 
  int v6; 
  int v8; 
  const TValue *v9; 
  TValue *top; 
  __int64 u64; 
  __int64 v12; 
  __int64 v13; 
  int v14; 

  v2 = j_lj_lib_checktab(L, 1);
  v3 = j_lj_lib_optint(L, 2, 1);
  v4 = L->base + 2;
  if ( v4 >= L->top || v4->u64 == -1i64 )
    v5 = j_lj_tab_len(v2);
  else
    v5 = j_lj_lib_checkint(L, 3);
  v6 = v5;
  if ( v3 > v5 )
    return 0i64;
  v8 = v5 - v3 + 1;
  if ( v8 <= 0 || !j_lua_checkstack(L, v8) )
    j_lj_err_caller(L, LJ_ERR_UNPACK);
  do
  {
    if ( v3 >= v2->asize )
      v9 = j_lj_tab_getinth(v2, v3);
    else
      v9 = (const TValue *)(v2->array.ptr64 + 8i64 * v3);
    top = L->top;
    if ( v9 )
    {
      L->top = top + 1;
      u64 = v9->u64;
      top->u64 = v9->u64;
      v12 = u64 >> 47;
      if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v13 = u64 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v12 != *(unsigned __int8 *)(v13 + 9) || (*(_BYTE *)(v13 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
    }
    else
    {
      top->u64 = -1i64;
      ++L->top;
    }
    v14 = v3++;
  }
  while ( v14 < v6 );
  return (unsigned int)v8;
}

/*
==============
lj_cf_select
==============
*/
__int64 lj_cf_select(lua_State *L)
{
  TValue *base; 
  __int64 v5; 
  __int64 u64; 
  int v10; 

  _RCX = L->top;
  base = L->base;
  v5 = _RCX - base;
  if ( (int)v5 >= 1 && (u64 = base->u64, (unsigned int)(u64 >> 47) == -5) && *(_BYTE *)((u64 & 0x7FFFFFFFFFFFi64) + 0x18) == 35 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, eax
      vmovsd  qword ptr [rcx-8], xmm0
    }
    return 1i64;
  }
  else
  {
    v10 = j_lj_lib_checkint(L, 1);
    if ( v10 >= 0 )
    {
      if ( v10 > (int)v5 )
        v10 = v5;
    }
    else
    {
      v10 += v5;
    }
    if ( v10 < 1 )
      j_lj_err_arg(L, 1, LJ_ERR_IDXRNG);
    return (unsigned int)(v5 - v10);
  }
}

/*
==============
lj_ffh_tonumber
==============
*/
__int64 lj_ffh_tonumber(lua_State *L)
{
  int v3; 
  TValue *v4; 
  __int64 v5; 
  TValue v6; 
  __int64 v7; 
  __int64 v8; 
  GCstr *v10; 
  char *v11; 
  char *v12; 
  char *EndPtr; 

  v3 = j_lj_lib_optint(L, 2, 10);
  if ( v3 != 10 )
  {
    v10 = j_lj_lib_checkstr(L, 1);
    v11 = (char *)&v10[1];
    if ( (unsigned int)(v3 - 2) > 0x22 )
      j_lj_err_arg(L, 2, LJ_ERR_BASERNG);
    strtoul((const char *)&v10[1], &EndPtr, v3);
    v12 = EndPtr;
    if ( v11 != EndPtr )
    {
      if ( (lj_char_bits[(unsigned __int8)*EndPtr + 1] & 2) != 0 )
      {
        do
          EndPtr = ++v12;
        while ( (lj_char_bits[(unsigned __int8)*v12 + 1] & 2) != 0 );
      }
      if ( !*v12 )
      {
        _RAX = L->base;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, r8
          vmovsd  qword ptr [rax-10h], xmm0
        }
        return 2i64;
      }
    }
LABEL_17:
    L->base[-2].u64 = -1i64;
    return 2i64;
  }
  v4 = j_lj_lib_checkany(L, 1);
  v5 = v4->it64 >> 47;
  if ( (unsigned int)v5 > 0xFFFFFFF2 && ((_DWORD)v5 != -5 || !j_lj_strscan_num((GCstr *)(v4->u64 & 0x7FFFFFFFFFFFi64), v4)) )
    goto LABEL_17;
  v6.u64 = v4->u64;
  v7 = v4->it64 >> 47;
  L->base[-2].u64 = v4->u64;
  if ( (unsigned int)(v7 + 4) > 0xFFFFFFF6 )
  {
    v8 = v6.u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return 2i64;
}

/*
==============
lj_ffh_tostring
==============
*/
__int64 lj_ffh_tostring(lua_State *L)
{
  TValue *v2; 
  signed __int64 u64; 
  __int64 v4; 
  __int64 v5; 
  signed __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = j_lj_lib_checkany(L, 1);
  L->top = v2 + 1;
  u64 = j_lj_meta_lookup(L, v2, MM_tostring)->u64;
  if ( u64 == -1 )
  {
    if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
      j_lj_gc_step(L);
    v7 = (unsigned __int64)j_lj_strfmt_obj(L, L->base) | 0xFFFD800000000000ui64;
    v8 = v7 >> 47;
    L->base[-2].u64 = v7;
    if ( (unsigned int)(v7 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v9 = v7 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    return 2i64;
  }
  else
  {
    v4 = u64 >> 47;
    L->base[-2].u64 = u64;
    if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v5 = u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v4 != *(unsigned __int8 *)(v5 + 9) || (*(_BYTE *)(v5 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    return 0xFFFFFFFFi64;
  }
}

/*
==============
lj_cf_error
==============
*/
void __noreturn lj_cf_error(lua_State *L)
{
  int v2; 

  v2 = j_lj_lib_optint(L, 2, 1);
  j_lua_settop(L, 1);
  if ( j_lua_isstring(L, 1) )
  {
    if ( v2 > 0 )
    {
      j_luaL_where(L, v2);
      j_lua_pushvalue(L, 1);
      j_lua_concat(L, 2);
    }
  }
  j_lua_error(L);
}

/*
==============
lj_ffh_pcall
==============
*/
__int64 lj_ffh_pcall(lua_State *L)
{
  j_lj_lib_checkany(L, 1);
  j_lj_lib_checkfunc(L, 2);
  return 0i64;
}

/*
==============
lj_cf_loadfile
==============
*/
int lj_cf_loadfile(lua_State *L)
{
  GCstr *v2; 
  GCstr *v3; 
  const char *v4; 
  const char *v5; 
  int v6; 

  v2 = j_lj_lib_optstr(L, 1);
  v3 = j_lj_lib_optstr(L, 2);
  j_lua_settop(L, 3);
  v4 = NULL;
  v5 = (const char *)&v3[1];
  if ( !v3 )
    v5 = NULL;
  if ( v2 )
    v4 = (const char *)&v2[1];
  v6 = j_luaL_loadfilex(L, v4, v5);
  return load_aux(L, v6, 3);
}

/*
==============
reader_func
==============
*/
const char *reader_func(lua_State *L, void *ud, unsigned __int64 *size)
{
  TValue *top; 
  signed __int64 it64; 
  __int64 v7; 
  __int64 v8; 
  signed __int64 v9; 
  __int64 v11; 
  __int64 v12; 

  j_luaL_checkstack(L, 2, "too many nested functions");
  top = L->top;
  L->top = top + 1;
  it64 = L->base->it64;
  top->u64 = it64;
  v7 = it64 >> 47;
  if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v8 = it64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  j_lua_call(L, 0, 1);
  --L->top;
  v9 = L->top->it64;
  if ( v9 == -1 )
  {
    *size = 0i64;
    return 0i64;
  }
  else
  {
    if ( (unsigned int)(v9 >> 47) != -5 && (unsigned int)(v9 >> 47) > 0xFFFFFFF2 )
      j_lj_err_caller(L, LJ_ERR_RDRSTR);
    v11 = v9 >> 47;
    L->base[4].u64 = v9;
    if ( (unsigned int)(v9 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v12 = v9 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v11 != *(unsigned __int8 *)(v12 + 9) || (*(_BYTE *)(v12 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    return j_lua_tolstring(L, 5, size);
  }
}

/*
==============
lj_cf_load
==============
*/
int lj_cf_load(lua_State *L)
{
  GCstr *v2; 
  GCstr *v3; 
  TValue *base; 
  GCstr *v5; 
  __int64 v6; 
  GCstr *v7; 
  const char *mode; 
  GCstr *v9; 
  int v10; 
  const char *v11; 
  const char *v12; 

  v2 = j_lj_lib_optstr(L, 2);
  v3 = j_lj_lib_optstr(L, 3);
  base = L->base;
  v5 = v3;
  if ( base < L->top && ((v6 = base->it64 >> 47, (_DWORD)v6 == -5) || (unsigned int)v6 <= 0xFFFFFFF2) )
  {
    v7 = j_lj_lib_checkstr(L, 1);
    j_lua_settop(L, 4);
    if ( v5 )
      mode = (const char *)&v5[1];
    else
      mode = NULL;
    v9 = v7;
    if ( v2 )
      v9 = v2;
    v10 = j_luaL_loadbufferx(L, (const char *)&v7[1], v7->len, (const char *)&v9[1], mode);
  }
  else
  {
    j_lj_lib_checkfunc(L, 1);
    j_lua_settop(L, 5);
    if ( v5 )
      v11 = (const char *)&v5[1];
    else
      v11 = NULL;
    v12 = (const char *)&v2[1];
    if ( !v2 )
      v12 = "=(load)";
    v10 = j_lua_loadx(L, reader_func, NULL, v12, v11);
  }
  return load_aux(L, v10, 4);
}

/*
==============
lj_cf_loadstring
==============
*/
int lj_cf_loadstring(lua_State *L)
{
  GCstr *v2; 
  GCstr *v3; 
  TValue *base; 
  GCstr *v5; 
  __int64 v6; 
  GCstr *v7; 
  const char *mode; 
  GCstr *v9; 
  int v10; 
  const char *v11; 
  const char *v12; 

  v2 = j_lj_lib_optstr(L, 2);
  v3 = j_lj_lib_optstr(L, 3);
  base = L->base;
  v5 = v3;
  if ( base < L->top && ((v6 = base->it64 >> 47, (_DWORD)v6 == -5) || (unsigned int)v6 <= 0xFFFFFFF2) )
  {
    v7 = j_lj_lib_checkstr(L, 1);
    j_lua_settop(L, 4);
    if ( v5 )
      mode = (const char *)&v5[1];
    else
      mode = NULL;
    v9 = v7;
    if ( v2 )
      v9 = v2;
    v10 = j_luaL_loadbufferx(L, (const char *)&v7[1], v7->len, (const char *)&v9[1], mode);
  }
  else
  {
    j_lj_lib_checkfunc(L, 1);
    j_lua_settop(L, 5);
    if ( v5 )
      v11 = (const char *)&v5[1];
    else
      v11 = NULL;
    v12 = (const char *)&v2[1];
    if ( !v2 )
      v12 = "=(load)";
    v10 = j_lua_loadx(L, reader_func, NULL, v12, v11);
  }
  return load_aux(L, v10, 4);
}

/*
==============
lj_cf_dofile
==============
*/
__int64 lj_cf_dofile(lua_State *L)
{
  GCstr *v2; 
  const char *v3; 

  v2 = j_lj_lib_optstr(L, 1);
  L->top->u64 = -1i64;
  L->top = L->base + 1;
  if ( v2 )
    v3 = (const char *)&v2[1];
  else
    v3 = NULL;
  if ( j_luaL_loadfile(L, v3) )
    j_lua_error(L);
  j_lua_call(L, 0, -1);
  return (unsigned int)(L->top - L->base) - 1;
}

/*
==============
lj_cf_gcinfo
==============
*/
__int64 lj_cf_gcinfo(lua_State *L)
{
  __int64 result; 

  _RDX = L->top;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  L->top = _RDX + 1;
  result = 1i64;
  __asm
  {
    vcvtsi2sd xmm0, xmm0, ecx
    vmovsd  qword ptr [rdx], xmm0
  }
  return result;
}

/*
==============
lj_cf_collectgarbage
==============
*/
__int64 lj_cf_collectgarbage(lua_State *L)
{
  int v3; 
  int v4; 
  int v9; 

  v3 = j_lj_lib_checkopt(L, 1, 2, &lst);
  v4 = j_lj_lib_optint(L, 2, 0);
  if ( v3 == 3 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rdx
    }
    if ( *(__int64 *)(L->glref.ptr64 + 48) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    _RCX = L->top;
    __asm
    {
      vmulsd  xmm0, xmm0, cs:__real@3f50000000000000
      vmovsd  qword ptr [rcx], xmm0
    }
  }
  else
  {
    v9 = j_lua_gc(L, v3, v4);
    if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, eax
      }
      _RAX = L->top;
      __asm { vmovsd  qword ptr [rax], xmm0 }
    }
    else
    {
      L->top->u64 = ~((__int64)(v9 + 1) << 47);
    }
  }
  ++L->top;
  return 1i64;
}

/*
==============
lj_cf_newproxy
==============
*/
__int64 lj_cf_newproxy(lua_State *L)
{
  int v2; 

  j_lua_settop(L, 1);
  j_lua_newuserdata(L, 0i64);
  if ( j_lua_toboolean(L, 1) )
  {
    if ( j_lua_type(L, 1) == 1 )
    {
      j_lua_createtable(L, 0, 0);
      j_lua_pushvalue(L, -1);
      j_lua_pushboolean(L, 1);
      j_lua_rawset(L, -10003);
    }
    else
    {
      if ( !j_lua_getmetatable(L, 1) || (j_lua_rawget(L, -10003), v2 = j_lua_toboolean(L, -1), j_lua_settop(L, -2), !v2) )
        j_lj_err_arg(L, 1, LJ_ERR_NOPROXY);
      j_lua_getmetatable(L, 1);
    }
    j_lua_setmetatable(L, 2);
  }
  return 1i64;
}

/*
==============
lj_cf_print
==============
*/
__int64 lj_cf_print(lua_State *L)
{
  TValue *base; 
  __int64 v3; 
  const TValue *v4; 
  TValue *v5; 
  TValue *v6; 
  __int64 u64; 
  __int64 v8; 
  __int64 v9; 
  TValue *top; 
  signed __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  TValue *v14; 
  TValue *v15; 
  const char *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  TValue *v20; 
  __int64 it64; 
  __int64 v22; 
  __int64 v23; 
  FILE *v24; 
  unsigned int lenp; 
  unsigned __int64 len; 

  base = L->base;
  v3 = L->top - base;
  if ( (unsigned int)(*(__int64 *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) >> 47) != -5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_base.c", 487, "(((uint32_t)(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn.c.upvalue[(1)-1]))->it64 >> 47)) == (~4u))") )
    __debugbreak();
  v4 = j_lj_tab_getstr((GCtab *)L->env.gcptr64, (GCstr *)(*(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64));
  v5 = (TValue *)v4;
  if ( !v4 || v4->u64 == -1i64 )
  {
    if ( (unsigned int)(*(__int64 *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) >> 47) != -5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_base.c", 492, "(((uint32_t)(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn.c.upvalue[(1)-1]))->it64 >> 47)) == (~4u))") )
      __debugbreak();
    top = L->top;
    L->top = top + 1;
    v11 = *(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64 | 0xFFFD800000000000ui64;
    top->u64 = v11;
    if ( (~(unsigned int)(v11 >> 47) != *(unsigned __int8 *)((v11 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v11 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
    j_lua_gettable(L, -10002);
    v5 = L->top - 1;
  }
  else
  {
    v6 = L->top;
    L->top = v6 + 1;
    u64 = v4->u64;
    v6->u64 = v4->u64;
    v8 = u64 >> 47;
    if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v9 = u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
  }
  v12 = 0i64;
  if ( (unsigned int)(v5->it64 >> 47) != -9 || (v13 = 1i64, *(_BYTE *)((v5->u64 & 0x7FFFFFFFFFFFi64) + 0xA) != 18) )
    v13 = 0i64;
  if ( v3 > 0 )
  {
    do
    {
      v14 = L->base;
      v15 = &v14[v12];
      if ( v13 && (v16 = j_lj_strfmt_wstrnum(L, &v14[v12], &lenp)) != NULL )
      {
        len = lenp;
      }
      else
      {
        v17 = v15->u64;
        v18 = v15->it64 >> 47;
        L->top[1].u64 = v15->u64;
        if ( (unsigned int)(v18 + 4) > 0xFFFFFFF6 )
        {
          v19 = v17 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v18 != *(unsigned __int8 *)(v19 + 9) || (*(_BYTE *)(v19 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
        v20 = L->top;
        it64 = v20[-1].it64;
        v20->u64 = it64;
        v22 = it64 >> 47;
        if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
        {
          v23 = it64 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v22 != *(unsigned __int8 *)(v23 + 9) || (*(_BYTE *)(v23 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
        L->top += 2;
        j_lua_call(L, 1, 1);
        v16 = j_lua_tolstring(L, -1, &len);
        if ( !v16 )
          j_lj_err_caller(L, LJ_ERR_PRTOSTR);
        --L->top;
      }
      if ( v12 )
        putchar(9);
      v24 = __acrt_iob_func(1u);
      fwrite(v16, 1ui64, len, v24);
      ++v12;
    }
    while ( v12 < v3 );
  }
  putchar(10);
  return 0i64;
}

/*
==============
lj_cf_coroutine_status
==============
*/
__int64 lj_cf_coroutine_status(lua_State *L)
{
  TValue *base; 
  __int64 u64; 
  lua_State *v4; 
  const char *v5; 
  unsigned __int8 status; 
  unsigned __int64 v7; 
  const char *v8; 

  base = L->base;
  if ( L->top <= base || (u64 = base->u64, (unsigned int)(u64 >> 47) != -7) )
    j_lj_err_arg(L, 1, LJ_ERR_NOCORO);
  v4 = (lua_State *)(u64 & 0x7FFFFFFFFFFFi64);
  if ( v4 == L )
  {
    v5 = "running";
  }
  else
  {
    status = v4->status;
    if ( status == 1 )
    {
      v5 = "suspended";
    }
    else if ( status )
    {
      v5 = "dead";
    }
    else
    {
      v7 = (unsigned __int64)v4->base;
      if ( v7 <= v4->stack.ptr64 + 16 )
      {
        v8 = "dead";
        if ( v4->top != (TValue *)v7 )
          v8 = "suspended";
        v5 = v8;
      }
      else
      {
        v5 = "normal";
      }
    }
  }
  j_lua_pushstring(L, v5);
  return 1i64;
}

/*
==============
lj_cf_coroutine_running
==============
*/
__int64 lj_cf_coroutine_running(lua_State *L)
{
  if ( j_lua_pushthread(L) )
  {
    L->top->u64 = -1i64;
    ++L->top;
  }
  return 1i64;
}

/*
==============
lj_cf_coroutine_isyieldable
==============
*/
__int64 lj_cf_coroutine_isyieldable(lua_State *L)
{
  __int64 result; 

  L->top->u64 = ~(((unsigned __int64)((__int64)L->cframe & 1) << 47) + 0x800000000000i64);
  result = 1i64;
  ++L->top;
  return result;
}

/*
==============
lj_cf_coroutine_create
==============
*/
__int64 lj_cf_coroutine_create(lua_State *L)
{
  TValue *base; 
  lua_State *v3; 
  TValue *top; 
  signed __int64 v5; 

  base = L->base;
  if ( base >= L->top || (unsigned int)(base->it64 >> 47) != -9 )
    j_lj_err_argt(L, 1, 6);
  v3 = j_lua_newthread(L);
  if ( (unsigned int)((signed __int64)L->base->u64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_base.c", 573, "(((uint32_t)((L->base)->it64 >> 47)) == (~8u))") )
    __debugbreak();
  top = v3->top;
  v3->top = top + 1;
  v5 = L->base->u64 & 0x7FFFFFFFFFFFi64 | 0xFFFB800000000000ui64;
  top->u64 = v5;
  if ( ~(unsigned int)(v5 >> 47) != *(unsigned __int8 *)((v5 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v5 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  return 1i64;
}

/*
==============
lj_ffh_coroutine_yield
==============
*/
void __noreturn lj_ffh_coroutine_yield(lua_State *L)
{
  j_lj_err_caller(L, LJ_ERR_CYIELD);
}

/*
==============
lj_ffh_coroutine_resume
==============
*/
int lj_ffh_coroutine_resume(lua_State *L)
{
  TValue *base; 
  __int64 u64; 

  base = L->base;
  if ( L->top <= base || (u64 = base->u64, (unsigned int)(u64 >> 47) != -7) )
    j_lj_err_arg(L, 1, LJ_ERR_NOCORO);
  return ffh_resume(L, (lua_State *)(u64 & 0x7FFFFFFFFFFFi64), 0);
}

/*
==============
lj_ffh_coroutine_wrap_aux
==============
*/
__int64 lj_ffh_coroutine_wrap_aux(lua_State *L)
{
  TValue *base; 
  __int64 v3; 
  unsigned __int8 v4; 
  ErrMsg v6; 

  if ( (unsigned int)(*(__int64 *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) >> 47) != -7 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_base.c", 606, "(((uint32_t)(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn.c.upvalue[(1)-1]))->it64 >> 47)) == (~6u))") )
    __debugbreak();
  base = L->base;
  v3 = *(_QWORD *)((*(_QWORD *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64) + 0x50);
  if ( v3 || (v4 = *(_BYTE *)((*(_QWORD *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64) + 0xB), v4 > 1u) || !v4 && *(_QWORD *)((*(_QWORD *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64) + 0x28) == *(_QWORD *)((*(_QWORD *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64) + 0x20) )
  {
    v6 = LJ_ERR_CODEAD;
    if ( v3 )
      v6 = LJ_ERR_CORUN;
    j_lj_err_caller(L, v6);
  }
  j_lj_state_growstack((lua_State *)(*(_QWORD *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) & 0x7FFFFFFFFFFFi64), L->top - base);
  return 0i64;
}

/*
==============
lj_ffh_coroutine_wrap_err
==============
*/
void __noreturn lj_ffh_coroutine_wrap_err(lua_State *L, lua_State *co)
{
  TValue *v3; 
  __int64 u64; 
  __int64 v5; 
  __int64 v6; 

  v3 = --co->top;
  u64 = v3->u64;
  L->top->u64 = v3->u64;
  v5 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v6 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v5 != *(unsigned __int8 *)(v6 + 9) || (*(_BYTE *)(v6 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  ++L->top;
  if ( (unsigned int)(L->top[-1].it64 >> 47) == -5 )
  {
    my_lua_assert_2(1, "c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_base.c", 621, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~4u))", "(((uint32_t)((L->top-1)->it64 >> 47)) == (~4u))");
    j_lj_err_callermsg(L, (const char *)((L->top[-1].u64 & 0x7FFFFFFFFFFFi64) + 24));
  }
  j_lj_err_run(L);
  JUMPOUT(0x1438201DAi64);
}

/*
==============
lj_cf_coroutine_wrap
==============
*/
__int64 lj_cf_coroutine_wrap(lua_State *L)
{
  TValue *base; 
  lua_State *v3; 
  TValue *top; 
  signed __int64 v5; 

  base = L->base;
  if ( base >= L->top || (unsigned int)(base->it64 >> 47) != -9 )
    j_lj_err_argt(L, 1, 6);
  v3 = j_lua_newthread(L);
  if ( (unsigned int)((signed __int64)L->base->u64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_base.c", 573, "(((uint32_t)((L->base)->it64 >> 47)) == (~8u))") )
    __debugbreak();
  top = v3->top;
  v3->top = top + 1;
  v5 = L->base->u64 & 0x7FFFFFFFFFFFi64 | 0xFFFB800000000000ui64;
  top->u64 = v5;
  if ( ~(unsigned int)(v5 >> 47) != *(unsigned __int8 *)((v5 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v5 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  j_lj_lib_pushcc(L, (int (__fastcall *)(lua_State *))lj_ffh_coroutine_wrap_aux, 36, 1)->c.pc.ptr64 = L->glref.ptr64 + 2676;
  return 1i64;
}

/*
==============
ffh_resume
==============
*/
__int64 ffh_resume(lua_State *L, lua_State *co, int wrap)
{
  void *cframe; 
  unsigned __int8 status; 
  ErrMsg v7; 
  signed __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  cframe = co->cframe;
  if ( cframe || (status = co->status, status > 1u) || !status && co->top == co->base )
  {
    v7 = LJ_ERR_CODEAD;
    if ( cframe )
      v7 = LJ_ERR_CORUN;
    if ( wrap )
      j_lj_err_caller(L, v7);
    L->base[-2].u64 = 0xFFFF7FFFFFFFFFFFui64;
    v8 = (unsigned __int64)j_lj_err_str(L, v7) | 0xFFFD800000000000ui64;
    v9 = v8 >> 47;
    L->base[-1].u64 = v8;
    if ( (unsigned int)(v8 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v10 = v8 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v9 != *(unsigned __int8 *)(v10 + 9) || (*(_BYTE *)(v10 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    return 3i64;
  }
  else
  {
    j_lj_state_growstack(co, L->top - L->base);
    return 0i64;
  }
}

/*
==============
load_aux
==============
*/
__int64 load_aux(lua_State *L, int status, int envarg)
{
  __int64 v4; 
  GCobj *v5; 
  GCobj *v6; 

  if ( status )
  {
    L->top[-2].u64 = -1i64;
    return 2i64;
  }
  else
  {
    v4 = envarg;
    if ( (unsigned int)(L->base[v4 - 1].it64 >> 47) == -12 )
    {
      if ( (unsigned int)(L->top[-1].it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_base.c", 351, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~8u))") )
        __debugbreak();
      v5 = (GCobj *)(L->top[-1].u64 & 0x7FFFFFFFFFFFi64);
      if ( (unsigned int)(L->base[v4 - 1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_base.c", 352, "(((uint32_t)((L->base+envarg-1)->it64 >> 47)) == (~11u))") )
        __debugbreak();
      v6 = (GCobj *)(L->base[v4 - 1].u64 & 0x7FFFFFFFFFFFi64);
      v5->gch.env.gcptr64 = (unsigned __int64)v6;
      if ( (v6->gch.marked & 3) != 0 && (v5->gch.marked & 4) != 0 )
        j_lj_gc_barrierf((global_State *)L->glref.ptr64, v5, v6);
    }
    return 1i64;
  }
}

