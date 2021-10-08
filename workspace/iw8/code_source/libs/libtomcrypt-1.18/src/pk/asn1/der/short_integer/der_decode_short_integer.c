/*
==============
der_decode_short_integer
==============
*/
__int64 der_decode_short_integer(const unsigned __int8 *in, unsigned int inlen, unsigned int *num)
{
  int v3; 
  unsigned int v4; 
  int v5; 
  __int64 v6; 

  if ( inlen < 2 )
    return 7i64;
  if ( (*in & 0x1F) != 2 )
    return 7i64;
  v3 = in[1];
  v4 = 2;
  if ( v3 + 2 > inlen )
    return 7i64;
  v5 = 0;
  if ( in[1] )
  {
    do
    {
      v6 = v4++;
      v5 = in[v6] | (v5 << 8);
      --v3;
    }
    while ( v3 );
  }
  *num = v5;
  return 0i64;
}

