/*
==============
luaL_openlib
==============
*/
void luaL_openlib(lua_State *L, const char *libname, const luaL_Reg *l, int nup)
{
  __int64 v5; 
  int v8; 
  const luaL_Reg *i; 
  int v10; 
  lua_State *v11; 
  __int64 v12; 

  v5 = (unsigned int)nup;
  L->top->u64 = 0x41D56A8CDDC00000i64;
  ++L->top;
  if ( j_lua_tointeger(L, -1) != 1437217655 )
    j_lj_err_caller(L, LJ_ERR_BADFPU);
  --L->top;
  if ( libname )
  {
    v8 = 0;
    for ( i = l; i; ++i )
    {
      if ( !i->name )
        break;
      ++v8;
    }
    j_luaL_findtable(L, -10000, "_LOADED", 16);
    j_lua_getfield(L, -1, libname);
    if ( j_lua_type(L, -1) != 5 )
    {
      j_lua_settop(L, -2);
      if ( j_luaL_findtable(L, -10002, libname, v8) )
        j_lj_err_callerv(L, LJ_ERR_BADMODN, libname);
      j_lua_pushvalue(L, -1);
      j_lua_setfield(L, -3, libname);
    }
    j_lua_remove(L, -2);
    v10 = ~(_DWORD)v5;
    j_lua_insert(L, ~(_DWORD)v5);
  }
  else
  {
    v10 = ~(_DWORD)v5;
  }
  v11 = L;
  if ( l )
  {
    j_luaL_checkstack(L, v5, "too many upvalues");
    for ( ; l->name; ++l )
    {
      if ( (int)v5 > 0 )
      {
        v12 = v5;
        do
        {
          j_lua_pushvalue(L, -(int)v5);
          --v12;
        }
        while ( v12 );
      }
      j_lua_pushcclosure(L, l->func, v5);
      j_lua_setfield(L, -2 - v5, l->name);
    }
    v11 = L;
  }
  j_lua_settop(v11, v10);
}

/*
==============
luaL_register
==============
*/
void luaL_register(lua_State *L, const char *libname, const luaL_Reg *l)
{
  j_luaL_openlib(L, libname, l, 0);
}

/*
==============
luaL_ref
==============
*/
__int64 luaL_ref(lua_State *L, int t)
{
  int v2; 
  unsigned int v5; 

  v2 = t;
  if ( (unsigned int)t >= 0xFFFFD8F1 || t == 0 )
    v2 = t + j_lua_gettop(L) + 1;
  if ( j_lua_type(L, -1) )
  {
    j_lua_rawgeti(L, v2, 0);
    v5 = j_lua_tointeger(L, -1);
    j_lua_settop(L, -2);
    if ( v5 )
    {
      j_lua_rawgeti(L, v2, v5);
      j_lua_rawseti(L, v2, 0);
    }
    else
    {
      v5 = j_lua_objlen(L, v2) + 1;
    }
    j_lua_rawseti(L, v2, v5);
    return v5;
  }
  else
  {
    j_lua_settop(L, -2);
    return 0xFFFFFFFFi64;
  }
}

/*
==============
luaL_unref
==============
*/
void luaL_unref(lua_State *L, int t, int ref)
{
  __int64 v3; 
  int v4; 

  if ( ref >= 0 )
  {
    v3 = ref;
    v4 = t;
    if ( (unsigned int)t >= 0xFFFFD8F1 || t == 0 )
      v4 = t + j_lua_gettop(L) + 1;
    j_lua_rawgeti(L, v4, 0);
    j_lua_rawseti(L, v4, v3);
    j_lua_pushinteger(L, v3);
    j_lua_rawseti(L, v4, 0);
  }
}

/*
==============
luaL_newstate
==============
*/
lua_State *luaL_newstate()
{
  lua_State *result; 

  result = (lua_State *)j_lj_alloc_create();
  if ( result )
  {
    result = j_lua_newstate(j_lj_alloc_f, result);
    if ( result )
      *(_QWORD *)(result->glref.ptr64 + 344) = panic;
  }
  return result;
}

