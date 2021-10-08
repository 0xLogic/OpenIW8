/*
==============
der_encode_utf8_string
==============
*/
__int64 der_encode_utf8_string(const wchar_t *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  unsigned int v4; 
  __int64 v5; 
  const wchar_t *v8; 
  unsigned int v9; 
  const wchar_t *v10; 
  unsigned int v11; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v4 = 0;
  v5 = inlen;
  v8 = in;
  v9 = 0;
  if ( !inlen )
    goto LABEL_12;
  v10 = in;
  do
  {
    if ( !j_der_utf8_valid_char(*v10) )
      return 16i64;
    v4 += j_der_utf8_charsize(*v10);
    ++v9;
    ++v10;
  }
  while ( v9 < (unsigned int)v5 );
  if ( v4 >= 0x80 )
  {
    if ( v4 >= 0x100 )
    {
      if ( v4 >= 0x10000 )
      {
        if ( v4 >= 0x1000000 )
          return 16i64;
        v11 = v4 + 5;
      }
      else
      {
        v11 = v4 + 4;
      }
    }
    else
    {
      v11 = v4 + 3;
    }
  }
  else
  {
LABEL_12:
    v11 = v4 + 2;
  }
  if ( v11 > *outlen )
  {
    *outlen = v4;
    return 6i64;
  }
  *out = 12;
  if ( v4 >= 0x80 )
  {
    if ( v4 >= 0x100 )
    {
      if ( v4 >= 0x10000 )
      {
        out[1] = -125;
        out[2] = BYTE2(v4);
        out[3] = BYTE1(v4);
        out[4] = v4;
        LODWORD(v13) = 5;
      }
      else
      {
        out[1] = -126;
        out[2] = BYTE1(v4);
        out[3] = v4;
        LODWORD(v13) = 4;
      }
    }
    else
    {
      out[1] = -127;
      out[2] = v4;
      LODWORD(v13) = 3;
    }
  }
  else
  {
    out[1] = v4;
    LODWORD(v13) = 2;
  }
  if ( (_DWORD)v5 )
  {
    v14 = v5;
    while ( 1 )
    {
      v15 = j_der_utf8_charsize(*v8) - 1;
      if ( !v15 )
      {
        out[(unsigned int)v13] = *(_BYTE *)v8;
        goto LABEL_30;
      }
      v16 = v15 - 1;
      if ( !v16 )
        break;
      if ( v16 == 1 )
      {
        v17 = (unsigned int)v13;
        v18 = (unsigned int)(v13 + 1);
        out[v17] = (*v8 >> 12) | 0xE0;
        out[v18] = (*v8 >> 6) & 0x3F | 0x80;
        v13 = (unsigned int)(v18 + 1);
        out[v13] = *(_BYTE *)v8 & 0x3F | 0x80;
LABEL_30:
        LODWORD(v13) = v13 + 1;
      }
      ++v8;
      if ( !--v14 )
        goto LABEL_32;
    }
    v19 = (unsigned int)v13;
    v13 = (unsigned int)(v13 + 1);
    out[v19] = (*v8 >> 6) & 0x1F | 0xC0;
    out[v13] = *(_BYTE *)v8 & 0x3F | 0x80;
    goto LABEL_30;
  }
LABEL_32:
  *outlen = v13;
  return 0i64;
}

