/*
==============
lua_newthread
==============
*/
lua_State *lua_newthread(lua_State *L)
{
  unsigned __int64 v2; 
  __int64 v3; 

  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  v2 = (unsigned __int64)j_lj_state_new(L);
  v3 = (__int64)(v2 | 0xFFFC800000000000ui64) >> 47;
  L->top->u64 = v2 | 0xFFFC800000000000ui64;
  if ( (unsigned int)(v3 + 4) > 0xFFFFFFF6 && (~(_DWORD)v3 != *(unsigned __int8 *)((v2 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v2 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
  return (lua_State *)v2;
}

/*
==============
lua_gettop
==============
*/
signed __int64 lua_gettop(lua_State *L)
{
  return L->top - L->base;
}

/*
==============
lua_settop
==============
*/
void lua_settop(lua_State *L, int idx)
{
  __int64 v2; 
  TValue *base; 
  TValue *v5; 
  TValue *top; 
  TValue *v7; 
  TValue *v8; 

  v2 = idx;
  base = L->base;
  if ( (int)v2 < 0 )
  {
    if ( ~(_DWORD)v2 > L->top - base && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 188, "-(idx+1) <= (L->top - L->base)") )
      __debugbreak();
    L->top += (int)v2 + 1;
  }
  else
  {
    if ( v2 > (__int64)(L->maxstack.ptr64 - (_QWORD)base) >> 3 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 178, "idx <= (((TValue *)(void *)(L->maxstack).ptr64)) - L->base") )
      __debugbreak();
    v5 = L->base;
    top = L->top;
    v7 = &v5[v2];
    if ( v7 <= top )
    {
      L->top = v7;
    }
    else
    {
      if ( (unsigned __int64)v7 >= L->maxstack.ptr64 )
        j_lj_state_growstack(L, v2 - (top - v5));
      do
      {
        L->top->u64 = -1i64;
        v8 = L->base;
        ++L->top;
      }
      while ( L->top < &v8[v2] );
    }
  }
}

/*
==============
lua_pushvalue
==============
*/
void lua_pushvalue(lua_State *L, int idx)
{
  const TValue *v3; 
  __int64 u64; 
  __int64 v5; 
  __int64 v6; 

  v3 = index2adr(L, idx);
  u64 = v3->u64;
  L->top->u64 = v3->u64;
  v5 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v6 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v5 != *(unsigned __int8 *)(v6 + 9) || (*(_BYTE *)(v6 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_remove
==============
*/
void lua_remove(lua_State *L, int idx)
{
  TValue *v3; 
  TValue *top; 
  TValue *i; 
  __int64 u64; 
  __int64 v7; 
  __int64 v8; 

  v3 = stkindex2adr(L, idx);
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 198, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v3 == (TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 198, "(p) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 198, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
    __debugbreak();
  top = L->top;
  for ( i = v3 + 1; i < top; ++i )
  {
    u64 = i->u64;
    i[-1].u64 = i->u64;
    v7 = u64 >> 47;
    if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v8 = u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    top = L->top;
  }
  L->top = top - 1;
}

/*
==============
lua_insert
==============
*/
void lua_insert(lua_State *L, int idx)
{
  TValue *v3; 
  TValue *top; 
  __int64 it64; 
  TValue *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 u64; 
  __int64 v10; 
  __int64 v11; 

  v3 = stkindex2adr(L, idx);
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 208, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v3 == (TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 208, "(p) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 208, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
    __debugbreak();
  top = L->top;
  if ( top > v3 )
  {
    do
    {
      it64 = top[-1].it64;
      v6 = top - 1;
      top->u64 = it64;
      v7 = it64 >> 47;
      if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v8 = it64 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      top = v6;
    }
    while ( v6 > v3 );
    top = L->top;
  }
  u64 = top->u64;
  v3->u64 = top->u64;
  v10 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v11 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
}

/*
==============
lua_replace
==============
*/
void lua_replace(lua_State *L, int idx)
{
  if ( (__int64)(((char *)L->top - (char *)L->base) & 0xFFFFFFFFFFFFFFF8ui64) < 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 240, "(1) <= (L->top - L->base)") )
    __debugbreak();
  copy_slot(L, (const TValue *)L->top - 1, idx);
  --L->top;
}

/*
==============
lua_checkstack
==============
*/
__int64 lua_checkstack(lua_State *L, int size)
{
  if ( size > 8000 || size + L->top - L->base > 8000 )
    return 0i64;
  if ( size > 0 && (signed __int64)(L->maxstack.ptr64 - (unsigned __int64)L->top) <= 8i64 * (unsigned int)size )
    j_lj_state_growstack(L, size);
  return 1i64;
}

/*
==============
lua_xmove
==============
*/
void lua_xmove(lua_State *from, lua_State *to, int n)
{
  __int64 v5; 
  __int64 v6; 
  TValue *top; 
  int v8; 
  TValue *v9; 
  TValue *v10; 
  signed __int64 v11; 
  __int64 it64; 
  __int64 v13; 
  __int64 v14; 

  if ( from != to )
  {
    v5 = (unsigned int)n;
    v6 = n;
    if ( n > from->top - from->base && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 152, "(n) <= (from->top - from->base)") )
      __debugbreak();
    if ( from->glref.ptr64 != to->glref.ptr64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 153, "(((global_State *)(void *)(from->glref).ptr64)) == (((global_State *)(void *)(to->glref).ptr64))") )
      __debugbreak();
    top = to->top;
    if ( (signed __int64)(to->maxstack.ptr64 - (_QWORD)top) <= 8 * v5 )
    {
      j_lj_state_growstack(to, v5);
      top = to->top;
    }
    v8 = v5 - 1;
    v9 = from->top;
    v10 = &top[v6];
    to->top = v10;
    if ( v8 >= 0 )
    {
      v11 = (char *)v10 - (char *)v9;
      do
      {
        it64 = v9[-1].it64;
        --v9;
        v13 = it64 >> 47;
        *(unsigned __int64 *)((char *)&v9->u64 + v11) = it64;
        if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
        {
          v14 = it64 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v13 != *(unsigned __int8 *)(v14 + 9) || (*(_BYTE *)(v14 + 8) & (unsigned __int8)~*(_BYTE *)(to->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
        --v8;
      }
      while ( v8 >= 0 );
    }
    from->top = v9;
  }
}

/*
==============
lua_isnumber
==============
*/
_BOOL8 lua_isnumber(lua_State *L, int idx)
{
  signed __int64 u64; 
  TValue o; 

  u64 = index2adr(L, idx)->u64;
  return (unsigned int)(u64 >> 47) <= 0xFFFFFFF2 || (unsigned int)(u64 >> 47) == -5 && j_lj_strscan_num((GCstr *)(u64 & 0x7FFFFFFFFFFFi64), &o);
}

/*
==============
lua_isstring
==============
*/
_BOOL8 lua_isstring(lua_State *L, int idx)
{
  __int64 v2; 

  v2 = index2adr(L, idx)->it64 >> 47;
  return (_DWORD)v2 == -5 || (unsigned int)v2 <= 0xFFFFFFF2;
}

/*
==============
lua_iscfunction
==============
*/
_BOOL8 lua_iscfunction(lua_State *L, int idx)
{
  signed __int64 u64; 

  u64 = index2adr(L, idx)->u64;
  return (unsigned int)(u64 >> 47) == -9 && *(_BYTE *)((u64 & 0x7FFFFFFFFFFFi64) + 0xA);
}

/*
==============
lua_isuserdata
==============
*/
_BOOL8 lua_isuserdata(lua_State *L, int idx)
{
  __int64 v2; 

  v2 = index2adr(L, idx)->it64 >> 47;
  return (_DWORD)v2 == -13 || (_DWORD)v2 == -4;
}

/*
==============
lua_type
==============
*/
__int64 lua_type(lua_State *L, int idx)
{
  const TValue *v3; 
  unsigned __int64 v5; 

  v3 = index2adr(L, idx);
  if ( (unsigned int)(v3->it64 >> 47) <= 0xFFFFFFF2 )
    return 3i64;
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 267, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v3 == (const TValue *)(L->glref.ptr64 + 248) )
    return 0xFFFFFFFFi64;
  v5 = (0x75A0698042110ui64 >> (4 * ~(unsigned __int8)(v3->it64 >> 47))) & 0xF;
  if ( ((0x75A0698042110ui64 >> (4 * ~(unsigned __int8)(v3->it64 >> 47))) & 0xF) == 0 && v3->u64 != -1i64 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 276, "tt != 0 || ((o)->it64 == -1)") )
      __debugbreak();
  }
  return (unsigned int)v5;
}

/*
==============
lua_typename
==============
*/
const char *lua_typename(lua_State *L, int t)
{
  return lj_obj_typename[t + 1];
}

/*
==============
lua_equal
==============
*/
unsigned __int64 lua_equal(lua_State *L, int idx1, int idx2)
{
  const TValue *v7; 
  __int64 v9; 
  __int64 v11; 
  bool v12; 
  int v13; 
  unsigned __int64 result; 
  __int64 u64; 
  __int64 v17; 
  const TValue *v18; 

  _RSI = index2adr(L, idx1);
  v7 = index2adr(L, idx2);
  _RBX = (__int64 *)v7;
  v9 = _RSI->it64 >> 47;
  if ( (unsigned int)v9 <= 0xFFFFFFF2 && (unsigned int)(v7->it64 >> 47) <= 0xFFFFFFF2 )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    if ( (unsigned int)v9 >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    __asm { vmovsd  xmm6, qword ptr [rsi] }
    v11 = *_RBX >> 47;
    v12 = (_DWORD)v11 == -14;
    if ( (unsigned int)v11 >= 0xFFFFFFF2 )
    {
      v13 = j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))");
      v12 = v13 == 0;
      if ( v13 )
        __debugbreak();
    }
    __asm
    {
      vucomisd xmm6, qword ptr [rbx]
      vmovaps xmm6, [rsp+38h+var_18]
    }
    return v12;
  }
  u64 = v7->u64;
  v17 = v7->it64 >> 47;
  if ( (_DWORD)v9 != (_DWORD)v17 )
    return 0i64;
  if ( (unsigned int)v9 >= 0xFFFFFFFD )
  {
    if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 342, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
      __debugbreak();
    v18 = (const TValue *)(L->glref.ptr64 + 248);
    if ( _RSI != v18 )
    {
      if ( v18->u64 != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 342, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
        __debugbreak();
      if ( _RBX != (__int64 *)(L->glref.ptr64 + 248) )
        return 1i64;
    }
    return 0i64;
  }
  if ( _RSI->u64 == u64 )
    return 1i64;
  if ( (unsigned int)v9 > 0xFFFFFFF4 )
    return 0i64;
  if ( (unsigned int)(v17 + 4) <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 352, "((((uint32_t)((o2)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
    __debugbreak();
  if ( (unsigned int)(_RSI->it64 >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 352, "((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
    __debugbreak();
  result = (unsigned __int64)j_lj_meta_equal(L, (GCobj *)(_RSI->u64 & 0x7FFFFFFFFFFFi64), (GCobj *)(*_RBX & 0x7FFFFFFFFFFFi64), 0);
  if ( result > 1 )
  {
    L->top = (TValue *)(result + 16);
    j_lj_vm_call(L, result, 2i64);
    L->top -= 3;
    return (unsigned int)(L->top[2].it64 >> 47) < 0xFFFFFFFE;
  }
  return result;
}

/*
==============
lua_rawequal
==============
*/
int lua_rawequal(lua_State *L, int idx1, int idx2)
{
  const TValue *v5; 
  const TValue *v6; 
  const TValue *v7; 

  v5 = index2adr(L, idx1);
  v6 = index2adr(L, idx2);
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 328, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  v7 = (const TValue *)(L->glref.ptr64 + 248);
  if ( v5 == v7 )
    return 0;
  if ( v7->u64 != -1i64 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 328, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
      __debugbreak();
  }
  if ( v6 == (const TValue *)(L->glref.ptr64 + 248) )
    return 0;
  else
    return j_lj_obj_equal(v5, v6);
}

/*
==============
lua_lessthan
==============
*/
TValue *lua_lessthan(lua_State *L, int idx1, int idx2)
{
  const TValue *v8; 
  __int64 v9; 
  TValue *result; 

  _RSI = index2adr(L, idx1);
  _RBX = index2adr(L, idx2);
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 368, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  v8 = (const TValue *)(L->glref.ptr64 + 248);
  if ( _RSI == v8 )
    return 0i64;
  if ( v8->u64 != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 368, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( _RBX == (const TValue *)(L->glref.ptr64 + 248) )
    return 0i64;
  v9 = _RSI->it64 >> 47;
  if ( (unsigned int)v9 > 0xFFFFFFF2 || (unsigned int)(_RBX->it64 >> 47) > 0xFFFFFFF2 )
  {
    result = j_lj_meta_comp(L, _RSI, _RBX, 0);
    if ( (unsigned __int64)result > 1 )
    {
      L->top = result + 2;
      j_lj_vm_call(L, result, 2i64);
      L->top -= 3;
      return (TValue *)((unsigned int)(L->top[2].it64 >> 47) < 0xFFFFFFFE);
    }
  }
  else
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    if ( (unsigned int)v9 >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    __asm { vmovsd  xmm6, qword ptr [rsi] }
    if ( (unsigned int)(_RBX->it64 >> 47) >= 0xFFFFFFF2 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
        __debugbreak();
    }
    result = NULL;
    __asm
    {
      vcomisd xmm6, qword ptr [rbx]
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  return result;
}

/*
==============
lua_tonumber
==============
*/
long double lua_tonumber(lua_State *L, int idx)
{
  __int64 v4; 
  TValue o; 

  _RBX = index2adr(L, idx);
  v4 = _RBX->it64 >> 47;
  if ( (unsigned int)v4 > 0xFFFFFFF2 )
  {
    if ( (_DWORD)v4 == -5 && j_lj_strscan_num((GCstr *)(_RBX->u64 & 0x7FFFFFFFFFFFi64), &o) )
    {
      if ( (unsigned int)(o.it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 394, "(((uint32_t)((&tmp)->it64 >> 47)) < (~13u))") )
        __debugbreak();
      __asm { vmovsd  xmm0, qword ptr [rsp+28h+o] }
    }
    else
    {
      __asm { vxorpd  xmm0, xmm0, xmm0 }
    }
  }
  else
  {
    if ( (unsigned int)v4 >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    __asm { vmovsd  xmm0, qword ptr [rbx] }
  }
  return *(double *)&_XMM0;
}

/*
==============
lua_tointeger
==============
*/
__int64 lua_tointeger(lua_State *L, int idx)
{
  __int64 v3; 
  __int64 result; 
  TValue o; 

  _RAX = index2adr(L, idx);
  v3 = _RAX->it64 >> 47;
  if ( (unsigned int)v3 >= 0xFFFFFFF2 )
  {
    if ( (_DWORD)v3 == -5 && j_lj_strscan_num((GCstr *)(_RAX->u64 & 0x7FFFFFFFFFFFi64), &o) )
    {
      if ( (unsigned int)(o.it64 >> 47) >= 0xFFFFFFF2 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 453, "(((uint32_t)((&tmp)->it64 >> 47)) < (~13u))") )
          __debugbreak();
      }
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+28h+o]
        vcvttsd2si rax, xmm0
      }
    }
    else
    {
      return 0i64;
    }
  }
  else
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rax]
      vcvttsd2si rax, xmm0
    }
  }
  return result;
}

/*
==============
lua_toboolean
==============
*/
_BOOL8 lua_toboolean(lua_State *L, int idx)
{
  return (unsigned int)(index2adr(L, idx)->it64 >> 47) < 0xFFFFFFFE;
}

/*
==============
lua_tolstring
==============
*/
const char *lua_tolstring(lua_State *L, int idx, unsigned __int64 *len)
{
  signed __int64 u64; 
  __int64 v7; 
  TValue *v8; 
  __int64 v9; 

  u64 = index2adr(L, idx)->u64;
  if ( (unsigned int)(u64 >> 47) == -5 )
  {
    v7 = u64 & 0x7FFFFFFFFFFFi64;
LABEL_11:
    if ( len )
      *len = *(unsigned int *)(v7 + 16);
    return (const char *)(v7 + 24);
  }
  if ( (unsigned int)(u64 >> 47) <= 0xFFFFFFF2 )
  {
    if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
      j_lj_gc_step(L);
    v8 = index2adr_iw_check_index(L, idx);
    v7 = (__int64)j_lj_strfmt_number(L, v8);
    v8->u64 = v7 | 0xFFFD800000000000ui64;
    v9 = (__int64)(v7 | 0xFFFD800000000000ui64) >> 47;
    if ( (unsigned int)(v9 + 4) > 0xFFFFFFF6 && (~(_DWORD)v9 != *(unsigned __int8 *)((v7 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v7 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
    goto LABEL_11;
  }
  if ( len )
    *len = 0i64;
  return 0i64;
}

/*
==============
lua_objlen
==============
*/
unsigned __int64 lua_objlen(lua_State *L, int idx)
{
  TValue *v3; 
  TValue *v4; 
  __int64 u64; 
  __int64 v6; 
  unsigned __int64 v8; 
  __int64 v9; 

  v3 = index2adr_iw_check_index(L, idx);
  v4 = v3;
  u64 = v3->u64;
  v6 = v3->it64 >> 47;
  switch ( (_DWORD)v6 )
  {
    case 0xFFFFFFFB:
      return *(unsigned int *)((u64 & 0x7FFFFFFFFFFFi64) + 0x10);
    case 0xFFFFFFF4:
      return j_lj_tab_len((GCtab *)(u64 & 0x7FFFFFFFFFFFi64));
    case 0xFFFFFFF3:
      return *(unsigned int *)((u64 & 0x7FFFFFFFFFFFi64) + 0x18);
  }
  if ( (unsigned int)v6 > 0xFFFFFFF2 )
    return 0i64;
  v8 = (unsigned __int64)j_lj_strfmt_number(L, v3);
  v4->u64 = v8 | 0xFFFD800000000000ui64;
  v9 = (__int64)(v8 | 0xFFFD800000000000ui64) >> 47;
  if ( (unsigned int)(v9 + 4) > 0xFFFFFFF6 && (~(_DWORD)v9 != *(unsigned __int8 *)((v8 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v8 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  return *(unsigned int *)(v8 + 16);
}

/*
==============
lua_tocfunction
==============
*/
int (*lua_tocfunction(lua_State *L, int idx))(lua_State *)
{
  const TValue *v2; 

  v2 = index2adr(L, idx);
  if ( (unsigned int)(v2->it64 >> 47) == -9 && (unsigned int)**(unsigned __int8 **)((v2->u64 & 0x7FFFFFFFFFFFi64) + 0x20) - 95 <= 1 )
    return *(int (__fastcall **)(lua_State *))((v2->u64 & 0x7FFFFFFFFFFFi64) + 0x28);
  else
    return 0i64;
}

/*
==============
lua_touserdata
==============
*/
__int64 lua_touserdata(lua_State *L, int idx)
{
  signed __int64 u64; 

  u64 = index2adr(L, idx)->u64;
  if ( (unsigned int)(u64 >> 47) == -13 )
    return (u64 & 0x7FFFFFFFFFFFi64) + 48;
  if ( (unsigned int)(u64 >> 47) == -4 )
    return u64 & 0x7FFFFFFFFFFFi64;
  return 0i64;
}

/*
==============
lua_tothread
==============
*/
lua_State *lua_tothread(lua_State *L, int idx)
{
  signed __int64 u64; 
  lua_State *result; 

  u64 = index2adr(L, idx)->u64;
  result = NULL;
  if ( (unsigned int)(u64 >> 47) == -7 )
    return (lua_State *)(u64 & 0x7FFFFFFFFFFFi64);
  return result;
}

/*
==============
lua_topointer
==============
*/
const void *lua_topointer(lua_State *L, int idx)
{
  const TValue *v2; 

  v2 = index2adr(L, idx);
  return j_lj_obj_ptr(v2);
}

/*
==============
lua_pushnil
==============
*/
void lua_pushnil(lua_State *L)
{
  L->top->u64 = -1i64;
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_pushnumber
==============
*/

void __fastcall lua_pushnumber(lua_State *L, double n)
{
  TValue *v3; 

  _RAX = L->top;
  __asm { vmovsd  qword ptr [rax], xmm1 }
  v3 = L->top + 1;
  L->top = v3;
  if ( (unsigned __int64)v3 >= L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_pushinteger
==============
*/
void lua_pushinteger(lua_State *L, __int64 n)
{
  _RAX = L->top;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rdx
    vmovsd  qword ptr [rax], xmm0
  }
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_pushlstring
==============
*/
void lua_pushlstring(lua_State *L, const char *str, unsigned __int64 len)
{
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  v6 = (unsigned __int64)j_lj_str_new(L, str, len) | 0xFFFD800000000000ui64;
  v7 = v6 >> 47;
  L->top->u64 = v6;
  if ( (unsigned int)(v6 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v8 = v6 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_pushstring
==============
*/
void lua_pushstring(lua_State *L, const char *str)
{
  unsigned __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( str )
  {
    if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
      j_lj_gc_step(L);
    v4 = -1i64;
    do
      ++v4;
    while ( str[v4] );
    v5 = (unsigned __int64)j_lj_str_new(L, str, v4) | 0xFFFD800000000000ui64;
    v6 = v5 >> 47;
    L->top->u64 = v5;
    if ( (unsigned int)(v5 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v7 = v5 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v6 != *(unsigned __int8 *)(v7 + 9) || (*(_BYTE *)(v7 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
  }
  else
  {
    L->top->u64 = -1i64;
  }
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_pushvfstring
==============
*/
const char *lua_pushvfstring(lua_State *L, const char *fmt, char *argp)
{
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  return j_lj_strfmt_pushvf(L, fmt, argp);
}

/*
==============
lua_pushfstring
==============
*/
const char *lua_pushfstring(lua_State *L, const char *fmt, ...)
{
  char *fmta; 
  va_list argp; 

  va_start(argp, fmt);
  fmta = (char *)fmt;
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
  {
    j_lj_gc_step(L);
    fmt = fmta;
  }
  return j_lj_strfmt_pushvf(L, fmt, argp);
}

/*
==============
lua_pushcclosure
==============
*/
void lua_pushcclosure(lua_State *L, int (*f)(lua_State *), int n)
{
  signed __int64 v4; 
  TValue *base; 
  GCtab *gcptr64; 
  signed __int64 v8; 
  unsigned __int64 v9; 
  TValue *top; 
  TValue v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v4 = n;
  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  if ( v4 > L->top - L->base && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 741, "(n) <= (L->top - L->base)") )
    __debugbreak();
  base = L->base;
  if ( *(_BYTE *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 9) == 8 )
    gcptr64 = *(GCtab **)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x10);
  else
    gcptr64 = (GCtab *)L->env.gcptr64;
  v8 = v4;
  v9 = (unsigned __int64)j_lj_func_newC(L, v4, gcptr64);
  *(_QWORD *)(v9 + 40) = f;
  L->top -= v4;
  top = L->top;
  if ( (_DWORD)v4 )
  {
    do
    {
      --v8;
      LODWORD(v4) = v4 - 1;
      v11.u64 = (unsigned __int64)L->top[v8];
      *(TValue *)(v9 + v8 * 8 + 48) = v11;
      v12 = v11.it64 >> 47;
      if ( (unsigned int)(v11.it64 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v13 = v11.u64 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v12 != *(unsigned __int8 *)(v13 + 9) || (*(_BYTE *)(v13 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
    }
    while ( (_DWORD)v4 );
    top = L->top;
  }
  top->u64 = v9 | 0xFFFB800000000000ui64;
  v14 = (__int64)(v9 | 0xFFFB800000000000ui64) >> 47;
  if ( (unsigned int)(v14 + 4) > 0xFFFFFFF6 && (~(_DWORD)v14 != *(unsigned __int8 *)((v9 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v9 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  if ( (*(_BYTE *)(v9 + 8) & 3) == 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 748, "((((GCobj *)(fn)))->gch.marked & (0x01 | 0x02))") )
    __debugbreak();
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_pushboolean
==============
*/
void lua_pushboolean(lua_State *L, int b)
{
  L->top->u64 = ~(((b != 0) + 1i64) << 47);
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_pushlightuserdata
==============
*/
void lua_pushlightuserdata(lua_State *L, void *p)
{
  if ( (unsigned __int64)p >= 0x800000000000i64 )
    j_lj_err_msg(L, LJ_ERR_BADLU);
  L->top->u64 = (unsigned __int64)p | 0xFFFE000000000000ui64;
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_pushthread
==============
*/
_BOOL8 lua_pushthread(lua_State *L)
{
  TValue *top; 
  unsigned __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  top = L->top;
  v3 = (unsigned __int64)L | 0xFFFC800000000000ui64;
  v4 = (__int64)((unsigned __int64)L | 0xFFFC800000000000ui64) >> 47;
  top->u64 = v3;
  if ( (unsigned int)(v4 + 4) > 0xFFFFFFF6 )
  {
    v5 = v3 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v4 != *(unsigned __int8 *)(v5 + 9) || (*(_BYTE *)(v5 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
  return *(_QWORD *)(L->glref.ptr64 + 216) == (_QWORD)L;
}

/*
==============
lua_gettable
==============
*/
void lua_gettable(lua_State *L, int idx)
{
  const TValue *v3; 
  const TValue *v4; 
  TValue *top; 
  TValue *v6; 
  __int64 u64; 
  __int64 v8; 
  __int64 v9; 

  v3 = index2adr(L, idx);
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 845, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v3 == (const TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 845, "(t) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 845, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
    __debugbreak();
  v4 = j_lj_meta_tget(L, v3, (const TValue *)L->top - 1);
  top = L->top;
  if ( !v4 )
  {
    v6 = L->top;
    L->top = top + 2;
    j_lj_vm_call(L, v6, 2i64);
    L->top -= 3;
    top = L->top;
    v4 = top + 2;
  }
  u64 = v4->u64;
  top[-1].u64 = v4->u64;
  v8 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v9 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
}

/*
==============
lua_getfield
==============
*/
void lua_getfield(lua_State *L, int idx, const char *k)
{
  const TValue *v5; 
  unsigned __int64 v6; 
  signed __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  const TValue *v10; 
  TValue *v11; 
  TValue *top; 
  __int64 u64; 
  __int64 v14; 
  __int64 v15; 
  TValue ka; 

  v5 = index2adr(L, idx);
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 860, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v5 == (const TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 860, "(t) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 860, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
    __debugbreak();
  v6 = -1i64;
  do
    ++v6;
  while ( k[v6] );
  v7 = (unsigned __int64)j_lj_str_new(L, k, v6) | 0xFFFD800000000000ui64;
  ka.u64 = v7;
  v8 = v7 >> 47;
  if ( (unsigned int)(v7 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v9 = v7 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v10 = j_lj_meta_tget(L, v5, &ka);
  if ( v10 )
  {
    top = L->top;
  }
  else
  {
    v11 = L->top;
    L->top = v11 + 2;
    j_lj_vm_call(L, v11, 2i64);
    L->top -= 3;
    top = L->top;
    v10 = top + 2;
  }
  u64 = v10->u64;
  top->u64 = u64;
  v14 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v15 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v14 != *(unsigned __int8 *)(v15 + 9) || (*(_BYTE *)(v15 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_rawget
==============
*/
void lua_rawget(lua_State *L, int idx)
{
  const TValue *v3; 
  const TValue *v4; 
  __int64 u64; 
  __int64 v6; 
  __int64 v7; 

  v3 = index2adr(L, idx);
  if ( (unsigned int)(v3->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 876, "(((uint32_t)((t)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  if ( (unsigned int)(v3->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 877, "(((uint32_t)((t)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v4 = j_lj_tab_get(L, (GCtab *)(v3->u64 & 0x7FFFFFFFFFFFi64), (const TValue *)L->top - 1);
  u64 = v4->u64;
  L->top[-1].u64 = v4->u64;
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
}

/*
==============
lua_rawgeti
==============
*/
void lua_rawgeti(lua_State *L, int idx, int n)
{
  __int64 v3; 
  const TValue *v5; 
  __int64 v6; 
  const TValue *v7; 
  TValue *top; 
  __int64 u64; 
  __int64 v10; 
  __int64 v11; 

  v3 = n;
  v5 = index2adr(L, idx);
  if ( (unsigned int)(v5->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 883, "(((uint32_t)((t)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  if ( (unsigned int)(v5->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 884, "(((uint32_t)((t)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v6 = v5->it64 >> 47;
  if ( (unsigned int)v3 >= *(_DWORD *)((v5->u64 & 0x7FFFFFFFFFFFi64) + 0x30) )
  {
    if ( (_DWORD)v6 != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 884, "(((uint32_t)((t)->it64 >> 47)) == (~11u))") )
      __debugbreak();
    v7 = j_lj_tab_getinth((GCtab *)(v5->u64 & 0x7FFFFFFFFFFFi64), v3);
  }
  else
  {
    if ( (_DWORD)v6 != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 884, "(((uint32_t)((t)->it64 >> 47)) == (~11u))") )
      __debugbreak();
    v7 = (const TValue *)(*(_QWORD *)((v5->u64 & 0x7FFFFFFFFFFFi64) + 0x10) + 8 * v3);
  }
  top = L->top;
  if ( v7 )
  {
    u64 = v7->u64;
    top->u64 = v7->u64;
    v10 = u64 >> 47;
    if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v11 = u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
  }
  else
  {
    top->u64 = -1i64;
  }
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_createtable
==============
*/
void lua_createtable(lua_State *L, int narray, int nrec)
{
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  v6 = (unsigned __int64)j_lj_tab_new_ah(L, narray, nrec) | 0xFFFA000000000000ui64;
  v7 = v6 >> 47;
  L->top->u64 = v6;
  if ( (unsigned int)(v6 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v8 = v6 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_newuserdata
==============
*/
GCudata *lua_newuserdata(lua_State *L, unsigned __int64 size)
{
  TValue *base; 
  GCtab *gcptr64; 
  unsigned __int64 v6; 
  __int64 v7; 

  if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
    j_lj_gc_step(L);
  if ( size > 0x7FFFFF00 )
    j_lj_err_msg(L, LJ_ERR_UDATAOV);
  base = L->base;
  if ( *(_BYTE *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 9) == 8 )
    gcptr64 = *(GCtab **)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x10);
  else
    gcptr64 = (GCtab *)L->env.gcptr64;
  v6 = (unsigned __int64)j_lj_udata_new(L, size, gcptr64);
  v7 = (__int64)(v6 | 0xFFF9800000000000ui64) >> 47;
  L->top->u64 = v6 | 0xFFF9800000000000ui64;
  if ( (unsigned int)(v7 + 4) > 0xFFFFFFF6 && (~(_DWORD)v7 != *(unsigned __int8 *)((v6 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v6 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
  return (GCudata *)(v6 + 48);
}

/*
==============
lua_getmetatable
==============
*/
__int64 lua_getmetatable(lua_State *L, int idx)
{
  signed __int64 u64; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  u64 = index2adr(L, idx)->u64;
  v4 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) == -12 )
  {
    v5 = *(_QWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0x20);
  }
  else if ( (_DWORD)v4 == -13 )
  {
    v5 = *(_QWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0x20);
  }
  else
  {
    if ( (unsigned int)v4 > 0xFFFFFFF2 )
      v6 = ~(_DWORD)v4;
    else
      v6 = 13;
    v5 = *(_QWORD *)(L->glref.ptr64 + 8i64 * (unsigned int)(v6 + 20) + 384);
  }
  if ( !v5 )
    return 0i64;
  v8 = v5 | 0xFFFA000000000000ui64;
  v9 = v8 >> 47;
  L->top->u64 = v8;
  if ( (unsigned int)(v8 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v10 = v8 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v9 != *(unsigned __int8 *)(v10 + 9) || (*(_BYTE *)(v10 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
  return 1i64;
}

/*
==============
lua_getfenv
==============
*/
void lua_getfenv(lua_State *L, int idx)
{
  const TValue *v3; 
  __int64 u64; 
  __int64 v5; 
  __int64 v6; 
  TValue *top; 
  __int64 v8; 
  __int64 v9; 

  v3 = index2adr(L, idx);
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 926, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v3 == (const TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 926, "(o) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 926, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
    __debugbreak();
  u64 = v3->u64;
  v5 = v3->it64 >> 47;
  if ( (_DWORD)v5 == -9 || (_DWORD)v5 == -13 )
  {
    v6 = *(_QWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0x10) | 0xFFFA000000000000ui64;
    L->top->u64 = v6;
  }
  else
  {
    top = L->top;
    if ( (_DWORD)v5 != -7 )
    {
      top->u64 = -1i64;
      goto LABEL_18;
    }
    v6 = *(_QWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0x48) | 0xFFFA000000000000ui64;
    top->u64 = v6;
  }
  v8 = v6 >> 47;
  if ( (unsigned int)(v6 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v9 = v6 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
LABEL_18:
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
}

/*
==============
lua_settable
==============
*/
void lua_settable(lua_State *L, int idx)
{
  const TValue *v3; 
  TValue *v4; 
  TValue *top; 
  __int64 it64; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = index2adr(L, idx);
  if ( (__int64)(((char *)L->top - (char *)L->base) & 0xFFFFFFFFFFFFFFF8ui64) < 16 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1010, "(2) <= (L->top - L->base)") )
    __debugbreak();
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1011, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v3 == (const TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1011, "(t) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 1011, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
    __debugbreak();
  v4 = j_lj_meta_tset(L, v3, (const TValue *)L->top - 2);
  top = L->top;
  if ( v4 )
  {
    L->top = top - 2;
    it64 = top[-1].it64;
    v4->u64 = it64;
    v7 = it64 >> 47;
    if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v8 = it64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
  }
  else
  {
    v9 = top[-5].it64;
    top[2].u64 = v9;
    v10 = v9 >> 47;
    if ( (unsigned int)(v9 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v11 = v9 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    L->top = top + 3;
    j_lj_vm_call(L, top, 1i64);
    L->top -= 4;
  }
}

/*
==============
lua_setfield
==============
*/
void lua_setfield(lua_State *L, int idx, const char *k)
{
  const TValue *v5; 
  unsigned __int64 v6; 
  signed __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  TValue *v10; 
  TValue *top; 
  __int64 it64; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  TValue ka; 

  v5 = index2adr(L, idx);
  if ( (__int64)(((char *)L->top - (char *)L->base) & 0xFFFFFFFFFFFFFFF8ui64) < 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1032, "(1) <= (L->top - L->base)") )
    __debugbreak();
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1033, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v5 == (const TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1033, "(t) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 1033, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
    __debugbreak();
  v6 = -1i64;
  do
    ++v6;
  while ( k[v6] );
  v7 = (unsigned __int64)j_lj_str_new(L, k, v6) | 0xFFFD800000000000ui64;
  ka.u64 = v7;
  v8 = v7 >> 47;
  if ( (unsigned int)(v7 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v9 = v7 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v10 = j_lj_meta_tset(L, v5, &ka);
  top = L->top;
  if ( v10 )
  {
    L->top = top - 1;
    it64 = top[-1].it64;
    v10->u64 = it64;
    v13 = it64 >> 47;
    if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v14 = it64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v13 != *(unsigned __int8 *)(v14 + 9) || (*(_BYTE *)(v14 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
  }
  else
  {
    v15 = top[-5].it64;
    top[2].u64 = v15;
    v16 = v15 >> 47;
    if ( (unsigned int)(v15 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v17 = v15 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v16 != *(unsigned __int8 *)(v17 + 9) || (*(_BYTE *)(v17 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    L->top = top + 3;
    j_lj_vm_call(L, top, 1i64);
    L->top -= 3;
  }
}

/*
==============
lua_rawset
==============
*/
void lua_rawset(lua_State *L, int idx)
{
  GCtab *v4; 
  TValue *v5; 
  TValue *v6; 
  __int64 it64; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int8 marked; 
  unsigned __int64 ptr64; 
  char v12; 

  if ( (unsigned int)(index2adr_iw_check_index(L, idx)->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1051, "(((uint32_t)((index2adr_iw_check_index(L, idx))->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v4 = (GCtab *)(index2adr_iw_check_index(L, idx)->u64 & 0x7FFFFFFFFFFFi64);
  if ( (__int64)(((char *)L->top - (char *)L->base) & 0xFFFFFFFFFFFFFFF8ui64) < 16 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1054, "(2) <= (L->top - L->base)") )
    __debugbreak();
  v5 = L->top - 2;
  v6 = j_lj_tab_set(L, v4, v5);
  it64 = v5[1].it64;
  v8 = it64 >> 47;
  v6->u64 = it64;
  if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v9 = it64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  marked = v4->marked;
  if ( (marked & 4) != 0 )
  {
    ptr64 = L->glref.ptr64;
    if ( (marked & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
      __debugbreak();
    v12 = *(_BYTE *)(ptr64 + 65);
    if ( v12 == 5 || !v12 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
        __debugbreak();
    }
    v4->marked &= ~4u;
    v4->gclist.gcptr64 = *(_QWORD *)(ptr64 + 96);
    *(_QWORD *)(ptr64 + 96) = v4;
  }
  L->top = v5;
}

/*
==============
lua_rawseti
==============
*/
void lua_rawseti(lua_State *L, int idx, int n)
{
  __int64 v3; 
  GCtab *v6; 
  TValue *v7; 
  TValue *v8; 
  __int64 u64; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int8 marked; 
  unsigned __int64 ptr64; 
  char v14; 

  v3 = n;
  if ( (unsigned int)(index2adr_iw_check_index(L, idx)->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1065, "(((uint32_t)((index2adr_iw_check_index(L, idx))->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v6 = (GCtab *)(index2adr_iw_check_index(L, idx)->u64 & 0x7FFFFFFFFFFFi64);
  if ( (__int64)(((char *)L->top - (char *)L->base) & 0xFFFFFFFFFFFFFFF8ui64) < 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1068, "(1) <= (L->top - L->base)") )
    __debugbreak();
  if ( (unsigned int)v3 >= v6->asize )
    v7 = j_lj_tab_setinth(L, v6, v3);
  else
    v7 = (TValue *)(v6->array.ptr64 + 8 * v3);
  v8 = L->top - 1;
  u64 = v8->u64;
  v7->u64 = v8->u64;
  v10 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v11 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  if ( (unsigned int)(v7->it64 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((v7->u64 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
  {
    marked = v6->marked;
    if ( (marked & 4) != 0 )
    {
      ptr64 = L->glref.ptr64;
      if ( (marked & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
        __debugbreak();
      v14 = *(_BYTE *)(ptr64 + 65);
      if ( v14 == 5 || !v14 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
          __debugbreak();
      }
      v6->marked &= ~4u;
      v6->gclist.gcptr64 = *(_QWORD *)(ptr64 + 96);
      *(_QWORD *)(ptr64 + 96) = v6;
    }
  }
  L->top = v8;
}

/*
==============
lua_setmetatable
==============
*/
__int64 lua_setmetatable(lua_State *L, int idx)
{
  const TValue *v3; 
  TValue v4; 
  GCobj *v5; 
  __int64 u64; 
  _QWORD *ptr64; 
  __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  unsigned __int8 v12; 
  char v13; 

  v3 = index2adr(L, idx);
  if ( (__int64)(((char *)L->top - (char *)L->base) & 0xFFFFFFFFFFFFFFF8ui64) < 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1082, "(1) <= (L->top - L->base)") )
    __debugbreak();
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1083, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v3 == (const TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1083, "(o) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 1083, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
    __debugbreak();
  v4.u64 = L->top[-1].u64;
  if ( v4.u64 == -1i64 )
  {
    v5 = NULL;
  }
  else
  {
    if ( (unsigned int)(v4.it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1087, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
      __debugbreak();
    if ( (unsigned int)(L->top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1088, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
      __debugbreak();
    v5 = (GCobj *)(L->top[-1].u64 & 0x7FFFFFFFFFFFi64);
  }
  u64 = v3->u64;
  ptr64 = (_QWORD *)L->glref.ptr64;
  v8 = v3->it64 >> 47;
  if ( (_DWORD)v8 == -12 )
  {
    *(_QWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0x20) = v5;
    if ( v5 && (v5->gch.marked & 3) != 0 )
    {
      if ( (unsigned int)(v3->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1094, "(((uint32_t)((o)->it64 >> 47)) == (~11u))") )
        __debugbreak();
      if ( (*(_BYTE *)((v3->u64 & 0x7FFFFFFFFFFFi64) + 8) & 4) != 0 )
      {
        if ( (unsigned int)(v3->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1094, "(((uint32_t)((o)->it64 >> 47)) == (~11u))") )
          __debugbreak();
        v9 = v3->u64;
        v10 = L->glref.ptr64;
        v11 = v9 & 0x7FFFFFFFFFFFi64;
        v12 = *(_BYTE *)(v11 + 8);
        if ( ((v12 & 4) == 0 || (v12 & (unsigned __int8)~*(_BYTE *)(v10 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
          __debugbreak();
        v13 = *(_BYTE *)(v10 + 65);
        if ( v13 == 5 || !v13 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
            __debugbreak();
        }
        *(_BYTE *)(v11 + 8) &= ~4u;
        *(_QWORD *)(v11 + 24) = *(_QWORD *)(v10 + 96);
        *(_QWORD *)(v10 + 96) = v11;
      }
    }
  }
  else if ( (_DWORD)v8 == -13 )
  {
    *(_QWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0x20) = v5;
    if ( v5 && (v5->gch.marked & 3) != 0 )
    {
      if ( (unsigned int)(v3->it64 >> 47) != -13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1098, "(((uint32_t)((o)->it64 >> 47)) == (~12u))") )
        __debugbreak();
      if ( (*(_BYTE *)((v3->u64 & 0x7FFFFFFFFFFFi64) + 8) & 4) != 0 )
      {
        if ( (unsigned int)(v3->it64 >> 47) != -13 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1098, "(((uint32_t)((o)->it64 >> 47)) == (~12u))") )
          __debugbreak();
        j_lj_gc_barrierf((global_State *)L->glref.ptr64, (GCobj *)(v3->u64 & 0x7FFFFFFFFFFFi64), v5);
      }
    }
  }
  else if ( (unsigned int)(v8 + 3) <= 1 )
  {
    ptr64[70] = v5;
    ptr64[69] = v5;
  }
  else if ( (unsigned int)v8 > 0xFFFFFFF2 )
  {
    ptr64[(unsigned int)(19 - v8) + 48] = v5;
  }
  else
  {
    ptr64[81] = v5;
  }
  --L->top;
  return 1i64;
}

/*
==============
lua_setfenv
==============
*/
__int64 lua_setfenv(lua_State *L, int idx)
{
  const TValue *v3; 
  __int64 u64; 
  TValue *v5; 
  __int64 v6; 
  GCobj *v7; 

  v3 = index2adr(L, idx);
  if ( (__int64)(((char *)L->top - (char *)L->base) & 0xFFFFFFFFFFFFFFF8ui64) < 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1126, "(1) <= (L->top - L->base)") )
    __debugbreak();
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1127, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( v3 == (const TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1127, "(o) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 1127, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
    __debugbreak();
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1128, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  if ( (unsigned int)(L->top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1129, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  u64 = v3->u64;
  v5 = L->top - 1;
  v6 = v3->it64 >> 47;
  v7 = (GCobj *)(v5->u64 & 0x7FFFFFFFFFFFi64);
  if ( (((_DWORD)v6 + 13) & 0xFFFFFFFB) != 0 )
  {
    if ( (_DWORD)v6 != -7 )
    {
      L->top = v5;
      return 0i64;
    }
    *(_QWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0x48) = v7;
  }
  else
  {
    *(_QWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0x10) = v7;
  }
  if ( (v7->gch.marked & 3) != 0 )
  {
    if ( (unsigned int)(v3->it64 >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1140, "((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
      __debugbreak();
    if ( (*(_BYTE *)((v3->u64 & 0x7FFFFFFFFFFFi64) + 8) & 4) != 0 )
    {
      if ( (unsigned int)(v3->it64 >> 47) + 4 <= 0xFFFFFFF6 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1140, "((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
          __debugbreak();
      }
      j_lj_gc_barrierf((global_State *)L->glref.ptr64, (GCobj *)(v3->u64 & 0x7FFFFFFFFFFFi64), v7);
    }
  }
  --L->top;
  return 1i64;
}

/*
==============
lua_call
==============
*/
void lua_call(lua_State *L, int nargs, int nresults)
{
  unsigned __int8 status; 
  TValue *v7; 

  status = L->status;
  if ( status && status != 5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1177, "L->status == 0 || L->status == 5") )
    __debugbreak();
  if ( nargs + 1 > L->top - L->base && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1179, "(nargs+1) <= (L->top - L->base)") )
    __debugbreak();
  v7 = api_call_base(L, nargs);
  j_lj_vm_call(L, v7, (unsigned int)(nresults + 1));
}

/*
==============
lua_pcall
==============
*/
__int64 lua_pcall(lua_State *L, int nargs, int nresults, int errfunc)
{
  unsigned __int64 ptr64; 
  unsigned __int8 status; 
  char v10; 
  char *v11; 
  TValue *v12; 
  TValue *v13; 
  __int64 result; 

  ptr64 = L->glref.ptr64;
  status = L->status;
  v10 = *(_BYTE *)(ptr64 + 209) & 0xF0;
  if ( status && status != 5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1189, "L->status == 0 || L->status == 5") )
    __debugbreak();
  if ( nargs + 1 > L->top - L->base && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1191, "(nargs+1) <= (L->top - L->base)") )
    __debugbreak();
  if ( errfunc )
  {
    v12 = stkindex2adr(L, errfunc);
    if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1196, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
      __debugbreak();
    if ( v12 == (TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1196, "(o) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 1196, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
      __debugbreak();
    v11 = (char *)v12 - L->stack.ptr64;
  }
  else
  {
    v11 = NULL;
  }
  v13 = api_call_base(L, nargs);
  result = j_lj_vm_pcall(L, v13, (unsigned int)(nresults + 1), v11);
  if ( (_DWORD)result )
  {
    *(_BYTE *)(ptr64 + 209) &= 0xFu;
    *(_BYTE *)(ptr64 + 209) |= v10;
  }
  return result;
}

/*
==============
lua_cpcall
==============
*/
__int64 lua_cpcall(lua_State *L, int (*func)(lua_State *), void *ud)
{
  unsigned __int64 ptr64; 
  unsigned __int8 status; 
  char v8; 
  __int64 result; 

  ptr64 = L->glref.ptr64;
  status = L->status;
  v8 = *(_BYTE *)(ptr64 + 209) & 0xF0;
  if ( status && status != 5 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1222, "L->status == 0 || L->status == 5") )
    __debugbreak();
  result = j_lj_vm_cpcall(L, func, ud, cpcall);
  if ( (_DWORD)result )
  {
    *(_BYTE *)(ptr64 + 209) &= 0xFu;
    *(_BYTE *)(ptr64 + 209) |= v8;
  }
  return result;
}

/*
==============
lua_yield
==============
*/
__int64 lua_yield(lua_State *L, int nresults)
{
  __int64 v3; 
  unsigned __int64 cframe; 
  unsigned __int64 ptr64; 
  unsigned __int64 v6; 
  TValue *top; 
  char v8; 
  TValue *base; 
  TValue *v10; 
  int i; 
  __int64 u64; 
  __int64 v13; 
  __int64 v14; 
  __int64 result; 

  v3 = nresults;
  cframe = (unsigned __int64)L->cframe;
  if ( (cframe & 1) == 0 )
    j_lj_err_msg(L, LJ_ERR_CYIELD);
  ptr64 = L->glref.ptr64;
  v6 = cframe & 0xFFFFFFFFFFFFFFFCui64;
  top = L->top;
  v8 = *(_BYTE *)(ptr64 + 209);
  if ( (v8 & 0x10) != 0 )
  {
    *(_BYTE *)(ptr64 + 209) = v8 & 0xEF;
    top->u64 = *(unsigned int *)(v6 + 32);
    top[1].u64 = (unsigned __int64)j_lj_cont_hook;
    top[2].u64 = (unsigned __int64)L | 0xFFFC800000000000ui64;
    top[3].u64 = (char *)&top[3] - (char *)L->base + 10;
    L->base = top + 4;
    L->top = top + 4;
    j_lj_err_throw(L, 1);
  }
  base = L->base;
  v10 = &top[-v3];
  if ( v10 > base )
  {
    for ( i = v3 - 1; i >= 0; --i )
    {
      u64 = v10->u64;
      base->u64 = v10->u64;
      v13 = u64 >> 47;
      if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v14 = u64 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v13 != *(unsigned __int8 *)(v14 + 9) || (*(_BYTE *)(v14 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      ++base;
      ++v10;
    }
    L->top = base;
  }
  result = 0xFFFFFFFFi64;
  L->cframe = NULL;
  L->status = 1;
  return result;
}

/*
==============
lua_resume
==============
*/
__int64 lua_resume(lua_State *L, int nargs)
{
  unsigned __int8 status; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( L->cframe || (status = L->status, status > 1u) )
  {
    L->top = L->base;
    v5 = (unsigned __int64)j_lj_err_str(L, LJ_ERR_COSUSP) | 0xFFFD800000000000ui64;
    v6 = v5 >> 47;
    L->top->u64 = v5;
    if ( (unsigned int)(v5 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v7 = v5 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v6 != *(unsigned __int8 *)(v7 + 9) || (*(_BYTE *)(v7 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
      j_lj_state_growstack1(L);
    return 2i64;
  }
  else if ( status )
  {
    return j_lj_vm_resume(L);
  }
  else
  {
    api_call_base(L, nargs);
    return j_lj_vm_resume(L);
  }
}

/*
==============
lua_status
==============
*/
__int64 lua_status(lua_State *L)
{
  return L->status;
}

/*
==============
lua_gc
==============
*/
__int64 lua_gc(lua_State *L, int what, int data)
{
  unsigned __int64 ptr64; 
  unsigned int v4; 
  __int64 result; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 

  ptr64 = L->glref.ptr64;
  v4 = 0;
  switch ( what )
  {
    case 0:
      *(_QWORD *)(ptr64 + 56) = 0x800000000000i64;
      result = 0i64;
      break;
    case 1:
      v7 = *(_QWORD *)(ptr64 + 48);
      if ( data == -1 )
      {
        result = 0i64;
        *(_QWORD *)(ptr64 + 56) = v7 / 0x64 * *(unsigned int *)(ptr64 + 140);
      }
      else
      {
        *(_QWORD *)(ptr64 + 56) = v7;
        result = 0i64;
      }
      break;
    case 2:
      j_lj_gc_fullgc(L);
      result = 0i64;
      break;
    case 3:
      result = (unsigned int)(*(_QWORD *)(ptr64 + 48) >> 10);
      break;
    case 4:
      result = *(_DWORD *)(ptr64 + 48) & 0x3FF;
      break;
    case 5:
      v8 = *(_QWORD *)(ptr64 + 48);
      v9 = (__int64)data << 10;
      v10 = v8 - v9;
      if ( v9 > v8 )
        v10 = 0i64;
      *(_QWORD *)(ptr64 + 56) = v10;
      if ( v8 < v10 )
        goto LABEL_20;
      while ( j_lj_gc_step(L) <= 0 )
      {
        if ( *(_QWORD *)(ptr64 + 48) < *(_QWORD *)(ptr64 + 56) )
          return 0i64;
      }
      result = 1i64;
      break;
    case 6:
      result = *(unsigned int *)(ptr64 + 140);
      *(_DWORD *)(ptr64 + 140) = data;
      break;
    case 7:
      result = *(unsigned int *)(ptr64 + 136);
      *(_DWORD *)(ptr64 + 136) = data;
      break;
    case 9:
      LOBYTE(v4) = *(_QWORD *)(ptr64 + 56) != 0x800000000000i64;
      result = v4;
      break;
    default:
      v4 = -1;
LABEL_20:
      result = v4;
      break;
  }
  return result;
}

/*
==============
lua_next
==============
*/
__int64 lua_next(lua_State *L, int idx)
{
  const TValue *v3; 
  unsigned int v4; 
  TValue *top; 

  v3 = index2adr(L, idx);
  if ( (unsigned int)(v3->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 943, "(((uint32_t)((t)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  if ( (unsigned int)(v3->it64 >> 47) != -12 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 944, "(((uint32_t)((t)->it64 >> 47)) == (~11u))") )
      __debugbreak();
  }
  v4 = j_lj_tab_next(L, (GCtab *)(v3->u64 & 0x7FFFFFFFFFFFi64), L->top - 1);
  top = L->top;
  if ( v4 )
  {
    L->top = top + 1;
    if ( (unsigned __int64)&top[1] >= L->maxstack.ptr64 )
    {
      j_lj_state_growstack1(L);
      return v4;
    }
  }
  else
  {
    L->top = top - 1;
  }
  return v4;
}

/*
==============
lua_concat
==============
*/
void lua_concat(lua_State *L, int n)
{
  int v4; 
  TValue *v5; 
  TValue *top; 
  int v7; 
  TValue *v8; 
  __int64 it64; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( n > L->top - L->base && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 818, "(n) <= (L->top - L->base)") )
    __debugbreak();
  if ( n < 2 )
  {
    if ( !n )
    {
      v12 = (L->glref.ptr64 + 184) | 0xFFFD800000000000ui64;
      v13 = v12 >> 47;
      L->top->u64 = v12;
      if ( (unsigned int)(v12 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v14 = v12 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v13 != *(unsigned __int8 *)(v14 + 9) || (*(_BYTE *)(v14 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
        j_lj_state_growstack1(L);
    }
  }
  else
  {
    v4 = n - 1;
    while ( 1 )
    {
      v5 = j_lj_meta_cat(L, L->top - 1, -v4);
      top = L->top;
      if ( !v5 )
        break;
      v7 = v4 - (top - v5);
      L->top = v5 + 2;
      j_lj_vm_call(L, v5, 2i64);
      L->top -= 2;
      v8 = L->top;
      it64 = v8[1].it64;
      v8[-1].u64 = it64;
      v10 = it64 >> 47;
      if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v11 = it64 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      v4 = v7 - 1;
      if ( v4 <= 0 )
        return;
    }
    L->top = &top[-v4];
  }
}

/*
==============
lua_getallocf
==============
*/
void *(*lua_getallocf(lua_State *L, void **ud))(void *, void *, unsigned __int64, unsigned __int64)
{
  unsigned __int64 ptr64; 

  ptr64 = L->glref.ptr64;
  if ( ud )
    *ud = *(void **)(ptr64 + 24);
  return *(void *(__fastcall **)(void *, void *, unsigned __int64, unsigned __int64))(ptr64 + 16);
}

/*
==============
lua_setallocf
==============
*/
void lua_setallocf(lua_State *L, void *(*f)(void *, void *, unsigned __int64, unsigned __int64), void *ud)
{
  unsigned __int64 ptr64; 

  ptr64 = L->glref.ptr64;
  *(_QWORD *)(ptr64 + 24) = ud;
  *(_QWORD *)(ptr64 + 16) = f;
}

/*
==============
lua_setloadfilef
==============
*/
void lua_setloadfilef(lua_State *L, int (*f)(lua_State *, const char *), void *ud)
{
  unsigned __int64 ptr64; 

  ptr64 = L->glref.ptr64;
  *(_QWORD *)(ptr64 + 40) = ud;
  *(_QWORD *)(ptr64 + 32) = f;
}

/*
==============
lua_getupvalue
==============
*/
const char *lua_getupvalue(lua_State *L, int idx, int n)
{
  unsigned int v4; 
  const TValue *v5; 
  const char *result; 
  const char *v7; 
  signed __int64 u64; 
  __int64 v9; 
  __int64 v10; 
  TValue *tvp; 

  v4 = n - 1;
  v5 = index2adr(L, idx);
  result = j_lj_debug_uvnamev(v5, v4, &tvp);
  v7 = result;
  if ( result )
  {
    u64 = tvp->u64;
    L->top->u64 = tvp->u64;
    v9 = u64 >> 47;
    if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v10 = u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v9 != *(unsigned __int8 *)(v10 + 9) || (*(_BYTE *)(v10 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
      j_lj_state_growstack1(L);
    return v7;
  }
  return result;
}

/*
==============
lua_setupvalue
==============
*/
const char *lua_setupvalue(lua_State *L, int idx, int n)
{
  const TValue *v5; 
  const char *result; 
  const char *v7; 
  TValue *v8; 
  TValue *v9; 
  __int64 u64; 
  __int64 v11; 
  __int64 v12; 
  TValue *tvp; 

  v5 = index2adr(L, idx);
  if ( (__int64)(((char *)L->top - (char *)L->base) & 0xFFFFFFFFFFFFFFF8ui64) < 8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1150, "(1) <= (L->top - L->base)") )
    __debugbreak();
  result = j_lj_debug_uvnamev(v5, n - 1, &tvp);
  v7 = result;
  if ( result )
  {
    v8 = --L->top;
    v9 = tvp;
    u64 = v8->u64;
    tvp->u64 = v8->u64;
    v11 = u64 >> 47;
    if ( (unsigned int)(v11 + 4) > 0xFFFFFFF6 )
    {
      v12 = v9->u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v11 != *(unsigned __int8 *)(v12 + 9) || (*(_BYTE *)(v12 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    if ( (unsigned int)((signed __int64)L->top->u64 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((L->top->u64 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 )
    {
      if ( (unsigned int)(v5->it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1155, "(((uint32_t)((f)->it64 >> 47)) == (~8u))") )
        __debugbreak();
      if ( (*(_BYTE *)((v5->u64 & 0x7FFFFFFFFFFFi64) + 8) & 4) != 0 )
      {
        if ( (unsigned int)((signed __int64)L->top->u64 >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1155, "((((uint32_t)((L->top)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
          __debugbreak();
        if ( (unsigned int)(v5->it64 >> 47) != -9 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 1155, "(((uint32_t)((f)->it64 >> 47)) == (~8u))") )
            __debugbreak();
        }
        j_lj_gc_barrierf((global_State *)L->glref.ptr64, (GCobj *)(v5->u64 & 0x7FFFFFFFFFFFi64), (GCobj *)(L->top->u64 & 0x7FFFFFFFFFFFi64));
      }
    }
    return v7;
  }
  return result;
}

/*
==============
lua_upvalueid
==============
*/
__int64 lua_upvalueid(lua_State *L, int idx, int n)
{
  __int64 v3; 
  unsigned __int64 v6; 

  v3 = n;
  if ( (unsigned int)(index2adr(L, idx)->it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 966, "(((uint32_t)((index2adr(L, idx))->it64 >> 47)) == (~8u))") )
    __debugbreak();
  v6 = index2adr(L, idx)->u64 & 0x7FFFFFFFFFFFi64;
  if ( (int)v3 - 1 >= (unsigned int)*(unsigned __int8 *)(v6 + 0xB) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 968, "(uint32_t)n < fn->l.nupvalues") )
    __debugbreak();
  if ( *(_BYTE *)(v6 + 10) )
    return v6 + 8 * v3 + 40;
  else
    return *(_QWORD *)(v6 + 8 * v3 + 32);
}

/*
==============
lua_upvaluejoin
==============
*/
void lua_upvaluejoin(lua_State *L, int idx1, int n1, int idx2, int n2)
{
  __int64 v6; 
  GCobj *v9; 
  unsigned __int64 v10; 
  GCobj *v11; 

  v6 = n1;
  if ( (unsigned int)(index2adr(L, idx1)->it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 975, "(((uint32_t)((index2adr(L, idx1))->it64 >> 47)) == (~8u))") )
    __debugbreak();
  v9 = (GCobj *)(index2adr(L, idx1)->u64 & 0x7FFFFFFFFFFFi64);
  if ( (unsigned int)(index2adr(L, idx2)->it64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 976, "(((uint32_t)((index2adr(L, idx2))->it64 >> 47)) == (~8u))") )
    __debugbreak();
  v10 = index2adr(L, idx2)->u64 & 0x7FFFFFFFFFFFi64;
  if ( (v9->gch.unused1 || (int)v6 - 1 >= (unsigned int)v9->gch.unused2) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 978, "((fn1)->c.ffid == 0) && (uint32_t)n1 < fn1->l.nupvalues") )
    __debugbreak();
  if ( (*(_BYTE *)(v10 + 10) || n2 - 1 >= (unsigned int)*(unsigned __int8 *)(v10 + 11)) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 979, "((fn2)->c.ffid == 0) && (uint32_t)n2 < fn2->l.nupvalues") )
    __debugbreak();
  v11 = *(GCobj **)(v10 + 8i64 * n2 + 32);
  *(&v9->gch.metatable.gcptr64 + v6) = (unsigned __int64)v11;
  if ( (v11->gch.marked & 3) != 0 && (v9->gch.marked & 4) != 0 )
    j_lj_gc_barrierf((global_State *)L->glref.ptr64, v9, v11);
}

/*
==============
lua_version
==============
*/
const long double *lua_version(lua_State *L)
{
  return &version;
}

/*
==============
lua_copy
==============
*/
void lua_copy(lua_State *L, int fromidx, int toidx)
{
  const TValue *v5; 

  v5 = index2adr(L, fromidx);
  copy_slot(L, v5, toidx);
}

/*
==============
lua_tonumberx
==============
*/
long double lua_tonumberx(lua_State *L, int idx, int *ok)
{
  __int64 u64; 
  __int64 v7; 
  TValue o; 

  _RDI = index2adr(L, idx);
  u64 = _RDI->u64;
  v7 = _RDI->it64 >> 47;
  if ( (unsigned int)v7 > 0xFFFFFFF2 )
  {
    if ( (_DWORD)v7 == -5 && j_lj_strscan_num((GCstr *)(u64 & 0x7FFFFFFFFFFFi64), &o) )
    {
      if ( ok )
        *ok = 1;
      if ( (unsigned int)(o.it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 408, "(((uint32_t)((&tmp)->it64 >> 47)) < (~13u))") )
        __debugbreak();
      __asm { vmovsd  xmm0, qword ptr [rsp+28h+o] }
    }
    else
    {
      if ( ok )
        *ok = 0;
      __asm { vxorpd  xmm0, xmm0, xmm0 }
    }
  }
  else
  {
    if ( ok )
    {
      *ok = 1;
      u64 = _RDI->u64;
    }
    if ( (unsigned int)(u64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    __asm { vmovsd  xmm0, qword ptr [rdi] }
  }
  return *(double *)&_XMM0;
}

/*
==============
lua_tointegerx
==============
*/
__int64 lua_tointegerx(lua_State *L, int idx, int *ok)
{
  __int64 v5; 
  __int64 result; 
  TValue o; 

  _RAX = index2adr(L, idx);
  v5 = _RAX->it64 >> 47;
  if ( (unsigned int)v5 < 0xFFFFFFF2 )
  {
    __asm { vmovsd  xmm0, qword ptr [rax] }
LABEL_9:
    if ( ok )
      *ok = 1;
    __asm { vcvttsd2si rax, xmm0 }
    return result;
  }
  if ( (_DWORD)v5 == -5 && j_lj_strscan_num((GCstr *)(_RAX->u64 & 0x7FFFFFFFFFFFi64), &o) )
  {
    if ( (unsigned int)(o.it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 481, "(((uint32_t)((&tmp)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    __asm { vmovsd  xmm0, qword ptr [rsp+28h+o] }
    goto LABEL_9;
  }
  if ( ok )
    *ok = 0;
  return 0i64;
}

/*
==============
lua_isyieldable
==============
*/
__int64 lua_isyieldable(lua_State *L)
{
  return (__int64)L->cframe & 1;
}

/*
==============
luaL_checkstack
==============
*/
void luaL_checkstack(lua_State *L, int size, const char *msg)
{
  if ( size > 8000 || size + L->top - L->base > 8000 )
    j_lj_err_callerv(L, LJ_ERR_STKOVM, msg);
  if ( size > 0 && (signed __int64)(L->maxstack.ptr64 - (unsigned __int64)L->top) <= 8i64 * (unsigned int)size )
    j_lj_state_growstack(L, size);
}

/*
==============
luaL_checktype
==============
*/
void luaL_checktype(lua_State *L, int idx, int tt)
{
  const TValue *v6; 
  int v7; 
  __int64 u64; 

  v6 = index2adr(L, idx);
  if ( (unsigned int)(v6->it64 >> 47) > 0xFFFFFFF2 )
  {
    if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 267, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
      __debugbreak();
    if ( v6 == (const TValue *)(L->glref.ptr64 + 248) )
    {
      v7 = -1;
    }
    else
    {
      u64 = v6->u64;
      v7 = (0x75A0698042110ui64 >> (4 * ~(unsigned __int8)(v6->it64 >> 47))) & 0xF;
      if ( !v7 && u64 != -1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 276, "tt != 0 || ((o)->it64 == -1)") )
        __debugbreak();
    }
  }
  else
  {
    v7 = 3;
  }
  if ( v7 != tt )
    j_lj_err_argt(L, idx, tt);
}

/*
==============
luaL_checkany
==============
*/
void luaL_checkany(lua_State *L, int idx)
{
  if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 289, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
    __debugbreak();
  if ( index2adr(L, idx) == (const TValue *)(L->glref.ptr64 + 248) )
    j_lj_err_arg(L, idx, LJ_ERR_NOVAL);
}

/*
==============
luaL_checknumber
==============
*/
long double luaL_checknumber(lua_State *L, int idx)
{
  __int64 v5; 
  TValue o; 

  _RBX = index2adr(L, idx);
  v5 = _RBX->it64 >> 47;
  if ( (unsigned int)v5 > 0xFFFFFFF2 )
  {
    if ( (_DWORD)v5 != -5 || !j_lj_strscan_num((GCstr *)(_RBX->u64 & 0x7FFFFFFFFFFFi64), &o) )
      j_lj_err_argt(L, idx, 3);
    if ( (unsigned int)(o.it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 423, "(((uint32_t)((&tmp)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    __asm { vmovsd  xmm0, qword ptr [rsp+28h+o] }
  }
  else
  {
    if ( (unsigned int)v5 >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    __asm { vmovsd  xmm0, qword ptr [rbx] }
  }
  return *(double *)&_XMM0;
}

/*
==============
luaL_optnumber
==============
*/

long double __fastcall luaL_optnumber(lua_State *L, int idx, double def)
{
  __int64 u64; 
  __int64 v9; 
  TValue o; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  _RBX = index2adr(L, idx);
  u64 = _RBX->u64;
  v9 = _RBX->it64 >> 47;
  if ( (unsigned int)v9 > 0xFFFFFFF2 )
  {
    if ( u64 == -1 )
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    else
    {
      if ( (_DWORD)v9 != -5 || !j_lj_strscan_num((GCstr *)(u64 & 0x7FFFFFFFFFFFi64), &o) )
        j_lj_err_argt(L, idx, 3);
      if ( (unsigned int)(o.it64 >> 47) >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 436, "(((uint32_t)((&tmp)->it64 >> 47)) < (~13u))") )
        __debugbreak();
      __asm { vmovsd  xmm0, qword ptr [rsp+38h+o] }
    }
  }
  else
  {
    if ( (unsigned int)v9 >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
    __asm { vmovsd  xmm0, qword ptr [rbx] }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return *(double *)&_XMM0;
}

/*
==============
luaL_checkinteger
==============
*/
__int64 luaL_checkinteger(lua_State *L, int idx)
{
  __int64 v5; 
  __int64 result; 
  TValue o; 

  _RAX = index2adr(L, idx);
  v5 = _RAX->it64 >> 47;
  if ( (unsigned int)v5 >= 0xFFFFFFF2 )
  {
    if ( (_DWORD)v5 != -5 || !j_lj_strscan_num((GCstr *)(_RAX->u64 & 0x7FFFFFFFFFFFi64), &o) )
      j_lj_err_argt(L, idx, 3);
    if ( (unsigned int)(o.it64 >> 47) >= 0xFFFFFFF2 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 505, "(((uint32_t)((&tmp)->it64 >> 47)) < (~13u))") )
        __debugbreak();
    }
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+28h+o]
      vcvttsd2si rax, xmm0
    }
  }
  else
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rax]
      vcvttsd2si rax, xmm0
    }
  }
  return result;
}

/*
==============
luaL_optinteger
==============
*/
__int64 luaL_optinteger(lua_State *L, int idx, __int64 def)
{
  __int64 u64; 
  __int64 v8; 
  __int64 result; 
  TValue o; 

  _RAX = index2adr(L, idx);
  u64 = _RAX->u64;
  v8 = _RAX->it64 >> 47;
  if ( (unsigned int)v8 >= 0xFFFFFFF2 )
  {
    if ( u64 == -1 )
    {
      return def;
    }
    else
    {
      if ( (_DWORD)v8 != -5 || !j_lj_strscan_num((GCstr *)(u64 & 0x7FFFFFFFFFFFi64), &o) )
        j_lj_err_argt(L, idx, 3);
      if ( (unsigned int)(o.it64 >> 47) >= 0xFFFFFFF2 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 530, "(((uint32_t)((&tmp)->it64 >> 47)) < (~13u))") )
          __debugbreak();
      }
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+28h+o]
        vcvttsd2si rax, xmm0
      }
    }
  }
  else
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rax]
      vcvttsd2si rax, xmm0
    }
  }
  return result;
}

/*
==============
luaL_checklstring
==============
*/
const char *luaL_checklstring(lua_State *L, int idx, unsigned __int64 *len)
{
  signed __int64 u64; 
  __int64 v7; 
  TValue *v8; 
  __int64 v9; 

  u64 = index2adr(L, idx)->u64;
  if ( (unsigned int)(u64 >> 47) == -5 )
  {
    v7 = u64 & 0x7FFFFFFFFFFFi64;
  }
  else
  {
    if ( (unsigned int)(u64 >> 47) > 0xFFFFFFF2 )
      j_lj_err_argt(L, idx, 4);
    if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
      j_lj_gc_step(L);
    v8 = index2adr_iw_check_index(L, idx);
    v7 = (__int64)j_lj_strfmt_number(L, v8);
    v8->u64 = v7 | 0xFFFD800000000000ui64;
    v9 = (__int64)(v7 | 0xFFFD800000000000ui64) >> 47;
    if ( (unsigned int)(v9 + 4) > 0xFFFFFFF6 && (~(_DWORD)v9 != *(unsigned __int8 *)((v7 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v7 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
  }
  if ( len )
    *len = *(unsigned int *)(v7 + 16);
  return (const char *)(v7 + 24);
}

/*
==============
luaL_optlstring
==============
*/
const char *luaL_optlstring(lua_State *L, int idx, const char *def, unsigned __int64 *len)
{
  signed __int64 u64; 
  __int64 v9; 
  unsigned __int64 v10; 
  TValue *v12; 
  __int64 v13; 

  u64 = index2adr(L, idx)->u64;
  if ( (unsigned int)(u64 >> 47) == -5 )
  {
    v9 = u64 & 0x7FFFFFFFFFFFi64;
LABEL_20:
    if ( len )
      *len = *(unsigned int *)(v9 + 16);
    return (const char *)(v9 + 24);
  }
  if ( u64 != -1 )
  {
    if ( (unsigned int)(u64 >> 47) > 0xFFFFFFF2 )
      j_lj_err_argt(L, idx, 4);
    if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
      j_lj_gc_step(L);
    v12 = index2adr_iw_check_index(L, idx);
    v9 = (__int64)j_lj_strfmt_number(L, v12);
    v12->u64 = v9 | 0xFFFD800000000000ui64;
    v13 = (__int64)(v9 | 0xFFFD800000000000ui64) >> 47;
    if ( (unsigned int)(v13 + 4) > 0xFFFFFFF6 && (~(_DWORD)v13 != *(unsigned __int8 *)((v9 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v9 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
    goto LABEL_20;
  }
  if ( len )
  {
    if ( def )
    {
      v10 = -1i64;
      do
        ++v10;
      while ( def[v10] );
    }
    else
    {
      v10 = 0i64;
    }
    *len = v10;
  }
  return def;
}

/*
==============
luaL_checkoption
==============
*/
__int64 luaL_checkoption(lua_State *L, int idx, const char *def, const char *const *lst)
{
  signed __int64 u64; 
  __int64 v9; 
  TValue *v10; 
  __int64 v11; 
  const char *v12; 
  const char *v13; 
  __int64 v14; 
  signed __int64 v15; 
  int v16; 
  int v17; 

  u64 = index2adr(L, idx)->u64;
  if ( (unsigned int)(u64 >> 47) == -5 )
  {
    v9 = u64 & 0x7FFFFFFFFFFFi64;
    goto LABEL_11;
  }
  if ( (unsigned int)(u64 >> 47) <= 0xFFFFFFF2 )
  {
    if ( *(_QWORD *)(L->glref.ptr64 + 48) >= *(_QWORD *)(L->glref.ptr64 + 56) )
      j_lj_gc_step(L);
    v10 = index2adr_iw_check_index(L, idx);
    v9 = (__int64)j_lj_strfmt_number(L, v10);
    v10->u64 = v9 | 0xFFFD800000000000ui64;
    v11 = (__int64)(v9 | 0xFFFD800000000000ui64) >> 47;
    if ( (unsigned int)(v11 + 4) > 0xFFFFFFF6 && (~(_DWORD)v11 != *(unsigned __int8 *)((v9 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v9 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
LABEL_11:
    v12 = (const char *)(v9 + 24);
    if ( v9 != -24 )
      goto LABEL_13;
  }
  v12 = def;
  if ( !def )
    j_lj_err_argt(L, idx, 4);
LABEL_13:
  v13 = *lst;
  v14 = 0i64;
  if ( !*lst )
LABEL_22:
    j_lj_err_argv(L, idx, LJ_ERR_INVOPTM, v12);
  while ( 1 )
  {
    v15 = v12 - v13;
    do
    {
      v16 = (unsigned __int8)v13[v15];
      v17 = *(unsigned __int8 *)v13 - v16;
      if ( v17 )
        break;
      ++v13;
    }
    while ( v16 );
    if ( !v17 )
      return (unsigned int)v14;
    v13 = lst[++v14];
    if ( !v13 )
      goto LABEL_22;
  }
}

/*
==============
luaL_newmetatable
==============
*/
__int64 luaL_newmetatable(lua_State *L, const char *tname)
{
  unsigned __int64 v4; 
  GCtab *v5; 
  GCstr *v6; 
  TValue *v7; 
  TValue *v8; 
  signed __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  TValue *top; 
  unsigned __int8 marked; 
  unsigned __int64 ptr64; 
  char v15; 
  TValue *v17; 
  __int64 u64; 
  __int64 v19; 
  __int64 v20; 

  if ( (unsigned int)(*(__int64 *)(L->glref.ptr64 + 224) >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 773, "(((uint32_t)(((&(((global_State *)(void *)(L->glref).ptr64))->registrytv))->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v4 = -1i64;
  v5 = (GCtab *)(*(_QWORD *)(L->glref.ptr64 + 224) & 0x7FFFFFFFFFFFi64);
  do
    ++v4;
  while ( tname[v4] );
  v6 = j_lj_str_new(L, tname, v4);
  v7 = j_lj_tab_setstr(L, v5, v6);
  v8 = v7;
  if ( v7->u64 == -1i64 )
  {
    v9 = (unsigned __int64)j_lj_tab_new(L, 0, 1u) | 0xFFFA000000000000ui64;
    v8->u64 = v9;
    v10 = ~(unsigned int)(v9 >> 47);
    if ( (unsigned int)(v9 >> 47) + 4 <= 0xFFFFFFF6 || (v11 = v9 & 0x7FFFFFFFFFFFi64, v10 == *(unsigned __int8 *)((v9 & 0x7FFFFFFFFFFFi64) + 9)) && (*(_BYTE *)((v9 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) == 0 )
    {
      v11 = v9 & 0x7FFFFFFFFFFFi64;
    }
    else if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    {
      __debugbreak();
    }
    top = L->top;
    L->top = top + 1;
    top->u64 = v9;
    if ( (unsigned int)(v9 >> 47) + 4 > 0xFFFFFFF6 && (v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
      __debugbreak();
    marked = v5->marked;
    if ( (marked & 4) != 0 )
    {
      ptr64 = L->glref.ptr64;
      if ( (marked & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
        __debugbreak();
      v15 = *(_BYTE *)(ptr64 + 65);
      if ( v15 == 5 || !v15 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
          __debugbreak();
      }
      v5->marked &= ~4u;
      v5->gclist.gcptr64 = *(_QWORD *)(ptr64 + 96);
      *(_QWORD *)(ptr64 + 96) = v5;
    }
    return 1i64;
  }
  else
  {
    v17 = L->top;
    L->top = v17 + 1;
    u64 = v7->u64;
    v17->u64 = v7->u64;
    v19 = u64 >> 47;
    if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v20 = u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v19 != *(unsigned __int8 *)(v20 + 9) || (*(_BYTE *)(v20 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    return 0i64;
  }
}

/*
==============
luaL_getmetafield
==============
*/
__int64 luaL_getmetafield(lua_State *L, int idx, const char *field)
{
  signed __int64 u64; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  TValue *top; 
  unsigned __int64 v13; 
  GCstr *v14; 
  TValue *v15; 
  TValue v16; 
  __int64 v17; 
  __int64 v18; 

  u64 = index2adr(L, idx)->u64;
  v6 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) == -12 )
  {
    v7 = *(_QWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0x20);
  }
  else if ( (_DWORD)v6 == -13 )
  {
    v7 = *(_QWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0x20);
  }
  else
  {
    if ( (unsigned int)v6 > 0xFFFFFFF2 )
      v8 = ~(_DWORD)v6;
    else
      v8 = 13;
    v7 = *(_QWORD *)(L->glref.ptr64 + 8i64 * (unsigned int)(v8 + 20) + 384);
  }
  if ( !v7 )
    return 0i64;
  v9 = v7 | 0xFFFA000000000000ui64;
  v10 = v9 >> 47;
  L->top->u64 = v9;
  if ( (unsigned int)(v9 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v11 = v9 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  top = ++L->top;
  if ( (unsigned __int64)top >= L->maxstack.ptr64 )
  {
    j_lj_state_growstack1(L);
    top = L->top;
  }
  if ( (unsigned int)(top[-1].it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 913, "(((uint32_t)((L->top-1)->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v13 = -1i64;
  do
    ++v13;
  while ( field[v13] );
  v14 = j_lj_str_new(L, field, v13);
  v15 = (TValue *)j_lj_tab_getstr((GCtab *)(L->top[-1].u64 & 0x7FFFFFFFFFFFi64), v14);
  if ( !v15 || (v16.u64 = v15->u64, v15->u64 == -1i64) )
  {
    --L->top;
    return 0i64;
  }
  v17 = v16.it64 >> 47;
  L->top[-1].u64 = v16.u64;
  if ( (unsigned int)(v16.it64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v18 = v16.u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v17 != *(unsigned __int8 *)(v18 + 9) || (*(_BYTE *)(v18 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return 1i64;
}

/*
==============
luaL_testudata
==============
*/
__int64 luaL_testudata(lua_State *L, int idx, const char *tname)
{
  signed __int64 u64; 
  __int64 v6; 
  unsigned __int64 v7; 
  GCstr *v8; 
  const TValue *v9; 

  u64 = index2adr(L, idx)->u64;
  if ( (unsigned int)(u64 >> 47) != -13 )
    return 0i64;
  v6 = u64 & 0x7FFFFFFFFFFFi64;
  if ( (unsigned int)(*(__int64 *)(L->glref.ptr64 + 224) >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 989, "(((uint32_t)(((&(((global_State *)(void *)(L->glref).ptr64))->registrytv))->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v7 = -1i64;
  do
    ++v7;
  while ( tname[v7] );
  v8 = j_lj_str_new(L, tname, v7);
  v9 = j_lj_tab_getstr((GCtab *)(*(_QWORD *)(L->glref.ptr64 + 224) & 0x7FFFFFFFFFFFi64), v8);
  if ( v9 && (unsigned int)(v9->it64 >> 47) == -12 && (v9->u64 & 0x7FFFFFFFFFFFi64) == *(_QWORD *)(v6 + 32) )
    return v6 + 48;
  else
    return 0i64;
}

/*
==============
luaL_checkudata
==============
*/
__int64 luaL_checkudata(lua_State *L, int idx, const char *tname)
{
  signed __int64 u64; 
  __int64 v7; 
  unsigned __int64 v8; 
  GCstr *v9; 
  const TValue *v10; 

  u64 = index2adr(L, idx)->u64;
  if ( (unsigned int)(u64 >> 47) != -13 )
    goto LABEL_11;
  v7 = u64 & 0x7FFFFFFFFFFFi64;
  if ( (unsigned int)(*(__int64 *)(L->glref.ptr64 + 224) >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 989, "(((uint32_t)(((&(((global_State *)(void *)(L->glref).ptr64))->registrytv))->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v8 = -1i64;
  do
    ++v8;
  while ( tname[v8] );
  v9 = j_lj_str_new(L, tname, v8);
  v10 = j_lj_tab_getstr((GCtab *)(*(_QWORD *)(L->glref.ptr64 + 224) & 0x7FFFFFFFFFFFi64), v9);
  if ( !v10 || (unsigned int)(v10->it64 >> 47) != -12 || (v10->u64 & 0x7FFFFFFFFFFFi64) != *(_QWORD *)(v7 + 32) )
LABEL_11:
    j_lj_err_argtype(L, idx, tname);
  return v7 + 48;
}

/*
==============
luaL_setmetatable
==============
*/
void luaL_setmetatable(lua_State *L, const char *tname)
{
  j_lua_getfield(L, -10000, tname);
  j_lua_setmetatable(L, -2);
}

/*
==============
cpcall
==============
*/
TValue *cpcall(lua_State *L, int (*func)(lua_State *), void *ud)
{
  TValue *base; 
  GCtab *gcptr64; 
  unsigned __int64 v8; 
  TValue *top; 
  __int64 v10; 
  TValue *result; 

  base = L->base;
  if ( *(_BYTE *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 9) == 8 )
    gcptr64 = *(GCtab **)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0x10);
  else
    gcptr64 = (GCtab *)L->env.gcptr64;
  v8 = (unsigned __int64)j_lj_func_newC(L, 0, gcptr64);
  top = L->top;
  *(_QWORD *)(v8 + 40) = func;
  top->u64 = v8 | 0xFFFB800000000000ui64;
  v10 = (__int64)(v8 | 0xFFFB800000000000ui64) >> 47;
  if ( (unsigned int)(v10 + 4) > 0xFFFFFFF6 && (~(_DWORD)v10 != *(unsigned __int8 *)((v8 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v8 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  top[1].u64 = -1i64;
  if ( (unsigned __int64)ud >= 0x800000000000i64 )
    j_lj_err_msg(L, LJ_ERR_BADLU);
  result = top + 2;
  top[2].u64 = (unsigned __int64)ud | 0xFFFE000000000000ui64;
  *((_DWORD *)L->cframe + 20) = 1;
  L->top = top + 3;
  return result;
}

/*
==============
luaL_callmeta
==============
*/
__int64 luaL_callmeta(lua_State *L, int idx, const char *field)
{
  TValue *top; 
  const TValue *v6; 
  __int64 u64; 
  __int64 v8; 
  __int64 v9; 

  if ( !j_luaL_getmetafield(L, idx, field) )
    return 0i64;
  top = L->top;
  L->top = top - 1;
  top->u64 = -1i64;
  v6 = index2adr(L, idx);
  u64 = v6->u64;
  top[1].u64 = v6->u64;
  v8 = u64 >> 47;
  if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v9 = u64 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v8 != *(unsigned __int8 *)(v9 + 9) || (*(_BYTE *)(v9 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  L->top = top + 2;
  j_lj_vm_call(L, &top[1], 2i64);
  return 1i64;
}

/*
==============
api_call_base
==============
*/
TValue *api_call_base(lua_State *L, int nargs)
{
  TValue *top; 
  TValue *v4; 
  __int64 it64; 
  TValue *v6; 
  __int64 v7; 
  __int64 v8; 

  top = L->top;
  v4 = &top[-nargs];
  L->top = top + 1;
  if ( top > v4 )
  {
    do
    {
      it64 = top[-1].it64;
      v6 = top - 1;
      top->u64 = it64;
      v7 = it64 >> 47;
      if ( (unsigned int)(it64 >> 47) + 4 > 0xFFFFFFF6 )
      {
        v8 = it64 & 0x7FFFFFFFFFFFi64;
        if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
      }
      top = v6;
    }
    while ( v6 > v4 );
  }
  top->u64 = -1i64;
  return top + 1;
}

/*
==============
copy_slot
==============
*/
void copy_slot(lua_State *L, const TValue *f, int idx)
{
  unsigned __int64 v6; 
  GCobj *v7; 
  TValue *v8; 
  signed __int64 u64; 
  __int64 v10; 
  __int64 v11; 

  if ( idx == -10002 )
  {
    if ( (unsigned int)(f->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 217, "(((uint32_t)((f)->it64 >> 47)) == (~11u))") )
      __debugbreak();
    if ( (unsigned int)(f->it64 >> 47) != -12 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 219, "(((uint32_t)((f)->it64 >> 47)) == (~11u))") )
        __debugbreak();
    }
    L->env.gcptr64 = f->u64 & 0x7FFFFFFFFFFFi64;
    return;
  }
  if ( idx == -10001 )
  {
    v6 = L->base[-2].u64 & 0x7FFFFFFFFFFFi64;
    if ( *(_BYTE *)(v6 + 9) != 8 )
      j_lj_err_msg(L, LJ_ERR_NOENV);
    if ( (unsigned int)(f->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 224, "(((uint32_t)((f)->it64 >> 47)) == (~11u))") )
      __debugbreak();
    if ( (unsigned int)(f->it64 >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 225, "(((uint32_t)((f)->it64 >> 47)) == (~11u))") )
      __debugbreak();
    *(_QWORD *)(v6 + 16) = f->u64 & 0x7FFFFFFFFFFFi64;
    if ( (unsigned int)(f->it64 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((f->u64 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 && (*(_BYTE *)(v6 + 8) & 4) != 0 )
    {
      if ( (unsigned int)(f->it64 >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 226, "((((uint32_t)((f)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
        __debugbreak();
      v7 = (GCobj *)v6;
LABEL_43:
      j_lj_gc_barrierf((global_State *)L->glref.ptr64, v7, (GCobj *)(f->u64 & 0x7FFFFFFFFFFFi64));
    }
  }
  else
  {
    v8 = index2adr_iw_check_index(L, idx);
    if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 231, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
      __debugbreak();
    if ( v8 == (TValue *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 231, "(o) != (my_lua_assert((((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)), \"c:\\\\workspace\\\\iw8\\\\code_source\\\\external\\\\luajit\\\\2.1.0-beta3\\\\src\\\\lj_api.c\", 231, \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\", \"((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)\"), (&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val))") )
      __debugbreak();
    u64 = f->u64;
    v8->u64 = f->u64;
    v10 = u64 >> 47;
    if ( (unsigned int)(u64 >> 47) + 4 > 0xFFFFFFF6 )
    {
      v11 = u64 & 0x7FFFFFFFFFFFi64;
      if ( ~(_DWORD)v10 != *(unsigned __int8 *)(v11 + 9) || (*(_BYTE *)(v11 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
          __debugbreak();
      }
    }
    if ( idx < -10002 && (unsigned int)(f->it64 >> 47) + 4 > 0xFFFFFFF6 && (*(_BYTE *)((f->u64 & 0x7FFFFFFFFFFFi64) + 8) & 3) != 0 && (*(_BYTE *)((L->base[-2].u64 & 0x7FFFFFFFFFFFi64) + 8) & 4) != 0 )
    {
      if ( (unsigned int)(f->it64 >> 47) + 4 <= 0xFFFFFFF6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 234, "((((uint32_t)((f)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1)))") )
        __debugbreak();
      v7 = (GCobj *)(L->base[-2].u64 & 0x7FFFFFFFFFFFi64);
      goto LABEL_43;
    }
  }
}

/*
==============
index2adr
==============
*/
TValue *index2adr(lua_State *L, int idx)
{
  __int64 v2; 
  TValue *result; 
  unsigned __int64 ptr64; 
  signed __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  TValue *base; 
  __int64 v10; 
  unsigned __int64 v11; 
  signed __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = idx;
  if ( idx <= 0 )
  {
    if ( idx <= -10000 )
    {
      if ( idx == -10002 )
      {
        ptr64 = L->glref.ptr64;
        v6 = L->env.gcptr64 | 0xFFFA000000000000ui64;
        v7 = v6 >> 47;
        *(_QWORD *)(ptr64 + 232) = v6;
        if ( (unsigned int)(v6 >> 47) + 4 > 0xFFFFFFF6 )
        {
          v8 = v6 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
        return (TValue *)(ptr64 + 232);
      }
      else if ( idx == -10000 )
      {
        return (TValue *)(L->glref.ptr64 + 224);
      }
      else
      {
        base = L->base;
        v10 = base[-2].u64 & 0x7FFFFFFFFFFFi64;
        if ( (*(_BYTE *)(v10 + 9) != 8 || !*(_BYTE *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0xA)) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 67, "fn->c.gct == ~(~8u) && !((fn)->c.ffid == 0)") )
          __debugbreak();
        if ( (_DWORD)v2 == -10001 )
        {
          v11 = L->glref.ptr64;
          v12 = *(_QWORD *)(v10 + 16) | 0xFFFA000000000000ui64;
          v13 = v12 >> 47;
          *(_QWORD *)(v11 + 232) = v12;
          if ( (unsigned int)(v12 >> 47) + 4 > 0xFFFFFFF6 )
          {
            v14 = v12 & 0x7FFFFFFFFFFFi64;
            if ( ~(_DWORD)v13 != *(unsigned __int8 *)(v14 + 9) || (*(_BYTE *)(v14 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
                __debugbreak();
            }
          }
          return (TValue *)(v11 + 232);
        }
        else if ( -10002 - (int)v2 > *(unsigned __int8 *)(v10 + 11) )
        {
          if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 74, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
            __debugbreak();
          return (TValue *)(L->glref.ptr64 + 248);
        }
        else
        {
          return (TValue *)(v10 + 8i64 * (-10002 - (int)v2 - 1) + 48);
        }
      }
    }
    else
    {
      if ( (!idx || -idx > L->top - L->base) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 57, "idx != 0 && -idx <= L->top - L->base") )
        __debugbreak();
      return &L->top[v2];
    }
  }
  else
  {
    result = &L->base[idx - 1];
    if ( result >= L->top )
    {
      if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 55, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
          __debugbreak();
      }
      return (TValue *)(L->glref.ptr64 + 248);
    }
  }
  return result;
}

/*
==============
index2adr_iw_check_index
==============
*/
TValue *index2adr_iw_check_index(lua_State *L, int idx)
{
  __int64 v2; 
  TValue *result; 
  unsigned __int64 ptr64; 
  signed __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  TValue *base; 
  __int64 v10; 
  unsigned __int64 v11; 
  signed __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = idx;
  if ( idx <= 0 )
  {
    if ( idx <= -10000 )
    {
      if ( idx == -10002 )
      {
        ptr64 = L->glref.ptr64;
        v6 = L->env.gcptr64 | 0xFFFA000000000000ui64;
        v7 = v6 >> 47;
        *(_QWORD *)(ptr64 + 232) = v6;
        if ( (unsigned int)(v6 >> 47) + 4 > 0xFFFFFFF6 )
        {
          v8 = v6 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
        return (TValue *)(ptr64 + 232);
      }
      else if ( idx == -10000 )
      {
        return (TValue *)(L->glref.ptr64 + 224);
      }
      else
      {
        base = L->base;
        v10 = base[-2].u64 & 0x7FFFFFFFFFFFi64;
        if ( (*(_BYTE *)(v10 + 9) != 8 || !*(_BYTE *)((base[-2].u64 & 0x7FFFFFFFFFFFi64) + 0xA)) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 95, "fn->c.gct == ~(~8u) && !((fn)->c.ffid == 0)") )
          __debugbreak();
        if ( (_DWORD)v2 == -10001 )
        {
          v11 = L->glref.ptr64;
          v12 = *(_QWORD *)(v10 + 16) | 0xFFFA000000000000ui64;
          v13 = v12 >> 47;
          *(_QWORD *)(v11 + 232) = v12;
          if ( (unsigned int)(v12 >> 47) + 4 > 0xFFFFFFF6 )
          {
            v14 = v12 & 0x7FFFFFFFFFFFi64;
            if ( ~(_DWORD)v13 != *(unsigned __int8 *)(v14 + 9) || (*(_BYTE *)(v14 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
                __debugbreak();
            }
          }
          return (TValue *)(v11 + 232);
        }
        else if ( -10002 - (int)v2 > *(unsigned __int8 *)(v10 + 11) )
        {
          if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 102, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
            __debugbreak();
          return (TValue *)(L->glref.ptr64 + 248);
        }
        else
        {
          return (TValue *)(v10 + 8i64 * (-10002 - (int)v2 - 1) + 48);
        }
      }
    }
    else
    {
      if ( (!idx || -idx > L->top - L->base) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 85, "idx != 0 && -idx <= L->top - L->base") )
        __debugbreak();
      return &L->top[v2];
    }
  }
  else
  {
    result = &L->base[idx - 1];
    if ( result >= L->top )
    {
      if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 83, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
          __debugbreak();
      }
      return (TValue *)(L->glref.ptr64 + 248);
    }
  }
  return result;
}

/*
==============
stkindex2adr
==============
*/
TValue *stkindex2adr(lua_State *L, int idx)
{
  __int64 v2; 
  TValue *result; 

  v2 = idx;
  if ( idx <= 0 )
  {
    if ( (!idx || -idx > L->top - L->base) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 114, "idx != 0 && -idx <= L->top - L->base") )
      __debugbreak();
    return &L->top[v2];
  }
  else
  {
    result = &L->base[idx - 1];
    if ( result >= L->top )
    {
      if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 )
      {
        if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_api.c", 111, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
          __debugbreak();
      }
      return (TValue *)(L->glref.ptr64 + 248);
    }
  }
  return result;
}

