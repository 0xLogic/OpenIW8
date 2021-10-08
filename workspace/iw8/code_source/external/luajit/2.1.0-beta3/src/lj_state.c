/*
==============
lua_newstate
==============
*/
GG_State *lua_newstate(void *(*f)(void *, void *, unsigned __int64, unsigned __int64), void *ud)
{
  GG_State *v4; 

  v4 = (GG_State *)f(ud, NULL, 0i64, 2944ui64);
  if ( (unsigned __int64)&v4[-1].bcff[57] + 3 > 0x7FFFFFFFFFFEi64 )
    return 0i64;
  memset_0(v4, 0, sizeof(GG_State));
  v4->L.glref.ptr64 = (unsigned __int64)&v4->g;
  *(_WORD *)&v4->L.marked = 1633;
  v4->L.dummy_ffid = 1;
  v4->g.uvhead.tv.u64 = (unsigned __int64)&v4->g.uvhead;
  v4->g.uvhead.next.gcptr64 = (unsigned __int64)&v4->g.uvhead;
  v4->g.gc.currentwhite = 33;
  *(_WORD *)&v4->g.strempty.marked = 1025;
  v4->g.allocf = f;
  v4->g.allocd = ud;
  v4->g.mainthref.gcptr64 = (unsigned __int64)v4;
  v4->g.strmask = -1;
  *(_QWORD *)(v4->L.glref.ptr64 + 224) = -1i64;
  v4->g.nilnode.val.u64 = -1i64;
  v4->g.nilnode.key.u64 = -1i64;
  v4->g.tmpbuf.L.ptr64 = 0i64;
  v4->g.tmpbuf.p.ptr64 = 0i64;
  v4->g.tmpbuf.e.ptr64 = 0i64;
  v4->g.tmpbuf.b.ptr64 = 0i64;
  v4->g.gc.state = 0;
  v4->g.gc.root.gcptr64 = (unsigned __int64)v4;
  v4->g.gc.sweep.ptr64 = (unsigned __int64)&v4->g.gc.root;
  v4->g.gc.total = 2944i64;
  v4->g.gc.pause = 200;
  v4->g.gc.stepmul = 200;
  j_lj_dispatch_init(v4);
  v4->L.status = 6;
  if ( (unsigned int)j_lj_vm_cpcall(v4, 0i64, 0i64, cpluaopen) )
  {
    close_state(&v4->L);
    return 0i64;
  }
  v4->L.status = 0;
  return v4;
}

/*
==============
lua_close
==============
*/
void lua_close(lua_State *L)
{
  global_State *ptr64; 
  unsigned __int64 gcptr64; 
  int v3; 
  __int64 v4; 
  global_State *v5; 
  GCRef *strhash; 
  void *allocd; 
  __int64 v8; 
  unsigned __int64 v9; 
  void *v10; 
  void *v11; 
  void *v12; 
  void *v13; 
  __int64 v14; 
  void *(__fastcall *allocf)(void *, void *, unsigned __int64, unsigned __int64); 
  void *v16; 

  ptr64 = (global_State *)L->glref.ptr64;
  gcptr64 = ptr64->mainthref.gcptr64;
  j_luaJIT_profile_stop((lua_State *)gcptr64);
  ptr64->cur_L.gcptr64 = 0i64;
  j_lj_func_closeuv((lua_State *)gcptr64, *(TValue **)(gcptr64 + 56));
  j_lj_gc_separateudata(ptr64, 1);
  v3 = 0;
  do
  {
    do
    {
      ptr64->hookmask |= 0x10u;
      v4 = *(_QWORD *)(gcptr64 + 56) + 16i64;
      *(_BYTE *)(gcptr64 + 11) = 0;
      *(_QWORD *)(gcptr64 + 40) = v4;
      *(_QWORD *)(gcptr64 + 32) = v4;
      *(_QWORD *)(gcptr64 + 80) = 0i64;
    }
    while ( (unsigned int)j_lj_vm_cpcall(gcptr64, 0i64, 0i64, cpfinalize) );
    if ( ++v3 >= 10 )
      break;
    j_lj_gc_separateudata(ptr64, 1);
  }
  while ( ptr64->gc.mmudata.gcptr64 );
  v5 = *(global_State **)(gcptr64 + 16);
  j_lj_func_closeuv((lua_State *)gcptr64, *(TValue **)(gcptr64 + 56));
  j_lj_gc_freeall(v5);
  if ( v5->gc.root.gcptr64 != gcptr64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 165, "((GCobj *)(g->gc.root).gcptr64) == ((GCobj *)(L))") )
    __debugbreak();
  if ( v5->strnum && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 166, "g->strnum == 0") )
    __debugbreak();
  strhash = v5->strhash;
  allocd = v5->allocd;
  v8 = 8i64 * (v5->strmask + 1);
  v5->gc.total -= v8;
  v5->allocf(allocd, strhash, v8, 0i64);
  v9 = (unsigned int)(LODWORD(v5->tmpbuf.e.ptr64) - LODWORD(v5->tmpbuf.b.ptr64));
  v10 = (void *)v5->tmpbuf.b.ptr64;
  v11 = v5->allocd;
  v5->gc.total -= v9;
  v5->allocf(v11, v10, v9, 0i64);
  v12 = *(void **)(gcptr64 + 56);
  v13 = v5->allocd;
  v14 = 8i64 * *(unsigned int *)(gcptr64 + 88);
  v5->gc.total -= v14;
  v5->allocf(v13, v12, v14, 0i64);
  if ( v5->gc.total != 2944 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 174, "g->gc.total == sizeof(GG_State)") )
    __debugbreak();
  allocf = v5->allocf;
  v16 = v5->allocd;
  if ( allocf == j_lj_alloc_f )
    j_lj_alloc_destroy(v16);
  else
    allocf(v16, &v5[-1].gcroot[24], 2944ui64, 0i64);
}

