/*
==============
lj_parse
==============
*/
GCproto *lj_parse(LexState *ls)
{
  lua_State *L; 
  const char *chunkarg; 
  unsigned __int64 v4; 
  GCstr *v5; 
  __int64 v6; 
  unsigned int vtop; 
  GCproto *v8; 
  GCproto *v9; 
  FuncScope *bl; 
  unsigned int v12; 
  char nactvar; 
  char v14; 
  FuncState v15; 

  L = ls->L;
  chunkarg = ls->chunkarg;
  v4 = -1i64;
  do
    ++v4;
  while ( chunkarg[v4] );
  v5 = j_lj_str_new(ls->L, chunkarg, v4);
  ls->chunkname = v5;
  v6 = (__int64)((unsigned __int64)v5 | 0xFFFD800000000000ui64) >> 47;
  L->top->u64 = (unsigned __int64)v5 | 0xFFFD800000000000ui64;
  if ( (unsigned int)(v6 + 4) > 0xFFFFFFF6 && (~(_DWORD)v6 != *(unsigned __int8 *)(((unsigned __int64)v5 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)(((unsigned __int64)v5 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
  ls->level = 0;
  fs_init(ls, &v15);
  v15.flags |= 2u;
  nactvar = v15.nactvar;
  v15.linedefined = 0;
  v15.numparams = 0;
  v15.bcbase = NULL;
  v15.bclim = 0;
  v14 = 0;
  vtop = v15.ls->vtop;
  bl = v15.bl;
  v15.bl = (FuncScope *)&bl;
  v12 = vtop;
  if ( v15.freereg != v15.nactvar && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1266, "fs->freereg == fs->nactvar") )
    __debugbreak();
  bcemit_INS(&v15, 0x5Cu);
  j_lj_lex_next(ls);
  parse_chunk(ls);
  if ( ls->tok != 289 )
    err_token(ls, 289);
  v8 = fs_finish(ls, ls->linenumber);
  --L->top;
  v9 = v8;
  if ( v15.prev && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 2722, "fs.prev == ((void *)0)") )
    __debugbreak();
  if ( ls->fs && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 2723, "ls->fs == ((void *)0)") )
    __debugbreak();
  if ( v9->sizeuv && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 2724, "pt->sizeuv == 0") )
    __debugbreak();
  return v9;
}

/*
==============
lj_parse_keepstr
==============
*/
GCstr *lj_parse_keepstr(LexState *ls, const char *str, unsigned __int64 len)
{
  lua_State *L; 
  GCstr *v5; 
  TValue *v6; 

  L = ls->L;
  v5 = j_lj_str_new(L, str, len);
  v6 = j_lj_tab_setstr(L, ls->fs->kt, v5);
  if ( v6->u64 == -1i64 )
    v6->u64 = 0xFFFEFFFFFFFFFFFFui64;
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  return v5;
}

/*
==============
assign_adjust
==============
*/
void assign_adjust(LexState *ls, unsigned int nvars, unsigned int nexps, ExpDesc *e)
{
  ExpKind k; 
  FuncState *fs; 
  signed int v6; 
  int v10; 
  unsigned int v11; 
  unsigned int freereg; 
  unsigned int v13; 

  k = e->k;
  fs = ls->fs;
  v6 = nvars - nexps;
  if ( k == VCALL )
  {
    v10 = 0;
    if ( v6 + 1 >= 0 )
      v10 = v6 + 1;
    HIBYTE(fs->bcbase[e->u.s.info].ins) = v10 + 1;
    if ( v10 > 1 )
    {
      v11 = v10 + fs->freereg - 1;
      if ( v11 > fs->framesize )
      {
        if ( v11 >= 0xFA )
          err_syntax(fs->ls, LJ_ERR_XSLOTS);
        fs->framesize = v11;
      }
      fs->freereg = v11;
    }
  }
  else
  {
    if ( k != VVOID )
      expr_tonextreg(ls->fs, e);
    if ( v6 > 0 )
    {
      freereg = fs->freereg;
      v13 = freereg + v6;
      if ( freereg + v6 > fs->framesize )
      {
        if ( v13 >= 0xFA )
          err_syntax(fs->ls, LJ_ERR_XSLOTS);
        fs->framesize = v13;
      }
      fs->freereg = v13;
      bcemit_nil(fs, freereg, v6);
    }
  }
  if ( nexps > nvars )
    ls->fs->freereg += nvars - nexps;
}

/*
==============
bcemit_INS
==============
*/
__int64 bcemit_INS(FuncState *fs, unsigned int ins)
{
  __int64 pc; 
  LexState *ls; 
  char *bcstack; 
  __int64 v7; 
  __int64 result; 

  pc = fs->pc;
  ls = fs->ls;
  jmp_patchval(fs, fs->jpc, fs->pc, 0xFFu, fs->pc);
  fs->jpc = -1;
  if ( (unsigned int)pc >= fs->bclim )
  {
    bcstack = (char *)ls->bcstack;
    v7 = ((char *)fs->bcbase - bcstack) >> 3;
    if ( ls->sizebcstack >= 0x4000000 )
      err_limit(fs, 0x4000000u, "bytecode instructions");
    ls->bcstack = (BCInsLine *)j_lj_mem_grow(fs->L, bcstack, &ls->sizebcstack, 0x4000000u, 8u);
    fs->bclim = ls->sizebcstack - v7;
    fs->bcbase = &ls->bcstack[v7];
  }
  result = (unsigned int)pc;
  fs->bcbase[pc].ins = ins;
  fs->bcbase[pc].line = ls->lastline;
  fs->pc = pc + 1;
  return result;
}

/*
==============
bcemit_arith
==============
*/
void bcemit_arith(FuncState *fs, BinOpr opr, ExpDesc *e1, ExpDesc *e2)
{
  union {struct {unsigned int info;unsigned int aux;} s;TValue nval;GCstr *sval;} u; 
  double v9; 
  __int32 v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 

  if ( *(_QWORD *)&e1->k == __PAIR64__(e1->f, 4) && e2->k == VKNUM && e2->t == e2->f )
  {
    if ( (unsigned int)(e2->u.nval.it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    u = e2->u;
    if ( (unsigned int)(e1->u.nval.it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    v9 = j_lj_vm_foldarith(e1->u.nval.n, u.nval.n, opr);
    if ( v9 != -0.0 )
    {
      e1->u.nval.n = v9;
      return;
    }
  }
  if ( opr == OPR_POW )
  {
    v10 = 37;
    v11 = expr_toanyreg(fs, e2);
LABEL_14:
    v12 = expr_toanyreg(fs, e1);
    goto LABEL_15;
  }
  v10 = opr + 32;
  expr_toval(fs, e2);
  if ( e2->k == VKNUM && (v11 = const_num(fs, e2), v11 <= 0xFF) )
    v10 -= 10;
  else
    v11 = expr_toanyreg(fs, e2);
  if ( ((e1->k - 4) & 0xFFFFFFF7) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 806, "((e1)->k == VKNUM) || e1->k == VNONRELOC") )
    __debugbreak();
  expr_toval(fs, e1);
  if ( e1->k != VKNUM )
    goto LABEL_14;
  if ( e2->k == VKNUM )
    goto LABEL_14;
  v13 = const_num(fs, e1);
  if ( v13 > 0xFF )
    goto LABEL_14;
  v12 = v11;
  v10 -= 5;
  v11 = v13;
LABEL_15:
  if ( e1->k == VNONRELOC && e1->u.s.info >= fs->nactvar )
    --fs->freereg;
  if ( e2->k == VNONRELOC && e2->u.s.info >= fs->nactvar )
    --fs->freereg;
  e1->u.s.info = bcemit_INS(fs, v10 | ((v11 | (v12 << 8)) << 16));
  e1->k = VRELOCABLE;
}

/*
==============
bcemit_binop
==============
*/
void bcemit_binop(FuncState *fs, BinOpr op, ExpDesc *e1, ExpDesc *e2)
{
  unsigned int f; 
  unsigned int v9; 
  BCInsLine *bcbase; 
  int v11; 
  unsigned int ins; 

  if ( op <= OPR_POW )
  {
    bcemit_arith(fs, op, e1, e2);
    return;
  }
  switch ( op )
  {
    case OPR_AND:
      if ( e1->t != -1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 891, "e1->t == (~(BCPos)0)") )
        __debugbreak();
      expr_discharge(fs, e2);
      f = e1->f;
      if ( f != -1 )
      {
        v9 = e2->f;
        if ( v9 == -1 )
        {
          e2->f = f;
        }
        else
        {
          bcbase = fs->bcbase;
          while ( 1 )
          {
            v11 = HIWORD(bcbase[v9].ins) - 0x8000;
            if ( HIWORD(bcbase[v9].ins) == 0x7FFF || v11 + v9 == -2 )
              break;
            v9 += v11 + 1;
          }
          jmp_patchins(fs, v9, f);
        }
      }
LABEL_20:
      *(_OWORD *)&e1->u.s.info = *(_OWORD *)&e2->u.s.info;
      *(double *)&e1->f = *(double *)&e2->f;
      return;
    case OPR_OR:
      if ( e1->f != -1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 896, "e1->f == (~(BCPos)0)") )
        __debugbreak();
      expr_discharge(fs, e2);
      jmp_append(fs, &e2->t, e1->t);
      goto LABEL_20;
    case OPR_CONCAT:
      expr_toval(fs, e2);
      if ( e2->k == VRELOCABLE && (ins = fs->bcbase[e2->u.s.info].ins, (_BYTE)ins == 38) )
      {
        if ( e1->u.s.info != HIBYTE(ins) - 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 903, "e1->u.s.info == ((BCReg)((*(&(fs)->bcbase[(e2)->u.s.info].ins))>>24))-1") )
          __debugbreak();
        expr_free(fs, e1);
        HIBYTE(fs->bcbase[e2->u.s.info].ins) = e1->u.s.info;
        e1->u.s.info = e2->u.s.info;
        e1->k = VRELOCABLE;
      }
      else
      {
        expr_tonextreg(fs, e2);
        expr_free(fs, e2);
        expr_free(fs, e1);
        e1->u.s.info = bcemit_INS(fs, ((e2->u.s.info | (e1->u.s.info << 8)) << 16) | 0x26);
        e1->k = VRELOCABLE;
      }
      break;
    default:
      if ( (unsigned int)(op - 7) > 5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 916, "op == OPR_NE || op == OPR_EQ || op == OPR_LT || op == OPR_GE || op == OPR_LE || op == OPR_GT") )
        __debugbreak();
      bcemit_comp(fs, op, e1, e2);
      break;
  }
}

/*
==============
bcemit_branch
==============
*/
unsigned int bcemit_branch(FuncState *fs, ExpDesc *e, int cond)
{
  ExpKind k; 
  BCInsLine *bcbase; 
  __int64 info; 
  unsigned int ins; 
  unsigned int freereg; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 

  k = e->k;
  if ( k == VRELOCABLE )
  {
    bcbase = fs->bcbase;
    info = e->u.s.info;
    ins = bcbase[info].ins;
    if ( (_BYTE)ins == 19 )
    {
      bcbase[info].ins = ins & 0xFFFF0000 | ((cond != 0) + 14);
      return bcemit_jmp(fs);
    }
    goto LABEL_5;
  }
  if ( k != VNONRELOC )
  {
LABEL_5:
    freereg = fs->freereg;
    v12 = freereg + 1;
    if ( freereg + 1 > fs->framesize )
    {
      if ( v12 >= 0xFA )
        err_syntax(fs->ls, LJ_ERR_XSLOTS);
      fs->framesize = v12;
    }
    fs->freereg = v12;
    expr_toreg_nobranch(fs, e, freereg);
  }
  bcemit_INS(fs, (e->u.s.info << 16) | (13 - (cond != 0)) | 0xFF00);
  v13 = bcemit_jmp(fs);
  if ( e->k == VNONRELOC )
  {
    v14 = e->u.s.info;
    if ( e->u.s.info >= fs->nactvar && v14 != --fs->freereg )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
        __debugbreak();
    }
  }
  return v13;
}

/*
==============
bcemit_branch_t
==============
*/
void bcemit_branch_t(FuncState *fs, ExpDesc *e)
{
  ExpKind k; 
  BCInsLine *v5; 
  unsigned int info; 
  unsigned int f; 
  BCInsLine *bcbase; 
  int v9; 

  expr_discharge(fs, e);
  k = e->k;
  if ( (unsigned int)(k - 2) <= 2 )
  {
    info = -1;
  }
  else if ( k == VJMP )
  {
    v5 = &fs->bcbase[e->u.s.info - 1];
    LOBYTE(v5->ins) ^= 1u;
    info = e->u.s.info;
  }
  else if ( (unsigned int)k <= VKFALSE )
  {
    expr_toreg_nobranch(fs, e, 0xFFu);
    info = bcemit_jmp(fs);
  }
  else
  {
    info = bcemit_branch(fs, e, 0);
  }
  if ( info != -1 )
  {
    f = e->f;
    if ( f == -1 )
    {
      e->f = info;
    }
    else
    {
      bcbase = fs->bcbase;
      while ( 1 )
      {
        v9 = HIWORD(bcbase[f].ins) - 0x8000;
        if ( HIWORD(bcbase[f].ins) == 0x7FFF || v9 + f == -2 )
          break;
        f += v9 + 1;
      }
      jmp_patchins(fs, f, info);
    }
  }
  jmp_tohere(fs, e->t);
  e->t = -1;
}

/*
==============
bcemit_comp
==============
*/
void bcemit_comp(FuncState *fs, BinOpr opr, ExpDesc *e1, ExpDesc *e2)
{
  ExpDesc *v4; 
  ExpDesc *v6; 
  ExpDesc *v9; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int info; 
  int k; 
  unsigned int v16; 

  v4 = e2;
  v6 = e1;
  v9 = e2;
  expr_toval(fs, e1);
  if ( (unsigned int)(opr - 7) > 1 )
  {
    v11 = opr - 9;
    if ( (((_BYTE)opr - 9) & 1) != 0 )
    {
      v11 ^= 3u;
      v6 = v9;
      v4 = e1;
      expr_toval(fs, v9);
    }
    v12 = expr_toanyreg(fs, v4);
    v13 = expr_toanyreg(fs, v6);
    info = v12 << 8;
    goto LABEL_23;
  }
  v4 = v6;
  v11 = (opr != OPR_EQ) + 4;
  if ( v6->k > VKNUM )
    v9 = v6;
  if ( v6->k > VKNUM )
    v4 = e2;
  v6 = v9;
  expr_discharge(fs, v9);
  if ( v9->k != VNONRELOC )
    goto LABEL_13;
  info = v9->u.s.info;
  if ( v9->t != v9->f )
  {
    if ( info >= fs->nactvar )
    {
      expr_toreg(fs, v9, info);
LABEL_14:
      info = v9->u.s.info;
      goto LABEL_15;
    }
LABEL_13:
    expr_tonextreg(fs, v9);
    goto LABEL_14;
  }
LABEL_15:
  expr_toval(fs, v4);
  k = v4->k;
  if ( k < 0 )
    goto LABEL_22;
  if ( k <= 2 )
  {
    v16 = (v11 + 6) | ((info | (k << 8)) << 8);
    goto LABEL_24;
  }
  if ( k == 3 )
  {
    v16 = (v11 + 2) | ((info | (const_str(fs, v4) << 8)) << 8);
    goto LABEL_24;
  }
  if ( k != 4 )
  {
LABEL_22:
    v13 = expr_toanyreg(fs, v4) << 8;
LABEL_23:
    v16 = v11 | ((info | v13) << 8);
    goto LABEL_24;
  }
  v16 = (v11 + 4) | ((info | (const_num(fs, v4) << 8)) << 8);
LABEL_24:
  if ( v6->k == VNONRELOC && v6->u.s.info >= fs->nactvar )
    --fs->freereg;
  if ( v4->k == VNONRELOC && v4->u.s.info >= fs->nactvar )
    --fs->freereg;
  bcemit_INS(fs, v16);
  e1->u.s.info = bcemit_jmp(fs);
  e1->k = VJMP;
}

/*
==============
bcemit_jmp
==============
*/
__int64 bcemit_jmp(FuncState *fs)
{
  unsigned int jpc; 
  unsigned int pc; 
  BCInsLine *bcbase; 
  __int64 v5; 
  BCInsLine *v7; 
  unsigned int i; 
  int v9; 

  jpc = fs->jpc;
  pc = fs->pc;
  bcbase = fs->bcbase;
  v5 = pc - 1;
  fs->jpc = -1;
  if ( (int)v5 >= (signed int)fs->lasttarget && LOBYTE(bcbase[v5].ins) == 50 )
  {
    HIWORD(bcbase[v5].ins) = 0x7FFF;
    fs->lasttarget = pc;
  }
  else
  {
    LODWORD(v5) = bcemit_INS(fs, (fs->freereg << 8) | 0x7FFF0058);
  }
  if ( jpc != -1 )
  {
    if ( (_DWORD)v5 == -1 )
      return jpc;
    v7 = fs->bcbase;
    for ( i = v5; ; i += v9 + 1 )
    {
      v9 = HIWORD(v7[i].ins) - 0x8000;
      if ( HIWORD(v7[i].ins) == 0x7FFF || v9 + i == -2 )
        break;
    }
    jmp_patchins(fs, i, jpc);
  }
  return (unsigned int)v5;
}

/*
==============
bcemit_method
==============
*/
void bcemit_method(FuncState *fs, ExpDesc *e, ExpDesc *key)
{
  unsigned int info; 
  unsigned int freereg; 
  ExpKind k; 
  unsigned int v9; 
  unsigned int framesize; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 

  expr_discharge(fs, e);
  if ( e->k != VNONRELOC )
    goto LABEL_5;
  info = e->u.s.info;
  if ( e->t != e->f )
  {
    if ( info >= fs->nactvar )
    {
      expr_toreg(fs, e, info);
LABEL_6:
      info = e->u.s.info;
      goto LABEL_7;
    }
LABEL_5:
    expr_tonextreg(fs, e);
    goto LABEL_6;
  }
LABEL_7:
  if ( e->k == VNONRELOC && info >= fs->nactvar && info != --fs->freereg )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
      __debugbreak();
  }
  freereg = fs->freereg;
  bcemit_INS(fs, (info << 16) | ((freereg << 8) + 512) | 0x12);
  if ( key->k != VKSTR && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 666, "((key)->k == VKSTR)") )
    __debugbreak();
  k = key->k;
  if ( k != VKSTR && k != VGLOBAL && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 228, "((e)->k == VKSTR) || e->k == VGLOBAL") )
    __debugbreak();
  v9 = const_gc(fs, (GCobj *)key->u.nval.u64, 0xFFFFFFFB);
  framesize = fs->framesize;
  v11 = v9;
  v12 = fs->freereg;
  if ( v11 > 0xFF )
  {
    v14 = v12 + 4;
    if ( v14 > framesize )
    {
      if ( v14 >= 0xFA )
        err_syntax(fs->ls, LJ_ERR_XSLOTS);
      fs->framesize = v14;
    }
    fs->freereg = v14;
    bcemit_INS(fs, (v11 << 16) | ((freereg << 8) + 768) | 0x27);
    bcemit_INS(fs, ((freereg | (info << 16)) << 8) | ((freereg + 3) << 16) | 0x38);
    --fs->freereg;
  }
  else
  {
    v13 = v12 + 3;
    if ( v12 + 3 > framesize )
    {
      if ( v13 >= 0xFA )
        err_syntax(fs->ls, LJ_ERR_XSLOTS);
      fs->framesize = v13;
    }
    fs->freereg = v13;
    bcemit_INS(fs, ((freereg | ((v11 | (info << 8)) << 8)) << 8) | 0x39);
  }
  e->u.s.info = freereg;
  e->k = VNONRELOC;
}

