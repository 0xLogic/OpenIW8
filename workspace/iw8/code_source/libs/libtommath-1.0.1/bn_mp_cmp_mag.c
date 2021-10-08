/*
==============
mp_cmp_mag
==============
*/
__int64 mp_cmp_mag(mp_int *a, mp_int *b)
{
  __int64 used; 
  unsigned int *dp; 
  int v4; 
  unsigned int *v5; 
  char *v6; 

  used = a->used;
  if ( (int)used <= b->used )
  {
    if ( (int)used < b->used )
      return 0xFFFFFFFFi64;
    dp = a->dp;
    v4 = 0;
    v5 = &dp[used - 1];
    if ( (int)used <= 0 )
      return 0i64;
    v6 = (char *)((char *)b->dp - (char *)dp);
    while ( *v5 <= *(unsigned int *)((char *)v5 + (_QWORD)v6) )
    {
      if ( *v5 < *(unsigned int *)((char *)v5 + (_QWORD)v6) )
        return 0xFFFFFFFFi64;
      ++v4;
      --v5;
      if ( v4 >= (int)used )
        return 0i64;
    }
  }
  return 1i64;
}

