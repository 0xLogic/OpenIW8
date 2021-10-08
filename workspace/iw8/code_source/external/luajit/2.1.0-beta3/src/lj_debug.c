/*
==============
lua_getstack
==============
*/
__int64 lua_getstack(lua_State *L, int level, lua_Debug *ar)
{
  const TValue *v6; 
  __int64 result; 
  int size; 

  v6 = j_lj_debug_frame(L, level, &size);
  if ( v6 )
  {
    ar->i_ci = (size << 16) + ((__int64)((__int64)v6 - L->stack.ptr64) >> 3);
    return 1i64;
  }
  else
  {
    result = 0i64;
    ar->i_ci = level - size;
  }
  return result;
}

/*
==============
lua_getinfo
==============
*/
int lua_getinfo(lua_State *L, const char *what, lua_Debug *ar)
{
  return j_lj_debug_getinfo(L, what, (lj_Debug *)ar, 0);
}

/*
==============
lua_getlocal
==============
*/
char *lua_getlocal(lua_State *L, const lua_Debug *ar, int n)
{
  TValue *v5; 
  char *v6; 
  __int64 u64; 
  __int64 v8; 
  __int64 v9; 
  TValue v11; 
  char *name; 

  name = NULL;
  if ( ar )
  {
    v5 = debug_localname(L, ar, (const char **)&name, n);
    v6 = name;
    if ( name )
    {
      u64 = v5->u64;
      v8 = v5->it64 >> 47;
      L->top->u64 = v5->u64;
      if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v9 = u64 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
        j_lj_state_growstack1(L);
    }
    return v6;
  }
  else
  {
    v11.u64 = L->top[-1].u64;
    if ( (unsigned int)(v11.it64 >> 47) != -9 || *(_BYTE *)((v11.u64 & 0x7FFFFFFFFFFFi64) + 0xA) )
    {
      return 0i64;
    }
    else
    {
      if ( *(_BYTE *)((L->top[-1].u64 & 0x7FFFFFFFFFFFi64) + 0xA) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 409, "(((my_lua_assert(((((uint32_t)((L->top-1)->it64 >> 47)) == (~8u))), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_debug.c\", 409, \"(((uint32_t)((L->top-1)->it64 >> 47)) == (~8u))\", \"(((uint32_t)((L->top-1)->it64 >> 47)) == (~8u))\"), (&((GCobj *)((((L->top-1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->fn)))->c.ffid == 0)") )
        __debugbreak();
      if ( (unsigned int)(L->top[-1].it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 409, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~8u))") )
        __debugbreak();
      return (char *)debug_varname((const GCproto *)(*(_QWORD *)((L->top[-1].u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 104i64), 0, n - 1);
    }
  }
}

/*
==============
lua_setlocal
==============
*/
char *lua_setlocal(lua_State *L, const lua_Debug *ar, int n)
{
  TValue *v4; 
  TValue v5; 
  __int64 v6; 
  __int64 v7; 
  char *name; 

  name = NULL;
  v4 = debug_localname(L, ar, (const char **)&name, n);
  if ( name )
  {
    v5.u64 = L->top[-1].u64;
    v4->u64 = v5.u64;
    v6 = v5.it64 >> 47;
    if ( (unsigned int)(v5.it64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v7 = v5.u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v6 != *(unsigned __int8 *)(v7 + 9) || (*(_BYTE *)(v7 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
  }
  --L->top;
  return name;
}

/*
==============
lj_debug_frame
==============
*/
TValue *lj_debug_frame(lua_State *L, int level, int *size)
{
  unsigned __int64 v4; 
  TValue *result; 
  TValue *v7; 
  int v8; 
  unsigned __int64 u64; 

  v4 = L->stack.ptr64 + 8;
  result = L->base - 1;
  v7 = result;
  if ( (unsigned __int64)result <= v4 )
  {
LABEL_10:
    *size = level;
    return 0i64;
  }
  else
  {
    while ( 1 )
    {
      v8 = level + 1;
      if ( (lua_State *)(result[-1].u64 & 0x7FFFFFFFFFFFi64) != L )
        v8 = level;
      level = v8 - 1;
      if ( !v8 )
        break;
      u64 = result->u64;
      v7 = result;
      if ( (result->u64 & 3) != 0 )
      {
        level = v8;
        result = (TValue *)((char *)result - (u64 & 0xFFFFFFFFFFFFFFF8ui64));
        if ( (u64 & 7) != 3 )
          level = v8 - 1;
      }
      else
      {
        result += -2i64 - *(unsigned __int8 *)(u64 - 3);
      }
      if ( (unsigned __int64)result <= v4 )
        goto LABEL_10;
    }
    *size = v7 - result;
  }
  return result;
}

/*
==============
lj_debug_line
==============
*/
__int64 lj_debug_line(GCproto *pt, unsigned int pc)
{
  unsigned int sizebc; 
  unsigned __int64 ptr64; 
  unsigned int firstline; 
  int numline; 
  __int64 v7; 
  int v8; 

  sizebc = pt->sizebc;
  ptr64 = pt->lineinfo.ptr64;
  if ( pc > sizebc || !ptr64 )
    return 0i64;
  firstline = pt->firstline;
  if ( pc == sizebc )
    return firstline + pt->numline;
  if ( !pc )
    return firstline;
  numline = pt->numline;
  v7 = pc - 1;
  if ( numline < 256 )
    return firstline + *(unsigned __int8 *)(v7 + ptr64);
  if ( numline >= 0x10000 )
    v8 = *(_DWORD *)(ptr64 + 4 * v7);
  else
    v8 = *(unsigned __int16 *)(ptr64 + 2 * v7);
  return firstline + v8;
}

/*
==============
lj_debug_uvname
==============
*/
const char *lj_debug_uvname(GCproto *pt, unsigned int idx)
{
  unsigned int v2; 
  _BYTE *ptr64; 

  v2 = idx;
  ptr64 = (_BYTE *)pt->uvinfo.ptr64;
  if ( idx >= pt->sizeuv && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 217, "idx < pt->sizeuv") )
    __debugbreak();
  if ( !ptr64 )
    return (char *)&queryFormat.fmt + 3;
  for ( ; v2; --v2 )
  {
    while ( *ptr64++ )
      ;
  }
  return ptr64;
}

/*
==============
lj_debug_uvnamev
==============
*/
const char *lj_debug_uvnamev(const TValue *o, unsigned int idx, TValue **tvp)
{
  unsigned __int64 v3; 
  GCproto *v4; 

  if ( (unsigned int)(o->it64 >> 47) == -9 )
  {
    v3 = o->u64 & 0x7FFFFFFFFFFFi64;
    if ( *(_BYTE *)(v3 + 0xA) )
    {
      if ( idx < *(unsigned __int8 *)((o->u64 & 0x7FFFFFFFFFFFi64) + 0xB) )
      {
        *tvp = (TValue *)(v3 + 8i64 * idx + 48);
        return (char *)&queryFormat.fmt + 3;
      }
    }
    else
    {
      v4 = (GCproto *)(*(_QWORD *)((o->u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 104i64);
      if ( idx < v4->sizeuv )
      {
        *tvp = *(TValue **)(*(_QWORD *)(v3 + 8i64 * idx + 40) + 32i64);
        return j_lj_debug_uvname(v4, idx);
      }
    }
  }
  return 0i64;
}

/*
==============
lj_debug_slotname
==============
*/
const char *lj_debug_slotname(GCproto *pt, const unsigned int *ip, unsigned int slot, const char **name)
{
  const unsigned int *v4; 
  unsigned int v6; 
  const char *v8; 
  GCproto *v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  __int16 v12; 
  const char *result; 
  unsigned __int64 v14; 
  int v15; 
  unsigned __int64 v16; 

  v4 = ip;
  v6 = slot;
  v8 = debug_varname(pt, ((char *)ip - (char *)pt - 104) >> 2, slot);
  if ( v8 )
  {
LABEL_13:
    *name = v8;
    return "local";
  }
  else
  {
    v9 = pt + 1;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          if ( --v4 <= (const unsigned int *)v9 )
            return 0i64;
          v10 = *v4;
          v11 = (unsigned __int8)BYTE1(*v4);
          v12 = lj_bc_mode[(unsigned __int8)v10] & 7;
          if ( v12 != 2 )
            break;
          if ( v6 >= v11 && ((unsigned __int8)v10 != 44 || v6 <= WORD1(v10)) )
            return 0i64;
        }
      }
      while ( v12 != 1 || v11 != v6 );
      if ( (unsigned __int8)v10 != 18 )
        break;
      v6 = WORD1(v10);
      v8 = debug_varname(pt, ((char *)v4 - (char *)pt - 104) >> 2, WORD1(v10));
      if ( v8 )
        goto LABEL_13;
    }
    switch ( (unsigned __int8)v10 )
    {
      case '-':
        *name = j_lj_debug_uvname(pt, WORD1(v10));
        return "upvalue";
      case '6':
        v16 = ~(v10 >> 16);
        if ( v16 < -(__int64)pt->sizekgc && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 265, "(uintptr_t)(intptr_t)(~(ptrdiff_t)((BCReg)((ins)>>16))) >= (uintptr_t)-(intptr_t)(pt)->sizekgc") )
          __debugbreak();
        if ( *(_BYTE *)(*(_QWORD *)(pt->k.ptr64 + 8 * v16) + 9i64) != 4 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 265, "((my_lua_assert(((uintptr_t)(intptr_t)(~(ptrdiff_t)((BCReg)((ins)>>16))) >= (uintptr_t)-(intptr_t)(pt)->sizekgc), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_debug.c\", 265, \"(uintptr_t)(intptr_t)(~(ptrdiff_t)((BCReg)((ins)>>16))) >= (uintptr_t)-(intptr_t)(pt)->sizekgc\", \"(uintptr_t)(intptr_t)(~(ptrdiff_t)((BCReg)((ins)>>16))) >= (uintptr_t)-(intptr_t)(pt)->sizekgc\"), (((GCobj *)(((GCRef *)(void *)((pt)->k).ptr64)[(~(ptrdiff_t)((BCReg)((ins)>>16)))]).gcptr64))))->gch.gct == ~(~4u)") )
          __debugbreak();
        if ( v16 < -(__int64)pt->sizekgc && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 265, "(uintptr_t)(intptr_t)(~(ptrdiff_t)((BCReg)((ins)>>16))) >= (uintptr_t)-(intptr_t)(pt)->sizekgc") )
          __debugbreak();
        result = "global";
        *name = (const char *)(*(_QWORD *)(pt->k.ptr64 + 8 * v16) + 24i64);
        break;
      case '9':
        v14 = ~(unsigned __int64)BYTE2(v10);
        if ( v14 < -(__int64)pt->sizekgc && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 268, "(uintptr_t)(intptr_t)(~(ptrdiff_t)((BCReg)(((ins)>>16)&0xff))) >= (uintptr_t)-(intptr_t)(pt)->sizekgc") )
          __debugbreak();
        if ( *(_BYTE *)(*(_QWORD *)(pt->k.ptr64 + 8 * v14) + 9i64) != 4 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 268, "((my_lua_assert(((uintptr_t)(intptr_t)(~(ptrdiff_t)((BCReg)(((ins)>>16)&0xff))) >= (uintptr_t)-(intptr_t)(pt)->sizekgc), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_debug.c\", 268, \"(uintptr_t)(intptr_t)(~(ptrdiff_t)((BCReg)(((ins)>>16)&0xff))) >= (uintptr_t)-(intptr_t)(pt)->sizekgc\", \"(uintptr_t)(intptr_t)(~(ptrdiff_t)((BCReg)(((ins)>>16)&0xff))) >= (uintptr_t)-(intptr_t)(pt)->sizekgc\"), (((GCobj *)(((GCRef *)(void *)((pt)->k).ptr64)[(~(ptrdiff_t)((BCReg)(((ins)>>16)&0xff)))]).gcptr64))))->gch.gct == ~(~4u)") )
          __debugbreak();
        if ( v14 < -(__int64)pt->sizekgc && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 268, "(uintptr_t)(intptr_t)(~(ptrdiff_t)((BCReg)(((ins)>>16)&0xff))) >= (uintptr_t)-(intptr_t)(pt)->sizekgc") )
          __debugbreak();
        *name = (const char *)(*(_QWORD *)(pt->k.ptr64 + 8 * v14) + 24i64);
        if ( v4 > (const unsigned int *)v9 && (v15 = *(v4 - 1), (_BYTE)v15 == 18) && BYTE1(v15) == v11 + 2 && ((v15 ^ ((unsigned int)v10 >> 8)) & 0xFFFF0000) == 0 )
          return "method";
        else
          return "field";
      default:
        return 0i64;
    }
  }
  return result;
}

