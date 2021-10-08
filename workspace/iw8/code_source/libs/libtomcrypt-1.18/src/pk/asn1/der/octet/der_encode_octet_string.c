/*
==============
der_encode_octet_string
==============
*/
int der_encode_octet_string(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  __int64 v4; 
  int result; 
  unsigned int v9; 
  __int64 v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  unsigned int outlena[6]; 

  v4 = inlen;
  result = j_der_length_octet_string(inlen, outlena);
  if ( !result )
  {
    if ( outlena[0] > *outlen )
    {
      *outlen = outlena[0];
      return 6;
    }
    *out = 4;
    if ( (unsigned int)v4 >= 0x80 )
    {
      if ( (unsigned int)v4 >= 0x100 )
      {
        if ( (unsigned int)v4 >= 0x10000 )
        {
          if ( (unsigned int)v4 >= 0x1000000 )
            return 16;
          out[1] = -125;
          v9 = 5;
          out[2] = BYTE2(v4);
          out[3] = BYTE1(v4);
          out[4] = v4;
        }
        else
        {
          out[1] = -126;
          v9 = 4;
          out[2] = BYTE1(v4);
          out[3] = v4;
        }
      }
      else
      {
        out[1] = -127;
        v9 = 3;
        out[2] = v4;
      }
    }
    else
    {
      out[1] = v4;
      v9 = 2;
    }
    if ( (_DWORD)v4 )
    {
      v10 = v4;
      do
      {
        v11 = *in++;
        v12 = v9++;
        out[v12] = v11;
        --v10;
      }
      while ( v10 );
    }
    *outlen = v9;
    return 0;
  }
  return result;
}

