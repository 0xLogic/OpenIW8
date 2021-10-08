/*
==============
der_length_short_integer
==============
*/
__int64 der_length_short_integer(unsigned int num, unsigned int *outlen)
{
  int v2; 
  int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 result; 

  v2 = 0;
  v4 = 0;
  v5 = num;
  if ( !num )
    goto LABEL_4;
  do
  {
    ++v4;
    v5 >>= 8;
  }
  while ( v5 );
  if ( !v4 )
LABEL_4:
    v4 = 1;
  LOBYTE(v2) = _bittest((const int *)&num, (unsigned __int8)(8 * v4 - 1));
  v6 = v4 + 2 + v2;
  result = 0i64;
  *outlen = v6;
  return result;
}

