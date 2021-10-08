/*
==============
mp_mul_2d
==============
*/
int mp_mul_2d(mp_int *a, int b, mp_int *c)
{
  int result; 
  int v6; 
  int v7; 
  unsigned int *dp; 
  int v9; 
  int v10; 
  unsigned int v11; 

  if ( a == c || (result = j_mp_copy(a, c)) == 0 )
  {
    v6 = b / 28 + c->used + 1;
    if ( (c->alloc >= v6 || (result = j_mp_grow(c, v6)) == 0) && (b < 28 || (result = j_mp_lshd(c, b / 28)) == 0) )
    {
      v7 = b % 28;
      if ( v7 )
      {
        dp = c->dp;
        v9 = 0;
        v10 = 0;
        if ( c->used > 0 )
        {
          do
          {
            v11 = *dp++;
            ++v10;
            *(dp - 1) = (v9 | (v11 << v7)) & 0xFFFFFFF;
            v9 = ((1 << v7) - 1) & (v11 >> (28 - v7));
          }
          while ( v10 < c->used );
          if ( v9 )
            c->dp[c->used++] = v9;
        }
      }
      j_mp_clamp(c);
      return 0;
    }
  }
  return result;
}

