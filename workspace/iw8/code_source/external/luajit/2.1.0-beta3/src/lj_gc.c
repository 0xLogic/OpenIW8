/*
==============
lj_gc_separateudata
==============
*/
__int64 lj_gc_separateudata(global_State *g, int all)
{
  unsigned __int64 *gcptr64; 
  __int64 v3; 
  unsigned __int64 i; 
  __int64 v7; 
  _QWORD *v8; 

  gcptr64 = (unsigned __int64 *)g->mainthref.gcptr64;
  v3 = 0i64;
  for ( i = *gcptr64; *gcptr64; i = *gcptr64 )
  {
    if ( (*(_BYTE *)(i + 8) & 3) != 0 || all )
    {
      if ( *(_BYTE *)(i + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 132, "(o)->gch.gct == ~(~12u)") )
        __debugbreak();
      if ( (*(_BYTE *)(i + 8) & 8) == 0 )
      {
        if ( *(_BYTE *)(i + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 134, "(o)->gch.gct == ~(~12u)") )
          __debugbreak();
        if ( *(_QWORD *)(i + 32) )
        {
          if ( *(_BYTE *)(i + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 134, "(o)->gch.gct == ~(~12u)") )
            __debugbreak();
          if ( (*(_BYTE *)(*(_QWORD *)(i + 32) + 10i64) & 4) == 0 )
          {
            if ( *(_BYTE *)(i + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 134, "(o)->gch.gct == ~(~12u)") )
              __debugbreak();
            if ( j_lj_meta_cache(*(GCtab **)(i + 32), MM_gc, (GCstr *)g->gcroot[2].gcptr64) )
            {
              if ( *(_BYTE *)(i + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 138, "(o)->gch.gct == ~(~12u)") )
                __debugbreak();
              v7 = *(unsigned int *)(i + 24);
              *(_BYTE *)(i + 8) |= 8u;
              v3 += v7 + 48;
              *gcptr64 = *(_QWORD *)i;
              v8 = (_QWORD *)g->gc.mmudata.gcptr64;
              if ( v8 )
              {
                *(_QWORD *)i = *v8;
                *v8 = i;
              }
              else
              {
                *(_QWORD *)i = i;
              }
              g->gc.mmudata.gcptr64 = i;
              continue;
            }
          }
        }
        *(_BYTE *)(i + 8) |= 8u;
      }
    }
    gcptr64 = (unsigned __int64 *)i;
  }
  return v3;
}

/*
==============
lj_gc_finalize_udata
==============
*/
void lj_gc_finalize_udata(lua_State *L)
{
  unsigned __int64 i; 
  __int64 v3; 
  _QWORD *v4; 
  bool v5; 
  const TValue *v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  __int64 u64; 
  TValue *top; 
  __int64 v12; 
  __int64 v13; 
  signed __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 

  for ( i = L->glref.ptr64; *(_QWORD *)(i + 112); i = L->glref.ptr64 )
  {
    v3 = **(_QWORD **)(i + 112);
    if ( *(_QWORD *)(i + 368) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 488, "(((TValue *)(void *)(g->jit_base).ptr64)) == ((void *)0)") )
      __debugbreak();
    v4 = *(_QWORD **)(i + 112);
    if ( (_QWORD *)v3 == v4 )
      *(_QWORD *)(i + 112) = 0i64;
    else
      *v4 = *(_QWORD *)v3;
    *(_QWORD *)v3 = **(_QWORD **)(i + 216);
    **(_QWORD **)(i + 216) = v3;
    v5 = *(_BYTE *)(v3 + 9) == 12;
    *(_BYTE *)(v3 + 8) = *(_BYTE *)(v3 + 8) & 0xF8 | *(_BYTE *)(i + 64) & 3;
    if ( !v5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 519, "(o)->gch.gct == ~(~12u)") )
      __debugbreak();
    if ( *(_QWORD *)(v3 + 32) )
    {
      if ( *(_BYTE *)(v3 + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 519, "(o)->gch.gct == ~(~12u)") )
        __debugbreak();
      if ( (*(_BYTE *)(*(_QWORD *)(v3 + 32) + 10i64) & 4) == 0 )
      {
        if ( *(_BYTE *)(v3 + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 519, "(o)->gch.gct == ~(~12u)") )
          __debugbreak();
        v6 = j_lj_meta_cache(*(GCtab **)(v3 + 32), MM_gc, *(GCstr **)(i + 400));
        if ( v6 )
        {
          v7 = *(_BYTE *)(i + 209);
          v8 = *(_QWORD *)(i + 56);
          *(_QWORD *)(i + 56) = 0x800000000000i64;
          *(_BYTE *)(i + 209) = v7 | 0x50;
          v9 = v7 & 0xF0;
          u64 = v6->u64;
          top = L->top;
          v12 = v6->it64 >> 47;
          top->u64 = v6->u64;
          if ( (unsigned int)(v12 + 4) > 0xFFFFFFF6 )
          {
            v13 = u64 & 0x7FFFFFFFFFFFi64;
            if ( ~(_DWORD)v12 != *(unsigned __int8 *)(v13 + 9) || (*(_BYTE *)(v13 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
                __debugbreak();
            }
          }
          top[1].u64 = -1i64;
          v14 = v3 | ((unsigned __int64)~*(unsigned __int8 *)(v3 + 9) << 47);
          top[2].u64 = v14;
          v15 = v14 >> 47;
          if ( (unsigned int)(v14 >> 47) + 4 > 0xFFFFFFF6 )
          {
            v16 = v14 & 0x7FFFFFFFFFFFi64;
            if ( ~(_DWORD)v15 != *(unsigned __int8 *)(v16 + 9) || (*(_BYTE *)(v16 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
                __debugbreak();
            }
          }
          L->top = top + 3;
          v17 = j_lj_vm_pcall(L, &top[2], 1i64, -1i64);
          *(_BYTE *)(i + 209) &= 0xFu;
          *(_BYTE *)(i + 209) |= v9;
          *(_QWORD *)(i + 56) = v8;
          if ( v17 )
            j_lj_err_throw(L, v17);
        }
      }
    }
  }
}

/*
==============
lj_gc_freeall
==============
*/
void lj_gc_freeall(global_State *g)
{
  __int64 v2; 
  __int64 v3; 
  int v4; 
  GCobj **v5; 
  int v6; 
  GCobj *v7; 
  unsigned __int8 marked; 
  __int64 v10; 

  g->gc.currentwhite = 67;
  gc_sweep(g, &g->gc.root, 0xFFFFFFFF);
  v2 = 0i64;
  v3 = g->strmask + 1;
  v10 = (unsigned int)v3;
  do
  {
    v4 = -1;
    v5 = (GCobj **)&g->strhash[v2];
    v6 = g->gc.currentwhite ^ 3;
    v7 = *v5;
    if ( *v5 )
    {
      do
      {
        if ( !v4-- )
          break;
        if ( v7->gch.gct == 6 )
          gc_sweep(g, &v7->th.openupval, 0xFFFFFFFF);
        marked = v7->gch.marked;
        if ( ((marked ^ 3) & v6) != 0 )
        {
          if ( (marked & (unsigned __int8)~g->gc.currentwhite & 3) != 0 && (marked & 0x20) == 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 398, "!((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)) || (o->gch.marked & 0x20)") )
              __debugbreak();
          }
          v5 = (GCobj **)v7;
          v7->gch.marked = g->gc.currentwhite & 3 | v7->gch.marked & 0xF8;
        }
        else
        {
          if ( (marked & (unsigned __int8)~g->gc.currentwhite & 3) == 0 && v6 != 64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 402, "((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)) || ow == 0x40") )
            __debugbreak();
          *v5 = (GCobj *)v7->gch.nextgc.gcptr64;
          if ( v7 == (GCobj *)g->gc.root.gcptr64 )
            g->gc.root.gcptr64 = v7->gch.nextgc.gcptr64;
          gc_freefunc[(unsigned int)v7->gch.gct - 4](g, v7);
        }
        v7 = *v5;
      }
      while ( *v5 );
      v3 = v10;
    }
    ++v2;
    v10 = --v3;
  }
  while ( v3 );
}

