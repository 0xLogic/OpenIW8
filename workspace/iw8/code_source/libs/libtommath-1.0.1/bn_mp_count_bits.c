/*
==============
mp_count_bits
==============
*/
__int64 mp_count_bits(mp_int *a)
{
  __int64 used; 
  __int64 result; 
  unsigned int v3; 

  used = a->used;
  if ( !(_DWORD)used )
    return 0i64;
  v3 = a->dp[used - 1];
  for ( result = (unsigned int)(28 * used - 28); v3; v3 >>= 1 )
    result = (unsigned int)(result + 1);
  return result;
}

