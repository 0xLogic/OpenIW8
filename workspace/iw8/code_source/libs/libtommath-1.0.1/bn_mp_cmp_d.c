/*
==============
mp_cmp_d
==============
*/
__int64 mp_cmp_d(mp_int *a, unsigned int b)
{
  unsigned int *dp; 

  if ( a->sign != 1 )
  {
    if ( a->used > 1 )
      return 1i64;
    dp = a->dp;
    if ( *dp > b )
      return 1i64;
    if ( *dp >= b )
      return 0i64;
  }
  return 0xFFFFFFFFi64;
}

