/*
==============
luaopen_os
==============
*/
__int64 luaopen_os(lua_State *L)
{
  j_lj_lib_register(L, "os", lj_lib_init_os, lj_lib_cf_os);
  return 1i64;
}

/*
==============
lj_cf_os_execute
==============
*/
__int64 lj_cf_os_execute(lua_State *L)
{
  j_lua_pushinteger(L, -1i64);
  return 1i64;
}

/*
==============
lj_cf_os_remove
==============
*/
int lj_cf_os_remove(lua_State *L)
{
  const char *v2; 
  int v3; 

  v2 = j_luaL_checklstring(L, 1, NULL);
  v3 = remove(v2);
  return j_luaL_fileresult(L, v3 == 0, v2);
}

/*
==============
lj_cf_os_rename
==============
*/
int lj_cf_os_rename(lua_State *L)
{
  const char *v2; 
  const char *v3; 
  int v4; 

  v2 = j_luaL_checklstring(L, 1, NULL);
  v3 = j_luaL_checklstring(L, 2, NULL);
  v4 = rename(v2, v3);
  return j_luaL_fileresult(L, v4 == 0, v2);
}

/*
==============
lj_cf_os_tmpname
==============
*/
__int64 lj_cf_os_tmpname(lua_State *L)
{
  char Buffer[272]; 

  if ( !tmpnam(Buffer) )
    j_lj_err_caller(L, LJ_ERR_OSUNIQF);
  j_lua_pushstring(L, Buffer);
  return 1i64;
}

/*
==============
lj_cf_os_getenv
==============
*/
__int64 lj_cf_os_getenv(lua_State *L)
{
  j_lua_pushnil(L);
  return 1i64;
}

/*
==============
lj_cf_os_exit
==============
*/
void __noreturn lj_cf_os_exit(lua_State *L)
{
  TValue *base; 
  TValue *top; 
  __int64 v4; 
  int v5; 
  int v6; 

  base = L->base;
  top = L->top;
  if ( base >= top || (v4 = base->it64 >> 47, (unsigned int)(v4 + 3) > 1) )
  {
    v6 = j_lj_lib_optint(L, 1, 0);
    base = L->base;
    v5 = v6;
    top = L->top;
  }
  else
  {
    v5 = v4 == -2;
  }
  if ( &base[1] < top && (unsigned int)(base[1].it64 >> 47) < 0xFFFFFFFE )
    j_lua_close(L);
  exit(v5);
}

/*
==============
lj_cf_os_clock
==============
*/
__int64 lj_cf_os_clock(lua_State *L)
{
  clock();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, eax
  }
  _RAX = L->top;
  __asm
  {
    vmulsd  xmm1, xmm0, cs:__real@3f50624dd2f1a9fc
    vmovsd  qword ptr [rax], xmm1
  }
  ++L->top;
  return 1i64;
}

