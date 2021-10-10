/*
==============
lj_strfmt_parse
==============
*/
__int64 lj_strfmt_parse(FormatState *fs)
{
  const unsigned __int8 *p; 
  const unsigned __int8 *e; 
  unsigned int v4; 
  __int64 result; 
  unsigned __int8 *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  unsigned int v19; 

  p = fs->p;
  e = fs->e;
  fs->str = (const char *)fs->p;
  if ( p >= e )
    goto LABEL_4;
  while ( *p != 37 )
  {
    if ( ++p >= e )
      goto LABEL_4;
  }
  v6 = (unsigned __int8 *)(p + 1);
  if ( p[1] == 37 )
  {
    LODWORD(p) = (_DWORD)p + 1;
    fs->p = v6 + 1;
    goto $retlit;
  }
  v7 = 0;
  v8 = 0;
  if ( p != (const unsigned __int8 *)fs->str )
  {
LABEL_4:
    fs->p = p;
$retlit:
    v4 = (_DWORD)p - LODWORD(fs->str);
    fs->len = v4;
    return v4 != 0 ? 2 : 0;
  }
  v9 = *v6;
  if ( (unsigned int)(v9 - 32) <= 0x10 )
  {
    do
    {
      switch ( (_BYTE)v9 )
      {
        case '-':
          v9 = 256;
          break;
        case '+':
          v9 = 512;
          break;
        case '0':
          v9 = 1024;
          break;
        case ' ':
          v9 = 2048;
          break;
        case '#':
          v9 = 4096;
          break;
        default:
          goto LABEL_21;
      }
      v10 = *++v6;
      v8 |= v9;
      LOBYTE(v9) = v10;
    }
    while ( (unsigned int)(v10 - 32) <= 0x10 );
  }
LABEL_21:
  v11 = *v6 - 48;
  if ( v11 < 0xA )
  {
    v12 = *++v6;
    if ( (unsigned int)(v12 - 48) < 0xA )
    {
      ++v6;
      v11 = v12 + 10 * v11 - 48;
    }
    v8 |= v11 << 16;
  }
  if ( *v6 == 46 )
  {
    v13 = *++v6;
    v14 = v13 - 48;
    if ( v14 < 0xA )
    {
      v15 = *++v6;
      v7 = v14;
      if ( (unsigned int)(v15 - 48) < 0xA )
      {
        ++v6;
        v7 = v15 + 10 * v14 - 48;
      }
    }
    v8 |= (v7 << 24) + 0x1000000;
  }
  v16 = *v6;
  v17 = (unsigned int)(v16 - 65);
  if ( (unsigned int)v17 <= 0x37 && (v18 = strfmt_map[v17]) != 0 )
  {
    fs->p = v6 + 1;
    return v8 | v18 | ~(((_WORD)v16 - 65) << 8) & 0x2000u;
  }
  else
  {
    if ( (unsigned __int8)v16 >= 0x20u )
      LODWORD(v6) = (_DWORD)v6 + 1;
    v19 = (_DWORD)v6 - LODWORD(fs->str);
    result = 1i64;
    fs->p = e;
    fs->len = v19;
  }
  return result;
}