/*
==============
lj_gc_step
==============
*/
__int64 lj_gc_step(lua_State *L)
{
  unsigned __int64 ptr64; 
  int v3; 
  int v4; 
  unsigned __int64 v5; 
  int v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  GCobj *v10; 
  GCobj *gcptr64; 
  __int64 v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  GCRef *v16; 
  int v17; 
  global_State *v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  __int64 result; 

  ptr64 = L->glref.ptr64;
  v3 = *(_DWORD *)(ptr64 + 144);
  v4 = *(_DWORD *)(ptr64 + 136);
  v5 = *(_QWORD *)(ptr64 + 56);
  *(_DWORD *)(ptr64 + 144) = -3;
  v6 = 5 * v4;
  v7 = *(_QWORD *)(ptr64 + 48);
  v8 = (unsigned int)(2 * v6);
  if ( !(_DWORD)v8 )
    v8 = 0x800000000000i64;
  if ( v7 > v5 )
    *(_QWORD *)(ptr64 + 120) += v7 - v5;
  while ( 2 )
  {
    v9 = L->glref.ptr64;
    switch ( *(_BYTE *)(v9 + 65) )
    {
      case 0:
        v10 = *(GCobj **)(v9 + 216);
        *(_QWORD *)(v9 + 88) = 0i64;
        *(_QWORD *)(v9 + 96) = 0i64;
        *(_QWORD *)(v9 + 104) = 0i64;
        if ( (v10->gch.marked & 3) != 0 )
        {
          gc_mark((global_State *)v9, v10);
          v10 = *(GCobj **)(v9 + 216);
        }
        gcptr64 = (GCobj *)v10->th.env.gcptr64;
        if ( (gcptr64->gch.marked & 3) != 0 )
          gc_mark((global_State *)v9, gcptr64);
        v12 = *(__int64 *)(v9 + 224) >> 47;
        if ( (unsigned int)(v12 + 4) > 0xFFFFFFF6 && ~(_DWORD)v12 != *(unsigned __int8 *)((*(_QWORD *)(v9 + 224) & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 95, "!((((uint32_t)((&g->registrytv)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)((&g->registrytv)->it64 >> 47)) == ((GCobj *)((((&g->registrytv)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
          __debugbreak();
        if ( (unsigned int)(*(__int64 *)(v9 + 224) >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((*(_QWORD *)(v9 + 224) & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
        {
          if ( (unsigned int)(*(__int64 *)(v9 + 224) >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 95, "((((uint32_t)((&g->registrytv)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
            __debugbreak();
          gc_mark((global_State *)v9, (GCobj *)(*(_QWORD *)(v9 + 224) & 0x7FFFFFFFFFFFi64));
        }
        gc_mark_gcroot((global_State *)v9);
        *(_BYTE *)(v9 + 65) = 1;
        goto LABEL_53;
      case 1:
        if ( *(_QWORD *)(v9 + 88) )
        {
          v13 = propagatemark((global_State *)L->glref.ptr64);
        }
        else
        {
          *(_BYTE *)(v9 + 65) = 2;
          v13 = 0i64;
        }
        goto LABEL_54;
      case 2:
        if ( *(_QWORD *)(v9 + 368) )
        {
          v13 = 0x800000000000i64;
        }
        else
        {
          atomic((global_State *)L->glref.ptr64, L);
          *(_BYTE *)(v9 + 65) = 3;
          *(_DWORD *)(v9 + 68) = 0;
LABEL_53:
          v13 = 0i64;
        }
LABEL_54:
        v8 -= v13;
        if ( !*(_BYTE *)(ptr64 + 65) )
        {
          v23 = *(unsigned int *)(ptr64 + 140) * (*(_QWORD *)(ptr64 + 128) / 0x64ui64);
          result = 1i64;
LABEL_60:
          *(_QWORD *)(ptr64 + 56) = v23;
          goto LABEL_61;
        }
        if ( v8 > 0 )
          continue;
        v22 = *(_QWORD *)(ptr64 + 120);
        v23 = *(_QWORD *)(ptr64 + 48);
        if ( v22 >= 0x400 )
        {
          *(_QWORD *)(ptr64 + 120) = v22 - 1024;
          result = 0i64;
          goto LABEL_60;
        }
        *(_QWORD *)(ptr64 + 56) = v23 + 1024;
        result = 0xFFFFFFFFi64;
LABEL_61:
        *(_DWORD *)(ptr64 + 144) = v3;
        return result;
      case 3:
        v14 = *(unsigned int *)(v9 + 68);
        v15 = *(_QWORD *)(v9 + 48);
        v16 = (GCRef *)(*(_QWORD *)v9 + 8 * v14);
        v17 = v14 + 1;
        v18 = (global_State *)L->glref.ptr64;
        *(_DWORD *)(v9 + 68) = v17;
        gc_sweep(v18, v16, 0xFFFFFFFF);
        if ( *(_DWORD *)(v9 + 68) > *(_DWORD *)(v9 + 8) )
          *(_BYTE *)(v9 + 65) = 4;
        if ( v15 < *(_QWORD *)(v9 + 48) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 631, "old >= g->gc.total") )
          __debugbreak();
        *(_QWORD *)(v9 + 128) += *(_QWORD *)(v9 + 48) - v15;
        v13 = 10i64;
        goto LABEL_54;
      case 4:
        v19 = *(_QWORD *)(v9 + 48);
        *(_QWORD *)(v9 + 80) = gc_sweep((global_State *)L->glref.ptr64, *(GCRef **)(v9 + 80), 0x28u);
        if ( v19 < *(_QWORD *)(v9 + 48) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 638, "old >= g->gc.total") )
          __debugbreak();
        *(_QWORD *)(v9 + 128) += *(_QWORD *)(v9 + 48) - v19;
        if ( !**(_QWORD **)(v9 + 80) )
        {
          v20 = *(_DWORD *)(v9 + 8);
          if ( *(_DWORD *)(v9 + 12) <= v20 >> 2 && v20 > 0x1FF )
            j_lj_str_resize(L, v20 >> 1);
          if ( *(_QWORD *)(v9 + 112) )
          {
            *(_BYTE *)(v9 + 65) = 5;
          }
          else
          {
            *(_BYTE *)(v9 + 65) = 0;
            *(_QWORD *)(v9 + 120) = 0i64;
          }
        }
        v13 = 400i64;
        goto LABEL_54;
      case 5:
        if ( *(_QWORD *)(v9 + 112) )
        {
          if ( *(_QWORD *)(v9 + 368) )
          {
            v13 = 0x800000000000i64;
          }
          else
          {
            gc_finalize(L);
            v21 = *(_QWORD *)(v9 + 128);
            if ( v21 > 0x64 )
              *(_QWORD *)(v9 + 128) = v21 - 100;
            v13 = 100i64;
          }
        }
        else
        {
          *(_BYTE *)(v9 + 65) = 0;
          v13 = 0i64;
          *(_QWORD *)(v9 + 120) = 0i64;
        }
        goto LABEL_54;
      default:
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 671, "0") )
          __debugbreak();
        goto LABEL_53;
    }
  }
}

/*
==============
lj_gc_step_fixtop
==============
*/
void lj_gc_step_fixtop(lua_State *L)
{
  TValue *base; 

  base = L->base;
  if ( !*(_BYTE *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0xA) )
    L->top = &base[*(unsigned __int8 *)(*(_QWORD *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 93i64)];
  j_lj_gc_step(L);
}

/*
==============
lj_gc_fullgc
==============
*/
void lj_gc_fullgc(lua_State *L)
{
  unsigned __int64 ptr64; 
  int v3; 
  bool v4; 
  char v5; 

  ptr64 = L->glref.ptr64;
  v3 = *(_DWORD *)(ptr64 + 144);
  v4 = *(_BYTE *)(ptr64 + 65) <= 2u;
  *(_DWORD *)(ptr64 + 144) = -3;
  if ( v4 )
  {
    *(_BYTE *)(ptr64 + 65) = 3;
    *(_QWORD *)(ptr64 + 80) = ptr64 + 72;
    *(_QWORD *)(ptr64 + 88) = 0i64;
    *(_QWORD *)(ptr64 + 96) = 0i64;
    *(_QWORD *)(ptr64 + 104) = 0i64;
    *(_DWORD *)(ptr64 + 68) = 0;
  }
  while ( 1 )
  {
    v5 = *(_BYTE *)(ptr64 + 65);
    if ( (unsigned __int8)(v5 - 3) > 1u )
      break;
    gc_onestep(L);
  }
  if ( v5 != 5 && v5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 745, "g->gc.state == GCSfinalize || g->gc.state == GCSpause") )
    __debugbreak();
  *(_BYTE *)(ptr64 + 65) = 0;
  do
    gc_onestep(L);
  while ( *(_BYTE *)(ptr64 + 65) );
  *(_QWORD *)(ptr64 + 56) = *(unsigned int *)(ptr64 + 140) * (*(_QWORD *)(ptr64 + 128) / 0x64ui64);
  *(_DWORD *)(ptr64 + 144) = v3;
}

/*
==============
lj_gc_barrierf
==============
*/
void lj_gc_barrierf(global_State *g, GCobj *o, GCobj *v)
{
  unsigned __int8 marked; 
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  unsigned __int8 state; 

  marked = o->gch.marked;
  if ( (marked & 4) == 0 || (v7 = v->gch.marked, (v7 & 3) == 0) || (v8 = ~g->gc.currentwhite, (v8 & v7 & 3) != 0) || (v8 & marked & 3) != 0 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 758, "((o)->gch.marked & 0x04) && ((v)->gch.marked & (0x01 | 0x02)) && !((v)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
      __debugbreak();
  }
  state = g->gc.state;
  if ( (state == 5 || !state) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 759, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
    __debugbreak();
  if ( o->gch.gct == 11 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 760, "o->gch.gct != ~(~11u)") )
    __debugbreak();
  if ( (unsigned __int8)(g->gc.state - 1) <= 1u )
    gc_mark(g, v);
  else
    o->gch.marked = o->gch.marked & 0xF8 | g->gc.currentwhite & 3;
}

/*
==============
lj_gc_barrieruv
==============
*/
void lj_gc_barrieruv(global_State *g, TValue *tv)
{
  if ( (unsigned __int8)(g->gc.state - 1) <= 1u )
  {
    if ( (unsigned int)(tv->it64 >> 47) + 4 <= 0xFFFFFFF6 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 774, "((((uint32_t)((tv)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
        __debugbreak();
    }
    gc_mark(g, (GCobj *)(tv->u64 & 0x7FFFFFFFFFFFi64));
  }
  else
  {
    LOBYTE(tv[-1].n) = LOBYTE(tv[-1].n) & 0xF8 | g->gc.currentwhite & 3;
  }
}

/*
==============
lj_gc_closeuv
==============
*/
void lj_gc_closeuv(global_State *g, GCupval *uv)
{
  $3BEA345F7A47E2AE1BBEBC999B009DAE *v2; 
  unsigned __int64 gcptr64; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int8 marked; 
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  GCobj *v12; 
  unsigned __int8 v13; 
  unsigned __int8 v14; 
  unsigned __int8 state; 

  v2 = &uv->16;
  gcptr64 = g->mainthref.gcptr64;
  v6 = *(_QWORD *)uv->v.ptr64;
  v2->tv.u64 = v6;
  v7 = v6 >> 47;
  if ( (unsigned int)(v6 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v8 = v6 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(*(_QWORD *)(gcptr64 + 16) + 64i64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  uv->v.ptr64 = (unsigned __int64)v2;
  uv->closed = 1;
  uv->nextgc.gcptr64 = g->gc.root.gcptr64;
  g->gc.root.gcptr64 = (unsigned __int64)uv;
  marked = uv->marked;
  if ( (marked & 7) == 0 )
  {
    if ( (unsigned __int8)(g->gc.state - 1) <= 1u )
    {
      uv->marked = marked | 4;
      if ( (unsigned int)(v2->tv.it64 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((v2->tv.u64 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
      {
        v11 = uv->marked;
        v12 = (GCobj *)(v2->tv.u64 & 0x7FFFFFFFFFFFi64);
        if ( (v11 & 4) == 0 || (v13 = v12->gch.marked, (v13 & 3) == 0) || (v14 = ~g->gc.currentwhite, (v14 & v13 & 3) != 0) || (v14 & v11 & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 758, "((o)->gch.marked & 0x04) && ((v)->gch.marked & (0x01 | 0x02)) && !((v)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
            __debugbreak();
        }
        state = g->gc.state;
        if ( (state == 5 || !state) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 759, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
          __debugbreak();
        if ( uv->gct == 11 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 760, "o->gch.gct != ~(~11u)") )
          __debugbreak();
        if ( (unsigned __int8)(g->gc.state - 1) <= 1u )
          gc_mark(g, v12);
        else
          uv->marked = uv->marked & 0xF8 | g->gc.currentwhite & 3;
      }
    }
    else
    {
      uv->marked = marked & 0xF8 | g->gc.currentwhite & 3;
      v10 = g->gc.state;
      if ( v10 == 5 || !v10 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 797, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
          __debugbreak();
      }
    }
  }
}

/*
==============
lj_mem_realloc
==============
*/
void *lj_mem_realloc(lua_State *L, void *p, unsigned __int64 osz, unsigned __int64 nsz)
{
  unsigned __int64 ptr64; 
  int v5; 
  void *v10; 
  void *result; 

  ptr64 = L->glref.ptr64;
  v5 = 0;
  if ( (osz == 0) != (p == NULL) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 817, "(osz == 0) == (p == ((void *)0))") )
    __debugbreak();
  v10 = (void *)(*(__int64 (__fastcall **)(_QWORD, void *, unsigned __int64, unsigned __int64))(ptr64 + 16))(*(_QWORD *)(ptr64 + 24), p, osz, nsz);
  if ( !v10 && nsz )
    j_lj_err_mem(L);
  LOBYTE(v5) = nsz == 0;
  if ( v5 != (v10 == NULL) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 821, "(nsz == 0) == (p == ((void *)0))") )
    __debugbreak();
  if ( (unsigned __int64)v10 >= 0x800000000000i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 822, "(1 ? (((uint64_t)(uintptr_t)((p)) >> 47) == 0) : 1 ? ((uintptr_t)((p)) == (uint32_t)(uintptr_t)((p))) :1)") )
    __debugbreak();
  result = v10;
  *(_QWORD *)(ptr64 + 48) += nsz - osz;
  return result;
}

/*
==============
lj_mem_newgco
==============
*/
unsigned __int64 lj_mem_newgco(lua_State *L, unsigned __int64 size)
{
  unsigned __int64 ptr64; 
  unsigned __int64 v5; 
  __int64 v6; 

  ptr64 = L->glref.ptr64;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(ptr64 + 16))(*(_QWORD *)(ptr64 + 24), 0i64, 0i64, size);
  if ( !v5 )
    j_lj_err_mem(L);
  if ( v5 >= 0x800000000000i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 834, "(1 ? (((uint64_t)(uintptr_t)((o)) >> 47) == 0) : 1 ? ((uintptr_t)((o)) == (uint32_t)(uintptr_t)((o))) :1)") )
    __debugbreak();
  v6 = *(_QWORD *)(ptr64 + 72);
  *(_QWORD *)(ptr64 + 48) += size;
  *(_QWORD *)v5 = v6;
  LOBYTE(v6) = *(_BYTE *)(ptr64 + 64) & 3;
  *(_QWORD *)(ptr64 + 72) = v5;
  *(_BYTE *)(v5 + 8) = v6;
  return v5;
}

/*
==============
lj_mem_grow
==============
*/
void *lj_mem_grow(lua_State *L, void *p, unsigned int *szp, unsigned int lim, unsigned int esz)
{
  unsigned __int64 ptr64; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  void *v14; 
  void *result; 

  ptr64 = L->glref.ptr64;
  v9 = 2 * *szp;
  if ( v9 < 8 )
    v9 = 8;
  if ( v9 > lim )
    v9 = lim;
  v10 = esz * *szp;
  v11 = 0;
  v12 = esz * v9;
  v13 = v10;
  if ( (v10 == 0) != (p == NULL) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 817, "(osz == 0) == (p == ((void *)0))") )
    __debugbreak();
  v14 = (void *)(*(__int64 (__fastcall **)(_QWORD, void *, __int64, __int64))(ptr64 + 16))(*(_QWORD *)(ptr64 + 24), p, v13, v12);
  if ( !v14 && esz * v9 )
    j_lj_err_mem(L);
  LOBYTE(v11) = v12 == 0;
  if ( v11 != (v14 == NULL) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 821, "(nsz == 0) == (p == ((void *)0))") )
    __debugbreak();
  if ( (unsigned __int64)v14 >= 0x800000000000i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 822, "(1 ? (((uint64_t)(uintptr_t)((p)) >> 47) == 0) : 1 ? ((uintptr_t)((p)) == (uint32_t)(uintptr_t)((p))) :1)") )
    __debugbreak();
  *(_QWORD *)(ptr64 + 48) += v12 - v13;
  result = v14;
  *szp = v9;
  return result;
}

/*
==============
atomic
==============
*/
void atomic(global_State *g, lua_State *L)
{
  unsigned __int64 gcptr64; 
  GCupval *i; 
  __int64 v6; 
  __int64 *v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int8 currentwhite; 
  unsigned __int64 v12; 

  gcptr64 = g->uvhead.next.gcptr64;
  for ( i = &g->uvhead; (GCupval *)gcptr64 != i; gcptr64 = *(_QWORD *)(gcptr64 + 24) )
  {
    if ( (*(_QWORD *)(*(_QWORD *)(gcptr64 + 24) + 16i64) != gcptr64 || *(_QWORD *)(*(_QWORD *)(gcptr64 + 16) + 24i64) != gcptr64) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 105, "(&((GCobj *)(((&((GCobj *)((uv)->next).gcptr64)->uv))->prev).gcptr64)->uv) == uv && (&((GCobj *)(((&((GCobj *)((uv)->prev).gcptr64)->uv))->next).gcptr64)->uv) == uv") )
      __debugbreak();
    if ( (*(_BYTE *)(gcptr64 + 8) & 7) == 0 )
    {
      v6 = **(__int64 **)(gcptr64 + 32) >> 47;
      if ( (unsigned int)(v6 + 4) > 0xFFFFFFF6 && ~(_DWORD)v6 != *(unsigned __int8 *)((**(_QWORD **)(gcptr64 + 32) & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 107, "!((((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) == ((GCobj *)(((((((TValue *)(void *)((uv)->v).ptr64)))->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
        __debugbreak();
      v7 = *(__int64 **)(gcptr64 + 32);
      if ( (unsigned int)(*v7 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((*v7 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
      {
        if ( (unsigned int)(*v7 >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 107, "((((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
          __debugbreak();
        gc_mark(g, (GCobj *)(**(_QWORD **)(gcptr64 + 32) & 0x7FFFFFFFFFFFi64));
      }
    }
  }
  gc_propagate_gray(g);
  g->gc.gray.gcptr64 = g->gc.weak.gcptr64;
  v8 = g->mainthref.gcptr64;
  g->gc.weak.gcptr64 = 0i64;
  if ( (*(_BYTE *)(v8 + 8) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 580, "!((((GCobj *)((&((GCobj *)(g->mainthref).gcptr64)->th))))->gch.marked & (0x01 | 0x02))") )
    __debugbreak();
  if ( (L->marked & 3) != 0 )
    gc_mark(g, (GCobj *)L);
  gc_mark_gcroot(g);
  gc_propagate_gray(g);
  g->gc.gray.gcptr64 = g->gc.grayagain.gcptr64;
  g->gc.grayagain.gcptr64 = 0i64;
  gc_propagate_gray(g);
  v9 = j_lj_gc_separateudata(g, 0);
  gc_mark_mmudata(g);
  v10 = gc_propagate_gray(g) + v9;
  gc_clearweak((GCobj *)g->gc.weak.gcptr64);
  j_lj_buf_shrink(L, &g->tmpbuf);
  g->gc.currentwhite ^= 3u;
  currentwhite = g->gc.currentwhite;
  g->gc.sweep.ptr64 = (unsigned __int64)&g->gc.root;
  v12 = g->gc.total - v10;
  g->strempty.marked = currentwhite;
  g->gc.estimate = v12;
}

/*
==============
gc_clearweak
==============
*/
void gc_clearweak(GCobj *o)
{
  GCobj *v1; 
  unsigned int sizekgc; 
  __int64 v3; 
  __int64 v4; 
  unsigned __int64 gcptr64; 
  __int64 v6; 
  char v7; 
  unsigned int sizekn; 
  TValue *top; 
  __int64 v10; 
  __int64 u64; 
  __int64 v12; 
  char v13; 
  __int64 v14; 
  __int64 v15; 
  char v16; 

  if ( o )
  {
    v1 = o;
    while ( 1 )
    {
      if ( v1->gch.gct != 11 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 432, "(o)->gch.gct == ~(~11u)") )
        __debugbreak();
      if ( (v1->gch.marked & 0x18) == 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 433, "(t->marked & (0x08 | 0x10))") )
        __debugbreak();
      if ( (v1->gch.marked & 0x10) != 0 )
      {
        sizekgc = v1->pt.sizekgc;
        if ( sizekgc )
        {
          v3 = 0i64;
          v4 = sizekgc;
          do
          {
            gcptr64 = v1->gch.env.gcptr64;
            v6 = *(__int64 *)(gcptr64 + v3) >> 47;
            if ( (unsigned int)(v6 + 4) > 0xFFFFFFF6 )
            {
              if ( (_DWORD)v6 == -5 )
              {
                *(_BYTE *)((*(_QWORD *)(gcptr64 + v3) & 0x7FFFFFFFFFFFi64) + 8) &= 0xFCu;
              }
              else
              {
                v7 = *(_BYTE *)((*(_QWORD *)(gcptr64 + v3) & 0x7FFFFFFFFFFFi64) + 8);
                if ( (v7 & 3) != 0 || (_DWORD)v6 == -13 && (v7 & 8) != 0 )
                  *(_QWORD *)(gcptr64 + v3) = -1i64;
              }
            }
            v3 += 8i64;
            --v4;
          }
          while ( v4 );
        }
      }
      sizekn = v1->pt.sizekn;
      if ( sizekn )
        break;
LABEL_35:
      v1 = (GCobj *)v1->gch.gclist.gcptr64;
      if ( !v1 )
        return;
    }
    top = v1->th.top;
    v10 = sizekn + 1;
    while ( 1 )
    {
      u64 = top->u64;
      if ( top->u64 != -1i64 )
      {
        v12 = top[1].it64 >> 47;
        if ( (unsigned int)(v12 + 4) > 0xFFFFFFF6 )
        {
          v13 = *(_BYTE *)((top[1].u64 & 0x7FFFFFFFFFFFi64) + 8);
          if ( (_DWORD)v12 == -5 )
          {
            *(_BYTE *)((top[1].u64 & 0x7FFFFFFFFFFFi64) + 8) = v13 & 0xFC;
            u64 = top->u64;
          }
          else if ( (v13 & 3) != 0 )
          {
            goto LABEL_33;
          }
        }
        v14 = u64 >> 47;
        if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
        {
          v15 = u64 & 0x7FFFFFFFFFFFi64;
          if ( (_DWORD)v14 != -5 )
          {
            v16 = *(_BYTE *)(v15 + 8);
            if ( (v16 & 3) == 0 && ((_DWORD)v14 != -13 || (v16 & 8) == 0) )
              goto LABEL_34;
LABEL_33:
            top->u64 = -1i64;
            goto LABEL_34;
          }
          *(_BYTE *)(v15 + 8) &= 0xFCu;
        }
      }
LABEL_34:
      top += 3;
      if ( !--v10 )
        goto LABEL_35;
    }
  }
}

/*
==============
gc_finalize
==============
*/
void gc_finalize(lua_State *L)
{
  unsigned __int64 ptr64; 
  __int64 v3; 
  _QWORD *v4; 
  bool v5; 
  const TValue *v6; 
  char v7; 
  char v8; 
  __int64 v9; 
  __int64 u64; 
  TValue *top; 
  __int64 v12; 
  __int64 v13; 
  signed __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 

  ptr64 = L->glref.ptr64;
  v3 = **(_QWORD **)(ptr64 + 112);
  if ( *(_QWORD *)(ptr64 + 368) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 488, "(((TValue *)(void *)(g->jit_base).ptr64)) == ((void *)0)") )
    __debugbreak();
  v4 = *(_QWORD **)(ptr64 + 112);
  if ( (_QWORD *)v3 == v4 )
    *(_QWORD *)(ptr64 + 112) = 0i64;
  else
    *v4 = *(_QWORD *)v3;
  *(_QWORD *)v3 = **(_QWORD **)(ptr64 + 216);
  **(_QWORD **)(ptr64 + 216) = v3;
  v5 = *(_BYTE *)(v3 + 9) == 12;
  *(_BYTE *)(v3 + 8) = *(_BYTE *)(v3 + 8) & 0xF8 | *(_BYTE *)(ptr64 + 64) & 3;
  if ( !v5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 519, "(o)->gch.gct == ~(~12u)") )
    __debugbreak();
  if ( *(_QWORD *)(v3 + 32) )
  {
    if ( *(_BYTE *)(v3 + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 519, "(o)->gch.gct == ~(~12u)") )
      __debugbreak();
    if ( (*(_BYTE *)(*(_QWORD *)(v3 + 32) + 10i64) & 4) == 0 )
    {
      if ( *(_BYTE *)(v3 + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 519, "(o)->gch.gct == ~(~12u)") )
        __debugbreak();
      v6 = j_lj_meta_cache(*(GCtab **)(v3 + 32), MM_gc, *(GCstr **)(ptr64 + 400));
      if ( v6 )
      {
        v7 = *(_BYTE *)(ptr64 + 209);
        *(_BYTE *)(ptr64 + 209) = v7 | 0x50;
        v8 = v7 & 0xF0;
        v9 = *(_QWORD *)(ptr64 + 56);
        *(_QWORD *)(ptr64 + 56) = 0x800000000000i64;
        u64 = v6->u64;
        top = L->top;
        v12 = v6->it64 >> 47;
        top->u64 = v6->u64;
        if ( (unsigned int)(v12 + 4) > 0xFFFFFFF6 )
        {
          v13 = u64 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v12 != *(unsigned __int8 *)(v13 + 9) || (*(_BYTE *)(v13 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
        top[1].u64 = -1i64;
        v14 = v3 | ((unsigned __int64)~*(unsigned __int8 *)(v3 + 9) << 47);
        top[2].u64 = v14;
        v15 = v14 >> 47;
        if ( (unsigned int)(v14 >> 47) + 4 > 0xFFFFFFF6 )
        {
          v16 = v14 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v15 != *(unsigned __int8 *)(v16 + 9) || (*(_BYTE *)(v16 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
        L->top = top + 3;
        v17 = j_lj_vm_pcall(L, &top[2], 1i64, -1i64);
        *(_BYTE *)(ptr64 + 209) &= 0xFu;
        *(_BYTE *)(ptr64 + 209) |= v8;
        *(_QWORD *)(ptr64 + 56) = v9;
        if ( v17 )
          j_lj_err_throw(L, v17);
      }
    }
  }
}

/*
==============
gc_mark
==============
*/
void gc_mark(global_State *g, GCobj *o)
{
  unsigned __int8 marked; 
  unsigned __int8 gct; 
  GCobj *gcptr64; 
  __int64 v7; 
  __int64 *v8; 

  while ( 1 )
  {
    marked = o->gch.marked;
    gct = o->gch.gct;
    if ( ((marked & 3) == 0 || (marked & (unsigned __int8)~g->gc.currentwhite & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 58, "((o)->gch.marked & (0x01 | 0x02)) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
      __debugbreak();
    o->gch.marked &= 0xFCu;
    if ( gct != 12 )
      break;
    if ( o->gch.gct != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 61, "(o)->gch.gct == ~(~12u)") )
      __debugbreak();
    gcptr64 = (GCobj *)o->gch.metatable.gcptr64;
    o->gch.marked |= 4u;
    if ( gcptr64 && (gcptr64->gch.marked & 3) != 0 )
      gc_mark(g, gcptr64);
    if ( o->gch.gct != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 64, "(o)->gch.gct == ~(~12u)") )
      __debugbreak();
    if ( (*(_BYTE *)(o->gch.env.gcptr64 + 8) & 3) == 0 )
      return;
    if ( o->gch.gct != 12 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 64, "(o)->gch.gct == ~(~12u)") )
        __debugbreak();
    }
    o = (GCobj *)o->gch.env.gcptr64;
  }
  if ( gct == 5 )
  {
    if ( o->gch.gct != 5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 66, "(o)->gch.gct == ~(~5u)") )
      __debugbreak();
    v7 = *(__int64 *)o->gch.metatable.gcptr64 >> 47;
    if ( (unsigned int)(v7 + 4) > 0xFFFFFFF6 && ~(_DWORD)v7 != *(unsigned __int8 *)((*(_QWORD *)o->gch.metatable.gcptr64 & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 67, "!((((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) == ((GCobj *)(((((((TValue *)(void *)((uv)->v).ptr64)))->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
      __debugbreak();
    v8 = (__int64 *)o->gch.metatable.gcptr64;
    if ( (unsigned int)(*v8 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((*v8 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
    {
      if ( (unsigned int)(*v8 >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 67, "((((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
        __debugbreak();
      gc_mark(g, (GCobj *)(*(_QWORD *)o->gch.metatable.gcptr64 & 0x7FFFFFFFFFFFi64));
    }
    if ( o->gch.unused1 )
      o->gch.marked |= 4u;
  }
  else if ( gct != 4 && gct != 10 )
  {
    if ( (unsigned __int8)(gct - 6) > 3u && gct != 11 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 72, "gct == ~(~8u) || gct == ~(~11u) || gct == ~(~6u) || gct == ~(~7u) || gct == ~(~9u)") )
      __debugbreak();
    o->gch.gclist.gcptr64 = g->gc.gray.gcptr64;
    g->gc.gray.gcptr64 = (unsigned __int64)o;
  }
}

/*
==============
gc_mark_gcroot
==============
*/
void gc_mark_gcroot(global_State *g)
{
  GCRef *gcroot; 
  __int64 v3; 
  unsigned __int64 gcptr64; 
  unsigned __int8 v5; 
  char v6; 
  GCobj *v7; 
  __int64 v8; 

  gcroot = g->gcroot;
  v3 = 36i64;
  do
  {
    gcptr64 = gcroot->gcptr64;
    if ( gcroot->gcptr64 )
    {
      v5 = *(_BYTE *)(gcptr64 + 8);
      if ( (v5 & 3) != 0 )
      {
        v6 = *(_BYTE *)(gcptr64 + 9);
        if ( (v5 & (unsigned __int8)~g->gc.currentwhite & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 58, "((o)->gch.marked & (0x01 | 0x02)) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
          __debugbreak();
        *(_BYTE *)(gcptr64 + 8) &= 0xFCu;
        if ( v6 == 12 )
        {
          if ( *(_BYTE *)(gcptr64 + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 61, "(o)->gch.gct == ~(~12u)") )
            __debugbreak();
          v7 = *(GCobj **)(gcptr64 + 32);
          *(_BYTE *)(gcptr64 + 8) |= 4u;
          if ( v7 && (v7->gch.marked & 3) != 0 )
            gc_mark(g, v7);
          if ( *(_BYTE *)(gcptr64 + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 64, "(o)->gch.gct == ~(~12u)") )
            __debugbreak();
          if ( (*(_BYTE *)(*(_QWORD *)(gcptr64 + 16) + 8i64) & 3) != 0 )
          {
            if ( *(_BYTE *)(gcptr64 + 9) != 12 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 64, "(o)->gch.gct == ~(~12u)") )
                __debugbreak();
            }
            gc_mark(g, *(GCobj **)(gcptr64 + 16));
          }
        }
        else if ( v6 == 5 )
        {
          if ( *(_BYTE *)(gcptr64 + 9) != 5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 66, "(o)->gch.gct == ~(~5u)") )
            __debugbreak();
          v8 = **(__int64 **)(gcptr64 + 32) >> 47;
          if ( (unsigned int)(v8 + 4) > 0xFFFFFFF6 && ~(_DWORD)v8 != *(unsigned __int8 *)((**(_QWORD **)(gcptr64 + 32) & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 67, "!((((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) == ((GCobj *)(((((((TValue *)(void *)((uv)->v).ptr64)))->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
            __debugbreak();
          if ( (unsigned int)(**(__int64 **)(gcptr64 + 32) >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((**(_QWORD **)(gcptr64 + 32) & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
            gc_mark(g, (GCobj *)(**(_QWORD **)(gcptr64 + 32) & 0x7FFFFFFFFFFFi64));
          if ( *(_BYTE *)(gcptr64 + 10) )
            *(_BYTE *)(gcptr64 + 8) |= 4u;
        }
        else if ( v6 != 4 && v6 != 10 )
        {
          if ( (unsigned __int8)(v6 - 6) > 3u && v6 != 11 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 72, "gct == ~(~8u) || gct == ~(~11u) || gct == ~(~6u) || gct == ~(~7u) || gct == ~(~9u)") )
            __debugbreak();
          *(_QWORD *)(gcptr64 + 24) = g->gc.gray.gcptr64;
          g->gc.gray.gcptr64 = gcptr64;
        }
      }
    }
    ++gcroot;
    --v3;
  }
  while ( v3 );
}

/*
==============
gc_mark_mmudata
==============
*/
void gc_mark_mmudata(global_State *g)
{
  unsigned __int64 gcptr64; 
  unsigned __int64 v3; 
  char v4; 
  unsigned __int8 v5; 
  GCobj *v6; 
  __int64 v7; 
  __int64 *v8; 

  gcptr64 = g->gc.mmudata.gcptr64;
  v3 = gcptr64;
  if ( gcptr64 )
  {
    do
    {
      v3 = *(_QWORD *)v3;
      v4 = *(_BYTE *)(v3 + 9);
      v5 = g->gc.currentwhite & 3 | *(_BYTE *)(v3 + 8) & 0xF8;
      *(_BYTE *)(v3 + 8) = v5;
      if ( ((v5 & 3) == 0 || (v5 & (unsigned __int8)~g->gc.currentwhite & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 58, "((o)->gch.marked & (0x01 | 0x02)) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
        __debugbreak();
      *(_BYTE *)(v3 + 8) &= 0xFCu;
      if ( v4 == 12 )
      {
        if ( *(_BYTE *)(v3 + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 61, "(o)->gch.gct == ~(~12u)") )
          __debugbreak();
        v6 = *(GCobj **)(v3 + 32);
        *(_BYTE *)(v3 + 8) |= 4u;
        if ( v6 && (v6->gch.marked & 3) != 0 )
          gc_mark(g, v6);
        if ( *(_BYTE *)(v3 + 9) != 12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 64, "(o)->gch.gct == ~(~12u)") )
          __debugbreak();
        if ( (*(_BYTE *)(*(_QWORD *)(v3 + 16) + 8i64) & 3) != 0 )
        {
          if ( *(_BYTE *)(v3 + 9) != 12 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 64, "(o)->gch.gct == ~(~12u)") )
              __debugbreak();
          }
          gc_mark(g, *(GCobj **)(v3 + 16));
        }
      }
      else if ( v4 == 5 )
      {
        if ( *(_BYTE *)(v3 + 9) != 5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 66, "(o)->gch.gct == ~(~5u)") )
          __debugbreak();
        v7 = **(__int64 **)(v3 + 32) >> 47;
        if ( (unsigned int)(v7 + 4) > 0xFFFFFFF6 && ~(_DWORD)v7 != *(unsigned __int8 *)((**(_QWORD **)(v3 + 32) & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 67, "!((((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) == ((GCobj *)(((((((TValue *)(void *)((uv)->v).ptr64)))->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
          __debugbreak();
        v8 = *(__int64 **)(v3 + 32);
        if ( (unsigned int)(*v8 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((*v8 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
        {
          if ( (unsigned int)(*v8 >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 67, "((((uint32_t)(((((TValue *)(void *)((uv)->v).ptr64)))->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
            __debugbreak();
          gc_mark(g, (GCobj *)(**(_QWORD **)(v3 + 32) & 0x7FFFFFFFFFFFi64));
        }
        if ( *(_BYTE *)(v3 + 10) )
          *(_BYTE *)(v3 + 8) |= 4u;
      }
      else if ( v4 != 4 && v4 != 10 )
      {
        if ( (unsigned __int8)(v4 - 6) > 3u && v4 != 11 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 72, "gct == ~(~8u) || gct == ~(~11u) || gct == ~(~6u) || gct == ~(~7u) || gct == ~(~9u)") )
          __debugbreak();
        *(_QWORD *)(v3 + 24) = g->gc.gray.gcptr64;
        g->gc.gray.gcptr64 = v3;
      }
    }
    while ( v3 != gcptr64 );
  }
}

/*
==============
gc_onestep
==============
*/
unsigned __int64 gc_onestep(lua_State *L)
{
  unsigned __int64 ptr64; 
  __int64 v3; 
  GCobj *v4; 
  __int64 v5; 
  unsigned __int64 result; 
  __int64 v7; 
  unsigned __int64 v8; 
  GCRef *v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  unsigned __int64 v12; 

  ptr64 = L->glref.ptr64;
  switch ( *(_BYTE *)(ptr64 + 65) )
  {
    case 0:
      *(_QWORD *)(ptr64 + 88) = 0i64;
      *(_QWORD *)(ptr64 + 96) = 0i64;
      *(_QWORD *)(ptr64 + 104) = 0i64;
      v3 = *(_QWORD *)(ptr64 + 216);
      if ( (*(_BYTE *)(v3 + 8) & 3) != 0 )
      {
        gc_mark((global_State *)ptr64, *(GCobj **)(ptr64 + 216));
        v3 = *(_QWORD *)(ptr64 + 216);
      }
      v4 = *(GCobj **)(v3 + 72);
      if ( (v4->gch.marked & 3) != 0 )
        gc_mark((global_State *)ptr64, v4);
      v5 = *(_QWORD *)(ptr64 + 224);
      if ( (unsigned int)(v5 >> 47) + 4 > 0xFFFFFFF6 && ~(unsigned int)(v5 >> 47) != *(unsigned __int8 *)((v5 & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 95, "!((((uint32_t)((&g->registrytv)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)((&g->registrytv)->it64 >> 47)) == ((GCobj *)((((&g->registrytv)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
        __debugbreak();
      if ( (unsigned int)(*(__int64 *)(ptr64 + 224) >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((*(_QWORD *)(ptr64 + 224) & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
      {
        if ( (unsigned int)(*(__int64 *)(ptr64 + 224) >> 47) + 4 <= 0xFFFFFFF6 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 95, "((((uint32_t)((&g->registrytv)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
            __debugbreak();
        }
        gc_mark((global_State *)ptr64, (GCobj *)(*(_QWORD *)(ptr64 + 224) & 0x7FFFFFFFFFFFi64));
      }
      gc_mark_gcroot((global_State *)ptr64);
      result = 0i64;
      *(_BYTE *)(ptr64 + 65) = 1;
      break;
    case 1:
      if ( *(_QWORD *)(ptr64 + 88) )
      {
        result = propagatemark((global_State *)ptr64);
      }
      else
      {
        *(_BYTE *)(ptr64 + 65) = 2;
        result = 0i64;
      }
      break;
    case 2:
      if ( *(_QWORD *)(ptr64 + 368) )
        goto LABEL_41;
      atomic((global_State *)ptr64, L);
      result = 0i64;
      *(_BYTE *)(ptr64 + 65) = 3;
      *(_DWORD *)(ptr64 + 68) = 0;
      break;
    case 3:
      v7 = *(unsigned int *)(ptr64 + 68);
      v8 = *(_QWORD *)(ptr64 + 48);
      v9 = (GCRef *)(*(_QWORD *)ptr64 + 8 * v7);
      *(_DWORD *)(ptr64 + 68) = v7 + 1;
      gc_sweep((global_State *)ptr64, v9, 0xFFFFFFFF);
      if ( *(_DWORD *)(ptr64 + 68) > *(_DWORD *)(ptr64 + 8) )
        *(_BYTE *)(ptr64 + 65) = 4;
      if ( v8 < *(_QWORD *)(ptr64 + 48) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 631, "old >= g->gc.total") )
        __debugbreak();
      *(_QWORD *)(ptr64 + 128) += *(_QWORD *)(ptr64 + 48) - v8;
      result = 10i64;
      break;
    case 4:
      v10 = *(_QWORD *)(ptr64 + 48);
      *(_QWORD *)(ptr64 + 80) = gc_sweep((global_State *)ptr64, *(GCRef **)(ptr64 + 80), 0x28u);
      if ( v10 < *(_QWORD *)(ptr64 + 48) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 638, "old >= g->gc.total") )
        __debugbreak();
      *(_QWORD *)(ptr64 + 128) += *(_QWORD *)(ptr64 + 48) - v10;
      if ( !**(_QWORD **)(ptr64 + 80) )
      {
        v11 = *(_DWORD *)(ptr64 + 8);
        if ( *(_DWORD *)(ptr64 + 12) <= v11 >> 2 && v11 > 0x1FF )
          j_lj_str_resize(L, v11 >> 1);
        if ( *(_QWORD *)(ptr64 + 112) )
        {
          *(_BYTE *)(ptr64 + 65) = 5;
          return 400i64;
        }
        *(_BYTE *)(ptr64 + 65) = 0;
        *(_QWORD *)(ptr64 + 120) = 0i64;
      }
      result = 400i64;
      break;
    case 5:
      if ( *(_QWORD *)(ptr64 + 112) )
      {
        if ( *(_QWORD *)(ptr64 + 368) )
        {
LABEL_41:
          result = 0x800000000000i64;
        }
        else
        {
          gc_finalize(L);
          v12 = *(_QWORD *)(ptr64 + 128);
          if ( v12 > 0x64 )
            *(_QWORD *)(ptr64 + 128) = v12 - 100;
          result = 100i64;
        }
      }
      else
      {
        result = 0i64;
        *(_BYTE *)(ptr64 + 65) = 0;
        *(_QWORD *)(ptr64 + 120) = 0i64;
      }
      break;
    default:
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 671, "0") )
        __debugbreak();
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
gc_propagate_gray
==============
*/
__int64 gc_propagate_gray(global_State *g)
{
  unsigned __int64 gcptr64; 
  __int64 i; 
  char v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  gcptr64 = g->gc.gray.gcptr64;
  for ( i = 0i64; gcptr64; i += v6 )
  {
    v4 = *(_BYTE *)(gcptr64 + 9);
    if ( (*(_BYTE *)(gcptr64 + 8) & 7) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 312, "(!((o)->gch.marked & (0x04|(0x01 | 0x02))))") )
      __debugbreak();
    *(_BYTE *)(gcptr64 + 8) |= 4u;
    g->gc.gray.gcptr64 = *(_QWORD *)(gcptr64 + 24);
    switch ( v4 )
    {
      case 11:
        if ( *(_BYTE *)(gcptr64 + 9) != 11 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 316, "(o)->gch.gct == ~(~11u)") )
          __debugbreak();
        if ( gc_traverse_tab(g, (GCtab *)gcptr64) > 0 )
          *(_BYTE *)(gcptr64 + 8) &= ~4u;
        v5 = *(_DWORD *)(gcptr64 + 52);
        if ( v5 )
          v6 = 24i64 * (unsigned int)(v5 + 1) + 8i64 * *(unsigned int *)(gcptr64 + 48) + 64;
        else
          v6 = 8i64 * *(unsigned int *)(gcptr64 + 48) + 64;
        break;
      case 8:
        if ( *(_BYTE *)(gcptr64 + 9) != 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 322, "(o)->gch.gct == ~(~8u)") )
          __debugbreak();
        gc_traverse_func(g, (GCfunc *)gcptr64);
        v7 = 40i64;
        if ( *(_BYTE *)(gcptr64 + 10) )
          v7 = 48i64;
        v6 = v7 + 8i64 * *(unsigned __int8 *)(gcptr64 + 11);
        break;
      case 7:
        if ( *(_BYTE *)(gcptr64 + 9) != 7 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 327, "(o)->gch.gct == ~(~7u)") )
          __debugbreak();
        *(_BYTE *)(*(_QWORD *)(gcptr64 + 64) + 8i64) &= 0xFCu;
        v8 = -(__int64)*(unsigned int *)(gcptr64 + 48);
        if ( *(_DWORD *)(gcptr64 + 48) )
        {
          do
          {
            if ( v8 < (unsigned __int64)-(__int64)*(unsigned int *)(gcptr64 + 48) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 269, "(uintptr_t)(intptr_t)(i) >= (uintptr_t)-(intptr_t)(pt)->sizekgc") )
              __debugbreak();
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(gcptr64 + 32) + 8 * v8) + 8i64) & 3) != 0 )
            {
              if ( v8 < (unsigned __int64)-(__int64)*(unsigned int *)(gcptr64 + 48) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 269, "(uintptr_t)(intptr_t)(i) >= (uintptr_t)-(intptr_t)(pt)->sizekgc") )
                __debugbreak();
              gc_mark(g, *(GCobj **)(*(_QWORD *)(gcptr64 + 32) + 8 * v8));
            }
            ++v8;
          }
          while ( v8 < 0 );
        }
        v6 = *(unsigned int *)(gcptr64 + 56);
        break;
      case 6:
        if ( *(_BYTE *)(gcptr64 + 9) != 6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 331, "(o)->gch.gct == ~(~6u)") )
          __debugbreak();
        *(_QWORD *)(gcptr64 + 24) = g->gc.grayagain.gcptr64;
        g->gc.grayagain.gcptr64 = gcptr64;
        *(_BYTE *)(gcptr64 + 8) &= ~4u;
        gc_traverse_thread(g, (lua_State *)gcptr64);
        v6 = 8i64 * *(unsigned int *)(gcptr64 + 88) + 96;
        break;
      default:
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 344, "0") )
          __debugbreak();
        v6 = 0i64;
        break;
    }
    gcptr64 = g->gc.gray.gcptr64;
  }
  return i;
}

/*
==============
gc_sweep
==============
*/
GCRef *gc_sweep(global_State *g, GCRef *p, unsigned int lim)
{
  GCobj *gcptr64; 
  int v5; 
  GCRef *p_nextgc; 
  unsigned __int8 marked; 

  gcptr64 = (GCobj *)p->gcptr64;
  v5 = g->gc.currentwhite ^ 3;
  p_nextgc = p;
  if ( !p->gcptr64 )
    return p;
  do
  {
    if ( !lim-- )
      break;
    if ( gcptr64->gch.gct == 6 )
      gc_sweep(g, &gcptr64->th.openupval, 0xFFFFFFFF);
    marked = gcptr64->gch.marked;
    if ( ((marked ^ 3) & v5) != 0 )
    {
      if ( (marked & (unsigned __int8)~g->gc.currentwhite & 3) != 0 && (marked & 0x20) == 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 398, "!((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)) || (o->gch.marked & 0x20)") )
          __debugbreak();
      }
      p_nextgc = &gcptr64->gch.nextgc;
      gcptr64->gch.marked = g->gc.currentwhite & 3 | gcptr64->gch.marked & 0xF8;
    }
    else
    {
      if ( (marked & (unsigned __int8)~g->gc.currentwhite & 3) == 0 && v5 != 64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 402, "((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)) || ow == 0x40") )
        __debugbreak();
      p_nextgc->gcptr64 = (unsigned __int64)gcptr64->gch.nextgc;
      if ( gcptr64 == (GCobj *)g->gc.root.gcptr64 )
        g->gc.root.gcptr64 = gcptr64->gch.nextgc.gcptr64;
      gc_freefunc[(unsigned int)gcptr64->gch.gct - 4](g, gcptr64);
    }
    gcptr64 = (GCobj *)p_nextgc->gcptr64;
  }
  while ( p_nextgc->gcptr64 );
  return p_nextgc;
}

/*
==============
gc_traverse_func
==============
*/
void gc_traverse_func(global_State *g, GCfunc *fn)
{
  GCobj *gcptr64; 
  __int64 j; 
  GCobj *v6; 
  __int64 i; 
  __int64 v8; 

  gcptr64 = (GCobj *)fn->c.env.gcptr64;
  if ( (gcptr64->gch.marked & 3) != 0 )
    gc_mark(g, gcptr64);
  if ( fn->c.ffid )
  {
    for ( i = 0i64; (unsigned int)i < fn->c.nupvalues; i = (unsigned int)(i + 1) )
    {
      v8 = fn->c.upvalue[i].it64 >> 47;
      if ( (unsigned int)(v8 + 4) > 0xFFFFFFF6 && ~(_DWORD)v8 != *(unsigned __int8 *)((fn->c.upvalue[i].u64 & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 222, "!((((uint32_t)((&fn->c.upvalue[i])->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)((&fn->c.upvalue[i])->it64 >> 47)) == ((GCobj *)((((&fn->c.upvalue[i])->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
        __debugbreak();
      if ( (unsigned int)(fn->c.upvalue[i].it64 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((fn->c.upvalue[i].u64 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
        gc_mark(g, (GCobj *)(fn->c.upvalue[i].u64 & 0x7FFFFFFFFFFFi64));
    }
  }
  else
  {
    if ( fn->c.nupvalues > *(_BYTE *)(fn->c.pc.ptr64 - 44) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 215, "fn->l.nupvalues <= (my_lua_assert((((fn)->c.ffid == 0)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_gc.c\", 215, \"((fn)->c.ffid == 0)\", \"((fn)->c.ffid == 0)\"), ((GCproto *)(((char *)(void *)((fn)->l.pc).ptr64)-sizeof(GCproto))))->sizeuv") )
      __debugbreak();
    if ( fn->c.ffid && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 216, "((fn)->c.ffid == 0)") )
      __debugbreak();
    if ( (*(_BYTE *)(fn->c.pc.ptr64 - 96) & 3) != 0 )
    {
      if ( fn->c.ffid && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 216, "((fn)->c.ffid == 0)") )
        __debugbreak();
      gc_mark(g, (GCobj *)(fn->c.pc.ptr64 - 104));
    }
    for ( j = 0i64; (unsigned int)j < fn->c.nupvalues; j = (unsigned int)(j + 1) )
    {
      v6 = (GCobj *)*((_QWORD *)&fn->c.f + j);
      if ( (v6->gch.marked & 3) != 0 )
        gc_mark(g, v6);
    }
  }
}

/*
==============
gc_traverse_tab
==============
*/
__int64 gc_traverse_tab(global_State *g, GCtab *t)
{
  GCtab *gcptr64; 
  __int64 v3; 
  unsigned int v6; 
  const TValue *v7; 
  _BYTE *v8; 
  int v9; 
  unsigned int asize; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int64 ptr64; 
  unsigned int hmask; 
  __int64 *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  gcptr64 = (GCtab *)t->metatable.gcptr64;
  v3 = 0i64;
  v6 = 0;
  if ( gcptr64 )
  {
    if ( (gcptr64->marked & 3) != 0 )
      gc_mark(g, (GCobj *)t->metatable.gcptr64);
    if ( (gcptr64->nomm & 8) == 0 )
    {
      v7 = j_lj_meta_cache(gcptr64, MM_mode, (GCstr *)g->gcroot[3].gcptr64);
      if ( v7 )
      {
        if ( (unsigned int)(v7->it64 >> 47) == -5 )
        {
          v8 = (_BYTE *)((v7->u64 & 0x7FFFFFFFFFFFi64) + 24);
          v9 = *(char *)((v7->u64 & 0x7FFFFFFFFFFFi64) + 0x18);
          if ( *v8 )
          {
            do
            {
              ++v8;
              if ( v9 == 107 )
              {
                v6 |= 8u;
              }
              else if ( v9 == 118 )
              {
                v6 |= 0x10u;
              }
              v9 = (char)*v8;
            }
            while ( *v8 );
            if ( v6 )
            {
              t->marked &= 0xE7u;
              t->marked |= v6;
              t->gclist.gcptr64 = g->gc.weak.gcptr64;
              g->gc.weak.gcptr64 = (unsigned __int64)t;
            }
            if ( v6 == 24 )
              return 1i64;
          }
        }
      }
    }
  }
  if ( (v6 & 0x10) == 0 )
  {
    asize = t->asize;
    if ( asize )
    {
      v12 = asize;
      do
      {
        v13 = *(__int64 *)(v3 + t->array.ptr64) >> 47;
        if ( (unsigned int)(v13 + 4) > 0xFFFFFFF6 && ~(_DWORD)v13 != *(unsigned __int8 *)((*(_QWORD *)(v3 + t->array.ptr64) & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 192, "!((((uint32_t)(((&(((TValue *)(void *)((t)->array).ptr64))[(i)]))->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)(((&(((TValue *)(void *)((t)->array).ptr64))[(i)]))->it64 >> 47)) == ((GCobj *)(((((&(((TValue *)(void *)((t)->array).ptr64))[(i)]))->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
          __debugbreak();
        ptr64 = t->array.ptr64;
        if ( (unsigned int)(*(__int64 *)(v3 + ptr64) >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((*(_QWORD *)(v3 + ptr64) & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
        {
          if ( (unsigned int)(*(__int64 *)(v3 + ptr64) >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 192, "((((uint32_t)(((&(((TValue *)(void *)((t)->array).ptr64))[(i)]))->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
            __debugbreak();
          gc_mark(g, (GCobj *)(*(_QWORD *)(v3 + t->array.ptr64) & 0x7FFFFFFFFFFFi64));
        }
        v3 += 8i64;
        --v12;
      }
      while ( v12 );
    }
  }
  hmask = t->hmask;
  if ( hmask )
  {
    v16 = (__int64 *)t->node.ptr64;
    v17 = hmask + 1;
    do
    {
      if ( *v16 != -1 )
      {
        if ( v16[1] == -1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 200, "!((&n->key)->it64 == -1)") )
          __debugbreak();
        if ( (v6 & 8) == 0 )
        {
          v18 = v16[1] >> 47;
          if ( (unsigned int)(v18 + 4) > 0xFFFFFFF6 && ~(_DWORD)v18 != *(unsigned __int8 *)((v16[1] & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 201, "!((((uint32_t)((&n->key)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)((&n->key)->it64 >> 47)) == ((GCobj *)((((&n->key)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
            __debugbreak();
          if ( (unsigned int)(v16[1] >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((v16[1] & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
          {
            if ( (unsigned int)(v16[1] >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 201, "((((uint32_t)((&n->key)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
              __debugbreak();
            gc_mark(g, (GCobj *)(v16[1] & 0x7FFFFFFFFFFFi64));
          }
        }
        if ( (v6 & 0x10) == 0 )
        {
          v19 = *v16 >> 47;
          if ( (unsigned int)(v19 + 4) > 0xFFFFFFF6 && ~(_DWORD)v19 != *(unsigned __int8 *)((*v16 & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 202, "!((((uint32_t)((&n->val)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)((&n->val)->it64 >> 47)) == ((GCobj *)((((&n->val)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
            __debugbreak();
          if ( (unsigned int)(*v16 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((*v16 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
          {
            if ( (unsigned int)(*v16 >> 47) + 4 <= 0xFFFFFFF6 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 202, "((((uint32_t)((&n->val)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
                __debugbreak();
            }
            gc_mark(g, (GCobj *)(*v16 & 0x7FFFFFFFFFFFi64));
          }
        }
      }
      v16 += 3;
      --v17;
    }
    while ( v17 );
  }
  return v6;
}

/*
==============
gc_traverse_thread
==============
*/
void gc_traverse_thread(global_State *g, lua_State *th)
{
  unsigned __int64 ptr64; 
  TValue *top; 
  __int64 *v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  GCobj *gcptr64; 
  unsigned __int64 v10; 
  TValue *v11; 
  TValue *v12; 
  TValue *v13; 
  unsigned __int64 u64; 
  unsigned __int64 v15; 

  ptr64 = th->stack.ptr64;
  top = th->top;
  v6 = (__int64 *)(ptr64 + 16);
  if ( ptr64 + 16 < (unsigned __int64)top )
  {
    do
    {
      v7 = *v6 >> 47;
      if ( (unsigned int)(v7 + 4) > 0xFFFFFFF6 && ~(_DWORD)v7 != *(unsigned __int8 *)((*v6 & 0x7FFFFFFFFFFFi64) + 9) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 297, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || (~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct)") )
        __debugbreak();
      if ( (unsigned int)(*v6 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((*v6 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
      {
        if ( (unsigned int)(*v6 >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 297, "((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
          __debugbreak();
        gc_mark(g, (GCobj *)(*v6 & 0x7FFFFFFFFFFFi64));
      }
      ++v6;
    }
    while ( v6 < (__int64 *)top );
    ptr64 = th->stack.ptr64;
  }
  if ( g->gc.state == 2 )
  {
    v8 = ptr64 + 8i64 * th->stacksize;
    if ( (unsigned __int64)v6 < v8 )
      memset(v6, 0xFFu, 8 * (((v8 - (unsigned __int64)v6 - 1) >> 3) + 1));
  }
  gcptr64 = (GCobj *)th->env.gcptr64;
  if ( (gcptr64->gch.marked & 3) != 0 )
    gc_mark(g, gcptr64);
  v10 = th->stack.ptr64;
  v11 = th->top - 1;
  v12 = th->base - 1;
  while ( (unsigned __int64)v12 > v10 + 8 )
  {
    v13 = v12;
    if ( !*(_BYTE *)((v12[-1].u64 & 0x7FFFFFFFFFFFi64) + 0xA) )
      v13 = &v12[*(unsigned __int8 *)(*(_QWORD *)((v12[-1].u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 93i64)];
    u64 = v12->u64;
    if ( v13 <= v11 )
      v13 = v11;
    v11 = v13;
    if ( (u64 & 3) != 0 )
      v12 = (TValue *)((char *)v12 - (u64 & 0xFFFFFFFFFFFFFFF8ui64));
    else
      v12 += -2i64 - *(unsigned __int8 *)(u64 - 3);
  }
  v15 = (unsigned __int64)&v11[1];
  if ( v15 > th->maxstack.ptr64 )
    v15 = th->maxstack.ptr64;
  j_lj_state_shrinkstack(th, (__int64)(v15 - v10) >> 3);
}

/*
==============
propagatemark
==============
*/
__int64 propagatemark(global_State *g)
{
  unsigned __int64 gcptr64; 
  char v3; 
  int v4; 
  __int64 v6; 
  __int64 v7; 

  gcptr64 = g->gc.gray.gcptr64;
  v3 = *(_BYTE *)(gcptr64 + 9);
  if ( (*(_BYTE *)(gcptr64 + 8) & 7) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 312, "(!((o)->gch.marked & (0x04|(0x01 | 0x02))))") )
    __debugbreak();
  *(_BYTE *)(gcptr64 + 8) |= 4u;
  g->gc.gray.gcptr64 = *(_QWORD *)(gcptr64 + 24);
  switch ( v3 )
  {
    case 11:
      if ( *(_BYTE *)(gcptr64 + 9) != 11 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 316, "(o)->gch.gct == ~(~11u)") )
        __debugbreak();
      if ( (int)gc_traverse_tab(g, (GCtab *)gcptr64) > 0 )
        *(_BYTE *)(gcptr64 + 8) &= ~4u;
      v4 = *(_DWORD *)(gcptr64 + 52);
      if ( v4 )
        return 24i64 * (unsigned int)(v4 + 1) + 8i64 * *(unsigned int *)(gcptr64 + 48) + 64;
      else
        return 8i64 * *(unsigned int *)(gcptr64 + 48) + 64;
    case 8:
      if ( *(_BYTE *)(gcptr64 + 9) != 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 322, "(o)->gch.gct == ~(~8u)") )
        __debugbreak();
      gc_traverse_func(g, (GCfunc *)gcptr64);
      v6 = 40i64;
      if ( *(_BYTE *)(gcptr64 + 10) )
        v6 = 48i64;
      return v6 + 8i64 * *(unsigned __int8 *)(gcptr64 + 11);
    case 7:
      if ( *(_BYTE *)(gcptr64 + 9) != 7 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 327, "(o)->gch.gct == ~(~7u)") )
        __debugbreak();
      *(_BYTE *)(*(_QWORD *)(gcptr64 + 64) + 8i64) &= 0xFCu;
      v7 = -(__int64)*(unsigned int *)(gcptr64 + 48);
      if ( *(_DWORD *)(gcptr64 + 48) )
      {
        do
        {
          if ( v7 < (unsigned __int64)-(__int64)*(unsigned int *)(gcptr64 + 48) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 269, "(uintptr_t)(intptr_t)(i) >= (uintptr_t)-(intptr_t)(pt)->sizekgc") )
            __debugbreak();
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(gcptr64 + 32) + 8 * v7) + 8i64) & 3) != 0 )
          {
            if ( v7 < (unsigned __int64)-(__int64)*(unsigned int *)(gcptr64 + 48) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 269, "(uintptr_t)(intptr_t)(i) >= (uintptr_t)-(intptr_t)(pt)->sizekgc") )
              __debugbreak();
            gc_mark(g, *(GCobj **)(*(_QWORD *)(gcptr64 + 32) + 8 * v7));
          }
          ++v7;
        }
        while ( v7 < 0 );
      }
      return *(unsigned int *)(gcptr64 + 56);
    case 6:
      if ( *(_BYTE *)(gcptr64 + 9) != 6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 331, "(o)->gch.gct == ~(~6u)") )
        __debugbreak();
      *(_QWORD *)(gcptr64 + 24) = g->gc.grayagain.gcptr64;
      g->gc.grayagain.gcptr64 = gcptr64;
      *(_BYTE *)(gcptr64 + 8) &= ~4u;
      gc_traverse_thread(g, (lua_State *)gcptr64);
      return 8i64 * *(unsigned int *)(gcptr64 + 88) + 96;
    default:
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.c", 344, "0") )
        __debugbreak();
      return 0i64;
  }
}

