/*
==============
luaopen_io
==============
*/
__int64 luaopen_io(lua_State *L)
{
  TValue *top; 
  __int64 it64; 
  __int64 v4; 
  __int64 v5; 
  _iobuf *v6; 
  _iobuf *v7; 
  _iobuf *v8; 

  j_lj_lib_register(L, NULL, lj_lib_init_io_method, lj_lib_cf_io_method);
  top = L->top;
  it64 = top[-1].it64;
  top->u64 = it64;
  v4 = it64 >> 47;
  if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v5 = it64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v4 != *(unsigned __int8 *)(v5 + 9) || (*(_BYTE *)(v5 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  ++L->top;
  j_lua_setfield(L, -10000, "FILE*");
  j_lj_lib_register(L, "io", lj_lib_init_io, lj_lib_cf_io);
  v6 = __acrt_iob_func(0);
  *(_QWORD *)(L->glref.ptr64 + 656) = io_std_new(L, v6, "stdin");
  v7 = __acrt_iob_func(1u);
  *(_QWORD *)(L->glref.ptr64 + 664) = io_std_new(L, v7, "stdout");
  v8 = __acrt_iob_func(2u);
  io_std_new(L, v8, "stderr");
  return 1i64;
}

/*
==============
io_file_iter
==============
*/
__int64 io_file_iter(lua_State *L)
{
  unsigned __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  signed int v5; 
  TValue *base; 
  unsigned int v7; 

  v2 = L->base[-2].u64 & 0x7FFFFFFFFFFFi64;
  if ( (unsigned int)(*(__int64 *)(v2 + 0x30) >> 47) != -13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_io.c", 253, "(((uint32_t)((&fn->c.upvalue[0])->it64 >> 47)) == (~12u))") )
    __debugbreak();
  v3 = *(unsigned __int8 *)(v2 + 11);
  v4 = *(_QWORD *)(v2 + 48) & 0x7FFFFFFFFFFFi64;
  v5 = v3 - 1;
  if ( !*(_QWORD *)(v4 + 0x30) )
    j_lj_err_caller(L, LJ_ERR_IOCLFL);
  base = L->base;
  L->top = base;
  if ( (_DWORD)v3 != 1 )
  {
    if ( v5 > 8000 )
      j_lj_err_caller(L, LJ_ERR_STKOV);
    if ( (signed __int64)(L->maxstack.ptr64 - (_QWORD)base) <= 8i64 * (unsigned int)v5 )
    {
      j_lj_state_growstack(L, v5);
      base = L->top;
    }
    memcpy_0(base, (const void *)(v2 + 56), 8i64 * (int)v3 - 8);
    L->top += v3 - 1;
  }
  v7 = io_file_read(L, *(_iobuf **)(v4 + 48), 0);
  if ( ferror(*(FILE **)(v4 + 48)) )
  {
    my_lua_assert_3(L->top[-2].it64 >> 47 == -5, "c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_io.c", 267, "(((uint32_t)((L->top-2)->it64 >> 47)) == (~4u))", "(((uint32_t)((L->top-2)->it64 >> 47)) == (~4u))");
    j_lj_err_callermsg(L, (const char *)((L->top[-2].u64 & 0x7FFFFFFFFFFFi64) + 24));
  }
  if ( L->base->u64 != -1i64 || (*(_BYTE *)(v4 + 56) & 4) == 0 )
    return v7;
  io_file_close(L, (IOFileUD *)(v4 + 48));
  return 0i64;
}

/*
==============
lj_cf_io_method_close
==============
*/
int lj_cf_io_method_close(lua_State *L)
{
  IOFileUD *v2; 

  if ( L->base >= L->top )
  {
    v2 = (IOFileUD *)(*(_QWORD *)(L->glref.ptr64 + 664) + 48i64);
  }
  else
  {
    v2 = io_tofilep(L);
    if ( !v2->fp )
      j_lj_err_caller(L, LJ_ERR_IOCLFL);
  }
  return io_file_close(L, v2);
}

/*
==============
lj_cf_io_method_read
==============
*/
int lj_cf_io_method_read(lua_State *L)
{
  IOFileUD *v2; 

  v2 = io_tofilep(L);
  if ( !v2->fp )
    j_lj_err_caller(L, LJ_ERR_IOCLFL);
  return io_file_read(L, v2->fp, 1);
}

/*
==============
lj_cf_io_method_write
==============
*/
int lj_cf_io_method_write(lua_State *L)
{
  IOFileUD *v2; 

  v2 = io_tofilep(L);
  if ( !v2->fp )
    j_lj_err_caller(L, LJ_ERR_IOCLFL);
  return io_file_write(L, v2->fp, 1);
}

/*
==============
lj_cf_io_method_flush
==============
*/
int lj_cf_io_method_flush(lua_State *L)
{
  _iobuf *fp; 
  int v3; 

  fp = io_tofilep(L)->fp;
  if ( !fp )
    j_lj_err_caller(L, LJ_ERR_IOCLFL);
  v3 = fflush(fp);
  return j_luaL_fileresult(L, v3 == 0, NULL);
}

/*
==============
lj_cf_io_method_seek
==============
*/
int lj_cf_io_method_seek(lua_State *L)
{
  _iobuf *fp; 
  int v3; 
  int v5; 

  fp = io_tofilep(L)->fp;
  if ( !fp )
    j_lj_err_caller(L, LJ_ERR_IOCLFL);
  v3 = j_lj_lib_checkopt(L, 2, 1, &byte_144747318);
  _RDX = 0i64;
  v5 = v3;
  if ( v3 )
  {
    if ( v3 != 1 && v3 == 2 )
      v5 = 2;
  }
  else
  {
    v5 = 0;
  }
  _RCX = L->base + 2;
  if ( _RCX < L->top )
  {
    if ( (unsigned int)(_RCX->it64 >> 47) >= 0xFFFFFFF2 )
    {
      if ( _RCX->u64 != -1i64 )
        j_lj_err_argt(L, 3, 3);
    }
    else
    {
      __asm { vcvttsd2si rdx, qword ptr [rcx]; Offset }
    }
  }
  if ( _fseeki64(fp, _RDX, v5) )
    return j_luaL_fileresult(L, 0, NULL);
  _ftelli64(fp);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  L->top[-1].n = *(double *)&_XMM0;
  return 1;
}

/*
==============
lj_cf_io_method_setvbuf
==============
*/
int lj_cf_io_method_setvbuf(lua_State *L)
{
  _iobuf *fp; 
  int v3; 
  int v4; 
  size_t v5; 

  fp = io_tofilep(L)->fp;
  if ( !fp )
    j_lj_err_caller(L, LJ_ERR_IOCLFL);
  v3 = j_lj_lib_checkopt(L, 2, -1, &byte_144747328);
  v4 = 0;
  v5 = j_lj_lib_optint(L, 3, 512);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v3 = 64;
    }
    else if ( v3 == 2 )
    {
      v3 = 4;
    }
  }
  else
  {
    v3 = 0;
  }
  LOBYTE(v4) = setvbuf(fp, NULL, v3, v5) == 0;
  return j_luaL_fileresult(L, v4, NULL);
}

/*
==============
lj_cf_io_method_lines
==============
*/
__int64 lj_cf_io_method_lines(lua_State *L)
{
  signed __int64 v2; 

  if ( !io_tofilep(L)->fp )
    j_lj_err_caller(L, LJ_ERR_IOCLFL);
  v2 = L->top - L->base;
  if ( (int)v2 > 60 )
    j_lj_err_caller(L, LJ_ERR_UNPACK);
  j_lua_pushcclosure(L, (int (__fastcall *)(lua_State *))io_file_iter, v2);
  return 1i64;
}

/*
==============
lj_cf_io_method___gc
==============
*/
__int64 lj_cf_io_method___gc(lua_State *L)
{
  IOFileUD *v2; 

  v2 = io_tofilep(L);
  if ( v2->fp && (v2->type & 3) != 2 )
    io_file_close(L, v2);
  return 0i64;
}

/*
==============
lj_cf_io_method___tostring
==============
*/
__int64 lj_cf_io_method___tostring(lua_State *L)
{
  IOFileUD *v2; 

  v2 = io_tofilep(L);
  if ( v2->fp )
    j_lua_pushfstring(L, "file (%p)", v2->fp);
  else
    j_lua_pushlstring(L, "file (closed)", 0xDui64);
  return 1i64;
}

/*
==============
lj_cf_io_open
==============
*/
int lj_cf_io_open(lua_State *L)
{
  GCstr *v2; 
  GCstr *v3; 
  const char *v4; 
  IOFileUD *v5; 
  FILE *v6; 

  v2 = j_lj_lib_checkstr(L, 1);
  v3 = j_lj_lib_optstr(L, 2);
  v4 = (const char *)&v3[1];
  if ( !v3 )
    v4 = "r";
  v5 = io_file_new(L);
  v6 = fopen((const char *)&v2[1], v4);
  v5->fp = v6;
  if ( v6 )
    return 1;
  else
    return j_luaL_fileresult(L, 0, (const char *)&v2[1]);
}

/*
==============
lj_cf_io_popen
==============
*/
void __noreturn lj_cf_io_popen(lua_State *L)
{
  j_luaL_error(L, "'popen' not supported");
}

/*
==============
lj_cf_io_tmpfile
==============
*/
int lj_cf_io_tmpfile(lua_State *L)
{
  IOFileUD *v2; 
  FILE *v3; 

  v2 = io_file_new(L);
  v3 = tmpfile();
  v2->fp = v3;
  if ( v3 )
    return 1;
  else
    return j_luaL_fileresult(L, 0, NULL);
}

/*
==============
lj_cf_io_close
==============
*/
int lj_cf_io_close(lua_State *L)
{
  IOFileUD *v2; 

  if ( L->base >= L->top )
  {
    v2 = (IOFileUD *)(*(_QWORD *)(L->glref.ptr64 + 664) + 48i64);
  }
  else
  {
    v2 = io_tofilep(L);
    if ( !v2->fp )
      j_lj_err_caller(L, LJ_ERR_IOCLFL);
  }
  return io_file_close(L, v2);
}

/*
==============
lj_cf_io_read
==============
*/
int lj_cf_io_read(lua_State *L)
{
  _iobuf *v1; 

  v1 = *(_iobuf **)(*(_QWORD *)(L->glref.ptr64 + 656) + 48i64);
  if ( !v1 )
    j_lj_err_caller(L, LJ_ERR_IOSTDCL);
  return io_file_read(L, v1, 0);
}

/*
==============
lj_cf_io_write
==============
*/
int lj_cf_io_write(lua_State *L)
{
  _iobuf *v1; 

  v1 = *(_iobuf **)(*(_QWORD *)(L->glref.ptr64 + 664) + 48i64);
  if ( !v1 )
    j_lj_err_caller(L, LJ_ERR_IOSTDCL);
  return io_file_write(L, v1, 0);
}

/*
==============
lj_cf_io_flush
==============
*/
int lj_cf_io_flush(lua_State *L)
{
  FILE *v2; 
  int v3; 

  v2 = *(FILE **)(*(_QWORD *)(L->glref.ptr64 + 664) + 48i64);
  if ( !v2 )
    j_lj_err_caller(L, LJ_ERR_IOSTDCL);
  v3 = fflush(v2);
  return j_luaL_fileresult(L, v3 == 0, NULL);
}

/*
==============
lj_cf_io_input
==============
*/
int lj_cf_io_input(lua_State *L)
{
  return io_std_getset(L, 34i64, "r");
}

/*
==============
lj_cf_io_output
==============
*/
int lj_cf_io_output(lua_State *L)
{
  return io_std_getset(L, 35i64, "w");
}

/*
==============
lj_cf_io_lines
==============
*/
__int64 lj_cf_io_lines(lua_State *L)
{
  TValue *base; 
  TValue *top; 
  __int64 v4; 
  char v5; 
  unsigned __int8 v6; 
  signed __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  signed __int64 v10; 

  base = L->base;
  top = L->top;
  if ( base == top )
  {
    top->u64 = -1i64;
    ++L->top;
    base = L->base;
  }
  if ( base->u64 == -1i64 )
  {
    v7 = *(_QWORD *)(L->glref.ptr64 + 656) | 0xFFF9800000000000ui64;
    base->u64 = v7;
    v8 = v7 >> 47;
    if ( (unsigned int)(v7 >> 47) + 4 <= 0xFFFFFFF6 )
      goto LABEL_15;
    v9 = v7 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v8 == *(unsigned __int8 *)(v9 + 9) )
    {
      v5 = *(_BYTE *)(L->glref.ptr64 + 64);
      v6 = *(_BYTE *)(v9 + 8);
LABEL_12:
      if ( (v6 & (unsigned __int8)~v5 & 3) == 0 )
        goto LABEL_15;
    }
  }
  else
  {
    io_file_open(L, "r")->type = 4;
    --L->top;
    if ( (unsigned int)((signed __int64)L->top->u64 >> 47) != -13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_io.c", 494, "(((uint32_t)((L->top)->it64 >> 47)) == (~12u))") )
      __debugbreak();
    v4 = L->top->u64 & 0x7FFFFFFFFFFFi64 | 0xFFF9800000000000ui64;
    L->base->u64 = v4;
    if ( ~(unsigned int)(v4 >> 47) == *(unsigned __int8 *)((v4 & 0x7FFFFFFFFFFFi64) + 9) )
    {
      v5 = *(_BYTE *)(L->glref.ptr64 + 64);
      v6 = *(_BYTE *)((v4 & 0x7FFFFFFFFFFFi64) + 8);
      goto LABEL_12;
    }
  }
  if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
LABEL_15:
  v10 = L->top - L->base;
  if ( (int)v10 > 60 )
    j_lj_err_caller(L, LJ_ERR_UNPACK);
  j_lua_pushcclosure(L, (int (__fastcall *)(lua_State *))io_file_iter, v10);
  return 1i64;
}

/*
==============
lj_cf_io_type
==============
*/
__int64 lj_cf_io_type(lua_State *L)
{
  TValue *v2; 

  v2 = j_lj_lib_checkany(L, 1);
  if ( (unsigned int)(v2->it64 >> 47) == -13 && *(_BYTE *)((v2->u64 & 0x7FFFFFFFFFFFi64) + 0xA) == 1 )
  {
    if ( *(_QWORD *)((v2->u64 & 0x7FFFFFFFFFFFi64) + 0x30) )
      j_lua_pushlstring(L, "file", 4ui64);
    else
      j_lua_pushlstring(L, "closed file", 0xBui64);
  }
  else
  {
    L->top->u64 = -1i64;
    ++L->top;
  }
  return 1i64;
}

/*
==============
io_file_close
==============
*/
int io_file_close(lua_State *L, IOFileUD *iof)
{
  unsigned int v4; 
  int v5; 

  v4 = iof->type & 3;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_io.c", 106, "0") )
        __debugbreak();
      return 0;
    }
    else
    {
      if ( v4 != 2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_io.c", 116, "(iof->type & 3) == 2") )
        __debugbreak();
      L->top->u64 = -1i64;
      ++L->top;
      j_lua_pushlstring(L, "cannot close standard file", 0x1Aui64);
      return 2;
    }
  }
  else
  {
    v5 = fclose(iof->fp);
    iof->fp = NULL;
    return j_luaL_fileresult(L, v5 == 0, NULL);
  }
}