/*
==============
lj_strfmt_wint
==============
*/
char *lj_strfmt_wint(char *p, int k)
{
  unsigned int v2; 
  char *v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  char *result; 

  v2 = k;
  v3 = p;
  if ( k < 0 )
  {
    v2 = -k;
    *p = 45;
    v3 = p + 1;
  }
  if ( v2 >= 0x2710 )
  {
    v4 = v2 / 0x2710;
    v2 %= 0x2710u;
    if ( v4 >= 0x2710 )
    {
      v5 = v4 / 0x2710;
      v4 %= 0x2710u;
      if ( v5 >= 0xA )
      {
        v6 = (103 * v5) >> 10;
        *v3 = v6 + 48;
        LOBYTE(v5) = -10 * v6 + v5;
        ++v3;
      }
      *v3++ = v5 + 48;
    }
    else
    {
      if ( v4 < 0xA )
      {
$dig5:
        *v3++ = v4 + 48;
        goto LABEL_20;
      }
      if ( v4 < 0x64 )
      {
$dig6:
        v9 = (103 * v4) >> 10;
        *v3 = v9 + 48;
        LOBYTE(v4) = -10 * v9 + v4;
        ++v3;
        goto $dig5;
      }
      if ( v4 < 0x3E8 )
      {
$dig7:
        v8 = (41 * v4) >> 12;
        *v3 = v8 + 48;
        v4 += -100 * v8;
        ++v3;
        goto $dig6;
      }
    }
    v7 = (8389 * v4) >> 23;
    *v3 = v7 + 48;
    v4 += -1000 * v7;
    ++v3;
    goto $dig7;
  }
  if ( v2 >= 0xA )
  {
    if ( v2 < 0x64 )
    {
$dig2:
      v12 = (103 * v2) >> 10;
      *v3 = v12 + 48;
      LOBYTE(v2) = -10 * v12 + v2;
      ++v3;
      goto $dig1;
    }
    if ( v2 < 0x3E8 )
    {
$dig3:
      v11 = (41 * v2) >> 12;
      *v3 = v11 + 48;
      v2 += -100 * v11;
      ++v3;
      goto $dig2;
    }
LABEL_20:
    v10 = (8389 * v2) >> 23;
    *v3 = v10 + 48;
    v2 += -1000 * v10;
    ++v3;
    goto $dig3;
  }
$dig1:
  result = v3 + 1;
  *v3 = v2 + 48;
  return result;
}

/*
==============
lj_strfmt_wptr
==============
*/
char *lj_strfmt_wptr(char *p, const void *v)
{
  unsigned int v3; 
  unsigned int v4; 
  __int64 v5; 
  char *v6; 
  __int64 v7; 

  if ( v )
  {
    if ( (__int64)v >> 32 )
    {
      _BitScanReverse(&v3, HIDWORD(v));
      v4 = 2 * (v3 >> 3) + 12;
    }
    else
    {
      v4 = 10;
    }
    *(_WORD *)p = 30768;
    if ( v4 - 1 >= 2 )
    {
      v5 = v4 - 2;
      v6 = &p[v4 - 1];
      do
      {
        --v6;
        v7 = (unsigned __int8)v & 0xF;
        v = (const void *)((__int64)v >> 4);
        v6[1] = a0123456789abcd_0[v7];
        --v5;
      }
      while ( v5 );
    }
    return &p[v4];
  }
  else
  {
    *(_DWORD *)p = 1280070990;
    return p + 4;
  }
}

/*
==============
lj_strfmt_wuleb128
==============
*/
char *lj_strfmt_wuleb128(char *p, unsigned int v)
{
  char v2; 

  for ( ; v >= 0x80; ++p )
  {
    v2 = v;
    v >>= 7;
    *p = v2 | 0x80;
  }
  *p = v;
  return p + 1;
}

/*
==============
lj_strfmt_wstrnum
==============
*/
const char *lj_strfmt_wstrnum(lua_State *L, const TValue *o, unsigned int *lenp)
{
  __int64 v6; 
  SBuf *v8; 
  unsigned __int64 ptr64; 
  SBuf *v10; 

  v6 = o->it64 >> 47;
  if ( (_DWORD)v6 == -5 )
  {
    *lenp = *(_DWORD *)((o->u64 & 0x7FFFFFFFFFFFi64) + 0x10);
    if ( (unsigned int)(o->it64 >> 47) != -5 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strfmt.c", 163, "(((uint32_t)((o)->it64 >> 47)) == (~4u))") )
        __debugbreak();
    }
    return (const char *)((o->u64 & 0x7FFFFFFFFFFFi64) + 24);
  }
  else if ( (unsigned int)v6 >= 0xFFFFFFF2 )
  {
    return 0i64;
  }
  else
  {
    v8 = (SBuf *)(L->glref.ptr64 + 152);
    ptr64 = v8->b.ptr64;
    v8->L.ptr64 = (unsigned __int64)L;
    v8->p.ptr64 = ptr64;
    v10 = j_lj_strfmt_putfnum(v8, 0xF000035u, o->n);
    *lenp = LODWORD(v10->p.ptr64) - LODWORD(v10->b.ptr64);
    return (const char *)v10->b.ptr64;
  }
}

