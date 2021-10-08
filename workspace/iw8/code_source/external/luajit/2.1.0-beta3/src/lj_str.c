/*
==============
lj_str_cmp
==============
*/
__int64 lj_str_cmp(GCstr *a, GCstr *b)
{
  unsigned int len; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 result; 
  int v10; 
  unsigned __int32 v11; 
  unsigned __int32 v12; 

  len = a->len;
  v4 = b->len;
  v5 = v4;
  if ( len <= v4 )
    v5 = a->len;
  v6 = 0i64;
  if ( !v5 )
    return len - v4;
  while ( 1 )
  {
    v7 = *(_DWORD *)((char *)&a[1].nextgc.gcptr64 + v6);
    v8 = *(_DWORD *)((char *)&b[1].nextgc.gcptr64 + v6);
    if ( v7 != v8 )
      break;
    v6 = (unsigned int)(v6 + 4);
    if ( (unsigned int)v6 >= v5 )
      return len - v4;
  }
  v10 = v6 - v5;
  v11 = _byteswap_ulong(v7);
  v12 = _byteswap_ulong(v8);
  if ( v10 >= -3 )
  {
    v11 >>= 8 * v10 + 32;
    v12 >>= 8 * v10 + 32;
    if ( v11 == v12 )
      return len - v4;
  }
  result = 1i64;
  if ( v11 < v12 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
lj_str_find
==============
*/
const char *lj_str_find(const char *s, const char *p, unsigned int slen, unsigned int plen)
{
  const char *v5; 
  int v7; 
  unsigned int v8; 
  unsigned int v9; 
  char *v10; 
  char *v11; 
  const char *v12; 
  int v13; 
  bool v14; 

  v5 = s;
  if ( plen <= slen )
  {
    if ( !plen )
      return s;
    v7 = *(unsigned __int8 *)p;
    v8 = plen - 1;
    v9 = slen - (plen - 1);
    if ( v9 )
    {
      do
      {
        v10 = (char *)memchr_0(v5, v7, v9);
        v11 = v10;
        if ( !v10 )
          break;
        v12 = v10 + 1;
        if ( !memcmp_0(v10 + 1, p + 1, v8) )
          return v11;
        v13 = (_DWORD)v5 - (_DWORD)v12;
        v14 = v13 + v9 == 0;
        v9 += v13;
        v5 = v12;
      }
      while ( !v14 );
    }
  }
  return 0i64;
}

/*
==============
lj_str_haspattern
==============
*/
__int64 lj_str_haspattern(GCstr *s)
{
  GCstr *v1; 
  GCstr *v2; 
  __int64 gcptr64_low; 

  v1 = s + 1;
  v2 = (GCstr *)((char *)s + s->len + 24);
  if ( &s[1] >= v2 )
    return 0i64;
  while ( 1 )
  {
    gcptr64_low = LOBYTE(v1->nextgc.gcptr64);
    v1 = (GCstr *)((char *)v1 + 1);
    if ( (lj_char_bits[gcptr64_low + 1] & 4) != 0 )
    {
      if ( strchr_0("^$*+?.([%-", gcptr64_low) )
        break;
    }
    if ( v1 >= v2 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
lj_str_resize
==============
*/
void lj_str_resize(lua_State *L, unsigned int newmask)
{
  unsigned __int64 ptr64; 
  void *v4; 
  unsigned int v5; 
  __int64 *v6; 
  __int64 *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  ptr64 = L->glref.ptr64;
  if ( *(_BYTE *)(ptr64 + 65) != 3 && newmask < 0x3FFFFFF )
  {
    v4 = j_lj_mem_realloc(L, NULL, 0i64, 8i64 * (newmask + 1));
    memset_0(v4, 0, 8i64 * (newmask + 1));
    v5 = *(_DWORD *)(ptr64 + 8);
    if ( v5 != -1 )
    {
      do
      {
        v6 = *(__int64 **)(*(_QWORD *)ptr64 + 8i64 * v5);
        if ( v6 )
        {
          do
          {
            if ( *((_BYTE *)v6 + 9) != 4 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_str.c", 108, "(p)->gch.gct == ~(~4u)") )
                __debugbreak();
            }
            v7 = (__int64 *)*v6;
            v8 = newmask & *((_DWORD *)v6 + 3);
            *v6 = *((_QWORD *)v4 + v8);
            *((_QWORD *)v4 + v8) = v6;
            v6 = v7;
          }
          while ( v7 );
        }
        --v5;
      }
      while ( v5 != -1 );
      v5 = *(_DWORD *)(ptr64 + 8);
    }
    v9 = *(_QWORD *)ptr64;
    v10 = *(_QWORD *)(ptr64 + 24);
    v11 = 8i64 * (v5 + 1);
    *(_QWORD *)(ptr64 + 48) -= v11;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(ptr64 + 16))(v10, v9, v11, 0i64);
    *(_QWORD *)ptr64 = v4;
    *(_DWORD *)(ptr64 + 8) = newmask;
  }
}

/*
==============
lj_str_new
==============
*/
GCstr *lj_str_new(lua_State *L, const char *str, unsigned __int64 lenx)
{
  unsigned int v3; 
  unsigned __int64 ptr64; 
  int v7; 
  size_t v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 *v15; 
  __int64 v16; 
  int v17; 
  unsigned __int8 v18; 
  int v20; 
  char *v21; 
  __int64 v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned __int64 v25; 
  unsigned int v26; 
  void *v27; 
  unsigned int v28; 
  __int64 *v29; 
  __int64 *v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned __int8 v35; 
  int v36; 

  v3 = lenx;
  if ( lenx >= 0x7FFFFF00 )
    j_lj_err_msg(L, LJ_ERR_STROV);
  ptr64 = L->glref.ptr64;
  if ( (unsigned int)lenx < 4 )
  {
    if ( !(_DWORD)lenx )
      return (GCstr *)(ptr64 + 184);
    v7 = *(unsigned __int8 *)str;
    v8 = v3;
    v11 = (unsigned __int8)str[(unsigned __int64)v3 >> 1];
    v10 = (v3 ^ v11 ^ (unsigned __int8)str[v3 - 1]) - __ROL4__(v11, 14);
  }
  else
  {
    v7 = *(_DWORD *)str;
    v8 = v3;
    v9 = *(_DWORD *)&str[((unsigned __int64)v3 >> 1) - 2];
    v10 = (v3 ^ v9 ^ *(_DWORD *)&str[v3 - 4]) - __ROL4__(v9, 14);
    v11 = *(_DWORD *)&str[((unsigned __int64)v3 >> 2) - 1] + v9;
  }
  v12 = (v10 ^ v7) - __ROL4__(v10, 11);
  v13 = (v12 ^ v11) - __ROR4__(v12, 7);
  v14 = (v10 ^ v13) - __ROL4__(v13, 16);
  v36 = v14;
  v15 = *(__int64 **)(*(_QWORD *)ptr64 + 8i64 * (*(_DWORD *)(ptr64 + 8) & (unsigned int)v14));
  if ( !v15 )
    goto LABEL_24;
  if ( (((_WORD)str + (_WORD)v8 - 1) & 0xFFFu) <= 0xFFCui64 )
  {
    do
    {
      if ( *((_BYTE *)v15 + 9) != 4 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_str.c", 154, "(o)->gch.gct == ~(~4u)") )
        __debugbreak();
      if ( *((_DWORD *)v15 + 4) == v3 )
      {
        v16 = 0i64;
        if ( !v3 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_str.c", 44, "len > 0") )
          __debugbreak();
        while ( 1 )
        {
          v17 = *(_DWORD *)&str[v16] ^ *(_DWORD *)((char *)v15 + v16 + 24);
          if ( v17 )
            break;
          v16 = (unsigned int)(v16 + 4);
          if ( (unsigned int)v16 >= v3 )
            goto LABEL_17;
        }
        v20 = v16 - v3;
        if ( v20 >= -3 && !(v17 << (8 * v20 + 32)) )
        {
LABEL_17:
          v18 = *((_BYTE *)v15 + 8);
          if ( (v18 & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 )
            *((_BYTE *)v15 + 8) = v18 ^ 3;
          return (GCstr *)v15;
        }
      }
      v15 = (__int64 *)*v15;
    }
    while ( v15 );
    v14 = v36;
LABEL_24:
    v21 = (char *)j_lj_mem_realloc(L, NULL, 0i64, v8 + 25);
    v21[8] = *(_BYTE *)(ptr64 + 64) & 3;
    *(_WORD *)(v21 + 9) = 4;
    *((_DWORD *)v21 + 4) = v3;
    *((_DWORD *)v21 + 3) = v14;
    memcpy_0(v21 + 24, str, v8);
    v21[v8 + 24] = 0;
    v22 = (unsigned int)v14 & *(_DWORD *)(ptr64 + 8);
    *(_QWORD *)v21 = *(_QWORD *)(*(_QWORD *)ptr64 + 8 * v22);
    *(_QWORD *)(*(_QWORD *)ptr64 + 8 * v22) = v21;
    v23 = *(_DWORD *)(ptr64 + 12);
    v24 = *(_DWORD *)(ptr64 + 8);
    *(_DWORD *)(ptr64 + 12) = v23 + 1;
    if ( v23 > v24 )
    {
      v25 = L->glref.ptr64;
      v26 = 2 * v24 + 1;
      if ( *(_BYTE *)(v25 + 65) != 3 && v26 < 0x3FFFFFF )
      {
        v27 = j_lj_mem_realloc(L, NULL, 0i64, 8i64 * (v26 + 1));
        memset_0(v27, 0, 8i64 * (v26 + 1));
        v28 = *(_DWORD *)(v25 + 8);
        if ( v28 != -1 )
        {
          do
          {
            v29 = *(__int64 **)(*(_QWORD *)v25 + 8i64 * v28);
            if ( v29 )
            {
              do
              {
                if ( *((_BYTE *)v29 + 9) != 4 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_str.c", 108, "(p)->gch.gct == ~(~4u)") )
                  __debugbreak();
                v30 = (__int64 *)*v29;
                v31 = v26 & *((_DWORD *)v29 + 3);
                *v29 = *((_QWORD *)v27 + v31);
                *((_QWORD *)v27 + v31) = v29;
                v29 = v30;
              }
              while ( v30 );
            }
            --v28;
          }
          while ( v28 != -1 );
          v28 = *(_DWORD *)(v25 + 8);
        }
        v32 = *(_QWORD *)v25;
        v33 = *(_QWORD *)(v25 + 24);
        v34 = 8i64 * (v28 + 1);
        *(_QWORD *)(v25 + 48) -= v34;
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v25 + 16))(v33, v32, v34, 0i64);
        *(_DWORD *)(v25 + 8) = v26;
        *(_QWORD *)v25 = v27;
      }
    }
    return (GCstr *)v21;
  }
  while ( 1 )
  {
    if ( *((_BYTE *)v15 + 9) != 4 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_str.c", 164, "(o)->gch.gct == ~(~4u)") )
      __debugbreak();
    if ( *((_DWORD *)v15 + 4) == v3 && !memcmp_0(str, v15 + 3, v8) )
      break;
    v15 = (__int64 *)*v15;
    if ( !v15 )
      goto LABEL_24;
  }
  v35 = *((_BYTE *)v15 + 8);
  if ( (v35 & (unsigned __int8)~*(_BYTE *)(ptr64 + 64) & 3) != 0 )
    *((_BYTE *)v15 + 8) = v35 ^ 3;
  return (GCstr *)v15;
}

/*
==============
lj_str_free
==============
*/
void lj_str_free(global_State *g, GCstr *s)
{
  unsigned __int64 v2; 

  --g->strnum;
  v2 = s->len + 25i64;
  g->gc.total -= v2;
  g->allocf(g->allocd, s, v2, 0i64);
}

