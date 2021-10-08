/*
==============
der_length_utf8_string
==============
*/
__int64 der_length_utf8_string(const wchar_t *in, unsigned int noctets, unsigned int *outlen)
{
  unsigned int v3; 
  __int64 v4; 
  int v5; 

  v3 = 0;
  if ( !noctets )
    goto LABEL_15;
  v4 = noctets;
  do
  {
    if ( *in > 0x7Fu )
      v5 = (*in > 0x7FFu) + 2;
    else
      v5 = 1;
    v3 += v5;
    ++in;
    --v4;
  }
  while ( v4 );
  if ( v3 >= 0x80 )
  {
    if ( v3 >= 0x100 )
    {
      if ( v3 >= 0x10000 )
      {
        if ( v3 >= 0x1000000 )
        {
          return 16i64;
        }
        else
        {
          *outlen = v3 + 5;
          return 0i64;
        }
      }
      else
      {
        *outlen = v3 + 4;
        return 0i64;
      }
    }
    else
    {
      *outlen = v3 + 3;
      return 0i64;
    }
  }
  else
  {
LABEL_15:
    *outlen = v3 + 2;
    return 0i64;
  }
}

/*
==============
der_utf8_charsize
==============
*/
__int64 der_utf8_charsize(const wchar_t c)
{
  if ( c > 0x7Fu )
    return (unsigned int)(c > 0x7FFu) + 2;
  else
    return 1i64;
}

/*
==============
der_utf8_valid_char
==============
*/
__int64 der_utf8_valid_char(const wchar_t c)
{
  return 1i64;
}

