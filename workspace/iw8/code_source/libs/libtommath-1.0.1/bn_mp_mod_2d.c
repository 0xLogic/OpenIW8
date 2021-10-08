/*
==============
mp_mod_2d
==============
*/
__int64 mp_mod_2d(mp_int *a, int b, mp_int *c)
{
  int used; 
  unsigned int v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  unsigned int *v11; 

  if ( b > 0 )
  {
    used = a->used;
    v7 = j_mp_copy(a, c);
    if ( b >= 28 * used || v7 )
    {
      return v7;
    }
    else
    {
      v8 = b / 28;
      v9 = v8 + (b != 28 * v8);
      if ( v9 < c->used )
      {
        v10 = v9;
        do
        {
          ++v10;
          ++v9;
          c->dp[v10 - 1] = 0;
        }
        while ( v9 < c->used );
      }
      v11 = &c->dp[v8];
      *v11 &= (1 << (b % 0x1Cu)) - 1;
      j_mp_clamp(c);
      return 0i64;
    }
  }
  else
  {
    j_mp_zero(c);
    return 0i64;
  }
}

