/*
==============
der_decode_octet_string
==============
*/
__int64 der_decode_octet_string(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  unsigned int v7; 
  int v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v13; 

  if ( inlen < 2 || (*in & 0x1F) != 4 )
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
  LODWORD(v9) = 0;
  v10 = 2;
  do
  {
    v11 = v10++;
    v9 = (unsigned int)in[v11] | ((_DWORD)v9 << 8);
    --v8;
  }
  while ( v8 );
LABEL_10:
  if ( (unsigned int)v9 > *outlen )
  {
    *outlen = v9;
    return 6i64;
  }
  if ( (unsigned int)v9 + v10 > inlen )
    return 7i64;
  if ( (_DWORD)v9 )
  {
    v7 = v9;
    do
    {
      v13 = v10;
      ++out;
      ++v10;
      *(out - 1) = in[v13];
      --v9;
    }
    while ( v9 );
  }
  *outlen = v7;
  return 0i64;
}