/*
==============
lj_cf_os_date
==============
*/
__int64 lj_cf_os_date(lua_State *L)
{
  const char *v3; 
  struct tm *v5; 
  const struct tm *v6; 
  __int64 result; 
  int tm_isdst; 
  char v9; 
  const char *v10; 
  unsigned int v11; 
  unsigned __int64 ptr64; 
  bool v13; 
  int v14; 
  int v15; 
  char *v16; 
  char *v17; 
  int v18; 
  unsigned __int64 v19; 
  TValue *top; 
  signed __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  TValue *v24; 
  unsigned __int64 v25; 
  signed __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __time64_t Time; 

  v3 = j_luaL_optlstring(L, 1, "%c", NULL);
  if ( j_lua_type(L, 2) > 0 )
  {
    *(double *)&_XMM0 = j_luaL_checknumber(L, 2);
    __asm { vcvttsd2si rax, xmm0 }
  }
  else
  {
    _RAX = _time64(NULL);
  }
  Time = _RAX;
  if ( *v3 == 33 )
  {
    ++v3;
    v5 = _gmtime64(&Time);
  }
  else
  {
    v5 = _localtime64(&Time);
  }
  v6 = v5;
  if ( !v5 )
  {
    L->top->u64 = -1i64;
    result = 1i64;
    ++L->top;
    return result;
  }
  if ( *v3 == aT_3[0] && v3[1] == aT_3[1] && v3[2] == aT_3[2] )
  {
    j_lua_createtable(L, 0, 9);
    j_lua_pushinteger(L, v6->tm_sec);
    j_lua_setfield(L, -2, "sec");
    j_lua_pushinteger(L, v6->tm_min);
    j_lua_setfield(L, -2, "min");
    j_lua_pushinteger(L, v6->tm_hour);
    j_lua_setfield(L, -2, "hour");
    j_lua_pushinteger(L, v6->tm_mday);
    j_lua_setfield(L, -2, "day");
    j_lua_pushinteger(L, v6->tm_mon + 1);
    j_lua_setfield(L, -2, "month");
    j_lua_pushinteger(L, v6->tm_year + 1900);
    j_lua_setfield(L, -2, "year");
    j_lua_pushinteger(L, v6->tm_wday + 1);
    j_lua_setfield(L, -2, "wday");
    j_lua_pushinteger(L, v6->tm_yday + 1);
    j_lua_setfield(L, -2, "yday");
    tm_isdst = v6->tm_isdst;
    if ( tm_isdst >= 0 )
    {
      j_lua_pushboolean(L, tm_isdst);
      j_lua_setfield(L, -2, "isdst");
      return 1i64;
    }
  }
  else
  {
    v9 = *v3;
    if ( *v3 )
    {
      v10 = v3;
      v11 = 0;
      ptr64 = L->glref.ptr64;
      do
      {
        v13 = v9 == 37;
        v9 = *++v10;
        v14 = 1;
        if ( v13 )
          v14 = 30;
        v11 += v14;
      }
      while ( v9 );
      *(_QWORD *)(ptr64 + 176) = L;
      while ( 1 )
      {
        v15 = *(_DWORD *)(ptr64 + 160);
        if ( v11 <= v15 - *(_DWORD *)(ptr64 + 168) )
        {
          v17 = *(char **)(ptr64 + 168);
          v18 = (int)v17;
        }
        else
        {
          v16 = j_lj_buf_need2((SBuf *)(ptr64 + 152), v11);
          v15 = *(_DWORD *)(ptr64 + 160);
          v17 = v16;
          v18 = *(_DWORD *)(ptr64 + 168);
        }
        v19 = strftime(v17, (unsigned int)(v15 - v18), v3, v6);
        if ( v19 )
          break;
        v11 += v11 | 1;
      }
      top = L->top;
      L->top = top + 1;
      v21 = (unsigned __int64)j_lj_str_new(L, v17, v19) | 0xFFFD800000000000ui64;
      top->u64 = v21;
      v22 = v21 >> 47;
      if ( (unsigned int)(v21 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v23 = v21 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v22 != *(unsigned __int8 *)(v23 + 9) || (*(_BYTE *)(v23 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
      {
        j_lj_gc_step(L);
        return 1i64;
      }
    }
    else
    {
      v24 = L->top;
      v25 = L->glref.ptr64 + 184;
      L->top = v24 + 1;
      v26 = v25 | 0xFFFD800000000000ui64;
      v24->u64 = v26;
      v27 = v26 >> 47;
      if ( (unsigned int)(v26 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v28 = v26 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v27 != *(unsigned __int8 *)(v28 + 9) || (*(_BYTE *)(v28 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
    }
  }
  return 1i64;
}

/*
==============
lj_cf_os_time
==============
*/

__int64 __fastcall lj_cf_os_time(lua_State *L, double _XMM1_8)
{
  __time64_t v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  struct tm Tm; 

  if ( j_lua_type(L, 1) > 0 )
  {
    j_luaL_checktype(L, 1, 5);
    j_lua_settop(L, 1);
    v4 = -1;
    j_lua_getfield(L, -1, "sec");
    if ( j_lua_isnumber(L, -1) )
      v5 = j_lua_tointeger(L, -1);
    else
      v5 = 0;
    j_lua_settop(L, -2);
    Tm.tm_sec = v5;
    j_lua_getfield(L, -1, "min");
    if ( j_lua_isnumber(L, -1) )
      v6 = j_lua_tointeger(L, -1);
    else
      v6 = 0;
    j_lua_settop(L, -2);
    Tm.tm_min = v6;
    j_lua_getfield(L, -1, "hour");
    if ( j_lua_isnumber(L, -1) )
      v7 = j_lua_tointeger(L, -1);
    else
      v7 = 12;
    j_lua_settop(L, -2);
    Tm.tm_hour = v7;
    j_lua_getfield(L, -1, "day");
    if ( !j_lua_isnumber(L, -1) )
      j_lj_err_callerv(L, LJ_ERR_OSDATEF, "day");
    v8 = j_lua_tointeger(L, -1);
    j_lua_settop(L, -2);
    Tm.tm_mday = v8;
    j_lua_getfield(L, -1, "month");
    if ( !j_lua_isnumber(L, -1) )
      j_lj_err_callerv(L, LJ_ERR_OSDATEF, "month");
    v9 = j_lua_tointeger(L, -1);
    j_lua_settop(L, -2);
    Tm.tm_mon = v9 - 1;
    j_lua_getfield(L, -1, "year");
    if ( !j_lua_isnumber(L, -1) )
      j_lj_err_callerv(L, LJ_ERR_OSDATEF, "year");
    v10 = j_lua_tointeger(L, -1);
    j_lua_settop(L, -2);
    Tm.tm_year = v10 - 1900;
    j_lua_getfield(L, -1, "isdst");
    if ( j_lua_type(L, -1) )
      v4 = j_lua_toboolean(L, -1);
    j_lua_settop(L, -2);
    Tm.tm_isdst = v4;
    v3 = _mktime64(&Tm);
  }
  else
  {
    v3 = _time64(NULL);
  }
  if ( v3 == -1 )
  {
    j_lua_pushnil(L);
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, rax; n
    }
    j_lua_pushnumber(L, *(long double *)&_XMM1);
  }
  return 1i64;
}

/*
==============
lj_cf_os_difftime
==============
*/

__int64 __fastcall lj_cf_os_difftime(lua_State *L, __int64 a2, double _XMM2_8)
{
  __asm { vxorpd  xmm2, xmm2, xmm2; def }
  *(double *)&_XMM0 = j_luaL_optnumber(L, 2, *(long double *)&_XMM2);
  __asm { vcvttsd2si rbx, xmm0 }
  *(double *)&_XMM0 = j_luaL_checknumber(L, 1);
  __asm { vcvttsd2si rcx, xmm0; Time1 }
  *(double *)&_XMM0 = _difftime64(_RCX, _RBX);
  __asm { vmovaps xmm1, xmm0; n }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  return 1i64;
}

/*
==============
lj_cf_os_setlocale
==============
*/
__int64 lj_cf_os_setlocale(lua_State *L)
{
  GCstr *v2; 
  const char *v3; 
  int v4; 
  int v5; 
  char *v6; 

  v2 = j_lj_lib_optstr(L, 1);
  v3 = (const char *)&v2[1];
  if ( !v2 )
    v3 = NULL;
  v4 = 2;
  v5 = j_lj_lib_checkopt(L, 2, 6, &byte_144747738);
  if ( v5 )
  {
    switch ( v5 )
    {
      case 1:
        v4 = 4;
        break;
      case 2:
        v4 = 5;
        break;
      case 3:
        v4 = 1;
        break;
      case 4:
        v4 = 3;
        break;
      default:
        v4 = v5;
        if ( v5 == 6 )
          v4 = 0;
        break;
    }
  }
  v6 = setlocale(v4, v3);
  j_lua_pushstring(L, v6);
  return 1i64;
}

