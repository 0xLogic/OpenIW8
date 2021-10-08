/*
==============
der_encode_raw_bit_string
==============
*/
int der_encode_raw_bit_string(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  int result; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 v14; 
  unsigned __int64 v15; 
  int v16; 
  unsigned int outlena[10]; 

  result = j_der_length_bit_string(inlen, outlena);
  if ( !result )
  {
    if ( outlena[0] <= *outlen )
    {
      v9 = 0;
      *out = 3;
      v10 = (inlen >> 3) + ((inlen & 7) != 0) + 1;
      v11 = 1;
      if ( v10 >= 0x80 )
      {
        if ( v10 >= 0x100 )
        {
          if ( v10 < 0x10000 )
          {
            out[1] = -126;
            out[2] = BYTE1(v10);
            v11 = 4;
            out[3] = v10;
          }
        }
        else
        {
          out[1] = -127;
          v11 = 3;
          out[2] = v10;
        }
      }
      else
      {
        out[1] = v10;
        v11 = 2;
      }
      v12 = v11;
      v13 = v11 + 1;
      v14 = 0;
      out[v12] = -(char)inlen & 7;
      if ( inlen )
      {
        v15 = 0i64;
        do
        {
          v16 = v9 & 7;
          v14 |= ((unsigned __int8)(((1 << (7 - v16)) & in[v15 >> 3]) >> (7 - v16)) != 0) << (7 - v16);
          if ( v16 == 7 )
          {
            out[v13] = v14;
            v13 = (unsigned int)(v13 + 1);
            v14 = 0;
          }
          ++v9;
          ++v15;
        }
        while ( v9 < inlen );
      }
      if ( (inlen & 7) != 0 )
      {
        out[v13] = v14;
        LODWORD(v13) = v13 + 1;
      }
      *outlen = v13;
      return 0;
    }
    else
    {
      *outlen = outlena[0];
      return 6;
    }
  }
  return result;
}

