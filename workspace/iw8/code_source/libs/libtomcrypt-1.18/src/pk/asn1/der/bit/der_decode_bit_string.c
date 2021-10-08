/*
==============
der_decode_bit_string
==============
*/
__int64 der_decode_bit_string(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  __int64 result; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  unsigned int v17; 

  if ( inlen < 4 )
    return 16i64;
  if ( (*in & 0x1F) != 3 )
    return 7i64;
  v8 = 0;
  v9 = in[1] & 0x7F;
  v10 = 2;
  if ( *((char *)in + 1) >= 0 )
  {
    v11 = in[1] & 0x7F;
  }
  else
  {
    if ( (unsigned int)(v9 - 1) > 1 )
      return 7i64;
    v11 = 0;
    do
    {
      v12 = v10++;
      v11 = in[v12] | (v11 << 8);
      --v9;
    }
    while ( v9 );
  }
  if ( !v11 || v11 + v10 > inlen )
    return 7i64;
  v13 = v10;
  v14 = v10 + 1;
  v15 = 8 * v11 - (in[v13] & 7) - 8;
  if ( v15 <= *outlen )
  {
    if ( 8 * v11 - (in[v13] & 7) != 8 )
    {
      do
      {
        ++out;
        v16 = v8++ & 7;
        *(out - 1) = ((unsigned __int8)(1 << (7 - v16)) & in[v14]) != 0;
        v17 = v14 + 1;
        if ( v16 != 7 )
          v17 = v14;
        v14 = v17;
      }
      while ( v8 < v15 );
    }
    result = 0i64;
    *outlen = v15;
  }
  else
  {
    result = 6i64;
    *outlen = v15;
  }
  return result;
}

