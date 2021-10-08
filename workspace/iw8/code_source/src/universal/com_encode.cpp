/*
==============
Com_EncodeYEnc
==============
*/

int __fastcall Com_EncodeYEnc(unsigned __int8 *indata, int inlen, char *outdata, int outlen)
{
  return ?Com_EncodeYEnc@@YAHPEAEHPEADH@Z(indata, inlen, outdata, outlen);
}

/*
==============
Com_DecodeYEnc
==============
*/

int __fastcall Com_DecodeYEnc(const char *indata, unsigned __int8 *outdata, int outlen)
{
  return ?Com_DecodeYEnc@@YAHPEBDPEAEH@Z(indata, outdata, outlen);
}

/*
==============
Com_DecodeYEnc
==============
*/
__int64 Com_DecodeYEnc(const char *indata, unsigned __int8 *outdata, int outlen)
{
  char v3; 
  char v4; 
  unsigned int v5; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  char v10; 

  v3 = *indata;
  v4 = 0;
  v5 = 0;
  v7 = indata;
  if ( !*indata )
    return v5;
  v8 = outlen;
  v9 = 0i64;
  while ( !v4 && v3 == 61 )
  {
    v4 = 1;
LABEL_10:
    v3 = *++v7;
    if ( !v3 )
      return v5;
  }
  if ( v9 != v8 )
  {
    v10 = v3 - 64;
    if ( !v4 )
      v10 = v3;
    ++v5;
    outdata[v9++] = v10 - 42;
    v4 = 0;
    goto LABEL_10;
  }
  return 0i64;
}

/*
==============
Com_EncodeYEnc
==============
*/
__int64 Com_EncodeYEnc(unsigned __int8 *indata, int inlen, char *outdata, int outlen)
{
  int v4; 
  __int64 v5; 
  const char *fmt; 
  __int64 v10; 
  char *v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 v14; 
  __int64 v15; 
  __int64 result; 

  v4 = 0;
  v5 = inlen;
  fmt = (const char *)&queryFormat;
  if ( inlen <= 0 )
  {
LABEL_15:
    if ( v4 >= outlen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_encode.cpp", 54, ASSERT_TYPE_ASSERT, "(len < outlen)", fmt, "len < outlen") )
      __debugbreak();
    result = (unsigned int)v4;
    outdata[v4] = 0;
  }
  else
  {
    v10 = 0i64;
    v11 = outdata;
    v12 = 0x2800002400002401i64;
    v13 = 0x40000800000001i64;
    while ( 1 )
    {
      v14 = indata[v10] + 42;
      if ( v14 <= 0x3Du && _bittest64(&v12, v14) || (unsigned __int8)(indata[v10] - 50) <= 0x36u && _bittest64(&v13, (unsigned __int8)(indata[v10] - 50)) )
      {
        v14 = indata[v10] + 106;
        if ( v4 + 1 == outlen )
          break;
        *v11 = 61;
        ++v4;
        ++v11;
      }
      if ( ++v4 == outlen )
        break;
      if ( YEncIsCritical(v14) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_encode.cpp", 49, ASSERT_TYPE_ASSERT, "(!YEncIsCritical( c ))", fmt, v15) )
          __debugbreak();
        fmt = (const char *)&queryFormat;
      }
      *v11 = v14;
      ++v10;
      ++v11;
      v12 = 0x2800002400002401i64;
      v13 = 0x40000800000001i64;
      if ( v10 >= v5 )
        goto LABEL_15;
    }
    *outdata = 0;
    return 0i64;
  }
  return result;
}

/*
==============
YEncIsCritical
==============
*/
bool YEncIsCritical(unsigned __int8 c)
{
  __int64 v1; 
  unsigned __int8 v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  bool result; 

  result = 1;
  if ( c > 0x3Du || (v1 = 0x2800002400002401i64, !_bittest64(&v1, c)) )
  {
    v2 = c - 92;
    if ( v2 > 0x36u )
      return 0;
    v3 = v2;
    v4 = 0x40000800000001i64;
    if ( !_bittest64(&v4, v3) )
      return 0;
  }
  return result;
}