/*
==============
io_file_new
==============
*/
IOFileUD *io_file_new(lua_State *L)
{
  _DWORD *v2; 
  unsigned __int64 v3; 

  v2 = j_lua_newuserdata(L, 0x10ui64);
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_io.c", 74, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~12u))") )
    __debugbreak();
  v3 = L->top[-1].u64 & 0x7FFFFFFFFFFFi64;
  *(_BYTE *)(v3 + 10) = 1;
  *(_QWORD *)(v3 + 32) = *(_QWORD *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x10);
  *(_QWORD *)v2 = 0i64;
  v2[2] = 0;
  return (IOFileUD *)v2;
}

/*
==============
io_file_open
==============
*/
IOFileUD *io_file_open(lua_State *L, const char *mode)
{
  GCstr *v4; 
  IOFileUD *v5; 
  FILE *v6; 
  int *v7; 
  char *v8; 
  const char *v9; 

  v4 = j_lj_lib_checkstr(L, 1);
  v5 = io_file_new(L);
  v6 = fopen((const char *)&v4[1], mode);
  v5->fp = v6;
  if ( !v6 )
  {
    v7 = _errno();
    v8 = strerror(*v7);
    v9 = j_lj_strfmt_pushf(L, "%s: %s", (const char *)&v4[1], v8);
    j_luaL_argerror(L, 1, v9);
  }
  return v5;
}