/*
==============
luaL_gsub
==============
*/
const char *luaL_gsub(lua_State *L, const char *s, const char *p, const char *r)
{
  __int64 v5; 
  const char *v6; 
  char *v7; 
  char *v8; 
  signed __int64 v9; 
  lua_State *v10; 
  int v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  char v14; 
  __int64 v15; 
  const char *j; 
  lua_State *v17; 
  int v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  char v21; 
  __int64 v22; 
  char *k; 
  lua_State *v24; 
  int v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  char v28; 
  unsigned __int64 v29; 
  int v30; 
  char *i; 
  char *v35; 
  int n[2]; 
  lua_State *La; 
  char str[512]; 
  char v39; 

  v5 = -1i64;
  v6 = s;
  do
    ++v5;
  while ( p[v5] );
  La = L;
  v35 = str;
  n[0] = 0;
  v7 = strstr_0(s, p);
  for ( i = v7; v7; i = v7 )
  {
    v8 = v35;
    v9 = v7 - v6;
    if ( v7 != v6 )
    {
      do
      {
        --v9;
        if ( v8 >= &v39 && v8 - (char *)&v35 != 24 )
        {
          j_lua_pushlstring(La, str, v8 - (char *)&v35 - 24);
          v8 = str;
          v35 = str;
          if ( ++n[0] > 1 )
          {
            v10 = La;
            v11 = 1;
            v12 = j_lua_objlen(La, -1);
            do
            {
              v13 = j_lua_objlen(v10, ~v11);
              if ( n[0] - v11 + 1 < 10 && v12 <= v13 )
                break;
              v12 += v13;
              ++v11;
            }
            while ( v11 < n[0] );
            j_lua_concat(v10, v11);
            v8 = v35;
            n[0] += 1 - v11;
          }
        }
        v14 = *v6++;
        *v8 = v14;
        v8 = ++v35;
      }
      while ( v9 );
    }
    v15 = -1i64;
    do
      ++v15;
    while ( r[v15] );
    for ( j = r; v15; ++v35 )
    {
      --v15;
      if ( v8 >= &v39 && v8 - (char *)&v35 != 24 )
      {
        j_lua_pushlstring(La, str, v8 - (char *)&v35 - 24);
        v8 = str;
        v35 = str;
        if ( ++n[0] > 1 )
        {
          v17 = La;
          v18 = 1;
          v19 = j_lua_objlen(La, -1);
          do
          {
            v20 = j_lua_objlen(v17, ~v18);
            if ( n[0] - v18 + 1 < 10 && v19 <= v20 )
              break;
            v19 += v20;
            ++v18;
          }
          while ( v18 < n[0] );
          j_lua_concat(v17, v18);
          v8 = v35;
          n[0] += 1 - v18;
        }
      }
      v21 = *j++;
      *v8 = v21;
      v8 = v35 + 1;
    }
    v6 = &i[v5];
    v7 = strstr_0(&i[v5], p);
  }
  v22 = -1i64;
  do
    ++v22;
  while ( v6[v22] );
  for ( k = v35; v22; ++v35 )
  {
    --v22;
    if ( k >= &v39 && k - (char *)&v35 != 24 )
    {
      j_lua_pushlstring(La, str, k - (char *)&v35 - 24);
      k = str;
      v35 = str;
      if ( ++n[0] > 1 )
      {
        v24 = La;
        v25 = 1;
        v26 = j_lua_objlen(La, -1);
        do
        {
          v27 = j_lua_objlen(v24, ~v25);
          if ( n[0] - v25 + 1 < 10 && v26 <= v27 )
            break;
          v26 += v27;
          ++v25;
        }
        while ( v25 < n[0] );
        j_lua_concat(v24, v25);
        k = v35;
        n[0] += 1 - v25;
      }
    }
    v28 = *v6++;
    *k = v28;
    k = v35 + 1;
  }
  v29 = k - (char *)&v35 - 24;
  if ( v29 )
  {
    j_lua_pushlstring(La, str, v29);
    v30 = n[0] + 1;
    v35 = str;
    ++n[0];
  }
  else
  {
    v30 = n[0];
  }
  j_lua_concat(La, v30);
  n[0] = 1;
  return j_lua_tolstring(L, -1, NULL);
}

