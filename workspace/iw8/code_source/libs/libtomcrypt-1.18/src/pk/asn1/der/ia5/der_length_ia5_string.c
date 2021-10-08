/*
==============
der_ia5_char_encode
==============
*/
__int64 der_ia5_char_encode(int c)
{
  int v1; 
  const const struct {int code;int value;} *v2; 

  v1 = 0;
  v2 = ia5_table;
  while ( v2->code != c )
  {
    ++v1;
    if ( (__int64)++v2 >= (__int64)&unk_144733740 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)ia5_table[v1].value;
}

/*
==============
der_ia5_value_decode
==============
*/
__int64 der_ia5_value_decode(int v)
{
  int v1; 
  int *p_value; 

  v1 = 0;
  p_value = &ia5_table[0].value;
  while ( *p_value != v )
  {
    ++v1;
    p_value += 2;
    if ( (__int64)p_value >= (__int64)&unk_144733744 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)ia5_table[v1].code;
}

/*
==============
der_length_ia5_string
==============
*/
__int64 der_length_ia5_string(const unsigned __int8 *octets, unsigned int noctets, unsigned int *outlen)
{
  unsigned int i; 
  __int64 v4; 

  for ( i = 0; i < noctets; ++octets )
  {
    v4 = 0i64;
    while ( ia5_table[v4].code != *octets )
    {
      if ( ++v4 >= 102 )
        return 16i64;
    }
    if ( ia5_table[v4].value == -1 )
      return 16i64;
    ++i;
  }
  if ( noctets >= 0x80 )
  {
    if ( noctets >= 0x100 )
    {
      if ( noctets >= 0x10000 )
      {
        if ( noctets >= 0x1000000 )
          return 16i64;
        *outlen = noctets + 5;
        return 0i64;
      }
      else
      {
        *outlen = noctets + 4;
        return 0i64;
      }
    }
    else
    {
      *outlen = noctets + 3;
      return 0i64;
    }
  }
  else
  {
    *outlen = noctets + 2;
    return 0i64;
  }
}

