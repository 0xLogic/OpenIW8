/*
==============
luaopen_jit
==============
*/
__int64 luaopen_jit(lua_State *L)
{
  char v3[16]; 
  char v4[16]; 

  if ( (unsigned int)j_lj_vm_cpuid(0i64, v3) )
    j_lj_vm_cpuid(1i64, v4);
  j_lua_pushlstring(L, "Windows", 7ui64);
  j_lua_pushlstring(L, "x64", 3ui64);
  j_lua_pushinteger(L, 20100i64);
  j_lua_pushlstring(L, "LuaJIT 2.1.0-beta3", 0x12ui64);
  j_lj_lib_register(L, "jit", lj_lib_init_jit, lj_lib_cf_jit);
  j_lj_lib_prereg(L, "jit.profile", luaopen_jit_profile, (GCtab *)L->env.gcptr64);
  j_lj_lib_prereg(L, "jit.util", luaopen_jit_util, (GCtab *)L->env.gcptr64);
  L->top -= 2;
  return 1i64;
}

/*
==============
lj_cf_jit_on
==============
*/
int lj_cf_jit_on(lua_State *L)
{
  return setjitmode(L, 256);
}

/*
==============
lj_cf_jit_off
==============
*/
int lj_cf_jit_off(lua_State *L)
{
  return setjitmode(L, 0);
}

/*
==============
lj_cf_jit_flush
==============
*/
int lj_cf_jit_flush(lua_State *L)
{
  return setjitmode(L, 512);
}

/*
==============
lj_cf_jit_status
==============
*/
__int64 lj_cf_jit_status(lua_State *L)
{
  __int64 result; 

  L->top->u64 = 0xFFFF7FFFFFFFFFFFui64;
  result = 1i64;
  ++L->top;
  return result;
}

/*
==============
lj_cf_jit_attach
==============
*/
__int64 lj_cf_jit_attach(lua_State *L)
{
  GCfunc *v2; 
  GCstr *v3; 
  unsigned __int8 gcptr64; 
  GCstr *v5; 
  unsigned int len; 
  int v7; 
  TValue *v9; 

  v2 = j_lj_lib_checkfunc(L, 1);
  v3 = j_lj_lib_optstr(L, 2);
  j_luaL_findtable(L, -10000, "_VMEVENTS", 4);
  if ( v3 )
  {
    gcptr64 = v3[1].nextgc.gcptr64;
    v5 = v3 + 1;
    len = v3->len;
    if ( gcptr64 )
    {
      do
      {
        v5 = (GCstr *)((char *)v5 + 1);
        v7 = gcptr64 + __ROL4__(len, 6);
        gcptr64 = v5->nextgc.gcptr64;
        len ^= v7;
      }
      while ( LOBYTE(v5->nextgc.gcptr64) );
    }
    j_lua_pushvalue(L, 1);
    j_lua_rawseti(L, -2, 8 * len);
    *(_BYTE *)(L->glref.ptr64 + 211) = -1;
    return 0i64;
  }
  else
  {
    L->top->u64 = -1i64;
    ++L->top;
    while ( j_lua_next(L, -2) )
    {
      v9 = --L->top;
      if ( (unsigned int)(v9->it64 >> 47) == -9 && (GCfunc *)(v9->u64 & 0x7FFFFFFFFFFFi64) == v2 )
      {
        if ( (unsigned int)(v9[-2].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 136, "(((uint32_t)((L->top-2)->it64 >> 47)) == (~11u))") )
          __debugbreak();
        j_lj_tab_set(L, (GCtab *)(L->top[-2].u64 & 0x7FFFFFFFFFFFi64), (const TValue *)L->top - 1)->u64 = -1i64;
      }
    }
    return 0i64;
  }
}