/*
==============
bcemit_nil
==============
*/
void bcemit_nil(FuncState *fs, unsigned int from, unsigned int n)
{
  unsigned int pc; 
  __int64 v4; 
  BCInsLine *bcbase; 
  unsigned int v6; 
  BCInsLine *v7; 
  unsigned int ins; 
  unsigned int v9; 

  pc = fs->pc;
  if ( pc <= fs->lasttarget )
    goto LABEL_15;
  v4 = pc - 1;
  bcbase = fs->bcbase;
  v6 = BYTE1(bcbase[v4].ins);
  v7 = &bcbase[v4];
  ins = v7->ins;
  if ( (unsigned __int8)v7->ins == 43 )
  {
    if ( (ins & 0xFFFF0000) != 0 )
      goto LABEL_15;
    if ( from == v6 )
    {
      if ( n == 1 )
        return;
    }
    else
    {
      if ( from != v6 + 1 )
        goto LABEL_15;
      from = v6;
      ++n;
    }
    v7->ins = ((from | ((from + n - 1) << 8)) << 8) | 0x2C;
    return;
  }
  if ( (unsigned __int8)ins == 44 )
  {
    v9 = HIWORD(ins);
    if ( v6 <= from && from <= v9 + 1 )
    {
      if ( from + n - 1 > v9 )
        HIWORD(v7->ins) = from + n - 1;
      return;
    }
  }
LABEL_15:
  if ( n == 1 )
    bcemit_INS(fs, (from << 8) | 0x2B);
  else
    bcemit_INS(fs, ((((from + n - 1) << 8) | from) << 8) | 0x2C);
}

/*
==============
bcemit_store
==============
*/
void bcemit_store(FuncState *fs, ExpDesc *var, ExpDesc *e)
{
  ExpKind k; 
  unsigned int info; 
  ExpKind v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  int aux; 
  unsigned int v13; 
  unsigned int v14; 

  k = var->k;
  if ( k == VLOCAL )
  {
    fs->ls->vstack[var->u.s.aux].info |= 1u;
    if ( e->k == VNONRELOC )
    {
      info = e->u.s.info;
      if ( e->u.s.info >= fs->nactvar && info != --fs->freereg )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
          __debugbreak();
      }
    }
    expr_toreg(fs, e, var->u.s.info);
  }
  else
  {
    if ( k == VUPVAL )
    {
      fs->ls->vstack[var->u.s.aux].info |= 1u;
      expr_toval(fs, e);
      v8 = e->k;
      if ( v8 > VKTRUE )
      {
        if ( v8 == VKSTR )
        {
          v9 = (((const_str(fs, e) << 8) | var->u.s.info) << 8) | 0x2F;
        }
        else if ( v8 == VKNUM )
        {
          v9 = (((const_num(fs, e) << 8) | var->u.s.info) << 8) | 0x30;
        }
        else
        {
          v9 = ((var->u.s.info | (expr_toanyreg(fs, e) << 8)) << 8) | 0x2E;
        }
      }
      else
      {
        v9 = ((var->u.s.info | (v8 << 8)) << 8) | 0x31;
      }
    }
    else if ( k == VGLOBAL )
    {
      v10 = expr_toanyreg(fs, e);
      v9 = ((v10 | (const_str(fs, var) << 8)) << 8) | 0x37;
    }
    else
    {
      if ( k != VINDEXED && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 640, "var->k == VINDEXED") )
        __debugbreak();
      v11 = expr_toanyreg(fs, e);
      aux = var->u.s.aux;
      v13 = v11;
      if ( aux >= 0 )
      {
        if ( (unsigned int)aux <= 0xFF )
        {
          if ( e->k == VNONRELOC && v11 >= fs->nactvar && aux >= v11 )
            bcreg_free(fs, aux);
          v9 = ((v13 | ((aux | (var->u.s.info << 8)) << 8)) << 8) | 0x3C;
        }
        else
        {
          v9 = ((v11 | (((aux - 256) | (var->u.s.info << 8)) << 8)) << 8) | 0x3E;
        }
      }
      else
      {
        v9 = ((v11 | ((~aux | (var->u.s.info << 8)) << 8)) << 8) | 0x3D;
      }
    }
    bcemit_INS(fs, v9);
    if ( e->k == VNONRELOC )
    {
      v14 = e->u.s.info;
      if ( e->u.s.info >= fs->nactvar && v14 != --fs->freereg )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
          __debugbreak();
      }
    }
  }
}

/*
==============
bcemit_unop
==============
*/
void bcemit_unop(FuncState *fs, BCOp op, ExpDesc *e)
{
  unsigned int f; 
  unsigned int t; 
  ExpKind k; 
  unsigned int v9; 
  unsigned int info; 

  if ( op == BC_NOT )
  {
    f = e->f;
    t = e->t;
    e->f = t;
    e->t = f;
    jmp_dropval(fs, t);
    jmp_dropval(fs, e->t);
    expr_discharge(fs, e);
    k = e->k;
    if ( (unsigned int)k <= VKFALSE )
    {
      e->k = VKTRUE;
      return;
    }
    if ( k <= VKNUM )
    {
      e->k = VKFALSE;
      return;
    }
    if ( k == VJMP )
    {
      LOBYTE(fs->bcbase[e->u.s.info - 1].ins) ^= 1u;
      return;
    }
    if ( k == VRELOCABLE )
    {
      bcreg_reserve(fs, 1u);
      BYTE1(fs->bcbase[e->u.s.info].ins) = LOBYTE(fs->freereg) - 1;
      v9 = fs->freereg - 1;
      e->k = VNONRELOC;
      e->u.s.info = v9;
    }
    else if ( k != VNONRELOC && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 945, "e->k == VNONRELOC") )
    {
      __debugbreak();
    }
    goto LABEL_25;
  }
  if ( (unsigned int)(op - 20) > 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 948, "op == BC_UNM || op == BC_LEN") )
    __debugbreak();
  if ( op != BC_UNM || e->t != e->f || e->k != VKNUM || expr_numiszero(e) )
  {
    expr_toanyreg(fs, e);
LABEL_25:
    if ( e->k == VNONRELOC )
    {
      info = e->u.s.info;
      if ( e->u.s.info >= fs->nactvar && info != --fs->freereg )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
          __debugbreak();
      }
    }
    e->u.s.info = bcemit_INS(fs, op | (e->u.s.info << 16));
    e->k = VRELOCABLE;
    return;
  }
  if ( e->k != VKNUM && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 962, "(((e))->k == VKNUM)") )
    __debugbreak();
  e->u.nval.u64 ^= 0x8000000000000000ui64;
}

/*
==============
bcreg_free
==============
*/
void bcreg_free(FuncState *fs, unsigned int reg)
{
  if ( reg >= fs->nactvar && reg != --fs->freereg )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
      __debugbreak();
  }
}

/*
==============
bcreg_reserve
==============
*/
void bcreg_reserve(FuncState *fs, unsigned int n)
{
  unsigned int v2; 

  v2 = n + fs->freereg;
  if ( v2 > fs->framesize )
  {
    if ( v2 >= 0xFA )
      err_syntax(fs->ls, LJ_ERR_XSLOTS);
    fs->framesize = v2;
  }
  fs->freereg = v2;
}

/*
==============
const_gc
==============
*/
__int64 const_gc(FuncState *fs, GCobj *gc, unsigned int itype)
{
  lua_State *L; 
  signed __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  TValue *v8; 
  __int64 result; 
  TValue key; 

  L = fs->L;
  v5 = (unsigned __int64)gc | ((unsigned __int64)itype << 47);
  key.u64 = v5;
  v6 = v5 >> 47;
  if ( (unsigned int)(v5 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v7 = v5 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v6 != *(unsigned __int8 *)(v7 + 9) || (*(_BYTE *)(v7 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v8 = j_lj_tab_set(L, fs->kt, &key);
  if ( !v8->it )
    return v8->u32.lo;
  v8->u64 = fs->nkgc;
  result = fs->nkgc;
  fs->nkgc = result + 1;
  return result;
}

/*
==============
const_num
==============
*/
__int64 const_num(FuncState *fs, ExpDesc *e)
{
  lua_State *L; 
  TValue *v5; 
  __int64 result; 

  L = fs->L;
  if ( e->k != VKNUM && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 203, "((e)->k == VKNUM)") )
    __debugbreak();
  v5 = j_lj_tab_set(L, fs->kt, (const TValue *)e);
  if ( !v5->it )
    return v5->u32.lo;
  v5->u64 = fs->nkn;
  result = fs->nkn;
  fs->nkn = result + 1;
  return result;
}

/*
==============
const_str
==============
*/
__int64 const_str(FuncState *fs, ExpDesc *e)
{
  ExpKind k; 

  k = e->k;
  if ( k != VKSTR && k != VGLOBAL && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 228, "((e)->k == VKSTR) || e->k == VGLOBAL") )
    __debugbreak();
  return const_gc(fs, (GCobj *)e->u.nval.u64, 0xFFFFFFFB);
}

/*
==============
err_limit
==============
*/
void __noreturn err_limit(FuncState *fs, unsigned int limit, const char *what)
{
  int linedefined; 
  LexState *ls; 

  linedefined = fs->linedefined;
  ls = fs->ls;
  if ( !linedefined )
    j_lj_lex_error(ls, 0, LJ_ERR_XLIMM, limit, what);
  j_lj_lex_error(ls, 0, LJ_ERR_XLIMF);
}

/*
==============
err_syntax
==============
*/
void __noreturn err_syntax(LexState *ls, ErrMsg em)
{
  j_lj_lex_error(ls, ls->tok, em);
}

/*
==============
err_token
==============
*/
void __noreturn err_token(LexState *ls, int tok)
{
  const char *v3; 

  v3 = j_lj_lex_token2str(ls, tok);
  j_lj_lex_error(ls, ls->tok, LJ_ERR_XTOKEN, v3);
}

/*
==============
expr_binop
==============
*/
__int64 expr_binop(LexState *ls, ExpDesc *v, unsigned int limit)
{
  int tok; 
  BinOpr v7; 
  BCOp v8; 
  FuncState *fs; 
  ExpKind k; 
  unsigned int info; 
  unsigned int t; 
  BCInsLine *bcbase; 
  int v14; 
  unsigned int f; 
  unsigned int jpc; 
  BCInsLine *v17; 
  int v18; 
  BinOpr v19; 
  ExpDesc va; 

  if ( ++ls->level >= 0xC8 )
    j_lj_lex_error(ls, 0, LJ_ERR_XLEVELS);
  tok = ls->tok;
  v7 = OPR_EQ;
  switch ( tok )
  {
    case 271:
      v8 = BC_NOT;
LABEL_8:
      j_lj_lex_next(ls);
      expr_binop(ls, v, 8u);
      bcemit_unop(ls->fs, v8, v);
      goto LABEL_10;
    case 45:
      v8 = BC_UNM;
      goto LABEL_8;
    case 35:
      v8 = BC_LEN;
      goto LABEL_8;
  }
  expr_simple(ls, v);
LABEL_10:
  switch ( ls->tok )
  {
    case 0x25:
      v7 = OPR_MOD;
      break;
    case 0x2A:
      v7 = OPR_MUL;
      break;
    case 0x2B:
      v7 = OPR_ADD;
      break;
    case 0x2D:
      v7 = OPR_SUB;
      break;
    case 0x2F:
      v7 = OPR_DIV;
      break;
    case 0x3C:
      v7 = OPR_LT;
      break;
    case 0x3E:
      v7 = OPR_GT;
      break;
    case 0x5E:
      v7 = OPR_POW;
      break;
    case 0x101:
      v7 = OPR_AND;
      break;
    case 0x110:
      v7 = OPR_OR;
      break;
    case 0x117:
      v7 = OPR_CONCAT;
      break;
    case 0x119:
      break;
    case 0x11A:
      v7 = OPR_GE;
      break;
    case 0x11B:
      v7 = OPR_LE;
      break;
    case 0x11C:
      v7 = OPR_NE;
      break;
    default:
      v7 = OPR_NOBINOPR;
      goto LABEL_68;
  }
  while ( priority[v7].left > limit )
  {
    j_lj_lex_next(ls);
    fs = ls->fs;
    switch ( v7 )
    {
      case OPR_AND:
        bcemit_branch_t(ls->fs, v);
        break;
      case OPR_OR:
        expr_discharge(ls->fs, v);
        k = v->k;
        if ( (unsigned int)k <= VKFALSE )
        {
          info = -1;
        }
        else if ( k == VJMP )
        {
          info = v->u.s.info;
        }
        else if ( (unsigned int)(k - 2) <= 2 )
        {
          expr_toreg_nobranch(fs, v, 0xFFu);
          info = bcemit_jmp(fs);
        }
        else
        {
          info = bcemit_branch(fs, v, 1);
        }
        if ( info != -1 )
        {
          t = v->t;
          if ( t == -1 )
          {
            v->t = info;
          }
          else
          {
            bcbase = fs->bcbase;
            while ( 1 )
            {
              v14 = HIWORD(bcbase[t].ins) - 0x8000;
              if ( HIWORD(bcbase[t].ins) == 0x7FFF || v14 + t == -2 )
                break;
              t += v14 + 1;
            }
            jmp_patchins(fs, t, info);
          }
        }
        f = v->f;
        fs->lasttarget = fs->pc;
        if ( f == -1 )
          goto LABEL_52;
        jpc = fs->jpc;
        if ( jpc != -1 )
        {
          v17 = fs->bcbase;
          while ( 1 )
          {
            v18 = HIWORD(v17[jpc].ins) - 0x8000;
            if ( HIWORD(v17[jpc].ins) == 0x7FFF || v18 + jpc == -2 )
              break;
            jpc += v18 + 1;
          }
          jmp_patchins(fs, jpc, f);
LABEL_52:
          v->f = -1;
          break;
        }
        fs->jpc = f;
        v->f = -1;
        break;
      case OPR_CONCAT:
        goto LABEL_64;
      default:
        if ( (unsigned int)(v7 - 7) > 1 )
        {
          if ( v->k != VKNUM || v->t != v->f )
            expr_toanyreg(ls->fs, v);
          break;
        }
        if ( v->k > VKNUM || v->t != v->f )
        {
          expr_discharge(ls->fs, v);
          if ( v->k != VNONRELOC )
            goto LABEL_64;
          if ( v->t != v->f )
          {
            if ( v->u.s.info < fs->nactvar )
            {
LABEL_64:
              expr_tonextreg(fs, v);
              break;
            }
            expr_toreg(fs, v, v->u.s.info);
          }
        }
        break;
    }
    v19 = expr_binop(ls, &va, priority[v7].right);
    bcemit_binop(ls->fs, v7, v, &va);
    v7 = v19;
    if ( v19 == OPR_NOBINOPR )
      break;
  }
LABEL_68:
  --ls->level;
  return (unsigned int)v7;
}

/*
==============
expr_discharge
==============
*/
void expr_discharge(FuncState *fs, ExpDesc *e)
{
  ExpKind k; 
  unsigned int v5; 
  int aux; 
  unsigned int info; 

  k = e->k;
  switch ( k )
  {
    case VUPVAL:
      v5 = (e->u.s.info << 16) | 0x2D;
LABEL_15:
      e->u.s.info = bcemit_INS(fs, v5);
      e->k = VRELOCABLE;
      return;
    case VGLOBAL:
      v5 = ((unsigned int)const_str(fs, e) << 16) | 0x36;
      goto LABEL_15;
    case VINDEXED:
      aux = e->u.s.aux;
      if ( aux >= 0 )
      {
        if ( (unsigned int)aux <= 0xFF )
        {
          bcreg_free(fs, aux);
          info = e->u.s.info;
          v5 = ((aux | (e->u.s.info << 8)) << 16) | 0x38;
        }
        else
        {
          info = e->u.s.info;
          v5 = (((aux - 256) | (e->u.s.info << 8)) << 16) | 0x3A;
        }
      }
      else
      {
        info = e->u.s.info;
        v5 = ((~aux | (e->u.s.info << 8)) << 16) | 0x39;
      }
      if ( info >= fs->nactvar && info != --fs->freereg )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
          __debugbreak();
      }
      goto LABEL_15;
    case VCALL:
      e->u.s.info = e->u.s.aux;
      break;
    case VLOCAL:
      break;
    default:
      return;
  }
  e->k = VNONRELOC;
}

/*
==============
expr_field
==============
*/
void expr_field(LexState *ls, ExpDesc *v)
{
  FuncState *fs; 
  ExpDesc e; 

  fs = ls->fs;
  expr_discharge(ls->fs, v);
  if ( v->k != VNONRELOC )
    goto LABEL_5;
  if ( v->t != v->f )
  {
    if ( v->u.s.info >= fs->nactvar )
    {
      expr_toreg(fs, v, v->u.s.info);
      goto LABEL_6;
    }
LABEL_5:
    expr_tonextreg(fs, v);
  }
LABEL_6:
  j_lj_lex_next(ls);
  e.k = VKSTR;
  *(_QWORD *)&e.t = -1i64;
  e.u.nval.u64 = (unsigned __int64)lex_str(ls);
  expr_index(fs, v, &e);
}

/*
==============
expr_free
==============
*/
void expr_free(FuncState *fs, ExpDesc *e)
{
  unsigned int info; 

  if ( e->k == VNONRELOC )
  {
    info = e->u.s.info;
    if ( e->u.s.info >= fs->nactvar && info != --fs->freereg )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
        __debugbreak();
    }
  }
}

/*
==============
expr_index
==============
*/
void expr_index(FuncState *fs, ExpDesc *t, ExpDesc *e)
{
  ExpKind k; 
  unsigned int v11; 
  unsigned int info; 

  t->k = VINDEXED;
  k = e->k;
  if ( k == VKNUM )
  {
    if ( (unsigned int)(e->u.nval.it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    _XMM1 = e->u.nval.u64;
    __asm { vcvttsd2si ecx, xmm1; fs }
    if ( _ECX == (unsigned __int8)_ECX )
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, ecx }
      if ( *(double *)&_XMM1 == *(double *)&_XMM0 )
      {
        t->u.s.aux = _ECX + 256;
        return;
      }
    }
  }
  else if ( k == VKSTR )
  {
    v11 = const_str(fs, e);
    if ( v11 <= 0xFF )
    {
      t->u.s.aux = ~v11;
      return;
    }
  }
  expr_discharge(fs, e);
  if ( e->k != VNONRELOC )
    goto LABEL_15;
  info = e->u.s.info;
  if ( e->t != e->f )
  {
    if ( info >= fs->nactvar )
    {
      expr_toreg(fs, e, info);
LABEL_16:
      info = e->u.s.info;
      goto LABEL_17;
    }
LABEL_15:
    expr_tonextreg(fs, e);
    goto LABEL_16;
  }
LABEL_17:
  t->u.s.aux = info;
}

/*
==============
expr_kvalue
==============
*/
void expr_kvalue(TValue *v, ExpDesc *e)
{
  __int64 k; 

  k = (unsigned int)e->k;
  if ( (int)k > 2 )
  {
    if ( (_DWORD)k == 3 )
    {
      v->u64 = e->u.nval.u64 | 0xFFFD800000000000ui64;
    }
    else
    {
      if ( (_DWORD)k != 4 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1695, "(((e))->k == VKNUM)") )
        __debugbreak();
      if ( (unsigned int)(e->u.nval.it64 >> 47) > 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1695, "(((uint32_t)(((my_lua_assert(((((e))->k == VKNUM)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_parse.c\", 1695, \"(((e))->k == VKNUM)\", \"(((e))->k == VKNUM)\"), (&(e)->u.nval)))->it64 >> 47)) <= (~13u))") )
        __debugbreak();
      if ( e->k != VKNUM )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1696, "(((e))->k == VKNUM)") )
          __debugbreak();
      }
      v->u64 = (unsigned __int64)e->u.nval;
    }
  }
  else
  {
    v->u64 = ~(k << 47);
  }
}