/*
==============
lj_state_relimitstack
==============
*/
void lj_state_relimitstack(lua_State *L)
{
  if ( L->stacksize > 0xFFE4 && (__int64)(((unsigned __int64)L->top - L->stack.ptr64) & 0xFFFFFFFFFFFFFFF8ui64) < 523992 )
    resizestack(L, 0xFFDCu);
}

/*
==============
lj_state_shrinkstack
==============
*/
void lj_state_shrinkstack(lua_State *L, unsigned int used)
{
  unsigned int stacksize; 
  unsigned __int64 ptr64; 

  stacksize = L->stacksize;
  if ( stacksize <= 0xFFE4 && 4 * used < stacksize && stacksize > 0x5E )
  {
    ptr64 = L->glref.ptr64;
    if ( !*(_QWORD *)(ptr64 + 368) || L != *(lua_State **)(ptr64 + 360) )
      resizestack(L, stacksize >> 1);
  }
}

/*
==============
lj_state_growstack
==============
*/
void lj_state_growstack(lua_State *L, unsigned int need)
{
  unsigned int stacksize; 
  unsigned int v4; 
  unsigned int v5; 

  stacksize = L->stacksize;
  if ( stacksize > 0xFFE4 )
    j_lj_err_throw(L, 5);
  v4 = stacksize + need;
  if ( v4 <= 0xFFDC )
  {
    v5 = 2 * stacksize;
    if ( v4 < v5 )
    {
      v4 = v5;
      if ( v5 >= 0xFFDC )
        v4 = 65500;
    }
  }
  else
  {
    v4 += 40;
  }
  resizestack(L, v4);
  if ( L->stacksize > 0xFFE4 )
    j_lj_err_msg(L, LJ_ERR_STKOV);
}

/*
==============
lj_state_growstack1
==============
*/
void lj_state_growstack1(lua_State *L)
{
  unsigned int stacksize; 
  unsigned int v3; 
  unsigned int v4; 

  stacksize = L->stacksize;
  if ( stacksize > 0xFFE4 )
    j_lj_err_throw(L, 5);
  v3 = stacksize + 1;
  if ( stacksize + 1 <= 0xFFDC )
  {
    v4 = 2 * stacksize;
    if ( v3 < v4 )
    {
      v3 = v4;
      if ( v4 >= 0xFFDC )
        v3 = 65500;
    }
  }
  else
  {
    v3 = stacksize + 41;
  }
  resizestack(L, v3);
  if ( L->stacksize > 0xFFE4 )
    j_lj_err_msg(L, LJ_ERR_STKOV);
}