/*
==============
lj_cf_jit_util_funcinfo
==============
*/
__int64 lj_cf_jit_util_funcinfo(lua_State *L)
{
  GCproto *v2; 
  unsigned int v3; 
  GCtab *v4; 
  GCstr *v5; 
  GCstr *v8; 
  GCstr *v11; 
  GCstr *v14; 
  GCstr *v17; 
  GCstr *v20; 
  GCstr *v23; 
  GCstr *v26; 
  GCstr *v29; 
  TValue *top; 
  signed __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  GCstr *v36; 
  TValue *v37; 
  signed __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  unsigned __int64 v41; 
  GCtab *v42; 
  GCstr *v43; 
  GCstr *v46; 
  GCstr *v49; 

  v2 = check_Lproto(L, 1);
  if ( v2 )
  {
    v3 = j_lj_lib_optint(L, 2, 0);
    j_lua_createtable(L, 0, 16);
    if ( (unsigned int)(L->top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 188, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
      __debugbreak();
    v4 = (GCtab *)(L->top[-1].u64 & 0x7FFFFFFFFFFFi64);
    v5 = j_lj_str_new(L, "linedefined", 0xBui64);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, ebx }
    j_lj_tab_setstr(L, v4, v5)->u64 = *(unsigned __int64 *)&_XMM0;
    v8 = j_lj_str_new(L, "lastlinedefined", 0xFui64);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, ebx }
    j_lj_tab_setstr(L, v4, v8)->u64 = *(unsigned __int64 *)&_XMM0;
    v11 = j_lj_str_new(L, "stackslots", 0xAui64);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, ebx }
    j_lj_tab_setstr(L, v4, v11)->u64 = *(unsigned __int64 *)&_XMM0;
    v14 = j_lj_str_new(L, "params", 6ui64);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, ebx }
    j_lj_tab_setstr(L, v4, v14)->u64 = *(unsigned __int64 *)&_XMM0;
    v17 = j_lj_str_new(L, "bytecodes", 9ui64);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, ebx }
    j_lj_tab_setstr(L, v4, v17)->u64 = *(unsigned __int64 *)&_XMM0;
    v20 = j_lj_str_new(L, "gcconsts", 8ui64);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, ebx }
    j_lj_tab_setstr(L, v4, v20)->u64 = *(unsigned __int64 *)&_XMM0;
    v23 = j_lj_str_new(L, "nconsts", 7ui64);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, ebx }
    j_lj_tab_setstr(L, v4, v23)->u64 = *(unsigned __int64 *)&_XMM0;
    v26 = j_lj_str_new(L, "upvalues", 8ui64);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, ebx }
    j_lj_tab_setstr(L, v4, v26)->u64 = *(unsigned __int64 *)&_XMM0;
    if ( v3 < v2->sizebc )
    {
      j_lj_debug_line(v2, v3);
      v29 = j_lj_str_new(L, "currentline", 0xBui64);
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, ebx }
      j_lj_tab_setstr(L, v4, v29)->u64 = *(unsigned __int64 *)&_XMM0;
    }
    j_lua_pushboolean(L, v2->flags & 2);
    j_lua_setfield(L, -2, "isvararg");
    j_lua_pushboolean(L, v2->flags & 1);
    j_lua_setfield(L, -2, "children");
    top = L->top;
    L->top = top + 1;
    v33 = v2->chunkname.gcptr64 | 0xFFFD800000000000ui64;
    top->u64 = v33;
    v34 = v33 >> 47;
    if ( (unsigned int)(v33 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v35 = v33 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v34 != *(unsigned __int8 *)(v35 + 9) || (*(_BYTE *)(v35 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    j_lua_setfield(L, -2, "source");
    j_lj_debug_pushloc(L, v2, v3);
    j_lua_setfield(L, -2, "loc");
    v36 = j_lj_str_new(L, "proto", 5ui64);
    v37 = j_lj_tab_setstr(L, v4, v36);
    v38 = (unsigned __int64)v2 | 0xFFFC000000000000ui64;
    v39 = v38 >> 47;
    v37->u64 = v38;
    if ( (unsigned int)(v38 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v40 = v38 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v39 != *(unsigned __int8 *)(v40 + 9) || (*(_BYTE *)(v40 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
  }
  else
  {
    if ( (unsigned int)((signed __int64)L->base->u64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 209, "(((uint32_t)((L->base)->it64 >> 47)) == (~8u))") )
      __debugbreak();
    v41 = L->base->u64 & 0x7FFFFFFFFFFFi64;
    j_lua_createtable(L, 0, 4);
    if ( (unsigned int)(L->top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 212, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
      __debugbreak();
    v42 = (GCtab *)(L->top[-1].u64 & 0x7FFFFFFFFFFFi64);
    if ( *(_BYTE *)(v41 + 10) != 1 )
    {
      v43 = j_lj_str_new(L, "ffid", 4ui64);
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, ecx }
      j_lj_tab_setstr(L, v42, v43)->u64 = *(unsigned __int64 *)&_XMM0;
    }
    v46 = j_lj_str_new(L, "addr", 4ui64);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rbx }
    j_lj_tab_setstr(L, v42, v46)->u64 = *(unsigned __int64 *)&_XMM0;
    v49 = j_lj_str_new(L, "upvalues", 8ui64);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, ebx }
    j_lj_tab_setstr(L, v42, v49)->u64 = *(unsigned __int64 *)&_XMM0;
  }
  return 1i64;
}

/*
==============
lj_cf_jit_util_funcbc
==============
*/
__int64 lj_cf_jit_util_funcbc(lua_State *L)
{
  GCproto *v2; 
  unsigned int v3; 
  __int64 result; 

  v2 = check_Lproto(L, 0);
  v3 = j_lj_lib_checkint(L, 2);
  if ( v3 >= v2->sizebc )
    return 0i64;
  if ( (unsigned __int8)*((_DWORD *)&v2[1].nextgc.gcptr64 + v3) >= 0x61u )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 230, "op < BC__MAX") )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, edi }
  result = 2i64;
  L->top->u64 = *(unsigned __int64 *)&_XMM0;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, ecx }
  L->top[1].n = *(double *)&_XMM0;
  L->top += 2;
  return result;
}

/*
==============
lj_cf_jit_util_funck
==============
*/
__int64 lj_cf_jit_util_funck(lua_State *L)
{
  GCproto *v2; 
  int v3; 
  __int64 v4; 
  unsigned __int64 sizekn; 
  TValue v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  const char *v10; 
  __int64 sizekgc; 
  __int64 v12; 
  signed __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  v2 = check_Lproto(L, 0);
  v3 = j_lj_lib_checkint(L, 2);
  v4 = v3;
  if ( v3 < 0 )
  {
    sizekgc = v2->sizekgc;
    if ( ~(__int64)v3 < sizekgc )
    {
      if ( v3 < (unsigned __int64)-sizekgc && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 251, "(uintptr_t)(intptr_t)(idx) >= (uintptr_t)-(intptr_t)(pt)->sizekgc") )
        __debugbreak();
      v12 = *(_QWORD *)(v2->k.ptr64 + 8 * v4);
      v13 = v12 | ((unsigned __int64)~*(unsigned __int8 *)(v12 + 9) << 47);
      L->top[-1].u64 = v13;
      v14 = v13 >> 47;
      if ( (unsigned int)(v13 >> 47) + 4 <= 0xFFFFFFF6 )
        return 1i64;
      v15 = v13 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v14 == *(unsigned __int8 *)(v15 + 9) && (*(_BYTE *)(v15 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) == 0 )
        return 1i64;
      v9 = 878;
      v10 = "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))";
      goto LABEL_18;
    }
  }
  else
  {
    sizekn = v2->sizekn;
    if ( v3 < (__int64)sizekn )
    {
      if ( v3 >= sizekn && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 246, "(uintptr_t)(idx) < (pt)->sizekn") )
        __debugbreak();
      v6.u64 = *(unsigned __int64 *)(v2->k.ptr64 + 8 * v4);
      L->top[-1].u64 = v6.u64;
      v7 = v6.it64 >> 47;
      if ( (unsigned int)(v6.it64 >> 47) + 4 <= 0xFFFFFFF6 )
        return 1i64;
      v8 = v6.u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v7 == *(unsigned __int8 *)(v8 + 9) && (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) == 0 )
        return 1i64;
      v9 = 925;
      v10 = "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))";
LABEL_18:
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", v9, v10) )
        __debugbreak();
      return 1i64;
    }
  }
  return 0i64;
}

