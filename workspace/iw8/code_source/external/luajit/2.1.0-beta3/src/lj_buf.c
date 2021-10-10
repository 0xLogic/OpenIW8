/*
==============
lj_buf_need2
==============
*/
char *lj_buf_need2(SBuf *sb, unsigned int sz)
{
  if ( sz <= LODWORD(sb->e.ptr64) - LODWORD(sb->b.ptr64) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_buf.c", 33, "sz > ((MSize)((((char *)(void *)(((sb))->e).ptr64)) - (((char *)(void *)(((sb))->b).ptr64))))") )
    __debugbreak();
  if ( sz > 0x7FFFFF00 )
    j_lj_err_mem((lua_State *)sb->L.ptr64);
  buf_grow(sb, sz);
  return (char *)sb->b.ptr64;
}

/*
==============
lj_buf_more2
==============
*/
char *lj_buf_more2(SBuf *sb, unsigned int sz)
{
  int v4; 

  v4 = LODWORD(sb->p.ptr64) - LODWORD(sb->b.ptr64);
  if ( sz <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_buf.c", 43, "sz > ((MSize)((((char *)(void *)(((sb))->e).ptr64)) - (((char *)(void *)(((sb))->p).ptr64))))") )
    __debugbreak();
  if ( sz > 0x7FFFFF00 || v4 + sz > 0x7FFFFF00 )
    j_lj_err_mem((lua_State *)sb->L.ptr64);
  buf_grow(sb, v4 + sz);
  return (char *)sb->p.ptr64;
}

/*
==============
lj_buf_shrink
==============
*/
void lj_buf_shrink(lua_State *L, SBuf *sb)
{
  void *ptr64; 
  unsigned int v4; 
  unsigned __int64 v5; 
  unsigned int v6; 
  void *v7; 

  ptr64 = (void *)sb->b.ptr64;
  v4 = LODWORD(sb->e.ptr64) - (_DWORD)ptr64;
  if ( v4 > 0x40 )
  {
    v5 = (unsigned __int64)v4 >> 1;
    v6 = LODWORD(sb->p.ptr64) - (_DWORD)ptr64;
    v7 = j_lj_mem_realloc(L, ptr64, v4, v5);
    sb->b.ptr64 = (unsigned __int64)v7;
    sb->e.ptr64 = (unsigned __int64)v7 + v5;
    sb->p.ptr64 = (unsigned __int64)v7 + v6;
  }
}

/*
==============
lj_buf_tmp
==============
*/
char *lj_buf_tmp(lua_State *L, unsigned int sz)
{
  unsigned __int64 ptr64; 
  unsigned int v3; 

  ptr64 = L->glref.ptr64;
  v3 = *(_DWORD *)(ptr64 + 160) - *(_DWORD *)(ptr64 + 168);
  *(_QWORD *)(ptr64 + 176) = L;
  if ( sz <= v3 )
    return *(char **)(ptr64 + 168);
  else
    return j_lj_buf_need2((SBuf *)(ptr64 + 152), sz);
}

/*
==============
lj_buf_putmem
==============
*/
SBuf *lj_buf_putmem(SBuf *sb, const void *q, unsigned int len)
{
  size_t v5; 
  char *ptr64; 

  v5 = len;
  if ( len <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
    ptr64 = (char *)sb->p.ptr64;
  else
    ptr64 = j_lj_buf_more2(sb, len);
  memcpy_0(ptr64, q, v5);
  sb->p.ptr64 = (unsigned __int64)&ptr64[v5];
  return sb;
}

/*
==============
lj_buf_putchar
==============
*/
SBuf *lj_buf_putchar(SBuf *sb, int c)
{
  char v2; 
  char *ptr64; 

  v2 = c;
  if ( LODWORD(sb->e.ptr64) == LODWORD(sb->p.ptr64) )
    ptr64 = j_lj_buf_more2(sb, 1u);
  else
    ptr64 = (char *)sb->p.ptr64;
  *ptr64 = v2;
  sb->p.ptr64 = (unsigned __int64)(ptr64 + 1);
  return sb;
}

/*
==============
lj_buf_putstr
==============
*/
SBuf *lj_buf_putstr(SBuf *sb, GCstr *s)
{
  size_t len; 
  char *ptr64; 

  len = s->len;
  if ( (unsigned int)len <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
    ptr64 = (char *)sb->p.ptr64;
  else
    ptr64 = j_lj_buf_more2(sb, len);
  memcpy_0(ptr64, &s[1], len);
  sb->p.ptr64 = (unsigned __int64)&ptr64[len];
  return sb;
}

/*
==============
lj_buf_putstr_reverse
==============
*/
SBuf *lj_buf_putstr_reverse(SBuf *sb, GCstr *s)
{
  unsigned __int64 len; 
  char *ptr64; 
  unsigned __int64 v6; 
  char *v7; 
  unsigned __int64 v8; 
  char v9; 

  len = s->len;
  if ( (unsigned int)len <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
    ptr64 = (char *)sb->p.ptr64;
  else
    ptr64 = j_lj_buf_more2(sb, len);
  v6 = 0i64;
  v7 = (char *)&s->len + len + 7;
  v8 = len;
  if ( ptr64 > &ptr64[len] )
    v8 = 0i64;
  if ( v8 )
  {
    do
    {
      v9 = *v7--;
      *ptr64 = v9;
      ++v6;
      ++ptr64;
    }
    while ( v6 < v8 );
  }
  sb->p.ptr64 = (unsigned __int64)ptr64;
  return sb;
}

/*
==============
lj_buf_putstr_lower
==============
*/
SBuf *lj_buf_putstr_lower(SBuf *sb, GCstr *s)
{
  unsigned __int64 len; 
  char *ptr64; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  signed __int64 v8; 
  int v9; 
  char v10; 
  SBuf *result; 

  len = s->len;
  if ( (unsigned int)len <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
    ptr64 = (char *)sb->p.ptr64;
  else
    ptr64 = j_lj_buf_more2(sb, len);
  v6 = len;
  if ( ptr64 > &ptr64[len] )
    v6 = 0i64;
  if ( v6 )
  {
    v7 = 0i64;
    v8 = (char *)&s[1] - ptr64;
    do
    {
      v9 = (unsigned __int8)ptr64[v8];
      v10 = v9 + 32;
      if ( (unsigned int)(v9 - 65) > 0x19 )
        v10 = ptr64[v8];
      ++v7;
      *ptr64++ = v10;
    }
    while ( v7 < v6 );
  }
  result = sb;
  sb->p.ptr64 = (unsigned __int64)ptr64;
  return result;
}

/*
==============
lj_buf_putstr_upper
==============
*/
SBuf *lj_buf_putstr_upper(SBuf *sb, GCstr *s)
{
  unsigned __int64 len; 
  char *ptr64; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  signed __int64 v8; 
  int v9; 
  char v10; 
  SBuf *result; 

  len = s->len;
  if ( (unsigned int)len <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
    ptr64 = (char *)sb->p.ptr64;
  else
    ptr64 = j_lj_buf_more2(sb, len);
  v6 = len;
  if ( ptr64 > &ptr64[len] )
    v6 = 0i64;
  if ( v6 )
  {
    v7 = 0i64;
    v8 = (char *)&s[1] - ptr64;
    do
    {
      v9 = (unsigned __int8)ptr64[v8];
      v10 = v9 - 32;
      if ( (unsigned int)(v9 - 97) > 0x19 )
        v10 = ptr64[v8];
      ++v7;
      *ptr64++ = v10;
    }
    while ( v7 < v6 );
  }
  result = sb;
  sb->p.ptr64 = (unsigned __int64)ptr64;
  return result;
}

/*
==============
lj_buf_putstr_rep
==============
*/
SBuf *lj_buf_putstr_rep(SBuf *sb, GCstr *s, int rep)
{
  int v3; 
  __int64 len; 
  unsigned int v7; 
  char *ptr64; 
  char gcptr64; 
  GCstr *v10; 
  char v11; 

  v3 = rep;
  if ( rep > 0 )
  {
    len = s->len;
    if ( (_DWORD)len )
    {
      v7 = len * rep;
      if ( (unsigned __int64)(len * rep) > 0x7FFFFF00 )
        j_lj_err_mem((lua_State *)sb->L.ptr64);
      if ( v7 <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
        ptr64 = (char *)sb->p.ptr64;
      else
        ptr64 = j_lj_buf_more2(sb, v7);
      if ( (_DWORD)len == 1 )
      {
        gcptr64 = s[1].nextgc.gcptr64;
        do
        {
          *ptr64 = gcptr64;
          --v3;
          ++ptr64;
        }
        while ( v3 > 0 );
      }
      else
      {
        do
        {
          v10 = s + 1;
          do
          {
            v11 = v10->nextgc.gcptr64;
            v10 = (GCstr *)((char *)v10 + 1);
            *ptr64++ = v11;
          }
          while ( v10 < (GCstr *)((char *)&s[1] + len) );
          --v3;
        }
        while ( v3 > 0 );
      }
      sb->p.ptr64 = (unsigned __int64)ptr64;
    }
  }
  return sb;
}

/*
==============
lj_buf_puttab
==============
*/
SBuf *lj_buf_puttab(SBuf *sb, GCtab *t, GCstr *sep, int i, int e)
{
  signed int v5; 
  GCstr *v6; 
  unsigned int len; 
  const TValue *v10; 
  __int64 v11; 
  size_t v12; 
  char *ptr64; 
  char *v14; 
  SBuf *v15; 
  signed int v16; 

  v5 = i;
  v6 = sep;
  if ( sep )
    len = sep->len;
  else
    len = 0;
  if ( i > e )
    return sb;
  while ( 1 )
  {
    v10 = v5 >= t->asize ? j_lj_tab_getinth(t, v5) : (const TValue *)(t->array.ptr64 + 8i64 * v5);
    if ( !v10 )
      break;
    v11 = v10->it64 >> 47;
    if ( (_DWORD)v11 == -5 )
    {
      v12 = *(unsigned int *)((v10->u64 & 0x7FFFFFFFFFFFi64) + 0x10);
      if ( (unsigned int)v12 + len <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
        ptr64 = (char *)sb->p.ptr64;
      else
        ptr64 = j_lj_buf_more2(sb, (unsigned int)v12 + len);
      memcpy_0(ptr64, (const void *)((v10->u64 & 0x7FFFFFFFFFFFi64) + 24), v12);
      v14 = &ptr64[v12];
      v6 = sep;
    }
    else
    {
      if ( (unsigned int)v11 >= 0xFFFFFFF2 )
        break;
      v15 = j_lj_strfmt_putfnum(sb, 0xF000035u, v10->n);
      if ( len <= LODWORD(v15->e.ptr64) - LODWORD(v15->p.ptr64) )
        v14 = (char *)v15->p.ptr64;
      else
        v14 = j_lj_buf_more2(v15, len);
    }
    v16 = v5++;
    if ( v16 == e )
    {
      sb->p.ptr64 = (unsigned __int64)v14;
      return sb;
    }
    if ( len )
    {
      memcpy_0(v14, &v6[1], len);
      v14 += len;
    }
    sb->p.ptr64 = (unsigned __int64)v14;
  }
  sb->p.ptr64 = v5;
  return 0i64;
}

/*
==============
lj_buf_tostr
==============
*/
GCstr *lj_buf_tostr(SBuf *sb)
{
  return j_lj_str_new((lua_State *)sb->L.ptr64, (const char *)sb->b.ptr64, (unsigned int)(LODWORD(sb->p.ptr64) - LODWORD(sb->b.ptr64)));
}

/*
==============
lj_buf_cat2str
==============
*/
GCstr *lj_buf_cat2str(lua_State *L, GCstr *s1, GCstr *s2)
{
  size_t len; 
  size_t v6; 
  unsigned __int64 v7; 
  unsigned int v9; 
  unsigned int v10; 
  char *v11; 

  len = s1->len;
  v6 = s2->len;
  v7 = L->glref.ptr64 + 152;
  v9 = v6 + len;
  v10 = *(_DWORD *)(v7 + 8) - *(_DWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 24) = L;
  if ( (int)v6 + (int)len <= v10 )
    v11 = *(char **)(v7 + 16);
  else
    v11 = j_lj_buf_need2((SBuf *)v7, v9);
  memcpy_0(v11, &s1[1], len);
  memcpy_0(&v11[len], &s2[1], v6);
  return j_lj_str_new(L, v11, v9);
}

/*
==============
lj_buf_ruleb128
==============
*/
__int64 lj_buf_ruleb128(const char **pp)
{
  __int64 result; 
  const char *v3; 
  int v4; 
  char v5; 
  char v6; 

  result = *(unsigned __int8 *)*pp;
  v3 = *pp + 1;
  if ( (unsigned int)result < 0x80 )
  {
    *pp = v3;
  }
  else
  {
    v4 = 0;
    LODWORD(result) = result & 0x7F;
    do
    {
      v5 = *v3;
      v4 += 7;
      v6 = *v3++;
      result = ((v6 & 0x7F) << v4) | (unsigned int)result;
    }
    while ( (unsigned __int8)v5 >= 0x80u );
    *pp = v3;
  }
  return result;
}

/*
==============
buf_grow
==============
*/
void buf_grow(SBuf *sb, unsigned int sz)
{
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  void *v7; 

  v3 = LODWORD(sb->e.ptr64) - LODWORD(sb->b.ptr64);
  v4 = v3;
  v5 = LODWORD(sb->p.ptr64) - LODWORD(sb->b.ptr64);
  if ( v3 < 0x20 )
    v4 = 32;
  for ( ; v4 < sz; v4 *= 2 )
    ;
  v6 = v4;
  v7 = j_lj_mem_realloc((lua_State *)sb->L.ptr64, (void *)sb->b.ptr64, v3, v4);
  sb->b.ptr64 = (unsigned __int64)v7;
  sb->e.ptr64 = (unsigned __int64)v7 + v6;
  sb->p.ptr64 = (unsigned __int64)v7 + v5;
}

