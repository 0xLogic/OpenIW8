/*
==============
lj_meta_init
==============
*/
void lj_meta_init(lua_State *L)
{
  unsigned __int64 ptr64; 
  const char *v2; 
  __int64 v4; 
  char v5; 
  const char *i; 

  ptr64 = L->glref.ptr64;
  v2 = aIndexNewindexG;
  v4 = 0i64;
  do
  {
    v5 = v2[2];
    for ( i = v2 + 2; v5; v5 = *++i )
    {
      if ( v5 == 95 )
        break;
    }
    *(_QWORD *)(ptr64 + 8 * v4 + 384) = j_lj_str_new(L, v2, i - v2);
    v2 = i;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( *i );
}

/*
==============
lj_meta_cache
==============
*/
const TValue *lj_meta_cache(GCtab *mt, MMS mm, GCstr *name)
{
  const TValue *v5; 

  v5 = j_lj_tab_getstr(mt, name);
  if ( mm > MM_len && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_meta.c", 50, "mm <= MM_FAST") )
    __debugbreak();
  if ( v5 && v5->u64 != -1i64 )
    return v5;
  mt->nomm |= 1 << mm;
  return 0i64;
}

/*
==============
lj_meta_lookup
==============
*/
const TValue *lj_meta_lookup(lua_State *L, const TValue *o, MMS mm)
{
  __int64 v4; 
  GCtab *v5; 
  int v6; 
  const TValue *result; 

  v4 = o->it64 >> 47;
  if ( (_DWORD)v4 == -12 || (_DWORD)v4 == -13 )
  {
    v5 = *(GCtab **)((o->u64 & 0x7FFFFFFFFFFFi64) + 0x20);
  }
  else
  {
    if ( (unsigned int)v4 > 0xFFFFFFF2 )
      v6 = ~(_DWORD)v4;
    else
      v6 = 13;
    v5 = *(GCtab **)(L->glref.ptr64 + 8i64 * (unsigned int)(v6 + 20) + 384);
  }
  if ( !v5 || (result = j_lj_tab_getstr(v5, *(GCstr **)(L->glref.ptr64 + 8i64 * (int)mm + 384))) == NULL )
  {
    if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_meta.c", 73, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
        __debugbreak();
    }
    return (const TValue *)(L->glref.ptr64 + 248);
  }
  return result;
}

/*
==============
lj_meta_tget
==============
*/
const TValue *lj_meta_tget(lua_State *L, const TValue *o, const TValue *k)
{
  signed __int64 u64; 
  const TValue *v5; 
  int v7; 
  GCtab *v8; 
  const TValue *v9; 
  GCtab *gcptr64; 
  const TValue *v11; 

  u64 = o->u64;
  v5 = o;
  v7 = 0;
  while ( 1 )
  {
    if ( (unsigned int)(u64 >> 47) != -12 )
    {
      v11 = j_lj_meta_lookup(L, v5, MM_index);
      u64 = v11->u64;
      if ( v11->u64 == -1i64 )
        j_lj_err_optype(L, v5, LJ_ERR_OPINDEX);
      goto LABEL_13;
    }
    v8 = (GCtab *)(v5->u64 & 0x7FFFFFFFFFFFi64);
    v9 = j_lj_tab_get(L, v8, k);
    if ( v9->u64 != -1i64 )
      return v9;
    gcptr64 = (GCtab *)v8->metatable.gcptr64;
    if ( !gcptr64 )
      return v9;
    if ( (gcptr64->nomm & 1) == 0 )
    {
      v11 = j_lj_tab_getstr(gcptr64, *(GCstr **)(L->glref.ptr64 + 384));
      if ( v11 && v11->u64 != -1i64 )
        goto LABEL_10;
      gcptr64->nomm |= 1u;
    }
    v11 = NULL;
LABEL_10:
    if ( !v11 )
      return v9;
    u64 = v11->u64;
LABEL_13:
    if ( (unsigned int)(u64 >> 47) == -9 )
      break;
    ++v7;
    v5 = v11;
    if ( v7 >= 100 )
      j_lj_err_msg(L, LJ_ERR_GETLOOP);
  }
  L->top = mmcall(L, j_lj_cont_ra, v11, v5, k);
  return 0i64;
}

/*
==============
lj_meta_tset
==============
*/
TValue *lj_meta_tset(lua_State *L, const TValue *o, const TValue *k)
{
  int v6; 
  unsigned __int64 v7; 
  const TValue *v8; 
  __int64 v9; 
  const TValue *v10; 
  __int64 u64; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 v14; 
  unsigned __int64 v15; 
  char v16; 
  unsigned __int8 v18; 
  unsigned __int64 ptr64; 
  char v20; 
  __int64 v21; 

  v6 = 0;
  while ( (unsigned int)(o->it64 >> 47) != -12 )
  {
    v10 = j_lj_meta_lookup(L, o, MM_newindex);
    u64 = v10->u64;
    if ( v10->u64 == -1i64 )
      j_lj_err_optype(L, o, LJ_ERR_OPINDEX);
LABEL_13:
    v12 = u64 >> 47;
    if ( (unsigned int)(u64 >> 47) == -9 )
    {
      L->top = mmcall(L, j_lj_cont_nop, v10, o, k);
      return 0i64;
    }
    v21 = u64;
    if ( (unsigned int)(v12 + 4) > 0xFFFFFFF6 )
    {
      v13 = u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v12 != *(unsigned __int8 *)(v13 + 9) || (*(_BYTE *)(v13 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    ++v6;
    o = (const TValue *)&v21;
    if ( v6 >= 100 )
      j_lj_err_msg(L, LJ_ERR_SETLOOP);
  }
  v7 = o->u64 & 0x7FFFFFFFFFFFi64;
  v8 = j_lj_tab_get(L, (GCtab *)v7, k);
  if ( v8->u64 != -1i64 )
  {
    v18 = *(_BYTE *)(v7 + 8);
    *(_BYTE *)(v7 + 10) = 0;
    if ( (v18 & 4) != 0 )
    {
      ptr64 = L->glref.ptr64;
      if ( (v18 & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
        __debugbreak();
      v20 = *(_BYTE *)(ptr64 + 65);
      if ( (v20 == 5 || !v20) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
        __debugbreak();
      *(_BYTE *)(v7 + 8) &= ~4u;
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(ptr64 + 96);
      *(_QWORD *)(ptr64 + 96) = v7;
    }
    return (TValue *)v8;
  }
  v9 = *(_QWORD *)(v7 + 32);
  if ( !v9 )
    goto LABEL_21;
  if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
    goto LABEL_9;
  v10 = j_lj_tab_getstr(*(GCtab **)(v7 + 32), *(GCstr **)(L->glref.ptr64 + 392));
  if ( !v10 || v10->u64 == -1i64 )
  {
    *(_BYTE *)(v9 + 10) |= 2u;
LABEL_9:
    v10 = NULL;
  }
  if ( v10 )
  {
    u64 = v10->u64;
    goto LABEL_13;
  }
LABEL_21:
  v14 = *(_BYTE *)(v7 + 8);
  *(_BYTE *)(v7 + 10) = 0;
  if ( (v14 & 4) != 0 )
  {
    v15 = L->glref.ptr64;
    if ( (v14 & (unsigned __int8)~*(_BYTE *)(v15 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
      __debugbreak();
    v16 = *(_BYTE *)(v15 + 65);
    if ( (v16 == 5 || !v16) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
      __debugbreak();
    *(_BYTE *)(v7 + 8) &= ~4u;
    *(_QWORD *)(v7 + 24) = *(_QWORD *)(v15 + 96);
    *(_QWORD *)(v15 + 96) = v7;
  }
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_meta.c", 177, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v8 != (const TValue *)(L->glref.ptr64 + 248) )
    return (TValue *)v8;
  if ( k->u64 == -1i64 )
    j_lj_err_msg(L, LJ_ERR_NILIDX);
  return j_lj_tab_newkey(L, (GCtab *)v7, k);
}

/*
==============
lj_meta_arith
==============
*/
TValue *lj_meta_arith(lua_State *L, TValue *ra, const TValue *rb, const TValue *rc, unsigned int op)
{
  const TValue *b; 
  const TValue *v7; 
  int v9; 
  __int64 v10; 
  TValue v12; 
  __int64 v13; 
  const TValue *v17; 
  __int64 v18; 
  TValue *p_o; 
  TValue v20; 
  TValue o; 

  b = rc;
  v7 = rb;
  _R15 = ra;
  v9 = lj_bc_mode[op] >> 11;
  v10 = rb->it64 >> 47;
  if ( (unsigned int)v10 >= 0xFFFFFFF2 )
  {
    if ( (_DWORD)v10 != -5 || !j_lj_strscan_num((GCstr *)(rb->u64 & 0x7FFFFFFFFFFFi64), &o) )
      goto LABEL_17;
    _RSI = &o;
  }
  else
  {
    _RSI = (TValue *)rb;
  }
  v12.u64 = b->u64;
  v13 = b->it64 >> 47;
  if ( (unsigned int)v13 < 0xFFFFFFF2 )
    goto LABEL_10;
  if ( (_DWORD)v13 == -5 && j_lj_strscan_num((GCstr *)(v12.u64 & 0x7FFFFFFFFFFFi64), &v20) )
  {
    v12.u64 = v20.u64;
    b = &v20;
LABEL_10:
    if ( (unsigned int)(v12.it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_meta.c", 221, "(((uint32_t)((c)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    if ( (unsigned int)(_RSI->it64 >> 47) >= 0xFFFFFFF2 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_meta.c", 221, "(((uint32_t)((b)->it64 >> 47)) < (~13u))") )
        __debugbreak();
    }
    __asm
    {
      vmovsd  xmm1, qword ptr [rdi]; y
      vmovsd  xmm0, qword ptr [rsi]; x
    }
    *(double *)&_XMM0 = j_lj_vm_foldarith(*(long double *)&_XMM0, *(long double *)&_XMM1, v9 - 10);
    __asm { vmovsd  qword ptr [r15], xmm0 }
    return 0i64;
  }
LABEL_17:
  v17 = j_lj_meta_lookup(L, v7, (MMS)v9);
  if ( v17->u64 == -1i64 )
  {
    v17 = j_lj_meta_lookup(L, b, (MMS)v9);
    if ( v17->u64 == -1i64 )
    {
      v18 = v7->it64 >> 47;
      if ( (unsigned int)v18 >= 0xFFFFFFF2 )
      {
        if ( (_DWORD)v18 == -5 && j_lj_strscan_num((GCstr *)(v7->u64 & 0x7FFFFFFFFFFFi64), &o) )
          p_o = &o;
        else
          p_o = NULL;
      }
      else
      {
        p_o = (TValue *)v7;
      }
      if ( p_o )
        v7 = b;
      j_lj_err_optype(L, v7, LJ_ERR_OPARITH);
    }
  }
  return mmcall(L, j_lj_cont_ra, v17, v7, b);
}

/*
==============
lj_meta_cat
==============
*/
TValue *lj_meta_cat(lua_State *L, TValue *top, int left)
{
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v10; 
  unsigned __int64 v11; 
  __int64 it64; 
  TValue *v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  TValue *v20; 
  __int64 v21; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  TValue *result; 
  const TValue *v27; 
  signed __int64 u64; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 

  v6 = abs32(left);
  while ( 1 )
  {
    v7 = top->it64 >> 47;
    if ( (_DWORD)v7 != -5 && (unsigned int)v7 > 0xFFFFFFF2 )
      break;
    v8 = top[-1].it64 >> 47;
    if ( (_DWORD)v8 != -5 && (unsigned int)v8 > 0xFFFFFFF2 )
      break;
    _RBX = top;
    if ( (_DWORD)v7 == -5 )
      v10 = *(_DWORD *)((top->u64 & 0x7FFFFFFFFFFFi64) + 0x10);
    else
      v10 = 32;
    v11 = v10;
    do
    {
      it64 = _RBX[-1].it64;
      v13 = _RBX--;
      v14 = v6;
      if ( (unsigned int)(it64 >> 47) == -5 )
        v15 = *(unsigned int *)((it64 & 0x7FFFFFFFFFFFi64) + 0x10);
      else
        v15 = 32i64;
      v11 += v15;
      if ( (int)--v6 <= 0 )
        break;
      v16 = v13[-2].it64 >> 47;
    }
    while ( (_DWORD)v16 == -5 || (unsigned int)v16 <= 0xFFFFFFF2 );
    if ( v11 >= 0x7FFFFF00 )
      j_lj_err_msg(L, LJ_ERR_STROV);
    v17 = L->glref.ptr64 + 152;
    v18 = *(_QWORD *)(L->glref.ptr64 + 168);
    v19 = *(_DWORD *)(L->glref.ptr64 + 160) - v18;
    *(_QWORD *)(v17 + 24) = L;
    *(_QWORD *)v17 = v18;
    if ( (unsigned int)v11 > v19 )
      j_lj_buf_more2((SBuf *)v17, v11);
    v20 = top;
    for ( top = _RBX; _RBX <= v20; ++_RBX )
    {
      v21 = _RBX->it64 >> 47;
      if ( (_DWORD)v21 == -5 )
      {
        j_lj_buf_putmem((SBuf *)v17, (const void *)((_RBX->u64 & 0x7FFFFFFFFFFFi64) + 24), *(_DWORD *)((_RBX->u64 & 0x7FFFFFFFFFFFi64) + 0x10));
      }
      else
      {
        if ( (unsigned int)v21 >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_meta.c", 296, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
          __debugbreak();
        __asm { vmovsd  xmm2, qword ptr [rbx]; n }
        j_lj_strfmt_putfnum((SBuf *)v17, 0xF000035u, *(long double *)&_XMM2);
      }
    }
    v23 = (unsigned __int64)j_lj_str_new(L, *(const char **)(v17 + 16), (unsigned int)(*(_DWORD *)v17 - *(_DWORD *)(v17 + 16))) | 0xFFFD800000000000ui64;
    top->u64 = v23;
    v24 = v23 >> 47;
    if ( (unsigned int)(v23 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v25 = v23 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v24 != *(unsigned __int8 *)(v25 + 9) || (*(_BYTE *)(v25 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    if ( v14 <= 1 )
    {
      if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
      {
        if ( left >= 0 )
        {
          if ( *(_BYTE *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0xA) )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_meta.c", 303, "(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn))->c.ffid == 0)") )
              __debugbreak();
          }
          L->top = &L->base[*(unsigned __int8 *)(*(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 93i64)];
        }
        j_lj_gc_step(L);
      }
      return 0i64;
    }
  }
  v27 = j_lj_meta_lookup(L, top - 1, MM_concat);
  if ( v27->u64 == -1i64 )
  {
    v27 = j_lj_meta_lookup(L, top, MM_concat);
    if ( v27->u64 == -1i64 )
    {
      v37 = top[-1].it64 >> 47;
      if ( (_DWORD)v37 == -5 || (unsigned int)v37 <= 0xFFFFFFF2 )
        ++top;
      j_lj_err_optype(L, top - 1, LJ_ERR_OPCAT);
    }
  }
  u64 = top->u64;
  top[4].u64 = top->u64;
  v29 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v30 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v29 != *(unsigned __int8 *)(v30 + 9) || (*(_BYTE *)(v30 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v31 = top[-1].it64;
  top[3].u64 = v31;
  v32 = v31 >> 47;
  if ( (unsigned int)(v31 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v33 = v31 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v32 != *(unsigned __int8 *)(v33 + 9) || (*(_BYTE *)(v33 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v34 = v27->u64;
  top[1].u64 = v27->u64;
  v35 = v34 >> 47;
  if ( (unsigned int)(v34 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v36 = v34 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v35 != *(unsigned __int8 *)(v36 + 9) || (*(_BYTE *)(v36 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  top->u64 = -1i64;
  top[-1].u64 = (unsigned __int64)j_lj_cont_cat;
  result = top + 3;
  top[2].u64 = -1i64;
  return result;
}

/*
==============
lj_meta_len
==============
*/
TValue *lj_meta_len(lua_State *L, const TValue *o)
{
  const TValue *v4; 

  v4 = j_lj_meta_lookup(L, o, MM_len);
  if ( v4->u64 == -1i64 )
    j_lj_err_optype(L, o, LJ_ERR_OPLEN);
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_meta.c", 320, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  return mmcall(L, j_lj_cont_ra, v4, o, (const TValue *)(L->glref.ptr64 + 248));
}

/*
==============
lj_meta_equal
==============
*/
TValue *lj_meta_equal(lua_State *L, GCobj *o1, GCobj *o2, int ne)
{
  unsigned __int64 gcptr64; 
  __int64 v6; 
  const TValue *v9; 
  const TValue *v10; 
  const TValue *v11; 
  unsigned __int64 v12; 
  const TValue *v13; 
  TValue *base; 
  TValue *top; 
  void (__fastcall *v16)(); 
  __int64 u64; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  __int64 v21; 
  signed __int64 v22; 
  __int64 v23; 
  __int64 v24; 

  gcptr64 = o1->gch.metatable.gcptr64;
  v6 = ne;
  if ( !gcptr64 )
    return (TValue *)v6;
  v9 = NULL;
  if ( (*(_BYTE *)(gcptr64 + 10) & 0x10) == 0 )
  {
    v10 = j_lj_tab_getstr((GCtab *)o1->gch.metatable.gcptr64, *(GCstr **)(L->glref.ptr64 + 416));
    v11 = v10;
    if ( v10 && v10->u64 != -1i64 )
      goto LABEL_7;
    *(_BYTE *)(gcptr64 + 10) |= 0x10u;
  }
  v11 = NULL;
LABEL_7:
  if ( !v11 )
    return (TValue *)v6;
  v12 = o2->gch.metatable.gcptr64;
  if ( o1->gch.metatable.gcptr64 != v12 )
  {
    if ( !v12 )
      return (TValue *)v6;
    if ( (*(_BYTE *)(v12 + 10) & 0x10) == 0 )
    {
      v13 = j_lj_tab_getstr((GCtab *)o2->gch.metatable.gcptr64, *(GCstr **)(L->glref.ptr64 + 416));
      if ( !v13 || v13->u64 == -1i64 )
        *(_BYTE *)(v12 + 10) |= 0x10u;
      else
        v9 = v13;
    }
    if ( !v9 || !j_lj_obj_equal(v11, v9) )
      return (TValue *)v6;
  }
  base = L->base;
  if ( *(_BYTE *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0xA) )
    top = L->top;
  else
    top = &base[*(unsigned __int8 *)(*(_QWORD *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 93i64)];
  v16 = (void (__fastcall *)())j_lj_cont_condt;
  if ( (_DWORD)v6 )
    v16 = j_lj_cont_condf;
  top->u64 = (unsigned __int64)v16;
  top[1].u64 = -1i64;
  u64 = v11->u64;
  top[2].u64 = v11->u64;
  v18 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v19 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v18 != *(unsigned __int8 *)(v19 + 9) || (*(_BYTE *)(v19 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  top[3].u64 = -1i64;
  v20 = (unsigned __int64)~o1->gch.gct << 47;
  top[4].u64 = (unsigned __int64)o1 | v20;
  v21 = (__int64)((unsigned __int64)o1 | v20) >> 47;
  if ( (unsigned int)(v21 + 4) > 0xFFFFFFF6 && (~(_DWORD)v21 != *(unsigned __int8 *)((((unsigned __int64)o1 | v20) & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((((unsigned __int64)o1 | v20) & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  v22 = (unsigned __int64)o2 | v20;
  top[5].u64 = v22;
  v23 = v22 >> 47;
  if ( (unsigned int)(v22 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v24 = v22 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v23 != *(unsigned __int8 *)(v24 + 9) || (*(_BYTE *)(v24 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return top + 4;
}

/*
==============
lj_meta_comp
==============
*/
TValue *lj_meta_comp(lua_State *L, const TValue *o1, const TValue *o2, int op)
{
  signed __int64 u64; 
  const TValue *v5; 
  char v6; 
  __int64 v7; 
  const TValue *b; 
  __int64 v9; 
  int v11; 
  __int64 v12; 
  void (__fastcall *v14)(); 
  int v15; 
  const TValue *v16; 
  const TValue *v17; 
  const TValue *v18; 

  u64 = o1->u64;
  v5 = o1;
  v6 = op;
  v7 = o2->it64 >> 47;
  b = o2;
  v9 = u64 >> 47;
  if ( (_DWORD)v9 == (_DWORD)v7 )
  {
    if ( (_DWORD)v9 != -5 || (_DWORD)v7 != -5 )
      goto $trymt;
    v11 = j_lj_str_cmp((GCstr *)(v5->u64 & 0x7FFFFFFFFFFFi64), (GCstr *)(o2->u64 & 0x7FFFFFFFFFFFi64));
    v12 = 0i64;
    if ( (v6 & 2) != 0 )
      LOBYTE(v12) = v11 <= 0;
    else
      LOBYTE(v12) = v11 < 0;
    return (TValue *)(v12 ^ v6 & 1);
  }
  else
  {
    if ( (unsigned int)(v9 + 3) > 1 || (unsigned int)(v7 + 3) > 1 )
$err_9:
      j_lj_err_comp(L, v5, b);
    while ( 1 )
    {
$trymt:
      v14 = (void (__fastcall *)())j_lj_cont_condt;
      if ( (v6 & 1) != 0 )
        v14 = j_lj_cont_condf;
      v15 = v6 & 2;
      v16 = j_lj_meta_lookup(L, v5, (MMS)((v15 | 0xCu) >> 1));
      v17 = j_lj_meta_lookup(L, b, (MMS)((v15 | 0xCu) >> 1));
      if ( v16->u64 != -1i64 )
      {
        if ( j_lj_obj_equal(v16, v17) )
          return mmcall(L, v14, v16, v5, b);
      }
      if ( (v6 & 2) == 0 )
        goto $err_9;
      v18 = v5;
      v6 ^= 3u;
      v5 = b;
      b = v18;
    }
  }
}

/*
==============
lj_meta_istype
==============
*/
void lj_meta_istype(lua_State *L, unsigned int ra, unsigned int tp)
{
  int v6; 
  __int64 v7; 

  if ( *(_BYTE *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0xA) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_meta.c", 427, "(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn))->c.ffid == 0)") )
    __debugbreak();
  v6 = ra + 1;
  v7 = tp - 1;
  L->top = &L->base[*(unsigned __int8 *)(*(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 93i64)];
  if ( (_DWORD)v7 == 13 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_meta.c", 429, "0 || tp != ~(~13u)") )
      __debugbreak();
    goto LABEL_11;
  }
  if ( (_DWORD)v7 == 14 )
  {
    j_lj_lib_checknum(L, v6);
    return;
  }
  if ( (_DWORD)v7 != 4 )
LABEL_11:
    j_lj_err_argtype(L, v6, lj_obj_itypename[v7]);
  j_lj_lib_checkstr(L, v6);
}

/*
==============
lj_meta_call
==============
*/
void lj_meta_call(lua_State *L, TValue *func, TValue *top)
{
  const TValue *v6; 
  TValue *v7; 
  signed __int64 it64; 
  TValue *v9; 
  __int64 v10; 
  __int64 v11; 
  signed __int64 u64; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v6 = j_lj_meta_lookup(L, func, MM_call);
  if ( (unsigned int)(v6->it64 >> 47) != -9 )
    j_lj_err_optype_call(L, func);
  v7 = func + 2;
  if ( top > &func[2] )
  {
    do
    {
      it64 = top[-1].it64;
      v9 = top - 1;
      top->u64 = it64;
      v10 = it64 >> 47;
      if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v11 = it64 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      --top;
    }
    while ( v9 > v7 );
  }
  u64 = func->u64;
  v7->u64 = func->u64;
  v13 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v14 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v13 != *(unsigned __int8 *)(v14 + 9) || (*(_BYTE *)(v14 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v15 = v6->u64;
  func->u64 = v6->u64;
  v16 = v15 >> 47;
  if ( (unsigned int)(v15 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v17 = v15 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v16 != *(unsigned __int8 *)(v17 + 9) || (*(_BYTE *)(v17 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
}

/*
==============
lj_meta_for
==============
*/
void lj_meta_for(lua_State *L, TValue *o)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  v4 = o->it64 >> 47;
  if ( (unsigned int)v4 > 0xFFFFFFF2 && ((_DWORD)v4 != -5 || !j_lj_strscan_num((GCstr *)(o->u64 & 0x7FFFFFFFFFFFi64), o)) )
    j_lj_err_msg(L, LJ_ERR_FORINIT);
  v5 = o[1].it64 >> 47;
  if ( (unsigned int)v5 > 0xFFFFFFF2 && ((_DWORD)v5 != -5 || !j_lj_strscan_num((GCstr *)(o[1].u64 & 0x7FFFFFFFFFFFi64), o + 1)) )
    j_lj_err_msg(L, LJ_ERR_FORLIM);
  v6 = o[2].it64 >> 47;
  if ( (unsigned int)v6 > 0xFFFFFFF2 && ((_DWORD)v6 != -5 || !j_lj_strscan_num((GCstr *)(o[2].u64 & 0x7FFFFFFFFFFFi64), o + 2)) )
    j_lj_err_msg(L, LJ_ERR_FORSTEP);
}

/*
==============
mmcall
==============
*/
TValue *mmcall(lua_State *L, void (*cont)(), const TValue *mo, const TValue *a, const TValue *b)
{
  TValue *base; 
  TValue *top; 
  signed __int64 u64; 
  __int64 v10; 
  __int64 v11; 
  TValue *v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  signed __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  base = L->base;
  top = L->top;
  if ( !*(_BYTE *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0xA) )
    top = &base[*(unsigned __int8 *)(*(_QWORD *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 93i64)];
  top->u64 = (unsigned __int64)cont;
  top[1].u64 = -1i64;
  u64 = mo->u64;
  top[2].u64 = mo->u64;
  v10 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v11 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  top[3].u64 = -1i64;
  v12 = top + 4;
  v13 = a->u64;
  v14 = a->it64 >> 47;
  v12->u64 = a->u64;
  if ( (unsigned int)(v14 + 4) > 0xFFFFFFF6 )
  {
    v15 = v13 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v14 != *(unsigned __int8 *)(v15 + 9) || (*(_BYTE *)(v15 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v16 = b->u64;
  v12[1].u64 = b->u64;
  v17 = v16 >> 47;
  if ( (unsigned int)(v16 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v18 = v16 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v17 != *(unsigned __int8 *)(v18 + 9) || (*(_BYTE *)(v18 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return v12;
}