/*
==============
lj_strfmt_putint
==============
*/
SBuf *lj_strfmt_putint(SBuf *sb, int k)
{
  char *ptr64; 

  if ( (unsigned int)(LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64)) >= 0xB )
    ptr64 = (char *)sb->p.ptr64;
  else
    ptr64 = j_lj_buf_more2(sb, 0xBu);
  sb->p.ptr64 = (unsigned __int64)j_lj_strfmt_wint(ptr64, k);
  return sb;
}

/*
==============
lj_strfmt_putptr
==============
*/
SBuf *lj_strfmt_putptr(SBuf *sb, const void *v)
{
  char *ptr64; 

  if ( (unsigned int)(LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64)) >= 0x12 )
    ptr64 = (char *)sb->p.ptr64;
  else
    ptr64 = j_lj_buf_more2(sb, 0x12u);
  sb->p.ptr64 = (unsigned __int64)j_lj_strfmt_wptr(ptr64, v);
  return sb;
}

/*
==============
lj_strfmt_putquoted
==============
*/
SBuf *lj_strfmt_putquoted(SBuf *sb, GCstr *str)
{
  unsigned int len; 
  GCstr *v4; 
  char *ptr64; 
  int v6; 
  char *v7; 
  __int64 gcptr64_low; 
  bool v9; 
  unsigned int v10; 

  len = str->len;
  v4 = str + 1;
  if ( LODWORD(sb->e.ptr64) == LODWORD(sb->p.ptr64) )
    ptr64 = j_lj_buf_more2(sb, 1u);
  else
    ptr64 = (char *)sb->p.ptr64;
  *ptr64 = 34;
  v6 = (_DWORD)ptr64 + 1;
  sb->p.ptr64 = (unsigned __int64)(ptr64 + 1);
  v7 = ptr64 + 1;
  if ( len )
  {
    while ( 1 )
    {
      --len;
      gcptr64_low = LOBYTE(v4->nextgc.gcptr64);
      v4 = (GCstr *)((char *)v4 + 1);
      if ( (unsigned int)(LODWORD(sb->e.ptr64) - v6) < 4 )
        v7 = j_lj_buf_more2(sb, 4u);
      if ( (_DWORD)gcptr64_low == 34 || (_DWORD)gcptr64_low == 92 || (_DWORD)gcptr64_low == 10 )
      {
        *v7++ = 92;
        goto LABEL_21;
      }
      if ( (lj_char_bits[gcptr64_low + 1] & 1) != 0 )
        break;
LABEL_21:
      *v7++ = gcptr64_low;
      sb->p.ptr64 = (unsigned __int64)v7;
      v6 = (int)v7;
      if ( !len )
        goto LABEL_22;
    }
    *v7++ = 92;
    v9 = (unsigned int)gcptr64_low < 0x64;
    if ( (unsigned int)gcptr64_low < 0x64 )
    {
      if ( (lj_char_bits[LOBYTE(v4->nextgc.gcptr64) + 1] & 8) == 0 )
      {
        if ( (unsigned int)gcptr64_low < 0xA )
        {
LABEL_19:
          LOBYTE(gcptr64_low) = gcptr64_low + 48;
          goto LABEL_21;
        }
$tens:
        v10 = (unsigned int)(205 * gcptr64_low) >> 11;
        *v7 = v10 + 48;
        LOBYTE(gcptr64_low) = -10 * v10 + gcptr64_low;
        ++v7;
        goto LABEL_19;
      }
      v9 = (unsigned int)gcptr64_low < 0x64;
    }
    *v7++ = !v9 + 48;
    if ( (unsigned int)gcptr64_low >= 0x64 )
      LODWORD(gcptr64_low) = gcptr64_low - 100;
    goto $tens;
  }
LABEL_22:
  if ( LODWORD(sb->e.ptr64) == v6 )
    v7 = j_lj_buf_more2(sb, 1u);
  *v7 = 34;
  sb->p.ptr64 = (unsigned __int64)(v7 + 1);
  return sb;
}

