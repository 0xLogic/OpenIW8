/*
==============
fast_s_mp_mul_high_digs
==============
*/
int fast_s_mp_mul_high_digs(mp_int *a, mp_int *b, mp_int *c, int digs)
{
  __int64 v5; 
  mp_int *v6; 
  int v7; 
  int result; 
  unsigned __int64 v10; 
  int v11; 
  __int64 v12; 
  int used; 
  __int64 v14; 
  int v15; 
  unsigned int *dp; 
  int v17; 
  unsigned int *v18; 
  int v19; 
  __int64 v20; 
  unsigned int *v21; 
  unsigned int *v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  unsigned int *v26; 
  int v27; 
  unsigned int *v28; 
  __int64 v29; 
  __int64 i; 
  int Src[512]; 

  v5 = digs;
  v6 = c;
  v7 = a->used + b->used;
  if ( c->alloc >= v7 || (result = j_mp_grow(c, v7)) == 0 )
  {
    v10 = 0i64;
    v11 = v5;
    v12 = v5;
    used = a->used;
    v14 = v5;
    v15 = a->used + b->used;
    if ( v5 < v15 )
    {
      dp = b->dp;
      v17 = b->used - 1;
      v18 = a->dp;
      do
      {
        v19 = v17;
        if ( v17 >= v11 )
          v19 = v11;
        v20 = (unsigned int)(used - (v11 - v19));
        v21 = &v18[v11 - v19];
        if ( (int)v20 >= v19 + 1 )
          v20 = (unsigned int)(v19 + 1);
        v22 = &dp[v19];
        if ( (int)v20 > 0 )
        {
          do
          {
            v23 = *v22--;
            v24 = *v21++;
            v10 += v24 * v23;
            --v20;
          }
          while ( v20 );
        }
        ++v11;
        v25 = v10 & 0xFFFFFFF;
        v10 >>= 28;
        Src[v12++] = v25;
      }
      while ( v12 < v15 );
      v6 = c;
      v14 = v5;
    }
    v26 = v6->dp;
    v27 = v6->used;
    v6->used = v15;
    v28 = &v26[v14];
    if ( v14 < v15 )
    {
      v29 = v15 - v14;
      memcpy_0(&v26[v14], &Src[v14], 4 * v29);
      LODWORD(v5) = v29 + v5;
      v28 += v29;
    }
    if ( (int)v5 < v27 )
    {
      for ( i = v27 - (int)v5; i; --i )
        *v28++ = 0;
    }
    j_mp_clamp(v6);
    return 0;
  }
  return result;
}

