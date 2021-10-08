/*
==============
lj_lib_checkany
==============
*/
TValue *lj_lib_checkany(lua_State *L, int narg)
{
  TValue *result; 

  result = &L->base[narg - 1];
  if ( result >= L->top )
    j_lj_err_arg(L, narg, LJ_ERR_NOVAL);
  return result;
}

/*
==============
lj_lib_checkstr
==============
*/
GCstr *lj_lib_checkstr(lua_State *L, int narg)
{
  TValue *v3; 
  __int64 v4; 
  unsigned __int64 v6; 
  __int64 v7; 

  v3 = &L->base[narg - 1];
  if ( v3 >= L->top )
    goto LABEL_11;
  v4 = v3->it64 >> 47;
  if ( (_DWORD)v4 == -5 )
    return (GCstr *)(v3->u64 & 0x7FFFFFFFFFFFi64);
  if ( (unsigned int)v4 > 0xFFFFFFF2 )
LABEL_11:
    j_lj_err_argt(L, narg, 4);
  v6 = (unsigned __int64)j_lj_strfmt_number(L, v3);
  v3->u64 = v6 | 0xFFFD800000000000ui64;
  v7 = (__int64)(v6 | 0xFFFD800000000000ui64) >> 47;
  if ( (unsigned int)(v7 + 4) > 0xFFFFFFF6 && (~(_DWORD)v7 != *(unsigned __int8 *)((v6 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v6 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  return (GCstr *)v6;
}

/*
==============
lj_lib_optstr
==============
*/
GCstr *lj_lib_optstr(lua_State *L, int narg)
{
  TValue *v2; 

  v2 = &L->base[narg - 1];
  if ( v2 >= L->top || v2->u64 == -1i64 )
    return 0i64;
  else
    return j_lj_lib_checkstr(L, narg);
}

/*
==============
lj_lib_checknum
==============
*/
long double lj_lib_checknum(lua_State *L, int narg)
{
  __int64 v5; 

  _RBX = &L->base[narg - 1];
  if ( _RBX >= L->top || (v5 = _RBX->it64 >> 47, (unsigned int)v5 > 0xFFFFFFF2) && ((_DWORD)v5 != -5 || !j_lj_strscan_num((GCstr *)(_RBX->u64 & 0x7FFFFFFFFFFFi64), _RBX)) )
    j_lj_err_argt(L, narg, 3);
  if ( (unsigned int)(_RBX->it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lib.c", 234, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
    __debugbreak();
  __asm { vmovsd  xmm0, qword ptr [rbx] }
  return *(double *)&_XMM0;
}

/*
==============
lj_lib_checkint
==============
*/
int lj_lib_checkint(lua_State *L, int narg)
{
  __int64 v5; 
  int result; 

  _RBX = &L->base[narg - 1];
  if ( _RBX >= L->top || (v5 = _RBX->it64 >> 47, (unsigned int)v5 > 0xFFFFFFF2) && ((_DWORD)v5 != -5 || !j_lj_strscan_num((GCstr *)(_RBX->u64 & 0x7FFFFFFFFFFFi64), _RBX)) )
    j_lj_err_argt(L, narg, 3);
  if ( (unsigned int)(_RBX->it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lib.c", 246, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
    __debugbreak();
  __asm { vcvttsd2si eax, qword ptr [rbx] }
  return result;
}

/*
==============
lj_lib_optint
==============
*/
__int64 lj_lib_optint(lua_State *L, int narg, int def)
{
  TValue *top; 
  __int64 u64; 

  _RBX = &L->base[narg - 1];
  top = L->top;
  if ( _RBX < top )
  {
    u64 = _RBX->u64;
    if ( _RBX->u64 != -1i64 )
    {
      if ( _RBX >= top || (unsigned int)(u64 >> 47) > 0xFFFFFFF2 && ((unsigned int)(u64 >> 47) != -5 || !j_lj_strscan_num((GCstr *)(u64 & 0x7FFFFFFFFFFFi64), _RBX)) )
        j_lj_err_argt(L, narg, 3);
      if ( (unsigned int)(_RBX->it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lib.c", 246, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
        __debugbreak();
      __asm { vcvttsd2si r8d, qword ptr [rbx] }
    }
  }
  return (unsigned int)def;
}

/*
==============
lj_lib_checkfunc
==============
*/
GCfunc *lj_lib_checkfunc(lua_State *L, int narg)
{
  TValue *v2; 
  __int64 u64; 

  v2 = &L->base[narg - 1];
  if ( v2 >= L->top || (u64 = v2->u64, (unsigned int)(u64 >> 47) != -9) )
    j_lj_err_argt(L, narg, 6);
  return (GCfunc *)(u64 & 0x7FFFFFFFFFFFi64);
}

/*
==============
lj_lib_checktab
==============
*/
GCtab *lj_lib_checktab(lua_State *L, int narg)
{
  TValue *v2; 
  __int64 u64; 

  v2 = &L->base[narg - 1];
  if ( v2 >= L->top || (u64 = v2->u64, (unsigned int)(u64 >> 47) != -12) )
    j_lj_err_argt(L, narg, 5);
  return (GCtab *)(u64 & 0x7FFFFFFFFFFFi64);
}

/*
==============
lj_lib_checktabornil
==============
*/
GCtab *lj_lib_checktabornil(lua_State *L, int narg)
{
  TValue *v2; 
  __int64 u64; 

  v2 = &L->base[narg - 1];
  if ( v2 >= L->top )
    goto LABEL_6;
  u64 = v2->u64;
  if ( (unsigned int)(u64 >> 47) == -12 )
    return (GCtab *)(u64 & 0x7FFFFFFFFFFFi64);
  if ( u64 != -1 )
LABEL_6:
    j_lj_err_arg(L, narg, LJ_ERR_NOTABN);
  return 0i64;
}

/*
==============
lj_lib_checkopt
==============
*/
__int64 lj_lib_checkopt(lua_State *L, int narg, int def, const char *lst)
{
  TValue *v8; 
  GCstr *v9; 
  unsigned __int8 v10; 
  size_t len; 
  unsigned int v12; 
  GCstr *v13; 
  __int64 v14; 

  if ( def >= 0 )
  {
    v8 = &L->base[narg - 1];
    if ( v8 >= L->top || v8->u64 == -1i64 )
      return (unsigned int)def;
  }
  v9 = j_lj_lib_checkstr(L, narg);
  if ( !v9 )
    return (unsigned int)def;
  v10 = *lst;
  len = v9->len;
  v12 = 0;
  v13 = v9 + 1;
  if ( !*lst )
LABEL_12:
    j_lj_err_argv(L, narg, LJ_ERR_INVOPTM, v13);
  while ( v10 != (_DWORD)len || memcmp_0(v13, lst + 1, len) )
  {
    v14 = v10;
    ++v12;
    v10 = lst[v10 + 1];
    lst += v14 + 1;
    if ( !v10 )
      goto LABEL_12;
  }
  return v12;
}

/*
==============
lj_lib_pushcc
==============
*/
GCfunc *lj_lib_pushcc(lua_State *L, int (*f)(lua_State *), int id, int n)
{
  unsigned __int8 v4; 
  GCfunc *result; 

  v4 = id;
  j_lua_pushcclosure(L, f, n);
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lib.c", 156, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~8u))") )
    __debugbreak();
  result = (GCfunc *)(L->top[-1].u64 & 0x7FFFFFFFFFFFi64);
  result->c.ffid = v4;
  result->c.pc.ptr64 = L->glref.ptr64 + 352;
  return result;
}

/*
==============
lj_lib_register
==============
*/
void lj_lib_register(lua_State *L, const char *libname, const unsigned __int8 *p, int (*const *cf)(lua_State *))
{
  GCtab *gcptr64; 
  int v7; 
  unsigned __int64 v8; 
  GCtab *table; 
  const char *v10; 
  TValue *v11; 
  unsigned __int8 marked; 
  unsigned __int64 ptr64; 
  char v14; 
  char v15; 
  char v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned __int64 v20; 
  TValue *v21; 
  const char *v22; 
  unsigned __int64 v23; 
  GCstr *v24; 
  TValue *v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  GCstr *v28; 
  GCproto *v29; 
  unsigned __int64 v30; 
  TValue *v31; 
  signed __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  TValue *top; 
  __int64 u64; 
  __int64 v37; 
  __int64 v38; 
  bool v39; 
  signed __int64 it64; 
  __int64 v41; 
  __int64 v42; 
  TValue *v43; 
  __int64 v44; 
  TValue *v45; 
  signed __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  int v49; 
  TValue *v50; 
  unsigned __int64 v51; 
  GCtab *v53; 
  LexState ls; 

  gcptr64 = (GCtab *)L->env.gcptr64;
  v7 = *p;
  v8 = 0i64;
  v53 = gcptr64;
  v49 = v7;
  v51 = L->glref.ptr64 + 4i64 * p[1] + 2616;
  table = lib_create_table(L, libname, p[2]);
  v10 = (const char *)(p + 3);
  v11 = (TValue *)(L->top - L->base);
  marked = table->marked;
  v50 = v11;
  if ( (marked & 4) != 0 )
  {
    ptr64 = L->glref.ptr64;
    if ( (marked & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
      __debugbreak();
    v14 = *(_BYTE *)(ptr64 + 65);
    if ( (v14 == 5 || !v14) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
      __debugbreak();
    table->marked &= ~4u;
    table->gclist.gcptr64 = *(_QWORD *)(ptr64 + 96);
    LODWORD(v11) = (_DWORD)v50;
    *(_QWORD *)(ptr64 + 96) = table;
    v7 = v49;
  }
  table->nomm = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = *v10++;
      v16 = v15;
      v17 = v15 & 0xC0;
      v18 = v16 & 0x3F;
      if ( v17 != 192 )
        break;
      switch ( v18 | 0xC0 )
      {
        case 0xF9u:
          v27 = *(unsigned __int8 *)v10;
          v28 = j_lj_str_new(L, v10 + 1, v27);
          memset_0(&ls, 0, sizeof(ls));
          ls.L = L;
          ls.p = &v10[v27 + 1];
          ls.pe = (const char *)-1i64;
          ls.c = -1;
          ls.level = 2;
          ls.chunkname = v28;
          v29 = j_lj_bcread_proto(&ls);
          v29->firstline = -1;
          v30 = (unsigned __int64)j_lj_func_newL_empty(L, v29, (GCtab *)L->env.gcptr64);
          v31 = j_lj_tab_setstr(L, table, v28);
          v32 = v30 | 0xFFFB800000000000ui64;
          v33 = v32 >> 47;
          v31->u64 = v32;
          if ( (unsigned int)(v32 >> 47) + 4 > 0xFFFFFFF6 )
          {
            v34 = v32 & 0x7FFFFFFFFFFFi64;
            if ( ~(_DWORD)v33 != *(unsigned __int8 *)(v34 + 9) || (*(_BYTE *)(v34 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
                __debugbreak();
            }
          }
          v10 = ls.p;
          v7 = v49;
          LODWORD(v11) = (_DWORD)v50;
          continue;
        case 0xFAu:
          L->top -= 2;
          top = L->top;
          if ( (unsigned int)(top[1].it64 >> 47) != -5 || *(_DWORD *)((top[1].u64 & 0x7FFFFFFFFFFFi64) + 0x10) )
          {
            v11 = j_lj_tab_set(L, table, top + 1);
            u64 = top->u64;
            v7 = v49;
            v37 = u64 >> 47;
            v11->u64 = u64;
            LODWORD(v11) = (_DWORD)v50;
            if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
            {
              v38 = u64 & 0x7FFFFFFFFFFFi64;
              if ( ~(_DWORD)v37 != *(unsigned __int8 *)(v38 + 9) || (LODWORD(v11) = (_DWORD)v50, (*(_BYTE *)(v38 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
              {
                v7 = v49;
                v39 = j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") == 0;
                LODWORD(v11) = (_DWORD)v50;
                if ( !v39 )
LABEL_43:
                  __debugbreak();
              }
            }
          }
          else
          {
            if ( (unsigned int)(top->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lib.c", 121, "(((uint32_t)((L->top)->it64 >> 47)) == (~11u))") )
              __debugbreak();
            v7 = v49;
            LODWORD(v11) = (_DWORD)v50;
            gcptr64 = (GCtab *)(L->top->u64 & 0x7FFFFFFFFFFFi64);
            v53 = gcptr64;
          }
          break;
        case 0xFBu:
          L->top->u64 = *(_QWORD *)v10;
          ++L->top;
          LODWORD(v11) = (_DWORD)v50;
          v10 += 8;
          continue;
        case 0xFCu:
          it64 = L->top[-*(unsigned __int8 *)v10].it64;
          L->top->u64 = it64;
          v41 = it64 >> 47;
          if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
          {
            v42 = it64 & 0x7FFFFFFFFFFFi64;
            if ( ~(_DWORD)v41 != *(unsigned __int8 *)(v42 + 9) || (*(_BYTE *)(v42 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
                __debugbreak();
            }
          }
          LODWORD(v11) = (_DWORD)v50;
          ++v10;
          ++L->top;
          continue;
        case 0xFDu:
          v43 = L->top;
          L->top = v43 + 1;
          v43->u64 = v8 | 0xFFFB800000000000ui64;
          v44 = (__int64)(v8 | 0xFFFB800000000000ui64) >> 47;
          LODWORD(v11) = (_DWORD)v50;
          if ( (unsigned int)(v44 + 4) > 0xFFFFFFF6 )
          {
            if ( ~(_DWORD)v44 != *(unsigned __int8 *)((v8 & 0x7FFFFFFFFFFFi64) + 9) || (LODWORD(v11) = (_DWORD)v50, (*(_BYTE *)((v8 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
            {
              v39 = j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") == 0;
              LODWORD(v11) = (_DWORD)v50;
              if ( !v39 )
                goto LABEL_43;
            }
          }
          continue;
        case 0xFEu:
          LODWORD(v11) = (_DWORD)v50;
          v49 = ++v7;
          continue;
        case 0xFFu:
          return;
        default:
          v45 = L->top;
          L->top = v45 + 1;
          v46 = (unsigned __int64)j_lj_str_new(L, v10, v18) | 0xFFFD800000000000ui64;
          v45->u64 = v46;
          v47 = v46 >> 47;
          if ( (unsigned int)(v46 >> 47) + 4 > 0xFFFFFFF6 )
          {
            v48 = v46 & 0x7FFFFFFFFFFFi64;
            if ( ~(_DWORD)v47 != *(unsigned __int8 *)(v48 + 9) || (*(_BYTE *)(v48 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
                __debugbreak();
            }
          }
          v7 = v49;
          v10 += v18;
          LODWORD(v11) = (_DWORD)v50;
          continue;
      }
    }
    v19 = L->top - L->base - (_DWORD)v11;
    v20 = (unsigned __int64)j_lj_func_newC(L, v19, gcptr64);
    if ( v19 )
    {
      v21 = &L->base[(_QWORD)v50];
      L->top = v21;
      memcpy_0((void *)(v20 + 48), v21, 8i64 * v19);
    }
    v22 = v10;
    *(_BYTE *)(v20 + 10) = v49;
    v10 += v18;
    v7 = ++v49;
    if ( v17 )
    {
      *(_QWORD *)(v20 + 32) = v51;
      v51 += 4i64;
      if ( v17 == 128 )
      {
        v23 = *(_QWORD *)(v8 + 40);
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)(v20 + 32) = L->glref.ptr64 + 352;
    }
    v23 = (unsigned __int64)*cf++;
LABEL_17:
    *(_QWORD *)(v20 + 40) = v23;
    if ( v18 )
    {
      v24 = j_lj_str_new(L, v22, v18);
      v25 = j_lj_tab_setstr(L, table, v24);
      v26 = (__int64)(v20 | 0xFFFB800000000000ui64) >> 47;
      v25->u64 = v20 | 0xFFFB800000000000ui64;
      if ( (unsigned int)(v26 + 4) > 0xFFFFFFF6 && (~(_DWORD)v26 != *(unsigned __int8 *)((v20 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v20 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    LODWORD(v11) = (_DWORD)v50;
    v8 = v20;
    gcptr64 = v53;
  }
}

/*
==============
lj_lib_prereg
==============
*/
void lj_lib_prereg(lua_State *L, const char *name, int (*f)(lua_State *), GCtab *env)
{
  j_luaL_findtable(L, -10000, "_PRELOAD", 4);
  j_lua_pushcclosure(L, f, 0);
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lib.c", 167, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~8u))") )
    __debugbreak();
  *(_QWORD *)((L->top[-1].u64 & 0x7FFFFFFFFFFFi64) + 0x10) = env;
  j_lua_setfield(L, -2, name);
  --L->top;
}

/*
==============
lj_lib_postreg
==============
*/
__int64 lj_lib_postreg(lua_State *L, int (*cf)(lua_State *), int id, const char *name)
{
  char v4; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  GCtab *v9; 
  GCstr *v10; 
  __int64 v11; 
  unsigned __int8 marked; 
  unsigned __int64 ptr64; 
  char v14; 
  TValue *top; 

  v4 = id;
  j_lua_pushcclosure(L, cf, 0);
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lib.c", 156, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~8u))") )
    __debugbreak();
  v7 = -1i64;
  v8 = L->top[-1].u64 & 0x7FFFFFFFFFFFi64;
  *(_BYTE *)(v8 + 10) = v4;
  *(_QWORD *)(v8 + 32) = L->glref.ptr64 + 352;
  v9 = *(GCtab **)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x10);
  do
    ++v7;
  while ( name[v7] );
  v10 = j_lj_str_new(L, name, v7);
  v11 = v8 | 0xFFFB800000000000ui64;
  j_lj_tab_setstr(L, v9, v10)->u64 = v11;
  if ( (~(unsigned int)(v11 >> 47) != *(unsigned __int8 *)((v11 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v11 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  marked = v9->marked;
  if ( (marked & 4) != 0 )
  {
    ptr64 = L->glref.ptr64;
    if ( (marked & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
      __debugbreak();
    v14 = *(_BYTE *)(ptr64 + 65);
    if ( (v14 == 5 || !v14) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
      __debugbreak();
    v9->marked &= ~4u;
    v9->gclist.gcptr64 = *(_QWORD *)(ptr64 + 96);
    *(_QWORD *)(ptr64 + 96) = v9;
  }
  top = L->top;
  L->top = top + 1;
  top->u64 = v11;
  if ( ~(unsigned int)(v11 >> 47) != *(unsigned __int8 *)((v11 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v11 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  return 1i64;
}

/*
==============
lib_create_table
==============
*/
GCtab *lib_create_table(lua_State *L, const char *libname, int hsize)
{
  TValue *top; 
  TValue *v7; 
  signed __int64 v8; 
  TValue *v9; 
  signed __int64 v10; 

  if ( libname )
  {
    j_luaL_findtable(L, -10000, "_LOADED", 16);
    j_lua_getfield(L, -1, libname);
    top = L->top;
    if ( (unsigned int)(top[-1].it64 >> 47) != -12 )
    {
      L->top = top - 1;
      if ( j_luaL_findtable(L, -10002, libname, hsize) )
        j_lj_err_callerv(L, LJ_ERR_BADMODN, libname);
      if ( (unsigned int)(L->top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lib.c", 37, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
        __debugbreak();
      v7 = L->top;
      v8 = v7[-1].u64 & 0x7FFFFFFFFFFFi64 | 0xFFFA000000000000ui64;
      v7->u64 = v8;
      if ( (~(unsigned int)(v8 >> 47) != *(unsigned __int8 *)((v8 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v8 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
      ++L->top;
      j_lua_setfield(L, -3, libname);
      top = L->top;
    }
    L->top = top - 1;
    if ( (unsigned int)(top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lib.c", 42, "(((uint32_t)((L->top)->it64 >> 47)) == (~11u))") )
      __debugbreak();
    v9 = L->top;
    v10 = v9->u64 & 0x7FFFFFFFFFFFi64 | 0xFFFA000000000000ui64;
    v9[-1].u64 = v10;
    if ( (~(unsigned int)(v10 >> 47) != *(unsigned __int8 *)((v10 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v10 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  else
  {
    j_lua_createtable(L, 0, hsize);
  }
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_lib.c", 46, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  return (GCtab *)(L->top[-1].u64 & 0x7FFFFFFFFFFFi64);
}

