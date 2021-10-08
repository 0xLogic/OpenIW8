/*
==============
lua_atpanic
==============
*/
int (*lua_atpanic(lua_State *L, int (*panicf)(lua_State *)))(lua_State *)
{
  unsigned __int64 ptr64; 
  int (__fastcall *result)(lua_State *); 

  ptr64 = L->glref.ptr64;
  result = *(int (__fastcall **)(lua_State *))(ptr64 + 344);
  *(_QWORD *)(ptr64 + 344) = panicf;
  return result;
}

/*
==============
lua_error
==============
*/
void __noreturn lua_error(lua_State *L)
{
  j_lj_err_run(L);
  JUMPOUT(0x1437FA0E9i64);
}

/*
==============
lj_err_str
==============
*/
GCstr *lj_err_str(lua_State *L, ErrMsg em)
{
  unsigned __int64 v2; 
  const char *v3; 

  v2 = -1i64;
  v3 = &lj_err_allmsg[em];
  do
    ++v2;
  while ( v3[v2] );
  return j_lj_str_new(L, v3, v2);
}

/*
==============
lj_err_throw
==============
*/
void __noreturn lj_err_throw(lua_State *L, int errcode)
{
  unsigned __int64 ptr64; 
  void (__fastcall *v4)(lua_State *); 
  void (__fastcall *v5)(lua_State *); 

  ptr64 = L->glref.ptr64;
  *(_QWORD *)(ptr64 + 368) = 0i64;
  L->status = 0;
  if ( errcode == 807 )
  {
    L->top->u64 = L->base[-1].u64;
    if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
      j_lj_state_growstack1(L);
    j_lua_pushstring(L, lj_err_allmsg + 807);
    v4 = *(void (__fastcall **)(lua_State *))(ptr64 + 344);
    if ( v4 )
      v4(L);
  }
  else
  {
    RaiseException(errcode | 0xE24C4A00, 1u, 0, NULL);
    v5 = *(void (__fastcall **)(lua_State *))(L->glref.ptr64 + 344);
    if ( v5 )
      v5(L);
  }
  exit(1);
}