/*
==============
lj_state_new
==============
*/
lua_State *lj_state_new(lua_State *L)
{
  char *v2; 

  v2 = (char *)j_lj_mem_newgco(L, 0x60ui64);
  *(_WORD *)(v2 + 9) = 262;
  v2[11] = 0;
  *((_DWORD *)v2 + 22) = 0;
  *((_QWORD *)v2 + 7) = 0i64;
  *((_QWORD *)v2 + 10) = 0i64;
  *((_QWORD *)v2 + 8) = 0i64;
  *((_QWORD *)v2 + 2) = L->glref.ptr64;
  *((_QWORD *)v2 + 9) = L->env.gcptr64;
  stack_init((lua_State *)v2, L);
  if ( (v2[8] & 3) == 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 286, "((((GCobj *)(L1)))->gch.marked & (0x01 | 0x02))") )
    __debugbreak();
  return (lua_State *)v2;
}

/*
==============
lj_state_free
==============
*/
void lj_state_free(global_State *g, lua_State *L)
{
  void *ptr64; 
  void *allocd; 
  unsigned __int64 v6; 

  if ( L == (lua_State *)g->mainthref.gcptr64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 292, "L != (&((GCobj *)(g->mainthref).gcptr64)->th)") )
    __debugbreak();
  if ( L == (lua_State *)g->cur_L.gcptr64 )
    g->cur_L.gcptr64 = 0i64;
  j_lj_func_closeuv(L, (TValue *)L->stack.ptr64);
  if ( L->openupval.gcptr64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 296, "((GCobj *)(L->openupval).gcptr64) == ((void *)0)") )
    __debugbreak();
  ptr64 = (void *)L->stack.ptr64;
  allocd = g->allocd;
  v6 = 8i64 * L->stacksize;
  g->gc.total -= v6;
  g->allocf(allocd, ptr64, v6, 0i64);
  g->gc.total -= 96i64;
  ((void (__fastcall *)(void *, lua_State *, __int64))g->allocf)(g->allocd, L, 96i64);
}

/*
==============
cpluaopen
==============
*/
TValue *cpluaopen(lua_State *L, int (*dummy)(lua_State *), void *ud)
{
  unsigned __int64 ptr64; 
  signed __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  GCstr *v8; 

  ptr64 = L->glref.ptr64;
  stack_init(L, L);
  L->env.gcptr64 = (unsigned __int64)j_lj_tab_new(L, 0, 6u);
  v5 = (unsigned __int64)j_lj_tab_new(L, 0, 2u) | 0xFFFA000000000000ui64;
  v6 = v5 >> 47;
  *(_QWORD *)(L->glref.ptr64 + 224) = v5;
  if ( (unsigned int)(v5 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v7 = v5 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v6 != *(unsigned __int8 *)(v7 + 9) || (*(_BYTE *)(v7 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  j_lj_str_resize(L, 0xFFu);
  j_lj_meta_init(L);
  j_lj_lex_init(L);
  v8 = j_lj_err_str(L, LJ_ERR_ERRMEM);
  v8->marked |= 0x20u;
  *(_QWORD *)(ptr64 + 56) = 4i64 * *(_QWORD *)(ptr64 + 48);
  return 0i64;
}

/*
==============
cpfinalize
==============
*/
TValue *cpfinalize(lua_State *L, int (*dummy)(lua_State *), void *ud)
{
  j_lj_gc_finalize_udata(L);
  return 0i64;
}

/*
==============
close_state
==============
*/
void close_state(lua_State *L)
{
  unsigned __int64 ptr64; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  void *(__fastcall *v12)(void *, void *, unsigned __int64, unsigned __int64); 
  void *v13; 

  ptr64 = L->glref.ptr64;
  j_lj_func_closeuv(L, (TValue *)L->stack.ptr64);
  j_lj_gc_freeall((global_State *)ptr64);
  if ( *(lua_State **)(ptr64 + 72) != L && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 165, "((GCobj *)(g->gc.root).gcptr64) == ((GCobj *)(L))") )
    __debugbreak();
  if ( *(_DWORD *)(ptr64 + 12) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 166, "g->strnum == 0") )
    __debugbreak();
  v3 = *(_QWORD *)ptr64;
  v4 = *(_QWORD *)(ptr64 + 24);
  v5 = 8i64 * (unsigned int)(*(_DWORD *)(ptr64 + 8) + 1);
  *(_QWORD *)(ptr64 + 48) -= v5;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(ptr64 + 16))(v4, v3, v5, 0i64);
  v6 = (unsigned int)(*(_DWORD *)(ptr64 + 160) - *(_DWORD *)(ptr64 + 168));
  v7 = *(_QWORD *)(ptr64 + 168);
  v8 = *(_QWORD *)(ptr64 + 24);
  *(_QWORD *)(ptr64 + 48) -= v6;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(ptr64 + 16))(v8, v7, v6, 0i64);
  v9 = L->stack.ptr64;
  v10 = *(_QWORD *)(ptr64 + 24);
  v11 = 8i64 * L->stacksize;
  *(_QWORD *)(ptr64 + 48) -= v11;
  (*(void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD))(ptr64 + 16))(v10, v9, v11, 0i64);
  if ( *(_QWORD *)(ptr64 + 48) != 2944i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 174, "g->gc.total == sizeof(GG_State)") )
    __debugbreak();
  v12 = *(void *(__fastcall **)(void *, void *, unsigned __int64, unsigned __int64))(ptr64 + 16);
  v13 = *(void **)(ptr64 + 24);
  if ( v12 == j_lj_alloc_f )
    j_lj_alloc_destroy(v13);
  else
    v12(v13, (void *)(ptr64 - 96), 2944ui64, 0i64);
}

