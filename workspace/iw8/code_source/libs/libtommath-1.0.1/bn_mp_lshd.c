/*
==============
mp_lshd
==============
*/
int mp_lshd(mp_int *a, int b)
{
  __int64 v2; 
  int v4; 
  int result; 
  __int64 used; 
  unsigned int *dp; 
  unsigned int *v8; 
  int v9; 
  unsigned int *v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int *v13; 
  __int64 i; 

  v2 = b;
  if ( b <= 0 )
    return 0;
  v4 = b + a->used;
  if ( a->alloc >= v4 || (result = j_mp_grow(a, v4)) == 0 )
  {
    a->used += v2;
    used = a->used;
    dp = a->dp;
    v8 = &dp[used - 1];
    v9 = used - 1;
    v10 = &dp[a->used - v2 - 1];
    if ( v9 >= (int)v2 )
    {
      v11 = (unsigned int)(v9 - v2 + 1);
      do
      {
        v12 = *v10--;
        *v8-- = v12;
        --v11;
      }
      while ( v11 );
      dp = a->dp;
    }
    if ( (int)v2 > 0 )
    {
      v13 = dp;
      for ( i = v2; i; --i )
        *v13++ = 0;
    }
    return 0;
  }
  return result;
}

