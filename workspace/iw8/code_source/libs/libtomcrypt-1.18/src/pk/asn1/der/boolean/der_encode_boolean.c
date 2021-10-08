/*
==============
der_encode_boolean
==============
*/
__int64 der_encode_boolean(int in, unsigned __int8 *out, unsigned int *outlen)
{
  unsigned int v3; 

  v3 = *outlen;
  *outlen = 3;
  if ( v3 < 3 )
    return 6i64;
  *(_WORD *)out = 257;
  out[2] = -(in != 0);
  return 0i64;
}

