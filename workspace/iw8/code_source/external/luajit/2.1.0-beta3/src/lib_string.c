/*
==============
luaopen_string
==============
*/
__int64 luaopen_string(lua_State *L)
{
  GCtab *v2; 
  unsigned __int64 ptr64; 
  GCtab *v4; 
  __int64 v5; 
  __int64 result; 

  j_lj_lib_register(L, "string", lj_lib_init_string, lj_lib_cf_string);
  v2 = j_lj_tab_new(L, 0, 1u);
  ptr64 = L->glref.ptr64;
  v4 = v2;
  *(_QWORD *)(ptr64 + 576) = v2;
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_string.c", 744, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v5 = L->top[-1].u64 & 0x7FFFFFFFFFFFi64 | 0xFFFA000000000000ui64;
  j_lj_tab_setstr(L, v4, *(GCstr **)(ptr64 + 384))->u64 = v5;
  if ( ~(unsigned int)(v5 >> 47) != *(unsigned __int8 *)((v5 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v5 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  result = 1i64;
  v4->nomm = -2;
  return result;
}

/*
==============
lj_ffh_string_byte
==============
*/

__int64 __fastcall lj_ffh_string_byte(lua_State *L, double _XMM1_8)
{
  signed int len; 
  int v5; 
  int v6; 
  bool v7; 
  bool v8; 
  signed int v10; 

  len = j_lj_lib_checkstr(L, 1)->len;
  v5 = j_lj_lib_optint(L, 2, 1);
  v6 = j_lj_lib_optint(L, 3, v5);
  if ( v6 < 0 )
    v6 += len + 1;
  v7 = v5 == 0;
  v8 = v5 < 0;
  if ( v5 < 0 )
  {
    v5 += len + 1;
    v7 = v5 == 0;
    v8 = v5 < 0;
  }
  if ( v8 || v7 )
    v5 = 1;
  if ( v6 <= len )
    len = v6;
  if ( v5 > len )
    return 1i64;
  v10 = len - (v5 - 1);
  if ( (unsigned int)v10 > 0x1F40 )
    j_lj_err_caller(L, LJ_ERR_STRSLC);
  if ( (signed __int64)(L->maxstack.ptr64 - (unsigned __int64)L->top) <= 8i64 * (unsigned int)v10 )
    j_lj_state_growstack(L, v10);
  _RCX = 0i64;
  if ( v10 >= 4i64 )
  {
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, eax
      }
      _RAX = L->base;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovsd  qword ptr [rax+rcx*8-10h], xmm0
        vcvtsi2sd xmm1, xmm1, eax
      }
      _RAX = L->base;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovsd  qword ptr [rax+rcx*8-8], xmm1
        vcvtsi2sd xmm0, xmm0, eax
      }
      _RAX = L->base;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovsd  qword ptr [rax+rcx*8], xmm0
        vcvtsi2sd xmm1, xmm1, eax
      }
      _RAX = L->base;
      __asm { vmovsd  qword ptr [rax+rcx*8+8], xmm1 }
      _RCX += 4i64;
    }
    while ( _RCX < v10 - 3i64 );
  }
  if ( _RCX < v10 )
  {
    _RDX = 8 * _RCX - 16;
    do
    {
      _RDX += 8i64;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, eax
      }
      _RAX = L->base;
      ++_RCX;
      __asm { vmovsd  qword ptr [rdx+rax-8], xmm0 }
    }
    while ( _RCX < v10 );
  }
  return (unsigned int)(v10 + 1);
}

