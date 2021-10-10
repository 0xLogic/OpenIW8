/*
==============
luaopen_table
==============
*/
__int64 luaopen_table(lua_State *L)
{
  j_lj_lib_register(L, "table", lj_lib_init_table, lj_lib_cf_table);
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_table.c", 323, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  j_lj_lib_prereg(L, "table.new", luaopen_table_new, (GCtab *)(L->top[-1].u64 & 0x7FFFFFFFFFFFi64));
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_table.c", 324, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  j_lj_lib_prereg(L, "table.clear", luaopen_table_clear, (GCtab *)(L->top[-1].u64 & 0x7FFFFFFFFFFFi64));
  return 1i64;
}

/*
==============
lj_cf_table_maxn
==============
*/
__int64 lj_cf_table_maxn(lua_State *L)
{
  GCtab *v3; 
  __int64 v5; 
  __int64 hmask; 
  __int64 *v8; 
  __int64 v9; 
  __int64 result; 

  v3 = j_lj_lib_checktab(L, 1);
  __asm { vxorpd  xmm6, xmm6, xmm6 }
  v5 = v3->asize - 1i64;
  if ( v5 >= 0 )
  {
    while ( *(_QWORD *)(v3->array.ptr64 + 8 * v5) == -1i64 )
    {
      if ( --v5 < 0 )
        goto LABEL_6;
    }
    _XMM6 = 0i64;
    __asm { vcvtsi2sd xmm6, xmm6, eax }
  }
LABEL_6:
  hmask = v3->hmask;
  v8 = (__int64 *)(v3->node.ptr64 + 24 * hmask + 8);
  do
  {
    if ( *(v8 - 1) != -1 )
    {
      v9 = *v8 >> 47;
      if ( (unsigned int)v9 <= 0xFFFFFFF2 )
      {
        if ( (unsigned int)v9 >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
          __debugbreak();
        __asm { vmaxsd  xmm6, xmm6, qword ptr [rbx] }
      }
    }
    v8 -= 3;
    --hmask;
  }
  while ( hmask >= 0 );
  result = 1i64;
  L->top[-1].n = *(double *)&_XMM6;
  return result;
}

/*
==============
lj_cf_table_insert
==============
*/
__int64 lj_cf_table_insert(lua_State *L)
{
  GCtab *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int asize; 
  TValue *v8; 
  TValue *v9; 
  const TValue *v10; 
  __int64 u64; 
  __int64 v12; 
  __int64 v13; 
  TValue *v14; 
  TValue v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int8 marked; 
  unsigned __int64 ptr64; 
  char v20; 

  v2 = j_lj_lib_checktab(L, 1);
  v3 = j_lj_tab_len(v2) + 1;
  v4 = LODWORD(L->top) - LODWORD(L->base);
  if ( v4 != 16 )
  {
    if ( v4 != 24 )
      j_lj_err_caller(L, LJ_ERR_TABINS);
    v5 = j_lj_lib_checkint(L, 2);
    if ( v3 > v5 )
    {
      v6 = v3 - 1;
      do
      {
        asize = v2->asize;
        if ( v3 >= asize )
        {
          v9 = j_lj_tab_setinth(L, v2, v3);
          asize = v2->asize;
          v8 = v9;
        }
        else
        {
          v8 = (TValue *)(v2->array.ptr64 + 8i64 * v3);
        }
        if ( v6 >= asize )
          v10 = j_lj_tab_getinth(v2, v6);
        else
          v10 = (const TValue *)(v2->array.ptr64 + 8i64 * v6);
        if ( v10 )
        {
          u64 = v10->u64;
          v8->u64 = v10->u64;
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
          v8->u64 = -1i64;
        }
        --v3;
        --v6;
      }
      while ( v3 > v5 );
    }
    v3 = v5;
  }
  if ( v3 >= v2->asize )
    v14 = j_lj_tab_setinth(L, v2, v3);
  else
    v14 = (TValue *)(v2->array.ptr64 + 8i64 * v3);
  v15.u64 = L->top[-1].u64;
  v14->u64 = v15.u64;
  v16 = v15.it64 >> 47;
  if ( (unsigned int)(v15.it64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v17 = v15.u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v16 != *(unsigned __int8 *)(v17 + 9) || (*(_BYTE *)(v17 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  if ( (unsigned int)(v14->it64 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((v14->u64 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
  {
    marked = v2->marked;
    if ( (marked & 4) != 0 )
    {
      ptr64 = L->glref.ptr64;
      if ( (marked & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
        __debugbreak();
      v20 = *(_BYTE *)(ptr64 + 65);
      if ( v20 == 5 || !v20 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
          __debugbreak();
      }
      v2->marked &= ~4u;
      v2->gclist.gcptr64 = *(_QWORD *)(ptr64 + 96);
      *(_QWORD *)(ptr64 + 96) = v2;
    }
  }
  return 0i64;
}

/*
==============
lj_cf_table_concat
==============
*/
__int64 lj_cf_table_concat(lua_State *L)
{
  GCtab *v2; 
  GCstr *v3; 
  int v4; 
  TValue *v5; 
  int e; 
  unsigned __int64 ptr64; 
  SBuf *v8; 
  signed __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v13; 
  __int64 v14; 

  v2 = j_lj_lib_checktab(L, 1);
  v3 = j_lj_lib_optstr(L, 2);
  v4 = j_lj_lib_optint(L, 3, 1);
  v5 = L->base + 3;
  if ( v5 >= L->top || v5->u64 == -1i64 )
    e = j_lj_tab_len(v2);
  else
    e = j_lj_lib_checkint(L, 4);
  ptr64 = L->glref.ptr64;
  *(_QWORD *)(ptr64 + 152) = *(_QWORD *)(ptr64 + 168);
  *(_QWORD *)(ptr64 + 176) = L;
  v8 = j_lj_buf_puttab((SBuf *)(ptr64 + 152), v2, v3, v4, e);
  if ( !v8 )
  {
    v13 = *(int *)(ptr64 + 152);
    if ( (unsigned int)v13 >= v2->asize )
      v14 = (__int64)j_lj_tab_getinth(v2, v13);
    else
      v14 = v2->array.ptr64 + 8 * v13;
    if ( v14 )
    {
      v14 = *(__int64 *)v14 >> 47;
      if ( (unsigned int)v14 > 0xFFFFFFF2 )
        LODWORD(v14) = ~(_DWORD)v14;
      else
        LODWORD(v14) = 13;
    }
    j_lj_err_callerv(L, LJ_ERR_TABCAT, lj_obj_itypename[(unsigned int)v14], (unsigned int)v13);
  }
  v9 = (unsigned __int64)j_lj_str_new(L, (const char *)v8->b.ptr64, (unsigned int)(LODWORD(v8->p.ptr64) - LODWORD(v8->b.ptr64))) | 0xFFFD800000000000ui64;
  v10 = v9 >> 47;
  L->top[-1].u64 = v9;
  if ( (unsigned int)(v9 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v11 = v9 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
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
lj_cf_table_sort
==============
*/
__int64 lj_cf_table_sort(lua_State *L)
{
  GCtab *v2; 
  int v3; 

  v2 = j_lj_lib_checktab(L, 1);
  v3 = j_lj_tab_len(v2);
  j_lua_settop(L, 2);
  if ( L->base[1].u64 != -1i64 )
    j_lj_lib_checkfunc(L, 2);
  auxsort(L, 1, v3);
  return 0i64;
}

/*
==============
lj_cf_table_new
==============
*/
__int64 lj_cf_table_new(lua_State *L)
{
  int v2; 
  int v3; 

  v2 = j_lj_lib_checkint(L, 1);
  v3 = j_lj_lib_checkint(L, 2);
  j_lua_createtable(L, v2, v3);
  return 1i64;
}

/*
==============
lj_cf_table_clear
==============
*/
__int64 lj_cf_table_clear(lua_State *L)
{
  GCtab *v1; 

  v1 = j_lj_lib_checktab(L, 1);
  j_lj_tab_clear(v1);
  return 0i64;
}

/*
==============
luaopen_table_new
==============
*/
int luaopen_table_new(lua_State *L)
{
  return j_lj_lib_postreg(L, (int (__fastcall *)(lua_State *))lj_cf_table_new, 94, "new");
}

/*
==============
luaopen_table_clear
==============
*/
int luaopen_table_clear(lua_State *L)
{
  return j_lj_lib_postreg(L, (int (__fastcall *)(lua_State *))lj_cf_table_clear, 95, "clear");
}

/*
==============
auxsort
==============
*/
void auxsort(lua_State *L, int l, int u)
{
  int v3; 
  int v4; 
  int v6; 
  int v7; 
  int i; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  bool v13; 
  int v14; 

  if ( l < u )
  {
    v3 = u;
    v4 = l;
    do
    {
      v14 = v4;
      j_lua_rawgeti(L, 1, v4);
      j_lua_rawgeti(L, 1, v3);
      if ( sort_comp(L, -1, -2) )
      {
        j_lua_rawseti(L, 1, v4);
        j_lua_rawseti(L, 1, v3);
      }
      else
      {
        j_lua_settop(L, -3);
      }
      if ( v3 - v4 == 1 )
        break;
      v6 = (v4 + v3) / 2;
      j_lua_rawgeti(L, 1, v6);
      j_lua_rawgeti(L, 1, v4);
      if ( sort_comp(L, -2, -1) )
      {
        j_lua_rawseti(L, 1, v6);
        j_lua_rawseti(L, 1, v4);
      }
      else
      {
        j_lua_settop(L, -2);
        j_lua_rawgeti(L, 1, v3);
        if ( sort_comp(L, -1, -2) )
        {
          j_lua_rawseti(L, 1, v6);
          j_lua_rawseti(L, 1, v3);
        }
        else
        {
          j_lua_settop(L, -3);
        }
      }
      if ( v3 - v4 == 2 )
        break;
      j_lua_rawgeti(L, 1, v6);
      j_lua_pushvalue(L, -1);
      j_lua_rawgeti(L, 1, v3 - 1);
      j_lua_rawseti(L, 1, v6);
      j_lua_rawseti(L, 1, v3 - 1);
      v7 = v4;
      for ( i = v3 - 1; ; j_lua_rawseti(L, 1, i) )
      {
        while ( 1 )
        {
          v9 = v7++;
          j_lua_rawgeti(L, 1, v7);
          if ( j_lua_type(L, 2) )
          {
            j_lua_pushvalue(L, 2);
            j_lua_pushvalue(L, -2);
            j_lua_pushvalue(L, -4);
            j_lua_call(L, 2, 1);
            v10 = j_lua_toboolean(L, -1);
            j_lua_settop(L, -2);
          }
          else
          {
            v10 = j_lua_lessthan(L, -1, -2);
          }
          if ( !v10 )
            break;
          if ( v7 >= v3 )
LABEL_36:
            j_lj_err_caller(L, LJ_ERR_TABSORT);
          j_lua_settop(L, -2);
        }
        while ( 1 )
        {
          j_lua_rawgeti(L, 1, --i);
          if ( j_lua_type(L, 2) )
          {
            j_lua_pushvalue(L, 2);
            j_lua_pushvalue(L, -4);
            j_lua_pushvalue(L, -3);
            j_lua_call(L, 2, 1);
            v11 = j_lua_toboolean(L, -1);
            j_lua_settop(L, -2);
          }
          else
          {
            v11 = j_lua_lessthan(L, -3, -1);
          }
          if ( !v11 )
            break;
          if ( i <= v4 )
            goto LABEL_36;
          j_lua_settop(L, -2);
        }
        if ( i < v7 )
          break;
        j_lua_rawseti(L, 1, v7);
      }
      j_lua_settop(L, -4);
      j_lua_rawgeti(L, 1, v3 - 1);
      j_lua_rawgeti(L, 1, v7);
      j_lua_rawseti(L, 1, v3 - 1);
      j_lua_rawseti(L, 1, v7);
      v12 = v4;
      v13 = v7 - v4 < v3 - v7;
      v4 = v9 + 2;
      if ( !v13 )
      {
        v9 = v3;
        v3 = v7 - 1;
        v4 = v14;
      }
      if ( !v13 )
        v12 = v7 + 1;
      auxsort(L, v12, v9);
    }
    while ( v4 < v3 );
  }
}

/*
==============
sort_comp
==============
*/
int sort_comp(lua_State *L, int a, int b)
{
  int v6; 

  if ( !j_lua_type(L, 2) )
    return j_lua_lessthan(L, a, b);
  j_lua_pushvalue(L, 2);
  j_lua_pushvalue(L, a - 1);
  j_lua_pushvalue(L, b - 2);
  j_lua_call(L, 2, 1);
  v6 = j_lua_toboolean(L, -1);
  j_lua_settop(L, -2);
  return v6;
}

