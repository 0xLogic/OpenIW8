/*
==============
mp_mul_2
==============
*/
int mp_mul_2(mp_int *a, mp_int *b)
{
  int v4; 
  int result; 
  int used; 
  unsigned int v7; 
  unsigned int *dp; 
  int v9; 
  int v10; 
  unsigned int *v11; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 
  unsigned int *v15; 
  __int64 i; 

  v4 = a->used + 1;
  if ( b->alloc >= v4 || (result = j_mp_grow(b, v4)) == 0 )
  {
    used = b->used;
    v7 = 0;
    dp = b->dp;
    v9 = 0;
    v10 = a->used;
    b->used = a->used;
    v11 = a->dp;
    if ( a->used > 0 )
    {
      do
      {
        v12 = *v11++;
        ++v9;
        v13 = (v7 | (2 * v12)) & 0xFFFFFFF;
        v7 = v12 >> 27;
        *dp++ = v13;
      }
      while ( v9 < a->used );
      v10 = b->used;
    }
    if ( v7 )
    {
      *dp = 1;
      v10 = ++b->used;
    }
    if ( v10 < used )
    {
      v14 = used - v10;
      v15 = &b->dp[v10];
      for ( i = v14; i; --i )
        *v15++ = 0;
    }
    b->sign = a->sign;
    return 0;
  }
  return result;
}

