/*
==============
lua_load
==============
*/
int lua_load(lua_State *L, const char *(*reader)(lua_State *, void *, unsigned __int64 *), void *data, const char *chunkname)
{
  return j_lua_loadx(L, reader, data, chunkname, NULL);
}

/*
==============
lua_dump
==============
*/
int lua_dump(lua_State *L, int (*writer)(lua_State *, const void *, unsigned __int64, void *), void *data, int strip)
{
  TValue *top; 
  __int64 it64; 

  top = L->top;
  if ( top <= L->base && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_load.c", 175, "L->top > L->base") )
    __debugbreak();
  it64 = top[-1].it64;
  if ( (unsigned int)(it64 >> 47) != -9 || *(_BYTE *)((it64 & 0x7FFFFFFFFFFFi64) + 0xA) )
    return 1;
  if ( *(_BYTE *)((top[-1].u64 & 0x7FFFFFFFFFFFi64) + 0xA) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_load.c", 178, "(((my_lua_assert(((((uint32_t)((o)->it64 >> 47)) == (~8u))), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_load.c\", 178, \"(((uint32_t)((o)->it64 >> 47)) == (~8u))\", \"(((uint32_t)((o)->it64 >> 47)) == (~8u))\"), (&((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn)))->c.ffid == 0)") )
    __debugbreak();
  if ( (unsigned int)(top[-1].it64 >> 47) != -9 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_load.c", 178, "(((uint32_t)((o)->it64 >> 47)) == (~8u))") )
      __debugbreak();
  }
  return j_lj_bcwrite(L, (GCproto *)(*(_QWORD *)((top[-1].u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 104i64), writer, data, strip);
}

/*
==============
lua_loadx
==============
*/
__int64 lua_loadx(lua_State *L, const char *(*reader)(lua_State *, void *, unsigned __int64 *), void *data, const char *chunkname, const char *mode)
{
  const char *v5; 
  unsigned int v7; 
  LexState ls; 

  ls.rfunc = reader;
  v5 = "?";
  ls.rdata = data;
  ls.mode = mode;
  ls.sb.L.ptr64 = (unsigned __int64)L;
  if ( chunkname )
    v5 = chunkname;
  ls.chunkarg = v5;
  memset(&ls.sb, 0, 24);
  v7 = j_lj_vm_cpcall(L, 0i64, &ls, cpparser);
  j_lj_lex_cleanup(L, &ls);
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  return v7;
}

/*
==============
luaL_loadfile
==============
*/
int luaL_loadfile(lua_State *L, const char *filename)
{
  __int64 (__fastcall *v2)(lua_State *, const char *); 

  v2 = *(__int64 (__fastcall **)(lua_State *, const char *))(L->glref.ptr64 + 32);
  if ( v2 )
    return v2(L, filename);
  else
    return j_luaL_loadfilex(L, filename, NULL);
}

/*
==============
luaL_loadbuffer
==============
*/
__int64 luaL_loadbuffer(lua_State *L, const char *buf, unsigned __int64 size, const char *name)
{
  const char *v5; 
  unsigned int v6; 
  __int64 v8[2]; 
  LexState ls; 

  ls.sb.L.ptr64 = (unsigned __int64)L;
  v8[0] = (__int64)buf;
  ls.rfunc = reader_string;
  v8[1] = size;
  ls.rdata = v8;
  v5 = "?";
  if ( name )
    v5 = name;
  ls.chunkarg = v5;
  ls.mode = NULL;
  memset(&ls.sb, 0, 24);
  v6 = j_lj_vm_cpcall(L, 0i64, &ls, cpparser);
  j_lj_lex_cleanup(L, &ls);
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  return v6;
}

/*
==============
luaL_loadstring
==============
*/
__int64 luaL_loadstring(lua_State *L, const char *s)
{
  __int64 v3; 
  const char *v4; 
  unsigned int v5; 
  __int64 v7[2]; 
  LexState ls; 

  v7[0] = (__int64)s;
  v3 = -1i64;
  do
    ++v3;
  while ( s[v3] );
  v7[1] = v3;
  ls.sb.L.ptr64 = (unsigned __int64)L;
  ls.rfunc = reader_string;
  ls.rdata = v7;
  v4 = "?";
  if ( s )
    v4 = s;
  ls.chunkarg = v4;
  ls.mode = NULL;
  memset(&ls.sb, 0, 24);
  v5 = j_lj_vm_cpcall(L, 0i64, &ls, cpparser);
  j_lj_lex_cleanup(L, &ls);
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  return v5;
}

/*
==============
luaL_loadfilex
==============
*/
__int64 luaL_loadfilex(lua_State *L, const char *filename, const char *mode)
{
  int *v6; 
  char *v7; 
  const char *v9; 
  const char *v10; 
  unsigned int v11; 
  __int64 v12; 
  int *v13; 
  char *v14; 
  TValue *v15; 
  __int64 u64; 
  __int64 v17; 
  __int64 v18; 
  LexState ls; 
  FILE *Stream; 

  if ( filename )
  {
    Stream = fopen(filename, "rb");
    if ( !Stream )
    {
      v6 = _errno();
      v7 = strerror(*v6);
      j_lua_pushfstring(L, "cannot open %s: %s", filename, v7);
      return 6i64;
    }
    v9 = j_lua_pushfstring(L, "@%s", filename);
  }
  else
  {
    Stream = __acrt_iob_func(0);
    v9 = "=stdin";
  }
  ls.mode = mode;
  ls.rfunc = reader_file;
  ls.sb.L.ptr64 = (unsigned __int64)L;
  ls.rdata = &Stream;
  v10 = "?";
  if ( v9 )
    v10 = v9;
  ls.chunkarg = v10;
  memset(&ls.sb, 0, 24);
  v11 = j_lj_vm_cpcall(L, 0i64, &ls, cpparser);
  j_lj_lex_cleanup(L, &ls);
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  if ( ferror(Stream) )
  {
    v12 = 8i64;
    if ( filename )
      v12 = 16i64;
    L->top = (TValue *)((char *)L->top - v12);
    v13 = _errno();
    v14 = strerror(*v13);
    j_lua_pushfstring(L, "cannot read %s: %s", v9 + 1, v14);
    if ( filename )
      fclose(Stream);
    return 6i64;
  }
  else
  {
    if ( filename )
    {
      v15 = --L->top;
      u64 = v15->u64;
      v15[-1].u64 = v15->u64;
      v17 = u64 >> 47;
      if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v18 = u64 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v17 != *(unsigned __int8 *)(v18 + 9) || (*(_BYTE *)(v18 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      fclose(Stream);
    }
    return v11;
  }
}

/*
==============
luaL_loadbufferx
==============
*/
__int64 luaL_loadbufferx(lua_State *L, const char *buf, unsigned __int64 size, const char *name, const char *mode)
{
  const char *v6; 
  unsigned int v7; 
  __int64 v9[2]; 
  LexState ls; 

  v9[0] = (__int64)buf;
  ls.rfunc = reader_string;
  ls.mode = mode;
  ls.rdata = v9;
  ls.sb.L.ptr64 = (unsigned __int64)L;
  v6 = "?";
  if ( name )
    v6 = name;
  v9[1] = size;
  ls.chunkarg = v6;
  memset(&ls.sb, 0, 24);
  v7 = j_lj_vm_cpcall(L, 0i64, &ls, cpparser);
  j_lj_lex_cleanup(L, &ls);
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  return v7;
}

/*
==============
cpparser
==============
*/
TValue *cpparser(lua_State *L, int (*dummy)(lua_State *), void *ud)
{
  int v5; 
  const char *v6; 
  int v7; 
  int v8; 
  GCproto *v9; 
  unsigned __int64 v10; 
  TValue *v11; 
  __int64 v12; 
  TValue *top; 
  signed __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  *((_DWORD *)L->cframe + 21) = -1;
  v5 = j_lj_lex_setup(L, (LexState *)ud);
  v6 = (const char *)*((_QWORD *)ud + 17);
  v7 = v5;
  if ( v6 )
  {
    v8 = 116;
    if ( v5 )
      v8 = 98;
    if ( !strchr_0(v6, v8) )
    {
      top = L->top;
      L->top = top + 1;
      v15 = (unsigned __int64)j_lj_err_str(L, LJ_ERR_XMODE) | 0xFFFD800000000000ui64;
      top->u64 = v15;
      v16 = v15 >> 47;
      if ( (unsigned int)(v15 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v17 = v15 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v16 != *(unsigned __int8 *)(v17 + 9) || (*(_BYTE *)(v17 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      j_lj_err_throw(L, 3);
    }
  }
  if ( v7 )
    v9 = j_lj_bcread((LexState *)ud);
  else
    v9 = j_lj_parse((LexState *)ud);
  v10 = (unsigned __int64)j_lj_func_newL_empty(L, v9, (GCtab *)L->env.gcptr64);
  v11 = L->top;
  L->top = v11 + 1;
  v11->u64 = v10 | 0xFFFB800000000000ui64;
  v12 = (__int64)(v10 | 0xFFFB800000000000ui64) >> 47;
  if ( (unsigned int)(v12 + 4) > 0xFFFFFFF6 && (~(_DWORD)v12 != *(unsigned __int8 *)((v10 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v10 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  return 0i64;
}

/*
==============
reader_file
==============
*/
char *reader_file(lua_State *L, void *ud, unsigned __int64 *size)
{
  char *v6; 
  unsigned __int64 v7; 

  if ( feof(*(FILE **)ud) )
    return 0i64;
  v6 = (char *)ud + 8;
  v7 = fread((char *)ud + 8, 1ui64, 0x200ui64, *(FILE **)ud);
  *size = v7;
  if ( !v7 )
    return 0i64;
  return v6;
}

/*
==============
reader_string
==============
*/
const char *reader_string(lua_State *L, void *ud, unsigned __int64 *size)
{
  const char *result; 

  result = (const char *)*((_QWORD *)ud + 1);
  if ( result )
  {
    *size = (unsigned __int64)result;
    result = *(const char **)ud;
    *((_QWORD *)ud + 1) = 0i64;
  }
  return result;
}

