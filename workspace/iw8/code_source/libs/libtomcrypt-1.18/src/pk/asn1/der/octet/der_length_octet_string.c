/*
==============
der_length_octet_string
==============
*/
__int64 der_length_octet_string(unsigned int noctets, unsigned int *outlen)
{
  if ( noctets >= 0x80 )
  {
    if ( noctets >= 0x100 )
    {
      if ( noctets >= 0x10000 )
      {
        if ( noctets >= 0x1000000 )
        {
          return 16i64;
        }
        else
        {
          *outlen = noctets + 5;
          return 0i64;
        }
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