/*
==============
expr_next
==============
*/
void expr_next(LexState *ls)
{
  FuncState *fs; 
  unsigned int info; 
  unsigned int freereg; 
  unsigned int v5; 
  ExpDesc v; 

  expr_binop(ls, &v, 0);
  fs = ls->fs;
  expr_discharge(fs, &v);
  if ( v.k == VNONRELOC )
  {
    info = v.u.s.info;
    if ( v.u.s.info >= fs->nactvar && info != --fs->freereg )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
        __debugbreak();
    }
  }
  freereg = fs->freereg;
  v5 = freereg + 1;
  if ( freereg + 1 > fs->framesize )
  {
    if ( v5 >= 0xFA )
      err_syntax(fs->ls, LJ_ERR_XSLOTS);
    fs->framesize = v5;
  }
  fs->freereg = v5;
  expr_toreg(fs, &v, freereg);
}

/*
==============
expr_numiszero
==============
*/
_BOOL8 expr_numiszero(ExpDesc *e)
{
  if ( e->k != VKNUM && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 93, "(((e))->k == VKNUM)") )
    __debugbreak();
  return (e->u.nval.u64 & 0x7FFFFFFFFFFFFFFFi64) == 0;
}

/*
==============
expr_primary
==============
*/
void expr_primary(LexState *ls, ExpDesc *v)
{
  int tok; 
  FuncState *fs; 
  int linenumber; 
  GCstr *v7; 
  int v8; 
  FuncState *v9; 
  FuncState *v10; 
  unsigned int info; 
  unsigned int freereg; 
  unsigned int v13; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  ExpDesc va; 

  tok = ls->tok;
  fs = ls->fs;
  if ( tok == 40 )
  {
    linenumber = ls->linenumber;
    j_lj_lex_next(ls);
    expr_binop(ls, v, 0);
    if ( ls->tok != 41 )
    {
      if ( linenumber == ls->linenumber )
        err_token(ls, 41);
      v15 = j_lj_lex_token2str(ls, 41);
      v16 = j_lj_lex_token2str(ls, 40);
      j_lj_lex_error(ls, ls->tok, LJ_ERR_XMATCH, v15, v16, linenumber);
    }
    j_lj_lex_next(ls);
    expr_discharge(ls->fs, v);
  }
  else
  {
    if ( tok != 287 && tok != 266 )
      err_syntax(ls, LJ_ERR_XSYMBOL);
    v7 = lex_str(ls);
    var_lookup_(ls->fs, v7, v, 1);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = ls->tok;
          if ( v8 != 46 )
            break;
          expr_field(ls, v);
        }
        if ( v8 != 91 )
          break;
        expr_discharge(fs, v);
        if ( v->k != VNONRELOC )
          goto LABEL_16;
        if ( v->t == v->f )
          goto LABEL_17;
        if ( v->u.s.info >= fs->nactvar )
          expr_toreg(fs, v, v->u.s.info);
        else
LABEL_16:
          expr_tonextreg(fs, v);
LABEL_17:
        j_lj_lex_next(ls);
        expr_binop(ls, &va, 0);
        v9 = ls->fs;
        v10 = ls->fs;
        if ( va.t == va.f )
        {
          expr_discharge(v10, &va);
        }
        else
        {
          expr_discharge(v10, &va);
          if ( va.k != VNONRELOC )
            goto LABEL_22;
          if ( va.t == va.f )
            goto LABEL_32;
          if ( va.u.s.info >= v9->nactvar )
          {
            expr_toreg(v9, &va, va.u.s.info);
          }
          else
          {
LABEL_22:
            expr_discharge(v9, &va);
            if ( va.k == VNONRELOC )
            {
              info = va.u.s.info;
              if ( va.u.s.info >= v9->nactvar && info != --v9->freereg )
              {
                if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
                  __debugbreak();
              }
            }
            freereg = v9->freereg;
            v13 = freereg + 1;
            if ( freereg + 1 > v9->framesize )
            {
              if ( v13 >= 0xFA )
                err_syntax(v9->ls, LJ_ERR_XSLOTS);
              v9->framesize = v13;
            }
            v9->freereg = v13;
            expr_toreg(v9, &va, freereg);
          }
        }
LABEL_32:
        if ( ls->tok != 93 )
          err_token(ls, 93);
        j_lj_lex_next(ls);
        expr_index(fs, v, &va);
      }
      if ( v8 != 58 )
        break;
      j_lj_lex_next(ls);
      va.k = VKSTR;
      *(_QWORD *)&va.t = -1i64;
      va.u.nval.u64 = (unsigned __int64)lex_str(ls);
      bcemit_method(fs, v, &va);
      parse_args(ls, v);
    }
    if ( v8 != 40 && v8 != 288 && v8 != 123 )
      break;
    expr_tonextreg(fs, v);
    v14 = fs->freereg + 1;
    if ( v14 > fs->framesize )
    {
      if ( v14 >= 0xFA )
        err_syntax(fs->ls, LJ_ERR_XSLOTS);
      fs->framesize = v14;
    }
    fs->freereg = v14;
    parse_args(ls, v);
  }
}

/*
==============
expr_simple
==============
*/
void expr_simple(LexState *ls, ExpDesc *v)
{
  union {struct {unsigned int info;unsigned int aux;} s;TValue nval;GCstr *sval;} u64; 
  lua_State *L; 
  __int64 v6; 
  __int64 v7; 
  FuncState *fs; 
  unsigned int v9; 
  unsigned int v10; 

  switch ( ls->tok )
  {
    case 0x7B:
      expr_table(ls, v);
      break;
    case 0x107:
      v->k = VKFALSE;
      v->u.s.info = 0;
      *(_QWORD *)&v->t = -1i64;
      j_lj_lex_next(ls);
      break;
    case 0x109:
      j_lj_lex_next(ls);
      parse_body(ls, v, 0, ls->linenumber);
      break;
    case 0x10E:
      *(_QWORD *)&v->t = -1i64;
      v->k = VKNIL;
      v->u.s.info = 0;
      j_lj_lex_next(ls);
      break;
    case 0x114:
      v->k = VKTRUE;
      v->u.s.info = 0;
      *(_QWORD *)&v->t = -1i64;
      j_lj_lex_next(ls);
      break;
    case 0x118:
      fs = ls->fs;
      if ( (ls->fs->flags & 2) == 0 )
        err_syntax(ls, LJ_ERR_XDOTS);
      bcreg_reserve(fs, 1u);
      v9 = fs->freereg - 1;
      v10 = bcemit_INS(fs, ((v9 | (fs->numparams << 8)) << 8) | 0x2000047);
      v->u.s.aux = v9;
      v->u.s.info = v10;
      v->k = VCALL;
      *(_QWORD *)&v->t = -1i64;
      goto LABEL_16;
    case 0x11E:
      v->k = VKNUM;
      v->u.s.info = 0;
      *(_QWORD *)&v->t = -1i64;
      u64 = (union {struct {unsigned int info;unsigned int aux;} s;TValue nval;GCstr *sval;})ls->tokval.u64;
      L = ls->L;
      v6 = u64.nval.it64 >> 47;
      v->u = u64;
      if ( (unsigned int)(u64.nval.it64 >> 47) + 4 > 0xFFFFFFF6 && ((v7 = u64.nval.u64 & 0x7FFFFFFFFFFFi64, ~(_DWORD)v6 != *(unsigned __int8 *)(v7 + 9)) || (*(_BYTE *)(v7 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      {
        __debugbreak();
        j_lj_lex_next(ls);
      }
      else
      {
LABEL_16:
        j_lj_lex_next(ls);
      }
      break;
    case 0x120:
      v->k = VKSTR;
      v->u.s.info = 0;
      *(_QWORD *)&v->t = -1i64;
      if ( (unsigned int)(ls->tokval.it64 >> 47) != -5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1982, "(((uint32_t)((&ls->tokval)->it64 >> 47)) == (~4u))") )
        __debugbreak();
      v->u.nval.u64 = ls->tokval.u64 & 0x7FFFFFFFFFFFi64;
      j_lj_lex_next(ls);
      break;
    default:
      expr_primary(ls, v);
      break;
  }
}

/*
==============
expr_table
==============
*/
void expr_table(LexState *ls, ExpDesc *e)
{
  FuncState *fs; 
  __int16 v4; 
  int v5; 
  GCobj *v6; 
  int v7; 
  int v8; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int tok; 
  FuncState *v14; 
  FuncState *v15; 
  unsigned int info; 
  unsigned int v17; 
  unsigned int v18; 
  bool v19; 
  GCstr *v20; 
  ExpKind k; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  int v27; 
  TValue v28; 
  lua_State *L; 
  TValue *v30; 
  unsigned __int8 marked; 
  TValue *v32; 
  unsigned __int64 ptr64; 
  char v34; 
  lua_State *v35; 
  __int64 v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  int v40; 
  int v41; 
  BCInsLine *v42; 
  int v43; 
  TValue *v44; 
  unsigned int nkn; 
  __int64 v46; 
  ExpKind v47; 
  __int16 v48; 
  unsigned int v49; 
  TValue *top; 
  __int64 v51; 
  lua_State *v52; 
  int v53; 
  const char *v54; 
  const char *v55; 
  ExpDesc v; 
  unsigned int freereg; 
  ExpDesc ea; 
  unsigned int v59; 
  int v60; 
  unsigned int v61; 
  int linenumber; 
  TValue key; 
  FuncState *v64; 
  TValue v65; 
  int v66; 
  __int64 v67; 
  unsigned int asize; 
  int v70; 
  int v71; 

  fs = ls->fs;
  v4 = 1;
  linenumber = ls->linenumber;
  v5 = 1;
  v64 = fs;
  v6 = NULL;
  v71 = 0;
  v7 = 0;
  v60 = 0;
  v8 = 0;
  v70 = 0;
  asize = 1;
  v9 = (fs->freereg << 8) | 0x34;
  freereg = fs->freereg;
  v61 = freereg;
  v10 = bcemit_INS(fs, v9);
  v11 = freereg;
  v59 = v10;
  e->k = VNONRELOC;
  e->u.s.info = v11;
  *(_QWORD *)&e->t = -1i64;
  v12 = fs->freereg + 1;
  if ( v12 > fs->framesize )
  {
    if ( v12 >= 0xFA )
      err_syntax(fs->ls, LJ_ERR_XSLOTS);
    fs->framesize = v12;
  }
  fs->freereg = v12;
  v19 = ls->tok == 123;
  freereg = v11 + 1;
  if ( !v19 )
    err_token(ls, 123);
  j_lj_lex_next(ls);
  tok = ls->tok;
  if ( tok != 125 )
  {
    while ( 1 )
    {
      v7 = 0;
      if ( tok != 91 )
      {
        if ( (tok == 287 || tok == 266) && j_lj_lex_lookahead(ls) == 61 )
        {
          v.k = VKSTR;
          v.u.s.info = 0;
          *(_QWORD *)&v.t = -1i64;
          v20 = lex_str(ls);
          v19 = ls->tok == 61;
          v.u.nval.u64 = (unsigned __int64)v20;
          if ( !v19 )
            goto LABEL_157;
          j_lj_lex_next(ls);
          v70 = ++v8;
        }
        else
        {
          _XMM0 = 0i64;
          __asm { vcvtsi2sd xmm0, xmm0, ebx }
          ++v5;
          v.k = VKNUM;
          asize = v5;
          v7 = 1;
          v.u.nval.n = *(double *)&_XMM0;
          *(_QWORD *)&v.t = -1i64;
          v71 = 1;
        }
        goto LABEL_37;
      }
      j_lj_lex_next(ls);
      expr_binop(ls, &v, 0);
      v14 = ls->fs;
      v15 = ls->fs;
      if ( v.t == v.f )
      {
        expr_discharge(v15, &v);
      }
      else
      {
        expr_discharge(v15, &v);
        if ( v.k != VNONRELOC )
          goto LABEL_12;
        if ( v.t != v.f )
        {
          if ( v.u.s.info < v14->nactvar )
          {
LABEL_12:
            expr_discharge(v14, &v);
            if ( v.k == VNONRELOC )
            {
              info = v.u.s.info;
              if ( v.u.s.info >= v14->nactvar && info != --v14->freereg )
              {
                if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
                  __debugbreak();
              }
            }
            v17 = v14->freereg;
            v18 = v17 + 1;
            if ( v17 + 1 > v14->framesize )
            {
              if ( v18 >= 0xFA )
                err_syntax(v14->ls, LJ_ERR_XSLOTS);
              v14->framesize = v18;
            }
            v14->freereg = v18;
            expr_toreg(v14, &v, v17);
            goto LABEL_22;
          }
          expr_toreg(v14, &v, v.u.s.info);
        }
      }
LABEL_22:
      if ( ls->tok != 93 )
        err_token(ls, 93);
      j_lj_lex_next(ls);
      v19 = v.k == VKNUM;
      if ( v.k > VKNUM )
      {
        expr_index(fs, e, &v);
        v19 = v.k == VKNUM;
      }
      if ( !v19 || (v.u.nval.u64 & 0x7FFFFFFFFFFFFFFFi64) != 0 )
        v70 = ++v8;
      else
        v71 = 1;
      if ( ls->tok != 61 )
LABEL_157:
        err_token(ls, 61);
      j_lj_lex_next(ls);
      v5 = asize;
LABEL_37:
      expr_binop(ls, &ea, 0);
      k = v.k;
      if ( v.k <= VKNUM && v.k && (v.k == VKSTR || ea.k <= VKNUM && ea.t == ea.f) )
      {
        if ( !v6 )
        {
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              v24 = 1;
            }
            else
            {
              _BitScanReverse(&v25, v8 - 1);
              v24 = v25 + 1;
            }
          }
          else
          {
            v24 = 0;
          }
          v26 = 0;
          if ( v71 )
            v26 = v5;
          v6 = (GCobj *)j_lj_tab_new(fs->L, v26, v24);
          v27 = const_gc(fs, v6, 0xFFFFFFF4);
          fs->bcbase[v59].ins = ((v61 | (v27 << 8)) << 8) | 0x35;
          k = v.k;
        }
        v7 = 0;
        if ( k > VKTRUE )
        {
          if ( k == VKSTR )
          {
            v28.u64 = v.u.nval.u64 | 0xFFFD800000000000ui64;
          }
          else
          {
            if ( k != VKNUM )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1695, "(((e))->k == VKNUM)") )
                __debugbreak();
              k = v.k;
            }
            if ( (unsigned int)(v.u.nval.it64 >> 47) > 0xFFFFFFF2 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1695, "(((uint32_t)(((my_lua_assert(((((e))->k == VKNUM)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_parse.c\", 1695, \"(((e))->k == VKNUM)\", \"(((e))->k == VKNUM)\"), (&(e)->u.nval)))->it64 >> 47)) <= (~13u))") )
                __debugbreak();
              k = v.k;
            }
            if ( k != VKNUM && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1696, "(((e))->k == VKNUM)") )
              __debugbreak();
            v28.u64 = (unsigned __int64)v.u.nval;
          }
        }
        else
        {
          v28.u64 = ~((unsigned __int64)(unsigned int)k << 47);
        }
        L = fs->L;
        key.u64 = v28.u64;
        v30 = j_lj_tab_set(L, (GCtab *)v6, &key);
        marked = v6->gch.marked;
        v32 = v30;
        if ( (marked & 4) != 0 )
        {
          ptr64 = fs->L->glref.ptr64;
          if ( (marked & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
            __debugbreak();
          v34 = *(_BYTE *)(ptr64 + 65);
          if ( (v34 == 5 || !v34) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
            __debugbreak();
          v6->gch.marked &= ~4u;
          v6->gch.gclist.gcptr64 = *(_QWORD *)(ptr64 + 96);
          *(_QWORD *)(ptr64 + 96) = v6;
        }
        if ( ea.k <= VKNUM && ea.t == ea.f )
        {
          expr_kvalue(v32, &ea);
          goto LABEL_103;
        }
        v35 = fs->L;
        v32->u64 = (unsigned __int64)v6 | 0xFFFA000000000000ui64;
        v36 = (__int64)((unsigned __int64)v6 | 0xFFFA000000000000ui64) >> 47;
        if ( (unsigned int)(v36 + 4) > 0xFFFFFFF6 && (~(_DWORD)v36 != *(unsigned __int8 *)(((unsigned __int64)v6 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)(((unsigned __int64)v6 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(v35->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
        k = v.k;
        v60 = 1;
      }
      if ( ea.k != VCALL )
      {
        expr_discharge(fs, &ea);
        if ( ea.k == VNONRELOC )
        {
          if ( ea.t != ea.f )
          {
            v37 = ea.u.s.info;
            if ( ea.u.s.info < fs->nactvar )
              goto LABEL_89;
LABEL_98:
            expr_toreg(fs, &ea, v37);
          }
          k = v.k;
          v7 = 0;
          goto LABEL_100;
        }
LABEL_89:
        expr_discharge(fs, &ea);
        if ( ea.k == VNONRELOC )
        {
          v38 = ea.u.s.info;
          if ( ea.u.s.info >= fs->nactvar && v38 != --fs->freereg )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
              __debugbreak();
          }
        }
        v37 = fs->freereg;
        v39 = v37 + 1;
        if ( v37 + 1 > fs->framesize )
        {
          if ( v39 >= 0xFA )
            err_syntax(fs->ls, LJ_ERR_XSLOTS);
          fs->framesize = v39;
        }
        fs->freereg = v39;
        goto LABEL_98;
      }
LABEL_100:
      if ( k <= VKNUM )
        expr_index(fs, e, &v);
      bcemit_store(fs, e, &ea);
LABEL_103:
      fs->freereg = freereg;
      v40 = ls->tok;
      if ( v40 != 44 && v40 != 59 )
      {
        v8 = v70;
        if ( v40 != 125 )
        {
          v53 = linenumber;
          if ( linenumber != ls->linenumber )
          {
            v54 = j_lj_lex_token2str(ls, 125);
            v55 = j_lj_lex_token2str(ls, 123);
            j_lj_lex_error(ls, ls->tok, LJ_ERR_XMATCH, v54, v55, v53);
          }
          err_token(ls, 125);
        }
        break;
      }
      j_lj_lex_next(ls);
      tok = ls->tok;
      v8 = v70;
      if ( tok == 125 )
        break;
      v5 = asize;
    }
  }
  j_lj_lex_next(ls);
  if ( v7 )
  {
    v41 = freereg;
    v42 = &fs->bcbase[fs->pc - 1];
    if ( BYTE1(v42->ins) != freereg )
      goto LABEL_162;
    v43 = 62;
    if ( asize > 0x100 )
      v43 = 60;
    if ( LOBYTE(v42->ins) != v43 )
    {
LABEL_162:
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1769, "((BCReg)(((ilp->ins)>>8)&0xff)) == freg && ((BCOp)((ilp->ins)&0xff)) == (narr > 256 ? BC_TSETV : BC_TSETB)") )
        __debugbreak();
    }
    v66 = 4;
    v65.i = asize - 1;
    v67 = -1i64;
    v65.it = 1127219200;
    if ( asize > 0x100 )
    {
      --fs->pc;
      --v42;
    }
    v44 = j_lj_tab_set(fs->L, fs->kt, &v65);
    if ( v44->it )
    {
      v44->u64 = fs->nkn;
      nkn = fs->nkn;
      fs->nkn = nkn + 1;
    }
    else
    {
      nkn = v44->i;
    }
    v42->ins = ((v41 | (nkn << 8)) << 8) | 0x3F;
    HIBYTE(v42[-1].ins) = 0;
  }
  v46 = v59;
  if ( v59 == fs->pc - 1 )
  {
    e->u.s.info = v59;
    v47 = VRELOCABLE;
    --fs->freereg;
  }
  else
  {
    v47 = VNONRELOC;
  }
  e->k = v47;
  if ( v6 )
  {
    if ( v71 && v6->pt.sizekgc < asize )
      j_lj_tab_reasize(fs->L, (GCtab *)v6, asize - 1);
    if ( v60 )
    {
      top = v6->th.top;
      v51 = v6->pt.sizekn + 1;
      do
      {
        if ( (unsigned int)(top->it64 >> 47) == -12 )
        {
          if ( (GCobj *)(top->u64 & 0x7FFFFFFFFFFFi64) != v6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1799, "(my_lua_assert(((((uint32_t)((&n->val)->it64 >> 47)) == (~11u))), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_parse.c\", 1799, \"(((uint32_t)((&n->val)->it64 >> 47)) == (~11u))\", \"(((uint32_t)((&n->val)->it64 >> 47)) == (~11u))\"), (&((GCobj *)((((&n->val)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->tab)) == t") )
            __debugbreak();
          top->u64 = -1i64;
        }
        top += 3;
        --v51;
      }
      while ( v51 );
      fs = v64;
    }
    v52 = fs->L;
    if ( *(_QWORD *)(v52->glref.ptr64 + 48) >= *(_QWORD *)(v52->glref.ptr64 + 56) )
      j_lj_gc_step(v52);
  }
  else
  {
    if ( v71 )
    {
      if ( asize >= 3 )
      {
        v48 = asize;
        if ( asize > 0x7FF )
          v48 = 2047;
      }
      else
      {
        v48 = 3;
      }
    }
    else
    {
      v48 = 0;
    }
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        _BitScanReverse(&v49, v8 - 1);
        v4 = v49 + 1;
      }
    }
    else
    {
      v4 = 0;
    }
    HIWORD(fs->bcbase[v46].ins) = v48 | (v4 << 11);
  }
}

