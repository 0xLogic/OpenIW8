/*
==============
der_decode_utf8_string
==============
*/
__int64 der_decode_utf8_string(const unsigned __int8 *in, unsigned int inlen, wchar_t *out, unsigned int *outlen)
{
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned __int16 v14; 
  unsigned int v15; 
  wchar_t v16; 
  unsigned __int8 v17; 

  if ( inlen < 2 || (*in & 0x1F) != 12 )
    return 7i64;
  v7 = in[1] & 0x7F;
  if ( *((char *)in + 1) >= 0 )
  {
    v8 = in[1] & 0x7F;
    LODWORD(v9) = 2;
  }
  else
  {
    if ( (unsigned int)(v7 - 1) > 2 || v7 + 1 > inlen )
      return 7i64;
    v8 = 0;
    LODWORD(v9) = 2;
    do
    {
      v10 = (unsigned int)v9;
      LODWORD(v9) = v9 + 1;
      v8 = in[v10] | (v8 << 8);
      --v7;
    }
    while ( v7 );
  }
  if ( v8 + (int)v9 <= inlen )
  {
    v11 = 0i64;
    if ( (unsigned int)v9 >= inlen )
    {
LABEL_24:
      *outlen = v11;
      return 0i64;
    }
    while ( 1 )
    {
      v12 = (unsigned int)v9;
      v13 = 0;
      v9 = (unsigned int)(v9 + 1);
      v14 = in[v12];
      if ( (v14 & 0x80u) != 0 )
        break;
LABEL_16:
      if ( v13 + (unsigned int)v9 - 1 > inlen )
        return 7i64;
      v15 = v13 - 1;
      v16 = v14 >> v13;
      if ( v13 <= 1 )
        v15 = v13;
      for ( ; v15; v16 = v17 & 0x3F | (v16 << 6) )
      {
        v17 = in[v9];
        --v15;
        if ( (v17 & 0xC0) != 0x80 )
          return 7i64;
        v9 = (unsigned int)(v9 + 1);
      }
      if ( (unsigned int)v11 > *outlen )
      {
        *outlen = v11;
        return 6i64;
      }
      out[v11] = v16;
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v9 >= inlen )
        goto LABEL_24;
    }
    while ( v13 <= 4 )
    {
      ++v13;
      v14 = 2 * (v14 & 0x7F);
      if ( (v14 & 0x80u) == 0 )
      {
        if ( v13 > 4 )
          return 7i64;
        goto LABEL_16;
      }
    }
  }
  return 7i64;
}

