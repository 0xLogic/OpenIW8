/*
==============
luaopen_debug
==============
*/
__int64 luaopen_debug(lua_State *L)
{
  j_lj_lib_register(L, "debug", lj_lib_init_debug, lj_lib_cf_debug);
  return 1i64;
}

/*
==============
lj_cf_debug_getregistry
==============
*/
__int64 lj_cf_debug_getregistry(lua_State *L)
{
  TValue *top; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  top = L->top;
  L->top = top + 1;
  v2 = *(_QWORD *)(L->glref.ptr64 + 224);
  top->u64 = v2;
  v3 = v2 >> 47;
  if ( (unsigned int)(v2 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v4 = v2 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v3 != *(unsigned __int8 *)(v4 + 9) || (*(_BYTE *)(v4 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return 1i64;
}

/*
==============
lj_cf_debug_getmetatable
==============
*/
__int64 lj_cf_debug_getmetatable(lua_State *L)
{
  bool v2; 
  __int64 result; 

  j_lj_lib_checkany(L, 1);
  v2 = j_lua_getmetatable(L, 1) == 0;
  result = 1i64;
  if ( v2 )
    L->top[-1].u64 = -1i64;
  return result;
}

/*
==============
lj_cf_debug_setmetatable
==============
*/
__int64 lj_cf_debug_setmetatable(lua_State *L)
{
  __int64 result; 

  j_lj_lib_checktabornil(L, 2);
  L->top = L->base + 2;
  j_lua_setmetatable(L, 1);
  result = 1i64;
  L->top[-1].u64 = 0xFFFEFFFFFFFFFFFFui64;
  return result;
}

/*
==============
lj_cf_debug_getfenv
==============
*/
__int64 lj_cf_debug_getfenv(lua_State *L)
{
  j_lj_lib_checkany(L, 1);
  j_lua_getfenv(L, 1);
  return 1i64;
}

/*
==============
lj_cf_debug_setfenv
==============
*/
__int64 lj_cf_debug_setfenv(lua_State *L)
{
  j_lj_lib_checktab(L, 2);
  L->top = L->base + 2;
  if ( !j_lua_setfenv(L, 1) )
    j_lj_err_caller(L, LJ_ERR_SETFENV);
  return 1i64;
}

/*
==============
lj_cf_debug_getinfo
==============
*/
__int64 lj_cf_debug_getinfo(lua_State *L)
{
  TValue *base; 
  int v3; 
  int v4; 
  __int64 u64; 
  lua_State *v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  const char *v10; 
  int v11; 
  TValue *v13; 
  TValue *top; 
  signed __int64 v15; 
  char v16; 
  lj_Debug ar; 

  base = L->base;
  v3 = 0;
  v4 = 0;
  if ( base < L->top && (u64 = base->u64, (unsigned int)(u64 >> 47) == -7) )
  {
    v6 = (lua_State *)(u64 & 0x7FFFFFFFFFFFi64);
    v7 = 2;
    v8 = 3;
    v9 = 1i64;
  }
  else
  {
    v6 = L;
    v7 = 1;
    v8 = 2;
    v9 = 0i64;
  }
  v10 = j_luaL_optlstring(L, v8, "flnSu", NULL);
  if ( j_lua_isnumber(L, v7) )
  {
    v11 = j_lua_tointeger(L, v7);
    if ( !j_lua_getstack(v6, v11, (lua_Debug *)&ar) )
    {
      L->top[-1].u64 = -1i64;
      return 1i64;
    }
  }
  else
  {
    v13 = &L->base[v9];
    if ( v13 >= L->top || (unsigned int)(v13->it64 >> 47) != -9 )
      j_lj_err_arg(L, v7, LJ_ERR_NOFUNCL);
    v10 = j_lua_pushfstring(L, ">%s", v10);
    if ( (unsigned int)(L->base[v9].it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_debug.c", 123, "(((uint32_t)((L->base+arg)->it64 >> 47)) == (~8u))") )
      __debugbreak();
    top = v6->top;
    v6->top = top + 1;
    v15 = L->base[v9].u64 & 0x7FFFFFFFFFFFi64 | 0xFFFB800000000000ui64;
    top->u64 = v15;
    if ( (~(unsigned int)(v15 >> 47) != *(unsigned __int8 *)((v15 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v15 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(v6->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  if ( !j_lj_debug_getinfo(v6, v10, &ar, 1) )
    j_lj_err_arg(L, v8, LJ_ERR_INVOPT);
  j_lua_createtable(L, 0, 16);
  v16 = *v10;
  if ( *v10 )
  {
    do
    {
      switch ( v16 )
      {
        case 'L':
          v4 = 1;
          break;
        case 'S':
          j_lua_pushstring(L, ar.source);
          j_lua_setfield(L, -2, "source");
          j_lua_pushstring(L, ar.short_src);
          j_lua_setfield(L, -2, "short_src");
          j_lua_pushinteger(L, ar.linedefined);
          j_lua_setfield(L, -2, "linedefined");
          j_lua_pushinteger(L, ar.lastlinedefined);
          j_lua_setfield(L, -2, "lastlinedefined");
          j_lua_pushstring(L, ar.what);
          j_lua_setfield(L, -2, "what");
          break;
        case 'f':
          v3 = 1;
          break;
        case 'l':
          j_lua_pushinteger(L, ar.currentline);
          j_lua_setfield(L, -2, "currentline");
          break;
        case 'n':
          j_lua_pushstring(L, ar.name);
          j_lua_setfield(L, -2, (const char *)&stru_143C9A1A4);
          j_lua_pushstring(L, ar.namewhat);
          j_lua_setfield(L, -2, "namewhat");
          break;
        case 'u':
          j_lua_pushinteger(L, ar.nups);
          j_lua_setfield(L, -2, "nups");
          j_lua_pushinteger(L, ar.nparams);
          j_lua_setfield(L, -2, "nparams");
          j_lua_pushboolean(L, ar.isvararg);
          j_lua_setfield(L, -2, "isvararg");
          break;
        default:
          break;
      }
      v16 = *++v10;
    }
    while ( v16 );
    if ( v4 )
    {
      if ( L == v6 )
      {
        j_lua_pushvalue(L, -2);
        j_lua_remove(L, -3);
      }
      else
      {
        j_lua_xmove(v6, L, 1);
      }
      j_lua_setfield(L, -2, "activelines");
    }
    if ( v3 )
    {
      if ( L == v6 )
      {
        j_lua_pushvalue(L, -2);
        j_lua_remove(L, -3);
      }
      else
      {
        j_lua_xmove(v6, L, 1);
      }
      j_lua_setfield(L, -2, "func");
    }
  }
  return 1i64;
}

/*
==============
lj_cf_debug_getlocal
==============
*/
__int64 lj_cf_debug_getlocal(lua_State *L)
{
  TValue *base; 
  __int64 u64; 
  int v4; 
  lua_State *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  TValue *v9; 
  const char *v10; 
  int v11; 
  const char *v12; 
  lua_Debug ar; 

  base = L->base;
  if ( base < L->top && (u64 = base->u64, (unsigned int)(u64 >> 47) == -7) )
  {
    v4 = 2;
    v5 = (lua_State *)(u64 & 0x7FFFFFFFFFFFi64);
    v6 = 3;
    v7 = 1i64;
  }
  else
  {
    v4 = 1;
    v5 = L;
    v7 = 0i64;
    v6 = 2;
  }
  v8 = j_lj_lib_checkint(L, v6);
  v9 = L->base;
  if ( (unsigned int)(v9[v7].it64 >> 47) == -9 )
  {
    L->top = &v9[v7 + 1];
    v10 = j_lua_getlocal(L, NULL, v8);
    j_lua_pushstring(L, v10);
  }
  else
  {
    v11 = j_lj_lib_checkint(L, v4);
    if ( !j_lua_getstack(v5, v11, &ar) )
      j_lj_err_arg(L, v4, LJ_ERR_LVLRNG);
    v12 = j_lua_getlocal(v5, &ar, v8);
    if ( v12 )
    {
      j_lua_xmove(v5, L, 1);
      j_lua_pushstring(L, v12);
      j_lua_pushvalue(L, -2);
      return 2i64;
    }
    L->top[-1].u64 = -1i64;
  }
  return 1i64;
}

/*
==============
lj_cf_debug_setlocal
==============
*/
__int64 lj_cf_debug_setlocal(lua_State *L)
{
  TValue *base; 
  __int64 u64; 
  int v4; 
  lua_State *v5; 
  int v6; 
  int v7; 
  int v8; 
  TValue *v9; 
  TValue *top; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  const char *v15; 
  lua_Debug ar; 

  base = L->base;
  if ( base < L->top && (u64 = base->u64, (unsigned int)(u64 >> 47) == -7) )
  {
    v4 = 4;
    v5 = (lua_State *)(u64 & 0x7FFFFFFFFFFFi64);
    v6 = 2;
    v7 = 3;
  }
  else
  {
    v4 = 3;
    v5 = L;
    v6 = 1;
    v7 = 2;
  }
  v8 = j_lj_lib_checkint(L, v6);
  if ( !j_lua_getstack(v5, v8, &ar) )
    j_lj_err_arg(L, v6, LJ_ERR_LVLRNG);
  v9 = j_lj_lib_checkany(L, v4);
  top = v5->top;
  v5->top = top + 1;
  v11 = v9->u64;
  top->u64 = v9->u64;
  v12 = v11 >> 47;
  if ( (unsigned int)(v11 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v13 = v11 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v12 != *(unsigned __int8 *)(v13 + 9) || (*(_BYTE *)(v13 + 8) & (unsigned __int8)~*(_BYTE *)(v5->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v14 = j_lj_lib_checkint(L, v7);
  v15 = j_lua_setlocal(v5, &ar, v14);
  j_lua_pushstring(L, v15);
  return 1i64;
}

/*
==============
lj_cf_debug_getupvalue
==============
*/
int lj_cf_debug_getupvalue(lua_State *L)
{
  return debug_getupvalue(L, 1);
}

/*
==============
lj_cf_debug_setupvalue
==============
*/
const char *lj_cf_debug_setupvalue(lua_State *L)
{
  int v2; 
  const char *result; 

  j_lj_lib_checkany(L, 3);
  v2 = j_lj_lib_checkint(L, 2);
  j_lj_lib_checkfunc(L, 1);
  result = j_lua_setupvalue(L, 1, v2);
  if ( result )
  {
    j_lua_pushstring(L, result);
    return (const char *)1;
  }
  return result;
}

/*
==============
lj_cf_debug_upvalueid
==============
*/
__int64 lj_cf_debug_upvalueid(lua_State *L)
{
  GCfunc *v2; 
  int v3; 
  __int64 p_it64; 

  v2 = j_lj_lib_checkfunc(L, 1);
  v3 = j_lj_lib_checkint(L, 2) - 1;
  if ( v3 >= (unsigned int)v2->c.nupvalues )
    j_lj_err_arg(L, 2, LJ_ERR_IDXRNG);
  if ( v2->c.ffid )
    p_it64 = (__int64)&v2->c.upvalue[v3].it64;
  else
    p_it64 = *((_QWORD *)&v2->c.f + v3);
  L->top[-1].u64 = p_it64 | 0xFFFE000000000000ui64;
  return 1i64;
}

/*
==============
lj_cf_debug_upvaluejoin
==============
*/
__int64 lj_cf_debug_upvaluejoin(lua_State *L)
{
  int v1; 
  __int64 v3; 
  int i; 
  GCobj *v5; 
  int v6; 
  GCobj **v7; 
  GCobj **v9; 
  GCobj **v10; 
  GCobj *o[3]; 

  v1 = 0;
  v3 = 0i64;
  for ( i = 2; i < 6; i += 2 )
  {
    v5 = (GCobj *)j_lj_lib_checkfunc(L, i - 1);
    o[v3] = v5;
    if ( v5->gch.unused1 )
      j_lj_err_arg(L, i - 1, LJ_ERR_NOLFUNC);
    v6 = j_lj_lib_checkint(L, i) - 1;
    if ( v6 >= (unsigned int)v5->gch.unused2 )
      j_lj_err_arg(L, 2 * v1 + 2, LJ_ERR_IDXRNG);
    ++v1;
    (&v9)[v3++] = (GCobj **)&(&v5->th.top)[v6];
  }
  v7 = v10;
  *v9 = *v10;
  if ( ((*v7)->gch.marked & 3) != 0 && (o[0]->gch.marked & 4) != 0 )
    j_lj_gc_barrierf((global_State *)L->glref.ptr64, o[0], *v7);
  return 0i64;
}

/*
==============
hookf
==============
*/
void hookf(lua_State *L, lua_Debug *ar)
{
  j_lua_pushlightuserdata(L, (void *)0x3004);
  j_lua_rawget(L, -10000);
  if ( j_lua_type(L, -1) == 6 )
  {
    j_lua_pushstring(L, hooknames[ar->event]);
    if ( ar->currentline < 0 )
      j_lua_pushnil(L);
    else
      j_lua_pushinteger(L, ar->currentline);
    j_lua_call(L, 2, 0);
  }
}

/*
==============
lj_cf_debug_sethook
==============
*/
__int64 lj_cf_debug_sethook(lua_State *L)
{
  TValue *base; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  void (__fastcall *v7)(lua_State *, lua_Debug *); 
  int v8; 
  const char *v9; 
  int v10; 
  int v11; 
  int v12; 

  base = L->base;
  if ( base < L->top && (unsigned int)(base->it64 >> 47) == -7 )
  {
    v3 = 3;
    v4 = 4;
    v5 = 2;
  }
  else
  {
    v3 = 2;
    v5 = 1;
    v4 = 3;
  }
  if ( j_lua_type(L, v5) > 0 )
  {
    v9 = j_luaL_checklstring(L, v3, NULL);
    j_luaL_checktype(L, v5, 6);
    v10 = j_luaL_optinteger(L, v4, 0i64);
    v11 = 0;
    v7 = hookf;
    v8 = v10;
    if ( strchr_0(v9, 99) )
      v11 = 1;
    if ( strchr_0(v9, 114) )
      v11 |= 2u;
    if ( strchr_0(v9, 108) )
      v11 |= 4u;
    v12 = v11 | 8;
    if ( v8 <= 0 )
      v12 = v11;
    v6 = v12;
  }
  else
  {
    j_lua_settop(L, v5);
    v6 = 0;
    v7 = NULL;
    v8 = 0;
  }
  j_lua_pushlightuserdata(L, (void *)0x3004);
  j_lua_pushvalue(L, v5);
  j_lua_rawset(L, -10000);
  j_lua_sethook(L, v7, v6, v8);
  return 0i64;
}

/*
==============
lj_cf_debug_gethook
==============
*/
__int64 lj_cf_debug_gethook(lua_State *L)
{
  char v2; 
  void (__fastcall *v3)(lua_State *, lua_Debug *); 
  char v4; 
  __int64 v5; 
  int v6; 
  char str[8]; 

  v2 = j_lua_gethookmask(L);
  v3 = j_lua_gethook(L);
  if ( !v3 || v3 == hookf )
  {
    j_lua_pushlightuserdata(L, (void *)0x3004);
    j_lua_rawget(L, -10000);
  }
  else
  {
    j_lua_pushlstring(L, "external hook", 0xDui64);
  }
  v4 = str[0];
  v5 = v2 & 1;
  if ( (v2 & 1) != 0 )
    v4 = 99;
  str[0] = v4;
  if ( (v2 & 2) != 0 )
  {
    str[v5] = 114;
    v5 = (unsigned int)(v5 + 1);
  }
  if ( (v2 & 4) != 0 )
  {
    str[v5] = 108;
    v5 = (unsigned int)(v5 + 1);
  }
  str[v5] = 0;
  j_lua_pushstring(L, str);
  v6 = j_lua_gethookcount(L);
  j_lua_pushinteger(L, v6);
  return 3i64;
}

/*
==============
lj_cf_debug_debug
==============
*/
char *lj_cf_debug_debug(lua_State *L)
{
  FILE *v2; 
  FILE *v3; 
  char *result; 
  __int64 v5; 
  char v6; 
  unsigned __int64 v7; 
  FILE *v8; 
  const char *v9; 
  FILE *v10; 
  FILE *v11; 
  FILE *v12; 
  char Buffer[256]; 

  v2 = __acrt_iob_func(2u);
  fputs("lua_debug> ", v2);
  v3 = __acrt_iob_func(0);
  result = fgets(Buffer, 250, v3);
  if ( result )
  {
    do
    {
      v5 = 0i64;
      while ( 1 )
      {
        v6 = Buffer[v5++];
        if ( v6 != aCont[v5 - 1] )
          break;
        if ( v5 == 6 )
          return 0i64;
      }
      v7 = -1i64;
      do
        ++v7;
      while ( Buffer[v7] );
      if ( j_luaL_loadbuffer(L, Buffer, v7, "=(debug command)") || j_lua_pcall(L, 0, 0, 0) )
      {
        v8 = __acrt_iob_func(2u);
        v9 = j_lua_tolstring(L, -1, NULL);
        fputs(v9, v8);
        v10 = __acrt_iob_func(2u);
        fputs("\n", v10);
      }
      j_lua_settop(L, 0);
      v11 = __acrt_iob_func(2u);
      fputs("lua_debug> ", v11);
      v12 = __acrt_iob_func(0);
    }
    while ( fgets(Buffer, 250, v12) );
    return 0i64;
  }
  return result;
}

/*
==============
lj_cf_debug_traceback
==============
*/
__int64 lj_cf_debug_traceback(lua_State *L)
{
  TValue *base; 
  int v2; 
  __int64 u64; 
  int v5; 
  lua_State *v6; 
  __int64 v7; 
  int v8; 
  const char *v9; 
  TValue *v10; 
  int v11; 

  base = L->base;
  v2 = 0;
  if ( base < L->top && (u64 = base->u64, (unsigned int)(u64 >> 47) == -7) )
  {
    v5 = 2;
    v6 = (lua_State *)(u64 & 0x7FFFFFFFFFFFi64);
    v7 = 1i64;
    v8 = 3;
  }
  else
  {
    v5 = 1;
    v6 = L;
    v7 = 0i64;
    v8 = 2;
  }
  v9 = j_lua_tolstring(L, v5, NULL);
  if ( v9 || (v10 = &L->base[v7], L->top <= v10) )
  {
    LOBYTE(v2) = L == v6;
    v11 = j_lj_lib_optint(L, v8, v2);
    j_luaL_traceback(L, v6, v9, v11);
  }
  else
  {
    L->top = v10 + 1;
  }
  return 1i64;
}

/*
==============
debug_getupvalue
==============
*/
const char *debug_getupvalue(lua_State *L, int get)
{
  int v4; 
  const char *result; 
  TValue *top; 
  __int64 it64; 
  __int64 v8; 
  __int64 v9; 

  v4 = j_lj_lib_checkint(L, 2);
  j_lj_lib_checkfunc(L, 1);
  if ( get )
    result = j_lua_getupvalue(L, 1, v4);
  else
    result = j_lua_setupvalue(L, 1, v4);
  if ( result )
  {
    j_lua_pushstring(L, result);
    if ( get )
    {
      top = L->top;
      it64 = top[-2].it64;
      top->u64 = it64;
      v8 = it64 >> 47;
      if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v9 = it64 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      ++L->top;
      return (const char *)2;
    }
    else
    {
      return (const char *)1;
    }
  }
  return result;
}