/*
==============
lj_debug_funcname
==============
*/
const char *lj_debug_funcname(lua_State *L, const TValue *frame, const char **name)
{
  unsigned __int64 u64; 
  const TValue *v6; 
  GCfunc *v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned __int64 ptr64; 
  int v11; 
  __int64 v12; 
  unsigned int v13; 
  const char *result; 

  if ( (unsigned __int64)frame <= L->stack.ptr64 + 8 )
    return 0i64;
  u64 = frame->u64;
  if ( (frame->u64 & 7) == 3 )
  {
    frame = (const TValue *)((char *)frame - (u64 & 0xFFFFFFFFFFFFFFF8ui64));
    u64 = frame->u64;
  }
  v6 = (u64 & 3) != 0 ? (const TValue *)((char *)frame - (u64 & 0xFFFFFFFFFFFFFFF8ui64)) : &frame[-*(unsigned __int8 *)(u64 - 3) - 2];
  v7 = (GCfunc *)(v6[-1].u64 & 0x7FFFFFFFFFFFi64);
  v8 = debug_framepc(L, v7, frame);
  v9 = v8;
  if ( v8 == -1 )
    return 0i64;
  if ( v7->c.ffid && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 301, "((fn)->c.ffid == 0)") )
    __debugbreak();
  ptr64 = v7->c.pc.ptr64;
  if ( (unsigned int)v9 >= *(_DWORD *)(ptr64 - 92) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 302, "pc < pt->sizebc") )
    __debugbreak();
  v11 = *(_DWORD *)(ptr64 + 4 * v9);
  v12 = lj_bc_mode[(unsigned __int8)v11] >> 11;
  if ( (_DWORD)v12 != 9 )
  {
    if ( (_DWORD)v12 != 20 )
    {
      result = "metamethod";
      *name = (const char *)(*(_QWORD *)(L->glref.ptr64 + 8 * v12 + 384) + 24i64);
      return result;
    }
    return 0i64;
  }
  v13 = BYTE1(v11) - 3;
  if ( (_BYTE)v11 != 69 )
    v13 = BYTE1(v11);
  return j_lj_debug_slotname((GCproto *)(ptr64 - 104), (const unsigned int *)(ptr64 + 4 * v9), v13, name);
}