/*
==============
expr_toanyreg
==============
*/
__int64 expr_toanyreg(FuncState *fs, ExpDesc *e)
{
  __int64 result; 

  expr_discharge(fs, e);
  if ( e->k != VNONRELOC )
    goto LABEL_5;
  result = e->u.s.info;
  if ( e->t == e->f )
    return result;
  if ( (unsigned int)result >= fs->nactvar )
  {
    expr_toreg(fs, e, result);
    return e->u.s.info;
  }
  else
  {
LABEL_5:
    expr_tonextreg(fs, e);
    return e->u.s.info;
  }
}

/*
==============
expr_tonextreg
==============
*/
void expr_tonextreg(FuncState *fs, ExpDesc *e)
{
  unsigned int info; 
  unsigned int freereg; 
  unsigned int v6; 

  expr_discharge(fs, e);
  if ( e->k == VNONRELOC )
  {
    info = e->u.s.info;
    if ( e->u.s.info >= fs->nactvar && info != --fs->freereg )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
        __debugbreak();
    }
  }
  freereg = fs->freereg;
  v6 = freereg + 1;
  if ( freereg + 1 > fs->framesize )
  {
    if ( v6 >= 0xFA )
      err_syntax(fs->ls, LJ_ERR_XSLOTS);
    fs->framesize = v6;
  }
  fs->freereg = v6;
  expr_toreg(fs, e, freereg);
}

/*
==============
expr_toreg
==============
*/
void expr_toreg(FuncState *fs, ExpDesc *e, unsigned int reg)
{
  unsigned int info; 
  unsigned int t; 
  BCInsLine *bcbase; 
  int v9; 
  unsigned int v10; 
  unsigned int f; 
  unsigned int dtarget; 
  unsigned int v13; 
  BCInsLine *v14; 
  __int64 v15; 
  BCInsLine *v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int pc; 

  expr_toreg_nobranch(fs, e, reg);
  if ( e->k == VJMP )
  {
    info = e->u.s.info;
    if ( e->u.s.info != -1 )
    {
      t = e->t;
      if ( t == -1 )
      {
        e->t = info;
      }
      else
      {
        bcbase = fs->bcbase;
        while ( 1 )
        {
          v9 = HIWORD(bcbase[t].ins) - 0x8000;
          if ( HIWORD(bcbase[t].ins) == 0x7FFF || v9 + t == -2 )
            break;
          t += v9 + 1;
        }
        jmp_patchins(fs, t, info);
      }
    }
  }
  v10 = e->t;
  f = e->f;
  if ( v10 != f )
  {
    dtarget = -1;
    v13 = -1;
    if ( v10 == -1 )
    {
LABEL_19:
      if ( f == -1 )
      {
LABEL_32:
        pc = fs->pc;
        fs->lasttarget = pc;
        jmp_patchval(fs, e->f, pc, reg, dtarget);
        jmp_patchval(fs, e->t, pc, reg, v13);
        goto LABEL_33;
      }
      v16 = fs->bcbase;
      while ( 1 )
      {
        v17 = f - 1;
        if ( !f )
          v17 = 0i64;
        if ( (unsigned int)(unsigned __int8)v16[v17].ins - 12 > 1 && (v16[v17].ins & 0xFF00) != 65280 )
          break;
        if ( HIWORD(v16[f].ins) != 0x7FFF )
        {
          f += HIWORD(v16[f].ins) - 0x8000 + 1;
          if ( f != -1 )
            continue;
        }
        goto LABEL_32;
      }
    }
    else
    {
      v14 = fs->bcbase;
      while ( 1 )
      {
        v15 = v10 - 1;
        if ( !v10 )
          v15 = 0i64;
        if ( (unsigned int)(unsigned __int8)v14[v15].ins - 12 > 1 && (v14[v15].ins & 0xFF00) != 65280 )
          break;
        if ( HIWORD(v14[v10].ins) != 0x7FFF )
        {
          v10 += HIWORD(v14[v10].ins) - 0x8000 + 1;
          if ( v10 != -1 )
            continue;
        }
        goto LABEL_19;
      }
    }
    if ( e->k == VJMP )
      v18 = -1;
    else
      v18 = bcemit_jmp(fs);
    dtarget = bcemit_INS(fs, (reg << 8) | 0x1002B);
    bcemit_INS(fs, (fs->freereg << 8) | 0x80010058);
    v13 = bcemit_INS(fs, (reg << 8) | 0x2002B);
    jmp_tohere(fs, v18);
    goto LABEL_32;
  }
LABEL_33:
  *(_QWORD *)&e->t = -1i64;
  e->u.s.info = reg;
  e->k = VNONRELOC;
}

/*
==============
expr_toreg_nobranch
==============
*/
void expr_toreg_nobranch(FuncState *fs, ExpDesc *e, unsigned int reg)
{
  ExpKind k; 
  unsigned int v7; 

  expr_discharge(fs, e);
  k = e->k;
  switch ( k )
  {
    case VKSTR:
      v7 = ((reg | ((unsigned int)const_gc(fs, (GCobj *)e->u.nval.u64, 0xFFFFFFFB) << 8)) << 8) | 0x27;
      goto LABEL_20;
    case VKNUM:
      if ( (unsigned int)(e->u.nval.it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
        __debugbreak();
      _XMM1 = e->u.nval.u64;
      __asm { vcvttsd2si ecx, xmm1 }
      if ( _ECX != (__int16)_ECX )
        goto LABEL_10;
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, ecx }
      if ( *(double *)&_XMM1 == *(double *)&_XMM0 )
        v7 = ((reg | ((unsigned __int16)_ECX << 8)) << 8) | 0x29;
      else
LABEL_10:
        v7 = ((reg | ((unsigned int)const_num(fs, e) << 8)) << 8) | 0x2A;
      goto LABEL_20;
    case VRELOCABLE:
      BYTE1(fs->bcbase[e->u.s.info].ins) = reg;
      e->u.s.info = reg;
      e->k = VNONRELOC;
      return;
    case VNONRELOC:
      if ( reg == e->u.s.info )
      {
$noins:
        e->u.s.info = reg;
        e->k = VNONRELOC;
        return;
      }
      v7 = ((reg | (e->u.s.info << 8)) << 8) | 0x12;
LABEL_20:
      bcemit_INS(fs, v7);
      goto $noins;
    case VKNIL:
      bcemit_nil(fs, reg, 1u);
      e->u.s.info = reg;
      e->k = VNONRELOC;
      return;
  }
  if ( k <= VKTRUE )
  {
    v7 = ((reg | (k << 8)) << 8) | 0x2B;
    goto LABEL_20;
  }
  if ( ((k - 10) & 0xFFFFFFFB) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 545, "e->k == VVOID || e->k == VJMP") )
    __debugbreak();
}

/*
==============
expr_toval
==============
*/
void expr_toval(FuncState *fs, ExpDesc *e)
{
  unsigned int t; 
  unsigned int f; 

  t = e->t;
  f = e->f;
  expr_discharge(fs, e);
  if ( t != f )
  {
    if ( e->k != VNONRELOC )
      goto LABEL_6;
    if ( e->t == e->f )
      return;
    if ( e->u.s.info >= fs->nactvar )
      expr_toreg(fs, e, e->u.s.info);
    else
LABEL_6:
      expr_tonextreg(fs, e);
  }
}

