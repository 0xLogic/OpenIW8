/*
==============
der_encode_ia5_string
==============
*/
int der_encode_ia5_string(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  __int64 v5; 
  const unsigned __int8 *v7; 
  int result; 
  unsigned int v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  unsigned int outlena[6]; 

  v5 = inlen;
  v7 = in;
  result = j_der_length_ia5_string(in, inlen, outlena);
  if ( !result )
  {
    if ( outlena[0] > *outlen )
    {
      *outlen = outlena[0];
      return 6;
    }
    *out = 22;
    if ( (unsigned int)v5 >= 0x80 )
    {
      if ( (unsigned int)v5 >= 0x100 )
      {
        if ( (unsigned int)v5 >= 0x10000 )
        {
          if ( (unsigned int)v5 >= 0x1000000 )
            return 16;
          out[1] = -125;
          v9 = 5;
          out[2] = BYTE2(v5);
          out[3] = BYTE1(v5);
          out[4] = v5;
        }
        else
        {
          out[1] = -126;
          v9 = 4;
          out[2] = BYTE1(v5);
          out[3] = v5;
        }
      }
      else
      {
        out[1] = -127;
        v9 = 3;
        out[2] = v5;
      }
    }
    else
    {
      out[1] = v5;
      v9 = 2;
    }
    if ( (_DWORD)v5 )
    {
      do
      {
        v10 = j_der_ia5_char_encode(*v7);
        v11 = v9;
        ++v7;
        ++v9;
        out[v11] = v10;
        --v5;
      }
      while ( v5 );
    }
    *outlen = v9;
    return 0;
  }
  return result;
}

