/*
==============
der_decode_printable_string
==============
*/
__int64 der_decode_printable_string(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  int v13; 

  if ( inlen < 2 || (*in & 0x1F) != 19 )
    return 7i64;
  v7 = 0;
  v8 = in[1] & 0x7F;
  if ( *((char *)in + 1) >= 0 )
  {
    v9 = in[1] & 0x7F;
    v10 = 2;
    goto LABEL_10;
  }
  if ( (unsigned int)(v8 - 1) > 2 || v8 + 1 > inlen )
    return 7i64;
  v9 = 0;
  v10 = 2;
  do
  {
    v11 = v10++;
    v9 = in[v11] | (v9 << 8);
    --v8;
  }
  while ( v8 );
LABEL_10:
  if ( v9 > *outlen )
  {
    *outlen = v9;
    return 6i64;
  }
  if ( v9 + v10 > inlen )
    return 7i64;
  if ( v9 )
  {
    while ( 1 )
    {
      v13 = j_der_printable_value_decode(in[v10++]);
      if ( v13 == -1 )
        return 16i64;
      *out = v13;
      ++v7;
      ++out;
      if ( v7 >= v9 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    *outlen = v7;
    return 0i64;
  }
}