/*
==============
fs_finish
==============
*/
GCproto *fs_finish(LexState *ls, int line)
{
  FuncState *fs; 
  lua_State *v3; 
  int v5; 
  unsigned int pc; 
  unsigned int ins; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  char v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  int v20; 
  unsigned int v21; 
  BCInsLine *bcbase; 
  BCInsLine *v23; 
  unsigned int *v24; 
  __int64 v25; 
  unsigned int v26; 
  int linedefined; 
  unsigned int v28; 
  BCInsLine *v29; 
  char *v30; 
  unsigned int v31; 
  unsigned int v32; 
  int v33; 
  unsigned __int64 v34; 
  lua_State *v35; 
  __int64 v36; 
  TValue *top; 
  __int64 v38; 
  FuncState *prev; 
  unsigned __int64 v41; 
  unsigned __int64 ofsvar; 
  lua_State *L; 
  int v45; 
  unsigned __int64 v46; 
  int v47; 

  fs = ls->fs;
  v3 = ls->L;
  L = v3;
  v5 = line - fs->linedefined;
  pc = fs->pc;
  v45 = v5;
  if ( pc <= fs->lasttarget || (ins = (unsigned __int8)fs->bcbase[pc - 1].ins, ins < 0x43) || ins > 0x44 && ins - 73 > 3 )
  {
    if ( (fs->bl->flags & 8) != 0 )
      bcemit_INS(fs, 0x80000032);
    bcemit_INS(fs, 0x1004Bu);
  }
  fs->bl->flags |= 0x10u;
  fscope_end(fs);
  if ( fs->bl && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1522, "fs->bl == ((void *)0)") )
    __debugbreak();
  if ( (fs->flags & 0x40) != 0 )
  {
    v8 = 1;
    if ( pc > 1 )
    {
      v9 = 1i64;
      do
      {
        v10 = fs->bcbase[v9].ins;
        if ( (unsigned __int8)v10 == 50 )
          break;
        if ( (unsigned __int8)v10 > 0x42u && ((unsigned __int8)v10 <= 0x44u || (unsigned int)(unsigned __int8)v10 - 73 <= 3) )
        {
          v11 = bcemit_INS(fs, v10);
          fs->bcbase[v11].line = fs->bcbase[v9].line;
          v12 = 0x7FFF - v8 + v11;
          if ( v12 > 0xFFFF )
            err_syntax(fs->ls, LJ_ERR_XFIXUP);
          fs->bcbase[v9].ins = (v12 << 16) | 0x32;
        }
        ++v8;
        ++v9;
      }
      while ( v8 < pc );
    }
  }
  v13 = fs->pc;
  v14 = 0i64;
  v15 = 0;
  v16 = (4 * (v13 + 2i64 * fs->nkgc) + 111) & 0xFFFFFFFFFFFFFFF8ui64;
  v17 = v16 + 8i64 * fs->nkn;
  v46 = v17 + 2 * ((fs->nuv + 1i64) & 0xFFFFFFFFFFFFFFFEui64);
  if ( v5 >= 256 )
    v15 = (v5 >= 0x10000) + 1;
  v41 = (unsigned int)(((_DWORD)v13 - 1) << v15) + v17 + 2 * ((fs->nuv + 1i64) & 0xFFFFFFFFFFFFFFFEui64);
  v18 = fs_prep_var(ls, fs, &ofsvar) + v41;
  v19 = (unsigned __int64)j_lj_mem_newgco(v3, v18);
  *(_BYTE *)(v19 + 9) = 7;
  *(_DWORD *)(v19 + 56) = v18;
  *(_WORD *)(v19 + 62) = 0;
  *(_BYTE *)(v19 + 61) = fs->flags & 0x9F;
  *(_BYTE *)(v19 + 10) = fs->numparams;
  *(_BYTE *)(v19 + 11) = fs->framesize;
  *(_QWORD *)(v19 + 64) = ls->chunkname;
  v20 = 89;
  *(_DWORD *)(v19 - 8i64 * (fs->nkgc + 1) + v16) = 0;
  v21 = fs->pc;
  bcbase = fs->bcbase;
  *(_DWORD *)(v19 + 12) = v21;
  if ( (fs->flags & 2) != 0 )
    v20 = 92;
  *(_DWORD *)(v19 + 104) = (fs->framesize << 8) | v20;
  if ( v21 > 1 )
  {
    v23 = bcbase + 1;
    v24 = (unsigned int *)(v19 + 108);
    v25 = v21 - 1;
    do
    {
      v26 = v23->ins;
      ++v23;
      *v24++ = v26;
      --v25;
    }
    while ( v25 );
  }
  fs_fixup_k(fs, (GCproto *)v19, (void *)(v19 + v16));
  *(_QWORD *)(v19 + 40) = v19 + v17;
  *(_BYTE *)(v19 + 60) = fs->nuv;
  memcpy_0((void *)(v19 + v17), fs->uvtmp, 2i64 * fs->nuv);
  linedefined = fs->linedefined;
  v28 = fs->pc - 1;
  v29 = fs->bcbase;
  v30 = (char *)(v19 + v46);
  v47 = linedefined;
  *(_DWORD *)(v19 + 72) = linedefined;
  *(_DWORD *)(v19 + 76) = v45;
  *(_QWORD *)(v19 + 80) = v30;
  if ( v45 >= 256 )
  {
    if ( v45 >= 0x10000 )
    {
      do
      {
        v33 = v29[v14 + 1].line - linedefined;
        if ( v33 < 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1432, "delta >= 0") )
            __debugbreak();
          linedefined = v47;
        }
        *(_DWORD *)&v30[4 * v14] = v33;
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < v28 );
    }
    else
    {
      do
      {
        v32 = v29[v14 + 1].line - linedefined;
        if ( v32 > 0xFFFF )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1425, "delta >= 0 && delta < 65536") )
            __debugbreak();
          linedefined = v47;
        }
        *(_WORD *)&v30[2 * v14] = v32;
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < v28 );
    }
  }
  else
  {
    do
    {
      v31 = v29[v14 + 1].line - linedefined;
      if ( v31 > 0xFF )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1418, "delta >= 0 && delta < 256") )
          __debugbreak();
        linedefined = v47;
      }
      v30[v14] = v31;
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < v28 );
  }
  v34 = ofsvar;
  *(_QWORD *)(v19 + 88) = v19 + v41;
  *(_QWORD *)(v19 + 96) = v19 + v41 + v34;
  memcpy_0((void *)(v19 + v41), (const void *)ls->sb.b.ptr64, (unsigned int)(LODWORD(ls->sb.p.ptr64) - LODWORD(ls->sb.b.ptr64)));
  v35 = L;
  if ( (*(_BYTE *)(L->glref.ptr64 + 211) & 1) != 0 )
  {
    v36 = j_lj_vmevent_prepare(L, LJ_VMEVENT_BC);
    if ( v36 )
    {
      top = v35->top;
      v35->top = top + 1;
      v38 = (__int64)(v19 | 0xFFFC000000000000ui64) >> 47;
      top->u64 = v19 | 0xFFFC000000000000ui64;
      if ( (unsigned int)(v38 + 4) > 0xFFFFFFF6 && (~(_DWORD)v38 != *(unsigned __int8 *)((v19 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v19 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(v35->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
      j_lj_vmevent_call(v35, v36);
    }
  }
  --v35->top;
  ls->vtop = fs->vbase;
  prev = fs->prev;
  ls->fs = prev;
  if ( !prev && ls->tok != 289 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1594, "ls->fs != ((void *)0) || ls->tok == TK_eof") )
    __debugbreak();
  return (GCproto *)v19;
}

/*
==============
fs_fixup_k
==============
*/
void fs_fixup_k(FuncState *fs, GCproto *pt, void *kptr)
{
  double *v3; 
  GCobj *v4; 
  GCtab *kt; 
  __int64 v7; 
  unsigned __int64 i; 
  __int64 *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  GCobj *v15; 
  TValue *top; 
  VarInfo *vstack; 
  unsigned __int8 sizeuv; 
  __int64 v19; 
  unsigned __int16 n_low; 
  __int16 v21; 
  __int64 v22; 
  __int16 slot; 
  __int16 v24; 

  v3 = (double *)kptr;
  v4 = (GCobj *)pt;
  if ( fs->nkn > 0x10000 || fs->nkgc > 0x10000 )
    err_limit(fs, 0x10000u, "constants");
  pt->k.ptr64 = (unsigned __int64)kptr;
  pt->sizekn = fs->nkn;
  pt->sizekgc = fs->nkgc;
  kt = fs->kt;
  v7 = 0i64;
  for ( i = kt->array.ptr64; (unsigned int)v7 < kt->asize; v7 = (unsigned int)(v7 + 1) )
  {
    if ( !*(_DWORD *)(i + 8 * v7 + 4) )
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      v3[*(unsigned int *)(i + 8 * v7)] = *(double *)&_XMM0;
    }
  }
  v11 = (__int64 *)(kt->node.ptr64 + 8);
  v12 = kt->hmask + 1;
  do
  {
    if ( !*((_DWORD *)v11 - 1) )
    {
      v13 = *((unsigned int *)v11 - 2);
      v14 = *v11 >> 47;
      if ( (unsigned int)v14 >= 0xFFFFFFF2 )
      {
        if ( (unsigned int)(v14 + 4) <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1379, "((((uint32_t)((&n->key)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
          __debugbreak();
        v15 = (GCobj *)(*v11 & 0x7FFFFFFFFFFFi64);
        *(_QWORD *)&v3[~v13] = v15;
        if ( (v15->gch.marked & 3) != 0 && (v4->gch.marked & 4) != 0 )
          j_lj_gc_barrierf((global_State *)fs->L->glref.ptr64, v4, v15);
        if ( (unsigned int)(*v11 >> 47) == -8 )
        {
          if ( v15->gch.gct != 7 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1383, "(o)->gch.gct == ~(~7u)") )
            __debugbreak();
          top = v15->th.top;
          vstack = fs->ls->vstack;
          sizeuv = v15->pt.sizeuv;
          if ( sizeuv )
          {
            v19 = sizeuv;
            do
            {
              n_low = LOWORD(top->n);
              if ( LOWORD(top->n) < 0xFFC4u )
              {
                v22 = n_low;
                slot = vstack[n_low].slot;
                v21 = slot | 0xC000;
                v24 = slot | 0x8000;
                if ( (vstack[v22].info & 1) != 0 )
                  v21 = v24;
              }
              else
              {
                v21 = n_low + 60;
              }
              LOWORD(top->n) = v21;
              top = (TValue *)((char *)top + 2);
              --v19;
            }
            while ( v19 );
            v3 = (double *)kptr;
            v4 = (GCobj *)pt;
          }
        }
      }
      else
      {
        *(_QWORD *)&v3[v13] = *v11;
      }
    }
    v11 += 3;
    --v12;
  }
  while ( v12 );
}

/*
==============
fs_init
==============
*/
void fs_init(LexState *ls, FuncState *fs)
{
  lua_State *L; 
  GCtab *v4; 
  __int64 v5; 

  L = ls->L;
  fs->prev = ls->fs;
  ls->fs = fs;
  fs->ls = ls;
  fs->vbase = ls->vtop;
  *(_QWORD *)&fs->pc = 0i64;
  *(_QWORD *)&fs->freereg = 0i64;
  *(_QWORD *)&fs->nkn = 0i64;
  fs->bl = NULL;
  fs->flags = 0;
  fs->L = L;
  fs->jpc = -1;
  *(_WORD *)&fs->framesize = 1;
  v4 = j_lj_tab_new(L, 0, 0);
  fs->kt = v4;
  v5 = (__int64)((unsigned __int64)v4 | 0xFFFA000000000000ui64) >> 47;
  L->top->u64 = (unsigned __int64)v4 | 0xFFFA000000000000ui64;
  if ( (unsigned int)(v5 + 4) > 0xFFFFFFF6 && (~(_DWORD)v5 != *(unsigned __int8 *)(((unsigned __int64)v4 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)(((unsigned __int64)v4 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
fs_prep_var
==============
*/
unsigned __int64 fs_prep_var(LexState *ls, FuncState *fs, unsigned __int64 *ofsvar)
{
  unsigned __int64 ptr64; 
  SBuf *p_sb; 
  LexState *v5; 
  VarInfo *vstack; 
  unsigned __int8 nuv; 
  char *v9; 
  __int64 v10; 
  unsigned __int16 *uvmap; 
  unsigned __int64 gcptr64; 
  size_t v13; 
  char *v14; 
  unsigned __int64 *v15; 
  VarInfo *v16; 
  VarInfo *v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  char *v20; 
  char *v21; 
  size_t v22; 
  unsigned int v23; 
  char *v24; 
  unsigned int startpc; 
  char *v26; 
  char *v27; 
  char *v28; 
  unsigned int v32; 

  ptr64 = ls->sb.b.ptr64;
  p_sb = &ls->sb;
  v5 = ls;
  vstack = ls->vstack;
  ls->sb.p.ptr64 = ptr64;
  nuv = fs->nuv;
  if ( nuv )
  {
    v9 = (char *)ptr64;
    v10 = nuv;
    uvmap = fs->uvmap;
    do
    {
      gcptr64 = vstack[*uvmap].name.gcptr64;
      v13 = (unsigned int)(*(_DWORD *)(gcptr64 + 16) + 1);
      if ( (unsigned int)v13 <= LODWORD(p_sb->e.ptr64) - (int)ptr64 )
        v14 = v9;
      else
        v14 = j_lj_buf_more2(p_sb, v13);
      memcpy_0(v14, (const void *)(gcptr64 + 24), v13);
      v9 = &v14[v13];
      ++uvmap;
      p_sb->p.ptr64 = (unsigned __int64)&v14[v13];
      LODWORD(ptr64) = v13 + (_DWORD)v14;
      --v10;
    }
    while ( v10 );
    v5 = ls;
  }
  v15 = ofsvar;
  v32 = 0;
  *v15 = (unsigned int)(ptr64 - LODWORD(v5->sb.b.ptr64));
  v16 = &vstack[v5->vtop];
  v17 = &vstack[fs->vbase];
  if ( v17 < v16 )
  {
    do
    {
      if ( (v17->info & 6) == 0 )
      {
        v18 = LODWORD(p_sb->e.ptr64) - LODWORD(p_sb->p.ptr64);
        v19 = v17->name.gcptr64;
        if ( v17->name.gcptr64 >= 7 )
        {
          v22 = (unsigned int)(*(_DWORD *)(v19 + 16) + 1);
          v23 = *(_DWORD *)(v19 + 16) + 11;
          if ( v23 <= v18 )
            v24 = (char *)p_sb->p.ptr64;
          else
            v24 = j_lj_buf_more2(p_sb, v23);
          memcpy_0(v24, (const void *)(v19 + 24), v22);
          v21 = &v24[v22];
        }
        else
        {
          if ( v18 >= 0xB )
            v20 = (char *)p_sb->p.ptr64;
          else
            v20 = j_lj_buf_more2(p_sb, 0xBu);
          *v20 = v19;
          v21 = v20 + 1;
        }
        startpc = v17->startpc;
        v26 = j_lj_strfmt_wuleb128(v21, startpc - v32);
        p_sb->p.ptr64 = (unsigned __int64)j_lj_strfmt_wuleb128(v26, v17->endpc - startpc);
        v32 = startpc;
      }
      ++v17;
    }
    while ( v17 < v16 );
    v5 = ls;
  }
  if ( LODWORD(p_sb->e.ptr64) == LODWORD(p_sb->p.ptr64) )
    v27 = j_lj_buf_more2(p_sb, 1u);
  else
    v27 = (char *)p_sb->p.ptr64;
  *v27 = 0;
  v28 = v27 + 1;
  p_sb->p.ptr64 = (unsigned __int64)v28;
  return (unsigned int)((_DWORD)v28 - LODWORD(v5->sb.b.ptr64));
}

/*
==============
fscope_end
==============
*/
void fscope_end(FuncState *fs)
{
  FuncScope *bl; 
  LexState *ls; 
  FuncState *v4; 
  unsigned int nactvar; 
  unsigned int v6; 
  unsigned __int8 flags; 
  unsigned int v8; 

  bl = fs->bl;
  ls = fs->ls;
  fs->bl = bl->prev;
  v4 = ls->fs;
  nactvar = bl->nactvar;
  if ( ls->fs->nactvar > nactvar )
  {
    do
      ls->vstack[v4->varmap[--v4->nactvar]].endpc = v4->pc;
    while ( v4->nactvar > nactvar );
  }
  v6 = fs->nactvar;
  fs->freereg = v6;
  if ( bl->nactvar != v6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1277, "bl->nactvar == fs->nactvar") )
    __debugbreak();
  flags = bl->flags;
  if ( (flags & 0x18) == 8 )
  {
    bcemit_INS(fs, (bl->nactvar << 8) | 0x80000032);
    flags = bl->flags;
  }
  if ( (flags & 2) == 0 )
  {
LABEL_11:
    if ( (flags & 4) == 0 )
      return;
    goto LABEL_12;
  }
  if ( (flags & 1) != 0 )
  {
    v8 = gola_new(ls, (GCstr *)1, 4u, fs->pc);
    ls->vtop = v8;
    gola_resolve(ls, bl, v8);
    flags = bl->flags;
    goto LABEL_11;
  }
LABEL_12:
  gola_fixup(ls, bl);
}

/*
==============
gola_close
==============
*/
void gola_close(LexState *ls, VarInfo *vg)
{
  FuncState *fs; 
  __int64 startpc; 
  __int64 v5; 
  BCInsLine *v6; 
  int ins; 
  BCInsLine *bcbase; 

  fs = ls->fs;
  startpc = vg->startpc;
  v5 = startpc;
  v6 = &ls->fs->bcbase[startpc];
  if ( (vg->info & 2) == 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1180, "((vg)->info & 0x02)") )
    __debugbreak();
  ins = (unsigned __int8)v6->ins;
  if ( ins != 88 && ins != 50 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1181, "((BCOp)((*ip)&0xff)) == BC_JMP || ((BCOp)((*ip)&0xff)) == BC_UCLO") )
    __debugbreak();
  BYTE1(v6->ins) = vg->slot;
  if ( LOBYTE(v6->ins) == 88 )
  {
    bcbase = fs->bcbase;
    if ( HIWORD(bcbase[v5].ins) != 0x7FFF && HIWORD(bcbase[v5].ins) - 0x8000 + (_DWORD)startpc != -2 )
      jmp_patch(fs, HIWORD(bcbase[v5].ins) - 0x8000 + startpc + 1, startpc);
    LOBYTE(v6->ins) = 50;
    HIWORD(v6->ins) = 0x7FFF;
  }
}

/*
==============
gola_fixup
==============
*/
void gola_fixup(LexState *ls, FuncScope *bl)
{
  VarInfo *vstack; 
  VarInfo *v5; 
  VarInfo *i; 
  unsigned __int64 gcptr64; 
  unsigned __int8 info; 
  VarInfo *v9; 
  FuncState *fs; 
  __int64 startpc; 
  char v12; 

  vstack = ls->vstack;
  v5 = &vstack[bl->vstart];
  for ( i = &vstack[ls->vtop]; v5 < i; ++v5 )
  {
    gcptr64 = v5->name.gcptr64;
    if ( v5->name.gcptr64 )
    {
      info = v5->info;
      if ( (info & 4) != 0 )
      {
        v9 = v5 + 1;
        for ( v5->name.gcptr64 = 0i64; v9 < i; ++v9 )
        {
          if ( v9->name.gcptr64 == gcptr64 && (v9->info & 2) != 0 )
          {
            if ( (bl->flags & 8) != 0 && v9->slot > v5->slot )
              gola_close(ls, v9);
            fs = ls->fs;
            startpc = v9->startpc;
            v9->name.gcptr64 = 0i64;
            BYTE1(fs->bcbase[startpc].ins) = v5->slot;
            jmp_patch(fs, startpc, v5->startpc);
          }
        }
      }
      else if ( (info & 2) != 0 )
      {
        if ( !bl->prev )
        {
          ls->linenumber = ls->fs->bcbase[v5->startpc].line;
          if ( gcptr64 != 1 )
            j_lj_lex_error(ls, 0, LJ_ERR_XLUNDEF, gcptr64 + 24);
          j_lj_lex_error(ls, 0, LJ_ERR_XBREAK);
        }
        v12 = 4;
        if ( gcptr64 == 1 )
          v12 = 2;
        bl->prev->flags |= v12;
        v5->slot = bl->nactvar;
        if ( (bl->flags & 8) != 0 )
          gola_close(ls, v5);
      }
    }
  }
}

/*
==============
gola_new
==============
*/
__int64 gola_new(LexState *ls, GCstr *name, unsigned __int8 info, unsigned int pc)
{
  __int64 vtop; 
  FuncState *fs; 
  unsigned int sizevstack; 
  __int64 v11; 
  __int64 result; 

  vtop = ls->vtop;
  fs = ls->fs;
  sizevstack = ls->sizevstack;
  if ( (unsigned int)vtop >= sizevstack )
  {
    if ( sizevstack >= 0xFFC4 )
      j_lj_lex_error(ls, 0, LJ_ERR_XLIMC);
    ls->vstack = (VarInfo *)j_lj_mem_grow(ls->L, ls->vstack, &ls->sizevstack, 0xFFC4u, 0x18u);
  }
  if ( name != (GCstr *)1 && !j_lj_tab_getstr(fs->kt, name) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1150, "name == ((GCstr *)(uintptr_t)1) || lj_tab_getstr(fs->kt, name) != ((void *)0)") )
    __debugbreak();
  v11 = vtop;
  result = (unsigned int)vtop;
  ls->vstack[v11].name.gcptr64 = (unsigned __int64)name;
  ls->vstack[v11].startpc = pc;
  ls->vstack[v11].slot = fs->nactvar;
  ls->vstack[v11].info = info;
  ls->vtop = vtop + 1;
  return result;
}

/*
==============
gola_resolve
==============
*/
void gola_resolve(LexState *ls, FuncScope *bl, unsigned int idx)
{
  VarInfo *vstack; 
  VarInfo *v5; 
  VarInfo *v6; 
  int v7; 
  unsigned __int8 slot; 
  FuncState *fs; 
  __int64 startpc; 
  unsigned __int64 gcptr64; 

  vstack = ls->vstack;
  v5 = &vstack[bl->vstart];
  v6 = &vstack[idx];
  if ( v5 < v6 )
  {
    v7 = 0;
    do
    {
      if ( v5->name.gcptr64 == v6->name.gcptr64 && (v5->info & 2) != 0 )
      {
        slot = v5->slot;
        fs = ls->fs;
        if ( slot < v6->slot )
        {
          gcptr64 = ls->vstack[fs->varmap[slot]].name.gcptr64;
          my_lua_assert_1(gcptr64 >= 7, "c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1200, "(uintptr_t)name >= VARNAME__MAX", "(uintptr_t)name >= VARNAME__MAX");
          ls->linenumber = ls->fs->bcbase[v5->startpc].line;
          LOBYTE(v7) = v5->name.gcptr64 != 1;
          my_lua_assert_1(v7, "c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1202, "(&((GCobj *)((vg->name)).gcptr64)->str) != ((GCstr *)(uintptr_t)1)", "(&((GCobj *)((vg->name)).gcptr64)->str) != ((GCstr *)(uintptr_t)1)");
          j_lj_lex_error(ls, 0, LJ_ERR_XGSCOPE, v5->name.gcptr64 + 24, gcptr64 + 24);
        }
        startpc = v5->startpc;
        v5->name.gcptr64 = 0i64;
        BYTE1(fs->bcbase[startpc].ins) = v6->slot;
        jmp_patch(fs, startpc, v6->startpc);
      }
      ++v5;
    }
    while ( v5 < v6 );
  }
}

/*
==============
jmp_append
==============
*/
void jmp_append(FuncState *fs, unsigned int *l1, unsigned int l2)
{
  unsigned int v6; 
  BCInsLine *bcbase; 
  int v8; 

  if ( l2 != -1 )
  {
    v6 = *l1;
    if ( v6 == -1 )
    {
      *l1 = l2;
    }
    else
    {
      bcbase = fs->bcbase;
      while ( 1 )
      {
        v8 = HIWORD(bcbase[v6].ins) - 0x8000;
        if ( HIWORD(bcbase[v6].ins) == 0x7FFF || v8 + v6 == -2 )
          break;
        v6 += v8 + 1;
      }
      jmp_patchins(fs, v6, l2);
    }
  }
}

/*
==============
jmp_dropval
==============
*/
void jmp_dropval(FuncState *fs, unsigned int list)
{
  BCInsLine *bcbase; 
  __int64 v3; 
  unsigned int ins; 
  BCInsLine *v5; 

  if ( list != -1 )
  {
    bcbase = fs->bcbase;
    do
    {
      v3 = list - 1;
      if ( !list )
        v3 = 0i64;
      ins = bcbase[v3].ins;
      v5 = &bcbase[v3];
      if ( (unsigned int)(unsigned __int8)ins - 12 <= 1 )
      {
        BYTE1(v5->ins) = 0;
        LOBYTE(v5->ins) = ins + 2;
      }
      else if ( BYTE1(ins) == 0xFF )
      {
        v5->ins = (BYTE1(bcbase[list].ins) << 8) | 0x80000058;
      }
      bcbase = fs->bcbase;
      if ( HIWORD(bcbase[list].ins) == 0x7FFF )
        break;
      list += HIWORD(bcbase[list].ins) - 0x8000 + 1;
    }
    while ( list != -1 );
  }
}

/*
==============
jmp_patch
==============
*/
void jmp_patch(FuncState *fs, unsigned int list, unsigned int target)
{
  if ( target == fs->pc )
  {
    jmp_tohere(fs, list);
  }
  else
  {
    if ( target >= fs->pc )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 365, "target < fs->pc") )
        __debugbreak();
    }
    jmp_patchval(fs, list, target, 0xFFu, target);
  }
}

/*
==============
jmp_patchins
==============
*/
void jmp_patchins(FuncState *fs, unsigned int pc, unsigned int dest)
{
  unsigned int v3; 
  BCInsLine *v5; 

  v3 = dest - pc + 0x7FFF;
  v5 = &fs->bcbase[pc];
  if ( dest == -1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 316, "dest != (~(BCPos)0)") )
    __debugbreak();
  if ( v3 > 0xFFFF )
    err_syntax(fs->ls, LJ_ERR_XJUMP);
  HIWORD(v5->ins) = v3;
}

/*
==============
jmp_patchtestreg
==============
*/
__int64 jmp_patchtestreg(FuncState *fs, unsigned int pc, unsigned int reg)
{
  BCInsLine *bcbase; 
  __int64 v4; 
  unsigned int ins; 
  BCInsLine *v6; 
  __int64 result; 
  unsigned int v8; 

  bcbase = fs->bcbase;
  v4 = pc - 1;
  if ( !pc )
    v4 = 0i64;
  ins = bcbase[v4].ins;
  v6 = &bcbase[v4];
  if ( (unsigned int)(unsigned __int8)ins - 12 <= 1 )
  {
    if ( reg != 255 && reg != HIWORD(ins) )
    {
      BYTE1(v6->ins) = reg;
      return 1i64;
    }
    BYTE1(v6->ins) = 0;
    LOBYTE(v6->ins) = ins + 2;
  }
  else
  {
    if ( BYTE1(ins) != 0xFF )
      return 0i64;
    if ( reg == 255 )
    {
      result = 1i64;
      v6->ins = (BYTE1(bcbase[pc].ins) << 8) | 0x80000058;
      return result;
    }
    v8 = BYTE1(v6[1].ins);
    BYTE1(v6->ins) = reg;
    if ( reg >= v8 )
    {
      result = 1i64;
      BYTE1(v6[1].ins) = reg + 1;
      return result;
    }
  }
  return 1i64;
}

/*
==============
jmp_patchval
==============
*/
void jmp_patchval(FuncState *fs, unsigned int list, unsigned int vtarget, unsigned int reg, unsigned int dtarget)
{
  unsigned int v8; 
  unsigned __int64 v9; 
  BCInsLine *bcbase; 
  int v11; 
  int v12; 
  BCInsLine *v13; 
  unsigned int v14; 

  if ( list != -1 )
  {
    do
    {
      v8 = -1;
      v9 = list;
      bcbase = fs->bcbase;
      if ( HIWORD(bcbase[v9].ins) != 0x7FFF )
        v8 = HIWORD(bcbase[v9].ins) - 0x8000 + list + 1;
      v11 = jmp_patchtestreg(fs, list, reg);
      v13 = &fs->bcbase[v9];
      if ( v11 )
      {
        v14 = vtarget - v12 + 0x7FFF;
        if ( vtarget == -1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 316, "dest != (~(BCPos)0)") )
          __debugbreak();
        if ( v14 > 0xFFFF )
          err_syntax(fs->ls, LJ_ERR_XJUMP);
      }
      else
      {
        v14 = dtarget - v12 + 0x7FFF;
        if ( dtarget == -1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 316, "dest != (~(BCPos)0)") )
          __debugbreak();
        if ( v14 > 0xFFFF )
          err_syntax(fs->ls, LJ_ERR_XJUMP);
      }
      HIWORD(v13->ins) = v14;
      list = v8;
    }
    while ( v8 != -1 );
  }
}

/*
==============
jmp_tohere
==============
*/
void jmp_tohere(FuncState *fs, unsigned int list)
{
  unsigned int jpc; 
  BCInsLine *bcbase; 
  int v6; 

  fs->lasttarget = fs->pc;
  if ( list != -1 )
  {
    jpc = fs->jpc;
    if ( jpc == -1 )
    {
      fs->jpc = list;
    }
    else
    {
      bcbase = fs->bcbase;
      while ( 1 )
      {
        v6 = HIWORD(bcbase[jpc].ins) - 0x8000;
        if ( HIWORD(bcbase[jpc].ins) == 0x7FFF || v6 + jpc == -2 )
          break;
        jpc += v6 + 1;
      }
      jmp_patchins(fs, jpc, list);
    }
  }
}