/*
==============
lj_debug_shortname
==============
*/
void lj_debug_shortname(char *out, GCstr *str, int line)
{
  char gcptr64; 
  const char *v5; 
  unsigned int len; 
  __int64 v8; 
  __int64 v9; 
  char *v10; 
  char v11; 
  size_t v12; 
  char *v13; 
  char *v14; 
  char v15; 
  char *v16; 
  char *v17; 
  char *v18; 
  signed __int64 v19; 
  char v20; 
  const char *v21; 
  signed __int64 v22; 
  char v23; 

  gcptr64 = str[1].nextgc.gcptr64;
  v5 = (const char *)&str[1];
  if ( gcptr64 == 61 )
  {
    strncpy(out, (const char *)&str[1].nextgc.gcptr64 + 1, 0x3Cui64);
    out[59] = 0;
  }
  else if ( gcptr64 == 64 )
  {
    len = str->len;
    v8 = (__int64)&str[1].nextgc.gcptr64 + 1;
    v9 = len - 1;
    if ( (unsigned int)v9 >= 0x3C )
    {
      *(_WORD *)out = 11822;
      v8 = v8 + v9 - 56;
      out[2] = 46;
      out += 3;
    }
    v10 = &out[-v8];
    do
    {
      v11 = *(_BYTE *)v8;
      v10[v8] = *(_BYTE *)v8;
      ++v8;
    }
    while ( v11 );
  }
  else
  {
    v12 = 0i64;
    while ( v5[v12] >= 0x20u )
    {
      if ( *((_BYTE *)&str[1].nextgc.gcptr64 + v12 + 1) < 0x20u )
      {
        ++v12;
        break;
      }
      if ( *((_BYTE *)&str[1].nextgc.gcptr64 + v12 + 2) < 0x20u )
      {
        v12 += 2i64;
        break;
      }
      if ( *((_BYTE *)&str[1].nextgc.gcptr64 + v12 + 3) < 0x20u )
      {
        v12 += 3i64;
        break;
      }
      if ( *((_BYTE *)&str[1].nextgc.gcptr64 + v12 + 4) < 0x20u )
      {
        v12 += 4i64;
        break;
      }
      if ( *((_BYTE *)&str[1].nextgc.gcptr64 + v12 + 5) < 0x20u )
      {
        v12 += 5i64;
        break;
      }
      v12 += 6i64;
      if ( v12 >= 0x30 )
        break;
    }
    v13 = "[string \"";
    if ( line == -1 )
      v13 = "[builtin:";
    v14 = (char *)(out - v13);
    do
    {
      v15 = *v13;
      v13[(_QWORD)v14] = *v13;
      ++v13;
    }
    while ( v15 );
    v16 = out + 9;
    if ( v5[v12] )
    {
      if ( v12 > 0x2D )
        v12 = 45i64;
      strncpy(v16, v5, v12);
      v17 = &v16[v12];
      *(_DWORD *)v17 = 3026478;
      v18 = v17 + 3;
    }
    else
    {
      v19 = v16 - v5;
      do
      {
        v20 = *v5;
        v5[v19] = *v5;
        ++v5;
      }
      while ( v20 );
      v18 = &v16[v12];
    }
    v21 = "\"]";
    if ( line == -1 )
      v21 = "]";
    v22 = v18 - v21;
    do
    {
      v23 = *v21;
      v21[v22] = *v21;
      ++v21;
    }
    while ( v23 );
  }
}

/*
==============
lj_debug_addloc
==============
*/
void lj_debug_addloc(lua_State *L, const char *msg, const TValue *frame, const TValue *nextframe)
{
  GCfunc *v6; 
  int v7; 
  char out[64]; 

  if ( !frame || (v6 = (GCfunc *)(frame[-1].u64 & 0x7FFFFFFFFFFFi64), v6->c.ffid) || (v7 = debug_frameline(L, v6, nextframe), v7 < 0) )
  {
    j_lj_strfmt_pushf(L, (const char *)&queryFormat, msg, nextframe);
  }
  else
  {
    if ( v6->c.ffid )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 358, "((fn)->c.ffid == 0)") )
        __debugbreak();
    }
    j_lj_debug_shortname(out, *(GCstr **)(v6->c.pc.ptr64 - 40), *(_DWORD *)(v6->c.pc.ptr64 - 32));
    j_lj_strfmt_pushf(L, "%s:%d: %s", out, (unsigned int)v7, msg);
  }
}

