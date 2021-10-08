/*
==============
s_mp_mul_high_digs
==============
*/
int s_mp_mul_high_digs(mp_int *a, mp_int *b, mp_int *c, int digs)
{
  int used; 
  int v6; 
  mp_int *v7; 
  __int64 v8; 
  int v10; 
  int result; 
  __int64 v12; 
  int v13; 
  int v14; 
  __int64 i; 
  unsigned __int64 v16; 
  __int64 v17; 
  unsigned int *v18; 
  unsigned int *v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  mp_int aa; 

  used = a->used;
  v6 = b->used;
  v7 = c;
  v8 = digs;
  v10 = b->used + a->used + 1;
  if ( v10 < 512 )
  {
    if ( used >= v6 )
      used = v6;
    if ( used < 256 )
      return j_fast_s_mp_mul_high_digs(a, b, c, digs);
  }
  result = j_mp_init_size(&aa, v10);
  if ( !result )
  {
    v12 = a->used;
    v13 = b->used;
    v14 = 0;
    aa.used = b->used + v12 + 1;
    if ( (int)v12 > 0 )
    {
      for ( i = 0i64; i < v12; ++i )
      {
        LODWORD(v16) = 0;
        v17 = a->dp[i];
        v18 = &aa.dp[v8];
        v19 = &b->dp[(int)v8 - v14];
        if ( (int)v8 - v14 < v13 )
        {
          v20 = (unsigned int)(v13 - (v8 - v14));
          do
          {
            v21 = *v19++;
            v22 = (unsigned int)v16 + *v18 + v17 * v21;
            v16 = v22 >> 28;
            *v18++ = v22 & 0xFFFFFFF;
            --v20;
          }
          while ( v20 );
        }
        ++v14;
        *v18 = v16;
      }
      v7 = c;
    }
    j_mp_clamp(&aa);
    j_mp_exch(&aa, v7);
    j_mp_clear(&aa);
    return 0;
  }
  return result;
}

