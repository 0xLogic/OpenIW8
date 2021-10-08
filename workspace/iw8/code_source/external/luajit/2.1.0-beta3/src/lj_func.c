/*
==============
lj_func_freeproto
==============
*/
void lj_func_freeproto(global_State *g, GCproto *pt)
{
  unsigned __int64 sizept; 

  sizept = pt->sizept;
  g->gc.total -= sizept;
  g->allocf(g->allocd, pt, sizept, 0i64);
}

/*
==============
lj_func_closeuv
==============
*/
void lj_func_closeuv(lua_State *L, TValue *level)
{
  unsigned __int64 gcptr64; 
  unsigned __int64 i; 
  GCupval *v6; 
  unsigned __int64 ptr64; 

  gcptr64 = L->openupval.gcptr64;
  for ( i = L->glref.ptr64; gcptr64; gcptr64 = L->openupval.gcptr64 )
  {
    if ( *(_BYTE *)(gcptr64 + 9) != 5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_func.c", 85, "(((GCobj *)(L->openupval).gcptr64))->gch.gct == ~(~5u)") )
      __debugbreak();
    v6 = (GCupval *)L->openupval.gcptr64;
    ptr64 = v6->v.ptr64;
    if ( ptr64 < (unsigned __int64)level )
      break;
    if ( ((v6->marked & 4) != 0 || v6->closed || ($3BEA345F7A47E2AE1BBEBC999B009DAE *)ptr64 == &v6->16) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_func.c", 87, "!((o)->gch.marked & 0x04) && !uv->closed && (((TValue *)(void *)((uv)->v).ptr64)) != &uv->tv") )
      __debugbreak();
    L->openupval.gcptr64 = v6->nextgc.gcptr64;
    if ( (v6->marked & (unsigned __int8)~*(_BYTE *)(i + 64) & 3) != 0 )
    {
      if ( !v6->closed )
      {
        if ( *(GCupval **)(v6->next.gcptr64 + 16) != v6 || *(GCupval **)(v6->tv.u64 + 24) != v6 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_func.c", 29, "(&((GCobj *)(((&((GCobj *)((uv)->next).gcptr64)->uv))->prev).gcptr64)->uv) == uv && (&((GCobj *)(((&((GCobj *)((uv)->prev).gcptr64)->uv))->next).gcptr64)->uv) == uv") )
            __debugbreak();
        }
        *(_QWORD *)(v6->next.gcptr64 + 16) = v6->tv.u64;
        *(_QWORD *)(v6->tv.u64 + 24) = v6->next.gcptr64;
      }
      *(_QWORD *)(i + 48) -= 48i64;
      (*(void (__fastcall **)(_QWORD, GCupval *, __int64))(i + 16))(*(_QWORD *)(i + 24), v6, 48i64);
    }
    else
    {
      if ( (*(GCupval **)(v6->next.gcptr64 + 16) != v6 || *(GCupval **)(v6->tv.u64 + 24) != v6) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_func.c", 29, "(&((GCobj *)(((&((GCobj *)((uv)->next).gcptr64)->uv))->prev).gcptr64)->uv) == uv && (&((GCobj *)(((&((GCobj *)((uv)->prev).gcptr64)->uv))->next).gcptr64)->uv) == uv") )
        __debugbreak();
      *(_QWORD *)(v6->next.gcptr64 + 16) = v6->tv.u64;
      *(_QWORD *)(v6->tv.u64 + 24) = v6->next.gcptr64;
      j_lj_gc_closeuv((global_State *)i, v6);
    }
  }
}

/*
==============
lj_func_freeuv
==============
*/
void lj_func_freeuv(global_State *g, GCupval *uv)
{
  if ( !uv->closed )
    unlinkuv(uv);
  g->gc.total -= 48i64;
  ((void (__fastcall *)(void *, GCupval *, __int64))g->allocf)(g->allocd, uv, 48i64);
}

/*
==============
lj_func_newC
==============
*/
GCfunc *lj_func_newC(lua_State *L, unsigned int nelems, GCtab *env)
{
  unsigned __int8 v3; 
  GCfunc *result; 
  unsigned __int64 ptr64; 

  v3 = nelems;
  result = (GCfunc *)j_lj_mem_newgco(L, 8i64 * nelems + 48);
  result->c.nupvalues = v3;
  *(_WORD *)&result->l.gct = 264;
  ptr64 = L->glref.ptr64;
  result->c.env.gcptr64 = (unsigned __int64)env;
  result->c.pc.ptr64 = ptr64 + 356;
  return result;
}

/*
==============
lj_func_newL_empty
==============
*/
GCfunc *lj_func_newL_empty(lua_State *L, GCproto *pt, GCtab *env)
{
  GCfunc *result; 
  GCfunc *v7; 
  unsigned __int8 sizeuv; 
  __int64 v9; 
  int (__fastcall **p_f)(lua_State *); 
  __int64 v11; 
  char *v12; 
  int v13; 

  result = (GCfunc *)j_lj_mem_newgco(L, 8i64 * pt->sizeuv + 40);
  v7 = result;
  *(_WORD *)&result->l.gct = 8;
  result->c.nupvalues = 0;
  result->c.pc.ptr64 = (unsigned __int64)&pt[1];
  result->c.env.gcptr64 = (unsigned __int64)env;
  sizeuv = pt->sizeuv;
  pt->flags = pt->flags + 32 - ((((unsigned int)pt->flags + 32) >> 3) & 0x20);
  if ( sizeuv )
  {
    v9 = 0i64;
    p_f = &result->c.f;
    v11 = sizeuv;
    do
    {
      v12 = (char *)j_lj_mem_newgco(L, 0x30ui64);
      *((_QWORD *)v12 + 2) = -1i64;
      ++p_f;
      v9 += 2i64;
      *(_WORD *)(v12 + 9) = 261;
      *((_QWORD *)v12 + 4) = v12 + 16;
      v13 = *(unsigned __int16 *)(pt->uv.ptr64 + v9 - 2);
      *((_DWORD *)v12 + 10) = (unsigned int)pt ^ (v13 << 24);
      v12[11] = (v13 & 0x4000) != 0;
      *(p_f - 1) = (int (__fastcall *)(lua_State *))v12;
      --v11;
    }
    while ( v11 );
    result = v7;
    v7->c.nupvalues = sizeuv;
  }
  else
  {
    result->c.nupvalues = 0;
  }
  return result;
}

/*
==============
lj_func_newL_gc
==============
*/
GCfunc *lj_func_newL_gc(lua_State *L, GCproto *pt, GCfuncL *parent)
{
  GCproto *v4; 
  unsigned __int64 gcptr64; 
  char *v7; 
  unsigned __int8 v8; 
  TValue *base; 
  char **v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 v14; 
  unsigned __int64 ptr64; 
  GCRef *p_openupval; 
  TValue *v17; 
  unsigned __int64 v18; 
  char *v19; 
  TValue *v20; 
  __int64 v21; 
  char v22; 
  __int64 v24; 
  TValue *v25; 
  char *v26; 
  unsigned __int8 sizeuv; 
  char **v30; 

  v4 = pt;
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step_fixtop(L);
  gcptr64 = parent->env.gcptr64;
  v26 = (char *)j_lj_mem_newgco(L, 8i64 * v4->sizeuv + 40);
  v7 = v26;
  *((_QWORD *)v26 + 4) = v4 + 1;
  *(_WORD *)(v26 + 9) = 8;
  v26[11] = 0;
  *((_QWORD *)v26 + 2) = gcptr64;
  sizeuv = v4->sizeuv;
  v8 = sizeuv;
  v4->flags = v4->flags + 32 - ((((unsigned int)v4->flags + 32) >> 3) & 0x20);
  base = L->base;
  v25 = base;
  if ( sizeuv )
  {
    v10 = (char **)(v26 + 40);
    v11 = 0i64;
    v12 = sizeuv;
    v30 = (char **)(v26 + 40);
    v24 = sizeuv;
    do
    {
      v13 = *(unsigned __int16 *)(v11 + v4->uv.ptr64);
      v14 = *(_WORD *)(v11 + v4->uv.ptr64);
      if ( (v13 & 0x8000) != 0 )
      {
        ptr64 = L->glref.ptr64;
        p_openupval = &L->openupval;
        v17 = &base[v14];
        v18 = L->openupval.gcptr64;
        if ( v18 )
        {
          do
          {
            if ( *(_BYTE *)(v18 + 9) != 5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_func.c", 42, "(((GCobj *)(*pp).gcptr64))->gch.gct == ~(~5u)") )
              __debugbreak();
            v19 = (char *)p_openupval->gcptr64;
            v20 = *(TValue **)(p_openupval->gcptr64 + 32);
            if ( v20 < v17 )
              break;
            if ( (v19[10] || v20 == (TValue *)(v19 + 16)) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_func.c", 43, "!p->closed && (((TValue *)(void *)((p)->v).ptr64)) != &p->tv") )
              __debugbreak();
            if ( *((TValue **)v19 + 4) == v17 )
            {
              v22 = v19[8];
              if ( ((unsigned __int8)v22 & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 )
                v19[8] = v22 ^ 3;
              goto LABEL_21;
            }
            v18 = *(_QWORD *)v19;
            p_openupval = (GCRef *)v19;
          }
          while ( *(_QWORD *)v19 );
        }
        v19 = (char *)j_lj_mem_realloc(L, NULL, 0i64, 0x30ui64);
        v19[8] = *(_BYTE *)(ptr64 + 64) & 3;
        *(_WORD *)(v19 + 9) = 5;
        *((_QWORD *)v19 + 4) = v17;
        *(GCRef *)v19 = (GCRef)p_openupval->gcptr64;
        p_openupval->gcptr64 = (unsigned __int64)v19;
        *((_QWORD *)v19 + 2) = ptr64 + 272;
        v21 = *(_QWORD *)(ptr64 + 296);
        *((_QWORD *)v19 + 3) = v21;
        *(_QWORD *)(v21 + 16) = v19;
        *(_QWORD *)(ptr64 + 296) = v19;
        if ( *(char **)(*((_QWORD *)v19 + 3) + 16i64) != v19 || *(char **)(*((_QWORD *)v19 + 2) + 24i64) != v19 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_func.c", 64, "(&((GCobj *)(((&((GCobj *)((uv)->next).gcptr64)->uv))->prev).gcptr64)->uv) == uv && (&((GCobj *)(((&((GCobj *)((uv)->prev).gcptr64)->uv))->next).gcptr64)->uv) == uv") )
            __debugbreak();
        }
LABEL_21:
        v10 = v30;
        v4 = pt;
        v12 = v24;
        base = v25;
        v19[11] = (v13 & 0x4000) != 0;
        *((_DWORD *)v19 + 10) = LODWORD(parent->pc.ptr64) ^ ((_DWORD)v13 << 24);
      }
      else
      {
        v19 = (char *)parent->uvptr[v13].gcptr64;
      }
      *v10 = v19;
      v11 += 2i64;
      ++v10;
      --v12;
      v30 = v10;
      v24 = v12;
    }
    while ( v12 );
    v7 = v26;
    v8 = sizeuv;
  }
  v7[11] = v8;
  return (GCfunc *)v7;
}

/*
==============
lj_func_free
==============
*/
void lj_func_free(global_State *g, GCfunc *fn)
{
  __int64 v2; 
  unsigned __int64 v3; 

  v2 = 40i64;
  if ( fn->c.ffid )
    v2 = 48i64;
  v3 = v2 + 8i64 * fn->c.nupvalues;
  g->gc.total -= v3;
  g->allocf(g->allocd, fn, v3, 0i64);
}

/*
==============
unlinkuv
==============
*/
void unlinkuv(GCupval *uv)
{
  if ( *(GCupval **)(uv->next.gcptr64 + 16) != uv || *(GCupval **)(uv->tv.u64 + 24) != uv )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_func.c", 29, "(&((GCobj *)(((&((GCobj *)((uv)->next).gcptr64)->uv))->prev).gcptr64)->uv) == uv && (&((GCobj *)(((&((GCobj *)((uv)->prev).gcptr64)->uv))->next).gcptr64)->uv) == uv") )
      __debugbreak();
  }
  *(_QWORD *)(uv->next.gcptr64 + 16) = uv->tv.u64;
  *(_QWORD *)(uv->tv.u64 + 24) = uv->next.gcptr64;
}

