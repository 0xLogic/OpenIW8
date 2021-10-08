/*
==============
s_mp_mul_digs
==============
*/
int s_mp_mul_digs(mp_int *a, mp_int *b, mp_int *c, int digs)
{
  int used; 
  int result; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  unsigned __int64 v13; 
  int v14; 
  unsigned int *dp; 
  int v16; 
  unsigned int *v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  mp_int aa; 

  if ( digs < 512 )
  {
    used = a->used;
    if ( a->used >= b->used )
      used = b->used;
    if ( used < 256 )
      return j_fast_s_mp_mul_digs(a, b, c, digs);
  }
  result = j_mp_init_size(&aa, digs);
  if ( !result )
  {
    v9 = 0;
    v10 = a->used;
    aa.used = digs;
    if ( v10 > 0 )
    {
      v11 = 0i64;
      v12 = digs;
      do
      {
        LODWORD(v13) = 0;
        v14 = b->used;
        dp = b->dp;
        if ( b->used >= v12 )
          v14 = v12;
        v16 = 0;
        v17 = &aa.dp[v9];
        if ( v14 > 0 )
        {
          v18 = a->dp[v11];
          do
          {
            ++v16;
            v19 = *dp++;
            v20 = (unsigned int)v13 + *v17 + v18 * v19;
            v13 = v20 >> 28;
            *v17++ = v20 & 0xFFFFFFF;
          }
          while ( v16 < v14 );
        }
        if ( v16 + v9 < digs )
          *v17 = v13;
        ++v9;
        --v12;
        ++v11;
      }
      while ( v11 < v10 );
    }
    j_mp_clamp(&aa);
    j_mp_exch(&aa, c);
    j_mp_clear(&aa);
    return 0;
  }
  return result;
}