/*
==============
lj_cf_jit_util_funcuvname
==============
*/
__int64 lj_cf_jit_util_funcuvname(lua_State *L)
{
  GCproto *v2; 
  unsigned int v3; 
  unsigned int v4; 
  const char *v5; 
  unsigned __int64 v6; 
  const char *v7; 
  signed __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  v2 = check_Lproto(L, 0);
  v3 = j_lj_lib_checkint(L, 2);
  v4 = v3;
  if ( v3 >= v2->sizeuv )
    return 0i64;
  v5 = j_lj_debug_uvname(v2, v3);
  v6 = -1i64;
  do
    ++v6;
  while ( v5[v6] );
  v7 = j_lj_debug_uvname(v2, v4);
  v8 = (unsigned __int64)j_lj_str_new(L, v7, v6) | 0xFFFD800000000000ui64;
  v9 = v8 >> 47;
  L->top[-1].u64 = v8;
  if ( (unsigned int)(v8 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v10 = v8 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v9 != *(unsigned __int8 *)(v10 + 9) || (*(_BYTE *)(v10 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return 1i64;
}

/*
==============
luaopen_jit_util
==============
*/
__int64 luaopen_jit_util(lua_State *L)
{
  j_lj_lib_register(L, NULL, lj_lib_init_jit_util, lj_lib_cf_jit_util);
  return 1i64;
}

/*
==============
jit_profile_callback
==============
*/
void jit_profile_callback(lua_State *L2, lua_State *L, int samples, int vmstate)
{
  char v5; 
  const TValue *v7; 
  TValue *top; 
  signed __int64 v9; 
  TValue *v10; 
  signed __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  TValue *v14; 
  signed __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  void (__fastcall *v20)(lua_State *); 
  TValue key; 
  char str; 

  v5 = vmstate;
  key.u64 = (unsigned __int64)(&KEY_PROFILE_FUNC - 0x2000000000000i64);
  if ( (unsigned int)(*(__int64 *)(L->glref.ptr64 + 224) >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 552, "(((uint32_t)(((&(((global_State *)(void *)(L->glref).ptr64))->registrytv))->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v7 = j_lj_tab_get(L, (GCtab *)(*(_QWORD *)(L->glref.ptr64 + 224) & 0x7FFFFFFFFFFFi64), &key);
  if ( (unsigned int)(v7->it64 >> 47) == -9 )
  {
    top = L2->top;
    str = v5;
    L2->top = top + 1;
    v9 = v7->u64 & 0x7FFFFFFFFFFFi64 | 0xFFFB800000000000ui64;
    top->u64 = v9;
    if ( (~(unsigned int)(v9 >> 47) != *(unsigned __int8 *)((v9 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v9 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L2->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
    v10 = L2->top;
    L2->top = v10 + 1;
    v11 = (unsigned __int64)L | 0xFFFC800000000000ui64;
    v10->u64 = v11;
    v12 = v11 >> 47;
    if ( (unsigned int)(v11 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v13 = v11 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v12 != *(unsigned __int8 *)(v13 + 9) || (*(_BYTE *)(v13 + 8) & (unsigned __int8)~*(_BYTE *)(L2->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    v14 = L2->top;
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, ebp }
    L2->top = v14 + 2;
    v14->u64 = *(unsigned __int64 *)&_XMM0;
    v17 = (unsigned __int64)j_lj_str_new(L2, &str, 1ui64) | 0xFFFD800000000000ui64;
    v14[1].u64 = v17;
    v18 = v17 >> 47;
    if ( (unsigned int)(v17 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v19 = v17 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v18 != *(unsigned __int8 *)(v19 + 9) || (*(_BYTE *)(v19 + 8) & (unsigned __int8)~*(_BYTE *)(L2->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    if ( j_lua_pcall(L2, 3, 0, 0) )
    {
      v20 = *(void (__fastcall **)(lua_State *))(L2->glref.ptr64 + 344);
      if ( v20 )
        v20(L2);
      exit(1);
    }
  }
}

/*
==============
lj_cf_jit_profile_start
==============
*/
__int64 lj_cf_jit_profile_start(lua_State *L)
{
  GCtab *v2; 
  GCstr *v3; 
  unsigned __int64 v4; 
  lua_State *v5; 
  lua_State *v6; 
  TValue *v7; 
  __int64 v8; 
  TValue *v9; 
  signed __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int8 marked; 
  unsigned __int64 ptr64; 
  char v15; 
  const char *v16; 
  TValue key; 

  if ( (unsigned int)(*(__int64 *)(L->glref.ptr64 + 224) >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 572, "(((uint32_t)(((&(((global_State *)(void *)(L->glref).ptr64))->registrytv))->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v2 = (GCtab *)(*(_QWORD *)(L->glref.ptr64 + 224) & 0x7FFFFFFFFFFFi64);
  v3 = j_lj_lib_optstr(L, 1);
  v4 = (unsigned __int64)j_lj_lib_checkfunc(L, 2);
  v5 = j_lua_newthread(L);
  key.u64 = (unsigned __int64)(&KEY_PROFILE_THREAD - 0x2000000000000i64);
  v6 = v5;
  v7 = j_lj_tab_set(L, v2, &key);
  v8 = (__int64)((unsigned __int64)v6 | 0xFFFC800000000000ui64) >> 47;
  v7->u64 = (unsigned __int64)v6 | 0xFFFC800000000000ui64;
  if ( (unsigned int)(v8 + 4) > 0xFFFFFFF6 && (~(_DWORD)v8 != *(unsigned __int8 *)(((unsigned __int64)v6 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)(((unsigned __int64)v6 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  key.u64 = (unsigned __int64)(&KEY_PROFILE_FUNC - 0x2000000000000i64);
  v9 = j_lj_tab_set(L, v2, &key);
  v10 = v4 | 0xFFFB800000000000ui64;
  v11 = v10 >> 47;
  v9->u64 = v10;
  if ( (unsigned int)(v10 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v12 = v10 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v11 != *(unsigned __int8 *)(v12 + 9) || (*(_BYTE *)(v12 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  marked = v2->marked;
  if ( (marked & 4) != 0 )
  {
    ptr64 = L->glref.ptr64;
    if ( (marked & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
      __debugbreak();
    v15 = *(_BYTE *)(ptr64 + 65);
    if ( (v15 == 5 || !v15) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
      __debugbreak();
    v2->marked &= ~4u;
    v2->gclist.gcptr64 = *(_QWORD *)(ptr64 + 96);
    *(_QWORD *)(ptr64 + 96) = v2;
  }
  v16 = (const char *)&v3[1];
  if ( !v3 )
    v16 = (char *)&queryFormat.fmt + 3;
  j_luaJIT_profile_start(L, v16, (void (__fastcall *)(void *, lua_State *, int, int))jit_profile_callback, v6);
  return 0i64;
}

/*
==============
lj_cf_jit_profile_stop
==============
*/
__int64 lj_cf_jit_profile_stop(lua_State *L)
{
  GCtab *v2; 
  unsigned __int8 marked; 
  unsigned __int64 ptr64; 
  char v5; 
  TValue key; 

  j_luaJIT_profile_stop(L);
  if ( (unsigned int)(*(__int64 *)(L->glref.ptr64 + 224) >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 594, "(((uint32_t)(((&(((global_State *)(void *)(L->glref).ptr64))->registrytv))->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v2 = (GCtab *)(*(_QWORD *)(L->glref.ptr64 + 224) & 0x7FFFFFFFFFFFi64);
  key.u64 = (unsigned __int64)(&KEY_PROFILE_THREAD - 0x2000000000000i64);
  j_lj_tab_set(L, v2, &key)->u64 = -1i64;
  key.u64 = (unsigned __int64)(&KEY_PROFILE_FUNC - 0x2000000000000i64);
  j_lj_tab_set(L, v2, &key)->u64 = -1i64;
  marked = v2->marked;
  if ( (marked & 4) != 0 )
  {
    ptr64 = L->glref.ptr64;
    if ( (marked & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
      __debugbreak();
    v5 = *(_BYTE *)(ptr64 + 65);
    if ( v5 == 5 || !v5 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
        __debugbreak();
    }
    v2->marked &= ~4u;
    v2->gclist.gcptr64 = *(_QWORD *)(ptr64 + 96);
    *(_QWORD *)(ptr64 + 96) = v2;
  }
  return 0i64;
}

/*
==============
lj_cf_jit_profile_dumpstack
==============
*/
__int64 lj_cf_jit_profile_dumpstack(lua_State *L)
{
  TValue *base; 
  int v2; 
  lua_State *v4; 
  GCstr *v5; 
  int v6; 
  const char *v7; 
  unsigned __int64 len; 

  base = L->base;
  v2 = 0;
  v4 = L;
  if ( L->top > base && (unsigned int)(base->it64 >> 47) == -7 )
  {
    v4 = (lua_State *)(base->u64 & 0x7FFFFFFFFFFFi64);
    v2 = 1;
  }
  v5 = j_lj_lib_checkstr(L, v2 + 1);
  v6 = j_lj_lib_checkint(L, v2 + 2);
  v7 = j_luaJIT_profile_dumpstack(v4, (const char *)&v5[1], v6, &len);
  j_lua_pushlstring(L, v7, len);
  return 1i64;
}

/*
==============
luaopen_jit_profile
==============
*/
__int64 luaopen_jit_profile(lua_State *L)
{
  j_lj_lib_register(L, NULL, lj_lib_init_jit_profile, lj_lib_cf_jit_profile);
  return 1i64;
}

/*
==============
check_Lproto
==============
*/
GCproto *check_Lproto(lua_State *L, int nolua)
{
  TValue *base; 
  TValue v3; 
  __int64 v4; 

  base = L->base;
  if ( L->top <= base )
    goto LABEL_15;
  v3.u64 = base->u64;
  v4 = base->it64 >> 47;
  if ( (_DWORD)v4 == -8 )
    return (GCproto *)(v3.u64 & 0x7FFFFFFFFFFFi64);
  if ( (_DWORD)v4 != -9 )
    goto LABEL_15;
  if ( *(_BYTE *)((v3.u64 & 0x7FFFFFFFFFFFi64) + 0xA) )
  {
    if ( nolua )
      return 0i64;
LABEL_15:
    j_lj_err_argt(L, 1, 6);
  }
  if ( *(_BYTE *)((base->u64 & 0x7FFFFFFFFFFFi64) + 0xA) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 166, "(((my_lua_assert(((((uint32_t)((o)->it64 >> 47)) == (~8u))), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lib_jit.c\", 166, \"(((uint32_t)((o)->it64 >> 47)) == (~8u))\", \"(((uint32_t)((o)->it64 >> 47)) == (~8u))\"), (&((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn)))->c.ffid == 0)") )
    __debugbreak();
  if ( (unsigned int)(base->it64 >> 47) != -9 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_jit.c", 166, "(((uint32_t)((o)->it64 >> 47)) == (~8u))") )
      __debugbreak();
  }
  return (GCproto *)(*(_QWORD *)((base->u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 104i64);
}

/*
==============
setjitmode
==============
*/
__int64 setjitmode(lua_State *L, int mode)
{
  TValue *base; 
  TValue *top; 
  int v5; 
  int v7; 
  __int64 v8; 
  __int64 v9; 

  base = L->base;
  top = L->top;
  v5 = 0;
  v7 = 0;
  if ( base != top && base->u64 != -1i64 )
  {
    v8 = base->it64 >> 47;
    if ( (unsigned int)(v8 + 9) <= 1 )
    {
      v7 = 1;
    }
    else if ( (_DWORD)v8 != -3 )
    {
      goto $err_10;
    }
    if ( &base[1] >= top || (v9 = base[1].it64 >> 47, (unsigned int)(v9 + 3) > 1) )
    {
      mode |= 2u;
    }
    else
    {
      LOBYTE(v5) = (_DWORD)v9 == -2;
      mode |= v5 + 3;
    }
  }
  if ( j_luaJIT_setmode(L, v7, mode) != 1 )
  {
    if ( !(_BYTE)mode )
      j_lj_err_caller(L, LJ_ERR_NOJIT);
$err_10:
    j_lj_err_argt(L, 1, 6);
  }
  return 0i64;
}