/*
==============
lj_debug_pushloc
==============
*/
void lj_debug_pushloc(lua_State *L, GCproto *pt, unsigned int pc)
{
  unsigned __int64 gcptr64; 
  unsigned __int64 ptr64; 
  unsigned int v7; 
  const char *v8; 
  unsigned int sizebc; 
  unsigned int firstline; 
  __int64 v11; 
  __int64 v12; 
  const char *v13; 
  __int64 v14; 
  const char *v15; 

  gcptr64 = pt->chunkname.gcptr64;
  ptr64 = pt->lineinfo.ptr64;
  v7 = *(_DWORD *)(gcptr64 + 16);
  v8 = (const char *)(gcptr64 + 24);
  sizebc = pt->sizebc;
  if ( pc <= sizebc && ptr64 )
  {
    firstline = pt->firstline;
    if ( pc == sizebc )
    {
      v11 = firstline + pt->numline;
    }
    else if ( pc )
    {
      v12 = pc - 1;
      if ( pt->numline >= 256 )
      {
        if ( pt->numline >= 0x10000 )
          v11 = firstline + *(_DWORD *)(ptr64 + 4 * v12);
        else
          v11 = firstline + *(unsigned __int16 *)(ptr64 + 2 * v12);
      }
      else
      {
        v11 = firstline + *(unsigned __int8 *)(v12 + ptr64);
      }
    }
    else
    {
      v11 = firstline;
    }
  }
  else
  {
    firstline = pt->firstline;
    v11 = 0i64;
  }
  if ( firstline == -1 )
  {
    j_lj_strfmt_pushf(L, "builtin:%s", v8);
  }
  else if ( *v8 == 64 )
  {
    v13 = v8 + 1;
    v14 = v7 - 1;
    if ( v7 != 1 )
    {
      v15 = &v13[v14];
      while ( *v15 != 47 && *v15 != 92 )
      {
        --v15;
        LODWORD(v14) = v14 - 1;
        if ( !(_DWORD)v14 )
          goto LABEL_21;
      }
      v13 += (unsigned int)(v14 + 1);
    }
LABEL_21:
    j_lj_strfmt_pushf(L, "%s:%d", v13, v11);
  }
  else if ( v7 <= 0x28 )
  {
    if ( *v8 == 61 )
      j_lj_strfmt_pushf(L, "%s:%d", v8 + 1, v11);
    else
      j_lj_strfmt_pushf(L, "\"%s\":%d", v8, v11);
  }
  else
  {
    j_lj_strfmt_pushf(L, "%p:%d", pt, v11);
  }
}

