/*
==============
pkcs_1_v1_5_decode
==============
*/
__int64 pkcs_1_v1_5_decode(const unsigned __int8 *msg, unsigned int msglen, int block_type, unsigned int modulus_bitlen, unsigned __int8 *out, unsigned int *outlen, int *is_valid)
{
  unsigned int v7; 
  unsigned int v9; 
  unsigned int v10; 
  const unsigned __int8 *v11; 
  unsigned int v12; 
  unsigned int v13; 
  const unsigned __int8 *v14; 
  unsigned int v15; 

  v7 = 0;
  v9 = (modulus_bitlen >> 3) + ((modulus_bitlen & 7) != 0);
  *is_valid = 0;
  if ( msglen > v9 || v9 < 0xB )
    return 22i64;
  if ( *msg || msg[1] != (_BYTE)block_type )
    v7 = 7;
  v10 = 2;
  if ( block_type == 2 )
  {
    v11 = msg + 2;
    do
    {
      if ( !*v11 )
        break;
      ++v10;
      ++v11;
    }
    while ( v10 < v9 );
    v12 = v10 - 2;
    if ( v10 + 1 >= v9 )
      v7 = 7;
  }
  else
  {
    v13 = v9 - 1;
    if ( v13 > 2 )
    {
      v14 = msg + 2;
      do
      {
        if ( *v14 != 0xFF )
          break;
        ++v10;
        ++v14;
      }
      while ( v10 < v13 );
    }
    v12 = v10 - 2;
    if ( msg[v10] )
      v7 = 7;
  }
  if ( v12 < 8 )
    v7 = 7;
  v15 = msglen - v12 - 3;
  if ( *outlen < v15 )
    return 7i64;
  if ( !v7 )
  {
    *outlen = v15;
    memcpy_0(out, &msg[v12 + 3], v15);
    *is_valid = 1;
  }
  return v7;
}

