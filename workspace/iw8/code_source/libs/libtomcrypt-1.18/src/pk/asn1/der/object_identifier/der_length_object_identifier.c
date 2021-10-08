/*
==============
der_length_object_identifier
==============
*/
__int64 der_length_object_identifier(unsigned int *words, unsigned int nwords, unsigned int *outlen)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int i; 

  if ( nwords >= 2 )
  {
    v4 = *words;
    if ( *words <= 3 && (v4 >= 2 || words[1] <= 0x27) )
    {
      v5 = 0;
      v6 = 1;
      v7 = words[1] + 40 * v4;
      do
      {
        v8 = 0;
        for ( i = v7; i; i >>= 1 )
          ++v8;
        v5 += v8 / 7 + (v8 != 7 * (v8 / 7)) + (v7 == 0);
        if ( v6 < nwords - 1 )
          v7 = words[v6 + 1];
        ++v6;
      }
      while ( v6 < nwords );
      if ( v5 < 0x80 )
      {
        *outlen = v5 + 2;
        return 0i64;
      }
      if ( v5 < 0x100 )
      {
        *outlen = v5 + 3;
        return 0i64;
      }
      if ( v5 < 0x10000 )
      {
        *outlen = v5 + 4;
        return 0i64;
      }
    }
  }
  return 16i64;
}

/*
==============
der_object_identifier_bits
==============
*/
__int64 der_object_identifier_bits(unsigned int x)
{
  __int64 result; 

  for ( result = 0i64; x; x >>= 1 )
    result = (unsigned int)(result + 1);
  return result;
}