/*
==============
lj_strfmt_putfxint
==============
*/
SBuf *lj_strfmt_putfxint(SBuf *sb, unsigned int sf, unsigned __int64 k)
{
  char *v3; 
  unsigned int v4; 
  unsigned int v6; 
  const char *v7; 
  unsigned __int64 v8; 
  char v9; 
  int v10; 
  signed int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  char *v16; 
  _BYTE *ptr64; 
  void *v18; 
  unsigned __int64 v19; 
  void *v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  void *v23; 
  char v24; 
  unsigned int v25; 
  void *v26; 
  unsigned int v28; 
  int v29; 
  unsigned int v30; 
  char v31; 
  char v32; 

  v3 = &v32;
  v4 = 0;
  if ( (sf & 0xF) == 3 )
  {
    if ( (k & 0x8000000000000000ui64) == 0i64 )
    {
      if ( (sf & 0x200) != 0 )
      {
        v4 = 299;
      }
      else if ( (sf & 0x800) != 0 )
      {
        v4 = 288;
      }
    }
    else
    {
      k = -(__int64)k;
      v4 = 301;
    }
  }
  v6 = sf & 0xFFFFFBFF;
  if ( (int)(HIBYTE(sf) - 1) < 0 )
    v6 = sf;
  if ( k )
  {
    if ( (v6 & 0x30) != 0 )
    {
      if ( (v6 & 0x10) != 0 )
      {
        v7 = "0123456789abcdef";
        if ( (v6 & 0x2000) != 0 )
          v7 = "0123456789ABCDEF";
        do
        {
          --v3;
          v8 = k & 0xF;
          k >>= 4;
          *v3 = v7[v8];
        }
        while ( k );
        if ( (v6 & 0x1000) != 0 )
          v4 = (~BYTE1(v6) & 0x20 | 0x58) + 512;
      }
      else
      {
        do
        {
          --v3;
          v9 = (k & 7) + 48;
          k >>= 3;
          *v3 = v9;
        }
        while ( k );
        if ( (v6 & 0x1000) != 0 )
          *--v3 = 48;
      }
    }
    else
    {
      for ( ; (k & 0xFFFFFFFF00000000ui64) != 0; k /= 0xAui64 )
        *--v3 = k % 0xA + 48;
      do
      {
        *--v3 = (unsigned int)k % 0xA + 48;
        LODWORD(k) = (unsigned int)k / 0xA;
      }
      while ( (_DWORD)k );
    }
  }
  else if ( HIBYTE(sf) != 1 || (v6 & 0x1020) == 4128 )
  {
    v3 = &v31;
    v31 = 48;
  }
  v11 = v10 + 79 - (_DWORD)v3;
  v12 = v11;
  if ( v11 < (int)(HIBYTE(sf) - 1) )
    v12 = HIBYTE(sf) - 1;
  v13 = BYTE2(v6);
  v14 = v12 + (v4 >> 8);
  v30 = v12;
  v15 = v14;
  if ( BYTE2(v6) > v14 )
    v15 = BYTE2(v6);
  v28 = v15;
  if ( v15 <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
  {
    ptr64 = (_BYTE *)sb->p.ptr64;
  }
  else
  {
    v16 = j_lj_buf_more2(sb, v15);
    v12 = v30;
    ptr64 = v16;
    v11 = v10 + 79 - (_DWORD)v3;
    v15 = v28;
  }
  v29 = (int)ptr64;
  if ( (v6 & 0x500) == 0 )
  {
    if ( BYTE2(v6) > v14 )
    {
      v18 = ptr64;
      v19 = BYTE2(v6) - v14;
      ptr64 += v19;
      memset(v18, 32, v19);
      do
      {
        --v13;
        --v19;
      }
      while ( v19 );
    }
    --v13;
  }
  if ( v4 )
  {
    if ( (unsigned __int8)v4 >= 0x58u )
      *ptr64++ = 48;
    *ptr64++ = v4;
  }
  if ( (v6 & 0x500) == 1024 )
  {
    if ( v13 > v14 )
    {
      v20 = ptr64;
      v21 = v13 - v14;
      ptr64 += v21;
      memset(v20, 48, v21);
      do
      {
        --v13;
        --v21;
      }
      while ( v21 );
    }
    --v13;
  }
  if ( v12 > v11 )
  {
    v22 = v12 - v11;
    v23 = ptr64;
    ptr64 += v22;
    memset(v23, 48, v22);
  }
  for ( ; v3 < &v32; ++ptr64 )
  {
    v24 = *v3++;
    *ptr64 = v24;
  }
  if ( (v6 & 0x100) != 0 && v13 > v14 )
  {
    v25 = v13 - v14;
    v26 = ptr64;
    ptr64 += v25;
    memset(v26, 32, v25);
  }
  if ( v15 != (_DWORD)ptr64 - v29 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strfmt.c", 323, "need == (MSize)(p - ps)") )
    __debugbreak();
  sb->p.ptr64 = (unsigned __int64)ptr64;
  return sb;
}

/*
==============
lj_strfmt_putfnum_int
==============
*/

SBuf *__fastcall lj_strfmt_putfnum_int(SBuf *sb, unsigned int sf, double n)
{
  char *ptr64; 

  __asm { vcvttsd2si rdi, xmm2 }
  if ( _RDI != (int)_RDI || sf != 3 )
    return j_lj_strfmt_putfxint(sb, sf, _RDI);
  if ( (unsigned int)(LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64)) >= 0xB )
    ptr64 = (char *)sb->p.ptr64;
  else
    ptr64 = j_lj_buf_more2(sb, 0xBu);
  sb->p.ptr64 = (unsigned __int64)j_lj_strfmt_wint(ptr64, _RDI);
  return sb;
}

/*
==============
lj_strfmt_putfnum_uint
==============
*/

SBuf *__fastcall lj_strfmt_putfnum_uint(SBuf *sb, unsigned int sf, double n)
{
  _XMM0 = *(unsigned __int64 *)&DOUBLE_9_223372036854776e18;
  __asm
  {
    vcmplesd xmm1, xmm0, xmm2
    vblendvpd xmm1, xmm2, xmm3, xmm1
    vcvttsd2si r8, xmm1; k
  }
  return j_lj_strfmt_putfxint(sb, sf, _R8);
}

/*
==============
lj_strfmt_putfchar
==============
*/
SBuf *lj_strfmt_putfchar(SBuf *sb, unsigned int sf, int c)
{
  __int16 v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  char v7; 
  char *ptr64; 
  int v10; 
  __int64 v11; 
  SBuf *result; 

  v3 = sf;
  v4 = HIWORD(sf);
  v5 = 1;
  v6 = (unsigned __int8)v4;
  v7 = c;
  if ( (unsigned __int8)v4 > 1u )
    v5 = (unsigned __int8)v4;
  if ( v5 <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
    ptr64 = (char *)sb->p.ptr64;
  else
    ptr64 = j_lj_buf_more2(sb, v5);
  v10 = v3 & 0x100;
  if ( v10 )
    *ptr64++ = v7;
  if ( v6 > 1 )
  {
    v11 = v6 - 1;
    memset(ptr64, 32, (unsigned int)v11);
    ptr64 += v11;
  }
  result = sb;
  if ( !v10 )
    *ptr64++ = v7;
  sb->p.ptr64 = (unsigned __int64)ptr64;
  return result;
}

/*
==============
lj_strfmt_putfstr
==============
*/
SBuf *lj_strfmt_putfstr(SBuf *sb, unsigned int sf, GCstr *str)
{
  __int64 len; 
  unsigned int v5; 
  __int16 v6; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  char *ptr64; 
  int v12; 

  len = str->len;
  v5 = HIBYTE(sf) - 1;
  v6 = sf;
  if ( (unsigned int)len > v5 )
    len = v5;
  v8 = HIWORD(sf);
  v9 = len;
  v10 = (unsigned __int8)v8;
  if ( (unsigned __int8)v8 > (unsigned int)len )
    v9 = (unsigned __int8)v8;
  if ( v9 <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
    ptr64 = (char *)sb->p.ptr64;
  else
    ptr64 = j_lj_buf_more2(sb, v9);
  v12 = v6 & 0x100;
  if ( v12 )
  {
    memcpy_0(ptr64, &str[1], (unsigned int)len);
    ptr64 += (unsigned int)len;
  }
  for ( ; v10 > (unsigned int)len; ++ptr64 )
  {
    *ptr64 = 32;
    --v10;
  }
  if ( v12 )
  {
    sb->p.ptr64 = (unsigned __int64)ptr64;
  }
  else
  {
    memcpy_0(ptr64, &str[1], (unsigned int)len);
    sb->p.ptr64 = (unsigned __int64)&ptr64[len];
  }
  return sb;
}

/*
==============
lj_strfmt_int
==============
*/
GCstr *lj_strfmt_int(lua_State *L, int k)
{
  int v3; 
  unsigned __int64 v4; 
  char p[16]; 

  v4 = (unsigned int)j_lj_strfmt_wint(p, k) - (v3 + 32);
  return j_lj_str_new(L, p, v4);
}

/*
==============
lj_strfmt_number
==============
*/

GCstr *__fastcall lj_strfmt_number(lua_State *L, const TValue *o)
{
  return j_lj_strfmt_num(L, o);
}

/*
==============
lj_strfmt_obj
==============
*/
GCstr *lj_strfmt_obj(lua_State *L, const TValue *o)
{
  unsigned __int64 u64; 
  __int64 v5; 
  __int64 v7; 
  const char *v8; 
  __int64 v9; 
  char *v10; 
  char *v11; 
  const void *v12; 
  char str[32]; 

  u64 = o->u64;
  v5 = o->it64 >> 47;
  if ( (_DWORD)v5 == -5 )
    return (GCstr *)(u64 & 0x7FFFFFFFFFFFi64);
  if ( (unsigned int)v5 <= 0xFFFFFFF2 )
    return j_lj_strfmt_num(L, o);
  if ( u64 == -1i64 )
    return j_lj_str_new(L, "nil", 3ui64);
  if ( (_DWORD)v5 == -2 )
    return j_lj_str_new(L, "false", 5ui64);
  if ( (_DWORD)v5 == -3 )
    return j_lj_str_new(L, "true", 4ui64);
  v7 = -1i64;
  v8 = lj_obj_itypename[(unsigned int)~(o->it64 >> 47)];
  do
    ++v7;
  while ( v8[v7] );
  v9 = (unsigned int)v7;
  memcpy_0(str, v8, (unsigned int)v7);
  v10 = &str[v9];
  *(_WORD *)&str[v9] = 8250;
  if ( (unsigned int)(o->it64 >> 47) == -9 && *(_BYTE *)((o->u64 & 0x7FFFFFFFFFFFi64) + 0xA) > 1u )
  {
    *(double *)(v10 + 2) = *(double *)"builtin#";
    if ( (unsigned int)(o->it64 >> 47) != -9 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strfmt.c", 394, "(((uint32_t)((o)->it64 >> 47)) == (~8u))") )
        __debugbreak();
    }
    v11 = j_lj_strfmt_wint(v10 + 10, *(unsigned __int8 *)((o->u64 & 0x7FFFFFFFFFFFi64) + 0xA));
  }
  else
  {
    v12 = j_lj_obj_ptr(o);
    v11 = j_lj_strfmt_wptr(v10 + 2, v12);
  }
  return j_lj_str_new(L, str, v11 - str);
}

/*
==============
lj_strfmt_pushvf
==============
*/
GCstr *lj_strfmt_pushvf(lua_State *L, const char *fmt, char *argp)
{
  unsigned __int64 v4; 
  __int64 v6; 
  unsigned int v7; 
  char *v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  long double v11; 
  const char *v12; 
  const char *v13; 
  __int64 v14; 
  int v15; 
  char *v16; 
  const void *v17; 
  char *v18; 
  char *v19; 
  unsigned __int64 v20; 
  __int64 v21; 
  FormatState v23; 

  v4 = L->glref.ptr64 + 152;
  v23.p = (const unsigned __int8 *)fmt;
  *(_QWORD *)v4 = *(_QWORD *)(v4 + 16);
  v6 = -1i64;
  *(_QWORD *)(v4 + 24) = L;
  do
    ++v6;
  while ( fmt[v6] );
  v23.e = (const unsigned __int8 *)&fmt[(unsigned int)v6];
  if ( *v23.e && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strfmt.h", 82, "*fs->e == 0") )
    __debugbreak();
  v7 = j_lj_strfmt_parse(&v23);
  if ( v7 )
  {
    v8 = argp - 8;
    do
    {
      switch ( v7 & 0xF )
      {
        case 2u:
          j_lj_buf_putmem((SBuf *)v4, v23.str, v23.len);
          break;
        case 3u:
          v9 = *((int *)v8 + 2);
          v8 += 8;
          j_lj_strfmt_putfxint((SBuf *)v4, v7, v9);
          break;
        case 4u:
          v10 = *((unsigned int *)v8 + 2);
          v8 += 8;
          j_lj_strfmt_putfxint((SBuf *)v4, v7, v10);
          break;
        case 5u:
          v11 = *((double *)v8 + 1);
          v8 += 8;
          j_lj_strfmt_putfnum((SBuf *)v4, 0xF000035u, v11);
          break;
        case 6u:
          v12 = (const char *)*((_QWORD *)v8 + 1);
          v13 = "(null)";
          v8 += 8;
          v14 = -1i64;
          if ( v12 )
            v13 = v12;
          do
            ++v14;
          while ( v13[v14] );
          j_lj_buf_putmem((SBuf *)v4, v13, v14);
          break;
        case 7u:
          v8 += 8;
          v15 = *(_DWORD *)v8;
          if ( *(_DWORD *)(v4 + 8) == *(_DWORD *)v4 )
            v16 = j_lj_buf_more2((SBuf *)v4, 1u);
          else
            v16 = *(char **)v4;
          *v16 = v15;
          *(_QWORD *)v4 = v16 + 1;
          break;
        case 8u:
          v8 += 8;
          v17 = *(const void **)v8;
          if ( (unsigned int)(*(_DWORD *)(v4 + 8) - *(_DWORD *)v4) >= 0x12 )
          {
            *(_QWORD *)v4 = j_lj_strfmt_wptr(*(char **)v4, *(const void **)v8);
          }
          else
          {
            v18 = j_lj_buf_more2((SBuf *)v4, 0x12u);
            *(_QWORD *)v4 = j_lj_strfmt_wptr(v18, v17);
          }
          break;
        default:
          if ( *(_DWORD *)(v4 + 8) == *(_DWORD *)v4 )
            v19 = j_lj_buf_more2((SBuf *)v4, 1u);
          else
            v19 = *(char **)v4;
          *v19 = 63;
          *(_QWORD *)v4 = v19 + 1;
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strfmt.c", 452, "0") )
            __debugbreak();
          break;
      }
      v7 = j_lj_strfmt_parse(&v23);
    }
    while ( v7 );
  }
  v20 = (unsigned __int64)j_lj_str_new(L, *(const char **)(v4 + 16), (unsigned int)(*(_DWORD *)v4 - *(_DWORD *)(v4 + 16)));
  L->top->u64 = v20 | 0xFFFD800000000000ui64;
  v21 = (__int64)(v20 | 0xFFFD800000000000ui64) >> 47;
  if ( (unsigned int)(v21 + 4) > 0xFFFFFFF6 && (~(_DWORD)v21 != *(unsigned __int8 *)((v20 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v20 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
    __debugbreak();
  if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
    j_lj_state_growstack1(L);
  return (GCstr *)(v20 + 24);
}

/*
==============
lj_strfmt_pushf
==============
*/
const char *lj_strfmt_pushf(lua_State *L, const char *fmt, ...)
{
  va_list argp; 

  va_start(argp, fmt);
  return j_lj_strfmt_pushvf(L, fmt, argp);
}

