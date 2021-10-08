/*
==============
der_decode_object_identifier
==============
*/
__int64 der_decode_object_identifier(const unsigned __int8 *in, unsigned int inlen, unsigned int *words, unsigned int *outlen)
{
  unsigned __int8 v7; 
  int v8; 
  unsigned int v9; 
  int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  char v15; 
  __int64 v16; 

  if ( inlen < 3 )
    return 7i64;
  if ( *outlen < 2 )
    return 6i64;
  if ( (*in & 0x1F) != 6 )
    return 7i64;
  v7 = in[1];
  if ( v7 >= 0x80u )
  {
    if ( (unsigned __int8)(v7 + 127) > 1u )
      return 7i64;
    v8 = 0;
    v9 = 2;
    v10 = v7 & 0x7F;
    if ( (v7 & 0x7F) == 0 )
      return 7i64;
    do
    {
      v11 = v9++;
      v8 = in[v11] | (v8 << 8);
      --v10;
    }
    while ( v10 );
  }
  else
  {
    v8 = v7;
    v9 = 2;
  }
  if ( !v8 || v8 + v9 > inlen )
    return 7i64;
  v12 = 0;
  v13 = 0;
  do
  {
    v14 = v9;
    --v8;
    ++v9;
    v15 = in[v14];
    v13 = (v13 << 7) | v15 & 0x7F;
    if ( v15 >= 0 )
    {
      if ( v12 >= *outlen )
        return 6i64;
      if ( v12 )
      {
        v16 = v12++;
        words[v16] = v13;
      }
      else
      {
        v12 = 2;
        *words = v13 / 0x28;
        words[1] = v13 % 0x28;
      }
      v13 = 0;
    }
  }
  while ( v8 );
  *outlen = v12;
  return 0i64;
}