/*
==============
lj_err_mem
==============
*/
void __noreturn lj_err_mem(lua_State *L)
{
  TValue *top; 
  signed __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  if ( L->status == 6 )
  {
    j_lj_vm_unwind_c(L->cframe, 4i64);
    __debugbreak();
  }
  top = L->top;
  L->top = top + 1;
  v3 = (unsigned __int64)j_lj_err_str(L, LJ_ERR_ERRMEM) | 0xFFFD800000000000ui64;
  top->u64 = v3;
  v4 = v3 >> 47;
  if ( (unsigned int)(v3 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v5 = v3 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v4 != *(unsigned __int8 *)(v5 + 9) || (*(_BYTE *)(v5 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  j_lj_err_throw(L, 4);
}

/*
==============
lj_err_run
==============
*/
void __noreturn lj_err_run(lua_State *L)
{
  unsigned __int64 ptr64; 
  unsigned __int64 cframe; 
  TValue *v4; 
  __int64 v5; 
  unsigned __int64 u64; 
  __int64 v7; 
  char *v8; 
  TValue *v9; 
  TValue *top; 
  __int64 it64; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  signed __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  ptr64 = L->stack.ptr64;
  cframe = (unsigned __int64)L->cframe;
  v4 = L->base - 1;
  if ( (unsigned __int64)v4 > ptr64 + 8 )
  {
    while ( 2 )
    {
      if ( cframe )
      {
        if ( *(int *)((cframe & 0xFFFFFFFFFFFFFFFCui64) + 80) >= 0 )
        {
LABEL_8:
          u64 = v4->u64;
          switch ( v4->u64 & 7 )
          {
            case 0ui64:
            case 4ui64:
              v4 += -2i64 - *(unsigned __int8 *)(u64 - 3);
              goto LABEL_14;
            case 1ui64:
              cframe = *(_QWORD *)(cframe + 104);
              goto LABEL_13;
            case 2ui64:
            case 3ui64:
              goto LABEL_13;
            case 5ui64:
              if ( (cframe & 1) != 0 )
                goto LABEL_39;
              v5 = *(int *)(cframe + 84);
              if ( (int)v5 >= 0 )
                goto LABEL_16;
LABEL_13:
              v4 = (TValue *)((char *)v4 - (u64 & 0xFFFFFFFFFFFFFFF8ui64));
LABEL_14:
              if ( (unsigned __int64)v4 <= ptr64 + 8 )
                goto LABEL_39;
              continue;
            case 6ui64:
            case 7ui64:
              v8 = (char *)v4 - (u64 & 0xFFFFFFFFFFFFFFF8ui64);
              if ( *(_BYTE *)((*((_QWORD *)v8 - 1) & 0x7FFFFFFFFFFFi64) + 0xA) != 21 )
                goto LABEL_39;
              v7 = (__int64)&v8[-ptr64 + 8];
              goto LABEL_19;
          }
        }
        while ( 1 )
        {
          if ( (unsigned __int64)v4 >= ptr64 + -*(_DWORD *)(cframe + 80) )
            goto LABEL_8;
          v5 = *(int *)(cframe + 84);
          if ( (int)v5 >= 0 )
            break;
          cframe = *(_QWORD *)(cframe + 104);
          if ( !cframe )
            goto LABEL_39;
          if ( *(int *)((cframe & 0xFFFFFFFFFFFFFFFCui64) + 80) >= 0 )
            goto LABEL_8;
        }
LABEL_16:
        v7 = v5;
LABEL_19:
        if ( v7 )
        {
          v9 = (TValue *)(ptr64 + v7);
          top = L->top;
          if ( (unsigned int)(*(__int64 *)(ptr64 + v7) >> 47) != -9 || L->status == 5 )
          {
            v17 = (unsigned __int64)j_lj_err_str(L, LJ_ERR_ERRERR) | 0xFFFD800000000000ui64;
            top[-1].u64 = v17;
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
            j_lj_err_throw(L, 5);
          }
          L->status = 5;
          it64 = top[-1].it64;
          v12 = it64 >> 47;
          top[1].u64 = it64;
          if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
          {
            v13 = it64 & 0x7FFFFFFFFFFFi64;
            if ( ~(_DWORD)v12 != *(unsigned __int8 *)(v13 + 9) || (*(_BYTE *)(v13 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
                __debugbreak();
            }
          }
          v14 = v9->u64;
          top[-1].u64 = v9->u64;
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
          top->u64 = -1i64;
          L->top = top + 2;
          j_lj_vm_call(L, &top[1], 2i64);
        }
      }
      break;
    }
  }
LABEL_39:
  j_lj_err_throw(L, 2);
}

/*
==============
lj_err_msg
==============
*/
void __noreturn lj_err_msg(lua_State *L, ErrMsg em)
{
  err_msgv(L, em);
}

/*
==============
lj_err_lex
==============
*/
void __noreturn lj_err_lex(lua_State *L, GCstr *src, const char *tok, int line, ErrMsg em, char *argp)
{
  const char *v9; 
  const char *v10; 
  char out[104]; 

  j_lj_debug_shortname(out, src, line);
  v9 = j_lj_strfmt_pushvf(L, &lj_err_allmsg[em], argp);
  v10 = j_lj_strfmt_pushf(L, "%s:%d: %s", out, (unsigned int)line, v9);
  if ( tok )
    j_lj_strfmt_pushf(L, lj_err_allmsg + 2201, v10, tok);
  j_lj_err_throw(L, 3);
}

/*
==============
lj_err_optype
==============
*/
void __noreturn lj_err_optype(lua_State *L, const TValue *o, ErrMsg opm)
{
  __int64 v4; 
  __int64 v5; 
  TValue *base; 
  const char *v7; 
  const char *v8; 
  unsigned __int64 v9; 
  GCproto *v10; 
  unsigned int v11; 
  const unsigned int *v12; 
  const char *v13; 
  char *name; 

  if ( (unsigned int)(o->it64 >> 47) > 0xFFFFFFF2 )
    v4 = (unsigned int)~(o->it64 >> 47);
  else
    v4 = 13i64;
  v5 = opm;
  base = L->base;
  v7 = lj_obj_itypename[v4];
  v8 = &lj_err_allmsg[v5];
  if ( !*(_BYTE *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0xA) )
  {
    v9 = (unsigned __int64)L->cframe & 0xFFFFFFFFFFFFFFFCui64;
    v10 = (GCproto *)(*(_QWORD *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 104i64);
    v11 = o - base;
    v12 = (const unsigned int *)(*(_QWORD *)(v9 + 96) - 4i64);
    name = NULL;
    v13 = j_lj_debug_slotname(v10, v12, v11, (const char **)&name);
    if ( v13 )
      err_msgv(L, LJ_ERR_BADOPRT, v8, v13, name, v7);
  }
  err_msgv(L, LJ_ERR_BADOPRV, v8, v7);
}

/*
==============
lj_err_comp
==============
*/
void __noreturn lj_err_comp(lua_State *L, const TValue *o1, const TValue *o2)
{
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  ErrMsg v10; 

  v4 = o1->it64 >> 47;
  v5 = 13;
  if ( (unsigned int)v4 > 0xFFFFFFF2 )
    v6 = (unsigned int)~(_DWORD)v4;
  else
    v6 = 13i64;
  v7 = lj_obj_itypename[v6];
  v8 = o2->it64 >> 47;
  if ( (unsigned int)v8 > 0xFFFFFFF2 )
    v5 = ~(_DWORD)v8;
  v9 = v5;
  v10 = LJ_ERR_BADCMPT;
  if ( v7 == lj_obj_itypename[v9] )
    v10 = LJ_ERR_BADCMPV;
  err_msgv(L, v10);
}

/*
==============
lj_err_optype_call
==============
*/
void __noreturn lj_err_optype_call(lua_State *L, TValue *o)
{
  TValue v2; 
  __int64 v3; 
  const char *v4; 

  v2.u64 = *(unsigned __int64 *)(((unsigned __int64)L->cframe & 0xFFFFFFFFFFFFFFFCui64) + 96);
  if ( (LOBYTE(v2.n) & 3) != 0 )
  {
    if ( (unsigned int)(o->it64 >> 47) > 0xFFFFFFF2 )
      v3 = (unsigned int)~(o->it64 >> 47);
    else
      v3 = 13i64;
    v4 = lj_obj_itypename[v3];
    o[1].u64 = v2.u64;
    o->u64 = (unsigned __int64)L | 0xFFFC800000000000ui64;
    L->base = o + 2;
    L->top = o + 2;
    err_msgv(L, LJ_ERR_BADCALL, v4);
  }
  j_lj_err_optype(L, o, LJ_ERR_OPCALL);
}

/*
==============
lj_err_callermsg
==============
*/
void __noreturn lj_err_callermsg(lua_State *L, const char *msg)
{
  const TValue *v2; 
  TValue *v3; 
  unsigned __int64 u64; 

  v2 = NULL;
  v3 = L->base - 1;
  u64 = v3->u64;
  if ( (v3->u64 & 3) != 0 )
  {
    if ( (u64 & 7) == 2 )
      v2 = (TValue *)((char *)v3 - (u64 & 0xFFFFFFFFFFFFFFF8ui64));
  }
  else
  {
    v2 = &v3[-*(unsigned __int8 *)(u64 - 3) - 2];
  }
  j_lj_debug_addloc(L, msg, v2, (const TValue *)L->base - 1);
  j_lj_err_run(L);
  JUMPOUT(0x1437FA886i64);
}

/*
==============
lj_err_callerv
==============
*/
void __noreturn lj_err_callerv(lua_State *L, ErrMsg em, ...)
{
  const char *v3; 
  va_list argp; 

  va_start(argp, em);
  v3 = j_lj_strfmt_pushvf(L, &lj_err_allmsg[em], argp);
  j_lj_err_callermsg(L, v3);
}

/*
==============
lj_err_caller
==============
*/
void __noreturn lj_err_caller(lua_State *L, ErrMsg em)
{
  j_lj_err_callermsg(L, &lj_err_allmsg[em]);
}

/*
==============
lj_err_arg
==============
*/
void __noreturn lj_err_arg(lua_State *L, int narg, ErrMsg em)
{
  err_argmsg(L, narg, &lj_err_allmsg[em]);
}

/*
==============
lj_err_argv
==============
*/
void __noreturn lj_err_argv(lua_State *L, int narg, ErrMsg em, ...)
{
  const char *v5; 
  va_list argp; 

  va_start(argp, em);
  v5 = j_lj_strfmt_pushvf(L, &lj_err_allmsg[em], argp);
  err_argmsg(L, narg, v5);
}

/*
==============
lj_err_argtype
==============
*/
void __noreturn lj_err_argtype(lua_State *L, int narg, const char *xname)
{
  const char *v5; 
  unsigned __int64 v6; 
  __int64 u64; 
  __int64 v8; 
  TValue *top; 
  TValue *v10; 
  __int64 v11; 
  const char *v12; 

  if ( narg > -10000 )
  {
    v8 = narg;
    if ( narg >= 0 )
    {
      v10 = &L->base[v8 - 1];
      top = L->top;
    }
    else
    {
      top = L->top;
      v10 = &top[v8];
    }
    if ( v10 < top )
    {
      u64 = v10->u64;
LABEL_11:
      v11 = u64 >> 47;
      if ( (unsigned int)v11 > 0xFFFFFFF2 )
        v5 = lj_obj_itypename[~(_DWORD)v11];
      else
        v5 = lj_obj_itypename[13];
LABEL_15:
      v12 = j_lj_strfmt_pushf(L, lj_err_allmsg + 517, xname, v5);
      err_argmsg(L, narg, v12);
    }
  }
  else
  {
    if ( narg >= -10002 )
    {
      v5 = lj_obj_itypename[11];
      goto LABEL_15;
    }
    v6 = L->base[-2].u64 & 0x7FFFFFFFFFFFi64;
    if ( -10002 - narg <= *(unsigned __int8 *)(v6 + 11) )
    {
      u64 = *(_QWORD *)(v6 + 8i64 * (-10002 - narg) + 40);
      goto LABEL_11;
    }
  }
  v5 = lj_obj_typename[0];
  goto LABEL_15;
}

/*
==============
lj_err_argt
==============
*/
void __noreturn lj_err_argt(lua_State *L, int narg, int tt)
{
  j_lj_err_argtype(L, narg, lj_obj_typename[tt + 1]);
}

/*
==============
lj_err_unwind_win
==============
*/
__int64 lj_err_unwind_win(_EXCEPTION_RECORD *rec, void *f, _CONTEXT *ctx, UndocumentedDispatcherContext *dispatch)
{
  unsigned int ExceptionCode; 
  lua_State *v6; 
  unsigned int v7; 
  unsigned int v8; 
  _CONTEXT *ContextRecord; 
  TValue *v12; 
  unsigned __int64 cframe; 
  int v14; 
  unsigned __int64 u64; 
  TValue *top; 
  signed __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 (__fastcall *v20)(int, int, int, int, int, int, int, int, int, int, __int64); 

  ExceptionCode = rec->ExceptionCode;
  v6 = (lua_State *)*((_QWORD *)f + 11);
  v7 = rec->ExceptionCode ^ 0xE24C4A00;
  v8 = (unsigned __int8)rec->ExceptionCode;
  ContextRecord = ctx;
  if ( v7 > 0xFF )
    v8 = 2;
  if ( (rec->ExceptionFlags & 6) != 0 )
  {
    err_unwind(*((lua_State **)f + 11), f, v8);
    return 1i64;
  }
  v12 = v6->base - 1;
  cframe = (unsigned __int64)v6->cframe;
  if ( !cframe )
    goto LABEL_16;
  ctx = (_CONTEXT *)0x140000000i64;
  while ( 2 )
  {
    v14 = *(_DWORD *)((cframe & 0xFFFFFFFFFFFFFFFCui64) + 80);
    if ( v14 >= 0 || (unsigned __int64)v12 >= v6->stack.ptr64 + -v14 )
    {
      if ( (unsigned __int64)v12 > v6->stack.ptr64 + 8 )
      {
        u64 = v12->u64;
        switch ( v12->u64 & 7 )
        {
          case 0ui64:
          case 4ui64:
            v12 += -2i64 - *(unsigned __int8 *)(u64 - 3);
            goto LABEL_15;
          case 1ui64:
            if ( (void *)cframe == f )
              return 1i64;
            cframe = *(_QWORD *)(cframe + 104);
LABEL_14:
            v12 = (TValue *)((char *)v12 - (u64 & 0xFFFFFFFFFFFFFFF8ui64));
LABEL_15:
            if ( !cframe )
              break;
            continue;
          case 2ui64:
          case 3ui64:
            goto LABEL_14;
          case 5ui64:
            goto LABEL_17;
          case 6ui64:
          case 7ui64:
            cframe |= 2ui64;
            goto LABEL_17;
        }
      }
LABEL_16:
      cframe = (unsigned __int64)v6;
    }
    break;
  }
LABEL_17:
  if ( cframe )
  {
    if ( ExceptionCode == -529697949 || ExceptionCode == 541541187 )
    {
      _DestructExceptionObject_0(rec, 1i64, ctx);
      top = v6->top;
      v6->top = top + 1;
      v17 = (unsigned __int64)j_lj_err_str(v6, LJ_ERR_ERRCPP) | 0xFFFD800000000000ui64;
      top->u64 = v17;
      v18 = v17 >> 47;
      if ( (unsigned int)(v17 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v19 = v17 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v18 != *(unsigned __int8 *)(v19 + 9) || (*(_BYTE *)(v19 + 8) & (unsigned __int8)~*(_BYTE *)(v6->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
    }
    else if ( v7 > 0xFF )
    {
      return 1i64;
    }
    if ( (cframe & 2) == 0 || (v20 = j_lj_vm_unwind_ff_eh, v8 == 1) )
      v20 = j_lj_vm_unwind_c_eh;
    RtlUnwindEx(f, v20, rec, (PVOID)v8, ContextRecord, dispatch->HistoryTable);
  }
  return 1i64;
}

/*
==============
luaL_argerror
==============
*/
void __noreturn luaL_argerror(lua_State *L, int narg, const char *msg)
{
  err_argmsg(L, narg, msg);
}

/*
==============
luaL_typerror
==============
*/
void __noreturn luaL_typerror(lua_State *L, int narg, const char *xname)
{
  j_lj_err_argtype(L, narg, xname);
}

/*
==============
luaL_where
==============
*/
void luaL_where(lua_State *L, int level)
{
  const TValue *v3; 
  const TValue *v4; 
  int size; 

  v3 = j_lj_debug_frame(L, level, &size);
  if ( size )
    v4 = &v3[size];
  else
    v4 = NULL;
  j_lj_debug_addloc(L, (const char *)&queryFormat.fmt + 3, v3, v4);
}

/*
==============
luaL_error
==============
*/
void __noreturn luaL_error(lua_State *L, const char *fmt, ...)
{
  const char *v3; 
  va_list argp; 

  va_start(argp, fmt);
  v3 = j_lj_strfmt_pushvf(L, fmt, argp);
  j_lj_err_callermsg(L, v3);
}

/*
==============
err_argmsg
==============
*/
void __noreturn err_argmsg(lua_State *L, int narg, const char *msg)
{
  const TValue *v5; 
  const char *v7; 
  const char *v8; 
  char *name; 

  v5 = L->base - 1;
  name = "?";
  v7 = j_lj_debug_funcname(L, v5, (const char **)&name);
  if ( (unsigned int)(narg + 9999) <= 0x270E )
    narg += L->top - L->base + 1;
  if ( v7 && v7[3] == 104 && (--narg, !narg) )
    v8 = j_lj_strfmt_pushf(L, lj_err_allmsg + 457, name, msg);
  else
    v8 = j_lj_strfmt_pushf(L, lj_err_allmsg + 487, (unsigned int)narg, name, msg);
  j_lj_err_callermsg(L, v8);
}

/*
==============
err_msgv
==============
*/
void __noreturn err_msgv(lua_State *L, ErrMsg em, ...)
{
  const char *v3; 
  ErrMsg v4; 
  va_list argp; 

  va_start(argp, em);
  v4 = em;
  if ( !*(_BYTE *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0xA) )
  {
    my_lua_assert(1, "c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_err.c", 652, "(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn))->c.ffid == 0)", "(((&((GCobj *)((((L->base-2)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn))->c.ffid == 0)");
    em = v4;
    L->top = &L->base[*(unsigned __int8 *)(*(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 93i64)];
  }
  v3 = j_lj_strfmt_pushvf(L, &lj_err_allmsg[em], argp);
  j_lj_debug_addloc(L, v3, (const TValue *)L->base - 1, NULL);
  j_lj_err_run(L);
  JUMPOUT(0x1437FB1EEi64);
}

/*
==============
err_unwind
==============
*/
lua_State *err_unwind(lua_State *L, void *stopcf, int errcode)
{
  lua_State *cframe; 
  TValue *v6; 
  int v8; 
  TValue *v9; 
  unsigned __int64 u64; 
  __int64 v11; 
  TValue *v12; 
  void (__fastcall *v13)(lua_State *); 
  lua_State *result; 
  TValue *v15; 

  cframe = (lua_State *)L->cframe;
  v6 = L->base - 1;
  if ( !cframe )
  {
LABEL_14:
    if ( errcode )
    {
      v12 = (TValue *)(L->stack.ptr64 + 16);
      L->cframe = NULL;
      L->base = v12;
      unwindstack(L, v12);
      v13 = *(void (__fastcall **)(lua_State *))(L->glref.ptr64 + 344);
      if ( v13 )
        v13(L);
      exit(1);
    }
    return L;
  }
  while ( 2 )
  {
    v8 = *(_DWORD *)(((unsigned __int64)cframe & 0xFFFFFFFFFFFFFFFCui64) + 80);
    if ( v8 < 0 )
    {
      v9 = (TValue *)(L->stack.ptr64 + -v8);
      if ( v6 < v9 )
      {
        if ( !errcode )
          return cframe;
        L->base = v6 + 1;
        L->cframe = *(void **)&cframe[1].marked;
        unwindstack(L, v9);
        return cframe;
      }
    }
    if ( (unsigned __int64)v6 <= L->stack.ptr64 + 8 )
      goto LABEL_14;
    u64 = v6->u64;
    v11 = v6->u64 & 7;
    switch ( v11 )
    {
      case 0i64:
      case 4i64:
        v6 += -2i64 - *(unsigned __int8 *)(u64 - 3);
        goto LABEL_13;
      case 1i64:
        if ( !errcode )
        {
          if ( cframe == stopcf )
            return 0i64;
          cframe = *(lua_State **)&cframe[1].marked;
$LN40_134:
          v6 = (TValue *)((char *)v6 - (u64 & 0xFFFFFFFFFFFFFFF8ui64));
LABEL_13:
          if ( !cframe )
            goto LABEL_14;
          continue;
        }
        L->base = (TValue *)((char *)v6 - (u64 & 0xFFFFFFFFFFFFFFF8ui64) + 8);
        L->cframe = *(void **)&cframe[1].marked;
        unwindstack(L, v6 - 1);
        return 0i64;
      case 2i64:
      case 3i64:
        goto $LN40_134;
      case 5i64:
        if ( ((unsigned __int8)cframe & 1) == 0 )
        {
          if ( errcode )
          {
            L->base = (TValue *)((char *)v6 - (u64 & 0xFFFFFFFFFFFFFFF8ui64) + 8);
            L->cframe = *(void **)&cframe[1].marked;
            unwindstack(L, v6 - 1);
          }
          return cframe;
        }
        if ( !errcode )
          return cframe;
        *(_BYTE *)(L->glref.ptr64 + 209) &= ~0x10u;
        result = cframe;
        L->cframe = NULL;
        L->status = errcode;
        return result;
      case 6i64:
      case 7i64:
        if ( !errcode )
          return (lua_State *)((unsigned __int64)cframe | 2);
        if ( errcode == 1 )
          goto $LN40_134;
        if ( v11 == 6 )
        {
          *(_BYTE *)(L->glref.ptr64 + 209) &= ~0x10u;
          u64 = v6->u64;
        }
        L->cframe = cframe;
        v15 = (TValue *)((char *)v6 - (u64 & 0xFFFFFFFFFFFFFFF8ui64) + 8);
        L->base = v15;
        unwindstack(L, v15);
        return (lua_State *)((unsigned __int64)cframe | 2);
    }
  }
}

/*
==============
unwindstack
==============
*/
void unwindstack(lua_State *L, TValue *top)
{
  TValue *v4; 
  signed __int64 u64; 
  __int64 v6; 
  __int64 v7; 

  j_lj_func_closeuv(L, top);
  v4 = L->top - 1;
  if ( top < v4 )
  {
    u64 = v4->u64;
    top->u64 = u64;
    v6 = u64 >> 47;
    if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v7 = u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v6 != *(unsigned __int8 *)(v7 + 9) || (*(_BYTE *)(v7 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    L->top = top + 1;
  }
  j_lj_state_relimitstack(L);
}