/*
==============
luaL_findtable
==============
*/
const char *luaL_findtable(lua_State *L, int idx, const char *fname, int szhint)
{
  char *v7; 
  __int64 v8; 
  int v9; 

  j_lua_pushvalue(L, idx);
  while ( 1 )
  {
    v7 = strchr_0(fname, 46);
    if ( !v7 )
    {
      v8 = -1i64;
      do
        ++v8;
      while ( fname[v8] );
      v7 = (char *)&fname[v8];
    }
    j_lua_pushlstring(L, fname, v7 - fname);
    j_lua_rawget(L, -2);
    if ( !j_lua_type(L, -1) )
    {
      j_lua_settop(L, -2);
      v9 = szhint;
      if ( *v7 == 46 )
        v9 = 1;
      j_lua_createtable(L, 0, v9);
      j_lua_pushlstring(L, fname, v7 - fname);
      j_lua_pushvalue(L, -2);
      j_lua_settable(L, -4);
      goto LABEL_11;
    }
    if ( j_lua_type(L, -1) != 5 )
      break;
LABEL_11:
    j_lua_remove(L, -2);
    fname = v7 + 1;
    if ( *v7 != 46 )
      return 0i64;
  }
  j_lua_settop(L, -3);
  return fname;
}

/*
==============
luaL_fileresult
==============
*/
__int64 luaL_fileresult(lua_State *L, int stat, const char *fname)
{
  __int64 result; 
  int v7; 
  char *v8; 

  if ( stat )
  {
    L->top->u64 = 0xFFFEFFFFFFFFFFFFui64;
    result = 1i64;
    ++L->top;
  }
  else
  {
    v7 = *_errno();
    L->top->u64 = -1i64;
    ++L->top;
    v8 = strerror(v7);
    if ( fname )
      j_lua_pushfstring(L, "%s: %s", fname, v8);
    else
      j_lua_pushfstring(L, (const char *)&queryFormat, v8);
    _RCX = L->top;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, edi
    }
    L->top = _RCX + 1;
    result = 3i64;
    __asm { vmovsd  qword ptr [rcx], xmm0 }
  }
  return result;
}

/*
==============
luaL_execresult
==============
*/
__int64 luaL_execresult(lua_State *L, int stat)
{
  TValue *top; 
  int v5; 
  char *v6; 
  __int64 result; 

  if ( stat == -1 )
  {
    v5 = *_errno();
    L->top->u64 = -1i64;
    ++L->top;
    v6 = strerror(v5);
    j_lua_pushfstring(L, (const char *)&queryFormat, v6);
  }
  else
  {
    top = L->top;
    if ( stat )
      top->u64 = -1i64;
    else
      top->u64 = 0xFFFEFFFFFFFFFFFFui64;
    ++L->top;
    j_lua_pushlstring(L, "exit", 4ui64);
  }
  _RCX = L->top;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, ebx
  }
  L->top = _RCX + 1;
  result = 3i64;
  __asm { vmovsd  qword ptr [rcx], xmm0 }
  return result;
}

/*
==============
luaL_setfuncs
==============
*/
void luaL_setfuncs(lua_State *L, const luaL_Reg *l, int nup)
{
  __int64 v3; 
  __int64 v6; 

  v3 = (unsigned int)nup;
  j_luaL_checkstack(L, nup, "too many upvalues");
  for ( ; l->name; ++l )
  {
    if ( (int)v3 > 0 )
    {
      v6 = v3;
      do
      {
        j_lua_pushvalue(L, -(int)v3);
        --v6;
      }
      while ( v6 );
    }
    j_lua_pushcclosure(L, l->func, v3);
    j_lua_setfield(L, -2 - v3, l->name);
  }
  j_lua_settop(L, ~(_DWORD)v3);
}

/*
==============
luaL_pushmodule
==============
*/
void luaL_pushmodule(lua_State *L, const char *modname, int sizehint)
{
  j_luaL_findtable(L, -10000, "_LOADED", 16);
  j_lua_getfield(L, -1, modname);
  if ( j_lua_type(L, -1) != 5 )
  {
    j_lua_settop(L, -2);
    if ( j_luaL_findtable(L, -10002, modname, sizehint) )
      j_lj_err_callerv(L, LJ_ERR_BADMODN, modname);
    j_lua_pushvalue(L, -1);
    j_lua_setfield(L, -3, modname);
  }
  j_lua_remove(L, -2);
}

/*
==============
luaL_buffinit
==============
*/
void luaL_buffinit(lua_State *L, luaL_Buffer *B)
{
  B->L = L;
  B->p = B->buffer;
  B->lvl = 0;
}