/*
==============
io_file_read
==============
*/
int io_file_read(lua_State *L, _iobuf *fp, int start)
{
  signed __int64 v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  char v14; 
  int v15; 
  TValue *top; 
  unsigned int v17; 
  char *v18; 
  unsigned int v19; 
  TValue *v20; 
  signed __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int v25; 
  double v26; 
  int v27; 
  __int64 v29; 

  v5 = L->top - L->base;
  v6 = start;
  clearerr(fp);
  v7 = v6 + 1;
  v27 = v6 + 1;
  v8 = v5 - v6;
  if ( v8 )
  {
    j_luaL_checkstack(L, v8 + 20, "too many arguments");
    v11 = 8 * v6;
    v9 = 1;
    v29 = 8 * v6;
    v10 = v6;
    do
    {
      --v8;
      if ( !v9 )
        break;
      v12 = *(__int64 *)((char *)&L->base->it64 + v11);
      if ( (unsigned int)(v12 >> 47) == -5 )
      {
        v13 = v12 & 0x7FFFFFFFFFFFi64;
        v14 = *(_BYTE *)(v13 + 24);
        if ( v14 == 42 )
          v14 = *(_BYTE *)(v13 + 25);
        if ( v14 == 110 )
        {
          v15 = j_fscanf(fp, "%lf", &v26);
          top = L->top;
          if ( v15 == 1 )
          {
            top->n = v26;
            ++L->top;
            v9 = 1;
          }
          else
          {
            top->u64 = -1i64;
            ++L->top;
            v9 = 0;
          }
        }
        else if ( (v14 & 0xDF) == 76 )
        {
          v9 = io_file_readline(L, fp, v14 == 108);
        }
        else
        {
          if ( v14 != 97 )
            j_lj_err_arg(L, v10 + 1, LJ_ERR_INVFMT);
          v17 = 512;
          v18 = j_lj_buf_tmp(L, 0x200u);
          v19 = fread(v18, 1ui64, 0x200ui64, fp);
          if ( v19 == 512 )
          {
            do
            {
              v17 *= 2;
              v18 = j_lj_buf_tmp(L, v17);
              v19 += fread(&v18[v19], 1ui64, v17 - v19, fp);
            }
            while ( v19 == v17 );
          }
          v20 = L->top;
          L->top = v20 + 1;
          v21 = (unsigned __int64)j_lj_str_new(L, v18, v19) | 0xFFFD800000000000ui64;
          v20->u64 = v21;
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
            j_lj_gc_step(L);
          v7 = v27;
        }
      }
      else
      {
        if ( (unsigned int)(v12 >> 47) > 0xFFFFFFF2 )
          j_lj_err_arg(L, v7, LJ_ERR_INVOPT);
        v25 = j_lj_lib_checkint(L, v7);
        v9 = io_file_readlen(L, fp, v25);
      }
      ++v7;
      v11 = v29 + 8;
      v27 = v7;
      ++v10;
      v29 += 8i64;
    }
    while ( v8 );
    LODWORD(v6) = start;
  }
  else
  {
    v9 = io_file_readline(L, fp, 1u);
    v10 = v6 + 1;
  }
  if ( ferror(fp) )
    return j_luaL_fileresult(L, 0, NULL);
  if ( !v9 )
    L->top[-1].u64 = -1i64;
  return v10 - v6;
}