/*
==============
lex_match
==============
*/
void lex_match(LexState *ls, int what, int who, int line)
{
  const char *v7; 
  const char *v8; 
  int v9; 

  if ( ls->tok != what )
  {
    if ( line != ls->linenumber )
    {
      v7 = j_lj_lex_token2str(ls, what);
      v8 = j_lj_lex_token2str(ls, who);
      v9 = line;
      j_lj_lex_error(ls, ls->tok, LJ_ERR_XMATCH, v7, v8, v9);
    }
    err_token(ls, what);
  }
  j_lj_lex_next(ls);
}

/*
==============
lex_str
==============
*/
GCstr *lex_str(LexState *ls)
{
  int tok; 
  unsigned __int64 v3; 

  tok = ls->tok;
  if ( tok != 287 && tok != 266 )
    err_token(ls, 287);
  if ( (unsigned int)(ls->tokval.it64 >> 47) != -5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1023, "(((uint32_t)((&ls->tokval)->it64 >> 47)) == (~4u))") )
    __debugbreak();
  v3 = ls->tokval.u64 & 0x7FFFFFFFFFFFi64;
  j_lj_lex_next(ls);
  return (GCstr *)v3;
}

/*
==============
parse_args
==============
*/
void parse_args(LexState *ls, ExpDesc *e)
{
  int tok; 
  FuncState *fs; 
  int linenumber; 
  FuncState *v7; 
  unsigned int info; 
  unsigned int freereg; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  ExpDesc v; 

  tok = ls->tok;
  fs = ls->fs;
  linenumber = ls->linenumber;
  switch ( tok )
  {
    case 40:
      if ( linenumber != ls->lastline )
        err_syntax(ls, LJ_ERR_XAMBIG);
      j_lj_lex_next(ls);
      if ( ls->tok == 41 )
      {
        v.k = VVOID;
      }
      else
      {
        while ( 1 )
        {
          expr_binop(ls, &v, 0);
          if ( ls->tok != 44 )
            break;
          j_lj_lex_next(ls);
          v7 = ls->fs;
          expr_discharge(ls->fs, &v);
          if ( v.k == VNONRELOC )
          {
            info = v.u.s.info;
            if ( v.u.s.info >= v7->nactvar && info != --v7->freereg )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
                __debugbreak();
            }
          }
          freereg = v7->freereg;
          v10 = freereg + 1;
          if ( freereg + 1 > v7->framesize )
          {
            if ( v10 >= 0xFA )
              err_syntax(v7->ls, LJ_ERR_XSLOTS);
            v7->framesize = v10;
          }
          v7->freereg = v10;
          expr_toreg(v7, &v, freereg);
        }
        if ( v.k == VCALL )
          HIBYTE(fs->bcbase[v.u.s.info].ins) = 0;
      }
      lex_match(ls, 41, 40, linenumber);
      break;
    case 123:
      expr_table(ls, &v);
      break;
    case 288:
      v11 = ls->tokval.it64 >> 47;
      v.k = VKSTR;
      *(_QWORD *)&v.t = -1i64;
      if ( (_DWORD)v11 != -5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1911, "(((uint32_t)((&ls->tokval)->it64 >> 47)) == (~4u))") )
        __debugbreak();
      v.u.nval.u64 = ls->tokval.u64 & 0x7FFFFFFFFFFFi64;
      j_lj_lex_next(ls);
      break;
    default:
      err_syntax(ls, LJ_ERR_XFUNARG);
  }
  if ( e->k != VNONRELOC && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1917, "e->k == VNONRELOC") )
    __debugbreak();
  v12 = e->u.s.info;
  if ( v.k == VCALL )
  {
    v13 = ((v12 | ((v.u.s.aux - v12 - 2) << 8)) << 8) | 0x2000041;
  }
  else
  {
    if ( v.k != VVOID )
      expr_tonextreg(fs, &v);
    v13 = ((v12 | ((fs->freereg - v12 - 1) << 8)) << 8) | 0x2000042;
  }
  e->u.s.info = bcemit_INS(fs, v13);
  e->u.s.aux = v12;
  e->k = VCALL;
  *(_QWORD *)&e->t = -1i64;
  fs->bcbase[fs->pc - 1].line = linenumber;
  fs->freereg = v12 + 1;
}

/*
==============
parse_assignment
==============
*/
void parse_assignment(LexState *ls, LHSVarList *lh, unsigned int nvars)
{
  int tok; 
  FuncState *fs; 
  int v8; 
  unsigned int info; 
  LHSVarList *v10; 
  unsigned int freereg; 
  unsigned int v12; 
  unsigned int v13; 
  FuncState *v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  FuncState *v18; 
  LHSVarList *v19; 
  unsigned int v20; 
  ExpDesc e; 
  LHSVarList v; 

  if ( (unsigned int)(lh->v.k - 6) > 3 )
    err_syntax(ls, LJ_ERR_XSYNTAX);
  tok = ls->tok;
  if ( tok == 44 )
  {
    j_lj_lex_next(ls);
    v.prev = lh;
    expr_primary(ls, &v.v);
    if ( v.v.k == VLOCAL )
    {
      fs = ls->fs;
      v8 = 0;
      info = v.v.u.s.info;
      v10 = lh;
      freereg = ls->fs->freereg;
      do
      {
        if ( v10->v.k == VINDEXED )
        {
          if ( v10->v.u.s.info == info )
          {
            v8 = 1;
            v10->v.u.s.info = freereg;
          }
          if ( v10->v.u.s.aux == info )
          {
            v8 = 1;
            v10->v.u.s.aux = freereg;
          }
        }
        v10 = v10->prev;
      }
      while ( v10 );
      if ( v8 )
      {
        bcemit_INS(fs, ((freereg | (info << 8)) << 8) | 0x12);
        v12 = fs->freereg + 1;
        if ( v12 > fs->framesize )
        {
          if ( v12 >= 0xFA )
            err_syntax(fs->ls, LJ_ERR_XSLOTS);
          fs->framesize = v12;
        }
        fs->freereg = v12;
      }
    }
    if ( nvars + ls->level >= 0xC8 )
      err_limit(ls->fs, 0xC8u, "variable names");
    parse_assignment(ls, &v, nvars + 1);
    goto LABEL_38;
  }
  if ( tok != 61 )
    err_token(ls, 61);
  j_lj_lex_next(ls);
  v13 = 1;
  expr_binop(ls, &e, 0);
  while ( ls->tok == 44 )
  {
    j_lj_lex_next(ls);
    v14 = ls->fs;
    expr_discharge(ls->fs, &e);
    if ( e.k == VNONRELOC )
    {
      v15 = e.u.s.info;
      if ( e.u.s.info >= v14->nactvar && v15 != --v14->freereg )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
          __debugbreak();
      }
    }
    v16 = v14->freereg;
    v17 = v16 + 1;
    if ( v16 + 1 > v14->framesize )
    {
      if ( v17 >= 0xFA )
        err_syntax(v14->ls, LJ_ERR_XSLOTS);
      v14->framesize = v17;
    }
    v14->freereg = v17;
    expr_toreg(v14, &e, v16);
    expr_binop(ls, &e, 0);
    ++v13;
  }
  if ( v13 != nvars )
  {
    assign_adjust(ls, nvars, v13, &e);
LABEL_38:
    v18 = ls->fs;
    v19 = lh;
    v20 = ls->fs->freereg - 1;
    e.k = VNONRELOC;
    e.u.s.info = v20;
    *(_QWORD *)&e.t = -1i64;
    goto LABEL_36;
  }
  if ( e.k == VCALL )
  {
    if ( LOBYTE(ls->fs->bcbase[e.u.s.info].ins) == 71 )
    {
      --ls->fs->freereg;
      e.k = VRELOCABLE;
    }
    else
    {
      e.u.s.info = e.u.s.aux;
      e.k = VNONRELOC;
    }
  }
  v18 = ls->fs;
  v19 = lh;
LABEL_36:
  bcemit_store(v18, &v19->v, &e);
}

/*
==============
parse_block
==============
*/
void parse_block(LexState *ls)
{
  FuncState *fs; 
  FuncScope *bl; 
  unsigned int vtop; 
  char nactvar; 
  char v6; 

  fs = ls->fs;
  nactvar = ls->fs->nactvar;
  v6 = 0;
  vtop = fs->ls->vtop;
  bl = fs->bl;
  fs->bl = (FuncScope *)&bl;
  if ( fs->freereg != fs->nactvar && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1266, "fs->freereg == fs->nactvar") )
    __debugbreak();
  parse_chunk(ls);
  fscope_end(fs);
}

/*
==============
parse_body
==============
*/
void parse_body(LexState *ls, ExpDesc *e, int needself, int line)
{
  FuncState *fs; 
  signed __int64 v9; 
  unsigned int vtop; 
  int linenumber; 
  GCobj *v12; 
  int v13; 
  unsigned __int8 flags; 
  const char *v15; 
  const char *v16; 
  FuncScope *bl; 
  __int64 v18; 
  FuncState v19; 

  fs = ls->fs;
  v9 = ls->fs->bcbase - ls->bcstack;
  fs_init(ls, &v19);
  WORD2(v18) = LOBYTE(v19.nactvar);
  vtop = v19.ls->vtop;
  bl = v19.bl;
  v19.bl = (FuncScope *)&bl;
  LODWORD(v18) = vtop;
  if ( v19.freereg != v19.nactvar && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1266, "fs->freereg == fs->nactvar") )
    __debugbreak();
  v19.linedefined = line;
  v19.numparams = parse_params(ls, needself);
  v19.bcbase = &fs->bcbase[fs->pc];
  v19.bclim = fs->bclim - fs->pc;
  bcemit_INS(&v19, 0x59u);
  parse_chunk(ls);
  linenumber = ls->linenumber;
  if ( ls->tok != 262 )
  {
    if ( line == linenumber )
      err_token(ls, 262);
    v15 = j_lj_lex_token2str(ls, 262);
    v16 = j_lj_lex_token2str(ls, 265);
    j_lj_lex_error(ls, ls->tok, LJ_ERR_XMATCH, v15, v16, line, bl, v18);
  }
  ls->lastline = linenumber;
  v12 = (GCobj *)fs_finish(ls, linenumber);
  fs->bcbase = &ls->bcstack[v9];
  fs->bclim = ls->sizebcstack - v9;
  v13 = const_gc(fs, v12, 0xFFFFFFF8);
  e->u.s.info = bcemit_INS(fs, (v13 << 16) | 0x33u);
  e->k = VRELOCABLE;
  *(_QWORD *)&e->t = -1i64;
  flags = fs->flags;
  if ( (flags & 1) == 0 )
  {
    if ( (flags & 0x20) != 0 )
      flags |= 0x40u;
    fs->flags = flags | 1;
  }
  j_lj_lex_next(ls);
}

/*
==============
parse_break
==============
*/
void parse_break(LexState *ls)
{
  unsigned int v2; 

  ls->fs->bl->flags |= 2u;
  v2 = bcemit_jmp(ls->fs);
  gola_new(ls, (GCstr *)1, 2u, v2);
}

/*
==============
parse_chunk
==============
*/
void parse_chunk(LexState *ls)
{
  int v2; 
  unsigned int v3; 
  int v4; 
  unsigned int freereg; 

  if ( ++ls->level >= 0xC8 )
    j_lj_lex_error(ls, 0, LJ_ERR_XLEVELS);
  v2 = 537001991;
  do
  {
    v3 = ls->tok - 260;
    if ( v3 <= 0x1D && _bittest(&v2, v3) )
      break;
    v4 = parse_stmt(ls);
    if ( ls->tok == 59 )
      j_lj_lex_next(ls);
    freereg = ls->fs->freereg;
    if ( ls->fs->framesize < freereg || freereg < ls->fs->nactvar )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 2687, "ls->fs->framesize >= ls->fs->freereg && ls->fs->freereg >= ls->fs->nactvar") )
        __debugbreak();
    }
    ls->fs->freereg = ls->fs->nactvar;
  }
  while ( !v4 );
  --ls->level;
}

/*
==============
parse_for_iter
==============
*/
void parse_for_iter(LexState *ls, GCstr *indexname)
{
  FuncState *fs; 
  unsigned int v4; 
  unsigned int pc; 
  unsigned int v7; 
  unsigned int v8; 
  int tok; 
  int v10; 
  GCstr *v11; 
  int linenumber; 
  FuncState *v13; 
  unsigned int info; 
  unsigned int freereg; 
  unsigned int v16; 
  unsigned int v17; 
  int v18; 
  int v19; 
  FuncState *v20; 
  __int64 nactvar; 
  VarInfo *v22; 
  unsigned int v23; 
  __int64 v24; 
  VarInfo *v25; 
  __int64 v26; 
  VarInfo *v27; 
  unsigned int v28; 
  unsigned int v29; 
  FuncState *v30; 
  unsigned int v31; 
  unsigned int v32; 
  VarInfo *v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  FuncScope *bl; 
  unsigned int vtop; 
  char v39; 
  char v40; 
  ExpDesc v; 

  fs = ls->fs;
  v4 = 4;
  pc = ls->fs->pc;
  v7 = ls->fs->freereg + 3;
  var_new(ls, 0, (GCstr *)4);
  v8 = 1;
  var_new(ls, 1u, (GCstr *)5);
  var_new(ls, 2u, (GCstr *)6);
  var_new(ls, 3u, indexname);
  while ( 1 )
  {
    tok = ls->tok;
    if ( tok != 44 )
      break;
    j_lj_lex_next(ls);
    v10 = ls->tok;
    if ( v10 != 287 && v10 != 266 )
      err_token(ls, 287);
    if ( (unsigned int)(ls->tokval.it64 >> 47) != -5 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1023, "(((uint32_t)((&ls->tokval)->it64 >> 47)) == (~4u))") )
        __debugbreak();
    }
    v11 = (GCstr *)(ls->tokval.u64 & 0x7FFFFFFFFFFFi64);
    j_lj_lex_next(ls);
    var_new(ls, v4++, v11);
  }
  if ( tok != 268 )
    err_token(ls, 268);
  j_lj_lex_next(ls);
  linenumber = ls->linenumber;
  expr_binop(ls, &v, 0);
  while ( ls->tok == 44 )
  {
    j_lj_lex_next(ls);
    v13 = ls->fs;
    expr_discharge(ls->fs, &v);
    if ( v.k == VNONRELOC )
    {
      info = v.u.s.info;
      if ( v.u.s.info >= v13->nactvar && info != --v13->freereg )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
          __debugbreak();
      }
    }
    freereg = v13->freereg;
    v16 = freereg + 1;
    if ( freereg + 1 > v13->framesize )
    {
      if ( v16 >= 0xFA )
        err_syntax(v13->ls, LJ_ERR_XSLOTS);
      v13->framesize = v16;
    }
    v13->freereg = v16;
    expr_toreg(v13, &v, freereg);
    expr_binop(ls, &v, 0);
    ++v8;
  }
  assign_adjust(ls, 3u, v8, &v);
  v17 = fs->freereg + 4;
  if ( v17 > fs->framesize )
  {
    if ( v17 >= 0xFA )
      err_syntax(fs->ls, LJ_ERR_XSLOTS);
    fs->framesize = v17;
  }
  if ( v4 <= 5 && predict_next(ls, fs, pc) )
  {
    v18 = 72;
    v19 = 70;
  }
  else
  {
    v18 = 88;
    v19 = 69;
  }
  v20 = ls->fs;
  nactvar = ls->fs->nactvar;
  v22 = &ls->vstack[ls->fs->varmap[nactvar]];
  v23 = ls->fs->pc;
  v22->slot = nactvar;
  v24 = (unsigned int)(nactvar + 1);
  v22->startpc = v23;
  v22->info = 0;
  v25 = &ls->vstack[v20->varmap[v24]];
  v25->startpc = v20->pc;
  v25->slot = v24;
  v26 = (unsigned int)(v24 + 1);
  v25->info = 0;
  v27 = &ls->vstack[v20->varmap[v26]];
  v27->startpc = v20->pc;
  *(_WORD *)&v27->slot = (unsigned __int8)v26;
  v20->nactvar = v26 + 1;
  if ( ls->tok != 259 )
    err_token(ls, 259);
  j_lj_lex_next(ls);
  v28 = bcemit_INS(fs, v18 | ((v7 | 0x7FFF00) << 8));
  v39 = fs->nactvar;
  v40 = 0;
  vtop = fs->ls->vtop;
  bl = fs->bl;
  v29 = fs->nactvar;
  fs->bl = (FuncScope *)&bl;
  if ( fs->freereg != v29 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1266, "fs->freereg == fs->nactvar") )
    __debugbreak();
  v30 = ls->fs;
  v31 = v4 - 3;
  v32 = ls->fs->nactvar;
  if ( v4 != 3 )
  {
    do
    {
      v33 = &ls->vstack[v30->varmap[v32]];
      v34 = v30->pc;
      v33->slot = v32++;
      v33->startpc = v34;
      v33->info = 0;
      --v31;
    }
    while ( v31 );
  }
  v30->nactvar = v32;
  v35 = fs->freereg + v4 - 3;
  if ( v35 > fs->framesize )
  {
    if ( v35 >= 0xFA )
      err_syntax(fs->ls, LJ_ERR_XSLOTS);
    fs->framesize = v35;
  }
  fs->freereg = v35;
  parse_block(ls);
  fscope_end(fs);
  jmp_patchins(fs, v28, fs->pc);
  bcemit_INS(fs, v19 | ((v7 | ((v4 - 2) << 16) | 0x300) << 8));
  v36 = bcemit_INS(fs, (v7 << 8) | 0x7FFF0052);
  fs->bcbase[v36 - 1].line = linenumber;
  fs->bcbase[v36].line = linenumber;
  jmp_patchins(fs, v36, v28 + 1);
}

