/*
==============
der_length_bit_string
==============
*/
__int64 der_length_bit_string(unsigned int nbits, unsigned int *outlen)
{
  unsigned int v2; 

  v2 = (nbits >> 3) + ((nbits & 7) != 0) + 1;
  if ( v2 >= 0x80 )
  {
    if ( v2 >= 0x100 )
    {
      if ( v2 >= 0x10000 )
      {
        return 16i64;
      }
      else
      {
        *outlen = v2 + 4;
        return 0i64;
      }
    }
    else
    {
      *outlen = v2 + 3;
      return 0i64;
    }
  }
  else
  {
    *outlen = v2 + 2;
    return 0i64;
  }
}