/*
==============
lj_ffh_string_char
==============
*/
__int64 lj_ffh_string_char(lua_State *L)
{
  int v2; 
  signed __int64 v3; 
  const char *v4; 
  __int64 i; 
  int v6; 
  signed __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = 1;
  v3 = (int)(L->top - L->base);
  v4 = j_lj_buf_tmp(L, L->top - L->base);
  if ( v3 >= 1 )
  {
    for ( i = 1i64; i <= v3; ++i )
    {
      v6 = j_lj_lib_checkint(L, v2);
      if ( v6 != (unsigned __int8)v6 )
        j_lj_err_arg(L, v2, LJ_ERR_BADVAL);
      v4[i - 1] = v6;
      ++v2;
    }
  }
  v7 = (unsigned __int64)j_lj_str_new(L, v4, v3) | 0xFFFD800000000000ui64;
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
lj_ffh_string_sub
==============
*/
__int64 lj_ffh_string_sub(lua_State *L)
{
  j_lj_lib_checkstr(L, 1);
  j_lj_lib_checkint(L, 2);
  j_lj_lib_optint(L, 3, -1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, eax
  }
  _RAX = L->base;
  __asm { vmovsd  qword ptr [rax+10h], xmm0 }
  return 0i64;
}

/*
==============
lj_cf_string_rep
==============
*/
__int64 lj_cf_string_rep(lua_State *L)
{
  GCstr *v2; 
  int v3; 
  GCstr *v4; 
  unsigned __int64 ptr64; 
  GCstr *v6; 
  SBuf *v7; 
  signed __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  v2 = j_lj_lib_checkstr(L, 1);
  v3 = j_lj_lib_checkint(L, 2);
  v4 = j_lj_lib_optstr(L, 3);
  ptr64 = L->glref.ptr64;
  *(_QWORD *)(ptr64 + 152) = *(_QWORD *)(ptr64 + 168);
  *(_QWORD *)(ptr64 + 176) = L;
  if ( v4 && v3 > 1 )
  {
    v6 = j_lj_buf_cat2str(L, v4, v2);
    *(_QWORD *)(ptr64 + 152) = *(_QWORD *)(ptr64 + 168);
    j_lj_buf_putstr((SBuf *)(ptr64 + 152), v2);
    v2 = v6;
    --v3;
  }
  v7 = j_lj_buf_putstr_rep((SBuf *)(ptr64 + 152), v2, v3);
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
lj_ffh_string_reverse
==============
*/
__int64 lj_ffh_string_reverse(lua_State *L)
{
  j_lj_lib_checkstr(L, 1);
  return 0i64;
}

/*
==============
writer_buf
==============
*/
__int64 writer_buf(lua_State *L, const void *p, unsigned __int64 size, void *sb)
{
  j_lj_buf_putmem((SBuf *)sb, p, size);
  return 0i64;
}

/*
==============
lj_cf_string_dump
==============
*/
__int64 lj_cf_string_dump(lua_State *L)
{
  GCfunc *v2; 
  TValue *v3; 
  int strip; 
  _QWORD *ptr64; 
  signed __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v2 = j_lj_lib_checkfunc(L, 1);
  v3 = L->base + 1;
  strip = v3 < L->top && (unsigned int)(v3->it64 >> 47) < 0xFFFFFFFE;
  ptr64 = (_QWORD *)L->glref.ptr64;
  ptr64[19] = ptr64[21];
  ptr64[22] = L;
  L->top = L->base + 1;
  if ( v2->c.ffid || j_lj_bcwrite(L, (GCproto *)(v2->c.pc.ptr64 - 104), (int (__fastcall *)(lua_State *, const void *, unsigned __int64, void *))writer_buf, ptr64 + 19, strip) )
    j_lj_err_caller(L, LJ_ERR_STRDUMP);
  v6 = (unsigned __int64)j_lj_str_new(L, (const char *)ptr64[21], (unsigned int)(*((_DWORD *)ptr64 + 38) - *((_DWORD *)ptr64 + 42))) | 0xFFFD800000000000ui64;
  v7 = v6 >> 47;
  L->top[-1].u64 = v6;
  if ( (unsigned int)(v6 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v8 = v6 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
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
lj_cf_string_find
==============
*/
int lj_cf_string_find(lua_State *L)
{
  return str_find_aux(L, 1);
}

/*
==============
lj_cf_string_match
==============
*/
int lj_cf_string_match(lua_State *L)
{
  return str_find_aux(L, 0);
}

/*
==============
lj_cf_string_gmatch_aux
==============
*/
int lj_cf_string_gmatch_aux(lua_State *L)
{
  __int64 v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  const char *v7; 
  const char *v8; 
  int v10; 
  MatchState ms; 

  if ( (unsigned int)(*(__int64 *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x38) >> 47) != -5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_string.c", 515, "(((uint32_t)(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn.c.upvalue[(2)-1]))->it64 >> 47)) == (~4u))") )
    __debugbreak();
  v2 = *(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x38) & 0x7FFFFFFFFFFFi64;
  if ( (unsigned int)(*(__int64 *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x30) >> 47) != -5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_string.c", 516, "(((uint32_t)(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn.c.upvalue[(1)-1]))->it64 >> 47)) == (~4u))") )
    __debugbreak();
  v3 = L->base[-2].u64 & 0x7FFFFFFFFFFFi64;
  v4 = *(_QWORD *)(v3 + 0x30) & 0x7FFFFFFFFFFFi64;
  v5 = *(unsigned int *)(v3 + 0x40);
  ms.L = L;
  v6 = v4 + 24;
  ms.src_init = (const char *)(v4 + 24);
  v7 = (const char *)(v4 + 24 + v5);
  ms.src_end = (const char *)(v4 + 24 + *(unsigned int *)(v4 + 16));
  if ( v7 > ms.src_end )
    return 0;
  while ( 1 )
  {
    *(_QWORD *)&ms.level = 0i64;
    v8 = match(&ms, v7, (const char *)(v2 + 24));
    if ( v8 )
      break;
    if ( ++v7 > ms.src_end )
      return 0;
  }
  v10 = (_DWORD)v8 - v6;
  if ( v8 == v7 )
    ++v10;
  *(_DWORD *)(v3 + 64) = v10;
  return push_captures(&ms, v7, v8);
}

/*
==============
lj_cf_string_gmatch
==============
*/
__int64 lj_cf_string_gmatch(lua_State *L)
{
  TValue *v2; 

  j_lj_lib_checkstr(L, 1);
  j_lj_lib_checkstr(L, 2);
  v2 = L->base + 3;
  L->top = v2;
  v2[-1].u64 = 0i64;
  j_lj_lib_pushcc(L, lj_cf_string_gmatch_aux, 86, 3);
  return 1i64;
}

/*
==============
lj_cf_string_gsub
==============
*/
__int64 lj_cf_string_gsub(lua_State *L)
{
  const char *v2; 
  const char *v3; 
  int v4; 
  int v5; 
  char v6; 
  int v7; 
  int v8; 
  const char *src_end; 
  const char *v10; 
  const char *v11; 
  char *p; 
  unsigned __int64 len; 
  luaL_Buffer b; 
  char v16; 
  MatchState ms; 

  v2 = j_luaL_checklstring(L, 1, &len);
  v3 = j_luaL_checklstring(L, 2, NULL);
  v4 = j_lua_type(L, 3);
  v5 = j_luaL_optinteger(L, 4, (int)len + 1);
  v6 = *v3;
  v7 = v5;
  if ( *v3 == 94 )
    ++v3;
  v8 = 0;
  if ( (unsigned int)(v4 - 3) > 3 )
    j_lj_err_arg(L, 3, LJ_ERR_NOSFT);
  j_luaL_buffinit(L, &b);
  src_end = &v2[len];
  ms.L = L;
  ms.src_init = v2;
  ms.src_end = &v2[len];
  if ( v7 > 0 )
  {
    do
    {
      *(_QWORD *)&ms.level = 0i64;
      v10 = match(&ms, v2, v3);
      v11 = v10;
      if ( v10 && (++v8, add_value(&ms, &b, v2, v10), v11 > v2) )
      {
        v2 = v11;
      }
      else
      {
        src_end = ms.src_end;
        if ( v2 >= ms.src_end )
          goto LABEL_15;
        p = b.p;
        if ( b.p >= &v16 )
        {
          j_luaL_prepbuffer(&b);
          p = b.p;
        }
        *p = *v2;
        ++b.p;
        ++v2;
      }
    }
    while ( v6 != 94 && v8 < v7 );
    src_end = ms.src_end;
  }
LABEL_15:
  j_luaL_addlstring(&b, v2, src_end - v2);
  j_luaL_pushresult(&b);
  j_lua_pushinteger(L, v8);
  return 2i64;
}

/*
==============
lj_cf_string_format
==============
*/
__int64 lj_cf_string_format(lua_State *L)
{
  signed __int64 v3; 
  int v4; 
  int v5; 
  unsigned __int64 v6; 
  GCstr *v7; 
  const unsigned __int8 *v8; 
  unsigned int i; 
  GCstr *v13; 
  int v14; 
  const void *v15; 
  int v16; 
  signed __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  GCstr *v21; 
  FormatState v22; 

  v3 = L->top - L->base;
  v4 = 0;
  do
  {
    v5 = 1;
    v6 = L->glref.ptr64 + 152;
    *(_QWORD *)v6 = *(_QWORD *)(L->glref.ptr64 + 168);
    *(_QWORD *)(v6 + 24) = L;
    v7 = j_lj_lib_checkstr(L, 1);
    v8 = (const unsigned __int8 *)&v7[1] + v7->len;
    v22.p = (const unsigned __int8 *)&v7[1];
    v22.e = v8;
    if ( *v8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strfmt.h", 82, "*fs->e == 0") )
      __debugbreak();
    for ( i = j_lj_strfmt_parse(&v22); i; i = j_lj_strfmt_parse(&v22) )
    {
      if ( i == 2 )
      {
        j_lj_buf_putmem((SBuf *)v6, v22.str, v22.len);
      }
      else
      {
        if ( i == 1 )
        {
          v21 = j_lj_str_new(L, v22.str, v22.len);
          j_lj_err_callerv(L, LJ_ERR_STRFMT, &v21[1]);
        }
        if ( ++v5 > (int)v3 )
          j_luaL_argerror(L, v5, lj_obj_typename[0]);
        switch ( i & 0xF )
        {
          case 3u:
            *(double *)&_XMM0 = j_lj_lib_checknum(L, v5);
            __asm { vmovaps xmm2, xmm0; n }
            j_lj_strfmt_putfnum_int((SBuf *)v6, i, *(long double *)&_XMM2);
            break;
          case 4u:
            *(double *)&_XMM0 = j_lj_lib_checknum(L, v5);
            __asm { vmovaps xmm2, xmm0; n }
            j_lj_strfmt_putfnum_uint((SBuf *)v6, i, *(long double *)&_XMM2);
            break;
          case 5u:
            *(double *)&_XMM0 = j_lj_lib_checknum(L, v5);
            __asm { vmovaps xmm2, xmm0; n }
            j_lj_strfmt_putfnum((SBuf *)v6, i, *(long double *)&_XMM2);
            break;
          case 6u:
            v13 = string_fmt_tostring(L, v5, v4);
            if ( v13 )
            {
              if ( (i & 0x10) != 0 )
                j_lj_strfmt_putquoted((SBuf *)v6, v13);
              else
                j_lj_strfmt_putfstr((SBuf *)v6, i, v13);
            }
            else
            {
              v4 = 1;
            }
            break;
          case 7u:
            v14 = j_lj_lib_checkint(L, v5);
            j_lj_strfmt_putfchar((SBuf *)v6, i, v14);
            break;
          case 8u:
            v15 = j_lj_obj_ptr(&L->base[v5 - 1]);
            j_lj_strfmt_putptr((SBuf *)v6, v15);
            break;
          default:
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_string.c", 720, "0") )
              __debugbreak();
            break;
        }
      }
    }
    v16 = v4++;
  }
  while ( v16 == 1 );
  v17 = (unsigned __int64)j_lj_str_new(L, *(const char **)(v6 + 16), (unsigned int)(*(_DWORD *)v6 - *(_DWORD *)(v6 + 16))) | 0xFFFD800000000000ui64;
  L->top[-1].u64 = v17;
  v18 = v17 >> 47;
  if ( (unsigned int)(v17 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v19 = v17 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v18 != *(unsigned __int8 *)(v19 + 9) || (*(_BYTE *)(v19 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
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
add_value
==============
*/
void add_value(MatchState *ms, luaL_Buffer *b, const char *s, const char *e)
{
  lua_State *L; 
  int v9; 
  int v10; 
  const char *init; 
  __int64 v12; 
  unsigned __int64 v13; 
  const char *i; 
  __int64 v15; 
  char *p; 
  int v17; 
  const char *v18; 
  unsigned __int64 len; 

  L = ms->L;
  v9 = j_lua_type(L, 3);
  if ( v9 < 3 )
    goto LABEL_6;
  if ( v9 > 4 )
  {
    if ( v9 != 5 )
    {
      if ( v9 == 6 )
      {
        j_lua_pushvalue(L, 3);
        v10 = push_captures(ms, s, e);
        j_lua_call(L, v10, 1);
      }
      goto LABEL_6;
    }
    if ( ms->level > 0 )
    {
      v12 = ms->capture[0].len;
      if ( v12 == -1 )
        j_lj_err_caller(ms->L, LJ_ERR_STRCAPU);
      init = ms->capture[0].init;
      if ( v12 == -2 )
      {
        j_lua_pushinteger(ms->L, init - ms->src_init + 1);
        j_lua_gettable(L, 3);
        goto LABEL_6;
      }
    }
    else
    {
      init = s;
      v12 = e - s;
    }
    j_lua_pushlstring(ms->L, init, v12);
    j_lua_gettable(L, 3);
LABEL_6:
    if ( j_lua_toboolean(L, -1) )
    {
      if ( !j_lua_isstring(L, -1) )
      {
        v17 = j_lua_type(L, -1);
        v18 = j_lua_typename(L, v17);
        j_lj_err_callerv(L, LJ_ERR_STRGSRV, v18);
      }
    }
    else
    {
      j_lua_settop(L, -2);
      j_lua_pushlstring(L, s, e - s);
    }
    j_luaL_addvalue(b);
    return;
  }
  v13 = 0i64;
  for ( i = j_lua_tolstring(ms->L, 3, &len); v13 < len; ++v13 )
  {
    LOBYTE(v15) = i[v13];
    if ( (_BYTE)v15 == 37 && (v15 = (unsigned __int8)i[v13 + 1], ++v13, (lj_char_bits[v15 + 1] & 8) != 0) )
    {
      if ( (_BYTE)v15 == 48 )
      {
        j_luaL_addlstring(b, s, e - s);
      }
      else
      {
        push_onecapture(ms, (char)v15 - 49, s, e);
        j_luaL_addvalue(b);
      }
    }
    else
    {
      p = b->p;
      if ( b->p >= (char *)&b[1] )
      {
        j_luaL_prepbuffer(b);
        p = b->p;
        LOBYTE(v15) = i[v13];
      }
      *p = v15;
      ++b->p;
    }
  }
}

/*
==============
classend
==============
*/
const char *classend(MatchState *ms, const char *p)
{
  char v2; 
  const char *v4; 
  char v7; 
  char *v8; 

  v2 = *p;
  v4 = p + 1;
  if ( v2 == 37 )
  {
    if ( !*v4 )
      j_lj_err_caller(ms->L, LJ_ERR_STRPATE);
    return p + 2;
  }
  else if ( v2 == 91 )
  {
    if ( *v4 != 94 )
      v4 = p;
    v7 = v4[1];
    v8 = (char *)(v4 + 1);
    if ( !v7 )
LABEL_16:
      j_lj_err_caller(ms->L, LJ_ERR_STRPATM);
    while ( 1 )
    {
      ++v8;
      if ( v7 == 37 )
      {
        if ( *v8 )
          ++v8;
      }
      v7 = *v8;
      if ( *v8 == 93 )
        return v8 + 1;
      if ( !v7 )
        goto LABEL_16;
    }
  }
  else
  {
    return v4;
  }
}

/*
==============
matchbracketclass
==============
*/
__int64 matchbracketclass(int c, const char *p, const char *ec)
{
  char v3; 
  const char *v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  const char *v8; 
  unsigned __int8 v9; 
  _BYTE *v10; 
  int v11; 
  unsigned __int8 v12; 
  int v13; 
  bool v14; 
  unsigned __int8 *v16; 

  v3 = p[1];
  v4 = p + 1;
  v5 = 0;
  v6 = c;
  v7 = 0;
  if ( v3 != 94 )
    v4 = p;
  v8 = v4 + 1;
  if ( v8 < ec )
  {
    while ( 1 )
    {
      v9 = *v8;
      v10 = v8 + 1;
      if ( *v8 == 37 )
        break;
      if ( *v10 == 45 && (v16 = (unsigned __int8 *)(v8 + 2), v8 + 2 < ec) )
      {
        v8 += 2;
        if ( v9 <= (int)v6 && (int)v6 <= *v16 )
        {
LABEL_16:
          LOBYTE(v7) = v3 != 94;
          return v7;
        }
      }
      else if ( v9 == (_DWORD)v6 )
      {
        goto LABEL_16;
      }
LABEL_23:
      if ( ++v8 >= ec )
        goto LABEL_24;
    }
    ++v8;
    v11 = (unsigned __int8)*v10;
    if ( (v11 & 0xC0) == 64 )
    {
      v12 = match_class_map[v11 & 0x1F];
      if ( v12 )
      {
        v13 = (unsigned __int8)(v12 & lj_char_bits[v6 + 1]);
        if ( (v11 & 0x20) == 0 )
          v13 = v13 == 0;
LABEL_15:
        if ( v13 )
          goto LABEL_16;
        goto LABEL_23;
      }
      if ( v11 == 122 )
      {
        v14 = (_DWORD)v6 == 0;
LABEL_14:
        v13 = v14;
        goto LABEL_15;
      }
      if ( v11 == 90 )
      {
        v13 = v6 != 0;
        goto LABEL_15;
      }
    }
    v14 = v11 == (_DWORD)v6;
    goto LABEL_14;
  }
LABEL_24:
  LOBYTE(v5) = v3 == 94;
  return v5;
}

/*
==============
max_expand
==============
*/
const char *max_expand(MatchState *ms, const char *s, const char *p, const char *ep)
{
  const char *src_end; 
  __int64 v5; 
  const char *v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  bool v15; 
  const char *result; 
  unsigned __int8 v17; 

  src_end = ms->src_end;
  v5 = 0i64;
  if ( s < src_end )
  {
    v10 = s;
    v11 = *p;
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)v10;
      if ( v11 == 37 )
        break;
      if ( v11 != 46 )
      {
        if ( v11 != 91 )
        {
          v13 = v11;
          goto LABEL_7;
        }
        v14 = matchbracketclass(*(unsigned __int8 *)v10, p, ep - 1);
LABEL_9:
        if ( !v14 )
          goto LABEL_11;
      }
      ++v5;
      if ( ++v10 >= src_end )
      {
LABEL_11:
        if ( v5 >= 0 )
          goto LABEL_12;
        return 0i64;
      }
    }
    v13 = *((unsigned __int8 *)p + 1);
    if ( (p[1] & 0xC0) == 64 )
    {
      v17 = match_class_map[v13 & 0x1F];
      if ( v17 )
      {
        v14 = (unsigned __int8)(v17 & lj_char_bits[v12 + 1]);
        if ( (v13 & 0x20) == 0 )
          v14 = v14 == 0;
        goto LABEL_9;
      }
      if ( v13 == 122 )
      {
        v14 = 0;
        v15 = (_DWORD)v12 == 0;
        goto LABEL_8;
      }
      if ( v13 == 90 )
      {
        v14 = v12 != 0;
        goto LABEL_9;
      }
    }
LABEL_7:
    v14 = 0;
    v15 = v13 == (_DWORD)v12;
LABEL_8:
    LOBYTE(v14) = v15;
    goto LABEL_9;
  }
LABEL_12:
  while ( 1 )
  {
    result = match(ms, &s[v5], ep + 1);
    if ( result )
      break;
    if ( --v5 < 0 )
      return 0i64;
  }
  return result;
}

/*
==============
push_captures
==============
*/
__int64 push_captures(MatchState *ms, const char *s, const char *e)
{
  int level; 
  int v7; 
  __int64 i; 
  lua_State *L; 
  const char *init; 
  __int64 len; 

  level = ms->level;
  if ( !level )
    level = s != NULL;
  j_luaL_checkstack(ms->L, level, "too many captures");
  v7 = 0;
  if ( level > 0 )
  {
    for ( i = 0i64; i < level; ++i )
    {
      L = ms->L;
      if ( v7 < ms->level )
      {
        len = ms->capture[i].len;
        if ( len == -1 )
          j_lj_err_caller(L, LJ_ERR_STRCAPU);
        init = ms->capture[i].init;
        if ( len == -2 )
        {
          j_lua_pushinteger(L, init - ms->src_init + 1);
          goto LABEL_9;
        }
      }
      else
      {
        if ( i )
          j_lj_err_caller(L, LJ_ERR_STRCAPI);
        init = s;
        len = e - s;
      }
      j_lua_pushlstring(L, init, len);
LABEL_9:
      ++v7;
    }
  }
  return (unsigned int)level;
}

/*
==============
push_onecapture
==============
*/
void push_onecapture(MatchState *ms, int i, const char *s, const char *e)
{
  lua_State *L; 
  __int64 len; 
  const char *init; 

  if ( i < ms->level )
  {
    len = ms->capture[i].len;
    if ( len == -1 )
      j_lj_err_caller(ms->L, LJ_ERR_STRCAPU);
    init = ms->capture[i].init;
    if ( len == -2 )
      j_lua_pushinteger(ms->L, init - ms->src_init + 1);
    else
      j_lua_pushlstring(ms->L, init, len);
  }
  else
  {
    L = ms->L;
    if ( i )
      j_lj_err_caller(L, LJ_ERR_STRCAPI);
    j_lua_pushlstring(L, s, e - s);
  }
}

/*
==============
start_capture
==============
*/
const char *start_capture(MatchState *ms, const char *s, const char *p, int what)
{
  __int64 level; 
  const char *result; 

  level = ms->level;
  if ( (int)level >= 32 )
    j_lj_err_caller(ms->L, LJ_ERR_STRCAPN);
  ms->capture[level].init = s;
  ms->capture[level].len = what;
  ms->level = level + 1;
  result = match(ms, s, p);
  if ( !result )
    --ms->level;
  return result;
}

/*
==============
str_find_aux
==============
*/
__int64 str_find_aux(lua_State *L, int find)
{
  GCstr *v5; 
  GCstr *v6; 
  int v7; 
  __int64 len; 
  int v9; 
  bool v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  TValue *v14; 
  __int64 result; 
  char gcptr64; 
  __int64 v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  MatchState ms; 

  v5 = j_lj_lib_checkstr(L, 1);
  v6 = j_lj_lib_checkstr(L, 2);
  v7 = j_lj_lib_optint(L, 3, 1);
  len = v5->len;
  v9 = v7;
  v10 = v7 < 0;
  v11 = v5->len;
  if ( !v10 )
    v11 = -1;
  v12 = v9 + v11;
  v13 = 0;
  if ( v12 >= 0 )
    v13 = v12;
  if ( v13 <= (unsigned int)len )
    len = v13;
  if ( !find || ((v14 = L->base + 3, v14 >= L->top) || (unsigned int)(v14->it64 >> 47) >= 0xFFFFFFFE) && j_lj_str_haspattern(v6) )
  {
    gcptr64 = v6[1].nextgc.gcptr64;
    ms.src_init = (const char *)&v5[1];
    v23 = v5->len;
    v24 = (char *)&v5[1] + len;
    ms.L = L;
    ms.src_end = (char *)&v5[1] + v23;
    while ( 1 )
    {
      *(_QWORD *)&ms.level = 0i64;
      v25 = match(&ms, v24, (const char *)&v6[1] + (gcptr64 == 94));
      if ( v25 )
        break;
      v26 = v24++;
      if ( v26 >= ms.src_end || gcptr64 == 94 )
        goto LABEL_17;
    }
    if ( find )
    {
      _RCX = L->top;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      L->top = _RCX + 1;
      __asm
      {
        vcvtsi2sd xmm0, xmm0, ebx
        vmovsd  qword ptr [rcx], xmm0
      }
      _RCX = L->top;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, r8d
      }
      L->top = _RCX + 1;
      __asm { vmovsd  qword ptr [rcx], xmm0 }
      return (unsigned int)push_captures(&ms, NULL, NULL) + 2;
    }
    else
    {
      return push_captures(&ms, v24, v25);
    }
  }
  else if ( j_lj_str_find((const char *)&v5[1] + len, (const char *)&v6[1], v5->len - (int)len, v6->len) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, eax
    }
    _RAX = L->top;
    __asm
    {
      vmovsd  qword ptr [rax-10h], xmm0
      vxorps  xmm0, xmm0, xmm0
    }
    _RAX = L->top;
    __asm
    {
      vcvtsi2sd xmm0, xmm0, ecx
      vmovsd  qword ptr [rax-8], xmm0
    }
    return 2i64;
  }
  else
  {
LABEL_17:
    result = 1i64;
    L->top[-1].u64 = -1i64;
  }
  return result;
}

/*
==============
string_fmt_tostring
==============
*/
GCstr *string_fmt_tostring(lua_State *L, int arg, int retry)
{
  __int64 v5; 
  TValue *v6; 
  const TValue *v8; 
  TValue *top; 
  __int64 u64; 
  __int64 v11; 
  __int64 v12; 
  TValue *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  TValue *base; 
  TValue *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  v5 = arg;
  v6 = &L->base[v5 - 1];
  if ( v6 >= L->top && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_string.c", 648, "o < L->top") )
    __debugbreak();
  if ( (unsigned int)(v6->it64 >> 47) == -5 )
    return (GCstr *)(v6->u64 & 0x7FFFFFFFFFFFi64);
  if ( retry == 2 )
    return j_lj_strfmt_obj(L, v6);
  v8 = j_lj_meta_lookup(L, v6, MM_tostring);
  if ( v8->u64 == -1i64 )
    return j_lj_strfmt_obj(L, v6);
  top = L->top;
  L->top = top + 1;
  u64 = v8->u64;
  top->u64 = v8->u64;
  v11 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v12 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v11 != *(unsigned __int8 *)(v12 + 9) || (*(_BYTE *)(v12 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v13 = L->top;
  L->top = v13 + 1;
  v14 = v6->u64;
  v13->u64 = v6->u64;
  v15 = v14 >> 47;
  if ( (unsigned int)(v14 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v16 = v14 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v15 != *(unsigned __int8 *)(v16 + 9) || (*(_BYTE *)(v16 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  j_lua_call(L, 1, 1);
  base = L->base;
  v18 = L->top - 1;
  L->top = v18;
  v19 = v18->u64;
  base[v5 - 1] = (TValue)v18->u64;
  v20 = v19 >> 47;
  if ( (unsigned int)(v19 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v21 = v19 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v20 != *(unsigned __int8 *)(v21 + 9) || (*(_BYTE *)(v21 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return 0i64;
}