/*
==============
resizestack
==============
*/
void resizestack(lua_State *L, unsigned int n)
{
  __int64 stacksize; 
  unsigned __int64 ptr64; 
  __int64 v5; 
  unsigned int v6; 
  char *v7; 
  unsigned __int64 v8; 
  char *v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  unsigned __int64 i; 

  stacksize = L->stacksize;
  ptr64 = L->stack.ptr64;
  v5 = n;
  v6 = n + 8;
  if ( (unsigned int)((__int64)(L->maxstack.ptr64 - ptr64) >> 3) != (_DWORD)stacksize - 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 63, "(MSize)((((TValue *)(void *)(L->maxstack).ptr64))-oldst)==L->stacksize-(5+2*1)-1") )
    __debugbreak();
  v7 = (char *)j_lj_mem_realloc(L, (void *)L->stack.ptr64, (unsigned int)(8 * stacksize), 8 * v6);
  L->stack.ptr64 = (unsigned __int64)v7;
  v8 = (unsigned __int64)&v7[-ptr64];
  L->maxstack.ptr64 = (unsigned __int64)&v7[8 * v5];
  if ( (unsigned int)stacksize < v6 )
  {
    v9 = &v7[8 * stacksize];
    v10 = v6 - stacksize;
    LODWORD(stacksize) = v6;
    memset(v9, 0xFFu, 8i64 * v10);
  }
  v11 = L->glref.ptr64;
  L->stacksize = v6;
  if ( *(_QWORD *)(v11 + 368) - ptr64 < (unsigned int)stacksize )
    *(_QWORD *)(v11 + 368) += v8;
  L->base = (TValue *)((char *)L->base + v8);
  L->top = (TValue *)((char *)L->top + v8);
  for ( i = L->openupval.gcptr64; i; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 9) != 5 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 78, "(up)->gch.gct == ~(~5u)") )
        __debugbreak();
      if ( *(_BYTE *)(i + 9) != 5 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_state.c", 78, "(up)->gch.gct == ~(~5u)") )
          __debugbreak();
      }
    }
    *(_QWORD *)(i + 32) += v8;
  }
}

/*
==============
stack_init
==============
*/
void stack_init(lua_State *L1, lua_State *L)
{
  TValue *v3; 
  char *v4; 
  __int64 v5; 
  TValue *v6; 

  v3 = (TValue *)j_lj_mem_realloc(L, NULL, 0i64, 0x178ui64);
  L1->stack.ptr64 = (unsigned __int64)v3;
  L1->stacksize = 47;
  v4 = (char *)&v3[47];
  L1->maxstack.ptr64 = (unsigned __int64)&v3[39];
  v3->u64 = (unsigned __int64)L1 | 0xFFFC800000000000ui64;
  v5 = (__int64)((unsigned __int64)L1 | 0xFFFC800000000000ui64) >> 47;
  if ( (unsigned int)(v5 + 4) > 0xFFFFFFF6 && (~(_DWORD)v5 != *(unsigned __int8 *)(((unsigned __int64)L1 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)(((unsigned __int64)L1 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L1->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  v3[1].u64 = -1i64;
  v6 = v3 + 2;
  L1->top = v6;
  L1->base = v6;
  if ( v6 < (TValue *)v4 )
    memset(v6, 0xFFu, 8 * (((unsigned __int64)(v4 - (char *)v6 - 1) >> 3) + 1));
}