/*
==============
parse_for_num
==============
*/
void parse_for_num(LexState *ls, GCstr *varname, int line)
{
  FuncState *fs; 
  unsigned int freereg; 
  unsigned int v8; 
  FuncState *v9; 
  __int64 nactvar; 
  VarInfo *v11; 
  unsigned int pc; 
  __int64 v13; 
  VarInfo *v14; 
  __int64 v15; 
  VarInfo *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  FuncState *v20; 
  __int64 v21; 
  VarInfo *v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  FuncScope *bl; 
  unsigned int vtop; 
  char v28; 
  char v29; 

  fs = ls->fs;
  freereg = ls->fs->freereg;
  var_new(ls, 0, (GCstr *)1);
  var_new(ls, 1u, (GCstr *)2);
  var_new(ls, 2u, (GCstr *)3);
  var_new(ls, 3u, varname);
  if ( ls->tok != 61 )
    err_token(ls, 61);
  j_lj_lex_next(ls);
  expr_next(ls);
  if ( ls->tok != 44 )
    err_token(ls, 44);
  j_lj_lex_next(ls);
  expr_next(ls);
  if ( ls->tok == 44 )
  {
    j_lj_lex_next(ls);
    expr_next(ls);
  }
  else
  {
    bcemit_INS(fs, (fs->freereg << 8) | 0x10029);
    v8 = fs->freereg + 1;
    if ( v8 > fs->framesize )
    {
      if ( v8 >= 0xFA )
        err_syntax(fs->ls, LJ_ERR_XSLOTS);
      fs->framesize = v8;
    }
    fs->freereg = v8;
  }
  v9 = ls->fs;
  nactvar = ls->fs->nactvar;
  v11 = &ls->vstack[ls->fs->varmap[nactvar]];
  pc = ls->fs->pc;
  v11->slot = nactvar;
  v13 = (unsigned int)(nactvar + 1);
  v11->startpc = pc;
  v11->info = 0;
  v14 = &ls->vstack[v9->varmap[v13]];
  v14->startpc = v9->pc;
  v14->slot = v13;
  v15 = (unsigned int)(v13 + 1);
  v14->info = 0;
  v16 = &ls->vstack[v9->varmap[v15]];
  v16->startpc = v9->pc;
  *(_WORD *)&v16->slot = (unsigned __int8)v15;
  v9->nactvar = v15 + 1;
  if ( ls->tok != 259 )
    err_token(ls, 259);
  j_lj_lex_next(ls);
  v17 = freereg << 8;
  v18 = bcemit_INS(fs, v17 | 0x7FFF004D);
  v28 = fs->nactvar;
  v29 = 0;
  vtop = fs->ls->vtop;
  bl = fs->bl;
  v19 = fs->nactvar;
  fs->bl = (FuncScope *)&bl;
  if ( fs->freereg != v19 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1266, "fs->freereg == fs->nactvar") )
    __debugbreak();
  v20 = ls->fs;
  v21 = ls->fs->nactvar;
  v22 = &ls->vstack[ls->fs->varmap[v21]];
  v23 = ls->fs->pc;
  v22->slot = v21;
  v22->startpc = v23;
  v22->info = 0;
  v20->nactvar = v21 + 1;
  v24 = fs->freereg + 1;
  if ( v24 > fs->framesize )
  {
    if ( v24 >= 0xFA )
      err_syntax(fs->ls, LJ_ERR_XSLOTS);
    fs->framesize = v24;
  }
  fs->freereg = v24;
  parse_block(ls);
  fscope_end(fs);
  v25 = bcemit_INS(fs, v17 | 0x7FFF004F);
  fs->bcbase[v25].line = line;
  jmp_patchins(fs, v25, v18 + 1);
  jmp_patchins(fs, v18, fs->pc);
}

/*
==============
parse_func
==============
*/
void parse_func(LexState *ls, int line)
{
  int v3; 
  GCstr *v5; 
  int tok; 
  FuncState *fs; 
  unsigned int freereg; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  GCobj *v12; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int info; 
  unsigned int v20; 
  unsigned int v21; 
  FuncState *v22; 
  unsigned int v23; 
  unsigned int v24; 
  int v25; 
  unsigned int v26; 
  FuncState *v27; 
  ExpDesc e; 
  ExpDesc v29; 
  ExpDesc v30; 

  v3 = 0;
  j_lj_lex_next(ls);
  v5 = lex_str(ls);
  var_lookup_(ls->fs, v5, &e, 1);
  tok = ls->tok;
  if ( tok == 46 )
  {
    while ( 1 )
    {
      fs = ls->fs;
      expr_discharge(ls->fs, &e);
      if ( e.k != VNONRELOC )
        goto LABEL_5;
      if ( e.t != e.f )
        break;
LABEL_15:
      j_lj_lex_next(ls);
      v11 = ls->tok;
      v29.k = VKSTR;
      v29.u.s.info = 0;
      *(_QWORD *)&v29.t = -1i64;
      if ( v11 != 287 && v11 != 266 )
        err_token(ls, 287);
      if ( (unsigned int)(ls->tokval.it64 >> 47) != -5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1023, "(((uint32_t)((&ls->tokval)->it64 >> 47)) == (~4u))") )
        __debugbreak();
      v12 = (GCobj *)(ls->tokval.u64 & 0x7FFFFFFFFFFFi64);
      j_lj_lex_next(ls);
      v29.u.nval.u64 = (unsigned __int64)v12;
      e.k = VINDEXED;
      if ( v29.k == VKNUM )
      {
        _XMM1 = v29.u.nval.u64;
        __asm { vcvttsd2si ecx, xmm1 }
        if ( _ECX != (unsigned __int8)_ECX )
          goto LABEL_27;
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, ecx }
        if ( v29.u.nval.n != *(double *)&_XMM0 )
          goto LABEL_27;
        v17 = _ECX + 256;
      }
      else
      {
        if ( v29.k != VKSTR || (v18 = const_gc(fs, v12, 0xFFFFFFFB), v18 > 0xFF) )
        {
LABEL_27:
          expr_discharge(fs, &v29);
          if ( v29.k == VNONRELOC )
          {
            if ( v29.t != v29.f )
            {
              info = v29.u.s.info;
              if ( v29.u.s.info < fs->nactvar )
                goto LABEL_30;
LABEL_39:
              expr_toreg(fs, &v29, info);
            }
            v17 = v29.u.s.info;
            goto LABEL_41;
          }
LABEL_30:
          expr_discharge(fs, &v29);
          if ( v29.k == VNONRELOC )
          {
            v20 = v29.u.s.info;
            if ( v29.u.s.info >= fs->nactvar && v20 != --fs->freereg )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
                __debugbreak();
            }
          }
          info = fs->freereg;
          v21 = info + 1;
          if ( info + 1 > fs->framesize )
          {
            if ( v21 >= 0xFA )
              err_syntax(fs->ls, LJ_ERR_XSLOTS);
            fs->framesize = v21;
          }
          fs->freereg = v21;
          goto LABEL_39;
        }
        v17 = ~v18;
      }
LABEL_41:
      e.u.s.aux = v17;
      tok = ls->tok;
      if ( tok != 46 )
        goto LABEL_42;
    }
    freereg = e.u.s.info;
    if ( e.u.s.info < fs->nactvar )
    {
LABEL_5:
      expr_discharge(fs, &e);
      if ( e.k == VNONRELOC )
      {
        v9 = e.u.s.info;
        if ( e.u.s.info >= fs->nactvar && v9 != --fs->freereg )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
            __debugbreak();
        }
      }
      freereg = fs->freereg;
      v10 = freereg + 1;
      if ( freereg + 1 > fs->framesize )
      {
        if ( v10 >= 0xFA )
          err_syntax(fs->ls, LJ_ERR_XSLOTS);
        fs->framesize = v10;
      }
      fs->freereg = v10;
    }
    expr_toreg(fs, &e, freereg);
    goto LABEL_15;
  }
LABEL_42:
  if ( tok == 58 )
  {
    v22 = ls->fs;
    v3 = 1;
    expr_discharge(ls->fs, &e);
    if ( e.k != VNONRELOC )
      goto LABEL_46;
    if ( e.t == e.f )
    {
LABEL_56:
      j_lj_lex_next(ls);
      v29.k = VKSTR;
      v29.u.s.info = 0;
      *(_QWORD *)&v29.t = -1i64;
      v29.u.nval.u64 = (unsigned __int64)lex_str(ls);
      expr_index(v22, &e, &v29);
      goto LABEL_57;
    }
    v23 = e.u.s.info;
    if ( e.u.s.info < v22->nactvar )
    {
LABEL_46:
      expr_discharge(v22, &e);
      if ( e.k == VNONRELOC )
      {
        v24 = e.u.s.info;
        if ( e.u.s.info >= v22->nactvar )
        {
          v25 = v22->freereg - 1;
          v22->freereg = v25;
          if ( v24 != v25 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
              __debugbreak();
          }
        }
      }
      v23 = v22->freereg;
      v26 = v23 + 1;
      if ( v23 + 1 > v22->framesize )
      {
        if ( v26 >= 0xFA )
          err_syntax(v22->ls, LJ_ERR_XSLOTS);
        v22->framesize = v26;
      }
      v22->freereg = v26;
    }
    expr_toreg(v22, &e, v23);
    goto LABEL_56;
  }
LABEL_57:
  parse_body(ls, &v30, v3, line);
  v27 = ls->fs;
  bcemit_store(ls->fs, &e, &v30);
  v27->bcbase[v27->pc - 1].line = line;
}

/*
==============
parse_if
==============
*/
void parse_if(LexState *ls, int line)
{
  FuncState *fs; 
  unsigned int v5; 
  unsigned int f; 
  int i; 
  unsigned int v8; 
  BCInsLine *bcbase; 
  unsigned int j; 
  unsigned int v11; 
  unsigned int jpc; 
  BCInsLine *k; 
  unsigned int v14; 
  ExpKind v15; 
  FuncState *v16; 
  FuncState *v17; 
  unsigned int v18; 
  BCInsLine *v19; 
  unsigned int m; 
  int v21; 
  BCInsLine *v22; 
  unsigned int n; 
  int v24; 
  const char *v25; 
  const char *v26; 
  FuncScope *bl; 
  unsigned int vtop; 
  char nactvar; 
  char v30; 
  ExpDesc v; 

  fs = ls->fs;
  v5 = -1;
  f = parse_then(ls);
  for ( i = ls->tok; i == 261; i = ls->tok )
  {
    v8 = bcemit_jmp(fs);
    if ( v8 != -1 )
    {
      if ( v5 == -1 )
      {
        v5 = v8;
      }
      else
      {
        bcbase = fs->bcbase;
        for ( j = v5; HIWORD(bcbase[j].ins) != 0x7FFF && HIWORD(bcbase[j].ins) - 0x8000 + j != -2; j += HIWORD(bcbase[j].ins) - 0x8000 + 1 )
          ;
        v11 = v8 - j + 0x7FFF;
        if ( v11 > 0xFFFF )
          err_syntax(fs->ls, LJ_ERR_XJUMP);
        HIWORD(bcbase[j].ins) = v11;
      }
    }
    fs->lasttarget = fs->pc;
    if ( f != -1 )
    {
      jpc = fs->jpc;
      if ( jpc == -1 )
      {
        fs->jpc = f;
      }
      else
      {
        for ( k = fs->bcbase; HIWORD(k[jpc].ins) != 0x7FFF && HIWORD(k[jpc].ins) - 0x8000 + jpc != -2; jpc += HIWORD(k[jpc].ins) - 0x8000 + 1 )
          ;
        v14 = f - jpc + 0x7FFF;
        if ( v14 > 0xFFFF )
          err_syntax(fs->ls, LJ_ERR_XJUMP);
        HIWORD(k[jpc].ins) = v14;
      }
    }
    j_lj_lex_next(ls);
    expr_binop(ls, &v, 0);
    v15 = v.k;
    v16 = ls->fs;
    if ( v.k == VKNIL )
      v15 = VKFALSE;
    v.k = v15;
    bcemit_branch_t(v16, &v);
    f = v.f;
    if ( ls->tok != 275 )
      err_token(ls, 275);
    j_lj_lex_next(ls);
    v17 = ls->fs;
    nactvar = ls->fs->nactvar;
    v30 = 0;
    vtop = v17->ls->vtop;
    bl = v17->bl;
    v17->bl = (FuncScope *)&bl;
    if ( v17->freereg != v17->nactvar && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1266, "fs->freereg == fs->nactvar") )
      __debugbreak();
    parse_chunk(ls);
    fscope_end(v17);
  }
  if ( i == 260 )
  {
    v18 = bcemit_jmp(fs);
    if ( v18 != -1 )
    {
      if ( v5 == -1 )
      {
        v5 = v18;
      }
      else
      {
        v19 = fs->bcbase;
        for ( m = v5; ; m += v21 + 1 )
        {
          v21 = HIWORD(v19[m].ins) - 0x8000;
          if ( HIWORD(v19[m].ins) == 0x7FFF || v21 + m == -2 )
            break;
        }
        jmp_patchins(fs, m, v18);
      }
    }
    jmp_tohere(fs, f);
    j_lj_lex_next(ls);
    parse_block(ls);
  }
  else if ( f != -1 )
  {
    if ( v5 == -1 )
    {
      v5 = f;
    }
    else
    {
      v22 = fs->bcbase;
      for ( n = v5; ; n += v24 + 1 )
      {
        v24 = HIWORD(v22[n].ins) - 0x8000;
        if ( HIWORD(v22[n].ins) == 0x7FFF || v24 + n == -2 )
          break;
      }
      jmp_patchins(fs, n, f);
    }
  }
  jmp_tohere(fs, v5);
  if ( ls->tok != 262 )
  {
    if ( line != ls->linenumber )
    {
      v25 = j_lj_lex_token2str(ls, 262);
      v26 = j_lj_lex_token2str(ls, 267);
      j_lj_lex_error(ls, ls->tok, LJ_ERR_XMATCH, v25, v26, line);
    }
    err_token(ls, 262);
  }
  j_lj_lex_next(ls);
}

/*
==============
parse_label
==============
*/
void parse_label(LexState *ls)
{
  FuncState *fs; 
  GCstr *v3; 
  VarInfo *vstack; 
  VarInfo *v5; 
  VarInfo *i; 
  __int64 v7; 
  int tok; 
  unsigned int level; 
  unsigned int v10; 

  fs = ls->fs;
  fs->lasttarget = ls->fs->pc;
  fs->bl->flags |= 4u;
  j_lj_lex_next(ls);
  v3 = lex_str(ls);
  vstack = ls->vstack;
  v5 = &vstack[ls->fs->bl->vstart];
  for ( i = &vstack[ls->vtop]; v5 < i; ++v5 )
  {
    if ( (GCstr *)v5->name.gcptr64 == v3 && (v5->info & 4) != 0 )
      j_lj_lex_error(ls, 0, LJ_ERR_XLDUP, &v3[1]);
  }
  v7 = (unsigned int)gola_new(ls, v3, 4u, fs->pc);
  if ( ls->tok != 285 )
    err_token(ls, 285);
  j_lj_lex_next(ls);
  tok = ls->tok;
  if ( tok == 285 )
  {
    level = ls->level;
    do
    {
      v10 = level + 1;
      ls->level = v10;
      if ( v10 >= 0xC8 )
        j_lj_lex_error(ls, 0, LJ_ERR_XLEVELS);
      parse_label(ls);
      --ls->level;
      tok = ls->tok;
      level = ls->level;
    }
    while ( tok == 285 );
  }
  if ( (unsigned int)(tok - 260) <= 2 || tok == 289 )
    ls->vstack[v7].slot = fs->bl->nactvar;
  gola_resolve(ls, fs->bl, v7);
}

/*
==============
parse_local
==============
*/
void parse_local(LexState *ls)
{
  FuncState *fs; 
  GCstr *v3; 
  unsigned int freereg; 
  unsigned int v5; 
  FuncState *v6; 
  __int64 nactvar; 
  VarInfo *v8; 
  unsigned int pc; 
  unsigned int info; 
  unsigned int v11; 
  unsigned int v12; 
  int tok; 
  GCstr *v14; 
  int v15; 
  FuncState *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  FuncState *v20; 
  unsigned int i; 
  VarInfo *v22; 
  unsigned int v23; 
  ExpDesc e; 

  if ( ls->tok == 265 )
  {
    j_lj_lex_next(ls);
    fs = ls->fs;
    v3 = lex_str(ls);
    var_new(ls, 0, v3);
    freereg = fs->freereg;
    v5 = freereg + 1;
    if ( freereg + 1 > fs->framesize )
    {
      if ( v5 >= 0xFA )
        err_syntax(fs->ls, LJ_ERR_XSLOTS);
      fs->framesize = v5;
    }
    fs->freereg = v5;
    v6 = ls->fs;
    nactvar = ls->fs->nactvar;
    v8 = &ls->vstack[ls->fs->varmap[nactvar]];
    pc = ls->fs->pc;
    v8->slot = nactvar;
    v8->startpc = pc;
    v8->info = 0;
    v6->nactvar = nactvar + 1;
    parse_body(ls, &e, 0, ls->linenumber);
    if ( e.k == VNONRELOC )
    {
      info = e.u.s.info;
      if ( e.u.s.info >= fs->nactvar && info != --fs->freereg )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
          __debugbreak();
      }
    }
    expr_toreg(fs, &e, freereg);
    ls->vstack[fs->varmap[fs->nactvar - 1]].startpc = fs->pc;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      tok = ls->tok;
      if ( tok != 287 && tok != 266 )
        err_token(ls, 287);
      if ( (unsigned int)(ls->tokval.it64 >> 47) != -5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1023, "(((uint32_t)((&ls->tokval)->it64 >> 47)) == (~4u))") )
        __debugbreak();
      v14 = (GCstr *)(ls->tokval.u64 & 0x7FFFFFFFFFFFi64);
      j_lj_lex_next(ls);
      var_new(ls, v12, v14);
      v15 = ls->tok;
      ++v12;
      if ( v15 != 44 )
        break;
      j_lj_lex_next(ls);
    }
    if ( v15 == 61 )
    {
      j_lj_lex_next(ls);
      v11 = 1;
      expr_binop(ls, &e, 0);
      while ( ls->tok == 44 )
      {
        j_lj_lex_next(ls);
        v16 = ls->fs;
        expr_discharge(ls->fs, &e);
        if ( e.k == VNONRELOC )
        {
          v17 = e.u.s.info;
          if ( e.u.s.info >= v16->nactvar && v17 != --v16->freereg )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
              __debugbreak();
          }
        }
        v18 = v16->freereg;
        v19 = v18 + 1;
        if ( v18 + 1 > v16->framesize )
        {
          if ( v19 >= 0xFA )
            err_syntax(v16->ls, LJ_ERR_XSLOTS);
          v16->framesize = v19;
        }
        v16->freereg = v19;
        expr_toreg(v16, &e, v18);
        expr_binop(ls, &e, 0);
        ++v11;
      }
    }
    else
    {
      e.k = VVOID;
    }
    assign_adjust(ls, v12, v11, &e);
    v20 = ls->fs;
    for ( i = ls->fs->nactvar; v12; --v12 )
    {
      v22 = &ls->vstack[v20->varmap[i]];
      v23 = v20->pc;
      v22->slot = i++;
      v22->startpc = v23;
      v22->info = 0;
    }
    v20->nactvar = i;
  }
}

/*
==============
parse_params
==============
*/
__int64 parse_params(LexState *ls, int needself)
{
  FuncState *fs; 
  unsigned int v3; 
  lua_State *L; 
  GCstr *v7; 
  TValue *v8; 
  int tok; 
  GCstr *v10; 
  FuncState *v11; 
  unsigned int v12; 
  unsigned int i; 
  VarInfo *v14; 
  unsigned int pc; 
  unsigned int v16; 

  fs = ls->fs;
  v3 = 0;
  if ( ls->tok != 40 )
    err_token(ls, 40);
  j_lj_lex_next(ls);
  if ( needself )
  {
    L = ls->L;
    v7 = j_lj_str_new(L, "self", 4ui64);
    v8 = j_lj_tab_setstr(L, ls->fs->kt, v7);
    if ( v8->u64 == -1i64 )
      v8->u64 = 0xFFFEFFFFFFFFFFFFui64;
    if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
      j_lj_gc_step(L);
    var_new(ls, 0, v7);
    v3 = 1;
  }
  if ( ls->tok != 41 )
  {
    while ( 1 )
    {
      tok = ls->tok;
      if ( tok != 287 && tok != 266 )
        break;
      v10 = lex_str(ls);
      var_new(ls, v3++, v10);
      if ( ls->tok != 44 )
        goto LABEL_15;
      j_lj_lex_next(ls);
    }
    if ( tok != 280 )
      err_syntax(ls, LJ_ERR_XPARAM);
    j_lj_lex_next(ls);
    fs->flags |= 2u;
  }
LABEL_15:
  v11 = ls->fs;
  v12 = v3;
  for ( i = ls->fs->nactvar; v12; --v12 )
  {
    v14 = &ls->vstack[v11->varmap[i]];
    pc = v11->pc;
    v14->slot = i++;
    v14->startpc = pc;
    v14->info = 0;
  }
  v11->nactvar = i;
  if ( fs->nactvar != v3 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1830, "fs->nactvar == nparams") )
    __debugbreak();
  v16 = v3 + fs->freereg;
  if ( v16 > fs->framesize )
  {
    if ( v16 >= 0xFA )
      err_syntax(fs->ls, LJ_ERR_XSLOTS);
    fs->framesize = v16;
  }
  fs->freereg = v16;
  if ( ls->tok != 41 )
    err_token(ls, 41);
  j_lj_lex_next(ls);
  return v3;
}

