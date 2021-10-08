/*
==============
base64_decode
==============
*/
__int64 base64_decode(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  int v4; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  unsigned int v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  __int64 v12; 
  int v14; 

  v4 = 0;
  v5 = 0i64;
  v6 = 0;
  v7 = 0;
  if ( inlen )
  {
    v9 = 3;
    do
    {
      v10 = map_base64[*in];
      if ( v10 <= 0xFDu )
      {
        ++v6;
        v4 = v10 | (v4 << 6);
        if ( v6 == 4 )
        {
          if ( v9 > *outlen )
            return 6i64;
          v9 += 3;
          out[v5] = BYTE2(v4);
          v11 = (unsigned int)(v5 + 1);
          out[v11] = BYTE1(v4);
          v12 = (unsigned int)(v11 + 1);
          out[v12] = v4;
          v5 = (unsigned int)(v12 + 1);
          v4 = 0;
          v6 = 0;
        }
      }
      ++v7;
      ++in;
    }
    while ( v7 < inlen );
    if ( !v6 )
      goto LABEL_15;
    if ( v6 == 1 )
      return 7i64;
    v14 = v4 << (24 - 6 * v6);
    if ( (int)v5 + v6 - 1 > *outlen )
      return 6i64;
    out[v5] = BYTE2(v14);
    v5 = (unsigned int)(v5 + 1);
    if ( v6 == 3 )
    {
      out[v5] = BYTE1(v14);
      LODWORD(v5) = v5 + 1;
    }
  }
LABEL_15:
  *outlen = v5;
  return 0i64;
}

/*
==============
base64_strict_decode
==============
*/
__int64 base64_strict_decode(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  int v4; 
  int v5; 
  __int64 v6; 
  int v7; 
  unsigned int v8; 
  unsigned int v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 

  v4 = 0;
  v5 = 0;
  v6 = 0i64;
  v7 = 0;
  v8 = 0;
  if ( inlen )
  {
    v10 = 3;
    do
    {
      v11 = map_base64[*in];
      if ( v11 == 0xFE )
      {
        ++v4;
      }
      else
      {
        if ( v4 > 0 || v11 == 0xFF )
          return 7i64;
        ++v7;
        v5 = v11 | (v5 << 6);
        if ( v7 == 4 )
        {
          if ( v10 > *outlen )
            return 6i64;
          v10 += 3;
          out[v6] = BYTE2(v5);
          v12 = (unsigned int)(v6 + 1);
          out[v12] = BYTE1(v5);
          v13 = (unsigned int)(v12 + 1);
          out[v13] = v5;
          v6 = (unsigned int)(v13 + 1);
          v5 = 0;
          v7 = 0;
        }
      }
      ++v8;
      ++in;
    }
    while ( v8 < inlen );
    if ( !v7 )
      goto LABEL_18;
    if ( v7 == 1 || v7 + v4 != 4 && map_base64 != map_base64url )
      return 7i64;
    v14 = v5 << (24 - 6 * v7);
    if ( (int)v6 + v7 - 1 > *outlen )
      return 6i64;
    out[v6] = BYTE2(v14);
    v6 = (unsigned int)(v6 + 1);
    if ( v7 == 3 )
    {
      out[v6] = BYTE1(v14);
      LODWORD(v6) = v6 + 1;
    }
  }
LABEL_18:
  *outlen = v6;
  return 0i64;
}

/*
==============
base64url_decode
==============
*/
__int64 base64url_decode(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  int v4; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  unsigned int v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  __int64 v12; 
  int v14; 

  v4 = 0;
  v5 = 0i64;
  v6 = 0;
  v7 = 0;
  if ( inlen )
  {
    v9 = 3;
    do
    {
      v10 = map_base64url[*in];
      if ( v10 <= 0xFDu )
      {
        ++v6;
        v4 = v10 | (v4 << 6);
        if ( v6 == 4 )
        {
          if ( v9 > *outlen )
            return 6i64;
          v9 += 3;
          out[v5] = BYTE2(v4);
          v11 = (unsigned int)(v5 + 1);
          out[v11] = BYTE1(v4);
          v12 = (unsigned int)(v11 + 1);
          out[v12] = v4;
          v5 = (unsigned int)(v12 + 1);
          v4 = 0;
          v6 = 0;
        }
      }
      ++v7;
      ++in;
    }
    while ( v7 < inlen );
    if ( !v6 )
      goto LABEL_15;
    if ( v6 == 1 )
      return 7i64;
    v14 = v4 << (24 - 6 * v6);
    if ( (int)v5 + v6 - 1 > *outlen )
      return 6i64;
    out[v5] = BYTE2(v14);
    v5 = (unsigned int)(v5 + 1);
    if ( v6 == 3 )
    {
      out[v5] = BYTE1(v14);
      LODWORD(v5) = v5 + 1;
    }
  }
LABEL_15:
  *outlen = v5;
  return 0i64;
}

/*
==============
base64url_strict_decode
==============
*/
__int64 base64url_strict_decode(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  int v4; 
  int v5; 
  __int64 v6; 
  int v7; 
  unsigned int v8; 
  unsigned int v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 

  v4 = 0;
  v5 = 0;
  v6 = 0i64;
  v7 = 0;
  v8 = 0;
  if ( inlen )
  {
    v10 = 3;
    do
    {
      v11 = map_base64url[*in];
      if ( v11 == 0xFE )
      {
        ++v4;
      }
      else
      {
        if ( v4 > 0 || v11 == 0xFF )
          return 7i64;
        ++v7;
        v5 = v11 | (v5 << 6);
        if ( v7 == 4 )
        {
          if ( v10 > *outlen )
            return 6i64;
          v10 += 3;
          out[v6] = BYTE2(v5);
          v12 = (unsigned int)(v6 + 1);
          out[v12] = BYTE1(v5);
          v13 = (unsigned int)(v12 + 1);
          out[v13] = v5;
          v6 = (unsigned int)(v13 + 1);
          v5 = 0;
          v7 = 0;
        }
      }
      ++v8;
      ++in;
    }
    while ( v8 < inlen );
    if ( !v7 )
      goto LABEL_16;
    if ( v7 == 1 )
      return 7i64;
    v14 = v5 << (24 - 6 * v7);
    if ( (int)v6 + v7 - 1 > *outlen )
      return 6i64;
    out[v6] = BYTE2(v14);
    v6 = (unsigned int)(v6 + 1);
    if ( v7 == 3 )
    {
      out[v6] = BYTE1(v14);
      LODWORD(v6) = v6 + 1;
    }
  }
LABEL_16:
  *outlen = v6;
  return 0i64;
}