/*
==============
lj_debug_getinfo
==============
*/
__int64 lj_debug_getinfo(lua_State *L, const char *what, lj_Debug *ar, int ext)
{
  int v4; 
  int v5; 
  const TValue *v6; 
  const TValue *v7; 
  const char *v9; 
  TValue *top; 
  TValue v12; 
  unsigned __int64 v13; 
  unsigned int i_ci; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 ptr64; 
  char v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  int v21; 
  const char *v22; 
  unsigned __int64 v23; 
  const char *v24; 
  GCtab *v25; 
  unsigned __int64 v26; 
  unsigned __int8 *v27; 
  int v28; 
  int v29; 
  __int64 v30; 
  unsigned __int16 *v31; 
  __int64 v32; 
  unsigned __int16 *v33; 
  int v34; 
  int v35; 
  TValue *v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  int v41; 
  int v42; 

  v4 = 0;
  v5 = 0;
  v6 = NULL;
  v42 = 0;
  v7 = NULL;
  v41 = 0;
  v9 = what;
  if ( *what == 62 )
  {
    top = L->top;
    if ( (unsigned int)(top[-1].it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 432, "(((uint32_t)((func)->it64 >> 47)) == (~8u))") )
      __debugbreak();
    if ( (unsigned int)(top[-1].it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 433, "(((uint32_t)((func)->it64 >> 47)) == (~8u))") )
      __debugbreak();
    v12.u64 = top[-1].u64;
    --L->top;
    v13 = v12.u64 & 0x7FFFFFFFFFFFi64;
    ++v9;
  }
  else
  {
    i_ci = ar->i_ci;
    v15 = (unsigned __int16)i_ci;
    v16 = HIWORD(i_ci);
    if ( !(_DWORD)v15 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 439, "offset != 0") )
      __debugbreak();
    v6 = (const TValue *)(L->stack.ptr64 + 8 * v15);
    if ( (_DWORD)v16 )
      v7 = &v6[v16];
    ptr64 = L->maxstack.ptr64;
    if ( ((unsigned __int64)v6 > ptr64 || v7 && (unsigned __int64)v7 > ptr64) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 443, "frame <= (((TValue *)(void *)(L->maxstack).ptr64)) && (!nextframe || nextframe <= (((TValue *)(void *)(L->maxstack).ptr64)))") )
      __debugbreak();
    v13 = v6[-1].u64 & 0x7FFFFFFFFFFFi64;
    if ( *(_BYTE *)(v13 + 9) != 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 445, "fn->c.gct == ~(~8u)") )
      __debugbreak();
    v4 = 0;
  }
  v18 = *v9;
  if ( *v9 )
  {
    do
    {
      switch ( v18 )
      {
        case 'S':
          if ( *(_BYTE *)(v13 + 10) )
          {
            v4 = v42;
            ar->source = "=[C]";
            strcpy(ar->short_src, "[C]");
            *(_QWORD *)&ar->linedefined = -1i64;
            ar->what = "C";
          }
          else
          {
            v19 = *(_QWORD *)(v13 + 32);
            v20 = *(_QWORD *)(v19 - 40);
            v21 = *(_DWORD *)(v19 - 32);
            ar->source = (const char *)(v20 + 24);
            j_lj_debug_shortname(ar->short_src, (GCstr *)v20, *(_DWORD *)(v19 - 32));
            ar->linedefined = v21;
            ar->lastlinedefined = v21 + *(_DWORD *)(v19 - 28);
            if ( v21 || (v22 = "main", !*(_DWORD *)(v19 - 28)) )
              v22 = "Lua";
            v5 = v41;
            v4 = v42;
            ar->what = v22;
          }
          break;
        case 'l':
          if ( v6 )
            ar->currentline = debug_frameline(L, (GCfunc *)v13, v7);
          else
            ar->currentline = -1;
          break;
        case 'u':
          ar->nups = *(unsigned __int8 *)(v13 + 11);
          if ( ext )
          {
            if ( *(_BYTE *)(v13 + 10) )
            {
              ar->nparams = 0;
              ar->isvararg = 1;
            }
            else
            {
              v23 = *(_QWORD *)(v13 + 32);
              ar->nparams = *(unsigned __int8 *)(v23 - 94);
              ar->isvararg = (*(unsigned __int8 *)(v23 - 43) >> 1) & 1;
            }
          }
          break;
        case 'n':
          if ( v6 )
            v24 = j_lj_debug_funcname(L, v6, &ar->name);
          else
            v24 = NULL;
          ar->namewhat = v24;
          if ( !v24 )
          {
            ar->namewhat = (char *)&queryFormat.fmt + 3;
            ar->name = NULL;
          }
          break;
        case 'f':
          v4 = 1;
          v42 = 1;
          break;
        case 'L':
          v5 = 1;
          v41 = 1;
          break;
        default:
          return 0i64;
      }
      v18 = *++v9;
    }
    while ( v18 );
    if ( v4 )
    {
      L->top->u64 = v13 | 0xFFFB800000000000ui64;
      if ( (~(unsigned int)((__int64)(v13 | 0xFFFB800000000000ui64) >> 47) != *(unsigned __int8 *)((v13 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v13 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
      if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
        j_lj_state_growstack1(L);
    }
    if ( v5 )
    {
      if ( *(_BYTE *)(v13 + 10) )
      {
        L->top->u64 = -1i64;
      }
      else
      {
        v25 = j_lj_tab_new(L, 0, 0);
        if ( *(_BYTE *)(v13 + 10) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 503, "((fn)->c.ffid == 0)") )
          __debugbreak();
        v26 = *(_QWORD *)(v13 + 32);
        v27 = *(unsigned __int8 **)(v26 - 24);
        if ( v27 )
        {
          v28 = *(_DWORD *)(v26 - 28);
          v29 = *(_DWORD *)(v26 - 32);
          if ( v28 >= 256 )
          {
            v30 = 4i64;
            if ( v28 < 0x10000 )
              v30 = 2i64;
          }
          else
          {
            v30 = 1i64;
          }
          if ( *(_DWORD *)(v26 - 92) != 1 )
          {
            v31 = *(unsigned __int16 **)(v26 - 24);
            v32 = (unsigned int)(*(_DWORD *)(v26 - 92) - 1);
            v33 = v31;
            do
            {
              if ( v30 == 1 )
              {
                v34 = *v27;
              }
              else if ( v30 == 2 )
              {
                v34 = *v33;
              }
              else
              {
                v34 = *(_DWORD *)v31;
              }
              v35 = v34 + v29;
              if ( v34 + v29 >= v25->asize )
                v36 = j_lj_tab_setinth(L, v25, v35);
              else
                v36 = (TValue *)(v25->array.ptr64 + 8i64 * v35);
              ++v27;
              ++v33;
              v31 += 2;
              v36->u64 = 0xFFFEFFFFFFFFFFFFui64;
              --v32;
            }
            while ( v32 );
          }
        }
        v37 = (unsigned __int64)v25 | 0xFFFA000000000000ui64;
        v38 = v37 >> 47;
        L->top->u64 = v37;
        if ( (unsigned int)(v37 >> 47) + 4 > 0xFFFFFFF6 )
        {
          v39 = v37 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v38 != *(unsigned __int8 *)(v39 + 9) || (*(_BYTE *)(v39 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
      }
      if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
        j_lj_state_growstack1(L);
    }
  }
  return 1i64;
}

/*
==============
lj_debug_dumpstack
==============
*/
void lj_debug_dumpstack(lua_State *L, SBuf *sb, const char *fmt, int depth)
{
  const char *v5; 
  int v6; 
  int v7; 
  int v8; 
  unsigned int v9; 
  int v10; 
  unsigned __int64 v11; 
  TValue *v12; 
  TValue *v13; 
  TValue v14; 
  int v15; 
  TValue v16; 
  __int64 v17; 
  GCfunc *v18; 
  const char *v19; 
  int v20; 
  char *ptr64; 
  GCproto *v22; 
  char *v23; 
  __int64 v24; 
  unsigned __int8 ffid; 
  unsigned __int64 v26; 
  int v27; 
  char *v28; 
  char *v29; 
  char *v30; 
  unsigned int v31; 
  int v32; 
  TValue *nextframe; 
  char *name; 
  lua_State *La; 
  int v37; 

  La = L;
  v5 = fmt;
  v6 = -1;
  if ( depth >= 0 )
    v6 = depth;
  v7 = ~depth;
  v37 = v6;
  v8 = 1;
  v31 = ((depth >> 31) & 0xFFFFFFFE) + 1;
  v9 = 0;
  if ( depth >= 0 )
    v7 = 0;
  v32 = v7;
  if ( v7 != v6 )
  {
    do
    {
      v10 = v7;
      v11 = L->stack.ptr64 + 8;
      v12 = L->base - 1;
      v13 = v12;
      if ( (unsigned __int64)v12 <= v11 )
        goto LABEL_16;
      while ( 1 )
      {
        v14.u64 = v12[-1].u64;
        v15 = v10 + 1;
        if ( (lua_State *)(v14.u64 & 0x7FFFFFFFFFFFi64) != L )
          v15 = v10;
        v10 = v15 - 1;
        if ( !v15 )
          break;
        v16.u64 = v12->u64;
        v13 = v12;
        if ( (v12->u64 & 3) != 0 )
        {
          v10 = v15;
          v12 = (TValue *)((char *)v12 - (v16.u64 & 0xFFFFFFFFFFFFFFF8ui64));
          if ( (LOBYTE(v16.n) & 7) != 3 )
            v10 = v15 - 1;
        }
        else
        {
          v12 += -2i64 - *(unsigned __int8 *)(v16.u64 - 3);
        }
        L = La;
        if ( (unsigned __int64)v12 <= v11 )
        {
          v6 = v37;
LABEL_16:
          if ( v31 != 1 )
          {
            v7 -= v10;
            goto LABEL_67;
          }
          goto LABEL_68;
        }
      }
      v17 = v13 - v12;
      if ( (_DWORD)v17 )
        nextframe = &v12[(int)v17];
      else
        nextframe = NULL;
      v18 = (GCfunc *)(v14.u64 & 0x7FFFFFFFFFFFi64);
      v19 = v5;
      v20 = *(unsigned __int8 *)v5;
      if ( v20 )
      {
        while ( 1 )
        {
          ++v19;
          if ( v20 == 70 )
            break;
          switch ( v20 )
          {
            case 'Z':
              v9 = LODWORD(sb->p.ptr64) - LODWORD(sb->b.ptr64);
              break;
            case 'f':
              goto LABEL_33;
            case 'l':
              goto LABEL_44;
            case 'p':
              v8 = 0;
              break;
            default:
              if ( LODWORD(sb->e.ptr64) == LODWORD(sb->p.ptr64) )
                ptr64 = j_lj_buf_more2(sb, 1u);
              else
                ptr64 = (char *)sb->p.ptr64;
              *ptr64 = v20;
              sb->p.ptr64 = (unsigned __int64)(ptr64 + 1);
              break;
          }
LABEL_64:
          v20 = *(unsigned __int8 *)v19;
          L = La;
          if ( !*v19 )
          {
            v7 = v32;
            goto LABEL_66;
          }
        }
LABEL_33:
        if ( j_lj_debug_funcname(L, v12, (const char **)&name) )
        {
          if ( v20 == 70 && !v18->c.ffid )
          {
            v22 = (GCproto *)(v18->c.pc.ptr64 - 104);
            if ( v22->firstline != -1 )
            {
              debug_putchunkname(sb, v22, v8);
              if ( LODWORD(sb->e.ptr64) == LODWORD(sb->p.ptr64) )
                v23 = j_lj_buf_more2(sb, 1u);
              else
                v23 = (char *)sb->p.ptr64;
              *v23 = 58;
              sb->p.ptr64 = (unsigned __int64)(v23 + 1);
            }
          }
          v24 = -1i64;
          do
            ++v24;
          while ( name[v24] );
          j_lj_buf_putmem(sb, name, v24);
          goto LABEL_64;
        }
LABEL_44:
        ffid = v18->c.ffid;
        if ( ffid )
        {
          if ( ffid <= 1u )
          {
            if ( LODWORD(sb->e.ptr64) == LODWORD(sb->p.ptr64) )
              v30 = j_lj_buf_more2(sb, 1u);
            else
              v30 = (char *)sb->p.ptr64;
            *v30 = 64;
            sb->p.ptr64 = (unsigned __int64)(v30 + 1);
            j_lj_strfmt_putptr(sb, v18->c.f);
          }
          else
          {
            j_lj_buf_putmem(sb, "[builtin#", 9u);
            j_lj_strfmt_putint(sb, v18->c.ffid);
            if ( LODWORD(sb->e.ptr64) == LODWORD(sb->p.ptr64) )
              v29 = j_lj_buf_more2(sb, 1u);
            else
              v29 = (char *)sb->p.ptr64;
            *v29 = 93;
            sb->p.ptr64 = (unsigned __int64)(v29 + 1);
          }
        }
        else
        {
          v26 = v18->c.pc.ptr64;
          if ( debug_putchunkname(sb, (GCproto *)(v26 - 104), v8) )
          {
            if ( v20 == 108 )
              v27 = debug_frameline(La, v18, nextframe);
            else
              v27 = *(_DWORD *)(v26 - 32);
            if ( LODWORD(sb->e.ptr64) == LODWORD(sb->p.ptr64) )
              v28 = j_lj_buf_more2(sb, 1u);
            else
              v28 = (char *)sb->p.ptr64;
            *v28 = 58;
            sb->p.ptr64 = (unsigned __int64)(v28 + 1);
            if ( v27 < 0 )
              v27 = *(_DWORD *)(v26 - 32);
            j_lj_strfmt_putint(sb, v27);
          }
        }
        goto LABEL_64;
      }
LABEL_66:
      v5 = fmt;
      v6 = v37;
LABEL_67:
      v7 += v31;
      L = La;
      v32 = v7;
    }
    while ( v7 != v6 );
LABEL_68:
    if ( v9 )
      sb->p.ptr64 = sb->b.ptr64 + v9;
  }
}

/*
==============
luaL_traceback
==============
*/
void luaL_traceback(lua_State *L, lua_State *L1, const char *msg, int level)
{
  int v7; 
  unsigned __int64 ptr64; 
  int v9; 
  int v10; 
  TValue *v11; 
  TValue *v12; 
  TValue *v13; 
  unsigned __int64 v14; 
  int v15; 
  unsigned __int64 u64; 
  int v17; 
  int v18; 
  TValue *v19; 
  int v20; 
  int v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  int v24; 
  TValue *v25; 
  TValue *v26; 
  int v27; 
  unsigned __int64 v28; 
  TValue *v29; 
  __int64 v30; 
  unsigned __int8 v31; 
  int v32; 
  signed __int64 v33; 
  lj_Debug ar; 

  v33 = L->top - L->base;
  v7 = 12;
  if ( msg )
    j_lua_pushfstring(L, "%s\n", msg);
  j_lua_pushlstring(L, "stack traceback:", 0x10ui64);
  while ( 1 )
  {
    ptr64 = L1->stack.ptr64;
    v9 = level;
    v10 = level;
    v11 = L1->base - 1;
    v12 = v11;
    v13 = v11;
    v14 = ptr64 + 8;
    if ( (unsigned __int64)v11 <= ptr64 + 8 )
    {
LABEL_13:
      ar.i_ci = level - v10;
      v17 = 0;
    }
    else
    {
      while ( 1 )
      {
        v15 = v10 + 1;
        if ( (lua_State *)(v12[-1].u64 & 0x7FFFFFFFFFFFi64) != L1 )
          v15 = v10;
        v10 = v15 - 1;
        if ( !v15 )
          break;
        u64 = v12->u64;
        v13 = v12;
        if ( (v12->u64 & 3) != 0 )
        {
          v10 = v15;
          v12 = (TValue *)((char *)v12 - (u64 & 0xFFFFFFFFFFFFFFF8ui64));
          if ( (u64 & 7) != 3 )
            v10 = v15 - 1;
        }
        else
        {
          v12 += -2i64 - *(unsigned __int8 *)(u64 - 3);
        }
        if ( (unsigned __int64)v12 <= v14 )
          goto LABEL_13;
      }
      v17 = 1;
      ar.i_ci = ((unsigned int)(v13 - v12) << 16) + ((__int64)((__int64)v12 - ptr64) >> 3);
    }
    ++level;
    if ( !v17 )
      break;
    if ( level <= v7 )
    {
      j_lj_debug_getinfo(L1, "Snlf", &ar, 0);
      if ( (unsigned int)(L1->top[-1].it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 675, "(((uint32_t)((L1->top-1)->it64 >> 47)) == (~8u))") )
        __debugbreak();
      v29 = L1->top - 1;
      v30 = v29->u64 & 0x7FFFFFFFFFFFi64;
      L1->top = v29;
      v31 = *(_BYTE *)(v30 + 10);
      if ( v31 <= 1u || *ar.namewhat )
        j_lua_pushfstring(L, "\n\t%s:", ar.short_src);
      else
        j_lua_pushfstring(L, "\n\t[builtin#%d]:", v31);
      if ( ar.currentline > 0 )
        j_lua_pushfstring(L, "%d:", (unsigned int)ar.currentline);
      if ( *ar.namewhat )
      {
        j_lua_pushfstring(L, " in function '%s'", ar.name);
      }
      else if ( *ar.what == 109 )
      {
        j_lua_pushlstring(L, " in main chunk", 0xEui64);
      }
      else if ( *ar.what == 67 )
      {
        j_lua_pushfstring(L, " at %p", *(const void **)(v30 + 40));
      }
      else
      {
        j_lua_pushfstring(L, " in function <%s:%d>", ar.short_src, (unsigned int)ar.linedefined);
      }
      v32 = L->top - L->base - v33;
      if ( v32 >= 15 )
        j_lua_concat(L, v32);
    }
    else
    {
      v18 = level + 10;
      v19 = v11;
      v20 = level + 10;
      if ( (unsigned __int64)v11 <= v14 )
      {
LABEL_26:
        level = v9;
        ar.i_ci = v18 - v20;
        v7 = 0x7FFFFFFF;
      }
      else
      {
        while ( 1 )
        {
          v21 = v20 + 1;
          if ( (lua_State *)(v11[-1].u64 & 0x7FFFFFFFFFFFi64) != L1 )
            v21 = v20;
          v20 = v21 - 1;
          if ( !v21 )
            break;
          v22 = v11->u64;
          v19 = v11;
          if ( (v11->u64 & 3) != 0 )
          {
            v20 = v21;
            v11 = (TValue *)((char *)v11 - (v22 & 0xFFFFFFFFFFFFFFF8ui64));
            if ( (v22 & 7) != 3 )
              v20 = v21 - 1;
          }
          else
          {
            v11 += -2i64 - *(unsigned __int8 *)(v22 - 3);
          }
          if ( (unsigned __int64)v11 <= v14 )
            goto LABEL_26;
        }
        ar.i_ci = ((unsigned int)(v19 - v11) << 16) + ((__int64)((__int64)v11 - ptr64) >> 3);
        j_lua_pushlstring(L, "\n\t...", 5ui64);
        v23 = L1->stack.ptr64;
        v24 = -10;
        v25 = L1->base - 1;
        v26 = v25;
        if ( (unsigned __int64)v25 <= v23 + 8 )
        {
LABEL_36:
          v7 = 0x7FFFFFFF;
          ar.i_ci = -10 - v24;
          level = -10 - v24 - 10;
        }
        else
        {
          while ( 1 )
          {
            v27 = v24 + 1;
            if ( (lua_State *)(v25[-1].u64 & 0x7FFFFFFFFFFFi64) != L1 )
              v27 = v24;
            v24 = v27 - 1;
            if ( !v27 )
              break;
            v28 = v25->u64;
            v26 = v25;
            if ( (v25->u64 & 3) != 0 )
            {
              v24 = v27;
              v25 = (TValue *)((char *)v25 - (v28 & 0xFFFFFFFFFFFFFFF8ui64));
              if ( (v28 & 7) != 3 )
                v24 = v27 - 1;
            }
            else
            {
              v25 += -2i64 - *(unsigned __int8 *)(v28 - 3);
            }
            if ( (unsigned __int64)v25 <= v23 + 8 )
              goto LABEL_36;
          }
          v7 = 0x7FFFFFFF;
          ar.i_ci = ((unsigned int)(v26 - v25) << 16) + ((__int64)((__int64)v25 - v23) >> 3);
          level = ar.i_ci - 10;
        }
      }
    }
  }
  j_lua_concat(L, L->top - L->base - v33);
}

/*
==============
debug_frameline
==============
*/
__int64 debug_frameline(lua_State *L, GCfunc *fn, const TValue *nextframe)
{
  unsigned int v4; 
  unsigned __int64 ptr64; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  int v10; 
  __int64 v11; 

  v4 = debug_framepc(L, fn, nextframe);
  if ( v4 == -1 )
    return 0xFFFFFFFFi64;
  if ( fn->c.ffid && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 135, "((fn)->c.ffid == 0)") )
    __debugbreak();
  ptr64 = fn->c.pc.ptr64;
  if ( v4 > *(_DWORD *)(ptr64 - 92) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 136, "pc <= pt->sizebc") )
    __debugbreak();
  v6 = *(_DWORD *)(ptr64 - 92);
  v7 = *(_QWORD *)(ptr64 - 24);
  if ( v4 > v6 || !v7 )
    return 0;
  v8 = *(_DWORD *)(ptr64 - 32);
  if ( v4 == v6 )
    return *(_DWORD *)(ptr64 - 28) + v8;
  if ( !v4 )
    return v8;
  v10 = *(_DWORD *)(ptr64 - 28);
  v11 = v4 - 1;
  if ( v10 < 256 )
    return *(unsigned __int8 *)(v11 + v7) + v8;
  if ( v10 >= 0x10000 )
    return *(_DWORD *)(v7 + 4 * v11) + v8;
  else
    return *(unsigned __int16 *)(v7 + 2 * v11) + v8;
}

/*
==============
debug_framepc
==============
*/
__int64 debug_framepc(lua_State *L, GCfunc *fn, const TValue *nextframe)
{
  unsigned __int64 v6; 
  unsigned __int64 u64; 
  TValue *v9; 
  unsigned __int64 v10; 
  int i; 
  unsigned __int64 v12; 

  if ( ((fn->c.gct - 6) & 0xFD) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 58, "fn->c.gct == ~(~8u) || fn->c.gct == ~(~6u)") )
    __debugbreak();
  if ( fn->c.ffid )
    return 0xFFFFFFFFi64;
  if ( nextframe )
  {
    u64 = nextframe->u64;
    if ( (nextframe->u64 & 3) != 0 )
    {
      if ( (u64 & 7) == 2 )
        return (unsigned int)((__int64)(nextframe[-2].u64 - fn->c.pc.ptr64) >> 2) - 1;
      v9 = L->base - 1;
      v10 = (unsigned __int64)L->cframe & 0xFFFFFFFFFFFFFFFCui64;
      if ( !v10 )
        return 0xFFFFFFFFi64;
      while ( 1 )
      {
        for ( i = *(_DWORD *)(v10 + 80); i < 0; i = *(_DWORD *)(v10 + 80) )
        {
          if ( (unsigned __int64)v9 >= L->stack.ptr64 + -i )
            break;
          v10 = *(_QWORD *)(v10 + 104) & 0xFFFFFFFFFFFFFFFCui64;
          if ( !v10 )
            return 0xFFFFFFFFi64;
        }
        if ( v9 < nextframe )
          break;
        v12 = v9->u64;
        if ( (v9->u64 & 3) != 0 )
        {
          if ( (v9->u64 & 3) == 1 )
            v10 = *(_QWORD *)(v10 + 104) & 0xFFFFFFFFFFFFFFFCui64;
          v9 = (TValue *)((char *)v9 - (v12 & 0xFFFFFFFFFFFFFFF8ui64));
        }
        else
        {
          v9 += -2i64 - *(unsigned __int8 *)(v12 - 3);
        }
        if ( !v10 )
          return 0xFFFFFFFFi64;
      }
      u64 = *(_QWORD *)(v10 + 96);
    }
  }
  else
  {
    v6 = (unsigned __int64)L->cframe & 0xFFFFFFFFFFFFFFFCui64;
    if ( !v6 )
      return 0xFFFFFFFFi64;
    u64 = *(_QWORD *)(v6 + 96);
    if ( u64 == *(_QWORD *)(v6 + 88) )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)((__int64)(u64 - fn->c.pc.ptr64) >> 2) - 1;
}

/*
==============
debug_localname
==============
*/
TValue *debug_localname(lua_State *L, const lua_Debug *ar, const char **name, unsigned int slot1)
{
  unsigned int i_ci; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v9; 
  TValue *v10; 
  TValue *v11; 
  const TValue *v12; 
  GCfunc *v13; 
  unsigned int v14; 
  unsigned __int64 ptr64; 
  __int64 v16; 
  TValue *result; 
  const char *v18; 

  i_ci = ar->i_ci;
  v6 = (unsigned __int16)i_ci;
  v7 = HIWORD(i_ci);
  v9 = slot1;
  v10 = (TValue *)(L->stack.ptr64 + 8 * v6);
  v11 = v10;
  if ( v7 )
    v12 = &v10[v7];
  else
    v12 = NULL;
  v13 = (GCfunc *)(v10[-1].u64 & 0x7FFFFFFFFFFFi64);
  v14 = debug_framepc(L, v13, v12);
  if ( !v12 )
    v12 = L->top + 1;
  if ( (int)v9 >= 0 )
  {
    if ( v14 == -1 )
      goto LABEL_25;
    if ( v13->c.ffid && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 206, "((fn)->c.ffid == 0)") )
      __debugbreak();
    v18 = debug_varname((const GCproto *)(v13->c.pc.ptr64 - 104), v14, (int)v9 - 1);
    *name = v18;
    if ( !v18 )
    {
LABEL_25:
      if ( (_DWORD)v9 && &v10[v9 + 1] < v12 )
        *name = "(*temporary)";
    }
    return &v10[v9];
  }
  else
  {
    if ( v14 == -1 )
      return 0i64;
    if ( v13->c.ffid && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_debug.c", 190, "((fn)->c.ffid == 0)") )
      __debugbreak();
    ptr64 = v13->c.pc.ptr64;
    if ( (*(_BYTE *)(ptr64 - 43) & 2) == 0 )
      return 0i64;
    v16 = v10->u64 & 7;
    if ( v16 == 3 )
      v11 = (TValue *)((char *)v10 - (v10->u64 & 0xFFFFFFFFFFFFFFF8ui64));
    result = &v11[*(unsigned __int8 *)(ptr64 - 94) - (unsigned int)v9];
    if ( v16 != 3 )
      v10 = (TValue *)v12;
    if ( &result[1] >= v10 )
      return 0i64;
    else
      *name = "(*vararg)";
  }
  return result;
}

/*
==============
debug_putchunkname
==============
*/
__int64 debug_putchunkname(SBuf *sb, GCproto *pt, int pathstrip)
{
  GCstr *gcptr64; 
  GCstr *v6; 
  char *ptr64; 
  const char *v9; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  char v13; 

  gcptr64 = (GCstr *)pt->chunkname.gcptr64;
  v6 = gcptr64 + 1;
  if ( pt->firstline == -1 )
  {
    j_lj_buf_putmem(sb, "[builtin:", 9u);
    j_lj_buf_putstr(sb, gcptr64);
    if ( LODWORD(sb->e.ptr64) == LODWORD(sb->p.ptr64) )
      ptr64 = j_lj_buf_more2(sb, 1u);
    else
      ptr64 = (char *)sb->p.ptr64;
    *ptr64 = 93;
    sb->p.ptr64 = (unsigned __int64)(ptr64 + 1);
    return 0i64;
  }
  else
  {
    if ( LOBYTE(v6->nextgc.gcptr64) == 61 || LOBYTE(v6->nextgc.gcptr64) == 64 )
    {
      v9 = (char *)&gcptr64[1].nextgc.gcptr64 + 1;
      v10 = gcptr64->len - 1;
      if ( pathstrip )
      {
        v11 = gcptr64->len - 2;
        v12 = v11;
        if ( v11 >= 0 )
        {
          while ( 1 )
          {
            v13 = v9[v12];
            if ( v13 == 47 || v13 == 92 )
              break;
            --v11;
            if ( --v12 < 0 )
              goto LABEL_16;
          }
          v10 += -1 - v11;
          v9 += v11 + 1;
        }
      }
    }
    else
    {
      v9 = "[string]";
      v10 = 8;
    }
LABEL_16:
    j_lj_buf_putmem(sb, v9, v10);
    return 1i64;
  }
}

/*
==============
debug_varname
==============
*/
const char *debug_varname(const GCproto *pt, unsigned int pc, unsigned int slot)
{
  char *ptr64; 
  unsigned int v6; 
  unsigned int v7; 
  const char *v8; 
  unsigned int i; 
  char *pp; 

  ptr64 = (char *)pt->varinfo.ptr64;
  pp = ptr64;
  if ( ptr64 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = (unsigned __int8)*ptr64;
      v8 = ptr64;
      if ( v7 >= 7 )
      {
        do
          pp = ++ptr64;
        while ( *ptr64 );
      }
      else if ( !*ptr64 )
      {
        return 0i64;
      }
      pp = ptr64 + 1;
      v6 += j_lj_buf_ruleb128((const char **)&pp);
      if ( v6 > pc )
        break;
      if ( pc < v6 + j_lj_buf_ruleb128((const char **)&pp) && !slot-- )
      {
        if ( v7 < 7 )
        {
          v8 = "(for index)";
          for ( i = v7 - 1; i; --i )
          {
            while ( *v8++ )
              ;
          }
        }
        return v8;
      }
      ptr64 = pp;
    }
  }
  return 0i64;
}

