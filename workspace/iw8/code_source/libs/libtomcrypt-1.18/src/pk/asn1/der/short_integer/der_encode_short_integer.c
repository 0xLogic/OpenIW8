/*
==============
der_encode_short_integer
==============
*/
int der_encode_short_integer(unsigned int num, unsigned __int8 *out, unsigned int *outlen)
{
  unsigned int v5; 
  int result; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  unsigned int outlena; 

  v5 = num;
  result = j_der_length_short_integer(num, &outlena);
  if ( !result )
  {
    if ( *outlen < outlena )
    {
      *outlen = outlena;
      return 6;
    }
    v7 = 0;
    v8 = v5;
    v9 = 0;
    if ( !v5 )
      goto LABEL_7;
    do
    {
      ++v9;
      v8 >>= 8;
    }
    while ( v8 );
    if ( !v9 )
LABEL_7:
      v9 = 1;
    v10 = _bittest((const int *)&v5, (unsigned __int8)(8 * v9 - 1)) + v9;
    if ( v10 <= 4 )
    {
      while ( v7 < 4 - v10 )
      {
        v5 <<= 8;
        ++v7;
      }
    }
    *out = 2;
    v11 = 2;
    out[1] = v10;
    if ( v10 == 5 )
    {
      v10 = 4;
      out[2] = 0;
      v11 = 3;
    }
    else if ( !v10 )
    {
LABEL_16:
      *outlen = v11;
      return 0;
    }
    v12 = v10;
    do
    {
      v13 = v11++;
      v14 = (unsigned __int64)v5 >> 24;
      v5 <<= 8;
      out[v13] = v14;
      --v12;
    }
    while ( v12 );
    goto LABEL_16;
  }
  return result;
}