/*
==============
io_file_readlen
==============
*/
_BOOL8 io_file_readlen(lua_State *L, _iobuf *fp, unsigned int m)
{
  char *v6; 
  unsigned int v7; 
  TValue *top; 
  unsigned int v9; 
  signed __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v14; 
  TValue *v15; 
  unsigned __int64 v16; 
  signed __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  if ( m )
  {
    v6 = j_lj_buf_tmp(L, m);
    v7 = fread(v6, 1ui64, m, fp);
    top = L->top;
    v9 = v7;
    L->top = top + 1;
    v10 = (unsigned __int64)j_lj_str_new(L, v6, v7) | 0xFFFD800000000000ui64;
    top->u64 = v10;
    v11 = v10 >> 47;
    if ( (unsigned int)(v10 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v12 = v10 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v11 != *(unsigned __int8 *)(v12 + 9) || (*(_BYTE *)(v12 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
      j_lj_gc_step(L);
    return v9 != 0;
  }
  else
  {
    v14 = getc(fp);
    ungetc(v14, fp);
    v15 = L->top;
    v16 = L->glref.ptr64 + 184;
    L->top = v15 + 1;
    v17 = v16 | 0xFFFD800000000000ui64;
    v15->u64 = v17;
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
    return v14 != -1;
  }
}

/*
==============
io_file_readline
==============
*/
__int64 io_file_readline(lua_State *L, _iobuf *fp, unsigned int chop)
{
  int v4; 
  unsigned int v5; 
  unsigned int v8; 
  char *v9; 
  __int64 v10; 
  unsigned int v11; 
  TValue *top; 
  signed __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  v4 = 512;
  v5 = 0;
  v8 = 0;
  v9 = j_lj_buf_tmp(L, 0x200u);
  if ( fgets(v9, 512, fp) )
  {
    while ( 1 )
    {
      v10 = -1i64;
      do
        ++v10;
      while ( v9[v5 + v10] );
      v5 += v10;
      v8 |= v5;
      if ( v5 )
      {
        if ( v9[v5 - 1] == 10 )
          break;
      }
      v11 = 2 * v4;
      if ( v5 < v4 - 64 )
        v11 = v4;
      v4 = v11;
      v9 = j_lj_buf_tmp(L, v11);
      if ( !fgets(&v9[v5], v4 - v5, fp) )
        goto LABEL_11;
    }
    v5 -= chop;
  }
LABEL_11:
  top = L->top;
  L->top = top + 1;
  v13 = (unsigned __int64)j_lj_str_new(L, v9, v5) | 0xFFFD800000000000ui64;
  top->u64 = v13;
  v14 = v13 >> 47;
  if ( (unsigned int)(v13 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v15 = v13 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v14 != *(unsigned __int8 *)(v15 + 9) || (*(_BYTE *)(v15 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  return v8;
}

/*
==============
io_file_write
==============
*/
int io_file_write(lua_State *L, _iobuf *fp, int start)
{
  int v5; 
  TValue *i; 
  const char *v7; 
  size_t v8; 
  unsigned int lenp; 

  v5 = 1;
  for ( i = &L->base[start]; i < L->top; ++i )
  {
    v7 = j_lj_strfmt_wstrnum(L, i, &lenp);
    if ( !v7 )
      j_lj_err_argt(L, i - L->base + 1, 4);
    v5 = v5 && (v8 = fwrite(v7, 1ui64, lenp, fp), v8 == lenp);
  }
  return j_luaL_fileresult(L, v5, NULL);
}

/*
==============
io_std_getset
==============
*/
__int64 io_std_getset(lua_State *L, __int64 id, const char *mode)
{
  TValue *base; 
  TValue *top; 
  __int64 u64; 
  TValue *v8; 
  signed __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  base = L->base;
  top = L->top;
  if ( base >= top || (u64 = base->u64, u64 == -1) )
  {
    L->top = top + 1;
    v10 = *(_QWORD *)(L->glref.ptr64 + 8 * id + 384) | 0xFFF9800000000000ui64;
    top->u64 = v10;
    v11 = v10 >> 47;
    if ( (unsigned int)(v10 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v12 = v10 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v11 != *(unsigned __int8 *)(v12 + 9) || (*(_BYTE *)(v12 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    return 1i64;
  }
  else
  {
    if ( (unsigned int)(u64 >> 47) == -13 )
    {
      if ( !io_tofilep(L)->fp )
        j_lj_err_caller(L, LJ_ERR_IOCLFL);
      v8 = L->base + 1;
      L->top = v8;
    }
    else
    {
      io_file_open(L, mode);
      v8 = L->top;
    }
    if ( (unsigned int)(v8[-1].it64 >> 47) + 4 <= 0xFFFFFFF6 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_io.c", 470, "((((uint32_t)((L->top-1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
        __debugbreak();
    }
    *(_QWORD *)(L->glref.ptr64 + 8 * id + 384) = L->top[-1].u64 & 0x7FFFFFFFFFFFi64;
    return 1i64;
  }
}

/*
==============
io_std_new
==============
*/
GCobj *io_std_new(lua_State *L, _iobuf *fp, const char *name)
{
  _DWORD *v6; 
  unsigned __int64 v7; 

  v6 = j_lua_newuserdata(L, 0x10ui64);
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_io.c", 520, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~12u))") )
    __debugbreak();
  v7 = L->top[-1].u64 & 0x7FFFFFFFFFFFi64;
  *(_BYTE *)(v7 + 0xA) = 1;
  if ( (unsigned int)(L->top[-3].it64 >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lib_io.c", 523, "((((uint32_t)((L->top-3)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
    __debugbreak();
  *(_QWORD *)(v7 + 32) = L->top[-3].u64 & 0x7FFFFFFFFFFFi64;
  *(_QWORD *)v6 = fp;
  v6[2] = 2;
  j_lua_setfield(L, -2, name);
  return (GCobj *)v7;
}

/*
==============
io_tofilep
==============
*/
IOFileUD *io_tofilep(lua_State *L)
{
  TValue *base; 

  base = L->base;
  if ( base >= L->top || (unsigned int)(base->it64 >> 47) != -13 || *(_BYTE *)((base->u64 & 0x7FFFFFFFFFFFi64) + 0xA) != 1 )
    j_lj_err_argtype(L, 1, "FILE*");
  return (IOFileUD *)((L->base->u64 & 0x7FFFFFFFFFFFi64) + 48);
}