/*
==============
parse_repeat
==============
*/
void parse_repeat(LexState *ls, int line)
{
  FuncState *fs; 
  unsigned int pc; 
  char nactvar; 
  ExpKind k; 
  FuncState *v8; 
  unsigned int f; 
  unsigned int v10; 
  const char *v11; 
  const char *v12; 
  FuncScope *v13; 
  __int64 v14; 
  FuncScope *bl; 
  __int64 v16; 
  ExpDesc v; 

  fs = ls->fs;
  pc = ls->fs->pc;
  nactvar = ls->fs->nactvar;
  fs->lasttarget = pc;
  BYTE4(v16) = nactvar;
  BYTE5(v16) = 1;
  LODWORD(v16) = fs->ls->vtop;
  bl = fs->bl;
  fs->bl = (FuncScope *)&bl;
  if ( fs->freereg != fs->nactvar && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1266, "fs->freereg == fs->nactvar") )
    __debugbreak();
  WORD2(v14) = LOBYTE(fs->nactvar);
  LODWORD(v14) = fs->ls->vtop;
  v13 = fs->bl;
  fs->bl = (FuncScope *)&v13;
  if ( fs->freereg != fs->nactvar && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1266, "fs->freereg == fs->nactvar") )
    __debugbreak();
  j_lj_lex_next(ls);
  bcemit_INS(fs, (fs->nactvar << 8) | 0x55);
  parse_chunk(ls);
  if ( ls->tok != 277 )
  {
    if ( line != ls->linenumber )
    {
      v11 = j_lj_lex_token2str(ls, 277);
      v12 = j_lj_lex_token2str(ls, 273);
      j_lj_lex_error(ls, ls->tok, LJ_ERR_XMATCH, v11, v12, line, v13, v14, bl, v16);
    }
    err_token(ls, 277);
  }
  j_lj_lex_next(ls);
  expr_binop(ls, &v, 0);
  k = v.k;
  v8 = ls->fs;
  if ( v.k == VKNIL )
    k = VKFALSE;
  v.k = k;
  bcemit_branch_t(v8, &v);
  f = v.f;
  if ( (v14 & 0x80000000000i64) != 0 )
  {
    ls->fs->bl->flags |= 2u;
    v10 = bcemit_jmp(ls->fs);
    gola_new(ls, (GCstr *)1, 2u, v10);
    jmp_tohere(fs, f);
    fscope_end(fs);
    f = bcemit_jmp(fs);
  }
  else
  {
    fscope_end(fs);
  }
  jmp_patch(fs, f, pc);
  jmp_patchins(fs, pc, fs->pc);
  fscope_end(fs);
}

/*
==============
parse_return
==============
*/
void parse_return(LexState *ls)
{
  FuncState *fs; 
  int tok; 
  int v4; 
  int v5; 
  FuncState *v6; 
  unsigned int info; 
  unsigned int freereg; 
  unsigned int v9; 
  BCInsLine *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  ExpDesc v; 

  fs = ls->fs;
  j_lj_lex_next(ls);
  fs->flags |= 0x20u;
  tok = ls->tok;
  if ( (unsigned int)(tok - 260) <= 0x1D && (v4 = 537001991, _bittest(&v4, tok - 260)) || tok == 59 )
  {
    v11 = 65611;
  }
  else
  {
    v5 = 1;
    expr_binop(ls, &v, 0);
    while ( ls->tok == 44 )
    {
      j_lj_lex_next(ls);
      v6 = ls->fs;
      expr_discharge(ls->fs, &v);
      if ( v.k == VNONRELOC )
      {
        info = v.u.s.info;
        if ( v.u.s.info >= v6->nactvar && info != --v6->freereg )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
            __debugbreak();
        }
      }
      freereg = v6->freereg;
      v9 = freereg + 1;
      if ( freereg + 1 > v6->framesize )
      {
        if ( v9 >= 0xFA )
          err_syntax(v6->ls, LJ_ERR_XSLOTS);
        v6->framesize = v9;
      }
      v6->freereg = v9;
      expr_toreg(v6, &v, freereg);
      expr_binop(ls, &v, 0);
      ++v5;
    }
    if ( v5 == 1 )
    {
      if ( v.k == VCALL )
      {
        v10 = &fs->bcbase[v.u.s.info];
        if ( LOBYTE(v10->ins) != 71 )
        {
          --fs->pc;
          v11 = (LOBYTE(v10->ins) + 2) | (*(unsigned __int16 *)((char *)&v10->ins + 1) << 8);
          goto LABEL_37;
        }
        goto $notailcall;
      }
      expr_discharge(fs, &v);
      if ( v.k != VNONRELOC )
        goto LABEL_22;
      if ( v.t == v.f )
      {
LABEL_32:
        v11 = (v.u.s.info << 8) | 0x2004C;
        goto LABEL_37;
      }
      v12 = v.u.s.info;
      if ( v.u.s.info < fs->nactvar )
      {
LABEL_22:
        expr_discharge(fs, &v);
        if ( v.k == VNONRELOC )
        {
          v13 = v.u.s.info;
          if ( v.u.s.info >= fs->nactvar && v13 != --fs->freereg )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 395, "reg == fs->freereg") )
              __debugbreak();
          }
        }
        v12 = fs->freereg;
        v14 = v12 + 1;
        if ( v12 + 1 > fs->framesize )
        {
          if ( v14 >= 0xFA )
            err_syntax(fs->ls, LJ_ERR_XSLOTS);
          fs->framesize = v14;
        }
        fs->freereg = v14;
      }
      expr_toreg(fs, &v, v12);
      goto LABEL_32;
    }
    if ( v.k == VCALL )
    {
$notailcall:
      HIBYTE(fs->bcbase[v.u.s.info].ins) = 0;
      v11 = (fs->nactvar << 8) | ((v.u.s.aux - fs->nactvar) << 16) | 0x49;
      goto LABEL_37;
    }
    expr_tonextreg(fs, &v);
    v11 = (fs->nactvar << 8) | ((v5 + 1) << 16) | 0x4A;
  }
LABEL_37:
  if ( (fs->flags & 1) != 0 )
    bcemit_INS(fs, 0x80000032);
  bcemit_INS(fs, v11);
}

/*
==============
parse_stmt
==============
*/
__int64 parse_stmt(LexState *ls)
{
  int linenumber; 
  FuncState *v3; 
  unsigned int pc; 
  ExpKind k; 
  FuncState *v6; 
  unsigned int v7; 
  unsigned int v8; 
  FuncState *fs; 
  GCstr *v10; 
  int tok; 
  FuncState *v13; 
  GCstr *v14; 
  VarInfo *vstack; 
  VarInfo *v16; 
  VarInfo *v17; 
  unsigned int v18; 
  FuncState *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  FuncScope *bl; 
  __int64 v25; 
  LHSVarList v; 

  linenumber = ls->linenumber;
  switch ( ls->tok )
  {
    case 0x102:
      j_lj_lex_next(ls);
      parse_break(ls);
      return 1i64;
    case 0x103:
      j_lj_lex_next(ls);
      parse_block(ls);
      lex_match(ls, 262, 259, linenumber);
      return 0i64;
    case 0x108:
      fs = ls->fs;
      BYTE4(v25) = ls->fs->nactvar;
      BYTE5(v25) = 1;
      LODWORD(v25) = fs->ls->vtop;
      bl = fs->bl;
      fs->bl = (FuncScope *)&bl;
      if ( fs->freereg != fs->nactvar && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1266, "fs->freereg == fs->nactvar") )
        __debugbreak();
      j_lj_lex_next(ls);
      v10 = lex_str(ls);
      tok = ls->tok;
      if ( tok == 61 )
      {
        parse_for_num(ls, v10, linenumber);
      }
      else
      {
        if ( tok != 44 && tok != 268 )
          err_syntax(ls, LJ_ERR_XFOR);
        parse_for_iter(ls, v10);
      }
      if ( ls->tok != 262 )
      {
        if ( linenumber == ls->linenumber )
          err_token(ls, 262);
        v22 = j_lj_lex_token2str(ls, 262);
        v23 = j_lj_lex_token2str(ls, 264);
        j_lj_lex_error(ls, ls->tok, LJ_ERR_XMATCH, v22, v23, linenumber, bl, v25);
      }
      j_lj_lex_next(ls);
      fscope_end(fs);
      return 0i64;
    case 0x109:
      parse_func(ls, linenumber);
      return 0i64;
    case 0x10A:
      if ( j_lj_lex_lookahead(ls) != 287 )
        goto LABEL_40;
      j_lj_lex_next(ls);
      v13 = ls->fs;
      v14 = lex_str(ls);
      vstack = ls->vstack;
      v16 = &vstack[ls->fs->bl->vstart];
      v17 = &vstack[ls->vtop];
      if ( v16 >= v17 )
        goto LABEL_39;
      break;
    case 0x10B:
      parse_if(ls, linenumber);
      return 0i64;
    case 0x10D:
      j_lj_lex_next(ls);
      parse_local(ls);
      return 0i64;
    case 0x111:
      parse_repeat(ls, linenumber);
      return 0i64;
    case 0x112:
      parse_return(ls);
      return 1i64;
    case 0x116:
      v3 = ls->fs;
      j_lj_lex_next(ls);
      pc = v3->pc;
      v3->lasttarget = pc;
      expr_binop(ls, &v.v, 0);
      k = v.v.k;
      v6 = ls->fs;
      if ( v.v.k == VKNIL )
        k = VKFALSE;
      v.v.k = k;
      bcemit_branch_t(v6, &v.v);
      BYTE4(v25) = v3->nactvar;
      BYTE5(v25) = 1;
      LODWORD(v25) = v3->ls->vtop;
      bl = v3->bl;
      v3->bl = (FuncScope *)&bl;
      if ( v3->freereg != v3->nactvar && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1266, "fs->freereg == fs->nactvar") )
        __debugbreak();
      if ( ls->tok != 259 )
        err_token(ls, 259);
      j_lj_lex_next(ls);
      v7 = bcemit_INS(v3, (v3->nactvar << 8) | 0x55);
      parse_block(ls);
      v8 = bcemit_jmp(v3);
      jmp_patch(v3, v8, pc);
      if ( ls->tok != 262 )
      {
        if ( linenumber == ls->linenumber )
          err_token(ls, 262);
        v20 = j_lj_lex_token2str(ls, 262);
        v21 = j_lj_lex_token2str(ls, 278);
        j_lj_lex_error(ls, ls->tok, LJ_ERR_XMATCH, v20, v21, linenumber, bl, v25);
      }
      j_lj_lex_next(ls);
      fscope_end(v3);
      jmp_tohere(v3, v.v.f);
      jmp_patchins(v3, v7, v3->pc);
      return 0i64;
    case 0x11D:
      parse_label(ls);
      return 0i64;
    default:
LABEL_40:
      v19 = ls->fs;
      expr_primary(ls, &v.v);
      if ( v.v.k == VCALL )
      {
        HIBYTE(v19->bcbase[v.v.u.s.info].ins) = 1;
      }
      else
      {
        v.prev = NULL;
        parse_assignment(ls, &v, 1u);
      }
      return 0i64;
  }
  while ( (GCstr *)v16->name.gcptr64 != v14 || (v16->info & 4) == 0 )
  {
    if ( ++v16 >= v17 )
      goto LABEL_39;
  }
  bcemit_INS(v13, (v16->slot << 8) | 0x7FFF0055);
LABEL_39:
  v13->bl->flags |= 4u;
  v18 = bcemit_jmp(v13);
  gola_new(ls, v14, 2u, v18);
  return 0i64;
}

/*
==============
parse_then
==============
*/
__int64 parse_then(LexState *ls)
{
  ExpKind k; 
  FuncState *fs; 
  ExpDesc v; 

  j_lj_lex_next(ls);
  expr_binop(ls, &v, 0);
  k = v.k;
  if ( v.k == VKNIL )
    k = VKFALSE;
  fs = ls->fs;
  v.k = k;
  bcemit_branch_t(fs, &v);
  if ( ls->tok != 275 )
    err_token(ls, 275);
  j_lj_lex_next(ls);
  parse_block(ls);
  return v.f;
}

/*
==============
predict_next
==============
*/
__int64 predict_next(LexState *ls, FuncState *fs, unsigned int pc)
{
  unsigned __int64 ins; 
  GCstr *v6; 
  const TValue *v7; 
  GCstr *v8; 
  const TValue *v9; 
  __int64 result; 
  unsigned __int16 *v11; 
  int v12; 
  const char *v13; 
  unsigned int v14; 
  unsigned __int64 gcptr64; 
  int v16; 
  __int64 v17; 
  char v18; 
  __int64 v19; 
  char v20; 

  ins = fs->bcbase[pc].ins;
  if ( (unsigned __int8)ins == 18 )
  {
    v11 = &fs->varmap[ins >> 16];
    if ( *(_BYTE *)(ls->vstack[*v11].name.gcptr64 + 9) != 4 )
    {
      v12 = 2502;
      v13 = "(((GCobj *)(((ls)->vstack[(fs)->varmap[(((BCReg)((ins)>>16)))]]).name).gcptr64))->gch.gct == ~(~4u)";
LABEL_16:
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", v12, v13) )
        __debugbreak();
    }
  }
  else
  {
    if ( (unsigned __int8)ins != 45 )
    {
      result = 0;
      if ( (unsigned __int8)ins == 54 )
      {
        v6 = j_lj_str_new(ls->L, "pairs", 5ui64);
        v7 = j_lj_tab_getstr(fs->kt, v6);
        if ( v7 )
        {
          if ( !v7->it && v7->i == WORD1(ins) )
            return 1;
        }
        v8 = j_lj_str_new(ls->L, "next", 4ui64);
        v9 = j_lj_tab_getstr(fs->kt, v8);
        if ( v9 )
        {
          if ( !v9->it && v9->i == WORD1(ins) )
            return 1;
        }
      }
      return result;
    }
    v11 = &fs->uvmap[ins >> 16];
    if ( *(_BYTE *)(ls->vstack[*v11].name.gcptr64 + 9) != 4 )
    {
      v12 = 2505;
      v13 = "(((GCobj *)(ls->vstack[fs->uvmap[((BCReg)((ins)>>16))]].name).gcptr64))->gch.gct == ~(~4u)";
      goto LABEL_16;
    }
  }
  v14 = 0;
  gcptr64 = ls->vstack[*v11].name.gcptr64;
  v16 = *(_DWORD *)(gcptr64 + 16);
  if ( v16 == 5 )
  {
    v17 = 0i64;
    while ( 1 )
    {
      v18 = *(_BYTE *)(gcptr64 + v17++ + 24);
      if ( v18 != aPairs[v17 - 1] )
        break;
      if ( v17 == 6 )
        return 1;
    }
  }
  else if ( v16 == 4 )
  {
    v19 = 0i64;
    while ( 1 )
    {
      v20 = *(_BYTE *)(gcptr64 + v19++ + 24);
      if ( v20 != aNext[v19 - 1] )
        break;
      if ( v19 == 5 )
        return 1;
    }
  }
  return v14;
}

/*
==============
var_lookup_
==============
*/
__int64 var_lookup_(FuncState *fs, GCstr *name, ExpDesc *e, int first)
{
  __int64 v7; 
  __int64 v8; 
  unsigned __int16 *v9; 
  int v10; 
  __int64 nuv; 
  unsigned int v12; 
  unsigned __int16 *uvmap; 
  FuncScope *bl; 
  __int64 result; 
  unsigned int v16; 

  if ( !fs )
  {
    e->k = VGLOBAL;
    *(_QWORD *)&e->t = -1i64;
    e->u.nval.u64 = (unsigned __int64)name;
    return 0xFFFFFFFFi64;
  }
  v7 = fs->nactvar - 1;
  if ( (int)v7 < 0 )
    goto LABEL_6;
  v8 = (int)v7;
  v9 = &fs->varmap[(int)v7];
  while ( name != (GCstr *)fs->ls->vstack[*v9].name.gcptr64 )
  {
    v7 = (unsigned int)(v7 - 1);
    --v9;
    if ( --v8 < 0 )
      goto LABEL_6;
  }
  if ( (int)v7 < 0 )
  {
LABEL_6:
    v10 = var_lookup_(fs->prev, name, e, 0);
    if ( v10 >= 0 )
    {
      nuv = fs->nuv;
      v12 = 0;
      if ( fs->nuv )
      {
        uvmap = fs->uvmap;
        while ( *uvmap != v10 )
        {
          ++v12;
          ++uvmap;
          if ( v12 >= (unsigned int)nuv )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( (unsigned __int8)nuv >= 0x3Cu )
          err_limit(fs, 0x3Cu, "upvalues");
        if ( (unsigned int)(e->k - 6) > 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1099, "e->k == VLOCAL || e->k == VUPVAL") )
          __debugbreak();
        fs->uvmap[nuv] = v10;
        if ( e->k == VLOCAL )
          LOWORD(v16) = v10;
        else
          v16 = e->u.s.info + 65476;
        fs->uvtmp[nuv] = v16;
        LOBYTE(v12) = nuv;
        fs->nuv = nuv + 1;
      }
      e->u.s.info = (unsigned __int8)v12;
      result = (unsigned int)v10;
      e->k = VUPVAL;
      return result;
    }
    return 0xFFFFFFFFi64;
  }
  e->k = VLOCAL;
  e->u.s.info = v7;
  *(_QWORD *)&e->t = -1i64;
  if ( !first )
  {
    bl = fs->bl;
    if ( bl )
    {
      while ( bl->nactvar > (unsigned int)v7 )
      {
        bl = bl->prev;
        if ( !bl )
        {
          result = fs->varmap[v7];
          e->u.s.aux = result;
          return result;
        }
      }
      bl->flags |= 8u;
    }
  }
  result = fs->varmap[v7];
  e->u.s.aux = result;
  return result;
}

/*
==============
var_new
==============
*/
void var_new(LexState *ls, unsigned int n, GCstr *name)
{
  FuncState *fs; 
  __int64 vtop; 
  unsigned int sizevstack; 

  fs = ls->fs;
  vtop = ls->vtop;
  if ( n + ls->fs->nactvar >= 0xC8 )
    err_limit(fs, 0xC8u, "local variables");
  sizevstack = ls->sizevstack;
  if ( (unsigned int)vtop >= sizevstack )
  {
    if ( sizevstack >= 0xFFC4 )
      j_lj_lex_error(ls, 0, LJ_ERR_XLIMC);
    ls->vstack = (VarInfo *)j_lj_mem_grow(ls->L, ls->vstack, &ls->sizevstack, 0xFFC4u, 0x18u);
  }
  if ( (unsigned __int64)name >= 7 && !j_lj_tab_getstr(fs->kt, name) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_parse.c", 1044, "(uintptr_t)name < VARNAME__MAX || lj_tab_getstr(fs->kt, name) != ((void *)0)") )
    __debugbreak();
  ls->vstack[vtop].name.gcptr64 = (unsigned __int64)name;
  fs->varmap[n + fs->nactvar] = vtop;
  ls->vtop = vtop + 1;
}

