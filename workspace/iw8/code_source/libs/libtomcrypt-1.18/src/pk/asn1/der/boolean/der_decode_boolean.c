/*
==============
der_decode_boolean
==============
*/
__int64 der_decode_boolean(const unsigned __int8 *in, unsigned int inlen, int *out)
{
  unsigned __int8 v3; 

  if ( inlen < 3 )
    return 16i64;
  if ( *in != 1 )
    return 16i64;
  if ( in[1] != 1 )
    return 16i64;
  v3 = in[2];
  if ( ((v3 + 1) & 0xFE) != 0 )
    return 16i64;
  *out = v3 == 0xFF;
  return 0i64;
}