/*
==============
luaL_prepbuffer
==============
*/
char *luaL_prepbuffer(luaL_Buffer *B)
{
  char *buffer; 

  buffer = B->buffer;
  if ( (char *)(B->p - (char *)B) != (char *)24 )
  {
    j_lua_pushlstring(B->L, buffer, B->p - (char *)B - 24);
    ++B->lvl;
    B->p = buffer;
    adjuststack(B);
  }
  return buffer;
}

/*
==============
luaL_addlstring
==============
*/
void luaL_addlstring(luaL_Buffer *B, const char *s, unsigned __int64 l)
{
  char *p; 
  unsigned __int64 v5; 
  char v7; 

  if ( l )
  {
    p = B->p;
    v5 = l;
    do
    {
      --v5;
      if ( p >= (char *)&B[1] && p - (char *)B != 24 )
      {
        j_lua_pushlstring(B->L, B->buffer, p - (char *)B - 24);
        ++B->lvl;
        B->p = B->buffer;
        adjuststack(B);
        p = B->p;
      }
      v7 = *s++;
      *p = v7;
      p = ++B->p;
    }
    while ( v5 );
  }
}

/*
==============
luaL_addstring
==============
*/
void luaL_addstring(luaL_Buffer *B, const char *s)
{
  unsigned __int64 v2; 

  v2 = -1i64;
  do
    ++v2;
  while ( s[v2] );
  j_luaL_addlstring(B, s, v2);
}

/*
==============
luaL_addvalue
==============
*/
void luaL_addvalue(luaL_Buffer *B)
{
  lua_State *L; 
  const char *v3; 
  unsigned __int64 len; 

  L = B->L;
  v3 = j_lua_tolstring(L, -1, &len);
  if ( len > (char *)B - B->p + 536 )
  {
    if ( (char *)(B->p - (char *)B) != (char *)24 )
    {
      j_lua_pushlstring(B->L, B->buffer, B->p - (char *)B - 24);
      ++B->lvl;
      B->p = B->buffer;
      j_lua_insert(L, -2);
    }
    ++B->lvl;
    adjuststack(B);
  }
  else
  {
    memcpy_0(B->p, v3, len);
    B->p += len;
    j_lua_settop(L, -2);
  }
}

/*
==============
luaL_pushresult
==============
*/
void luaL_pushresult(luaL_Buffer *B)
{
  char *buffer; 
  int lvl; 

  if ( (char *)(B->p - (char *)B) == (char *)24 )
  {
    lvl = B->lvl;
  }
  else
  {
    buffer = B->buffer;
    j_lua_pushlstring(B->L, B->buffer, B->p - (char *)B - 24);
    lvl = ++B->lvl;
    B->p = buffer;
  }
  j_lua_concat(B->L, lvl);
  B->lvl = 1;
}

/*
==============
panic
==============
*/
__int64 panic(lua_State *L)
{
  const char *v1; 
  FILE *v2; 
  FILE *v3; 
  const char *v4; 
  FILE *v5; 
  FILE *v6; 
  FILE *v7; 

  v1 = j_lua_tolstring(L, -1, NULL);
  v2 = __acrt_iob_func(2u);
  fputs("PANIC: unprotected error in call to Lua API (", v2);
  v3 = __acrt_iob_func(2u);
  v4 = "?";
  if ( v1 )
    v4 = v1;
  fputs(v4, v3);
  v5 = __acrt_iob_func(2u);
  fputc(41, v5);
  v6 = __acrt_iob_func(2u);
  fputc(10, v6);
  v7 = __acrt_iob_func(2u);
  fflush(v7);
  return 0i64;
}

/*
==============
adjuststack
==============
*/
void adjuststack(luaL_Buffer *B)
{
  lua_State *L; 
  int v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 

  if ( B->lvl > 1 )
  {
    L = B->L;
    v3 = 1;
    v4 = j_lua_objlen(L, -1);
    do
    {
      v5 = j_lua_objlen(L, ~v3);
      if ( B->lvl - v3 + 1 < 10 && v4 <= v5 )
        break;
      v4 += v5;
      ++v3;
    }
    while ( v3 < B->lvl );
    j_lua_concat(L, v3);
    B->lvl += 1 - v3;
  }
}

